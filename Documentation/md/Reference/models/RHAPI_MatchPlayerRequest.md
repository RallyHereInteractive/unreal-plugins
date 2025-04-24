---
title: RHAPI_MatchPlayerRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchPlayerRequest`](#structFRHAPI__MatchPlayerRequest) | 

## struct `FRHAPI_MatchPlayerRequest` <a id="structFRHAPI__MatchPlayerRequest"></a>

```
struct FRHAPI_MatchPlayerRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__MatchPlayerRequest_1a19837cde1f9227e0cdd8322434238401) | 
`public bool `[`PlayerUuid_IsSet`](#structFRHAPI__MatchPlayerRequest_1a17dc9b16583934a5636848577aa00671) | true if PlayerUuid_Optional has been set to a value
`public FString `[`TeamId_Optional`](#structFRHAPI__MatchPlayerRequest_1a6f9786cc22ffb6cd45f99aeb36e98d37) | 
`public bool `[`TeamId_IsSet`](#structFRHAPI__MatchPlayerRequest_1a0c85d4442ade79f01db4e5176db44d67) | true if TeamId_Optional has been set to a value
`public bool `[`TeamId_IsNull`](#structFRHAPI__MatchPlayerRequest_1a5a4521ef2914032f50f8ee622f785e7c) | true if TeamId_Optional has been explicitly set to null
`public FString `[`PartySessionId_Optional`](#structFRHAPI__MatchPlayerRequest_1a2ef92bb2358c51fa6851d74f260a6d5c) | 
`public bool `[`PartySessionId_IsSet`](#structFRHAPI__MatchPlayerRequest_1af38f016a761b9849266d04bbe04924e5) | true if PartySessionId_Optional has been set to a value
`public bool `[`PartySessionId_IsNull`](#structFRHAPI__MatchPlayerRequest_1a3a7cc5292dcd3eb79d1d7677f121ab17) | true if PartySessionId_Optional has been explicitly set to null
`public int32 `[`Placement_Optional`](#structFRHAPI__MatchPlayerRequest_1a3afeeb5050e5bc604474aff49dd23b56) | 
`public bool `[`Placement_IsSet`](#structFRHAPI__MatchPlayerRequest_1ab798c4399774bc1cdab2cdbd0a74d0d2) | true if Placement_Optional has been set to a value
`public bool `[`Placement_IsNull`](#structFRHAPI__MatchPlayerRequest_1ac95713e9fcd5c5dea19e0f8644af8cc6) | true if Placement_Optional has been explicitly set to null
`public FDateTime `[`JoinedMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerRequest_1aff3e4b6156388d0a7b15ffee378359ee) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`JoinedMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerRequest_1acfa8f6feefaa4951432829440eb1ad6e) | true if JoinedMatchTimestamp_Optional has been set to a value
`public bool `[`JoinedMatchTimestamp_IsNull`](#structFRHAPI__MatchPlayerRequest_1ad8c8c26a171047e6961a4beac14e501b) | true if JoinedMatchTimestamp_Optional has been explicitly set to null
`public FDateTime `[`LeftMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerRequest_1a185604bb9817a47698f0ad489f2722fd) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`LeftMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerRequest_1a47585d085f6ae5937158aa7dac92d82a) | true if LeftMatchTimestamp_Optional has been set to a value
`public bool `[`LeftMatchTimestamp_IsNull`](#structFRHAPI__MatchPlayerRequest_1a9f9ed2601b575a57a44addd87bb9a454) | true if LeftMatchTimestamp_Optional has been explicitly set to null
`public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchPlayerRequest_1a5286c32827ae4aeda194d5cd9f823430) | 
`public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchPlayerRequest_1af6f99b261646e6d2bb8af922b3a071b0) | true if DurationSeconds_Optional has been set to a value
`public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchPlayerRequest_1a9419074938ddf55d06aa82a53ae4aa9c) | true if DurationSeconds_Optional has been explicitly set to null
`public FString `[`StartingRank_Optional`](#structFRHAPI__MatchPlayerRequest_1ae26efcdbda6faff8dd9581b048505119) | 
`public bool `[`StartingRank_IsSet`](#structFRHAPI__MatchPlayerRequest_1ada11c7111ad81637caa5854764ac6ea9) | true if StartingRank_Optional has been set to a value
`public bool `[`StartingRank_IsNull`](#structFRHAPI__MatchPlayerRequest_1a2de841875a1ea93ee934f27ed055e4ca) | true if StartingRank_Optional has been explicitly set to null
`public FString `[`FinishingRank_Optional`](#structFRHAPI__MatchPlayerRequest_1a9ada697ca2218908ff247e899d44a914) | 
`public bool `[`FinishingRank_IsSet`](#structFRHAPI__MatchPlayerRequest_1ac792f9f7b607999e92b51be18935ccc1) | true if FinishingRank_Optional has been set to a value
`public bool `[`FinishingRank_IsNull`](#structFRHAPI__MatchPlayerRequest_1a3dcaa91ed48cb10d3a15be0acd3563b8) | true if FinishingRank_Optional has been explicitly set to null
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchPlayerRequest_1a43ede4607eca8ce3e5246775533f0f80) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchPlayerRequest_1abd3d0ad7bb274b4e8696d1c3464991f0) | true if CustomData_Optional has been set to a value
`public bool `[`CustomData_IsNull`](#structFRHAPI__MatchPlayerRequest_1af35cd08d3c30ac325b9366e600a5a049) | true if CustomData_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__MatchPlayerRequest_1a4df8cd6e6aa661d6bdd39816ac778585)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchPlayerRequest_1ac54b88425199a63826378177fe88afe7)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a8f2fc6826f1269a0db3419d623478e11)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a04c8f2b114864d7d6ad56b738cf437bb)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a88ec4a5b3321057030ca5b21abc42e20)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a7b6afec15e4e962bca2347ff25e9dac5)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerRequest_1a62ef850379c5b887fc2e2a61763f403a)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerRequest_1ab4bd58ae0ac641ac93f654c960608109)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a522cc957db1be11e6e6ce4857deb8e51)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a3f8f9471181c17cf326224d7ccc8ef99)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1af7600dc9faf86973faea9b5d17151ed7)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__MatchPlayerRequest_1a612bc8e207d9fc7dff1acbe3a4f9f590)`() const` | Checks whether PlayerUuid_Optional has been set.
`public inline FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1ad1c124742819dd3f509252eb8d5b44bd)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1aafbf8fcfe8fdf38c5a3419facde207af)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1ac8eae43137d6e115d5cf7257364ee94a)`(const FString & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1aa0c34d13e6684b42c43994d0ba6c9d1a)`(FString & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerRequest_1a5aaf708761900c0408926d68d457c0fd)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerRequest_1accae76611670807209106f6bf8597994)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeamId`](#structFRHAPI__MatchPlayerRequest_1aaa0e3581e441a6c3b204fefe9b3e7794)`(const FString & NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline void `[`SetTeamId`](#structFRHAPI__MatchPlayerRequest_1ab70d53d9c18e622799d0e68abeb30146)`(FString && NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.
`public inline void `[`ClearTeamId`](#structFRHAPI__MatchPlayerRequest_1aefa5628a36827c2102a8ec55e61eeef9)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline bool `[`IsTeamIdSet`](#structFRHAPI__MatchPlayerRequest_1ac0cc865cb23c7936e78d248a8b02b1e9)`() const` | Checks whether TeamId_Optional has been set.
`public inline void `[`SetTeamIdToNull`](#structFRHAPI__MatchPlayerRequest_1a9c8ae82306e4f749d9228de851eb5ff6)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsTeamIdNull`](#structFRHAPI__MatchPlayerRequest_1a75a21acafe4e519c6c114d04b23e3143)`() const` | Checks whether TeamId_Optional is set to null.
`public inline FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1a806bc5e443152fc305756e77bc89891e)`()` | Gets the value of PartySessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1a606295d8e6019477cb2d6e9674f2f2f4)`() const` | Gets the value of PartySessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1ac661a12a0fbe471652c3a6b793d0d312)`(const FString & DefaultValue) const` | Gets the value of PartySessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1ade94eb59f3515da1b8cf6897fb0a865a)`(FString & OutValue) const` | Fills OutValue with the value of PartySessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerRequest_1a5808d98573f6d4025306e136aee3c84b)`()` | Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerRequest_1aed96c6fc28669349217e9832d3aa7739)`() const` | Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1af49db4e29b44dc82d97931966bcb507e)`(const FString & NewValue)` | Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true.
`public inline void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1a26e5f4bb882c2c4540f5fc271555824a)`(FString && NewValue)` | Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true using move semantics.
`public inline void `[`ClearPartySessionId`](#structFRHAPI__MatchPlayerRequest_1aad5ea0198ca5b049f88db6120c546a86)`()` | Clears the value of PartySessionId_Optional and sets PartySessionId_IsSet to false.
`public inline bool `[`IsPartySessionIdSet`](#structFRHAPI__MatchPlayerRequest_1a3498aba3973d77e595e06d07c9c02122)`() const` | Checks whether PartySessionId_Optional has been set.
`public inline void `[`SetPartySessionIdToNull`](#structFRHAPI__MatchPlayerRequest_1accf7053e11dec7fe0f08a364230c32c0)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPartySessionIdNull`](#structFRHAPI__MatchPlayerRequest_1af8c4d5fa1b7cd97687d478d34feddcca)`() const` | Checks whether PartySessionId_Optional is set to null.
`public inline int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a00cda2dc0c8953a4dfd52a41ae281bfd)`()` | Gets the value of Placement_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a007ddf4c4a2c60385f6424cc71a93f12)`() const` | Gets the value of Placement_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a560167b181b467d3c2a7da683360d185)`(const int32 & DefaultValue) const` | Gets the value of Placement_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a95da398964b5a89b5231bead87af77bf)`(int32 & OutValue) const` | Fills OutValue with the value of Placement_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerRequest_1a07271ac81b64d80d0a49051d6da7fb2d)`()` | Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerRequest_1aebb4f0353f217411446fa393206da2ff)`() const` | Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlacement`](#structFRHAPI__MatchPlayerRequest_1aa3e8dfc71ade07a335cc25a98e6367e4)`(const int32 & NewValue)` | Sets the value of Placement_Optional and also sets Placement_IsSet to true.
`public inline void `[`SetPlacement`](#structFRHAPI__MatchPlayerRequest_1aa8d62447bc58843a5d6fef045325cd1f)`(int32 && NewValue)` | Sets the value of Placement_Optional and also sets Placement_IsSet to true using move semantics.
`public inline void `[`ClearPlacement`](#structFRHAPI__MatchPlayerRequest_1a07be11fc0fbca570184e8d61e8c48a15)`()` | Clears the value of Placement_Optional and sets Placement_IsSet to false.
`public inline bool `[`IsPlacementSet`](#structFRHAPI__MatchPlayerRequest_1a7996b69fff34feb80e8e9b3dfdf8cde8)`() const` | Checks whether Placement_Optional has been set.
`public inline bool `[`IsPlacementDefaultValue`](#structFRHAPI__MatchPlayerRequest_1a7ef74fc2e38fd684d932dd3e0826daa5)`() const` | Returns true if Placement_Optional is set and matches the default value.
`public inline void `[`SetPlacementToDefault`](#structFRHAPI__MatchPlayerRequest_1ade059dc2e57371cd072f042b5ebaabc1)`()` | Sets the value of Placement_Optional to its default and also sets Placement_IsSet to true.
`public inline void `[`SetPlacementToNull`](#structFRHAPI__MatchPlayerRequest_1abe91841cb4801ddb5f49da79141520cd)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsPlacementNull`](#structFRHAPI__MatchPlayerRequest_1abca43fcaed1a2a35085c418d002dcc4a)`() const` | Checks whether Placement_Optional is set to null.
`public inline FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a14acc272fb3930d07de6838c7dacff69)`()` | Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ac096c61098b2babbd88b651e178fb841)`() const` | Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a212ee27bc8393140c0d511b1089da9d9)`(const FDateTime & DefaultValue) const` | Gets the value of JoinedMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ad049fd54502b594a70470a3c4d436846)`(FDateTime & OutValue) const` | Fills OutValue with the value of JoinedMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1a2c5fea0fbe4242bc394d97addccd9e45)`()` | Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1adf1d5eca25eef4dbd36b0b502db23a93)`() const` | Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a184dfd9a3d6c64d8e00c481be3d9a04f)`(const FDateTime & NewValue)` | Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true.
`public inline void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a07b76ed4413062396527ae9f7007491b)`(FDateTime && NewValue)` | Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ab303cc0316fa560623b9c0f249d4511a)`()` | Clears the value of JoinedMatchTimestamp_Optional and sets JoinedMatchTimestamp_IsSet to false.
`public inline bool `[`IsJoinedMatchTimestampSet`](#structFRHAPI__MatchPlayerRequest_1aeafd52cd21772e6408e4fdef223d851d)`() const` | Checks whether JoinedMatchTimestamp_Optional has been set.
`public inline void `[`SetJoinedMatchTimestampToNull`](#structFRHAPI__MatchPlayerRequest_1ac261daaa249ae1f9ff20f57abae14d80)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsJoinedMatchTimestampNull`](#structFRHAPI__MatchPlayerRequest_1aa23f57bb199f144d3960a64314639836)`() const` | Checks whether JoinedMatchTimestamp_Optional is set to null.
`public inline FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a4390729dc0792b746bc57883c7f915bb)`()` | Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a35eb0497e611a529c54cf1b00f8c2550)`() const` | Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a58345574d38df0ce21721604228cbb67)`(const FDateTime & DefaultValue) const` | Gets the value of LeftMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1abc4cfd1faca6c0893b1d4b4c0ea28bc4)`(FDateTime & OutValue) const` | Fills OutValue with the value of LeftMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1af335e8a0a98f22c8c0fc8193ac535e57)`()` | Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1a9438279a5adddcea0c036f0b84019d86)`() const` | Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a3c68ff83ce6470bad6cd369465186973)`(const FDateTime & NewValue)` | Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true.
`public inline void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ab0937ed242d1e30210968deeca4e9d45)`(FDateTime && NewValue)` | Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a92c521151fc4476568e2d5165fc66b0e)`()` | Clears the value of LeftMatchTimestamp_Optional and sets LeftMatchTimestamp_IsSet to false.
`public inline bool `[`IsLeftMatchTimestampSet`](#structFRHAPI__MatchPlayerRequest_1af3361963202bc23daf600632ccd6e458)`() const` | Checks whether LeftMatchTimestamp_Optional has been set.
`public inline void `[`SetLeftMatchTimestampToNull`](#structFRHAPI__MatchPlayerRequest_1af731ccd28a7d0353d49644651218221e)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsLeftMatchTimestampNull`](#structFRHAPI__MatchPlayerRequest_1a91e7a1f322b76e0b30bcd6511bc6b6d8)`() const` | Checks whether LeftMatchTimestamp_Optional is set to null.
`public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a81974c41a5a7eeaf1b0b0b7a39fcd9ae)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a3f7e9e7f079cbce08715363061c36f1c)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a2fcd3398b13da3dda9b3e7634d7e64cd)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a50bcb5ed68b22d8583f6bd2b42322bec)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerRequest_1a78c6ae51fb528b5d041bf62adbf85ba2)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerRequest_1a85f11f6544a8d500c82cf5b2ea965c74)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a43fb89ebf062a9a8497b55518e7e8056)`(const int32 & NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a2ff4acb213d774fbdca900d88d3f6ce0)`(int32 && NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1ab4142426744f327826ef80f70e48dfef)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline bool `[`IsDurationSecondsSet`](#structFRHAPI__MatchPlayerRequest_1a7321d9da46bff21b5a4143a8aafe4fc6)`() const` | Checks whether DurationSeconds_Optional has been set.
`public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchPlayerRequest_1acea250e4524212d6c030295aef2ba7d3)`() const` | Returns true if DurationSeconds_Optional is set and matches the default value.
`public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchPlayerRequest_1a171c171c251e320b1f9315ba4d75feec)`()` | Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.
`public inline void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchPlayerRequest_1a473085d08715f43d73739190a7e5e44f)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchPlayerRequest_1abda0c34d34ec855841206a5d82833974)`() const` | Checks whether DurationSeconds_Optional is set to null.
`public inline FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a2c7bba25fe728ece6bd9ec316ef357e2)`()` | Gets the value of StartingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1af11bb807c5b3c7267060c200939fce57)`() const` | Gets the value of StartingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a02be5df63b3e7e8d092aec62434627f2)`(const FString & DefaultValue) const` | Gets the value of StartingRank_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1aaa1c89b440e5f5e52b50f4548a85d3b2)`(FString & OutValue) const` | Fills OutValue with the value of StartingRank_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1ae76a7d62c903ece7dfb5b724fee783fd)`()` | Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1a1d1124ce4d0449c838707cd7d359c3a5)`() const` | Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a82346fc086303c96f11a9a91abbea417)`(const FString & NewValue)` | Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true.
`public inline void `[`SetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a1dc16c0fd2410c308c17bc9f8de084b0)`(FString && NewValue)` | Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true using move semantics.
`public inline void `[`ClearStartingRank`](#structFRHAPI__MatchPlayerRequest_1a40de89ab1caa51c9c7b1025708bdc120)`()` | Clears the value of StartingRank_Optional and sets StartingRank_IsSet to false.
`public inline bool `[`IsStartingRankSet`](#structFRHAPI__MatchPlayerRequest_1a36c0bf71570cc71381e3c9cefaa48756)`() const` | Checks whether StartingRank_Optional has been set.
`public inline void `[`SetStartingRankToNull`](#structFRHAPI__MatchPlayerRequest_1a2b49b7063ab16ded09ec66d4ab2adf95)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStartingRankNull`](#structFRHAPI__MatchPlayerRequest_1afb862e63264d86e5265e99153bec4240)`() const` | Checks whether StartingRank_Optional is set to null.
`public inline FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1ab1be2101f15082009196ed2f2471bc76)`()` | Gets the value of FinishingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1af98f99c1bdf9f19bcd129d665dc16543)`() const` | Gets the value of FinishingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1afc41ccdf41f60ba140c6e6c80493fe5f)`(const FString & DefaultValue) const` | Gets the value of FinishingRank_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1ae01c5c243910f32af4e86d3ca595745f)`(FString & OutValue) const` | Fills OutValue with the value of FinishingRank_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1ab5f7bcadcf0e3af6b82732cb48f00213)`()` | Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1af9b5c58bd75905a1fe061a3691109455)`() const` | Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a9f9a9e291a6f787acf282ce206c504e6)`(const FString & NewValue)` | Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true.
`public inline void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a6ecb1c2fde580c0409fb17f82d054e1f)`(FString && NewValue)` | Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true using move semantics.
`public inline void `[`ClearFinishingRank`](#structFRHAPI__MatchPlayerRequest_1ae238318fe913dd80eca373607546ba5d)`()` | Clears the value of FinishingRank_Optional and sets FinishingRank_IsSet to false.
`public inline bool `[`IsFinishingRankSet`](#structFRHAPI__MatchPlayerRequest_1a362803c0f0d5855ade1db57c41d687d2)`() const` | Checks whether FinishingRank_Optional has been set.
`public inline void `[`SetFinishingRankToNull`](#structFRHAPI__MatchPlayerRequest_1a383ec44a2479d13dc9e2ea91d9573c33)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsFinishingRankNull`](#structFRHAPI__MatchPlayerRequest_1ae57567c37ac72d78372bd7c02e3a37db)`() const` | Checks whether FinishingRank_Optional is set to null.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1a2f2ec9aa017a275cabd4a08d91faf017)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1afc1f8db9d1a34b50be431cb4bd19a37e)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1a6e0d4504454ce2357be685519484c510)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1a42e88a26da5c27535c69749ae99409c1)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerRequest_1a97a9f47e052848131e4f05de37ec420e)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerRequest_1a15c41e6628cead6ad754eba06e289298)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchPlayerRequest_1adc44293ee8006d4134d2fb679b36e832)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchPlayerRequest_1a441ef1a253f1dcf25df723979dab70e9)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchPlayerRequest_1a8793720a3f715e2147e638848d4281dd)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchPlayerRequest_1aff59066543bc08b1748590b7d86e9635)`() const` | Checks whether CustomData_Optional has been set.
`public inline void `[`SetCustomDataToNull`](#structFRHAPI__MatchPlayerRequest_1a0e489711b699e2114748da96a240b46f)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsCustomDataNull`](#structFRHAPI__MatchPlayerRequest_1adf0cfaa0ee9972cd6ef78bfe1a7e042c)`() const` | Checks whether CustomData_Optional is set to null.

### Members

#### `public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__MatchPlayerRequest_1a19837cde1f9227e0cdd8322434238401) <a id="structFRHAPI__MatchPlayerRequest_1a19837cde1f9227e0cdd8322434238401"></a>

#### `public bool `[`PlayerUuid_IsSet`](#structFRHAPI__MatchPlayerRequest_1a17dc9b16583934a5636848577aa00671) <a id="structFRHAPI__MatchPlayerRequest_1a17dc9b16583934a5636848577aa00671"></a>

true if PlayerUuid_Optional has been set to a value

#### `public FString `[`TeamId_Optional`](#structFRHAPI__MatchPlayerRequest_1a6f9786cc22ffb6cd45f99aeb36e98d37) <a id="structFRHAPI__MatchPlayerRequest_1a6f9786cc22ffb6cd45f99aeb36e98d37"></a>

#### `public bool `[`TeamId_IsSet`](#structFRHAPI__MatchPlayerRequest_1a0c85d4442ade79f01db4e5176db44d67) <a id="structFRHAPI__MatchPlayerRequest_1a0c85d4442ade79f01db4e5176db44d67"></a>

true if TeamId_Optional has been set to a value

#### `public bool `[`TeamId_IsNull`](#structFRHAPI__MatchPlayerRequest_1a5a4521ef2914032f50f8ee622f785e7c) <a id="structFRHAPI__MatchPlayerRequest_1a5a4521ef2914032f50f8ee622f785e7c"></a>

true if TeamId_Optional has been explicitly set to null

#### `public FString `[`PartySessionId_Optional`](#structFRHAPI__MatchPlayerRequest_1a2ef92bb2358c51fa6851d74f260a6d5c) <a id="structFRHAPI__MatchPlayerRequest_1a2ef92bb2358c51fa6851d74f260a6d5c"></a>

#### `public bool `[`PartySessionId_IsSet`](#structFRHAPI__MatchPlayerRequest_1af38f016a761b9849266d04bbe04924e5) <a id="structFRHAPI__MatchPlayerRequest_1af38f016a761b9849266d04bbe04924e5"></a>

true if PartySessionId_Optional has been set to a value

#### `public bool `[`PartySessionId_IsNull`](#structFRHAPI__MatchPlayerRequest_1a3a7cc5292dcd3eb79d1d7677f121ab17) <a id="structFRHAPI__MatchPlayerRequest_1a3a7cc5292dcd3eb79d1d7677f121ab17"></a>

true if PartySessionId_Optional has been explicitly set to null

#### `public int32 `[`Placement_Optional`](#structFRHAPI__MatchPlayerRequest_1a3afeeb5050e5bc604474aff49dd23b56) <a id="structFRHAPI__MatchPlayerRequest_1a3afeeb5050e5bc604474aff49dd23b56"></a>

#### `public bool `[`Placement_IsSet`](#structFRHAPI__MatchPlayerRequest_1ab798c4399774bc1cdab2cdbd0a74d0d2) <a id="structFRHAPI__MatchPlayerRequest_1ab798c4399774bc1cdab2cdbd0a74d0d2"></a>

true if Placement_Optional has been set to a value

#### `public bool `[`Placement_IsNull`](#structFRHAPI__MatchPlayerRequest_1ac95713e9fcd5c5dea19e0f8644af8cc6) <a id="structFRHAPI__MatchPlayerRequest_1ac95713e9fcd5c5dea19e0f8644af8cc6"></a>

true if Placement_Optional has been explicitly set to null

#### `public FDateTime `[`JoinedMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerRequest_1aff3e4b6156388d0a7b15ffee378359ee) <a id="structFRHAPI__MatchPlayerRequest_1aff3e4b6156388d0a7b15ffee378359ee"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`JoinedMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerRequest_1acfa8f6feefaa4951432829440eb1ad6e) <a id="structFRHAPI__MatchPlayerRequest_1acfa8f6feefaa4951432829440eb1ad6e"></a>

true if JoinedMatchTimestamp_Optional has been set to a value

#### `public bool `[`JoinedMatchTimestamp_IsNull`](#structFRHAPI__MatchPlayerRequest_1ad8c8c26a171047e6961a4beac14e501b) <a id="structFRHAPI__MatchPlayerRequest_1ad8c8c26a171047e6961a4beac14e501b"></a>

true if JoinedMatchTimestamp_Optional has been explicitly set to null

#### `public FDateTime `[`LeftMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerRequest_1a185604bb9817a47698f0ad489f2722fd) <a id="structFRHAPI__MatchPlayerRequest_1a185604bb9817a47698f0ad489f2722fd"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`LeftMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerRequest_1a47585d085f6ae5937158aa7dac92d82a) <a id="structFRHAPI__MatchPlayerRequest_1a47585d085f6ae5937158aa7dac92d82a"></a>

true if LeftMatchTimestamp_Optional has been set to a value

#### `public bool `[`LeftMatchTimestamp_IsNull`](#structFRHAPI__MatchPlayerRequest_1a9f9ed2601b575a57a44addd87bb9a454) <a id="structFRHAPI__MatchPlayerRequest_1a9f9ed2601b575a57a44addd87bb9a454"></a>

true if LeftMatchTimestamp_Optional has been explicitly set to null

#### `public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchPlayerRequest_1a5286c32827ae4aeda194d5cd9f823430) <a id="structFRHAPI__MatchPlayerRequest_1a5286c32827ae4aeda194d5cd9f823430"></a>

#### `public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchPlayerRequest_1af6f99b261646e6d2bb8af922b3a071b0) <a id="structFRHAPI__MatchPlayerRequest_1af6f99b261646e6d2bb8af922b3a071b0"></a>

true if DurationSeconds_Optional has been set to a value

#### `public bool `[`DurationSeconds_IsNull`](#structFRHAPI__MatchPlayerRequest_1a9419074938ddf55d06aa82a53ae4aa9c) <a id="structFRHAPI__MatchPlayerRequest_1a9419074938ddf55d06aa82a53ae4aa9c"></a>

true if DurationSeconds_Optional has been explicitly set to null

#### `public FString `[`StartingRank_Optional`](#structFRHAPI__MatchPlayerRequest_1ae26efcdbda6faff8dd9581b048505119) <a id="structFRHAPI__MatchPlayerRequest_1ae26efcdbda6faff8dd9581b048505119"></a>

#### `public bool `[`StartingRank_IsSet`](#structFRHAPI__MatchPlayerRequest_1ada11c7111ad81637caa5854764ac6ea9) <a id="structFRHAPI__MatchPlayerRequest_1ada11c7111ad81637caa5854764ac6ea9"></a>

true if StartingRank_Optional has been set to a value

#### `public bool `[`StartingRank_IsNull`](#structFRHAPI__MatchPlayerRequest_1a2de841875a1ea93ee934f27ed055e4ca) <a id="structFRHAPI__MatchPlayerRequest_1a2de841875a1ea93ee934f27ed055e4ca"></a>

true if StartingRank_Optional has been explicitly set to null

#### `public FString `[`FinishingRank_Optional`](#structFRHAPI__MatchPlayerRequest_1a9ada697ca2218908ff247e899d44a914) <a id="structFRHAPI__MatchPlayerRequest_1a9ada697ca2218908ff247e899d44a914"></a>

#### `public bool `[`FinishingRank_IsSet`](#structFRHAPI__MatchPlayerRequest_1ac792f9f7b607999e92b51be18935ccc1) <a id="structFRHAPI__MatchPlayerRequest_1ac792f9f7b607999e92b51be18935ccc1"></a>

true if FinishingRank_Optional has been set to a value

#### `public bool `[`FinishingRank_IsNull`](#structFRHAPI__MatchPlayerRequest_1a3dcaa91ed48cb10d3a15be0acd3563b8) <a id="structFRHAPI__MatchPlayerRequest_1a3dcaa91ed48cb10d3a15be0acd3563b8"></a>

true if FinishingRank_Optional has been explicitly set to null

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchPlayerRequest_1a43ede4607eca8ce3e5246775533f0f80) <a id="structFRHAPI__MatchPlayerRequest_1a43ede4607eca8ce3e5246775533f0f80"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchPlayerRequest_1abd3d0ad7bb274b4e8696d1c3464991f0) <a id="structFRHAPI__MatchPlayerRequest_1abd3d0ad7bb274b4e8696d1c3464991f0"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`CustomData_IsNull`](#structFRHAPI__MatchPlayerRequest_1af35cd08d3c30ac325b9366e600a5a049) <a id="structFRHAPI__MatchPlayerRequest_1af35cd08d3c30ac325b9366e600a5a049"></a>

true if CustomData_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchPlayerRequest_1a4df8cd6e6aa661d6bdd39816ac778585)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchPlayerRequest_1a4df8cd6e6aa661d6bdd39816ac778585"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchPlayerRequest_1ac54b88425199a63826378177fe88afe7)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchPlayerRequest_1ac54b88425199a63826378177fe88afe7"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a8f2fc6826f1269a0db3419d623478e11)`()` <a id="structFRHAPI__MatchPlayerRequest_1a8f2fc6826f1269a0db3419d623478e11"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a04c8f2b114864d7d6ad56b738cf437bb)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a04c8f2b114864d7d6ad56b738cf437bb"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a88ec4a5b3321057030ca5b21abc42e20)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a88ec4a5b3321057030ca5b21abc42e20"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a7b6afec15e4e962bca2347ff25e9dac5)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a7b6afec15e4e962bca2347ff25e9dac5"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerRequest_1a62ef850379c5b887fc2e2a61763f403a)`()` <a id="structFRHAPI__MatchPlayerRequest_1a62ef850379c5b887fc2e2a61763f403a"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerRequest_1ab4bd58ae0ac641ac93f654c960608109)`() const` <a id="structFRHAPI__MatchPlayerRequest_1ab4bd58ae0ac641ac93f654c960608109"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a522cc957db1be11e6e6ce4857deb8e51)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a522cc957db1be11e6e6ce4857deb8e51"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a3f8f9471181c17cf326224d7ccc8ef99)`(FGuid && NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a3f8f9471181c17cf326224d7ccc8ef99"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1af7600dc9faf86973faea9b5d17151ed7)`()` <a id="structFRHAPI__MatchPlayerRequest_1af7600dc9faf86973faea9b5d17151ed7"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__MatchPlayerRequest_1a612bc8e207d9fc7dff1acbe3a4f9f590)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a612bc8e207d9fc7dff1acbe3a4f9f590"></a>

Checks whether PlayerUuid_Optional has been set.

#### `public inline FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1ad1c124742819dd3f509252eb8d5b44bd)`()` <a id="structFRHAPI__MatchPlayerRequest_1ad1c124742819dd3f509252eb8d5b44bd"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1aafbf8fcfe8fdf38c5a3419facde207af)`() const` <a id="structFRHAPI__MatchPlayerRequest_1aafbf8fcfe8fdf38c5a3419facde207af"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1ac8eae43137d6e115d5cf7257364ee94a)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1ac8eae43137d6e115d5cf7257364ee94a"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1aa0c34d13e6684b42c43994d0ba6c9d1a)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1aa0c34d13e6684b42c43994d0ba6c9d1a"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerRequest_1a5aaf708761900c0408926d68d457c0fd)`()` <a id="structFRHAPI__MatchPlayerRequest_1a5aaf708761900c0408926d68d457c0fd"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerRequest_1accae76611670807209106f6bf8597994)`() const` <a id="structFRHAPI__MatchPlayerRequest_1accae76611670807209106f6bf8597994"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTeamId`](#structFRHAPI__MatchPlayerRequest_1aaa0e3581e441a6c3b204fefe9b3e7794)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1aaa0e3581e441a6c3b204fefe9b3e7794"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline void `[`SetTeamId`](#structFRHAPI__MatchPlayerRequest_1ab70d53d9c18e622799d0e68abeb30146)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1ab70d53d9c18e622799d0e68abeb30146"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__MatchPlayerRequest_1aefa5628a36827c2102a8ec55e61eeef9)`()` <a id="structFRHAPI__MatchPlayerRequest_1aefa5628a36827c2102a8ec55e61eeef9"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

#### `public inline bool `[`IsTeamIdSet`](#structFRHAPI__MatchPlayerRequest_1ac0cc865cb23c7936e78d248a8b02b1e9)`() const` <a id="structFRHAPI__MatchPlayerRequest_1ac0cc865cb23c7936e78d248a8b02b1e9"></a>

Checks whether TeamId_Optional has been set.

#### `public inline void `[`SetTeamIdToNull`](#structFRHAPI__MatchPlayerRequest_1a9c8ae82306e4f749d9228de851eb5ff6)`()` <a id="structFRHAPI__MatchPlayerRequest_1a9c8ae82306e4f749d9228de851eb5ff6"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsTeamIdNull`](#structFRHAPI__MatchPlayerRequest_1a75a21acafe4e519c6c114d04b23e3143)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a75a21acafe4e519c6c114d04b23e3143"></a>

Checks whether TeamId_Optional is set to null.

#### `public inline FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1a806bc5e443152fc305756e77bc89891e)`()` <a id="structFRHAPI__MatchPlayerRequest_1a806bc5e443152fc305756e77bc89891e"></a>

Gets the value of PartySessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1a606295d8e6019477cb2d6e9674f2f2f4)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a606295d8e6019477cb2d6e9674f2f2f4"></a>

Gets the value of PartySessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1ac661a12a0fbe471652c3a6b793d0d312)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1ac661a12a0fbe471652c3a6b793d0d312"></a>

Gets the value of PartySessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1ade94eb59f3515da1b8cf6897fb0a865a)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1ade94eb59f3515da1b8cf6897fb0a865a"></a>

Fills OutValue with the value of PartySessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerRequest_1a5808d98573f6d4025306e136aee3c84b)`()` <a id="structFRHAPI__MatchPlayerRequest_1a5808d98573f6d4025306e136aee3c84b"></a>

Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerRequest_1aed96c6fc28669349217e9832d3aa7739)`() const` <a id="structFRHAPI__MatchPlayerRequest_1aed96c6fc28669349217e9832d3aa7739"></a>

Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1af49db4e29b44dc82d97931966bcb507e)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1af49db4e29b44dc82d97931966bcb507e"></a>

Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true.

