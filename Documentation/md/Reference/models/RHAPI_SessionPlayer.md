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
`public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1abfb9f6952d2863b3b0c67243efacf51a)`()` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1ac7b5fefe5d8940e97dcfd778f524df37)`() const` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1ab80521e02b25ebaf656e394cf6bcb85d)`(const int32 & DefaultValue) const` | Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1a2203724415bcef81696b0575e0e41461)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__SessionPlayer_1a38299d21475edc1dc072b8d8ad5afa81)`()` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__SessionPlayer_1a746445f10ca3c9b8f22be5ccb7208211)`() const` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__SessionPlayer_1ac21900709a004af9b42c240042187261)`(const int32 & NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__SessionPlayer_1a82d102b77b9e318a10c8ca542320e84e)`(int32 && NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.
`public inline void `[`ClearPlayerId`](#structFRHAPI__SessionPlayer_1aa5068324d303c0ec84db535158fb345e)`()` | Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__SessionPlayer_1a4762788d95a1c36b9fda49f6214fa09d)`()` | Returns the default value of PlayerId.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayer_1a8b703077027ca3bccaeb7dcd66cf29b3)`()` | Gets the value of PlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayer_1a6398484690179ed34de3f8bac9ca17d3)`() const` | Gets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__SessionPlayer_1ab578d5e32d9114cc1a543948d181013a)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__SessionPlayer_1a8b179dea8b6e341a2ed35188f883b063)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FORCEINLINE ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayer_1ad888c32d7427819a6ad311470f3f62a0)`()` | Gets the value of Status.
`public inline FORCEINLINE const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayer_1a4dc12f6a90a166255c62b5c98a161233)`() const` | Gets the value of Status.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__SessionPlayer_1a4bb7010cd9aa9d38ad5ab10070b261a3)`(const ERHAPI_SessionPlayerStatus & NewValue)` | Sets the value of Status.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__SessionPlayer_1aaa2e3164fe6784f9a7ec39ba2ebc2ba0)`(ERHAPI_SessionPlayerStatus && NewValue)` | Sets the value of Status using move semantics.
`public inline FORCEINLINE FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a543f8a487af45bcd74b25249885ceec7)`()` | Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1adf54123481744727bcef7a2ec116506a)`() const` | Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1afa173d518bc40f9319045f7da464c655)`(const FGuid & DefaultValue) const` | Gets the value of InvitingPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a97a5e2b1cfd7dfa4e298b964bc43924f)`(FGuid & OutValue) const` | Fills OutValue with the value of InvitingPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__SessionPlayer_1aead3ed1b71b98815ef40a6ce71850b2e)`()` | Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__SessionPlayer_1a1b547230b847dc27b880a5a0f101d48e)`() const` | Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1abdd2f6dbd1bc03dc9aeabd21690ff4cc)`(const FGuid & NewValue)` | Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a458f28af7c1d7b49ca12bc2512ce7923)`(FGuid && NewValue)` | Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a108279eb6926eafff034a612ab51fc69)`()` | Clears the value of InvitingPlayerUuid_Optional and sets InvitingPlayerUuid_IsSet to false.
`public inline FORCEINLINE FString & `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1a6d2654516b188bedbe03729a0d284d50)`()` | Gets the value of SourceSessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1a5cedccdcbe92b0a380e3efdfdf0401cd)`() const` | Gets the value of SourceSessionId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1a1fa1a0f5b641c3d39cedbb6db85ff8b7)`(const FString & DefaultValue) const` | Gets the value of SourceSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1afdbd1b213b431c203731a5399eb93ebf)`(FString & OutValue) const` | Fills OutValue with the value of SourceSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetSourceSessionIdOrNull`](#structFRHAPI__SessionPlayer_1a64298e97ce648bb1db05cbf5ba3b849a)`()` | Returns a pointer to SourceSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetSourceSessionIdOrNull`](#structFRHAPI__SessionPlayer_1af3efa81b6b895be59fcc19d16b4c843f)`() const` | Returns a pointer to SourceSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSourceSessionId`](#structFRHAPI__SessionPlayer_1ad54d09e44b24c8b098c4e9159e41c9f8)`(const FString & NewValue)` | Sets the value of SourceSessionId_Optional and also sets SourceSessionId_IsSet to true.
`public inline FORCEINLINE void `[`SetSourceSessionId`](#structFRHAPI__SessionPlayer_1a83d67476297f200c002aa2f60b36492b)`(FString && NewValue)` | Sets the value of SourceSessionId_Optional and also sets SourceSessionId_IsSet to true using move semantics.
`public inline void `[`ClearSourceSessionId`](#structFRHAPI__SessionPlayer_1a94530a246d8f063c45837aef156267d5)`()` | Clears the value of SourceSessionId_Optional and sets SourceSessionId_IsSet to false.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayer_1a11af71a859bbada2c045075112d27c0c)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayer_1a637c568686278bf4ca2a6b6db614b3ee)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayer_1af442acbdda3d62fa8c061cfd7d1b8bcf)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__SessionPlayer_1adaf2854b9f7f1352d59c28a640ee4aeb)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayer_1ac5cfbaacff5ca1625589a4899d2807ff)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayer_1ad5fdaea947ab3eaaecbefd7cecfdc929)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionPlayer_1a1c3850d6655f14f4a4a631bfcec48d30)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionPlayer_1a4ca9a4642ec34f3f3cdffc3da86588bd)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionPlayer_1a711c019f6e123fbd65355b61e3d16b23)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE FString & `[`GetVersion`](#structFRHAPI__SessionPlayer_1aa8794d6c4deaeb4cd5ca5d2f767a992c)`()` | Gets the value of Version_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetVersion`](#structFRHAPI__SessionPlayer_1ae0c0305cb8b079f51b45bc031dd9f92f)`() const` | Gets the value of Version_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetVersion`](#structFRHAPI__SessionPlayer_1a9ed6ad83f25f062541fe48461fada8a4)`(const FString & DefaultValue) const` | Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetVersion`](#structFRHAPI__SessionPlayer_1a2f07ab19cabed8ea87ddac8f4304157c)`(FString & OutValue) const` | Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetVersionOrNull`](#structFRHAPI__SessionPlayer_1a318425d659c0d1c1b58040459bc169b7)`()` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetVersionOrNull`](#structFRHAPI__SessionPlayer_1a92f90c430cef523c5186356c5dc0f898)`() const` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetVersion`](#structFRHAPI__SessionPlayer_1a2d699521cb7477243adf8b5a832948d7)`(const FString & NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true.
`public inline FORCEINLINE void `[`SetVersion`](#structFRHAPI__SessionPlayer_1ab8a23320f8c0a5aef69393115f85ac3b)`(FString && NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.
`public inline void `[`ClearVersion`](#structFRHAPI__SessionPlayer_1a118c09e3ead5ffc3d5a533d39d429d8c)`()` | Clears the value of Version_Optional and sets Version_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1a73ca692aabb969be840b03b50de85717)`()` | Gets the value of ClientSettings_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1a405aaa7c743986de4ca8b73d26dc6312)`() const` | Gets the value of ClientSettings_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1a37baa4a507d63478a5e2313ea201f73d)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & DefaultValue) const` | Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1a81f292ed4b66c561781536f6ae248897)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & OutValue) const` | Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__SessionPlayer_1a10a77ba5827ad5943d95ee4c6a36117b)`()` | Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__SessionPlayer_1a6bbae968d7e2bd4ae6153fb32647cd54)`() const` | Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetClientSettings`](#structFRHAPI__SessionPlayer_1aad250f4ede6b65bb66201b24a8f67520)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` | Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.
`public inline FORCEINLINE void `[`SetClientSettings`](#structFRHAPI__SessionPlayer_1ae2bc6c96fcc8348341a3c1319989cc80)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` | Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true using move semantics.
`public inline void `[`ClearClientSettings`](#structFRHAPI__SessionPlayer_1a821f58c31fd1c68d79b8059e68050e46)`()` | Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a6a21f3c722a4e7df93eda67d7c21baca)`()` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a858ecb558e9c74f131f2a4d28007d38f)`() const` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a9c28c4d44b86d017b1263f5b889e7fc1)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` | Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1af63db1c06cf0ed45b26dee51bc5e579f)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` | Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__SessionPlayer_1a15cf4ee5493fa1f91867662096d7cbf4)`()` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__SessionPlayer_1a558568393c8fc8cb36f4a7f611e94bb6)`() const` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1aaa604c62c65a1ce43b637acd4202bf14)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.
`public inline FORCEINLINE void `[`SetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a360855cfcb0dd6aed4611abf2f8cab14)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.
`public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__SessionPlayer_1aab20b5ceba1df5862b8b103d6c6352ea)`()` | Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetInvited`](#structFRHAPI__SessionPlayer_1a2e06190a5854624ae4ff42644a253542)`()` | Gets the value of Invited_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetInvited`](#structFRHAPI__SessionPlayer_1abe30257cdd3ac104dd7fc3e8bdbf2151)`() const` | Gets the value of Invited_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetInvited`](#structFRHAPI__SessionPlayer_1a8bba7d319aa8bceb501d27da5ab77ee3)`(const FDateTime & DefaultValue) const` | Gets the value of Invited_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInvited`](#structFRHAPI__SessionPlayer_1ae7663dc25370f75295b34aefe9ac1614)`(FDateTime & OutValue) const` | Fills OutValue with the value of Invited_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetInvitedOrNull`](#structFRHAPI__SessionPlayer_1aa2d66f5f58da71ddc8deae891e727795)`()` | Returns a pointer to Invited_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetInvitedOrNull`](#structFRHAPI__SessionPlayer_1aaabbe2ca9794811772956b7d0ba7e849)`() const` | Returns a pointer to Invited_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInvited`](#structFRHAPI__SessionPlayer_1a533205152c71bae432492c6f608c0289)`(const FDateTime & NewValue)` | Sets the value of Invited_Optional and also sets Invited_IsSet to true.
`public inline FORCEINLINE void `[`SetInvited`](#structFRHAPI__SessionPlayer_1a145724c7c31cd823af2d3763683b8307)`(FDateTime && NewValue)` | Sets the value of Invited_Optional and also sets Invited_IsSet to true using move semantics.
`public inline void `[`ClearInvited`](#structFRHAPI__SessionPlayer_1aa6b1a742b86c52aa02ee01441a2bf2d8)`()` | Clears the value of Invited_Optional and sets Invited_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetJoined`](#structFRHAPI__SessionPlayer_1a92a1334f871454b5dcc663786164335a)`()` | Gets the value of Joined_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetJoined`](#structFRHAPI__SessionPlayer_1a588a0d87b2e6788b50ff9fb39a228ae4)`() const` | Gets the value of Joined_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetJoined`](#structFRHAPI__SessionPlayer_1a4c7e3113e60b5246c9fc2b67caa68a06)`(const FDateTime & DefaultValue) const` | Gets the value of Joined_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetJoined`](#structFRHAPI__SessionPlayer_1a532b4926dc1bbb94e0adfd80d128557b)`(FDateTime & OutValue) const` | Fills OutValue with the value of Joined_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetJoinedOrNull`](#structFRHAPI__SessionPlayer_1a1df99f0eb2c2b2ab1bb7f8be750f869a)`()` | Returns a pointer to Joined_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetJoinedOrNull`](#structFRHAPI__SessionPlayer_1ac37da81074ba7c12398f53158b7aa8b8)`() const` | Returns a pointer to Joined_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetJoined`](#structFRHAPI__SessionPlayer_1ace5bb789b73cb48783443216f967dfa6)`(const FDateTime & NewValue)` | Sets the value of Joined_Optional and also sets Joined_IsSet to true.
`public inline FORCEINLINE void `[`SetJoined`](#structFRHAPI__SessionPlayer_1a30f28a3197256c25eaf708952e9b6336)`(FDateTime && NewValue)` | Sets the value of Joined_Optional and also sets Joined_IsSet to true using move semantics.
`public inline void `[`ClearJoined`](#structFRHAPI__SessionPlayer_1a8b9c20d24a494d6a9c252112833d06e2)`()` | Clears the value of Joined_Optional and sets Joined_IsSet to false.
`public inline FORCEINLINE TSet< ERHAPI_IntraSessionPermissions > & `[`GetSessionPermissions`](#structFRHAPI__SessionPlayer_1a599776a8a8f25d8b8422867e54d7e6da)`()` | Gets the value of SessionPermissions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TSet< ERHAPI_IntraSessionPermissions > & `[`GetSessionPermissions`](#structFRHAPI__SessionPlayer_1a7faaa1463221e6dcb237d59cb671763c)`() const` | Gets the value of SessionPermissions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TSet< ERHAPI_IntraSessionPermissions > & `[`GetSessionPermissions`](#structFRHAPI__SessionPlayer_1ab3d76d828d57327ca68fd8dad790d094)`(const TSet< ERHAPI_IntraSessionPermissions > & DefaultValue) const` | Gets the value of SessionPermissions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSessionPermissions`](#structFRHAPI__SessionPlayer_1ab9f5f8e76a38c26beb0c7bd6ddea8add)`(TSet< ERHAPI_IntraSessionPermissions > & OutValue) const` | Fills OutValue with the value of SessionPermissions_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TSet< ERHAPI_IntraSessionPermissions > * `[`GetSessionPermissionsOrNull`](#structFRHAPI__SessionPlayer_1ae62d5c1ffd04c290b1a636f4b72aca37)`()` | Returns a pointer to SessionPermissions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TSet< ERHAPI_IntraSessionPermissions > * `[`GetSessionPermissionsOrNull`](#structFRHAPI__SessionPlayer_1aaebc9ef75a61f92b87ee6f66c87b5542)`() const` | Returns a pointer to SessionPermissions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSessionPermissions`](#structFRHAPI__SessionPlayer_1af7550d980d92e08c5f79d4f4fac5f7d4)`(const TSet< ERHAPI_IntraSessionPermissions > & NewValue)` | Sets the value of SessionPermissions_Optional and also sets SessionPermissions_IsSet to true.
`public inline FORCEINLINE void `[`SetSessionPermissions`](#structFRHAPI__SessionPlayer_1a4e42ddaaf0c49863e4b2740ea94f8704)`(TSet< ERHAPI_IntraSessionPermissions > && NewValue)` | Sets the value of SessionPermissions_Optional and also sets SessionPermissions_IsSet to true using move semantics.
`public inline void `[`ClearSessionPermissions`](#structFRHAPI__SessionPlayer_1a09ed5569363e26878835fbcd39ed58a1)`()` | Clears the value of SessionPermissions_Optional and sets SessionPermissions_IsSet to false.

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

#### `public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1abfb9f6952d2863b3b0c67243efacf51a)`()` <a id="structFRHAPI__SessionPlayer_1abfb9f6952d2863b3b0c67243efacf51a"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1ac7b5fefe5d8940e97dcfd778f524df37)`() const` <a id="structFRHAPI__SessionPlayer_1ac7b5fefe5d8940e97dcfd778f524df37"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1ab80521e02b25ebaf656e394cf6bcb85d)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1ab80521e02b25ebaf656e394cf6bcb85d"></a>

Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1a2203724415bcef81696b0575e0e41461)`(int32 & OutValue) const` <a id="structFRHAPI__SessionPlayer_1a2203724415bcef81696b0575e0e41461"></a>

Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__SessionPlayer_1a38299d21475edc1dc072b8d8ad5afa81)`()` <a id="structFRHAPI__SessionPlayer_1a38299d21475edc1dc072b8d8ad5afa81"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__SessionPlayer_1a746445f10ca3c9b8f22be5ccb7208211)`() const` <a id="structFRHAPI__SessionPlayer_1a746445f10ca3c9b8f22be5ccb7208211"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__SessionPlayer_1ac21900709a004af9b42c240042187261)`(const int32 & NewValue)` <a id="structFRHAPI__SessionPlayer_1ac21900709a004af9b42c240042187261"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__SessionPlayer_1a82d102b77b9e318a10c8ca542320e84e)`(int32 && NewValue)` <a id="structFRHAPI__SessionPlayer_1a82d102b77b9e318a10c8ca542320e84e"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerId`](#structFRHAPI__SessionPlayer_1aa5068324d303c0ec84db535158fb345e)`()` <a id="structFRHAPI__SessionPlayer_1aa5068324d303c0ec84db535158fb345e"></a>

Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__SessionPlayer_1a4762788d95a1c36b9fda49f6214fa09d)`()` <a id="structFRHAPI__SessionPlayer_1a4762788d95a1c36b9fda49f6214fa09d"></a>

Returns the default value of PlayerId.

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayer_1a8b703077027ca3bccaeb7dcd66cf29b3)`()` <a id="structFRHAPI__SessionPlayer_1a8b703077027ca3bccaeb7dcd66cf29b3"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayer_1a6398484690179ed34de3f8bac9ca17d3)`() const` <a id="structFRHAPI__SessionPlayer_1a6398484690179ed34de3f8bac9ca17d3"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__SessionPlayer_1ab578d5e32d9114cc1a543948d181013a)`(const FGuid & NewValue)` <a id="structFRHAPI__SessionPlayer_1ab578d5e32d9114cc1a543948d181013a"></a>

Sets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__SessionPlayer_1a8b179dea8b6e341a2ed35188f883b063)`(FGuid && NewValue)` <a id="structFRHAPI__SessionPlayer_1a8b179dea8b6e341a2ed35188f883b063"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FORCEINLINE ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayer_1ad888c32d7427819a6ad311470f3f62a0)`()` <a id="structFRHAPI__SessionPlayer_1ad888c32d7427819a6ad311470f3f62a0"></a>

Gets the value of Status.

#### `public inline FORCEINLINE const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayer_1a4dc12f6a90a166255c62b5c98a161233)`() const` <a id="structFRHAPI__SessionPlayer_1a4dc12f6a90a166255c62b5c98a161233"></a>

Gets the value of Status.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__SessionPlayer_1a4bb7010cd9aa9d38ad5ab10070b261a3)`(const ERHAPI_SessionPlayerStatus & NewValue)` <a id="structFRHAPI__SessionPlayer_1a4bb7010cd9aa9d38ad5ab10070b261a3"></a>

Sets the value of Status.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__SessionPlayer_1aaa2e3164fe6784f9a7ec39ba2ebc2ba0)`(ERHAPI_SessionPlayerStatus && NewValue)` <a id="structFRHAPI__SessionPlayer_1aaa2e3164fe6784f9a7ec39ba2ebc2ba0"></a>

Sets the value of Status using move semantics.

#### `public inline FORCEINLINE FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a543f8a487af45bcd74b25249885ceec7)`()` <a id="structFRHAPI__SessionPlayer_1a543f8a487af45bcd74b25249885ceec7"></a>

Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1adf54123481744727bcef7a2ec116506a)`() const` <a id="structFRHAPI__SessionPlayer_1adf54123481744727bcef7a2ec116506a"></a>

Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1afa173d518bc40f9319045f7da464c655)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1afa173d518bc40f9319045f7da464c655"></a>

Gets the value of InvitingPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a97a5e2b1cfd7dfa4e298b964bc43924f)`(FGuid & OutValue) const` <a id="structFRHAPI__SessionPlayer_1a97a5e2b1cfd7dfa4e298b964bc43924f"></a>

Fills OutValue with the value of InvitingPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__SessionPlayer_1aead3ed1b71b98815ef40a6ce71850b2e)`()` <a id="structFRHAPI__SessionPlayer_1aead3ed1b71b98815ef40a6ce71850b2e"></a>

Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__SessionPlayer_1a1b547230b847dc27b880a5a0f101d48e)`() const` <a id="structFRHAPI__SessionPlayer_1a1b547230b847dc27b880a5a0f101d48e"></a>

Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1abdd2f6dbd1bc03dc9aeabd21690ff4cc)`(const FGuid & NewValue)` <a id="structFRHAPI__SessionPlayer_1abdd2f6dbd1bc03dc9aeabd21690ff4cc"></a>

Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a458f28af7c1d7b49ca12bc2512ce7923)`(FGuid && NewValue)` <a id="structFRHAPI__SessionPlayer_1a458f28af7c1d7b49ca12bc2512ce7923"></a>

Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a108279eb6926eafff034a612ab51fc69)`()` <a id="structFRHAPI__SessionPlayer_1a108279eb6926eafff034a612ab51fc69"></a>

