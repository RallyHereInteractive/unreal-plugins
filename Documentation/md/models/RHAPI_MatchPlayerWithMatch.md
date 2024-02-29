# RHAPI_MatchPlayerWithMatch <a id="group__RHAPI__MatchPlayerWithMatch"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchPlayerWithMatch`](#structFRHAPI__MatchPlayerWithMatch) | 

## struct `FRHAPI_MatchPlayerWithMatch` <a id="structFRHAPI__MatchPlayerWithMatch"></a>

```
struct FRHAPI_MatchPlayerWithMatch
  : public FRHAPI_Model
```

#### Summary

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
`public FString `[`PartySessionId_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a33113c2d5725a1adc74d80f76185a088) | 
`public bool `[`PartySessionId_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1ae40280efae3736c53d0b5577303fcb9f) | true if PartySessionId_Optional has been set to a value
`public int32 `[`Placement_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a468c203565f6fa49f9966520bde4d216) | 
`public bool `[`Placement_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a086fbb5cbce91eb0e14092ec37883887) | true if Placement_Optional has been set to a value
`public FDateTime `[`JoinedMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a0dfbc1fdc991d442dd78223dab75dbec) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`JoinedMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a5f30d808b4a4857d1529f90b85e2a86e) | true if JoinedMatchTimestamp_Optional has been set to a value
`public FDateTime `[`LeftMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a9c7e3fbc7f78f4f0a8b6ed640db4911e) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`LeftMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a49e709764291eb1d0534a201f6b2af28) | true if LeftMatchTimestamp_Optional has been set to a value
`public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchPlayerWithMatch_1ac10fcb44774562dc81d1831e974358f4) | 
`public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a12c12511ca486db3b2d2174619779a84) | true if DurationSeconds_Optional has been set to a value
`public FString `[`StartingRank_Optional`](#structFRHAPI__MatchPlayerWithMatch_1afe7bfaa286e20e0f3e3f40b2b5327986) | 
`public bool `[`StartingRank_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1aeec84d6aa59c65e6f9e6f8221db26a94) | true if StartingRank_Optional has been set to a value
`public FString `[`FinishingRank_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a9a7bb6bbd3a6c04c00acffdd690fd2ee) | 
`public bool `[`FinishingRank_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a0239721c1257495159b5a922e6a9c055) | true if FinishingRank_Optional has been set to a value
`public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`CustomData_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a2809c75993a1dd8ab8bb54211f7bf5f1) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a1d6bdbf177397a5d6c436d159aa0cd98) | true if CustomData_Optional has been set to a value
`public `[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` `[`Match`](#structFRHAPI__MatchPlayerWithMatch_1ade22f8275e0227e90087168e4c044507) | Match the player was in.
`public virtual bool `[`FromJson`](#structFRHAPI__MatchPlayerWithMatch_1a00719e04153383ea168b6e77c8900f6c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchPlayerWithMatch_1ac7789349a1bb066bd54984ec37f94390)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aa8f81ebc62eb89a7421f89ac7cfaeae9)`()` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a48448ce7cd00d40d860d727d6e1437b7)`() const` | Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a81f3a1310a8b4b9ab6905002818419f1)`(const FDateTime & DefaultValue) const` | Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aa4afabce04335565c0121bf0a57e6ea7)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aa0f632f6d7578d529b5fb3f20e0ae990)`()` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a98821fce9bd961bf952d794c471c88ce)`() const` | Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a359dc9d78f4fe4b4c287a4b0fe3ac59a)`(FDateTime NewValue)` | Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.
`public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a8ce696255a3018379356e8c2fe0cc5a2)`()` | Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.
`public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a3205515c325938c4bee06d90fe91fb6c)`()` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1afd0ba7565093829a10b3db652c9cb144)`() const` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aab33cfffee491abd371afdf53a724c90)`(const FDateTime & DefaultValue) const` | Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a184ff0f198843fe340875d5b12c332d5)`(FDateTime & OutValue) const` | Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a3bfb888df565ff60410f5962997c02e8)`()` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a8223cd5ef1d785cc639507fd04d9bc3b)`() const` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a6367179d66f5ce0f1511eab08b0b7770)`(FDateTime NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.
`public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a314a508998777fc801cca1c11828fc24)`()` | Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1af68ddb1c7c8b330051813bbcbeddb9d5)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a3e39db9fd72852e3a42108ab781bc8fe)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a65c9700bb2c0cd794df173255a273c3b)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a291626fa4d01c1136eed79a881a2dae9)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a4dcf8c768b15825ed617d9e227c9a896)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aee23148f15701a720502296dc9ae71c8)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1ad6d27d59c32f5fdb170503a575713b05)`(FGuid NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a3dbf12033fe77ebad938f4f8bd00e4b9)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1ac1d506916f528477ac16f59d3939f2b1)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a962cf97c9dd76ae74763411636bd456d)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a6f61eb583587b6450173e0f6238ad8ac)`(const FString & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a86721154ff0747defe41825a5d1bc932)`(FString & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a2cf9d90a9f6afa88f4e810093fc5818a)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a18c81405a1bd4f64d0b1c69108260903)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1afbcc81964b0d3e4b4f72b2705b86db0f)`(FString NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline void `[`ClearTeamId`](#structFRHAPI__MatchPlayerWithMatch_1ae786e20e4ef264737dfdd652ffa8dd53)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1a9b87135f81c2808975d06b6054c72107)`()` | Gets the value of PartySessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1a954f34fb9dff64ff12ab37bf674daf51)`() const` | Gets the value of PartySessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1a4b08f792c6f87cbe280e3d134e6b5a69)`(const FString & DefaultValue) const` | Gets the value of PartySessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1ad5a3639b61a7215e15b69c18a1467f65)`(FString & OutValue) const` | Fills OutValue with the value of PartySessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a9389787891442ad68dfa23695d6fc8c4)`()` | Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a8cf36de02631975b1258235452a803a1)`() const` | Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1aca5b6eceabf956c8713b009e64a3c74f)`(FString NewValue)` | Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true.
`public inline void `[`ClearPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1ab0c9bafe1fe1b0857eae325acb587bb8)`()` | Clears the value of PartySessionId_Optional and sets PartySessionId_IsSet to false.
`public inline int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a53e39e303dfd6b34aebee3418a3ca669)`()` | Gets the value of Placement_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a30d717b08d7617fb843768a8a54ed3a0)`() const` | Gets the value of Placement_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a28ae05ad2fb4af5182852ad6d700477b)`(const int32 & DefaultValue) const` | Gets the value of Placement_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a5bc2bdb587241bfe48df47c63cb15cd7)`(int32 & OutValue) const` | Fills OutValue with the value of Placement_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerWithMatch_1af28df41b10041641439c770dcba3d6fb)`()` | Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a76323074c25400ef1fadeefdc8b22ee6)`() const` | Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1abb9c0d02b170d1776b5be384718f4a67)`(int32 NewValue)` | Sets the value of Placement_Optional and also sets Placement_IsSet to true.
`public inline void `[`ClearPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a5d88bbe1e747ed4fde8a09646bed27d6)`()` | Clears the value of Placement_Optional and sets Placement_IsSet to false.
`public inline bool `[`IsPlacementDefaultValue`](#structFRHAPI__MatchPlayerWithMatch_1adbd55a069d0102cbe9e75d04dc874428)`() const` | Returns true if Placement_Optional is set and matches the default value.
`public inline void `[`SetPlacementToDefault`](#structFRHAPI__MatchPlayerWithMatch_1afe2d5e1393af77f79778e832a6e124e2)`()` | Sets the value of Placement_Optional to its default and also sets Placement_IsSet to true.
`public inline FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a965df1305f0a1df1231dcc5ae58a7ca9)`()` | Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aaf1c74db42c3dab99046c1bf1cdb5e42)`() const` | Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a583e0e83a47a274fbdb19e6b7d1dbc9c)`(const FDateTime & DefaultValue) const` | Gets the value of JoinedMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a9dbec70c5c63a41e27b2f6e093c54705)`(FDateTime & OutValue) const` | Fills OutValue with the value of JoinedMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aac1be2dd11dc1927b7fb7b42d8bfe86b)`()` | Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a4aefb589eb7c14945a9649a1d0945779)`() const` | Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a0e1d67427cb7a36950723b2adbaca8bd)`(FDateTime NewValue)` | Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true.
`public inline void `[`ClearJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1abae34d5cfc3bff2dd51e229e96a43855)`()` | Clears the value of JoinedMatchTimestamp_Optional and sets JoinedMatchTimestamp_IsSet to false.
`public inline FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a09f5313ad1ecd6085965daaebc79f7f4)`()` | Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a1177367a9b74447345a74db785d10795)`() const` | Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aec2b75f59f1ed0d729b85675d39c94f9)`(const FDateTime & DefaultValue) const` | Gets the value of LeftMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a9e52d9cd8e77028e90510cf9d7dbec39)`(FDateTime & OutValue) const` | Fills OutValue with the value of LeftMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aa1ae284c8db0da0423991391e6cb2572)`()` | Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a98d18e8a9f4b84e9cc512e9e48de05d3)`() const` | Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a36907cf1bb0ed9cae9f270e32e2a3c6c)`(FDateTime NewValue)` | Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true.
`public inline void `[`ClearLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a9824e1b54f752e7cc9936942826fd2d0)`()` | Clears the value of LeftMatchTimestamp_Optional and sets LeftMatchTimestamp_IsSet to false.
`public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a25b5cf59d5a43e46e72e3fb04ce38410)`()` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a66564db814173f76da5eaddf592e184e)`() const` | Gets the value of DurationSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1ab134d9d42ca6c294a77c8cdc0671d201)`(const int32 & DefaultValue) const` | Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a2a7f8c81e681d721c99ff311c01c9c71)`(int32 & OutValue) const` | Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a1d56676cbe9c86d05c7483a5eafd4f68)`()` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerWithMatch_1af99c3acff465956562af8a607b2a46ad)`() const` | Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a9c176ee7ffaf2d62f8a68b57fbdb06f2)`(int32 NewValue)` | Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.
`public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a0ecdc5e12f71bc0d02f402229205d3c4)`()` | Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.
`public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchPlayerWithMatch_1a29ba09c1078ffcf1f88a15634cdee9a2)`() const` | Returns true if DurationSeconds_Optional is set and matches the default value.
`public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchPlayerWithMatch_1ab273feafe8a95a5d26528a655a99dec6)`()` | Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.
`public inline FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1aacb409ce999a54de449895b40c30e371)`()` | Gets the value of StartingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a877a7017830a65d7475151a7b99f0032)`() const` | Gets the value of StartingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a9f7580c1fa37524660eab2dbfe997feb)`(const FString & DefaultValue) const` | Gets the value of StartingRank_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a235f3a980254e68a2aa2c310790343f6)`(FString & OutValue) const` | Fills OutValue with the value of StartingRank_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1adf7d98c0df8dc214903acbeb366e3ff9)`()` | Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a7a351caba5674742b0b25cef2e745a78)`() const` | Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a91e73ed8ffa11e1a49e404d04d7c359a)`(FString NewValue)` | Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true.
`public inline void `[`ClearStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1aa3f553837d1d00f98f5b8288c5d9008f)`()` | Clears the value of StartingRank_Optional and sets StartingRank_IsSet to false.
`public inline FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a062a8980237a14560c0da668dbf71efa)`()` | Gets the value of FinishingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1abde80907a0a7795758115456f8d5a30c)`() const` | Gets the value of FinishingRank_Optional, regardless of it having been set.
`public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a75a5466a76a264428fac4f2b22bb9ef6)`(const FString & DefaultValue) const` | Gets the value of FinishingRank_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a12da2ec0385822aff5fb80cf6a5b0f67)`(FString & OutValue) const` | Fills OutValue with the value of FinishingRank_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aea919809b63cdaa4df1746d49619207b)`()` | Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aef3470716b4ab692d8b88639cc12d683)`() const` | Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a5199cc37f0433b0e873b66289d85faf1)`(FString NewValue)` | Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true.
`public inline void `[`ClearFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a82d8cbc73e9caa7fb977cba81ec493f1)`()` | Clears the value of FinishingRank_Optional and sets FinishingRank_IsSet to false.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a3b4412eeac10f6646ebe69fff9bde57a)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1ab6d998c48ba4017cf2d5a58bf987e209)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a806d237e85f826d36941c7b318586123)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a512d0df50d804bcd952a8742294a205b)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a460374376f551b057bc562d2cdba7f7b)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aa07fa69146f6b89b90850f8466d8ca06)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1ae224238caa43e5ca0491731a87ad604c)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a64ebb116326952d6dbcc9e93345e9132)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline `[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` & `[`GetMatch`](#structFRHAPI__MatchPlayerWithMatch_1a812d7e285444a4a4f3458c32bfcabd7c)`()` | Gets the value of Match.
`public inline const `[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` & `[`GetMatch`](#structFRHAPI__MatchPlayerWithMatch_1a8353a40289beee854be294896714878e)`() const` | Gets the value of Match.
`public inline void `[`SetMatch`](#structFRHAPI__MatchPlayerWithMatch_1a9218553977c7c9661613f43ff8d56a3d)`(`[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` NewValue)` | Sets the value of Match.

#### Members

#### `public FDateTime `[`LastModifiedTimestamp_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a8f3d72b757e8cdc329c00eef6c84adbf) <a id="structFRHAPI__MatchPlayerWithMatch_1a8f3d72b757e8cdc329c00eef6c84adbf"></a>

