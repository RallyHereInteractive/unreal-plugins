---
title: RHAPI_SessionPlayer
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionPlayer`](#structFRHAPI__SessionPlayer) | A player resource in a session.

## struct `FRHAPI_SessionPlayer` <a id="structFRHAPI__SessionPlayer"></a>

```
struct FRHAPI_SessionPlayer
  : public FRHAPI_Model
```

A player resource in a session.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`PlayerId_Optional`](#structFRHAPI__SessionPlayer_1ada45674d5ad30eda5058ff64a5cb105f) | Legacy id for this player.
`public bool `[`PlayerId_IsSet`](#structFRHAPI__SessionPlayer_1a89bc0f5f785941fba984c07a1da3c628) | true if PlayerId_Optional has been set to a value
`public FGuid `[`PlayerUuid`](#structFRHAPI__SessionPlayer_1a0c29462af5da0a57e9f9491b94a30cc3) | UUID for this player.
`public ERHAPI_SessionPlayerStatus `[`Status`](#structFRHAPI__SessionPlayer_1a20c44a0cb2d627f0fb8417edd463b9bd) | Status of the player in the session.
`public FGuid `[`InvitingPlayerUuid_Optional`](#structFRHAPI__SessionPlayer_1a900736c28c358788992534c2b32a38ea) | UUID of the player who sent this players invite, if any.
`public bool `[`InvitingPlayerUuid_IsSet`](#structFRHAPI__SessionPlayer_1a274cd7e1313b2b25d69ca73933e76bcf) | true if InvitingPlayerUuid_Optional has been set to a value
`public FString `[`SourceSessionId_Optional`](#structFRHAPI__SessionPlayer_1af3736f582d13c659574eeea281356dc6) | The UUID of the session that this player was invited from.
`public bool `[`SourceSessionId_IsSet`](#structFRHAPI__SessionPlayer_1a8f524eeefe1e57d6bfaf7b10e6e119d1) | true if SourceSessionId_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionPlayer_1af093d0545b4ca98d7e916d8456c6d754) | player-defined custom data
`public bool `[`CustomData_IsSet`](#structFRHAPI__SessionPlayer_1a2fb78b14e916ce432c24c730d7895ab7) | true if CustomData_Optional has been set to a value
`public FString `[`Version_Optional`](#structFRHAPI__SessionPlayer_1a8464dd89d0dbd289132aaa1e0f1edb22) | Product Client Version number. Used for compatibility checking with other players and instances.
`public bool `[`Version_IsSet`](#structFRHAPI__SessionPlayer_1a739f1593fa6f0f828b3acbae17b9a581) | true if Version_Optional has been set to a value
`public `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` `[`ClientSettings_Optional`](#structFRHAPI__SessionPlayer_1a2f8f0d43f78a9b08db040a591e550082) | Which input type and platform the client is using.
`public bool `[`ClientSettings_IsSet`](#structFRHAPI__SessionPlayer_1a0cb461cb01254f28e33b4ee098fff636) | true if ClientSettings_Optional has been set to a value
`public `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` `[`CrossplayPreferences_Optional`](#structFRHAPI__SessionPlayer_1a1df5a79e2e5f967579ad882122b7ad74) | Client's desired crossplay settings to determine which other clients it can play with. If not defined, assumed to be as permissive as possible.
`public bool `[`CrossplayPreferences_IsSet`](#structFRHAPI__SessionPlayer_1a09fdf10fbfcdc3cdeea386b671d75273) | true if CrossplayPreferences_Optional has been set to a value
`public FDateTime `[`Invited_Optional`](#structFRHAPI__SessionPlayer_1a2e47dda3a7a7e474f39950a1487054a5) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Invited_IsSet`](#structFRHAPI__SessionPlayer_1a24180c0ac76cb70443d34261572d511c) | true if Invited_Optional has been set to a value
`public FDateTime `[`Joined_Optional`](#structFRHAPI__SessionPlayer_1a98a0fa4e013c02e4f94d472459d7f9b7) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Joined_IsSet`](#structFRHAPI__SessionPlayer_1ab5d3d5da597f5007fe3708826e570580) | true if Joined_Optional has been set to a value
`public TSet< ERHAPI_IntraSessionPermissions > `[`SessionPermissions_Optional`](#structFRHAPI__SessionPlayer_1a9a5cdd357032df9fc5beb88d9b4d8c64) | A list of intra session permissions granted to this specific player.
`public bool `[`SessionPermissions_IsSet`](#structFRHAPI__SessionPlayer_1a1b15c509cc2be5b3ecf4f3329c6351b5) | true if SessionPermissions_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SessionPlayer_1adaeb1567dcb44f39b593b48b9fd67d64)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionPlayer_1a96b445fb64ef372de855adabb1ec8bc3)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1a595af84274f20d6083eb9efc71a83666)`()` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1af39ef8158be9385bd379e317cab9f83f)`() const` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1a1ac1fb22aa54d0a24110f433b8af08cf)`(const int32 & DefaultValue) const` | Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1a1e104e5d5a81d0555749531774c57e20)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__SessionPlayer_1a9b90f75db3467306444556268dceeb25)`()` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__SessionPlayer_1a8d36355f5e52ffea0332b93bb494bdd8)`() const` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerId`](#structFRHAPI__SessionPlayer_1a18dc590068006ad80eedeff1dd8d249e)`(const int32 & NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.
`public inline void `[`SetPlayerId`](#structFRHAPI__SessionPlayer_1a2db3aad8433a2272a793d50b28d6d7e6)`(int32 && NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.
`public inline void `[`ClearPlayerId`](#structFRHAPI__SessionPlayer_1aa5068324d303c0ec84db535158fb345e)`()` | Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.
`public inline bool `[`IsPlayerIdSet`](#structFRHAPI__SessionPlayer_1a2e8414db8c24e3ddb99436f874d42a4c)`() const` | Checks whether PlayerId_Optional has been set.
`public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__SessionPlayer_1aebb63b6bda892c9b01eba35b22163697)`() const` | Returns true if PlayerId_Optional is set and matches the default value.
`public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__SessionPlayer_1af1f33f4f89bbc5c6685fe0d700d0c65d)`()` | Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayer_1a90e65a21efce29b797656524686e041c)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayer_1a7eae6498b769ba29d5e2ac7c8a214486)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__SessionPlayer_1aa100374334edfa54cec4eb186fd722f1)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__SessionPlayer_1a4c7df8f84c8e51c83e3451ea963a8df8)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayer_1af71551b020d10e655485b7e7493eb696)`()` | Gets the value of Status.
`public inline const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayer_1ad2bf9f73d8df33607fbf4f340095c03c)`() const` | Gets the value of Status.
`public inline void `[`SetStatus`](#structFRHAPI__SessionPlayer_1a9c1580758cbaf2a675af0f6af73fa164)`(const ERHAPI_SessionPlayerStatus & NewValue)` | Sets the value of Status.
`public inline void `[`SetStatus`](#structFRHAPI__SessionPlayer_1a59bed8edf15aa46a43be9b776289ca58)`(ERHAPI_SessionPlayerStatus && NewValue)` | Sets the value of Status using move semantics.
`public inline FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1ae9129fd1227cb4fe44396cea3c09ef94)`()` | Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a82c1a7df26e04804f6294dd594a38fd5)`() const` | Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a8fab6410d4b6df4198028dc7cf233e27)`(const FGuid & DefaultValue) const` | Gets the value of InvitingPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a9a66f2679f58a2fe39581512c7bb808d)`(FGuid & OutValue) const` | Fills OutValue with the value of InvitingPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__SessionPlayer_1aa86e38d8a881a8a7947569d7b990a122)`()` | Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__SessionPlayer_1ac73b117340023d1c70d70a44f04081dc)`() const` | Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a41efe769656a8d868f1d9bf4e6f95982)`(const FGuid & NewValue)` | Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true.
`public inline void `[`SetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1ae775fcfba655315a862d729d264d735d)`(FGuid && NewValue)` | Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a108279eb6926eafff034a612ab51fc69)`()` | Clears the value of InvitingPlayerUuid_Optional and sets InvitingPlayerUuid_IsSet to false.
`public inline bool `[`IsInvitingPlayerUuidSet`](#structFRHAPI__SessionPlayer_1a9c85c8ce748cec01d2ce4590745cc2ab)`() const` | Checks whether InvitingPlayerUuid_Optional has been set.
`public inline FString & `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1a7d2eed6eae17648c1a82daa11c000767)`()` | Gets the value of SourceSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1a92ac903f5515ef18f72900db97823a51)`() const` | Gets the value of SourceSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1aec55bd5a87148458d810f9895421c5de)`(const FString & DefaultValue) const` | Gets the value of SourceSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1abcba87f13817fe0a6cacda017f742601)`(FString & OutValue) const` | Fills OutValue with the value of SourceSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetSourceSessionIdOrNull`](#structFRHAPI__SessionPlayer_1ae38dea17abe47f24efdad27849021e98)`()` | Returns a pointer to SourceSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetSourceSessionIdOrNull`](#structFRHAPI__SessionPlayer_1a1ddb0f19a856f4fd7020029ed7f657be)`() const` | Returns a pointer to SourceSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSourceSessionId`](#structFRHAPI__SessionPlayer_1a974ab75f208af30bb662a2141c1075a3)`(const FString & NewValue)` | Sets the value of SourceSessionId_Optional and also sets SourceSessionId_IsSet to true.
`public inline void `[`SetSourceSessionId`](#structFRHAPI__SessionPlayer_1a458b38a395078654a306e23320ceeda4)`(FString && NewValue)` | Sets the value of SourceSessionId_Optional and also sets SourceSessionId_IsSet to true using move semantics.
`public inline void `[`ClearSourceSessionId`](#structFRHAPI__SessionPlayer_1a94530a246d8f063c45837aef156267d5)`()` | Clears the value of SourceSessionId_Optional and sets SourceSessionId_IsSet to false.
`public inline bool `[`IsSourceSessionIdSet`](#structFRHAPI__SessionPlayer_1a0e2b2053e001acba1369b9c3d2adeef8)`() const` | Checks whether SourceSessionId_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayer_1ae48cbaebc88d154c1cac3d0c79817d3d)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayer_1af80a1a407a9e148a1c45f03aa3a4ba34)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayer_1a21c902007b5ca5b1d5e0e3efd029514e)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__SessionPlayer_1a84827d47bd6680f74e33e477d5ebea53)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayer_1a1584aced00e7b4f2cb5f468b4a233649)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayer_1a8235e1dddf8ffbef91e75b089d619171)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionPlayer_1a9a27bfb13c6d1cc989ad0665367194f8)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionPlayer_1a969de0b12ba4895b9efbf709345eb2be)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionPlayer_1a711c019f6e123fbd65355b61e3d16b23)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__SessionPlayer_1aba9c28371c31f1c3de118bf4cd9cb8af)`() const` | Checks whether CustomData_Optional has been set.
`public inline FString & `[`GetVersion`](#structFRHAPI__SessionPlayer_1ad34c614ef21925b84f760453edea08ea)`()` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__SessionPlayer_1a93c62523fcb280cb40ec8e2d9e03739b)`() const` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__SessionPlayer_1a68c454a3ce3d81219db9a704fed0b834)`(const FString & DefaultValue) const` | Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVersion`](#structFRHAPI__SessionPlayer_1a57c4d76dd7690b0062d7799e80e333af)`(FString & OutValue) const` | Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetVersionOrNull`](#structFRHAPI__SessionPlayer_1a8b1d100e147a7e33372d909620c70fa1)`()` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__SessionPlayer_1a3bd37f1364975dacc8f004b606772f0a)`() const` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVersion`](#structFRHAPI__SessionPlayer_1a55472ed2f15c79cde9ba8d122f96e82b)`(const FString & NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true.
`public inline void `[`SetVersion`](#structFRHAPI__SessionPlayer_1a211f17e6b2a900b8ff4b10cd91beda39)`(FString && NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.
`public inline void `[`ClearVersion`](#structFRHAPI__SessionPlayer_1a118c09e3ead5ffc3d5a533d39d429d8c)`()` | Clears the value of Version_Optional and sets Version_IsSet to false.
`public inline bool `[`IsVersionSet`](#structFRHAPI__SessionPlayer_1ab088f52b8df22c93ef6e84d88aeba23e)`() const` | Checks whether Version_Optional has been set.
`public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1a2df426e92c2e80a2d8468d3092c7e47e)`()` | Gets the value of ClientSettings_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1ae2240cb64fc9f771d7b6923bed6cde31)`() const` | Gets the value of ClientSettings_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1aee8ff8d562ad45c273fd9fca88c3c844)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & DefaultValue) const` | Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1a2fe4bca124fda7bac88a901c77f7bb73)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & OutValue) const` | Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__SessionPlayer_1a7d9eca2075c0f5177a6bca642e854fc7)`()` | Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__SessionPlayer_1a96370aecd4a6aa19c83e456cd64946e3)`() const` | Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientSettings`](#structFRHAPI__SessionPlayer_1a2267fa9b9ff554f580093e9795f4b3c1)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` | Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.
`public inline void `[`SetClientSettings`](#structFRHAPI__SessionPlayer_1aa6016551db90452842fcb47b63fc9513)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` | Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true using move semantics.
`public inline void `[`ClearClientSettings`](#structFRHAPI__SessionPlayer_1a821f58c31fd1c68d79b8059e68050e46)`()` | Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.
`public inline bool `[`IsClientSettingsSet`](#structFRHAPI__SessionPlayer_1a62b0f07ad70e763dd6c4d6985c28bd8c)`() const` | Checks whether ClientSettings_Optional has been set.
`public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1af070e849c1ad1ba733a699ab8071a0df)`()` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1ae9ce3292dbd33658a622d8439f81ca46)`() const` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a59ac008e2a4bc9a41e9becbf1adabae3)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` | Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1ad343d91946f076520d5c3622da363df9)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` | Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__SessionPlayer_1a337ee6234c22739644694b234779e84c)`()` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__SessionPlayer_1a100f842cd7ebfcc326d8a72afd42b1f8)`() const` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a2d930713a59c9b6f32269d3c84b7d0e7)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.
`public inline void `[`SetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a5860fc77403656e49d3b50fab5626fc9)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.
`public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__SessionPlayer_1aab20b5ceba1df5862b8b103d6c6352ea)`()` | Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.
`public inline bool `[`IsCrossplayPreferencesSet`](#structFRHAPI__SessionPlayer_1a50e849cabed9fa2247c425bda28eeda2)`() const` | Checks whether CrossplayPreferences_Optional has been set.
`public inline FDateTime & `[`GetInvited`](#structFRHAPI__SessionPlayer_1a690fe204bef99aa5df108636301f33d3)`()` | Gets the value of Invited_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetInvited`](#structFRHAPI__SessionPlayer_1a3038673cda1b9ee616a7fa9b888c8c1a)`() const` | Gets the value of Invited_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetInvited`](#structFRHAPI__SessionPlayer_1ad7ff86032ba8dc5fc57ca303bac140c8)`(const FDateTime & DefaultValue) const` | Gets the value of Invited_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInvited`](#structFRHAPI__SessionPlayer_1a76c27fdddda2985942a56a424bbd06b9)`(FDateTime & OutValue) const` | Fills OutValue with the value of Invited_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetInvitedOrNull`](#structFRHAPI__SessionPlayer_1a9983520f51284f9ac5b30b4493f8d5a3)`()` | Returns a pointer to Invited_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetInvitedOrNull`](#structFRHAPI__SessionPlayer_1a9844c91a587f510bb5733910f202bbbb)`() const` | Returns a pointer to Invited_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInvited`](#structFRHAPI__SessionPlayer_1a3f2a8cee70c4e795028af5ffd30575c7)`(const FDateTime & NewValue)` | Sets the value of Invited_Optional and also sets Invited_IsSet to true.
`public inline void `[`SetInvited`](#structFRHAPI__SessionPlayer_1ac7609c54e0843b8b55dfcf77bdc12d34)`(FDateTime && NewValue)` | Sets the value of Invited_Optional and also sets Invited_IsSet to true using move semantics.
`public inline void `[`ClearInvited`](#structFRHAPI__SessionPlayer_1aa6b1a742b86c52aa02ee01441a2bf2d8)`()` | Clears the value of Invited_Optional and sets Invited_IsSet to false.
`public inline bool `[`IsInvitedSet`](#structFRHAPI__SessionPlayer_1a681d19ff77500805053cacf6d529707c)`() const` | Checks whether Invited_Optional has been set.
`public inline FDateTime & `[`GetJoined`](#structFRHAPI__SessionPlayer_1a61e17975a631c0867b4157ecbea1d05d)`()` | Gets the value of Joined_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetJoined`](#structFRHAPI__SessionPlayer_1a68101fbc328224bddc1470cbc4ecf984)`() const` | Gets the value of Joined_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetJoined`](#structFRHAPI__SessionPlayer_1aaa59d0064d184b055320bd8dcf7dd35f)`(const FDateTime & DefaultValue) const` | Gets the value of Joined_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoined`](#structFRHAPI__SessionPlayer_1a5b395ef14a3539880ebb60c8388ad570)`(FDateTime & OutValue) const` | Fills OutValue with the value of Joined_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetJoinedOrNull`](#structFRHAPI__SessionPlayer_1a884cd436903142741c067985efaa37cb)`()` | Returns a pointer to Joined_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetJoinedOrNull`](#structFRHAPI__SessionPlayer_1a4c7a37595a5bb448ce2a774fa15d8111)`() const` | Returns a pointer to Joined_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoined`](#structFRHAPI__SessionPlayer_1a8ed366220b9b073812691e913ab66aa8)`(const FDateTime & NewValue)` | Sets the value of Joined_Optional and also sets Joined_IsSet to true.
`public inline void `[`SetJoined`](#structFRHAPI__SessionPlayer_1ad0a79f61b61e1166ac8c646637372d4b)`(FDateTime && NewValue)` | Sets the value of Joined_Optional and also sets Joined_IsSet to true using move semantics.
`public inline void `[`ClearJoined`](#structFRHAPI__SessionPlayer_1a8b9c20d24a494d6a9c252112833d06e2)`()` | Clears the value of Joined_Optional and sets Joined_IsSet to false.
`public inline bool `[`IsJoinedSet`](#structFRHAPI__SessionPlayer_1af47667b8cbff00b061bdfcf40a69ea54)`() const` | Checks whether Joined_Optional has been set.
`public inline TSet< ERHAPI_IntraSessionPermissions > & `[`GetSessionPermissions`](#structFRHAPI__SessionPlayer_1aaeb473273193a256699a83eff7679aa1)`()` | Gets the value of SessionPermissions_Optional, regardless of it having been set.
`public inline const TSet< ERHAPI_IntraSessionPermissions > & `[`GetSessionPermissions`](#structFRHAPI__SessionPlayer_1a4d66d79dcf0f57b9cb74a92e2dc9658f)`() const` | Gets the value of SessionPermissions_Optional, regardless of it having been set.
`public inline const TSet< ERHAPI_IntraSessionPermissions > & `[`GetSessionPermissions`](#structFRHAPI__SessionPlayer_1a991fd39de080136360fd417224528583)`(const TSet< ERHAPI_IntraSessionPermissions > & DefaultValue) const` | Gets the value of SessionPermissions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionPermissions`](#structFRHAPI__SessionPlayer_1a9d5dacc44c11b36e8c0d85d4212c0c40)`(TSet< ERHAPI_IntraSessionPermissions > & OutValue) const` | Fills OutValue with the value of SessionPermissions_Optional and returns true if it has been set, otherwise returns false.
`public inline TSet< ERHAPI_IntraSessionPermissions > * `[`GetSessionPermissionsOrNull`](#structFRHAPI__SessionPlayer_1a60fb1c5626044ca71b6a7fde9fdaf7dc)`()` | Returns a pointer to SessionPermissions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TSet< ERHAPI_IntraSessionPermissions > * `[`GetSessionPermissionsOrNull`](#structFRHAPI__SessionPlayer_1a9306aafbbcddbcb88b04866324a606dc)`() const` | Returns a pointer to SessionPermissions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionPermissions`](#structFRHAPI__SessionPlayer_1abc6fe81b22782a36077809ddb3ccb1df)`(const TSet< ERHAPI_IntraSessionPermissions > & NewValue)` | Sets the value of SessionPermissions_Optional and also sets SessionPermissions_IsSet to true.
`public inline void `[`SetSessionPermissions`](#structFRHAPI__SessionPlayer_1a5fbfda7bce6fca86346366240efe9d17)`(TSet< ERHAPI_IntraSessionPermissions > && NewValue)` | Sets the value of SessionPermissions_Optional and also sets SessionPermissions_IsSet to true using move semantics.
`public inline void `[`ClearSessionPermissions`](#structFRHAPI__SessionPlayer_1a09ed5569363e26878835fbcd39ed58a1)`()` | Clears the value of SessionPermissions_Optional and sets SessionPermissions_IsSet to false.
`public inline bool `[`IsSessionPermissionsSet`](#structFRHAPI__SessionPlayer_1aa96965d5e6f3a19f820bd160e2824a19)`() const` | Checks whether SessionPermissions_Optional has been set.

### Members

#### `public int32 `[`PlayerId_Optional`](#structFRHAPI__SessionPlayer_1ada45674d5ad30eda5058ff64a5cb105f) <a id="structFRHAPI__SessionPlayer_1ada45674d5ad30eda5058ff64a5cb105f"></a>

Legacy id for this player.

#### `public bool `[`PlayerId_IsSet`](#structFRHAPI__SessionPlayer_1a89bc0f5f785941fba984c07a1da3c628) <a id="structFRHAPI__SessionPlayer_1a89bc0f5f785941fba984c07a1da3c628"></a>

true if PlayerId_Optional has been set to a value

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__SessionPlayer_1a0c29462af5da0a57e9f9491b94a30cc3) <a id="structFRHAPI__SessionPlayer_1a0c29462af5da0a57e9f9491b94a30cc3"></a>

UUID for this player.

#### `public ERHAPI_SessionPlayerStatus `[`Status`](#structFRHAPI__SessionPlayer_1a20c44a0cb2d627f0fb8417edd463b9bd) <a id="structFRHAPI__SessionPlayer_1a20c44a0cb2d627f0fb8417edd463b9bd"></a>

Status of the player in the session.

#### `public FGuid `[`InvitingPlayerUuid_Optional`](#structFRHAPI__SessionPlayer_1a900736c28c358788992534c2b32a38ea) <a id="structFRHAPI__SessionPlayer_1a900736c28c358788992534c2b32a38ea"></a>

UUID of the player who sent this players invite, if any.

#### `public bool `[`InvitingPlayerUuid_IsSet`](#structFRHAPI__SessionPlayer_1a274cd7e1313b2b25d69ca73933e76bcf) <a id="structFRHAPI__SessionPlayer_1a274cd7e1313b2b25d69ca73933e76bcf"></a>

true if InvitingPlayerUuid_Optional has been set to a value

#### `public FString `[`SourceSessionId_Optional`](#structFRHAPI__SessionPlayer_1af3736f582d13c659574eeea281356dc6) <a id="structFRHAPI__SessionPlayer_1af3736f582d13c659574eeea281356dc6"></a>

The UUID of the session that this player was invited from.

#### `public bool `[`SourceSessionId_IsSet`](#structFRHAPI__SessionPlayer_1a8f524eeefe1e57d6bfaf7b10e6e119d1) <a id="structFRHAPI__SessionPlayer_1a8f524eeefe1e57d6bfaf7b10e6e119d1"></a>

true if SourceSessionId_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionPlayer_1af093d0545b4ca98d7e916d8456c6d754) <a id="structFRHAPI__SessionPlayer_1af093d0545b4ca98d7e916d8456c6d754"></a>

player-defined custom data

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__SessionPlayer_1a2fb78b14e916ce432c24c730d7895ab7) <a id="structFRHAPI__SessionPlayer_1a2fb78b14e916ce432c24c730d7895ab7"></a>

true if CustomData_Optional has been set to a value

#### `public FString `[`Version_Optional`](#structFRHAPI__SessionPlayer_1a8464dd89d0dbd289132aaa1e0f1edb22) <a id="structFRHAPI__SessionPlayer_1a8464dd89d0dbd289132aaa1e0f1edb22"></a>

Product Client Version number. Used for compatibility checking with other players and instances.

#### `public bool `[`Version_IsSet`](#structFRHAPI__SessionPlayer_1a739f1593fa6f0f828b3acbae17b9a581) <a id="structFRHAPI__SessionPlayer_1a739f1593fa6f0f828b3acbae17b9a581"></a>

true if Version_Optional has been set to a value

#### `public `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` `[`ClientSettings_Optional`](#structFRHAPI__SessionPlayer_1a2f8f0d43f78a9b08db040a591e550082) <a id="structFRHAPI__SessionPlayer_1a2f8f0d43f78a9b08db040a591e550082"></a>

Which input type and platform the client is using.

#### `public bool `[`ClientSettings_IsSet`](#structFRHAPI__SessionPlayer_1a0cb461cb01254f28e33b4ee098fff636) <a id="structFRHAPI__SessionPlayer_1a0cb461cb01254f28e33b4ee098fff636"></a>

true if ClientSettings_Optional has been set to a value

#### `public `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` `[`CrossplayPreferences_Optional`](#structFRHAPI__SessionPlayer_1a1df5a79e2e5f967579ad882122b7ad74) <a id="structFRHAPI__SessionPlayer_1a1df5a79e2e5f967579ad882122b7ad74"></a>

Client's desired crossplay settings to determine which other clients it can play with. If not defined, assumed to be as permissive as possible.

#### `public bool `[`CrossplayPreferences_IsSet`](#structFRHAPI__SessionPlayer_1a09fdf10fbfcdc3cdeea386b671d75273) <a id="structFRHAPI__SessionPlayer_1a09fdf10fbfcdc3cdeea386b671d75273"></a>

true if CrossplayPreferences_Optional has been set to a value

#### `public FDateTime `[`Invited_Optional`](#structFRHAPI__SessionPlayer_1a2e47dda3a7a7e474f39950a1487054a5) <a id="structFRHAPI__SessionPlayer_1a2e47dda3a7a7e474f39950a1487054a5"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`Invited_IsSet`](#structFRHAPI__SessionPlayer_1a24180c0ac76cb70443d34261572d511c) <a id="structFRHAPI__SessionPlayer_1a24180c0ac76cb70443d34261572d511c"></a>

true if Invited_Optional has been set to a value

#### `public FDateTime `[`Joined_Optional`](#structFRHAPI__SessionPlayer_1a98a0fa4e013c02e4f94d472459d7f9b7) <a id="structFRHAPI__SessionPlayer_1a98a0fa4e013c02e4f94d472459d7f9b7"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`Joined_IsSet`](#structFRHAPI__SessionPlayer_1ab5d3d5da597f5007fe3708826e570580) <a id="structFRHAPI__SessionPlayer_1ab5d3d5da597f5007fe3708826e570580"></a>

true if Joined_Optional has been set to a value

#### `public TSet< ERHAPI_IntraSessionPermissions > `[`SessionPermissions_Optional`](#structFRHAPI__SessionPlayer_1a9a5cdd357032df9fc5beb88d9b4d8c64) <a id="structFRHAPI__SessionPlayer_1a9a5cdd357032df9fc5beb88d9b4d8c64"></a>

A list of intra session permissions granted to this specific player.

#### `public bool `[`SessionPermissions_IsSet`](#structFRHAPI__SessionPlayer_1a1b15c509cc2be5b3ecf4f3329c6351b5) <a id="structFRHAPI__SessionPlayer_1a1b15c509cc2be5b3ecf4f3329c6351b5"></a>

true if SessionPermissions_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionPlayer_1adaeb1567dcb44f39b593b48b9fd67d64)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionPlayer_1adaeb1567dcb44f39b593b48b9fd67d64"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionPlayer_1a96b445fb64ef372de855adabb1ec8bc3)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SessionPlayer_1a96b445fb64ef372de855adabb1ec8bc3"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1a595af84274f20d6083eb9efc71a83666)`()` <a id="structFRHAPI__SessionPlayer_1a595af84274f20d6083eb9efc71a83666"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1af39ef8158be9385bd379e317cab9f83f)`() const` <a id="structFRHAPI__SessionPlayer_1af39ef8158be9385bd379e317cab9f83f"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1a1ac1fb22aa54d0a24110f433b8af08cf)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1a1ac1fb22aa54d0a24110f433b8af08cf"></a>

Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1a1e104e5d5a81d0555749531774c57e20)`(int32 & OutValue) const` <a id="structFRHAPI__SessionPlayer_1a1e104e5d5a81d0555749531774c57e20"></a>

Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__SessionPlayer_1a9b90f75db3467306444556268dceeb25)`()` <a id="structFRHAPI__SessionPlayer_1a9b90f75db3467306444556268dceeb25"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__SessionPlayer_1a8d36355f5e52ffea0332b93bb494bdd8)`() const` <a id="structFRHAPI__SessionPlayer_1a8d36355f5e52ffea0332b93bb494bdd8"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__SessionPlayer_1a18dc590068006ad80eedeff1dd8d249e)`(const int32 & NewValue)` <a id="structFRHAPI__SessionPlayer_1a18dc590068006ad80eedeff1dd8d249e"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__SessionPlayer_1a2db3aad8433a2272a793d50b28d6d7e6)`(int32 && NewValue)` <a id="structFRHAPI__SessionPlayer_1a2db3aad8433a2272a793d50b28d6d7e6"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerId`](#structFRHAPI__SessionPlayer_1aa5068324d303c0ec84db535158fb345e)`()` <a id="structFRHAPI__SessionPlayer_1aa5068324d303c0ec84db535158fb345e"></a>

Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.

#### `public inline bool `[`IsPlayerIdSet`](#structFRHAPI__SessionPlayer_1a2e8414db8c24e3ddb99436f874d42a4c)`() const` <a id="structFRHAPI__SessionPlayer_1a2e8414db8c24e3ddb99436f874d42a4c"></a>

Checks whether PlayerId_Optional has been set.

#### `public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__SessionPlayer_1aebb63b6bda892c9b01eba35b22163697)`() const` <a id="structFRHAPI__SessionPlayer_1aebb63b6bda892c9b01eba35b22163697"></a>

Returns true if PlayerId_Optional is set and matches the default value.

#### `public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__SessionPlayer_1af1f33f4f89bbc5c6685fe0d700d0c65d)`()` <a id="structFRHAPI__SessionPlayer_1af1f33f4f89bbc5c6685fe0d700d0c65d"></a>

Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayer_1a90e65a21efce29b797656524686e041c)`()` <a id="structFRHAPI__SessionPlayer_1a90e65a21efce29b797656524686e041c"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayer_1a7eae6498b769ba29d5e2ac7c8a214486)`() const` <a id="structFRHAPI__SessionPlayer_1a7eae6498b769ba29d5e2ac7c8a214486"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__SessionPlayer_1aa100374334edfa54cec4eb186fd722f1)`(const FGuid & NewValue)` <a id="structFRHAPI__SessionPlayer_1aa100374334edfa54cec4eb186fd722f1"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__SessionPlayer_1a4c7df8f84c8e51c83e3451ea963a8df8)`(FGuid && NewValue)` <a id="structFRHAPI__SessionPlayer_1a4c7df8f84c8e51c83e3451ea963a8df8"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayer_1af71551b020d10e655485b7e7493eb696)`()` <a id="structFRHAPI__SessionPlayer_1af71551b020d10e655485b7e7493eb696"></a>

Gets the value of Status.

#### `public inline const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayer_1ad2bf9f73d8df33607fbf4f340095c03c)`() const` <a id="structFRHAPI__SessionPlayer_1ad2bf9f73d8df33607fbf4f340095c03c"></a>

Gets the value of Status.

#### `public inline void `[`SetStatus`](#structFRHAPI__SessionPlayer_1a9c1580758cbaf2a675af0f6af73fa164)`(const ERHAPI_SessionPlayerStatus & NewValue)` <a id="structFRHAPI__SessionPlayer_1a9c1580758cbaf2a675af0f6af73fa164"></a>

Sets the value of Status.

#### `public inline void `[`SetStatus`](#structFRHAPI__SessionPlayer_1a59bed8edf15aa46a43be9b776289ca58)`(ERHAPI_SessionPlayerStatus && NewValue)` <a id="structFRHAPI__SessionPlayer_1a59bed8edf15aa46a43be9b776289ca58"></a>

Sets the value of Status using move semantics.

#### `public inline FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1ae9129fd1227cb4fe44396cea3c09ef94)`()` <a id="structFRHAPI__SessionPlayer_1ae9129fd1227cb4fe44396cea3c09ef94"></a>

Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a82c1a7df26e04804f6294dd594a38fd5)`() const` <a id="structFRHAPI__SessionPlayer_1a82c1a7df26e04804f6294dd594a38fd5"></a>

Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a8fab6410d4b6df4198028dc7cf233e27)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1a8fab6410d4b6df4198028dc7cf233e27"></a>

Gets the value of InvitingPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a9a66f2679f58a2fe39581512c7bb808d)`(FGuid & OutValue) const` <a id="structFRHAPI__SessionPlayer_1a9a66f2679f58a2fe39581512c7bb808d"></a>