Clears the value of InvitingPlayerUuid_Optional and sets InvitingPlayerUuid_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1a6d2654516b188bedbe03729a0d284d50)`()` <a id="structFRHAPI__SessionPlayer_1a6d2654516b188bedbe03729a0d284d50"></a>

Gets the value of SourceSessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1a5cedccdcbe92b0a380e3efdfdf0401cd)`() const` <a id="structFRHAPI__SessionPlayer_1a5cedccdcbe92b0a380e3efdfdf0401cd"></a>

Gets the value of SourceSessionId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1a1fa1a0f5b641c3d39cedbb6db85ff8b7)`(const FString & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1a1fa1a0f5b641c3d39cedbb6db85ff8b7"></a>

Gets the value of SourceSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1afdbd1b213b431c203731a5399eb93ebf)`(FString & OutValue) const` <a id="structFRHAPI__SessionPlayer_1afdbd1b213b431c203731a5399eb93ebf"></a>

Fills OutValue with the value of SourceSessionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetSourceSessionIdOrNull`](#structFRHAPI__SessionPlayer_1a64298e97ce648bb1db05cbf5ba3b849a)`()` <a id="structFRHAPI__SessionPlayer_1a64298e97ce648bb1db05cbf5ba3b849a"></a>

Returns a pointer to SourceSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetSourceSessionIdOrNull`](#structFRHAPI__SessionPlayer_1af3efa81b6b895be59fcc19d16b4c843f)`() const` <a id="structFRHAPI__SessionPlayer_1af3efa81b6b895be59fcc19d16b4c843f"></a>

Returns a pointer to SourceSessionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSourceSessionId`](#structFRHAPI__SessionPlayer_1ad54d09e44b24c8b098c4e9159e41c9f8)`(const FString & NewValue)` <a id="structFRHAPI__SessionPlayer_1ad54d09e44b24c8b098c4e9159e41c9f8"></a>

Sets the value of SourceSessionId_Optional and also sets SourceSessionId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSourceSessionId`](#structFRHAPI__SessionPlayer_1a83d67476297f200c002aa2f60b36492b)`(FString && NewValue)` <a id="structFRHAPI__SessionPlayer_1a83d67476297f200c002aa2f60b36492b"></a>

Sets the value of SourceSessionId_Optional and also sets SourceSessionId_IsSet to true using move semantics.

#### `public inline void `[`ClearSourceSessionId`](#structFRHAPI__SessionPlayer_1a94530a246d8f063c45837aef156267d5)`()` <a id="structFRHAPI__SessionPlayer_1a94530a246d8f063c45837aef156267d5"></a>

Clears the value of SourceSessionId_Optional and sets SourceSessionId_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayer_1a11af71a859bbada2c045075112d27c0c)`()` <a id="structFRHAPI__SessionPlayer_1a11af71a859bbada2c045075112d27c0c"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayer_1a637c568686278bf4ca2a6b6db614b3ee)`() const` <a id="structFRHAPI__SessionPlayer_1a637c568686278bf4ca2a6b6db614b3ee"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayer_1af442acbdda3d62fa8c061cfd7d1b8bcf)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1af442acbdda3d62fa8c061cfd7d1b8bcf"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__SessionPlayer_1adaf2854b9f7f1352d59c28a640ee4aeb)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionPlayer_1adaf2854b9f7f1352d59c28a640ee4aeb"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayer_1ac5cfbaacff5ca1625589a4899d2807ff)`()` <a id="structFRHAPI__SessionPlayer_1ac5cfbaacff5ca1625589a4899d2807ff"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayer_1ad5fdaea947ab3eaaecbefd7cecfdc929)`() const` <a id="structFRHAPI__SessionPlayer_1ad5fdaea947ab3eaaecbefd7cecfdc929"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionPlayer_1a1c3850d6655f14f4a4a631bfcec48d30)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__SessionPlayer_1a1c3850d6655f14f4a4a631bfcec48d30"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionPlayer_1a4ca9a4642ec34f3f3cdffc3da86588bd)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__SessionPlayer_1a4ca9a4642ec34f3f3cdffc3da86588bd"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionPlayer_1a711c019f6e123fbd65355b61e3d16b23)`()` <a id="structFRHAPI__SessionPlayer_1a711c019f6e123fbd65355b61e3d16b23"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetVersion`](#structFRHAPI__SessionPlayer_1aa8794d6c4deaeb4cd5ca5d2f767a992c)`()` <a id="structFRHAPI__SessionPlayer_1aa8794d6c4deaeb4cd5ca5d2f767a992c"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetVersion`](#structFRHAPI__SessionPlayer_1ae0c0305cb8b079f51b45bc031dd9f92f)`() const` <a id="structFRHAPI__SessionPlayer_1ae0c0305cb8b079f51b45bc031dd9f92f"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetVersion`](#structFRHAPI__SessionPlayer_1a9ed6ad83f25f062541fe48461fada8a4)`(const FString & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1a9ed6ad83f25f062541fe48461fada8a4"></a>

Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetVersion`](#structFRHAPI__SessionPlayer_1a2f07ab19cabed8ea87ddac8f4304157c)`(FString & OutValue) const` <a id="structFRHAPI__SessionPlayer_1a2f07ab19cabed8ea87ddac8f4304157c"></a>

Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetVersionOrNull`](#structFRHAPI__SessionPlayer_1a318425d659c0d1c1b58040459bc169b7)`()` <a id="structFRHAPI__SessionPlayer_1a318425d659c0d1c1b58040459bc169b7"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetVersionOrNull`](#structFRHAPI__SessionPlayer_1a92f90c430cef523c5186356c5dc0f898)`() const` <a id="structFRHAPI__SessionPlayer_1a92f90c430cef523c5186356c5dc0f898"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetVersion`](#structFRHAPI__SessionPlayer_1a2d699521cb7477243adf8b5a832948d7)`(const FString & NewValue)` <a id="structFRHAPI__SessionPlayer_1a2d699521cb7477243adf8b5a832948d7"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true.

#### `public inline FORCEINLINE void `[`SetVersion`](#structFRHAPI__SessionPlayer_1ab8a23320f8c0a5aef69393115f85ac3b)`(FString && NewValue)` <a id="structFRHAPI__SessionPlayer_1ab8a23320f8c0a5aef69393115f85ac3b"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.

#### `public inline void `[`ClearVersion`](#structFRHAPI__SessionPlayer_1a118c09e3ead5ffc3d5a533d39d429d8c)`()` <a id="structFRHAPI__SessionPlayer_1a118c09e3ead5ffc3d5a533d39d429d8c"></a>

Clears the value of Version_Optional and sets Version_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1a73ca692aabb969be840b03b50de85717)`()` <a id="structFRHAPI__SessionPlayer_1a73ca692aabb969be840b03b50de85717"></a>