Timestamp of when the resource was last modified.

<br>
#### `public bool `[`LastModifiedTimestamp_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a655231515385a05a2658201cdb48db76) <a id="structFRHAPI__MatchPlayerWithMatch_1a655231515385a05a2658201cdb48db76"></a>

true if LastModifiedTimestamp_Optional has been set to a value

<br>
#### `public FDateTime `[`CreatedTimestamp_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a1a1d72a826c74444025747c8783ef4c5) <a id="structFRHAPI__MatchPlayerWithMatch_1a1a1d72a826c74444025747c8783ef4c5"></a>

Timestamp of when the resource was created.

<br>
#### `public bool `[`CreatedTimestamp_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a2c1907e5c83e6b58ffffa372a6045ed2) <a id="structFRHAPI__MatchPlayerWithMatch_1a2c1907e5c83e6b58ffffa372a6045ed2"></a>

true if CreatedTimestamp_Optional has been set to a value

<br>
#### `public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__MatchPlayerWithMatch_1afcfd33f422d4b164440914ad78a91169) <a id="structFRHAPI__MatchPlayerWithMatch_1afcfd33f422d4b164440914ad78a91169"></a>

<br>
#### `public bool `[`PlayerUuid_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1adc40603cee0df30e3b5912ccdf03fd43) <a id="structFRHAPI__MatchPlayerWithMatch_1adc40603cee0df30e3b5912ccdf03fd43"></a>

