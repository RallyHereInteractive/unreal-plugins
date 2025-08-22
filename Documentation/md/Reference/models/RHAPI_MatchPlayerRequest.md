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
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1ac1f540ba80f280644a3eb8711f1702bf)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a360d7b8dd3d3bf965bad30ac5593f38d)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1af0943a68bdec905ba9db41e505bfc642)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a469b9d06103e1327a894f2d8cac470ce)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerRequest_1ad57279ae2d00bae35c01e11973d00d7f)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerRequest_1ac017e4fbd2337faa4a85555805e053a7)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a7ecc76f7185c52edf296bf307332f6f6)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a7e055a89bc2367b69ec51bcfb41b6c9f)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1af7600dc9faf86973faea9b5d17151ed7)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline FORCEINLINE FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1ae460765968df8846ec44ebc023ddafde)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1a7d8238f018f7e5b05a9dfc4fc338d537)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1a50449e509a2ab7c63ee94a7373360784)`(const FString & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1ab11d82a251f5fe1b5b1a6eea4b1d58cd)`(FString & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerRequest_1aff0c5465c935695ce9dc7a43463ff208)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerRequest_1ae88d8efc464d080b87878b09151dbbf8)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__MatchPlayerRequest_1a377b71e7975a0d3d441cb594c17373a0)`(const FString & NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__MatchPlayerRequest_1a6c86e6dc09dc85ae496bd1e6b1124e77)`(FString && NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.
`public inline void `[`ClearTeamId`](#structFRHAPI__MatchPlayerRequest_1aefa5628a36827c2102a8ec55e61eeef9)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline FORCEINLINE void `[`SetTeamIdToNull`](#structFRHAPI__MatchPlayerRequest_1aa3f2b4850232d28152fa3cb1e52f7fe9)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsTeamIdNull`](#structFRHAPI__MatchPlayerRequest_1a0085c256ef7ec8a355729de38b31d6ad)`() const` | Checks whether TeamId_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1ab314a9b13618a204d249f1040391407b)`()` | Gets the value of PartySessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1a8862dbb636abe61c803db30361c6e39f)`() const` | Gets the value of PartySessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1a0a90c97a8b4621264f9e65f7ad4cf464)`(const FString & DefaultValue) const` | Gets the value of PartySessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1ab01d0387dd88da65a1b2c829cd8312a9)`(FString & OutValue) const` | Fills OutValue with the value of PartySessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerRequest_1a76aa364251c8f6a5017989692d0bb3d9)`()` | Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerRequest_1a59b7e1c5cd8aba4901ee61da85902f97)`() const` | Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1a14e2c305d697e9898af7798c9f90be97)`(const FString & NewValue)` | Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true.
`public inline FORCEINLINE void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1af3ef8734bc438e223deb3a2c7f33ef1c)`(FString && NewValue)` | Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true using move semantics.
`public inline void `[`ClearPartySessionId`](#structFRHAPI__MatchPlayerRequest_1aad5ea0198ca5b049f88db6120c546a86)`()` | Clears the value of PartySessionId_Optional and sets PartySessionId_IsSet to false.
`public inline FORCEINLINE void `[`SetPartySessionIdToNull`](#structFRHAPI__MatchPlayerRequest_1a23bc7cd980b5ccf1d80aa7f957fccba7)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPartySessionIdNull`](#structFRHAPI__MatchPlayerRequest_1a503f9f6d35a2eecda368f52c67a2b949)`() const` | Checks whether PartySessionId_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1aeab1b0e8ee6215cd0c165ca33263fba0)`()` | Gets the value of Placement_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a432975d4aa5c44c16fe49f983bb4db5f)`() const` | Gets the value of Placement_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a9fe37105e271850121d6b89561630d42)`(const int32 & DefaultValue) const` | Gets the value of Placement_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a7068313a7990af2ff3fee68bf5eca2e3)`(int32 & OutValue) const` | Fills OutValue with the value of Placement_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerRequest_1a1ae8463429f9dfad091183d6ae9ab8fa)`()` | Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerRequest_1aa6c269a82bb6581f495496bbaa5e9bc4)`() const` | Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlacement`](#structFRHAPI__MatchPlayerRequest_1accce220563255449c79a392b262f074b)`(const int32 & NewValue)` | Sets the value of Placement_Optional and also sets Placement_IsSet to true.
`public inline FORCEINLINE void `[`SetPlacement`](#structFRHAPI__MatchPlayerRequest_1a65bc38905bc22093d87ca8596e1f2d9e)`(int32 && NewValue)` | Sets the value of Placement_Optional and also sets Placement_IsSet to true using move semantics.
`public inline void `[`ClearPlacement`](#structFRHAPI__MatchPlayerRequest_1a07be11fc0fbca570184e8d61e8c48a15)`()` | Clears the value of Placement_Optional and sets Placement_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Placement`](#structFRHAPI__MatchPlayerRequest_1a7528517d4e71d5985291300dc4f385b1)`()` | Returns the default value of Placement.
`public inline FORCEINLINE void `[`SetPlacementToNull`](#structFRHAPI__MatchPlayerRequest_1a5dc6ae764c566dfc6de3ac3b76861b43)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPlacementNull`](#structFRHAPI__MatchPlayerRequest_1a8be9e870dd986bb73fc857b9c2fb3604)`() const` | Checks whether Placement_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1acb5505565997ac7cb5f83e00b15ea6b6)`()` | Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1aa4e7e1cdf21a95e85c075083869890d1)`() const` | Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a779086780e174fb979e76c3c25ca6a1c)`(const FDateTime & DefaultValue) const` | Gets the value of JoinedMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a8a611e4eae5ffb15089c4f39188303d6)`(FDateTime & OutValue) const` | Fills OutValue with the value of JoinedMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1a363ed37a28611da795c9f5076b48918e)`()` | Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1a4664303a39344b31683545f7561ae9b6)`() const` | Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ac583f5b6105aeffe0b2a343e7f3d08b9)`(const FDateTime & NewValue)` | Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a3e142d2cdc7928a93733889f5862485c)`(FDateTime && NewValue)` | Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ab303cc0316fa560623b9c0f249d4511a)`()` | Clears the value of JoinedMatchTimestamp_Optional and sets JoinedMatchTimestamp_IsSet to false.
`public inline FORCEINLINE void `[`SetJoinedMatchTimestampToNull`](#structFRHAPI__MatchPlayerRequest_1a02da9d9cda942d026ba8208f87d56f6a)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsJoinedMatchTimestampNull`](#structFRHAPI__MatchPlayerRequest_1a2e800c52ea8d22966f1d2848ca97732e)`() const` | Checks whether JoinedMatchTimestamp_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a7c65535d743a82ad5fc25e376cb0c09c)`()` | Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1afe4f3d05a288ea4f801b852778225af9)`() const` | Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a543a8f23122c1907122da6ed6f990b38)`(const FDateTime & DefaultValue) const` | Gets the value of LeftMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a8505aa64503e6bc728dd46074d059e69)`(FDateTime & OutValue) const` | Fills OutValue with the value of LeftMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1a49bd35d7d28d01df9584b522982ab755)`()` | Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1a03eeaa429a4b15d1adda7bcaec70ca58)`() const` | Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ab2cb7804e6141b019f6e3bfeeb1c8a3f)`(const FDateTime & NewValue)` | Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a64ac90f8ec887e499d4a722e356136ae)`(FDateTime && NewValue)` | Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a92c521151fc4476568e2d5165fc66b0e)`()` | Clears the value of LeftMatchTimestamp_Optional and sets LeftMatchTimestamp_IsSet to false.
`public inline FORCEINLINE void `[`SetLeftMatchTimestampToNull`](#structFRHAPI__MatchPlayerRequest_1ab83f40a4187cef52f6a4fd04e76cfdc3)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsLeftMatchTimestampNull`](#structFRHAPI__MatchPlayerRequest_1aed26807ee853be9c4d6b4f11db631352)`() const` | Checks whether LeftMatchTimestamp_Optional is set to null.
`public inline FORCEINLINE int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a3de5d6cca290240d76796642385e71de)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a3619b2c931b41d41120167bfea2e06c5)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a746e64f489aea294c592d090538f6477)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a860183a02477e11bbe98ced3eed35a3e)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerRequest_1ada629f0f54f9da2a2dfbdae74b02d1a3)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerRequest_1a7967772381fc38054b3e1eae1c57ec98)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a14650f9062b7d86a26b6b0a8ccea44e8)`(const int32 & NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a72da3b5749335f8f3582e00e2f5be5cf)`(int32 && NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1ab4142426744f327826ef80f70e48dfef)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_DurationSeconds`](#structFRHAPI__MatchPlayerRequest_1ae532565e0b521fb5038405e2928dd086)`()` | Returns the default value of DurationSeconds.
`public inline FORCEINLINE void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchPlayerRequest_1a9ea6a4cfc109371fde7a0be70ea6e702)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchPlayerRequest_1a55de612056511a3683b156fc03fa44b2)`() const` | Checks whether DurationSeconds_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a0c0b7c9bc6ffb68a44465f1d2af025c7)`()` | Gets the value of StartingRank_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1abc02e6b941f1be9b9eb3fee10a4fd3e1)`() const` | Gets the value of StartingRank_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1aefcd590ad13008568ababe7446662a89)`(const FString & DefaultValue) const` | Gets the value of StartingRank_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a177c33094ab493543e5da695814f916d)`(FString & OutValue) const` | Fills OutValue with the value of StartingRank_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1a10bb2b1e7a14d65504f4e3c850d458ff)`()` | Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1a0c0698dfa88b30bd68af83bf204d6d49)`() const` | Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStartingRank`](#structFRHAPI__MatchPlayerRequest_1ace79c57e529db7d67f9c5ac5cb321afb)`(const FString & NewValue)` | Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true.
`public inline FORCEINLINE void `[`SetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a231c38b5062355a240a88ac271332515)`(FString && NewValue)` | Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true using move semantics.
`public inline void `[`ClearStartingRank`](#structFRHAPI__MatchPlayerRequest_1a40de89ab1caa51c9c7b1025708bdc120)`()` | Clears the value of StartingRank_Optional and sets StartingRank_IsSet to false.
`public inline FORCEINLINE void `[`SetStartingRankToNull`](#structFRHAPI__MatchPlayerRequest_1a345a601bcc371f94b6a1c1407b7355bd)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStartingRankNull`](#structFRHAPI__MatchPlayerRequest_1a32dc4d5f410b49e3ded8ea11c6bebc08)`() const` | Checks whether StartingRank_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a8795fbb34a58bae8c6e50a4efb3eb036)`()` | Gets the value of FinishingRank_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a223b2b26b3e06056f075cdf14790e3d5)`() const` | Gets the value of FinishingRank_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a8c82c0a7d728781e266d0a60db163262)`(const FString & DefaultValue) const` | Gets the value of FinishingRank_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a76e56474060423506a0795c45aba3d98)`(FString & OutValue) const` | Fills OutValue with the value of FinishingRank_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1a36215f7303859e393fa2d5eecc4498db)`()` | Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1ae39e95daadef2a5c4d22a9700b41a974)`() const` | Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a2295ed6645799dbf6e033308207de476)`(const FString & NewValue)` | Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true.
`public inline FORCEINLINE void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a6eb83f0be401fb576daac0a5d2be2410)`(FString && NewValue)` | Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true using move semantics.
`public inline void `[`ClearFinishingRank`](#structFRHAPI__MatchPlayerRequest_1ae238318fe913dd80eca373607546ba5d)`()` | Clears the value of FinishingRank_Optional and sets FinishingRank_IsSet to false.
`public inline FORCEINLINE void `[`SetFinishingRankToNull`](#structFRHAPI__MatchPlayerRequest_1ac29b9da25fcaae87d150f14100389ac3)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsFinishingRankNull`](#structFRHAPI__MatchPlayerRequest_1a411c2c89a341151d293f33fba477f736)`() const` | Checks whether FinishingRank_Optional is set to null.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1ac28ff9e67d3ca7d6f22fcc34586a93bc)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1a371b3edaef82f4bd1d8bda2231e41934)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1ae594b6d4a4ce4aba724667ddec9ff949)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1a62bdb15b641785ece40b209f24e81ca5)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerRequest_1a8e8073dea4732678e4118b82e3e49b93)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerRequest_1a65e7c0e5b4c8e79924322cf167efc380)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchPlayerRequest_1a13d2fd216a866f947a0b831a218df872)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchPlayerRequest_1a3f643a2b38ede70bcc6e59e28d16a9d2)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchPlayerRequest_1a8793720a3f715e2147e638848d4281dd)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__MatchPlayerRequest_1aa30cf73b2fd2ea58fac7da5c6d7d20d0)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__MatchPlayerRequest_1a37340dd30f57882ce8d5e68b1735913a)`() const` | Checks whether CustomData_Optional is set to null.

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

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1ac1f540ba80f280644a3eb8711f1702bf)`()` <a id="structFRHAPI__MatchPlayerRequest_1ac1f540ba80f280644a3eb8711f1702bf"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a360d7b8dd3d3bf965bad30ac5593f38d)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a360d7b8dd3d3bf965bad30ac5593f38d"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1af0943a68bdec905ba9db41e505bfc642)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1af0943a68bdec905ba9db41e505bfc642"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a469b9d06103e1327a894f2d8cac470ce)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a469b9d06103e1327a894f2d8cac470ce"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerRequest_1ad57279ae2d00bae35c01e11973d00d7f)`()` <a id="structFRHAPI__MatchPlayerRequest_1ad57279ae2d00bae35c01e11973d00d7f"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerRequest_1ac017e4fbd2337faa4a85555805e053a7)`() const` <a id="structFRHAPI__MatchPlayerRequest_1ac017e4fbd2337faa4a85555805e053a7"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a7ecc76f7185c52edf296bf307332f6f6)`(const FGuid & NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a7ecc76f7185c52edf296bf307332f6f6"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a7e055a89bc2367b69ec51bcfb41b6c9f)`(FGuid && NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a7e055a89bc2367b69ec51bcfb41b6c9f"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1af7600dc9faf86973faea9b5d17151ed7)`()` <a id="structFRHAPI__MatchPlayerRequest_1af7600dc9faf86973faea9b5d17151ed7"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1ae460765968df8846ec44ebc023ddafde)`()` <a id="structFRHAPI__MatchPlayerRequest_1ae460765968df8846ec44ebc023ddafde"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1a7d8238f018f7e5b05a9dfc4fc338d537)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a7d8238f018f7e5b05a9dfc4fc338d537"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1a50449e509a2ab7c63ee94a7373360784)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a50449e509a2ab7c63ee94a7373360784"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1ab11d82a251f5fe1b5b1a6eea4b1d58cd)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1ab11d82a251f5fe1b5b1a6eea4b1d58cd"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerRequest_1aff0c5465c935695ce9dc7a43463ff208)`()` <a id="structFRHAPI__MatchPlayerRequest_1aff0c5465c935695ce9dc7a43463ff208"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerRequest_1ae88d8efc464d080b87878b09151dbbf8)`() const` <a id="structFRHAPI__MatchPlayerRequest_1ae88d8efc464d080b87878b09151dbbf8"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__MatchPlayerRequest_1a377b71e7975a0d3d441cb594c17373a0)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a377b71e7975a0d3d441cb594c17373a0"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__MatchPlayerRequest_1a6c86e6dc09dc85ae496bd1e6b1124e77)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a6c86e6dc09dc85ae496bd1e6b1124e77"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__MatchPlayerRequest_1aefa5628a36827c2102a8ec55e61eeef9)`()` <a id="structFRHAPI__MatchPlayerRequest_1aefa5628a36827c2102a8ec55e61eeef9"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetTeamIdToNull`](#structFRHAPI__MatchPlayerRequest_1aa3f2b4850232d28152fa3cb1e52f7fe9)`()` <a id="structFRHAPI__MatchPlayerRequest_1aa3f2b4850232d28152fa3cb1e52f7fe9"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsTeamIdNull`](#structFRHAPI__MatchPlayerRequest_1a0085c256ef7ec8a355729de38b31d6ad)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a0085c256ef7ec8a355729de38b31d6ad"></a>

Checks whether TeamId_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1ab314a9b13618a204d249f1040391407b)`()` <a id="structFRHAPI__MatchPlayerRequest_1ab314a9b13618a204d249f1040391407b"></a>

Gets the value of PartySessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1a8862dbb636abe61c803db30361c6e39f)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a8862dbb636abe61c803db30361c6e39f"></a>

Gets the value of PartySessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1a0a90c97a8b4621264f9e65f7ad4cf464)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a0a90c97a8b4621264f9e65f7ad4cf464"></a>

Gets the value of PartySessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1ab01d0387dd88da65a1b2c829cd8312a9)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1ab01d0387dd88da65a1b2c829cd8312a9"></a>

