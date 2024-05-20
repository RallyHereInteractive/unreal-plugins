# RHAPI_MatchPlayerRequest <a id="group__RHAPI__MatchPlayerRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchPlayerRequest`](#structFRHAPI__MatchPlayerRequest) | 

## struct `FRHAPI_MatchPlayerRequest` <a id="structFRHAPI__MatchPlayerRequest"></a>

```
struct FRHAPI_MatchPlayerRequest
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__MatchPlayerRequest_1a19837cde1f9227e0cdd8322434238401) | 
`public bool `[`PlayerUuid_IsSet`](#structFRHAPI__MatchPlayerRequest_1a17dc9b16583934a5636848577aa00671) | true if PlayerUuid_Optional has been set to a value
`public FString `[`TeamId_Optional`](#structFRHAPI__MatchPlayerRequest_1a6f9786cc22ffb6cd45f99aeb36e98d37) | 
`public bool `[`TeamId_IsSet`](#structFRHAPI__MatchPlayerRequest_1a0c85d4442ade79f01db4e5176db44d67) | true if TeamId_Optional has been set to a value
`public FString `[`PartySessionId_Optional`](#structFRHAPI__MatchPlayerRequest_1a2ef92bb2358c51fa6851d74f260a6d5c) | 
`public bool `[`PartySessionId_IsSet`](#structFRHAPI__MatchPlayerRequest_1af38f016a761b9849266d04bbe04924e5) | true if PartySessionId_Optional has been set to a value
`public int32 `[`Placement_Optional`](#structFRHAPI__MatchPlayerRequest_1a3afeeb5050e5bc604474aff49dd23b56) | 
`public bool `[`Placement_IsSet`](#structFRHAPI__MatchPlayerRequest_1ab798c4399774bc1cdab2cdbd0a74d0d2) | true if Placement_Optional has been set to a value
`public FDateTime `[`JoinedMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerRequest_1aff3e4b6156388d0a7b15ffee378359ee) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`JoinedMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerRequest_1acfa8f6feefaa4951432829440eb1ad6e) | true if JoinedMatchTimestamp_Optional has been set to a value
`public FDateTime `[`LeftMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerRequest_1a185604bb9817a47698f0ad489f2722fd) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`LeftMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerRequest_1a47585d085f6ae5937158aa7dac92d82a) | true if LeftMatchTimestamp_Optional has been set to a value
`public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchPlayerRequest_1a5286c32827ae4aeda194d5cd9f823430) | 
`public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchPlayerRequest_1af6f99b261646e6d2bb8af922b3a071b0) | true if DurationSeconds_Optional has been set to a value
`public FString `[`StartingRank_Optional`](#structFRHAPI__MatchPlayerRequest_1ae26efcdbda6faff8dd9581b048505119) | 
`public bool `[`StartingRank_IsSet`](#structFRHAPI__MatchPlayerRequest_1ada11c7111ad81637caa5854764ac6ea9) | true if StartingRank_Optional has been set to a value
`public FString `[`FinishingRank_Optional`](#structFRHAPI__MatchPlayerRequest_1a9ada697ca2218908ff247e899d44a914) | 
`public bool `[`FinishingRank_IsSet`](#structFRHAPI__MatchPlayerRequest_1ac792f9f7b607999e92b51be18935ccc1) | true if FinishingRank_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchPlayerRequest_1a43ede4607eca8ce3e5246775533f0f80) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchPlayerRequest_1abd3d0ad7bb274b4e8696d1c3464991f0) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchPlayerRequest_1ac81cf8a8f8799f240749fa2f2fd46920)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchPlayerRequest_1a984670b7b56b80b981dcb56841ec2b0d)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a524b4ead7fefe120148bbfed9599f0c3)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1afe0a8418cca8c0e75209c825c7812045)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1ab546d15bac3cc2edaf057b3b1fab7a89)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a7b6afec15e4e962bca2347ff25e9dac5)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerRequest_1ae66131531b3d92e55e9a92d85a328d66)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerRequest_1a6e60c8420224c66bbea870df5a0c8b48)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1aafcbade9c6feeb461a1bb1b8502d9388)`(FGuid NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1af7600dc9faf86973faea9b5d17151ed7)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1a7a8c25ce2f4e12d450a4d3d61d2be263)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1a2539308d37ef4caa4ba66bfc3771df11)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1aaa59d7b9cfb653dec91e6a8744769833)`(const FString & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1aa0c34d13e6684b42c43994d0ba6c9d1a)`(FString & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerRequest_1af36bc54d82f7f29356c4836d82317187)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerRequest_1aa0c9b53055167fa8f879155c353f18c5)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeamId`](#structFRHAPI__MatchPlayerRequest_1afe2a95866e65280bd78c9f351486062f)`(FString NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline void `[`ClearTeamId`](#structFRHAPI__MatchPlayerRequest_1aefa5628a36827c2102a8ec55e61eeef9)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1ae792ad6680d0852cd2e4d089f147a879)`()` | Gets the value of PartySessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1ade4785b08c70856d623faecbe335a7fd)`() const` | Gets the value of PartySessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1ac17c14a7963614925a4b29535deb9de6)`(const FString & DefaultValue) const` | Gets the value of PartySessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1ade94eb59f3515da1b8cf6897fb0a865a)`(FString & OutValue) const` | Fills OutValue with the value of PartySessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerRequest_1a20c4e7c5606d8cd0dd47e34651c291c7)`()` | Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerRequest_1af14d6c1dd010eba50fd46fb02143de7a)`() const` | Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1ac0dfea49007da108f6da78a0746ac67e)`(FString NewValue)` | Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true.
`public inline void `[`ClearPartySessionId`](#structFRHAPI__MatchPlayerRequest_1aad5ea0198ca5b049f88db6120c546a86)`()` | Clears the value of PartySessionId_Optional and sets PartySessionId_IsSet to false.
`public inline int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a0c9c804225eac5df0119e262e0c04157)`()` | Gets the value of Placement_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a3849372c8ef8851c3cf896749e1c8fe2)`() const` | Gets the value of Placement_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a66c57c7fcebf030fcc7d8dce637231a9)`(const int32 & DefaultValue) const` | Gets the value of Placement_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a95da398964b5a89b5231bead87af77bf)`(int32 & OutValue) const` | Fills OutValue with the value of Placement_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerRequest_1afd1b69c1988d4c9080bb08874fd65a73)`()` | Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerRequest_1a82b5ce0ca0e9d43b5def7d20d91e8c63)`() const` | Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlacement`](#structFRHAPI__MatchPlayerRequest_1a2f73a1f5d3d97a619a7f5cf6aaa79daf)`(int32 NewValue)` | Sets the value of Placement_Optional and also sets Placement_IsSet to true.
`public inline void `[`ClearPlacement`](#structFRHAPI__MatchPlayerRequest_1a07be11fc0fbca570184e8d61e8c48a15)`()` | Clears the value of Placement_Optional and sets Placement_IsSet to false.
`public inline bool `[`IsPlacementDefaultValue`](#structFRHAPI__MatchPlayerRequest_1a7ef74fc2e38fd684d932dd3e0826daa5)`() const` | Returns true if Placement_Optional is set and matches the default value.
`public inline void `[`SetPlacementToDefault`](#structFRHAPI__MatchPlayerRequest_1ade059dc2e57371cd072f042b5ebaabc1)`()` | Sets the value of Placement_Optional to its default and also sets Placement_IsSet to true.
`public inline FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1abea7f594265e45d7ae154f41c4905319)`()` | Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1add0c6fce9c6c687bfb68e69976bcaecd)`() const` | Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a8f1ffb6d2104fbe81bec51c2076cd062)`(const FDateTime & DefaultValue) const` | Gets the value of JoinedMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ad049fd54502b594a70470a3c4d436846)`(FDateTime & OutValue) const` | Fills OutValue with the value of JoinedMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1a2a3722a6b882f829a35bac05488a9a40)`()` | Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1a4475c1bd721503c918acff405d3d67e1)`() const` | Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a35dadad571bc851478240be2a8a74bf7)`(FDateTime NewValue)` | Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true.
`public inline void `[`ClearJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ab303cc0316fa560623b9c0f249d4511a)`()` | Clears the value of JoinedMatchTimestamp_Optional and sets JoinedMatchTimestamp_IsSet to false.
`public inline FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a033f3fd0e5c682d5fb748b3619b55c45)`()` | Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ad5f7b3a41ebd996ceda1f7ec935f5fe2)`() const` | Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a9c1c3ba792ddbf7747b50240a1ab3ef4)`(const FDateTime & DefaultValue) const` | Gets the value of LeftMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1abc4cfd1faca6c0893b1d4b4c0ea28bc4)`(FDateTime & OutValue) const` | Fills OutValue with the value of LeftMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1a4edd9228ef26d6001b04777a88240303)`()` | Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1aa9bf1d671f9e3cdc2a807bac5f606102)`() const` | Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ad87ee1d649c24dc1a3dcf0eef2bbf611)`(FDateTime NewValue)` | Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true.
`public inline void `[`ClearLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a92c521151fc4476568e2d5165fc66b0e)`()` | Clears the value of LeftMatchTimestamp_Optional and sets LeftMatchTimestamp_IsSet to false.
`public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a5651d2bc5607848386f9bbf20596da84)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a6d3b21bca870d4fb7a9d158446bf94a7)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a45e701077aeca0d701c4179d3e65fa37)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a50bcb5ed68b22d8583f6bd2b42322bec)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerRequest_1a25bc6d131156a75aed8577fb0bb72e90)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerRequest_1a5735fb2ce99ad4c03ddcb842aebbbed6)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a40203e928934834a54da97fad789b620)`(int32 NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1ab4142426744f327826ef80f70e48dfef)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchPlayerRequest_1acea250e4524212d6c030295aef2ba7d3)`() const` | Returns true if DurationSeconds_Optional is set and matches the default value.
`public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchPlayerRequest_1a171c171c251e320b1f9315ba4d75feec)`()` | Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.
`public inline FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a5c45d6af3574af4dd0a6609bf3065560)`()` | Gets the value of StartingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a03818f980b4782e5e699425de29dad06)`() const` | Gets the value of StartingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a3a67f12400b787eefaf86a5f7710fb01)`(const FString & DefaultValue) const` | Gets the value of StartingRank_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1aaa1c89b440e5f5e52b50f4548a85d3b2)`(FString & OutValue) const` | Fills OutValue with the value of StartingRank_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1aeea3701af008d7fad71c6227ac189561)`()` | Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1acb864d3dd50185c64a17ad5ad4a1aa5c)`() const` | Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a0989d1d2071ad663cf85d40c0e303784)`(FString NewValue)` | Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true.
`public inline void `[`ClearStartingRank`](#structFRHAPI__MatchPlayerRequest_1a40de89ab1caa51c9c7b1025708bdc120)`()` | Clears the value of StartingRank_Optional and sets StartingRank_IsSet to false.
`public inline FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1ae4807035cf54b3cb09ad1424bbd0d93c)`()` | Gets the value of FinishingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a36498601269f7ca5e132566c33cf6132)`() const` | Gets the value of FinishingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a44db130a29b182d72a263fe0d007622c)`(const FString & DefaultValue) const` | Gets the value of FinishingRank_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1ae01c5c243910f32af4e86d3ca595745f)`(FString & OutValue) const` | Fills OutValue with the value of FinishingRank_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1ab05e76be230d8aafa7cfa8ec415ed62d)`()` | Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1af5071a9c03fea79378bd1c1abddccc64)`() const` | Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a46d5421721b8e221551ac39e95e5466c)`(FString NewValue)` | Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true.
`public inline void `[`ClearFinishingRank`](#structFRHAPI__MatchPlayerRequest_1ae238318fe913dd80eca373607546ba5d)`()` | Clears the value of FinishingRank_Optional and sets FinishingRank_IsSet to false.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1a7c36fcf745e939bb8c636cae4c56aa18)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1a3212f339101da9b2ee522ad768bfa5cd)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1a0e87b2177747d6a218c7eaffe99cba9a)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1a42e88a26da5c27535c69749ae99409c1)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerRequest_1a5c5d377c9e2e75a29e7ab9cb654c2eb2)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerRequest_1a64c55ae7b1bbf1a17fd0d5c81ce2ff11)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchPlayerRequest_1afbf86cf435294a90acb39f71066fc32a)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchPlayerRequest_1a8793720a3f715e2147e638848d4281dd)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### Members

#### `public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__MatchPlayerRequest_1a19837cde1f9227e0cdd8322434238401) <a id="structFRHAPI__MatchPlayerRequest_1a19837cde1f9227e0cdd8322434238401"></a>

#### `public bool `[`PlayerUuid_IsSet`](#structFRHAPI__MatchPlayerRequest_1a17dc9b16583934a5636848577aa00671) <a id="structFRHAPI__MatchPlayerRequest_1a17dc9b16583934a5636848577aa00671"></a>

true if PlayerUuid_Optional has been set to a value

#### `public FString `[`TeamId_Optional`](#structFRHAPI__MatchPlayerRequest_1a6f9786cc22ffb6cd45f99aeb36e98d37) <a id="structFRHAPI__MatchPlayerRequest_1a6f9786cc22ffb6cd45f99aeb36e98d37"></a>

#### `public bool `[`TeamId_IsSet`](#structFRHAPI__MatchPlayerRequest_1a0c85d4442ade79f01db4e5176db44d67) <a id="structFRHAPI__MatchPlayerRequest_1a0c85d4442ade79f01db4e5176db44d67"></a>

true if TeamId_Optional has been set to a value

#### `public FString `[`PartySessionId_Optional`](#structFRHAPI__MatchPlayerRequest_1a2ef92bb2358c51fa6851d74f260a6d5c) <a id="structFRHAPI__MatchPlayerRequest_1a2ef92bb2358c51fa6851d74f260a6d5c"></a>

#### `public bool `[`PartySessionId_IsSet`](#structFRHAPI__MatchPlayerRequest_1af38f016a761b9849266d04bbe04924e5) <a id="structFRHAPI__MatchPlayerRequest_1af38f016a761b9849266d04bbe04924e5"></a>

true if PartySessionId_Optional has been set to a value

#### `public int32 `[`Placement_Optional`](#structFRHAPI__MatchPlayerRequest_1a3afeeb5050e5bc604474aff49dd23b56) <a id="structFRHAPI__MatchPlayerRequest_1a3afeeb5050e5bc604474aff49dd23b56"></a>

#### `public bool `[`Placement_IsSet`](#structFRHAPI__MatchPlayerRequest_1ab798c4399774bc1cdab2cdbd0a74d0d2) <a id="structFRHAPI__MatchPlayerRequest_1ab798c4399774bc1cdab2cdbd0a74d0d2"></a>

true if Placement_Optional has been set to a value

#### `public FDateTime `[`JoinedMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerRequest_1aff3e4b6156388d0a7b15ffee378359ee) <a id="structFRHAPI__MatchPlayerRequest_1aff3e4b6156388d0a7b15ffee378359ee"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`JoinedMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerRequest_1acfa8f6feefaa4951432829440eb1ad6e) <a id="structFRHAPI__MatchPlayerRequest_1acfa8f6feefaa4951432829440eb1ad6e"></a>

true if JoinedMatchTimestamp_Optional has been set to a value

#### `public FDateTime `[`LeftMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerRequest_1a185604bb9817a47698f0ad489f2722fd) <a id="structFRHAPI__MatchPlayerRequest_1a185604bb9817a47698f0ad489f2722fd"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`LeftMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerRequest_1a47585d085f6ae5937158aa7dac92d82a) <a id="structFRHAPI__MatchPlayerRequest_1a47585d085f6ae5937158aa7dac92d82a"></a>

true if LeftMatchTimestamp_Optional has been set to a value

#### `public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchPlayerRequest_1a5286c32827ae4aeda194d5cd9f823430) <a id="structFRHAPI__MatchPlayerRequest_1a5286c32827ae4aeda194d5cd9f823430"></a>

#### `public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchPlayerRequest_1af6f99b261646e6d2bb8af922b3a071b0) <a id="structFRHAPI__MatchPlayerRequest_1af6f99b261646e6d2bb8af922b3a071b0"></a>

true if DurationSeconds_Optional has been set to a value

#### `public FString `[`StartingRank_Optional`](#structFRHAPI__MatchPlayerRequest_1ae26efcdbda6faff8dd9581b048505119) <a id="structFRHAPI__MatchPlayerRequest_1ae26efcdbda6faff8dd9581b048505119"></a>

#### `public bool `[`StartingRank_IsSet`](#structFRHAPI__MatchPlayerRequest_1ada11c7111ad81637caa5854764ac6ea9) <a id="structFRHAPI__MatchPlayerRequest_1ada11c7111ad81637caa5854764ac6ea9"></a>

true if StartingRank_Optional has been set to a value

#### `public FString `[`FinishingRank_Optional`](#structFRHAPI__MatchPlayerRequest_1a9ada697ca2218908ff247e899d44a914) <a id="structFRHAPI__MatchPlayerRequest_1a9ada697ca2218908ff247e899d44a914"></a>

#### `public bool `[`FinishingRank_IsSet`](#structFRHAPI__MatchPlayerRequest_1ac792f9f7b607999e92b51be18935ccc1) <a id="structFRHAPI__MatchPlayerRequest_1ac792f9f7b607999e92b51be18935ccc1"></a>

true if FinishingRank_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchPlayerRequest_1a43ede4607eca8ce3e5246775533f0f80) <a id="structFRHAPI__MatchPlayerRequest_1a43ede4607eca8ce3e5246775533f0f80"></a>

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchPlayerRequest_1abd3d0ad7bb274b4e8696d1c3464991f0) <a id="structFRHAPI__MatchPlayerRequest_1abd3d0ad7bb274b4e8696d1c3464991f0"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchPlayerRequest_1ac81cf8a8f8799f240749fa2f2fd46920)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchPlayerRequest_1ac81cf8a8f8799f240749fa2f2fd46920"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchPlayerRequest_1a984670b7b56b80b981dcb56841ec2b0d)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchPlayerRequest_1a984670b7b56b80b981dcb56841ec2b0d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a524b4ead7fefe120148bbfed9599f0c3)`()` <a id="structFRHAPI__MatchPlayerRequest_1a524b4ead7fefe120148bbfed9599f0c3"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1afe0a8418cca8c0e75209c825c7812045)`() const` <a id="structFRHAPI__MatchPlayerRequest_1afe0a8418cca8c0e75209c825c7812045"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1ab546d15bac3cc2edaf057b3b1fab7a89)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1ab546d15bac3cc2edaf057b3b1fab7a89"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1a7b6afec15e4e962bca2347ff25e9dac5)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a7b6afec15e4e962bca2347ff25e9dac5"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerRequest_1ae66131531b3d92e55e9a92d85a328d66)`()` <a id="structFRHAPI__MatchPlayerRequest_1ae66131531b3d92e55e9a92d85a328d66"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerRequest_1a6e60c8420224c66bbea870df5a0c8b48)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a6e60c8420224c66bbea870df5a0c8b48"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1aafcbade9c6feeb461a1bb1b8502d9388)`(FGuid NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1aafcbade9c6feeb461a1bb1b8502d9388"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__MatchPlayerRequest_1af7600dc9faf86973faea9b5d17151ed7)`()` <a id="structFRHAPI__MatchPlayerRequest_1af7600dc9faf86973faea9b5d17151ed7"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1a7a8c25ce2f4e12d450a4d3d61d2be263)`()` <a id="structFRHAPI__MatchPlayerRequest_1a7a8c25ce2f4e12d450a4d3d61d2be263"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1a2539308d37ef4caa4ba66bfc3771df11)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a2539308d37ef4caa4ba66bfc3771df11"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1aaa59d7b9cfb653dec91e6a8744769833)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1aaa59d7b9cfb653dec91e6a8744769833"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTeamId`](#structFRHAPI__MatchPlayerRequest_1aa0c34d13e6684b42c43994d0ba6c9d1a)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1aa0c34d13e6684b42c43994d0ba6c9d1a"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerRequest_1af36bc54d82f7f29356c4836d82317187)`()` <a id="structFRHAPI__MatchPlayerRequest_1af36bc54d82f7f29356c4836d82317187"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerRequest_1aa0c9b53055167fa8f879155c353f18c5)`() const` <a id="structFRHAPI__MatchPlayerRequest_1aa0c9b53055167fa8f879155c353f18c5"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTeamId`](#structFRHAPI__MatchPlayerRequest_1afe2a95866e65280bd78c9f351486062f)`(FString NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1afe2a95866e65280bd78c9f351486062f"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__MatchPlayerRequest_1aefa5628a36827c2102a8ec55e61eeef9)`()` <a id="structFRHAPI__MatchPlayerRequest_1aefa5628a36827c2102a8ec55e61eeef9"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

#### `public inline FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1ae792ad6680d0852cd2e4d089f147a879)`()` <a id="structFRHAPI__MatchPlayerRequest_1ae792ad6680d0852cd2e4d089f147a879"></a>

Gets the value of PartySessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1ade4785b08c70856d623faecbe335a7fd)`() const` <a id="structFRHAPI__MatchPlayerRequest_1ade4785b08c70856d623faecbe335a7fd"></a>