Gets the value of ClientSettings_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1a405aaa7c743986de4ca8b73d26dc6312)`() const` <a id="structFRHAPI__SessionPlayer_1a405aaa7c743986de4ca8b73d26dc6312"></a>

Gets the value of ClientSettings_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1a37baa4a507d63478a5e2313ea201f73d)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1a37baa4a507d63478a5e2313ea201f73d"></a>

Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1a81f292ed4b66c561781536f6ae248897)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & OutValue) const` <a id="structFRHAPI__SessionPlayer_1a81f292ed4b66c561781536f6ae248897"></a>

Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__SessionPlayer_1a10a77ba5827ad5943d95ee4c6a36117b)`()` <a id="structFRHAPI__SessionPlayer_1a10a77ba5827ad5943d95ee4c6a36117b"></a>

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__SessionPlayer_1a6bbae968d7e2bd4ae6153fb32647cd54)`() const` <a id="structFRHAPI__SessionPlayer_1a6bbae968d7e2bd4ae6153fb32647cd54"></a>

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetClientSettings`](#structFRHAPI__SessionPlayer_1aad250f4ede6b65bb66201b24a8f67520)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` <a id="structFRHAPI__SessionPlayer_1aad250f4ede6b65bb66201b24a8f67520"></a>

Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.

#### `public inline FORCEINLINE void `[`SetClientSettings`](#structFRHAPI__SessionPlayer_1ae2bc6c96fcc8348341a3c1319989cc80)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` <a id="structFRHAPI__SessionPlayer_1ae2bc6c96fcc8348341a3c1319989cc80"></a>

Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true using move semantics.

#### `public inline void `[`ClearClientSettings`](#structFRHAPI__SessionPlayer_1a821f58c31fd1c68d79b8059e68050e46)`()` <a id="structFRHAPI__SessionPlayer_1a821f58c31fd1c68d79b8059e68050e46"></a>

Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a6a21f3c722a4e7df93eda67d7c21baca)`()` <a id="structFRHAPI__SessionPlayer_1a6a21f3c722a4e7df93eda67d7c21baca"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a858ecb558e9c74f131f2a4d28007d38f)`() const` <a id="structFRHAPI__SessionPlayer_1a858ecb558e9c74f131f2a4d28007d38f"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a9c28c4d44b86d017b1263f5b889e7fc1)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1a9c28c4d44b86d017b1263f5b889e7fc1"></a>

Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1af63db1c06cf0ed45b26dee51bc5e579f)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` <a id="structFRHAPI__SessionPlayer_1af63db1c06cf0ed45b26dee51bc5e579f"></a>

Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__SessionPlayer_1a15cf4ee5493fa1f91867662096d7cbf4)`()` <a id="structFRHAPI__SessionPlayer_1a15cf4ee5493fa1f91867662096d7cbf4"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__SessionPlayer_1a558568393c8fc8cb36f4a7f611e94bb6)`() const` <a id="structFRHAPI__SessionPlayer_1a558568393c8fc8cb36f4a7f611e94bb6"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1aaa604c62c65a1ce43b637acd4202bf14)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` <a id="structFRHAPI__SessionPlayer_1aaa604c62c65a1ce43b637acd4202bf14"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a360855cfcb0dd6aed4611abf2f8cab14)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` <a id="structFRHAPI__SessionPlayer_1a360855cfcb0dd6aed4611abf2f8cab14"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.

#### `public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__SessionPlayer_1aab20b5ceba1df5862b8b103d6c6352ea)`()` <a id="structFRHAPI__SessionPlayer_1aab20b5ceba1df5862b8b103d6c6352ea"></a>

Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetInvited`](#structFRHAPI__SessionPlayer_1a2e06190a5854624ae4ff42644a253542)`()` <a id="structFRHAPI__SessionPlayer_1a2e06190a5854624ae4ff42644a253542"></a>

Gets the value of Invited_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetInvited`](#structFRHAPI__SessionPlayer_1abe30257cdd3ac104dd7fc3e8bdbf2151)`() const` <a id="structFRHAPI__SessionPlayer_1abe30257cdd3ac104dd7fc3e8bdbf2151"></a>

Gets the value of Invited_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetInvited`](#structFRHAPI__SessionPlayer_1a8bba7d319aa8bceb501d27da5ab77ee3)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1a8bba7d319aa8bceb501d27da5ab77ee3"></a>

Gets the value of Invited_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInvited`](#structFRHAPI__SessionPlayer_1ae7663dc25370f75295b34aefe9ac1614)`(FDateTime & OutValue) const` <a id="structFRHAPI__SessionPlayer_1ae7663dc25370f75295b34aefe9ac1614"></a>

Fills OutValue with the value of Invited_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetInvitedOrNull`](#structFRHAPI__SessionPlayer_1aa2d66f5f58da71ddc8deae891e727795)`()` <a id="structFRHAPI__SessionPlayer_1aa2d66f5f58da71ddc8deae891e727795"></a>

Returns a pointer to Invited_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetInvitedOrNull`](#structFRHAPI__SessionPlayer_1aaabbe2ca9794811772956b7d0ba7e849)`() const` <a id="structFRHAPI__SessionPlayer_1aaabbe2ca9794811772956b7d0ba7e849"></a>

Returns a pointer to Invited_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInvited`](#structFRHAPI__SessionPlayer_1a533205152c71bae432492c6f608c0289)`(const FDateTime & NewValue)` <a id="structFRHAPI__SessionPlayer_1a533205152c71bae432492c6f608c0289"></a>

Sets the value of Invited_Optional and also sets Invited_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInvited`](#structFRHAPI__SessionPlayer_1a145724c7c31cd823af2d3763683b8307)`(FDateTime && NewValue)` <a id="structFRHAPI__SessionPlayer_1a145724c7c31cd823af2d3763683b8307"></a>

Sets the value of Invited_Optional and also sets Invited_IsSet to true using move semantics.

#### `public inline void `[`ClearInvited`](#structFRHAPI__SessionPlayer_1aa6b1a742b86c52aa02ee01441a2bf2d8)`()` <a id="structFRHAPI__SessionPlayer_1aa6b1a742b86c52aa02ee01441a2bf2d8"></a>

Clears the value of Invited_Optional and sets Invited_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetJoined`](#structFRHAPI__SessionPlayer_1a92a1334f871454b5dcc663786164335a)`()` <a id="structFRHAPI__SessionPlayer_1a92a1334f871454b5dcc663786164335a"></a>

Gets the value of Joined_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetJoined`](#structFRHAPI__SessionPlayer_1a588a0d87b2e6788b50ff9fb39a228ae4)`() const` <a id="structFRHAPI__SessionPlayer_1a588a0d87b2e6788b50ff9fb39a228ae4"></a>

Gets the value of Joined_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetJoined`](#structFRHAPI__SessionPlayer_1a4c7e3113e60b5246c9fc2b67caa68a06)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1a4c7e3113e60b5246c9fc2b67caa68a06"></a>

Gets the value of Joined_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetJoined`](#structFRHAPI__SessionPlayer_1a532b4926dc1bbb94e0adfd80d128557b)`(FDateTime & OutValue) const` <a id="structFRHAPI__SessionPlayer_1a532b4926dc1bbb94e0adfd80d128557b"></a>

Fills OutValue with the value of Joined_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetJoinedOrNull`](#structFRHAPI__SessionPlayer_1a1df99f0eb2c2b2ab1bb7f8be750f869a)`()` <a id="structFRHAPI__SessionPlayer_1a1df99f0eb2c2b2ab1bb7f8be750f869a"></a>

Returns a pointer to Joined_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetJoinedOrNull`](#structFRHAPI__SessionPlayer_1ac37da81074ba7c12398f53158b7aa8b8)`() const` <a id="structFRHAPI__SessionPlayer_1ac37da81074ba7c12398f53158b7aa8b8"></a>

Returns a pointer to Joined_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetJoined`](#structFRHAPI__SessionPlayer_1ace5bb789b73cb48783443216f967dfa6)`(const FDateTime & NewValue)` <a id="structFRHAPI__SessionPlayer_1ace5bb789b73cb48783443216f967dfa6"></a>

Sets the value of Joined_Optional and also sets Joined_IsSet to true.

#### `public inline FORCEINLINE void `[`SetJoined`](#structFRHAPI__SessionPlayer_1a30f28a3197256c25eaf708952e9b6336)`(FDateTime && NewValue)` <a id="structFRHAPI__SessionPlayer_1a30f28a3197256c25eaf708952e9b6336"></a>

Sets the value of Joined_Optional and also sets Joined_IsSet to true using move semantics.

#### `public inline void `[`ClearJoined`](#structFRHAPI__SessionPlayer_1a8b9c20d24a494d6a9c252112833d06e2)`()` <a id="structFRHAPI__SessionPlayer_1a8b9c20d24a494d6a9c252112833d06e2"></a>

Clears the value of Joined_Optional and sets Joined_IsSet to false.

#### `public inline FORCEINLINE TSet< ERHAPI_IntraSessionPermissions > & `[`GetSessionPermissions`](#structFRHAPI__SessionPlayer_1a599776a8a8f25d8b8422867e54d7e6da)`()` <a id="structFRHAPI__SessionPlayer_1a599776a8a8f25d8b8422867e54d7e6da"></a>

Gets the value of SessionPermissions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TSet< ERHAPI_IntraSessionPermissions > & `[`GetSessionPermissions`](#structFRHAPI__SessionPlayer_1a7faaa1463221e6dcb237d59cb671763c)`() const` <a id="structFRHAPI__SessionPlayer_1a7faaa1463221e6dcb237d59cb671763c"></a>

Gets the value of SessionPermissions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TSet< ERHAPI_IntraSessionPermissions > & `[`GetSessionPermissions`](#structFRHAPI__SessionPlayer_1ab3d76d828d57327ca68fd8dad790d094)`(const TSet< ERHAPI_IntraSessionPermissions > & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1ab3d76d828d57327ca68fd8dad790d094"></a>

Gets the value of SessionPermissions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSessionPermissions`](#structFRHAPI__SessionPlayer_1ab9f5f8e76a38c26beb0c7bd6ddea8add)`(TSet< ERHAPI_IntraSessionPermissions > & OutValue) const` <a id="structFRHAPI__SessionPlayer_1ab9f5f8e76a38c26beb0c7bd6ddea8add"></a>

Fills OutValue with the value of SessionPermissions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TSet< ERHAPI_IntraSessionPermissions > * `[`GetSessionPermissionsOrNull`](#structFRHAPI__SessionPlayer_1ae62d5c1ffd04c290b1a636f4b72aca37)`()` <a id="structFRHAPI__SessionPlayer_1ae62d5c1ffd04c290b1a636f4b72aca37"></a>

Returns a pointer to SessionPermissions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TSet< ERHAPI_IntraSessionPermissions > * `[`GetSessionPermissionsOrNull`](#structFRHAPI__SessionPlayer_1aaebc9ef75a61f92b87ee6f66c87b5542)`() const` <a id="structFRHAPI__SessionPlayer_1aaebc9ef75a61f92b87ee6f66c87b5542"></a>

Returns a pointer to SessionPermissions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSessionPermissions`](#structFRHAPI__SessionPlayer_1af7550d980d92e08c5f79d4f4fac5f7d4)`(const TSet< ERHAPI_IntraSessionPermissions > & NewValue)` <a id="structFRHAPI__SessionPlayer_1af7550d980d92e08c5f79d4f4fac5f7d4"></a>

Sets the value of SessionPermissions_Optional and also sets SessionPermissions_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSessionPermissions`](#structFRHAPI__SessionPlayer_1a4e42ddaaf0c49863e4b2740ea94f8704)`(TSet< ERHAPI_IntraSessionPermissions > && NewValue)` <a id="structFRHAPI__SessionPlayer_1a4e42ddaaf0c49863e4b2740ea94f8704"></a>

Sets the value of SessionPermissions_Optional and also sets SessionPermissions_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionPermissions`](#structFRHAPI__SessionPlayer_1a09ed5569363e26878835fbcd39ed58a1)`()` <a id="structFRHAPI__SessionPlayer_1a09ed5569363e26878835fbcd39ed58a1"></a>

Clears the value of SessionPermissions_Optional and sets SessionPermissions_IsSet to false.