Fills OutValue with the value of PartySessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerRequest_1a76aa364251c8f6a5017989692d0bb3d9)`()` <a id="structFRHAPI__MatchPlayerRequest_1a76aa364251c8f6a5017989692d0bb3d9"></a>

Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerRequest_1a59b7e1c5cd8aba4901ee61da85902f97)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a59b7e1c5cd8aba4901ee61da85902f97"></a>

Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1a14e2c305d697e9898af7798c9f90be97)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a14e2c305d697e9898af7798c9f90be97"></a>

Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1af3ef8734bc438e223deb3a2c7f33ef1c)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1af3ef8734bc438e223deb3a2c7f33ef1c"></a>

Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearPartySessionId`](#structFRHAPI__MatchPlayerRequest_1aad5ea0198ca5b049f88db6120c546a86)`()` <a id="structFRHAPI__MatchPlayerRequest_1aad5ea0198ca5b049f88db6120c546a86"></a>

Clears the value of PartySessionId_Optional and sets PartySessionId_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPartySessionIdToNull`](#structFRHAPI__MatchPlayerRequest_1a23bc7cd980b5ccf1d80aa7f957fccba7)`()` <a id="structFRHAPI__MatchPlayerRequest_1a23bc7cd980b5ccf1d80aa7f957fccba7"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPartySessionIdNull`](#structFRHAPI__MatchPlayerRequest_1a503f9f6d35a2eecda368f52c67a2b949)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a503f9f6d35a2eecda368f52c67a2b949"></a>

Checks whether PartySessionId_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1aeab1b0e8ee6215cd0c165ca33263fba0)`()` <a id="structFRHAPI__MatchPlayerRequest_1aeab1b0e8ee6215cd0c165ca33263fba0"></a>