Gets the value of PartySessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1ac17c14a7963614925a4b29535deb9de6)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1ac17c14a7963614925a4b29535deb9de6"></a>

Gets the value of PartySessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1ade94eb59f3515da1b8cf6897fb0a865a)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1ade94eb59f3515da1b8cf6897fb0a865a"></a>

Fills OutValue with the value of PartySessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerRequest_1a20c4e7c5606d8cd0dd47e34651c291c7)`()` <a id="structFRHAPI__MatchPlayerRequest_1a20c4e7c5606d8cd0dd47e34651c291c7"></a>

Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerRequest_1af14d6c1dd010eba50fd46fb02143de7a)`() const` <a id="structFRHAPI__MatchPlayerRequest_1af14d6c1dd010eba50fd46fb02143de7a"></a>

Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerRequest_1ac0dfea49007da108f6da78a0746ac67e)`(FString NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1ac0dfea49007da108f6da78a0746ac67e"></a>

Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true.

#### `public inline void `[`ClearPartySessionId`](#structFRHAPI__MatchPlayerRequest_1aad5ea0198ca5b049f88db6120c546a86)`()` <a id="structFRHAPI__MatchPlayerRequest_1aad5ea0198ca5b049f88db6120c546a86"></a>

Clears the value of PartySessionId_Optional and sets PartySessionId_IsSet to false.

#### `public inline int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a0c9c804225eac5df0119e262e0c04157)`()` <a id="structFRHAPI__MatchPlayerRequest_1a0c9c804225eac5df0119e262e0c04157"></a>