#### `public inline void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1a26e5f4bb882c2c4540f5fc271555824a)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a26e5f4bb882c2c4540f5fc271555824a"></a>

Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearPartySessionId`](#structFRHAPI__MatchPlayerRequest_1aad5ea0198ca5b049f88db6120c546a86)`()` <a id="structFRHAPI__MatchPlayerRequest_1aad5ea0198ca5b049f88db6120c546a86"></a>

Clears the value of PartySessionId_Optional and sets PartySessionId_IsSet to false.

#### `public inline bool `[`IsPartySessionIdSet`](#structFRHAPI__MatchPlayerRequest_1a3498aba3973d77e595e06d07c9c02122)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a3498aba3973d77e595e06d07c9c02122"></a>

Checks whether PartySessionId_Optional has been set.

#### `public inline void `[`SetPartySessionIdToNull`](#structFRHAPI__MatchPlayerRequest_1accf7053e11dec7fe0f08a364230c32c0)`()` <a id="structFRHAPI__MatchPlayerRequest_1accf7053e11dec7fe0f08a364230c32c0"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPartySessionIdNull`](#structFRHAPI__MatchPlayerRequest_1af8c4d5fa1b7cd97687d478d34feddcca)`() const` <a id="structFRHAPI__MatchPlayerRequest_1af8c4d5fa1b7cd97687d478d34feddcca"></a>

Checks whether PartySessionId_Optional is set to null.

#### `public inline int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a00cda2dc0c8953a4dfd52a41ae281bfd)`()` <a id="structFRHAPI__MatchPlayerRequest_1a00cda2dc0c8953a4dfd52a41ae281bfd"></a>

Gets the value of Placement_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a007ddf4c4a2c60385f6424cc71a93f12)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a007ddf4c4a2c60385f6424cc71a93f12"></a>