Fills OutValue with the value of InvitingPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__SessionPlayer_1aa86e38d8a881a8a7947569d7b990a122)`()` <a id="structFRHAPI__SessionPlayer_1aa86e38d8a881a8a7947569d7b990a122"></a>

Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__SessionPlayer_1ac73b117340023d1c70d70a44f04081dc)`() const` <a id="structFRHAPI__SessionPlayer_1ac73b117340023d1c70d70a44f04081dc"></a>

Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a41efe769656a8d868f1d9bf4e6f95982)`(const FGuid & NewValue)` <a id="structFRHAPI__SessionPlayer_1a41efe769656a8d868f1d9bf4e6f95982"></a>

Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true.

#### `public inline void `[`SetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1ae775fcfba655315a862d729d264d735d)`(FGuid && NewValue)` <a id="structFRHAPI__SessionPlayer_1ae775fcfba655315a862d729d264d735d"></a>

Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a108279eb6926eafff034a612ab51fc69)`()` <a id="structFRHAPI__SessionPlayer_1a108279eb6926eafff034a612ab51fc69"></a>

Clears the value of InvitingPlayerUuid_Optional and sets InvitingPlayerUuid_IsSet to false.

#### `public inline bool `[`IsInvitingPlayerUuidSet`](#structFRHAPI__SessionPlayer_1a9c85c8ce748cec01d2ce4590745cc2ab)`() const` <a id="structFRHAPI__SessionPlayer_1a9c85c8ce748cec01d2ce4590745cc2ab"></a>