Gets the value of Placement_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a3849372c8ef8851c3cf896749e1c8fe2)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a3849372c8ef8851c3cf896749e1c8fe2"></a>

Gets the value of Placement_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a66c57c7fcebf030fcc7d8dce637231a9)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a66c57c7fcebf030fcc7d8dce637231a9"></a>

Gets the value of Placement_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlacement`](#structFRHAPI__MatchPlayerRequest_1a95da398964b5a89b5231bead87af77bf)`(int32 & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a95da398964b5a89b5231bead87af77bf"></a>

Fills OutValue with the value of Placement_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerRequest_1afd1b69c1988d4c9080bb08874fd65a73)`()` <a id="structFRHAPI__MatchPlayerRequest_1afd1b69c1988d4c9080bb08874fd65a73"></a>

Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerRequest_1a82b5ce0ca0e9d43b5def7d20d91e8c63)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a82b5ce0ca0e9d43b5def7d20d91e8c63"></a>

Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlacement`](#structFRHAPI__MatchPlayerRequest_1a2f73a1f5d3d97a619a7f5cf6aaa79daf)`(int32 NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a2f73a1f5d3d97a619a7f5cf6aaa79daf"></a>

Sets the value of Placement_Optional and also sets Placement_IsSet to true.

#### `public inline void `[`ClearPlacement`](#structFRHAPI__MatchPlayerRequest_1a07be11fc0fbca570184e8d61e8c48a15)`()` <a id="structFRHAPI__MatchPlayerRequest_1a07be11fc0fbca570184e8d61e8c48a15"></a>

Clears the value of Placement_Optional and sets Placement_IsSet to false.

#### `public inline bool `[`IsPlacementDefaultValue`](#structFRHAPI__MatchPlayerRequest_1a7ef74fc2e38fd684d932dd3e0826daa5)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a7ef74fc2e38fd684d932dd3e0826daa5"></a>

Returns true if Placement_Optional is set and matches the default value.

#### `public inline void `[`SetPlacementToDefault`](#structFRHAPI__MatchPlayerRequest_1ade059dc2e57371cd072f042b5ebaabc1)`()` <a id="structFRHAPI__MatchPlayerRequest_1ade059dc2e57371cd072f042b5ebaabc1"></a>

Sets the value of Placement_Optional to its default and also sets Placement_IsSet to true.

#### `public inline FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1abea7f594265e45d7ae154f41c4905319)`()` <a id="structFRHAPI__MatchPlayerRequest_1abea7f594265e45d7ae154f41c4905319"></a>

Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1add0c6fce9c6c687bfb68e69976bcaecd)`() const` <a id="structFRHAPI__MatchPlayerRequest_1add0c6fce9c6c687bfb68e69976bcaecd"></a>

Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a8f1ffb6d2104fbe81bec51c2076cd062)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a8f1ffb6d2104fbe81bec51c2076cd062"></a>