Gets the value of Placement_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a560167b181b467d3c2a7da683360d185)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a560167b181b467d3c2a7da683360d185"></a>

Gets the value of Placement_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a95da398964b5a89b5231bead87af77bf)`(int32 & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a95da398964b5a89b5231bead87af77bf"></a>

Fills OutValue with the value of Placement_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerRequest_1a07271ac81b64d80d0a49051d6da7fb2d)`()` <a id="structFRHAPI__MatchPlayerRequest_1a07271ac81b64d80d0a49051d6da7fb2d"></a>

Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerRequest_1aebb4f0353f217411446fa393206da2ff)`() const` <a id="structFRHAPI__MatchPlayerRequest_1aebb4f0353f217411446fa393206da2ff"></a>

Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlacement`](#structFRHAPI__MatchPlayerRequest_1aa3e8dfc71ade07a335cc25a98e6367e4)`(const int32 & NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1aa3e8dfc71ade07a335cc25a98e6367e4"></a>

Sets the value of Placement_Optional and also sets Placement_IsSet to true.

#### `public inline void `[`SetPlacement`](#structFRHAPI__MatchPlayerRequest_1aa8d62447bc58843a5d6fef045325cd1f)`(int32 && NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1aa8d62447bc58843a5d6fef045325cd1f"></a>

Sets the value of Placement_Optional and also sets Placement_IsSet to true using move semantics.

#### `public inline void `[`ClearPlacement`](#structFRHAPI__MatchPlayerRequest_1a07be11fc0fbca570184e8d61e8c48a15)`()` <a id="structFRHAPI__MatchPlayerRequest_1a07be11fc0fbca570184e8d61e8c48a15"></a>

Clears the value of Placement_Optional and sets Placement_IsSet to false.

#### `public inline bool `[`IsPlacementSet`](#structFRHAPI__MatchPlayerRequest_1a7996b69fff34feb80e8e9b3dfdf8cde8)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a7996b69fff34feb80e8e9b3dfdf8cde8"></a>

Checks whether Placement_Optional has been set.

#### `public inline bool `[`IsPlacementDefaultValue`](#structFRHAPI__MatchPlayerRequest_1a7ef74fc2e38fd684d932dd3e0826daa5)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a7ef74fc2e38fd684d932dd3e0826daa5"></a>

Returns true if Placement_Optional is set and matches the default value.

#### `public inline void `[`SetPlacementToDefault`](#structFRHAPI__MatchPlayerRequest_1ade059dc2e57371cd072f042b5ebaabc1)`()` <a id="structFRHAPI__MatchPlayerRequest_1ade059dc2e57371cd072f042b5ebaabc1"></a>

Sets the value of Placement_Optional to its default and also sets Placement_IsSet to true.

#### `public inline void `[`SetPlacementToNull`](#structFRHAPI__MatchPlayerRequest_1abe91841cb4801ddb5f49da79141520cd)`()` <a id="structFRHAPI__MatchPlayerRequest_1abe91841cb4801ddb5f49da79141520cd"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsPlacementNull`](#structFRHAPI__MatchPlayerRequest_1abca43fcaed1a2a35085c418d002dcc4a)`() const` <a id="structFRHAPI__MatchPlayerRequest_1abca43fcaed1a2a35085c418d002dcc4a"></a>

Checks whether Placement_Optional is set to null.

#### `public inline FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a14acc272fb3930d07de6838c7dacff69)`()` <a id="structFRHAPI__MatchPlayerRequest_1a14acc272fb3930d07de6838c7dacff69"></a>

Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ac096c61098b2babbd88b651e178fb841)`() const` <a id="structFRHAPI__MatchPlayerRequest_1ac096c61098b2babbd88b651e178fb841"></a>

Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a212ee27bc8393140c0d511b1089da9d9)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a212ee27bc8393140c0d511b1089da9d9"></a>