Checks whether InvitingPlayerUuid_Optional has been set.

#### `public inline FString & `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1a7d2eed6eae17648c1a82daa11c000767)`()` <a id="structFRHAPI__SessionPlayer_1a7d2eed6eae17648c1a82daa11c000767"></a>

Gets the value of SourceSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1a92ac903f5515ef18f72900db97823a51)`() const` <a id="structFRHAPI__SessionPlayer_1a92ac903f5515ef18f72900db97823a51"></a>

Gets the value of SourceSessionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1aec55bd5a87148458d810f9895421c5de)`(const FString & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1aec55bd5a87148458d810f9895421c5de"></a>

Gets the value of SourceSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1abcba87f13817fe0a6cacda017f742601)`(FString & OutValue) const` <a id="structFRHAPI__SessionPlayer_1abcba87f13817fe0a6cacda017f742601"></a>

Fills OutValue with the value of SourceSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetSourceSessionIdOrNull`](#structFRHAPI__SessionPlayer_1ae38dea17abe47f24efdad27849021e98)`()` <a id="structFRHAPI__SessionPlayer_1ae38dea17abe47f24efdad27849021e98"></a>

Returns a pointer to SourceSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetSourceSessionIdOrNull`](#structFRHAPI__SessionPlayer_1a1ddb0f19a856f4fd7020029ed7f657be)`() const` <a id="structFRHAPI__SessionPlayer_1a1ddb0f19a856f4fd7020029ed7f657be"></a>

Returns a pointer to SourceSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSourceSessionId`](#structFRHAPI__SessionPlayer_1a974ab75f208af30bb662a2141c1075a3)`(const FString & NewValue)` <a id="structFRHAPI__SessionPlayer_1a974ab75f208af30bb662a2141c1075a3"></a>

Sets the value of SourceSessionId_Optional and also sets SourceSessionId_IsSet to true.

#### `public inline void `[`SetSourceSessionId`](#structFRHAPI__SessionPlayer_1a458b38a395078654a306e23320ceeda4)`(FString && NewValue)` <a id="structFRHAPI__SessionPlayer_1a458b38a395078654a306e23320ceeda4"></a>

Sets the value of SourceSessionId_Optional and also sets SourceSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearSourceSessionId`](#structFRHAPI__SessionPlayer_1a94530a246d8f063c45837aef156267d5)`()` <a id="structFRHAPI__SessionPlayer_1a94530a246d8f063c45837aef156267d5"></a>

Clears the value of SourceSessionId_Optional and sets SourceSessionId_IsSet to false.

#### `public inline bool `[`IsSourceSessionIdSet`](#structFRHAPI__SessionPlayer_1a0e2b2053e001acba1369b9c3d2adeef8)`() const` <a id="structFRHAPI__SessionPlayer_1a0e2b2053e001acba1369b9c3d2adeef8"></a>

Checks whether SourceSessionId_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayer_1ae48cbaebc88d154c1cac3d0c79817d3d)`()` <a id="structFRHAPI__SessionPlayer_1ae48cbaebc88d154c1cac3d0c79817d3d"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayer_1af80a1a407a9e148a1c45f03aa3a4ba34)`() const` <a id="structFRHAPI__SessionPlayer_1af80a1a407a9e148a1c45f03aa3a4ba34"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayer_1a21c902007b5ca5b1d5e0e3efd029514e)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1a21c902007b5ca5b1d5e0e3efd029514e"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__SessionPlayer_1a84827d47bd6680f74e33e477d5ebea53)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionPlayer_1a84827d47bd6680f74e33e477d5ebea53"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayer_1a1584aced00e7b4f2cb5f468b4a233649)`()` <a id="structFRHAPI__SessionPlayer_1a1584aced00e7b4f2cb5f468b4a233649"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayer_1a8235e1dddf8ffbef91e75b089d619171)`() const` <a id="structFRHAPI__SessionPlayer_1a8235e1dddf8ffbef91e75b089d619171"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionPlayer_1a9a27bfb13c6d1cc989ad0665367194f8)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__SessionPlayer_1a9a27bfb13c6d1cc989ad0665367194f8"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionPlayer_1a969de0b12ba4895b9efbf709345eb2be)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__SessionPlayer_1a969de0b12ba4895b9efbf709345eb2be"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionPlayer_1a711c019f6e123fbd65355b61e3d16b23)`()` <a id="structFRHAPI__SessionPlayer_1a711c019f6e123fbd65355b61e3d16b23"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__SessionPlayer_1aba9c28371c31f1c3de118bf4cd9cb8af)`() const` <a id="structFRHAPI__SessionPlayer_1aba9c28371c31f1c3de118bf4cd9cb8af"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FString & `[`GetVersion`](#structFRHAPI__SessionPlayer_1ad34c614ef21925b84f760453edea08ea)`()` <a id="structFRHAPI__SessionPlayer_1ad34c614ef21925b84f760453edea08ea"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVersion`](#structFRHAPI__SessionPlayer_1a93c62523fcb280cb40ec8e2d9e03739b)`() const` <a id="structFRHAPI__SessionPlayer_1a93c62523fcb280cb40ec8e2d9e03739b"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetVersion`](#structFRHAPI__SessionPlayer_1a68c454a3ce3d81219db9a704fed0b834)`(const FString & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1a68c454a3ce3d81219db9a704fed0b834"></a>

Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetVersion`](#structFRHAPI__SessionPlayer_1a57c4d76dd7690b0062d7799e80e333af)`(FString & OutValue) const` <a id="structFRHAPI__SessionPlayer_1a57c4d76dd7690b0062d7799e80e333af"></a>

Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetVersionOrNull`](#structFRHAPI__SessionPlayer_1a8b1d100e147a7e33372d909620c70fa1)`()` <a id="structFRHAPI__SessionPlayer_1a8b1d100e147a7e33372d909620c70fa1"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__SessionPlayer_1a3bd37f1364975dacc8f004b606772f0a)`() const` <a id="structFRHAPI__SessionPlayer_1a3bd37f1364975dacc8f004b606772f0a"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetVersion`](#structFRHAPI__SessionPlayer_1a55472ed2f15c79cde9ba8d122f96e82b)`(const FString & NewValue)` <a id="structFRHAPI__SessionPlayer_1a55472ed2f15c79cde9ba8d122f96e82b"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true.

#### `public inline void `[`SetVersion`](#structFRHAPI__SessionPlayer_1a211f17e6b2a900b8ff4b10cd91beda39)`(FString && NewValue)` <a id="structFRHAPI__SessionPlayer_1a211f17e6b2a900b8ff4b10cd91beda39"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.

#### `public inline void `[`ClearVersion`](#structFRHAPI__SessionPlayer_1a118c09e3ead5ffc3d5a533d39d429d8c)`()` <a id="structFRHAPI__SessionPlayer_1a118c09e3ead5ffc3d5a533d39d429d8c"></a>

Clears the value of Version_Optional and sets Version_IsSet to false.

#### `public inline bool `[`IsVersionSet`](#structFRHAPI__SessionPlayer_1ab088f52b8df22c93ef6e84d88aeba23e)`() const` <a id="structFRHAPI__SessionPlayer_1ab088f52b8df22c93ef6e84d88aeba23e"></a>

Checks whether Version_Optional has been set.

#### `public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1a2df426e92c2e80a2d8468d3092c7e47e)`()` <a id="structFRHAPI__SessionPlayer_1a2df426e92c2e80a2d8468d3092c7e47e"></a>

Gets the value of ClientSettings_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1ae2240cb64fc9f771d7b6923bed6cde31)`() const` <a id="structFRHAPI__SessionPlayer_1ae2240cb64fc9f771d7b6923bed6cde31"></a>

Gets the value of ClientSettings_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1aee8ff8d562ad45c273fd9fca88c3c844)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1aee8ff8d562ad45c273fd9fca88c3c844"></a>

Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1a2fe4bca124fda7bac88a901c77f7bb73)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & OutValue) const` <a id="structFRHAPI__SessionPlayer_1a2fe4bca124fda7bac88a901c77f7bb73"></a>

Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__SessionPlayer_1a7d9eca2075c0f5177a6bca642e854fc7)`()` <a id="structFRHAPI__SessionPlayer_1a7d9eca2075c0f5177a6bca642e854fc7"></a>

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__SessionPlayer_1a96370aecd4a6aa19c83e456cd64946e3)`() const` <a id="structFRHAPI__SessionPlayer_1a96370aecd4a6aa19c83e456cd64946e3"></a>

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetClientSettings`](#structFRHAPI__SessionPlayer_1a2267fa9b9ff554f580093e9795f4b3c1)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` <a id="structFRHAPI__SessionPlayer_1a2267fa9b9ff554f580093e9795f4b3c1"></a>

Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.

#### `public inline void `[`SetClientSettings`](#structFRHAPI__SessionPlayer_1aa6016551db90452842fcb47b63fc9513)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` <a id="structFRHAPI__SessionPlayer_1aa6016551db90452842fcb47b63fc9513"></a>

Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true using move semantics.

#### `public inline void `[`ClearClientSettings`](#structFRHAPI__SessionPlayer_1a821f58c31fd1c68d79b8059e68050e46)`()` <a id="structFRHAPI__SessionPlayer_1a821f58c31fd1c68d79b8059e68050e46"></a>

Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.

#### `public inline bool `[`IsClientSettingsSet`](#structFRHAPI__SessionPlayer_1a62b0f07ad70e763dd6c4d6985c28bd8c)`() const` <a id="structFRHAPI__SessionPlayer_1a62b0f07ad70e763dd6c4d6985c28bd8c"></a>

Checks whether ClientSettings_Optional has been set.

#### `public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1af070e849c1ad1ba733a699ab8071a0df)`()` <a id="structFRHAPI__SessionPlayer_1af070e849c1ad1ba733a699ab8071a0df"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1ae9ce3292dbd33658a622d8439f81ca46)`() const` <a id="structFRHAPI__SessionPlayer_1ae9ce3292dbd33658a622d8439f81ca46"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a59ac008e2a4bc9a41e9becbf1adabae3)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1a59ac008e2a4bc9a41e9becbf1adabae3"></a>

Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1ad343d91946f076520d5c3622da363df9)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` <a id="structFRHAPI__SessionPlayer_1ad343d91946f076520d5c3622da363df9"></a>

Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__SessionPlayer_1a337ee6234c22739644694b234779e84c)`()` <a id="structFRHAPI__SessionPlayer_1a337ee6234c22739644694b234779e84c"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__SessionPlayer_1a100f842cd7ebfcc326d8a72afd42b1f8)`() const` <a id="structFRHAPI__SessionPlayer_1a100f842cd7ebfcc326d8a72afd42b1f8"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a2d930713a59c9b6f32269d3c84b7d0e7)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` <a id="structFRHAPI__SessionPlayer_1a2d930713a59c9b6f32269d3c84b7d0e7"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.