Gets the value of JoinedMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ad049fd54502b594a70470a3c4d436846)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1ad049fd54502b594a70470a3c4d436846"></a>

Fills OutValue with the value of JoinedMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1a2a3722a6b882f829a35bac05488a9a40)`()` <a id="structFRHAPI__MatchPlayerRequest_1a2a3722a6b882f829a35bac05488a9a40"></a>

Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1a4475c1bd721503c918acff405d3d67e1)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a4475c1bd721503c918acff405d3d67e1"></a>

Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a35dadad571bc851478240be2a8a74bf7)`(FDateTime NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a35dadad571bc851478240be2a8a74bf7"></a>

Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true.

#### `public inline void `[`ClearJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ab303cc0316fa560623b9c0f249d4511a)`()` <a id="structFRHAPI__MatchPlayerRequest_1ab303cc0316fa560623b9c0f249d4511a"></a>

Clears the value of JoinedMatchTimestamp_Optional and sets JoinedMatchTimestamp_IsSet to false.

#### `public inline FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a033f3fd0e5c682d5fb748b3619b55c45)`()` <a id="structFRHAPI__MatchPlayerRequest_1a033f3fd0e5c682d5fb748b3619b55c45"></a>

Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ad5f7b3a41ebd996ceda1f7ec935f5fe2)`() const` <a id="structFRHAPI__MatchPlayerRequest_1ad5f7b3a41ebd996ceda1f7ec935f5fe2"></a>

Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a9c1c3ba792ddbf7747b50240a1ab3ef4)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a9c1c3ba792ddbf7747b50240a1ab3ef4"></a>