true if PlayerUuid_Optional has been set to a value

<br>
#### `public FString `[`TeamId_Optional`](#structFRHAPI__MatchPlayerWithMatch_1adb7e94958bc14d2ae43bfa3eb993be91) <a id="structFRHAPI__MatchPlayerWithMatch_1adb7e94958bc14d2ae43bfa3eb993be91"></a>

<br>
#### `public bool `[`TeamId_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1aa0d3db755a44d6fe6e2f58ad95d1d33b) <a id="structFRHAPI__MatchPlayerWithMatch_1aa0d3db755a44d6fe6e2f58ad95d1d33b"></a>

true if TeamId_Optional has been set to a value

<br>
#### `public FString `[`PartySessionId_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a33113c2d5725a1adc74d80f76185a088) <a id="structFRHAPI__MatchPlayerWithMatch_1a33113c2d5725a1adc74d80f76185a088"></a>

<br>
#### `public bool `[`PartySessionId_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1ae40280efae3736c53d0b5577303fcb9f) <a id="structFRHAPI__MatchPlayerWithMatch_1ae40280efae3736c53d0b5577303fcb9f"></a>

true if PartySessionId_Optional has been set to a value

<br>
#### `public int32 `[`Placement_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a468c203565f6fa49f9966520bde4d216) <a id="structFRHAPI__MatchPlayerWithMatch_1a468c203565f6fa49f9966520bde4d216"></a>