Gets the value of Placement_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a432975d4aa5c44c16fe49f983bb4db5f)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a432975d4aa5c44c16fe49f983bb4db5f"></a>

Gets the value of Placement_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a9fe37105e271850121d6b89561630d42)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a9fe37105e271850121d6b89561630d42"></a>

Gets the value of Placement_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a7068313a7990af2ff3fee68bf5eca2e3)`(int32 & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a7068313a7990af2ff3fee68bf5eca2e3"></a>

Fills OutValue with the value of Placement_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerRequest_1a1ae8463429f9dfad091183d6ae9ab8fa)`()` <a id="structFRHAPI__MatchPlayerRequest_1a1ae8463429f9dfad091183d6ae9ab8fa"></a>

Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerRequest_1aa6c269a82bb6581f495496bbaa5e9bc4)`() const` <a id="structFRHAPI__MatchPlayerRequest_1aa6c269a82bb6581f495496bbaa5e9bc4"></a>

Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlacement`](#structFRHAPI__MatchPlayerRequest_1accce220563255449c79a392b262f074b)`(const int32 & NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1accce220563255449c79a392b262f074b"></a>

Sets the value of Placement_Optional and also sets Placement_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlacement`](#structFRHAPI__MatchPlayerRequest_1a65bc38905bc22093d87ca8596e1f2d9e)`(int32 && NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a65bc38905bc22093d87ca8596e1f2d9e"></a>

Sets the value of Placement_Optional and also sets Placement_IsSet to true using move semantics.

#### `public inline void `[`ClearPlacement`](#structFRHAPI__MatchPlayerRequest_1a07be11fc0fbca570184e8d61e8c48a15)`()` <a id="structFRHAPI__MatchPlayerRequest_1a07be11fc0fbca570184e8d61e8c48a15"></a>

Clears the value of Placement_Optional and sets Placement_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Placement`](#structFRHAPI__MatchPlayerRequest_1a7528517d4e71d5985291300dc4f385b1)`()` <a id="structFRHAPI__MatchPlayerRequest_1a7528517d4e71d5985291300dc4f385b1"></a>

Returns the default value of Placement.

#### `public inline FORCEINLINE void `[`SetPlacementToNull`](#structFRHAPI__MatchPlayerRequest_1a5dc6ae764c566dfc6de3ac3b76861b43)`()` <a id="structFRHAPI__MatchPlayerRequest_1a5dc6ae764c566dfc6de3ac3b76861b43"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPlacementNull`](#structFRHAPI__MatchPlayerRequest_1a8be9e870dd986bb73fc857b9c2fb3604)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a8be9e870dd986bb73fc857b9c2fb3604"></a>

Checks whether Placement_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1acb5505565997ac7cb5f83e00b15ea6b6)`()` <a id="structFRHAPI__MatchPlayerRequest_1acb5505565997ac7cb5f83e00b15ea6b6"></a>

Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1aa4e7e1cdf21a95e85c075083869890d1)`() const` <a id="structFRHAPI__MatchPlayerRequest_1aa4e7e1cdf21a95e85c075083869890d1"></a>

Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a779086780e174fb979e76c3c25ca6a1c)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a779086780e174fb979e76c3c25ca6a1c"></a>