Gets the value of LeftMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1abc4cfd1faca6c0893b1d4b4c0ea28bc4)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1abc4cfd1faca6c0893b1d4b4c0ea28bc4"></a>

Fills OutValue with the value of LeftMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1a4edd9228ef26d6001b04777a88240303)`()` <a id="structFRHAPI__MatchPlayerRequest_1a4edd9228ef26d6001b04777a88240303"></a>

Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerRequest_1aa9bf1d671f9e3cdc2a807bac5f606102)`() const` <a id="structFRHAPI__MatchPlayerRequest_1aa9bf1d671f9e3cdc2a807bac5f606102"></a>

Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1ad87ee1d649c24dc1a3dcf0eef2bbf611)`(FDateTime NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1ad87ee1d649c24dc1a3dcf0eef2bbf611"></a>

Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true.

#### `public inline void `[`ClearLeftMatchTimestamp`](#structFRHAPI__MatchPlayerRequest_1a92c521151fc4476568e2d5165fc66b0e)`()` <a id="structFRHAPI__MatchPlayerRequest_1a92c521151fc4476568e2d5165fc66b0e"></a>

Clears the value of LeftMatchTimestamp_Optional and sets LeftMatchTimestamp_IsSet to false.

#### `public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a5651d2bc5607848386f9bbf20596da84)`()` <a id="structFRHAPI__MatchPlayerRequest_1a5651d2bc5607848386f9bbf20596da84"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a6d3b21bca870d4fb7a9d158446bf94a7)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a6d3b21bca870d4fb7a9d158446bf94a7"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a45e701077aeca0d701c4179d3e65fa37)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a45e701077aeca0d701c4179d3e65fa37"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a50bcb5ed68b22d8583f6bd2b42322bec)`(int32 & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a50bcb5ed68b22d8583f6bd2b42322bec"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerRequest_1a25bc6d131156a75aed8577fb0bb72e90)`()` <a id="structFRHAPI__MatchPlayerRequest_1a25bc6d131156a75aed8577fb0bb72e90"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerRequest_1a5735fb2ce99ad4c03ddcb842aebbbed6)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a5735fb2ce99ad4c03ddcb842aebbbed6"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1a40203e928934834a54da97fad789b620)`(int32 NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a40203e928934834a54da97fad789b620"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchPlayerRequest_1ab4142426744f327826ef80f70e48dfef)`()` <a id="structFRHAPI__MatchPlayerRequest_1ab4142426744f327826ef80f70e48dfef"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

#### `public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchPlayerRequest_1acea250e4524212d6c030295aef2ba7d3)`() const` <a id="structFRHAPI__MatchPlayerRequest_1acea250e4524212d6c030295aef2ba7d3"></a>

Returns true if DurationSeconds_Optional is set and matches the default value.

#### `public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchPlayerRequest_1a171c171c251e320b1f9315ba4d75feec)`()` <a id="structFRHAPI__MatchPlayerRequest_1a171c171c251e320b1f9315ba4d75feec"></a>

Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.

#### `public inline FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a5c45d6af3574af4dd0a6609bf3065560)`()` <a id="structFRHAPI__MatchPlayerRequest_1a5c45d6af3574af4dd0a6609bf3065560"></a>

Gets the value of StartingRank_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a03818f980b4782e5e699425de29dad06)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a03818f980b4782e5e699425de29dad06"></a>