<br>
#### `public bool `[`Placement_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a086fbb5cbce91eb0e14092ec37883887) <a id="structFRHAPI__MatchPlayerWithMatch_1a086fbb5cbce91eb0e14092ec37883887"></a>

true if Placement_Optional has been set to a value

<br>
#### `public FDateTime `[`JoinedMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a0dfbc1fdc991d442dd78223dab75dbec) <a id="structFRHAPI__MatchPlayerWithMatch_1a0dfbc1fdc991d442dd78223dab75dbec"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

<br>
#### `public bool `[`JoinedMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a5f30d808b4a4857d1529f90b85e2a86e) <a id="structFRHAPI__MatchPlayerWithMatch_1a5f30d808b4a4857d1529f90b85e2a86e"></a>

true if JoinedMatchTimestamp_Optional has been set to a value

<br>
#### `public FDateTime `[`LeftMatchTimestamp_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a9c7e3fbc7f78f4f0a8b6ed640db4911e) <a id="structFRHAPI__MatchPlayerWithMatch_1a9c7e3fbc7f78f4f0a8b6ed640db4911e"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

<br>
#### `public bool `[`LeftMatchTimestamp_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a49e709764291eb1d0534a201f6b2af28) <a id="structFRHAPI__MatchPlayerWithMatch_1a49e709764291eb1d0534a201f6b2af28"></a>

true if LeftMatchTimestamp_Optional has been set to a value

<br>
#### `public int32 `[`DurationSeconds_Optional`](#structFRHAPI__MatchPlayerWithMatch_1ac10fcb44774562dc81d1831e974358f4) <a id="structFRHAPI__MatchPlayerWithMatch_1ac10fcb44774562dc81d1831e974358f4"></a>

<br>
#### `public bool `[`DurationSeconds_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a12c12511ca486db3b2d2174619779a84) <a id="structFRHAPI__MatchPlayerWithMatch_1a12c12511ca486db3b2d2174619779a84"></a>

true if DurationSeconds_Optional has been set to a value

<br>
#### `public FString `[`StartingRank_Optional`](#structFRHAPI__MatchPlayerWithMatch_1afe7bfaa286e20e0f3e3f40b2b5327986) <a id="structFRHAPI__MatchPlayerWithMatch_1afe7bfaa286e20e0f3e3f40b2b5327986"></a>

<br>
#### `public bool `[`StartingRank_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1aeec84d6aa59c65e6f9e6f8221db26a94) <a id="structFRHAPI__MatchPlayerWithMatch_1aeec84d6aa59c65e6f9e6f8221db26a94"></a>

true if StartingRank_Optional has been set to a value

<br>
#### `public FString `[`FinishingRank_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a9a7bb6bbd3a6c04c00acffdd690fd2ee) <a id="structFRHAPI__MatchPlayerWithMatch_1a9a7bb6bbd3a6c04c00acffdd690fd2ee"></a>

<br>
#### `public bool `[`FinishingRank_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a0239721c1257495159b5a922e6a9c055) <a id="structFRHAPI__MatchPlayerWithMatch_1a0239721c1257495159b5a922e6a9c055"></a>

true if FinishingRank_Optional has been set to a value