Gets the value of JoinedMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ad049fd54502b594a70470a3c4d436846)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1ad049fd54502b594a70470a3c4d436846"></a>

Fills OutValue with the value of JoinedMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1a2c5fea0fbe4242bc394d97addccd9e45)`()` <a id="structFRHAPI__MatchPlayerRequest_1a2c5fea0fbe4242bc394d97addccd9e45"></a>

Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1adf1d5eca25eef4dbd36b0b502db23a93)`() const` <a id="structFRHAPI__MatchPlayerRequest_1adf1d5eca25eef4dbd36b0b502db23a93"></a>

Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a184dfd9a3d6c64d8e00c481be3d9a04f)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a184dfd9a3d6c64d8e00c481be3d9a04f"></a>

Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true.

#### `public inline void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a07b76ed4413062396527ae9f7007491b)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a07b76ed4413062396527ae9f7007491b"></a>

Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ab303cc0316fa560623b9c0f249d4511a)`()` <a id="structFRHAPI__MatchPlayerRequest_1ab303cc0316fa560623b9c0f249d4511a"></a>

Clears the value of JoinedMatchTimestamp_Optional and sets JoinedMatchTimestamp_IsSet to false.

#### `public inline bool `[`IsJoinedMatchTimestampSet`](#structFRHAPI__MatchPlayerRequest_1aeafd52cd21772e6408e4fdef223d851d)`() const` <a id="structFRHAPI__MatchPlayerRequest_1aeafd52cd21772e6408e4fdef223d851d"></a>