Gets the value of JoinedMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a8a611e4eae5ffb15089c4f39188303d6)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a8a611e4eae5ffb15089c4f39188303d6"></a>

Fills OutValue with the value of JoinedMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1a363ed37a28611da795c9f5076b48918e)`()` <a id="structFRHAPI__MatchPlayerRequest_1a363ed37a28611da795c9f5076b48918e"></a>

Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1a4664303a39344b31683545f7561ae9b6)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a4664303a39344b31683545f7561ae9b6"></a>

Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ac583f5b6105aeffe0b2a343e7f3d08b9)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1ac583f5b6105aeffe0b2a343e7f3d08b9"></a>

Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a3e142d2cdc7928a93733889f5862485c)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a3e142d2cdc7928a93733889f5862485c"></a>

Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ab303cc0316fa560623b9c0f249d4511a)`()` <a id="structFRHAPI__MatchPlayerRequest_1ab303cc0316fa560623b9c0f249d4511a"></a>

Clears the value of JoinedMatchTimestamp_Optional and sets JoinedMatchTimestamp_IsSet to false.

#### `public inline FORCEINLINE void `[`SetJoinedMatchTimestampToNull`](#structFRHAPI__MatchPlayerRequest_1a02da9d9cda942d026ba8208f87d56f6a)`()` <a id="structFRHAPI__MatchPlayerRequest_1a02da9d9cda942d026ba8208f87d56f6a"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsJoinedMatchTimestampNull`](#structFRHAPI__MatchPlayerRequest_1a2e800c52ea8d22966f1d2848ca97732e)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a2e800c52ea8d22966f1d2848ca97732e"></a>