<br>
#### `public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`CustomData_Optional`](#structFRHAPI__MatchPlayerWithMatch_1a2809c75993a1dd8ab8bb54211f7bf5f1) <a id="structFRHAPI__MatchPlayerWithMatch_1a2809c75993a1dd8ab8bb54211f7bf5f1"></a>

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchPlayerWithMatch_1a1d6bdbf177397a5d6c436d159aa0cd98) <a id="structFRHAPI__MatchPlayerWithMatch_1a1d6bdbf177397a5d6c436d159aa0cd98"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public `[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` `[`Match`](#structFRHAPI__MatchPlayerWithMatch_1ade22f8275e0227e90087168e4c044507) <a id="structFRHAPI__MatchPlayerWithMatch_1ade22f8275e0227e90087168e4c044507"></a>

Match the player was in.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchPlayerWithMatch_1a00719e04153383ea168b6e77c8900f6c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a00719e04153383ea168b6e77c8900f6c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchPlayerWithMatch_1ac7789349a1bb066bd54984ec37f94390)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchPlayerWithMatch_1ac7789349a1bb066bd54984ec37f94390"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aa8f81ebc62eb89a7421f89ac7cfaeae9)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1aa8f81ebc62eb89a7421f89ac7cfaeae9"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a48448ce7cd00d40d860d727d6e1437b7)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a48448ce7cd00d40d860d727d6e1437b7"></a>

Gets the value of LastModifiedTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a81f3a1310a8b4b9ab6905002818419f1)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a81f3a1310a8b4b9ab6905002818419f1"></a>

Gets the value of LastModifiedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aa4afabce04335565c0121bf0a57e6ea7)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1aa4afabce04335565c0121bf0a57e6ea7"></a>

Fills OutValue with the value of LastModifiedTimestamp_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aa0f632f6d7578d529b5fb3f20e0ae990)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1aa0f632f6d7578d529b5fb3f20e0ae990"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FDateTime * `[`GetLastModifiedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a98821fce9bd961bf952d794c471c88ce)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a98821fce9bd961bf952d794c471c88ce"></a>

Returns a pointer to LastModifiedTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a359dc9d78f4fe4b4c287a4b0fe3ac59a)`(FDateTime NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a359dc9d78f4fe4b4c287a4b0fe3ac59a"></a>

Sets the value of LastModifiedTimestamp_Optional and also sets LastModifiedTimestamp_IsSet to true.

<br>
#### `public inline void `[`ClearLastModifiedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a8ce696255a3018379356e8c2fe0cc5a2)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a8ce696255a3018379356e8c2fe0cc5a2"></a>

Clears the value of LastModifiedTimestamp_Optional and sets LastModifiedTimestamp_IsSet to false.

<br>
#### `public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a3205515c325938c4bee06d90fe91fb6c)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a3205515c325938c4bee06d90fe91fb6c"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1afd0ba7565093829a10b3db652c9cb144)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1afd0ba7565093829a10b3db652c9cb144"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aab33cfffee491abd371afdf53a724c90)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1aab33cfffee491abd371afdf53a724c90"></a>

Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a184ff0f198843fe340875d5b12c332d5)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a184ff0f198843fe340875d5b12c332d5"></a>

Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a3bfb888df565ff60410f5962997c02e8)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a3bfb888df565ff60410f5962997c02e8"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a8223cd5ef1d785cc639507fd04d9bc3b)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a8223cd5ef1d785cc639507fd04d9bc3b"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a6367179d66f5ce0f1511eab08b0b7770)`(FDateTime NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a6367179d66f5ce0f1511eab08b0b7770"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.

<br>
#### `public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a314a508998777fc801cca1c11828fc24)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a314a508998777fc801cca1c11828fc24"></a>

Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.

<br>
#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1af68ddb1c7c8b330051813bbcbeddb9d5)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1af68ddb1c7c8b330051813bbcbeddb9d5"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a3e39db9fd72852e3a42108ab781bc8fe)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a3e39db9fd72852e3a42108ab781bc8fe"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a65c9700bb2c0cd794df173255a273c3b)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a65c9700bb2c0cd794df173255a273c3b"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a291626fa4d01c1136eed79a881a2dae9)`(FGuid & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a291626fa4d01c1136eed79a881a2dae9"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a4dcf8c768b15825ed617d9e227c9a896)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a4dcf8c768b15825ed617d9e227c9a896"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aee23148f15701a720502296dc9ae71c8)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1aee23148f15701a720502296dc9ae71c8"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1ad6d27d59c32f5fdb170503a575713b05)`(FGuid NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1ad6d27d59c32f5fdb170503a575713b05"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

<br>
#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__MatchPlayerWithMatch_1a3dbf12033fe77ebad938f4f8bd00e4b9)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a3dbf12033fe77ebad938f4f8bd00e4b9"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

<br>
#### `public inline FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1ac1d506916f528477ac16f59d3939f2b1)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1ac1d506916f528477ac16f59d3939f2b1"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a962cf97c9dd76ae74763411636bd456d)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a962cf97c9dd76ae74763411636bd456d"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a6f61eb583587b6450173e0f6238ad8ac)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a6f61eb583587b6450173e0f6238ad8ac"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1a86721154ff0747defe41825a5d1bc932)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a86721154ff0747defe41825a5d1bc932"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a2cf9d90a9f6afa88f4e810093fc5818a)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a2cf9d90a9f6afa88f4e810093fc5818a"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetTeamIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a18c81405a1bd4f64d0b1c69108260903)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a18c81405a1bd4f64d0b1c69108260903"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetTeamId`](#structFRHAPI__MatchPlayerWithMatch_1afbcc81964b0d3e4b4f72b2705b86db0f)`(FString NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1afbcc81964b0d3e4b4f72b2705b86db0f"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