Checks whether JoinedMatchTimestamp_Optional has been set.

#### `public inline void `[`SetJoinedMatchTimestampToNull`](#structFRHAPI__MatchPlayerRequest_1ac261daaa249ae1f9ff20f57abae14d80)`()` <a id="structFRHAPI__MatchPlayerRequest_1ac261daaa249ae1f9ff20f57abae14d80"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsJoinedMatchTimestampNull`](#structFRHAPI__MatchPlayerRequest_1aa23f57bb199f144d3960a64314639836)`() const` <a id="structFRHAPI__MatchPlayerRequest_1aa23f57bb199f144d3960a64314639836"></a>

Checks whether JoinedMatchTimestamp_Optional is set to null.

#### `public inline FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a4390729dc0792b746bc57883c7f915bb)`()` <a id="structFRHAPI__MatchPlayerRequest_1a4390729dc0792b746bc57883c7f915bb"></a>

Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a35eb0497e611a529c54cf1b00f8c2550)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a35eb0497e611a529c54cf1b00f8c2550"></a>

Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a58345574d38df0ce21721604228cbb67)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a58345574d38df0ce21721604228cbb67"></a>

Gets the value of LeftMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1abc4cfd1faca6c0893b1d4b4c0ea28bc4)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1abc4cfd1faca6c0893b1d4b4c0ea28bc4"></a>