Checks whether JoinedMatchTimestamp_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a7c65535d743a82ad5fc25e376cb0c09c)`()` <a id="structFRHAPI__MatchPlayerRequest_1a7c65535d743a82ad5fc25e376cb0c09c"></a>

Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1afe4f3d05a288ea4f801b852778225af9)`() const` <a id="structFRHAPI__MatchPlayerRequest_1afe4f3d05a288ea4f801b852778225af9"></a>

Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a543a8f23122c1907122da6ed6f990b38)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a543a8f23122c1907122da6ed6f990b38"></a>

Gets the value of LeftMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a8505aa64503e6bc728dd46074d059e69)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a8505aa64503e6bc728dd46074d059e69"></a>

Fills OutValue with the value of LeftMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1a49bd35d7d28d01df9584b522982ab755)`()` <a id="structFRHAPI__MatchPlayerRequest_1a49bd35d7d28d01df9584b522982ab755"></a>

Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1a03eeaa429a4b15d1adda7bcaec70ca58)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a03eeaa429a4b15d1adda7bcaec70ca58"></a>

Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ab2cb7804e6141b019f6e3bfeeb1c8a3f)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1ab2cb7804e6141b019f6e3bfeeb1c8a3f"></a>

Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a64ac90f8ec887e499d4a722e356136ae)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a64ac90f8ec887e499d4a722e356136ae"></a>

Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a92c521151fc4476568e2d5165fc66b0e)`()` <a id="structFRHAPI__MatchPlayerRequest_1a92c521151fc4476568e2d5165fc66b0e"></a>