<br>
#### `public inline void `[`ClearTeamId`](#structFRHAPI__MatchPlayerWithMatch_1ae786e20e4ef264737dfdd652ffa8dd53)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1ae786e20e4ef264737dfdd652ffa8dd53"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

<br>
#### `public inline FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1a9b87135f81c2808975d06b6054c72107)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a9b87135f81c2808975d06b6054c72107"></a>

Gets the value of PartySessionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1a954f34fb9dff64ff12ab37bf674daf51)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a954f34fb9dff64ff12ab37bf674daf51"></a>

Gets the value of PartySessionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1a4b08f792c6f87cbe280e3d134e6b5a69)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a4b08f792c6f87cbe280e3d134e6b5a69"></a>

Gets the value of PartySessionId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1ad5a3639b61a7215e15b69c18a1467f65)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1ad5a3639b61a7215e15b69c18a1467f65"></a>

Fills OutValue with the value of PartySessionId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a9389787891442ad68dfa23695d6fc8c4)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a9389787891442ad68dfa23695d6fc8c4"></a>

Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetPartySessionIdOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a8cf36de02631975b1258235452a803a1)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a8cf36de02631975b1258235452a803a1"></a>

Returns a pointer to PartySessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1aca5b6eceabf956c8713b009e64a3c74f)`(FString NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1aca5b6eceabf956c8713b009e64a3c74f"></a>

Sets the value of PartySessionId_Optional and also sets PartySessionId_IsSet to true.

<br>
#### `public inline void `[`ClearPartySessionId`](#structFRHAPI__MatchPlayerWithMatch_1ab0c9bafe1fe1b0857eae325acb587bb8)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1ab0c9bafe1fe1b0857eae325acb587bb8"></a>

Clears the value of PartySessionId_Optional and sets PartySessionId_IsSet to false.

<br>
#### `public inline int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a53e39e303dfd6b34aebee3418a3ca669)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a53e39e303dfd6b34aebee3418a3ca669"></a>

Gets the value of Placement_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a30d717b08d7617fb843768a8a54ed3a0)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a30d717b08d7617fb843768a8a54ed3a0"></a>

Gets the value of Placement_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a28ae05ad2fb4af5182852ad6d700477b)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a28ae05ad2fb4af5182852ad6d700477b"></a>

Gets the value of Placement_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a5bc2bdb587241bfe48df47c63cb15cd7)`(int32 & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a5bc2bdb587241bfe48df47c63cb15cd7"></a>

Fills OutValue with the value of Placement_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerWithMatch_1af28df41b10041641439c770dcba3d6fb)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1af28df41b10041641439c770dcba3d6fb"></a>

Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetPlacementOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a76323074c25400ef1fadeefdc8b22ee6)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a76323074c25400ef1fadeefdc8b22ee6"></a>

Returns a pointer to Placement_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlacement`](#structFRHAPI__MatchPlayerWithMatch_1abb9c0d02b170d1776b5be384718f4a67)`(int32 NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1abb9c0d02b170d1776b5be384718f4a67"></a>

Sets the value of Placement_Optional and also sets Placement_IsSet to true.

<br>
#### `public inline void `[`ClearPlacement`](#structFRHAPI__MatchPlayerWithMatch_1a5d88bbe1e747ed4fde8a09646bed27d6)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a5d88bbe1e747ed4fde8a09646bed27d6"></a>

Clears the value of Placement_Optional and sets Placement_IsSet to false.

<br>
#### `public inline bool `[`IsPlacementDefaultValue`](#structFRHAPI__MatchPlayerWithMatch_1adbd55a069d0102cbe9e75d04dc874428)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1adbd55a069d0102cbe9e75d04dc874428"></a>

Returns true if Placement_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetPlacementToDefault`](#structFRHAPI__MatchPlayerWithMatch_1afe2d5e1393af77f79778e832a6e124e2)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1afe2d5e1393af77f79778e832a6e124e2"></a>

Sets the value of Placement_Optional to its default and also sets Placement_IsSet to true.

<br>
#### `public inline FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a965df1305f0a1df1231dcc5ae58a7ca9)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a965df1305f0a1df1231dcc5ae58a7ca9"></a>

Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aaf1c74db42c3dab99046c1bf1cdb5e42)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1aaf1c74db42c3dab99046c1bf1cdb5e42"></a>

Gets the value of JoinedMatchTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a583e0e83a47a274fbdb19e6b7d1dbc9c)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a583e0e83a47a274fbdb19e6b7d1dbc9c"></a>

Gets the value of JoinedMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a9dbec70c5c63a41e27b2f6e093c54705)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a9dbec70c5c63a41e27b2f6e093c54705"></a>

Fills OutValue with the value of JoinedMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aac1be2dd11dc1927b7fb7b42d8bfe86b)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1aac1be2dd11dc1927b7fb7b42d8bfe86b"></a>

Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FDateTime * `[`GetJoinedMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a4aefb589eb7c14945a9649a1d0945779)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a4aefb589eb7c14945a9649a1d0945779"></a>