Fills OutValue with the value of LeftMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1af335e8a0a98f22c8c0fc8193ac535e57)`()` <a id="structFRHAPI__MatchPlayerRequest_1af335e8a0a98f22c8c0fc8193ac535e57"></a>

Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1a9438279a5adddcea0c036f0b84019d86)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a9438279a5adddcea0c036f0b84019d86"></a>

Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a3c68ff83ce6470bad6cd369465186973)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a3c68ff83ce6470bad6cd369465186973"></a>

Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true.

#### `public inline void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ab0937ed242d1e30210968deeca4e9d45)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1ab0937ed242d1e30210968deeca4e9d45"></a>

Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a92c521151fc4476568e2d5165fc66b0e)`()` <a id="structFRHAPI__MatchPlayerRequest_1a92c521151fc4476568e2d5165fc66b0e"></a>

Clears the value of LeftMatchTimestamp_Optional and sets LeftMatchTimestamp_IsSet to false.

#### `public inline bool `[`IsLeftMatchTimestampSet`](#structFRHAPI__MatchPlayerRequest_1af3361963202bc23daf600632ccd6e458)`() const` <a id="structFRHAPI__MatchPlayerRequest_1af3361963202bc23daf600632ccd6e458"></a>

Checks whether LeftMatchTimestamp_Optional has been set.