Clears the value of LeftMatchTimestamp_Optional and sets LeftMatchTimestamp_IsSet to false.

#### `public inline FORCEINLINE void `[`SetLeftMatchTimestampToNull`](#structFRHAPI__MatchPlayerRequest_1ab83f40a4187cef52f6a4fd04e76cfdc3)`()` <a id="structFRHAPI__MatchPlayerRequest_1ab83f40a4187cef52f6a4fd04e76cfdc3"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsLeftMatchTimestampNull`](#structFRHAPI__MatchPlayerRequest_1aed26807ee853be9c4d6b4f11db631352)`() const` <a id="structFRHAPI__MatchPlayerRequest_1aed26807ee853be9c4d6b4f11db631352"></a>

Checks whether LeftMatchTimestamp_Optional is set to null.

#### `public inline FORCEINLINE int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a3de5d6cca290240d76796642385e71de)`()` <a id="structFRHAPI__MatchPlayerRequest_1a3de5d6cca290240d76796642385e71de"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a3619b2c931b41d41120167bfea2e06c5)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a3619b2c931b41d41120167bfea2e06c5"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a746e64f489aea294c592d090538f6477)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a746e64f489aea294c592d090538f6477"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a860183a02477e11bbe98ced3eed35a3e)`(int32 & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a860183a02477e11bbe98ced3eed35a3e"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerRequest_1ada629f0f54f9da2a2dfbdae74b02d1a3)`()` <a id="structFRHAPI__MatchPlayerRequest_1ada629f0f54f9da2a2dfbdae74b02d1a3"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerRequest_1a7967772381fc38054b3e1eae1c57ec98)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a7967772381fc38054b3e1eae1c57ec98"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a14650f9062b7d86a26b6b0a8ccea44e8)`(const int32 & NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a14650f9062b7d86a26b6b0a8ccea44e8"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a72da3b5749335f8f3582e00e2f5be5cf)`(int32 && NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a72da3b5749335f8f3582e00e2f5be5cf"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1ab4142426744f327826ef80f70e48dfef)`()` <a id="structFRHAPI__MatchPlayerRequest_1ab4142426744f327826ef80f70e48dfef"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_DurationSeconds`](#structFRHAPI__MatchPlayerRequest_1ae532565e0b521fb5038405e2928dd086)`()` <a id="structFRHAPI__MatchPlayerRequest_1ae532565e0b521fb5038405e2928dd086"></a>