Returns a pointer to JoinedMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a0e1d67427cb7a36950723b2adbaca8bd)`(FDateTime NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a0e1d67427cb7a36950723b2adbaca8bd"></a>

Sets the value of JoinedMatchTimestamp_Optional and also sets JoinedMatchTimestamp_IsSet to true.

<br>
#### `public inline void `[`ClearJoinedMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1abae34d5cfc3bff2dd51e229e96a43855)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1abae34d5cfc3bff2dd51e229e96a43855"></a>

Clears the value of JoinedMatchTimestamp_Optional and sets JoinedMatchTimestamp_IsSet to false.

<br>
#### `public inline FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a09f5313ad1ecd6085965daaebc79f7f4)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a09f5313ad1ecd6085965daaebc79f7f4"></a>

Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a1177367a9b74447345a74db785d10795)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a1177367a9b74447345a74db785d10795"></a>

Gets the value of LeftMatchTimestamp_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1aec2b75f59f1ed0d729b85675d39c94f9)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1aec2b75f59f1ed0d729b85675d39c94f9"></a>

Gets the value of LeftMatchTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a9e52d9cd8e77028e90510cf9d7dbec39)`(FDateTime & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a9e52d9cd8e77028e90510cf9d7dbec39"></a>

Fills OutValue with the value of LeftMatchTimestamp_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aa1ae284c8db0da0423991391e6cb2572)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1aa1ae284c8db0da0423991391e6cb2572"></a>

Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FDateTime * `[`GetLeftMatchTimestampOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a98d18e8a9f4b84e9cc512e9e48de05d3)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a98d18e8a9f4b84e9cc512e9e48de05d3"></a>

Returns a pointer to LeftMatchTimestamp_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a36907cf1bb0ed9cae9f270e32e2a3c6c)`(FDateTime NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a36907cf1bb0ed9cae9f270e32e2a3c6c"></a>

Sets the value of LeftMatchTimestamp_Optional and also sets LeftMatchTimestamp_IsSet to true.

<br>
#### `public inline void `[`ClearLeftMatchTimestamp`](#structFRHAPI__MatchPlayerWithMatch_1a9824e1b54f752e7cc9936942826fd2d0)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a9824e1b54f752e7cc9936942826fd2d0"></a>

Clears the value of LeftMatchTimestamp_Optional and sets LeftMatchTimestamp_IsSet to false.

<br>
#### `public inline int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a25b5cf59d5a43e46e72e3fb04ce38410)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a25b5cf59d5a43e46e72e3fb04ce38410"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a66564db814173f76da5eaddf592e184e)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a66564db814173f76da5eaddf592e184e"></a>

Gets the value of DurationSeconds_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1ab134d9d42ca6c294a77c8cdc0671d201)`(const int32 & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1ab134d9d42ca6c294a77c8cdc0671d201"></a>

Gets the value of DurationSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a2a7f8c81e681d721c99ff311c01c9c71)`(int32 & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a2a7f8c81e681d721c99ff311c01c9c71"></a>

Fills OutValue with the value of DurationSeconds_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a1d56676cbe9c86d05c7483a5eafd4f68)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a1d56676cbe9c86d05c7483a5eafd4f68"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetDurationSecondsOrNull`](#structFRHAPI__MatchPlayerWithMatch_1af99c3acff465956562af8a607b2a46ad)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1af99c3acff465956562af8a607b2a46ad"></a>

Returns a pointer to DurationSeconds_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a9c176ee7ffaf2d62f8a68b57fbdb06f2)`(int32 NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a9c176ee7ffaf2d62f8a68b57fbdb06f2"></a>

Sets the value of DurationSeconds_Optional and also sets DurationSeconds_IsSet to true.

<br>
#### `public inline void `[`ClearDurationSeconds`](#structFRHAPI__MatchPlayerWithMatch_1a0ecdc5e12f71bc0d02f402229205d3c4)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a0ecdc5e12f71bc0d02f402229205d3c4"></a>

Clears the value of DurationSeconds_Optional and sets DurationSeconds_IsSet to false.

<br>
#### `public inline bool `[`IsDurationSecondsDefaultValue`](#structFRHAPI__MatchPlayerWithMatch_1a29ba09c1078ffcf1f88a15634cdee9a2)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a29ba09c1078ffcf1f88a15634cdee9a2"></a>

Returns true if DurationSeconds_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetDurationSecondsToDefault`](#structFRHAPI__MatchPlayerWithMatch_1ab273feafe8a95a5d26528a655a99dec6)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1ab273feafe8a95a5d26528a655a99dec6"></a>

Sets the value of DurationSeconds_Optional to its default and also sets DurationSeconds_IsSet to true.

<br>
#### `public inline FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1aacb409ce999a54de449895b40c30e371)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1aacb409ce999a54de449895b40c30e371"></a>

Gets the value of StartingRank_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a877a7017830a65d7475151a7b99f0032)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a877a7017830a65d7475151a7b99f0032"></a>