#### `public inline void `[`SetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a5860fc77403656e49d3b50fab5626fc9)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` <a id="structFRHAPI__SessionPlayer_1a5860fc77403656e49d3b50fab5626fc9"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.

#### `public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__SessionPlayer_1aab20b5ceba1df5862b8b103d6c6352ea)`()` <a id="structFRHAPI__SessionPlayer_1aab20b5ceba1df5862b8b103d6c6352ea"></a>

Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.

#### `public inline bool `[`IsCrossplayPreferencesSet`](#structFRHAPI__SessionPlayer_1a50e849cabed9fa2247c425bda28eeda2)`() const` <a id="structFRHAPI__SessionPlayer_1a50e849cabed9fa2247c425bda28eeda2"></a>

Checks whether CrossplayPreferences_Optional has been set.

#### `public inline FDateTime & `[`GetInvited`](#structFRHAPI__SessionPlayer_1a690fe204bef99aa5df108636301f33d3)`()` <a id="structFRHAPI__SessionPlayer_1a690fe204bef99aa5df108636301f33d3"></a>

Gets the value of Invited_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetInvited`](#structFRHAPI__SessionPlayer_1a3038673cda1b9ee616a7fa9b888c8c1a)`() const` <a id="structFRHAPI__SessionPlayer_1a3038673cda1b9ee616a7fa9b888c8c1a"></a>

Gets the value of Invited_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetInvited`](#structFRHAPI__SessionPlayer_1ad7ff86032ba8dc5fc57ca303bac140c8)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1ad7ff86032ba8dc5fc57ca303bac140c8"></a>

Gets the value of Invited_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInvited`](#structFRHAPI__SessionPlayer_1a76c27fdddda2985942a56a424bbd06b9)`(FDateTime & OutValue) const` <a id="structFRHAPI__SessionPlayer_1a76c27fdddda2985942a56a424bbd06b9"></a>

Fills OutValue with the value of Invited_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetInvitedOrNull`](#structFRHAPI__SessionPlayer_1a9983520f51284f9ac5b30b4493f8d5a3)`()` <a id="structFRHAPI__SessionPlayer_1a9983520f51284f9ac5b30b4493f8d5a3"></a>

Returns a pointer to Invited_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetInvitedOrNull`](#structFRHAPI__SessionPlayer_1a9844c91a587f510bb5733910f202bbbb)`() const` <a id="structFRHAPI__SessionPlayer_1a9844c91a587f510bb5733910f202bbbb"></a>

Returns a pointer to Invited_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInvited`](#structFRHAPI__SessionPlayer_1a3f2a8cee70c4e795028af5ffd30575c7)`(const FDateTime & NewValue)` <a id="structFRHAPI__SessionPlayer_1a3f2a8cee70c4e795028af5ffd30575c7"></a>

Sets the value of Invited_Optional and also sets Invited_IsSet to true.

#### `public inline void `[`SetInvited`](#structFRHAPI__SessionPlayer_1ac7609c54e0843b8b55dfcf77bdc12d34)`(FDateTime && NewValue)` <a id="structFRHAPI__SessionPlayer_1ac7609c54e0843b8b55dfcf77bdc12d34"></a>

Sets the value of Invited_Optional and also sets Invited_IsSet to true using move semantics.

#### `public inline void `[`ClearInvited`](#structFRHAPI__SessionPlayer_1aa6b1a742b86c52aa02ee01441a2bf2d8)`()` <a id="structFRHAPI__SessionPlayer_1aa6b1a742b86c52aa02ee01441a2bf2d8"></a>

Clears the value of Invited_Optional and sets Invited_IsSet to false.

#### `public inline bool `[`IsInvitedSet`](#structFRHAPI__SessionPlayer_1a681d19ff77500805053cacf6d529707c)`() const` <a id="structFRHAPI__SessionPlayer_1a681d19ff77500805053cacf6d529707c"></a>

Checks whether Invited_Optional has been set.

#### `public inline FDateTime & `[`GetJoined`](#structFRHAPI__SessionPlayer_1a61e17975a631c0867b4157ecbea1d05d)`()` <a id="structFRHAPI__SessionPlayer_1a61e17975a631c0867b4157ecbea1d05d"></a>

Gets the value of Joined_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetJoined`](#structFRHAPI__SessionPlayer_1a68101fbc328224bddc1470cbc4ecf984)`() const` <a id="structFRHAPI__SessionPlayer_1a68101fbc328224bddc1470cbc4ecf984"></a>

Gets the value of Joined_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetJoined`](#structFRHAPI__SessionPlayer_1aaa59d0064d184b055320bd8dcf7dd35f)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1aaa59d0064d184b055320bd8dcf7dd35f"></a>

Gets the value of Joined_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoined`](#structFRHAPI__SessionPlayer_1a5b395ef14a3539880ebb60c8388ad570)`(FDateTime & OutValue) const` <a id="structFRHAPI__SessionPlayer_1a5b395ef14a3539880ebb60c8388ad570"></a>

Fills OutValue with the value of Joined_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetJoinedOrNull`](#structFRHAPI__SessionPlayer_1a884cd436903142741c067985efaa37cb)`()` <a id="structFRHAPI__SessionPlayer_1a884cd436903142741c067985efaa37cb"></a>

Returns a pointer to Joined_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetJoinedOrNull`](#structFRHAPI__SessionPlayer_1a4c7a37595a5bb448ce2a774fa15d8111)`() const` <a id="structFRHAPI__SessionPlayer_1a4c7a37595a5bb448ce2a774fa15d8111"></a>

Returns a pointer to Joined_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoined`](#structFRHAPI__SessionPlayer_1a8ed366220b9b073812691e913ab66aa8)`(const FDateTime & NewValue)` <a id="structFRHAPI__SessionPlayer_1a8ed366220b9b073812691e913ab66aa8"></a>

Sets the value of Joined_Optional and also sets Joined_IsSet to true.

#### `public inline void `[`SetJoined`](#structFRHAPI__SessionPlayer_1ad0a79f61b61e1166ac8c646637372d4b)`(FDateTime && NewValue)` <a id="structFRHAPI__SessionPlayer_1ad0a79f61b61e1166ac8c646637372d4b"></a>

Sets the value of Joined_Optional and also sets Joined_IsSet to true using move semantics.

#### `public inline void `[`ClearJoined`](#structFRHAPI__SessionPlayer_1a8b9c20d24a494d6a9c252112833d06e2)`()` <a id="structFRHAPI__SessionPlayer_1a8b9c20d24a494d6a9c252112833d06e2"></a>

Clears the value of Joined_Optional and sets Joined_IsSet to false.

#### `public inline bool `[`IsJoinedSet`](#structFRHAPI__SessionPlayer_1af47667b8cbff00b061bdfcf40a69ea54)`() const` <a id="structFRHAPI__SessionPlayer_1af47667b8cbff00b061bdfcf40a69ea54"></a>

Checks whether Joined_Optional has been set.

#### `public inline TSet< ERHAPI_IntraSessionPermissions > & `[`GetSessionPermissions`](#structFRHAPI__SessionPlayer_1aaeb473273193a256699a83eff7679aa1)`()` <a id="structFRHAPI__SessionPlayer_1aaeb473273193a256699a83eff7679aa1"></a>

Gets the value of SessionPermissions_Optional, regardless of it having been set.

#### `public inline const TSet< ERHAPI_IntraSessionPermissions > & `[`GetSessionPermissions`](#structFRHAPI__SessionPlayer_1a4d66d79dcf0f57b9cb74a92e2dc9658f)`() const` <a id="structFRHAPI__SessionPlayer_1a4d66d79dcf0f57b9cb74a92e2dc9658f"></a>

Gets the value of SessionPermissions_Optional, regardless of it having been set.

#### `public inline const TSet< ERHAPI_IntraSessionPermissions > & `[`GetSessionPermissions`](#structFRHAPI__SessionPlayer_1a991fd39de080136360fd417224528583)`(const TSet< ERHAPI_IntraSessionPermissions > & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1a991fd39de080136360fd417224528583"></a>

Gets the value of SessionPermissions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessionPermissions`](#structFRHAPI__SessionPlayer_1a9d5dacc44c11b36e8c0d85d4212c0c40)`(TSet< ERHAPI_IntraSessionPermissions > & OutValue) const` <a id="structFRHAPI__SessionPlayer_1a9d5dacc44c11b36e8c0d85d4212c0c40"></a>

Fills OutValue with the value of SessionPermissions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TSet< ERHAPI_IntraSessionPermissions > * `[`GetSessionPermissionsOrNull`](#structFRHAPI__SessionPlayer_1a60fb1c5626044ca71b6a7fde9fdaf7dc)`()` <a id="structFRHAPI__SessionPlayer_1a60fb1c5626044ca71b6a7fde9fdaf7dc"></a>

Returns a pointer to SessionPermissions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TSet< ERHAPI_IntraSessionPermissions > * `[`GetSessionPermissionsOrNull`](#structFRHAPI__SessionPlayer_1a9306aafbbcddbcb88b04866324a606dc)`() const` <a id="structFRHAPI__SessionPlayer_1a9306aafbbcddbcb88b04866324a606dc"></a>

Returns a pointer to SessionPermissions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessionPermissions`](#structFRHAPI__SessionPlayer_1abc6fe81b22782a36077809ddb3ccb1df)`(const TSet< ERHAPI_IntraSessionPermissions > & NewValue)` <a id="structFRHAPI__SessionPlayer_1abc6fe81b22782a36077809ddb3ccb1df"></a>

Sets the value of SessionPermissions_Optional and also sets SessionPermissions_IsSet to true.

#### `public inline void `[`SetSessionPermissions`](#structFRHAPI__SessionPlayer_1a5fbfda7bce6fca86346366240efe9d17)`(TSet< ERHAPI_IntraSessionPermissions > && NewValue)` <a id="structFRHAPI__SessionPlayer_1a5fbfda7bce6fca86346366240efe9d17"></a>

Sets the value of SessionPermissions_Optional and also sets SessionPermissions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionPermissions`](#structFRHAPI__SessionPlayer_1a09ed5569363e26878835fbcd39ed58a1)`()` <a id="structFRHAPI__SessionPlayer_1a09ed5569363e26878835fbcd39ed58a1"></a>

Clears the value of SessionPermissions_Optional and sets SessionPermissions_IsSet to false.

#### `public inline bool `[`IsSessionPermissionsSet`](#structFRHAPI__SessionPlayer_1aa96965d5e6f3a19f820bd160e2824a19)`() const` <a id="structFRHAPI__SessionPlayer_1aa96965d5e6f3a19f820bd160e2824a19"></a>

Checks whether SessionPermissions_Optional has been set.