Returns the default value of DurationSeconds.

#### `public inline FORCEINLINE void `[`SetDurationSecondsToNull`](#structFRHAPI__MatchPlayerRequest_1a9ea6a4cfc109371fde7a0be70ea6e702)`()` <a id="structFRHAPI__MatchPlayerRequest_1a9ea6a4cfc109371fde7a0be70ea6e702"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsDurationSecondsNull`](#structFRHAPI__MatchPlayerRequest_1a55de612056511a3683b156fc03fa44b2)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a55de612056511a3683b156fc03fa44b2"></a>

Checks whether DurationSeconds_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a0c0b7c9bc6ffb68a44465f1d2af025c7)`()` <a id="structFRHAPI__MatchPlayerRequest_1a0c0b7c9bc6ffb68a44465f1d2af025c7"></a>

Gets the value of StartingRank_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1abc02e6b941f1be9b9eb3fee10a4fd3e1)`() const` <a id="structFRHAPI__MatchPlayerRequest_1abc02e6b941f1be9b9eb3fee10a4fd3e1"></a>

Gets the value of StartingRank_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1aefcd590ad13008568ababe7446662a89)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1aefcd590ad13008568ababe7446662a89"></a>

Gets the value of StartingRank_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a177c33094ab493543e5da695814f916d)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a177c33094ab493543e5da695814f916d"></a>

Fills OutValue with the value of StartingRank_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1a10bb2b1e7a14d65504f4e3c850d458ff)`()` <a id="structFRHAPI__MatchPlayerRequest_1a10bb2b1e7a14d65504f4e3c850d458ff"></a>

Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1a0c0698dfa88b30bd68af83bf204d6d49)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a0c0698dfa88b30bd68af83bf204d6d49"></a>

Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStartingRank`](#structFRHAPI__MatchPlayerRequest_1ace79c57e529db7d67f9c5ac5cb321afb)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1ace79c57e529db7d67f9c5ac5cb321afb"></a>

Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a231c38b5062355a240a88ac271332515)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a231c38b5062355a240a88ac271332515"></a>

Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true using move semantics.

#### `public inline void `[`ClearStartingRank`](#structFRHAPI__MatchPlayerRequest_1a40de89ab1caa51c9c7b1025708bdc120)`()` <a id="structFRHAPI__MatchPlayerRequest_1a40de89ab1caa51c9c7b1025708bdc120"></a>

Clears the value of StartingRank_Optional and sets StartingRank_IsSet to false.

#### `public inline FORCEINLINE void `[`SetStartingRankToNull`](#structFRHAPI__MatchPlayerRequest_1a345a601bcc371f94b6a1c1407b7355bd)`()` <a id="structFRHAPI__MatchPlayerRequest_1a345a601bcc371f94b6a1c1407b7355bd"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStartingRankNull`](#structFRHAPI__MatchPlayerRequest_1a32dc4d5f410b49e3ded8ea11c6bebc08)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a32dc4d5f410b49e3ded8ea11c6bebc08"></a>

Checks whether StartingRank_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a8795fbb34a58bae8c6e50a4efb3eb036)`()` <a id="structFRHAPI__MatchPlayerRequest_1a8795fbb34a58bae8c6e50a4efb3eb036"></a>