#### `public inline void `[`SetLeftMatchTimestampToNull`](#structFRHAPI__MatchPlayerRequest_1af731ccd28a7d0353d49644651218221e)`()` <a id="structFRHAPI__MatchPlayerRequest_1af731ccd28a7d0353d49644651218221e"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsLeftMatchTimestampNull`](#structFRHAPI__MatchPlayerRequest_1a91e7a1f322b76e0b30bcd6511bc6b6d8)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a91e7a1f322b76e0b30bcd6511bc6b6d8"></a>

Checks whether LeftMatchTimestamp_Optional is set to null.

#### `public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a81974c41a5a7eeaf1b0b0b7a39fcd9ae)`()` <a id="structFRHAPI__MatchPlayerRequest_1a81974c41a5a7eeaf1b0b0b7a39fcd9ae"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a3f7e9e7f079cbce08715363061c36f1c)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a3f7e9e7f079cbce08715363061c36f1c"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a2fcd3398b13da3dda9b3e7634d7e64cd)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a2fcd3398b13da3dda9b3e7634d7e64cd"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a50bcb5ed68b22d8583f6bd2b42322bec)`(int32 & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a50bcb5ed68b22d8583f6bd2b42322bec"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerRequest_1a78c6ae51fb528b5d041bf62adbf85ba2)`()` <a id="structFRHAPI__MatchPlayerRequest_1a78c6ae51fb528b5d041bf62adbf85ba2"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerRequest_1a85f11f6544a8d500c82cf5b2ea965c74)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a85f11f6544a8d500c82cf5b2ea965c74"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a43fb89ebf062a9a8497b55518e7e8056)`(const int32 & NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a43fb89ebf062a9a8497b55518e7e8056"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a2ff4acb213d774fbdca900d88d3f6ce0)`(int32 && NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a2ff4acb213d774fbdca900d88d3f6ce0"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1ab4142426744f327826ef80f70e48dfef)`()` <a id="structFRHAPI__MatchPlayerRequest_1ab4142426744f327826ef80f70e48dfef"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline bool `[`IsDurationSecondsSet`](#structFRHAPI__MatchPlayerRequest_1a7321d9da46bff21b5a4143a8aafe4fc6)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a7321d9da46bff21b5a4143a8aafe4fc6"></a>

Checks whether DurationSeconds_Optional has been set.

#### `public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchPlayerRequest_1acea250e4524212d6c030295aef2ba7d3)`() const` <a id="structFRHAPI__MatchPlayerRequest_1acea250e4524212d6c030295aef2ba7d3"></a>

Returns true if DurationSeconds_Optional is set and matches the default value.

#### `public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchPlayerRequest_1a171c171c251e320b1f9315ba4d75feec)`()` <a id="structFRHAPI__MatchPlayerRequest_1a171c171c251e320b1f9315ba4d75feec"></a>

Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchPlayerRequest_1a473085d08715f43d73739190a7e5e44f)`()` <a id="structFRHAPI__MatchPlayerRequest_1a473085d08715f43d73739190a7e5e44f"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchPlayerRequest_1abda0c34d34ec855841206a5d82833974)`() const` <a id="structFRHAPI__MatchPlayerRequest_1abda0c34d34ec855841206a5d82833974"></a>

Checks whether DurationSeconds_Optional is set to null.

#### `public inline FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a2c7bba25fe728ece6bd9ec316ef357e2)`()` <a id="structFRHAPI__MatchPlayerRequest_1a2c7bba25fe728ece6bd9ec316ef357e2"></a>

Gets the value of StartingRank_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1af11bb807c5b3c7267060c200939fce57)`() const` <a id="structFRHAPI__MatchPlayerRequest_1af11bb807c5b3c7267060c200939fce57"></a>

Gets the value of StartingRank_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a02be5df63b3e7e8d092aec62434627f2)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a02be5df63b3e7e8d092aec62434627f2"></a>

Gets the value of StartingRank_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1aaa1c89b440e5f5e52b50f4548a85d3b2)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1aaa1c89b440e5f5e52b50f4548a85d3b2"></a>