Gets the value of StartingRank_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a3a67f12400b787eefaf86a5f7710fb01)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a3a67f12400b787eefaf86a5f7710fb01"></a>

Gets the value of StartingRank_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStartingRank`](#structFRHAPI__MatchPlayerRequest_1aaa1c89b440e5f5e52b50f4548a85d3b2)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1aaa1c89b440e5f5e52b50f4548a85d3b2"></a>

Fills OutValue with the value of StartingRank_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1aeea3701af008d7fad71c6227ac189561)`()` <a id="structFRHAPI__MatchPlayerRequest_1aeea3701af008d7fad71c6227ac189561"></a>

Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1acb864d3dd50185c64a17ad5ad4a1aa5c)`() const` <a id="structFRHAPI__MatchPlayerRequest_1acb864d3dd50185c64a17ad5ad4a1aa5c"></a>

Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStartingRank`](#structFRHAPI__MatchPlayerRequest_1a0989d1d2071ad663cf85d40c0e303784)`(FString NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a0989d1d2071ad663cf85d40c0e303784"></a>

Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true.

#### `public inline void `[`ClearStartingRank`](#structFRHAPI__MatchPlayerRequest_1a40de89ab1caa51c9c7b1025708bdc120)`()` <a id="structFRHAPI__MatchPlayerRequest_1a40de89ab1caa51c9c7b1025708bdc120"></a>

Clears the value of StartingRank_Optional and sets StartingRank_IsSet to false.

#### `public inline FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1ae4807035cf54b3cb09ad1424bbd0d93c)`()` <a id="structFRHAPI__MatchPlayerRequest_1ae4807035cf54b3cb09ad1424bbd0d93c"></a>

Gets the value of FinishingRank_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a36498601269f7ca5e132566c33cf6132)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a36498601269f7ca5e132566c33cf6132"></a>