Gets the value of FinishingRank_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a223b2b26b3e06056f075cdf14790e3d5)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a223b2b26b3e06056f075cdf14790e3d5"></a>

Gets the value of FinishingRank_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a8c82c0a7d728781e266d0a60db163262)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a8c82c0a7d728781e266d0a60db163262"></a>

Gets the value of FinishingRank_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a76e56474060423506a0795c45aba3d98)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a76e56474060423506a0795c45aba3d98"></a>

Fills OutValue with the value of FinishingRank_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1a36215f7303859e393fa2d5eecc4498db)`()` <a id="structFRHAPI__MatchPlayerRequest_1a36215f7303859e393fa2d5eecc4498db"></a>

Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1ae39e95daadef2a5c4d22a9700b41a974)`() const` <a id="structFRHAPI__MatchPlayerRequest_1ae39e95daadef2a5c4d22a9700b41a974"></a>

Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a2295ed6645799dbf6e033308207de476)`(const FString & NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a2295ed6645799dbf6e033308207de476"></a>

Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true.

#### `public inline FORCEINLINE void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a6eb83f0be401fb576daac0a5d2be2410)`(FString && NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a6eb83f0be401fb576daac0a5d2be2410"></a>

Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true using move semantics.

#### `public inline void `[`ClearFinishingRank`](#structFRHAPI__MatchPlayerRequest_1ae238318fe913dd80eca373607546ba5d)`()` <a id="structFRHAPI__MatchPlayerRequest_1ae238318fe913dd80eca373607546ba5d"></a>

Clears the value of FinishingRank_Optional and sets FinishingRank_IsSet to false.

#### `public inline FORCEINLINE void `[`SetFinishingRankToNull`](#structFRHAPI__MatchPlayerRequest_1ac29b9da25fcaae87d150f14100389ac3)`()` <a id="structFRHAPI__MatchPlayerRequest_1ac29b9da25fcaae87d150f14100389ac3"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsFinishingRankNull`](#structFRHAPI__MatchPlayerRequest_1a411c2c89a341151d293f33fba477f736)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a411c2c89a341151d293f33fba477f736"></a>

Checks whether FinishingRank_Optional is set to null.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1ac28ff9e67d3ca7d6f22fcc34586a93bc)`()` <a id="structFRHAPI__MatchPlayerRequest_1ac28ff9e67d3ca7d6f22fcc34586a93bc"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1a371b3edaef82f4bd1d8bda2231e41934)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a371b3edaef82f4bd1d8bda2231e41934"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1ae594b6d4a4ce4aba724667ddec9ff949)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1ae594b6d4a4ce4aba724667ddec9ff949"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1a62bdb15b641785ece40b209f24e81ca5)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a62bdb15b641785ece40b209f24e81ca5"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerRequest_1a8e8073dea4732678e4118b82e3e49b93)`()` <a id="structFRHAPI__MatchPlayerRequest_1a8e8073dea4732678e4118b82e3e49b93"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerRequest_1a65e7c0e5b4c8e79924322cf167efc380)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a65e7c0e5b4c8e79924322cf167efc380"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchPlayerRequest_1a13d2fd216a866f947a0b831a218df872)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a13d2fd216a866f947a0b831a218df872"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchPlayerRequest_1a3f643a2b38ede70bcc6e59e28d16a9d2)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a3f643a2b38ede70bcc6e59e28d16a9d2"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchPlayerRequest_1a8793720a3f715e2147e638848d4281dd)`()` <a id="structFRHAPI__MatchPlayerRequest_1a8793720a3f715e2147e638848d4281dd"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCustomDataToNull`](#structFRHAPI__MatchPlayerRequest_1aa30cf73b2fd2ea58fac7da5c6d7d20d0)`()` <a id="structFRHAPI__MatchPlayerRequest_1aa30cf73b2fd2ea58fac7da5c6d7d20d0"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCustomDataNull`](#structFRHAPI__MatchPlayerRequest_1a37340dd30f57882ce8d5e68b1735913a)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a37340dd30f57882ce8d5e68b1735913a"></a>

Checks whether CustomData_Optional is set to null.