Fills OutValue with the value of StartingRank_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1ae76a7d62c903ece7dfb5b724fee783fd)`()` <a id="structFRHAPI__MatchPlayerRequest_1ae76a7d62c903ece7dfb5b724fee783fd"></a>

Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1a1d1124ce4d0449c838707cd7d359c3a5)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a1d1124ce4d0449c838707cd7d359c3a5"></a>

Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a82346fc086303c96f11a9a91abbea417)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a82346fc086303c96f11a9a91abbea417"></a>

Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true.

#### `public inline void `[`SetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a1dc16c0fd2410c308c17bc9f8de084b0)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a1dc16c0fd2410c308c17bc9f8de084b0"></a>

Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true using move semantics.

#### `public inline void `[`ClearStartingRank`](#structFRHAPI__MatchPlayerRequest_1a40de89ab1caa51c9c7b1025708bdc120)`()` <a id="structFRHAPI__MatchPlayerRequest_1a40de89ab1caa51c9c7b1025708bdc120"></a>

Clears the value of StartingRank_Optional and sets StartingRank_IsSet to false.

#### `public inline bool `[`IsStartingRankSet`](#structFRHAPI__MatchPlayerRequest_1a36c0bf71570cc71381e3c9cefaa48756)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a36c0bf71570cc71381e3c9cefaa48756"></a>

Checks whether StartingRank_Optional has been set.

#### `public inline void `[`SetStartingRankToNull`](#structFRHAPI__MatchPlayerRequest_1a2b49b7063ab16ded09ec66d4ab2adf95)`()` <a id="structFRHAPI__MatchPlayerRequest_1a2b49b7063ab16ded09ec66d4ab2adf95"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStartingRankNull`](#structFRHAPI__MatchPlayerRequest_1afb862e63264d86e5265e99153bec4240)`() const` <a id="structFRHAPI__MatchPlayerRequest_1afb862e63264d86e5265e99153bec4240"></a>

Checks whether StartingRank_Optional is set to null.

#### `public inline FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1ab1be2101f15082009196ed2f2471bc76)`()` <a id="structFRHAPI__MatchPlayerRequest_1ab1be2101f15082009196ed2f2471bc76"></a>

Gets the value of FinishingRank_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1af98f99c1bdf9f19bcd129d665dc16543)`() const` <a id="structFRHAPI__MatchPlayerRequest_1af98f99c1bdf9f19bcd129d665dc16543"></a>

Gets the value of FinishingRank_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1afc41ccdf41f60ba140c6e6c80493fe5f)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1afc41ccdf41f60ba140c6e6c80493fe5f"></a>

Gets the value of FinishingRank_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1ae01c5c243910f32af4e86d3ca595745f)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1ae01c5c243910f32af4e86d3ca595745f"></a>

Fills OutValue with the value of FinishingRank_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1ab5f7bcadcf0e3af6b82732cb48f00213)`()` <a id="structFRHAPI__MatchPlayerRequest_1ab5f7bcadcf0e3af6b82732cb48f00213"></a>

Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1af9b5c58bd75905a1fe061a3691109455)`() const` <a id="structFRHAPI__MatchPlayerRequest_1af9b5c58bd75905a1fe061a3691109455"></a>

Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a9f9a9e291a6f787acf282ce206c504e6)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a9f9a9e291a6f787acf282ce206c504e6"></a>

Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true.

#### `public inline void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a6ecb1c2fde580c0409fb17f82d054e1f)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a6ecb1c2fde580c0409fb17f82d054e1f"></a>

Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true using move semantics.

#### `public inline void `[`ClearFinishingRank`](#structFRHAPI__MatchPlayerRequest_1ae238318fe913dd80eca373607546ba5d)`()` <a id="structFRHAPI__MatchPlayerRequest_1ae238318fe913dd80eca373607546ba5d"></a>

Clears the value of FinishingRank_Optional and sets FinishingRank_IsSet to false.

#### `public inline bool `[`IsFinishingRankSet`](#structFRHAPI__MatchPlayerRequest_1a362803c0f0d5855ade1db57c41d687d2)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a362803c0f0d5855ade1db57c41d687d2"></a>

Checks whether FinishingRank_Optional has been set.

#### `public inline void `[`SetFinishingRankToNull`](#structFRHAPI__MatchPlayerRequest_1a383ec44a2479d13dc9e2ea91d9573c33)`()` <a id="structFRHAPI__MatchPlayerRequest_1a383ec44a2479d13dc9e2ea91d9573c33"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsFinishingRankNull`](#structFRHAPI__MatchPlayerRequest_1ae57567c37ac72d78372bd7c02e3a37db)`() const` <a id="structFRHAPI__MatchPlayerRequest_1ae57567c37ac72d78372bd7c02e3a37db"></a>

Checks whether FinishingRank_Optional is set to null.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1a2f2ec9aa017a275cabd4a08d91faf017)`()` <a id="structFRHAPI__MatchPlayerRequest_1a2f2ec9aa017a275cabd4a08d91faf017"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1afc1f8db9d1a34b50be431cb4bd19a37e)`() const` <a id="structFRHAPI__MatchPlayerRequest_1afc1f8db9d1a34b50be431cb4bd19a37e"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1a6e0d4504454ce2357be685519484c510)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a6e0d4504454ce2357be685519484c510"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1a42e88a26da5c27535c69749ae99409c1)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a42e88a26da5c27535c69749ae99409c1"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerRequest_1a97a9f47e052848131e4f05de37ec420e)`()` <a id="structFRHAPI__MatchPlayerRequest_1a97a9f47e052848131e4f05de37ec420e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerRequest_1a15c41e6628cead6ad754eba06e289298)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a15c41e6628cead6ad754eba06e289298"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchPlayerRequest_1adc44293ee8006d4134d2fb679b36e832)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1adc44293ee8006d4134d2fb679b36e832"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchPlayerRequest_1a441ef1a253f1dcf25df723979dab70e9)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a441ef1a253f1dcf25df723979dab70e9"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchPlayerRequest_1a8793720a3f715e2147e638848d4281dd)`()` <a id="structFRHAPI__MatchPlayerRequest_1a8793720a3f715e2147e638848d4281dd"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchPlayerRequest_1aff59066543bc08b1748590b7d86e9635)`() const` <a id="structFRHAPI__MatchPlayerRequest_1aff59066543bc08b1748590b7d86e9635"></a>

Checks whether CustomData_Optional has been set.

#### `public inline void `[`SetCustomDataToNull`](#structFRHAPI__MatchPlayerRequest_1a0e489711b699e2114748da96a240b46f)`()` <a id="structFRHAPI__MatchPlayerRequest_1a0e489711b699e2114748da96a240b46f"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsCustomDataNull`](#structFRHAPI__MatchPlayerRequest_1adf0cfaa0ee9972cd6ef78bfe1a7e042c)`() const` <a id="structFRHAPI__MatchPlayerRequest_1adf0cfaa0ee9972cd6ef78bfe1a7e042c"></a>

Checks whether CustomData_Optional is set to null.