Gets the value of StartingRank_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a9f7580c1fa37524660eab2dbfe997feb)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a9f7580c1fa37524660eab2dbfe997feb"></a>

Gets the value of StartingRank_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a235f3a980254e68a2aa2c310790343f6)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a235f3a980254e68a2aa2c310790343f6"></a>

Fills OutValue with the value of StartingRank_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1adf7d98c0df8dc214903acbeb366e3ff9)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1adf7d98c0df8dc214903acbeb366e3ff9"></a>

Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetStartingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a7a351caba5674742b0b25cef2e745a78)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a7a351caba5674742b0b25cef2e745a78"></a>

Returns a pointer to StartingRank_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1a91e73ed8ffa11e1a49e404d04d7c359a)`(FString NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a91e73ed8ffa11e1a49e404d04d7c359a"></a>

Sets the value of StartingRank_Optional and also sets StartingRank_IsSet to true.

<br>
#### `public inline void `[`ClearStartingRank`](#structFRHAPI__MatchPlayerWithMatch_1aa3f553837d1d00f98f5b8288c5d9008f)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1aa3f553837d1d00f98f5b8288c5d9008f"></a>

Clears the value of StartingRank_Optional and sets StartingRank_IsSet to false.

<br>
#### `public inline FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a062a8980237a14560c0da668dbf71efa)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a062a8980237a14560c0da668dbf71efa"></a>

Gets the value of FinishingRank_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1abde80907a0a7795758115456f8d5a30c)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1abde80907a0a7795758115456f8d5a30c"></a>

Gets the value of FinishingRank_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a75a5466a76a264428fac4f2b22bb9ef6)`(const FString & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a75a5466a76a264428fac4f2b22bb9ef6"></a>

Gets the value of FinishingRank_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a12da2ec0385822aff5fb80cf6a5b0f67)`(FString & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a12da2ec0385822aff5fb80cf6a5b0f67"></a>

Fills OutValue with the value of FinishingRank_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aea919809b63cdaa4df1746d49619207b)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1aea919809b63cdaa4df1746d49619207b"></a>

Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetFinishingRankOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aef3470716b4ab692d8b88639cc12d683)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1aef3470716b4ab692d8b88639cc12d683"></a>

Returns a pointer to FinishingRank_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a5199cc37f0433b0e873b66289d85faf1)`(FString NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a5199cc37f0433b0e873b66289d85faf1"></a>

Sets the value of FinishingRank_Optional and also sets FinishingRank_IsSet to true.

<br>
#### `public inline void `[`ClearFinishingRank`](#structFRHAPI__MatchPlayerWithMatch_1a82d8cbc73e9caa7fb977cba81ec493f1)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a82d8cbc73e9caa7fb977cba81ec493f1"></a>

Clears the value of FinishingRank_Optional and sets FinishingRank_IsSet to false.

<br>
#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a3b4412eeac10f6646ebe69fff9bde57a)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a3b4412eeac10f6646ebe69fff9bde57a"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1ab6d998c48ba4017cf2d5a58bf987e209)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1ab6d998c48ba4017cf2d5a58bf987e209"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a806d237e85f826d36941c7b318586123)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a806d237e85f826d36941c7b318586123"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a512d0df50d804bcd952a8742294a205b)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` <a id="structFRHAPI__MatchPlayerWithMatch_1a512d0df50d804bcd952a8742294a205b"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerWithMatch_1a460374376f551b057bc562d2cdba7f7b)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a460374376f551b057bc562d2cdba7f7b"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__MatchPlayerWithMatch_1aa07fa69146f6b89b90850f8466d8ca06)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1aa07fa69146f6b89b90850f8466d8ca06"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchPlayerWithMatch_1ae224238caa43e5ca0491731a87ad604c)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1ae224238caa43e5ca0491731a87ad604c"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchPlayerWithMatch_1a64ebb116326952d6dbcc9e93345e9132)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a64ebb116326952d6dbcc9e93345e9132"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline `[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` & `[`GetMatch`](#structFRHAPI__MatchPlayerWithMatch_1a812d7e285444a4a4f3458c32bfcabd7c)`()` <a id="structFRHAPI__MatchPlayerWithMatch_1a812d7e285444a4a4f3458c32bfcabd7c"></a>

Gets the value of Match.

<br>
#### `public inline const `[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` & `[`GetMatch`](#structFRHAPI__MatchPlayerWithMatch_1a8353a40289beee854be294896714878e)`() const` <a id="structFRHAPI__MatchPlayerWithMatch_1a8353a40289beee854be294896714878e"></a>

Gets the value of Match.

<br>
#### `public inline void `[`SetMatch`](#structFRHAPI__MatchPlayerWithMatch_1a9218553977c7c9661613f43ff8d56a3d)`(`[`FRHAPI_MatchValuesOnly`](RHAPI_MatchValuesOnly.md#structFRHAPI__MatchValuesOnly)` NewValue)` <a id="structFRHAPI__MatchPlayerWithMatch_1a9218553977c7c9661613f43ff8d56a3d"></a>

Sets the value of Match.

<br>