Gets the value of FinishingRank_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a44db130a29b182d72a263fe0d007622c)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a44db130a29b182d72a263fe0d007622c"></a>

Gets the value of FinishingRank_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1ae01c5c243910f32af4e86d3ca595745f)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1ae01c5c243910f32af4e86d3ca595745f"></a>

Fills OutValue with the value of FinishingRank_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1ab05e76be230d8aafa7cfa8ec415ed62d)`()` <a id="structFRHAPI__MatchPlayerRequest_1ab05e76be230d8aafa7cfa8ec415ed62d"></a>

Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerRequest_1af5071a9c03fea79378bd1c1abddccc64)`() const` <a id="structFRHAPI__MatchPlayerRequest_1af5071a9c03fea79378bd1c1abddccc64"></a>

Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerRequest_1a46d5421721b8e221551ac39e95e5466c)`(FString NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1a46d5421721b8e221551ac39e95e5466c"></a>

Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true.

#### `public inline void `[`ClearFinishingRank`](#structFRHAPI__MatchPlayerRequest_1ae238318fe913dd80eca373607546ba5d)`()` <a id="structFRHAPI__MatchPlayerRequest_1ae238318fe913dd80eca373607546ba5d"></a>

Clears the value of FinishingRank_Optional and sets FinishingRank_IsSet to false.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1a7c36fcf745e939bb8c636cae4c56aa18)`()` <a id="structFRHAPI__MatchPlayerRequest_1a7c36fcf745e939bb8c636cae4c56aa18"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1a3212f339101da9b2ee522ad768bfa5cd)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a3212f339101da9b2ee522ad768bfa5cd"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1a0e87b2177747d6a218c7eaffe99cba9a)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a0e87b2177747d6a218c7eaffe99cba9a"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchPlayerRequest_1a42e88a26da5c27535c69749ae99409c1)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchPlayerRequest_1a42e88a26da5c27535c69749ae99409c1"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerRequest_1a5c5d377c9e2e75a29e7ab9cb654c2eb2)`()` <a id="structFRHAPI__MatchPlayerRequest_1a5c5d377c9e2e75a29e7ab9cb654c2eb2"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerRequest_1a64c55ae7b1bbf1a17fd0d5c81ce2ff11)`() const` <a id="structFRHAPI__MatchPlayerRequest_1a64c55ae7b1bbf1a17fd0d5c81ce2ff11"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchPlayerRequest_1afbf86cf435294a90acb39f71066fc32a)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__MatchPlayerRequest_1afbf86cf435294a90acb39f71066fc32a"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchPlayerRequest_1a8793720a3f715e2147e638848d4281dd)`()` <a id="structFRHAPI__MatchPlayerRequest_1a8793720a3f715e2147e638848d4281dd"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

