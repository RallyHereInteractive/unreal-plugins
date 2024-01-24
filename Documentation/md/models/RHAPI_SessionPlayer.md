# RHAPI_SessionPlayer <a id="group__RHAPI__SessionPlayer"></a>

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

#### Summary

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
`public `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` `[`ClientSettings_Optional`](#structFRHAPI__SessionPlayer_1a2f8f0d43f78a9b08db040a591e550082) | 
`public bool `[`ClientSettings_IsSet`](#structFRHAPI__SessionPlayer_1a0cb461cb01254f28e33b4ee098fff636) | true if ClientSettings_Optional has been set to a value
`public `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` `[`CrossplayPreferences_Optional`](#structFRHAPI__SessionPlayer_1a1df5a79e2e5f967579ad882122b7ad74) | 
`public bool `[`CrossplayPreferences_IsSet`](#structFRHAPI__SessionPlayer_1a09fdf10fbfcdc3cdeea386b671d75273) | true if CrossplayPreferences_Optional has been set to a value
`public FDateTime `[`Invited_Optional`](#structFRHAPI__SessionPlayer_1a2e47dda3a7a7e474f39950a1487054a5) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Invited_IsSet`](#structFRHAPI__SessionPlayer_1a24180c0ac76cb70443d34261572d511c) | true if Invited_Optional has been set to a value
`public FDateTime `[`Joined_Optional`](#structFRHAPI__SessionPlayer_1a98a0fa4e013c02e4f94d472459d7f9b7) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Joined_IsSet`](#structFRHAPI__SessionPlayer_1ab5d3d5da597f5007fe3708826e570580) | true if Joined_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SessionPlayer_1a6d68b484bda6b9c61facc7ec22a84170)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionPlayer_1a5dc36810a84dc62648670acc18ba96f0)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1af082dcacd1e206105ce866e2f411fc5f)`()` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1a38af2b3795973dd9cab39c08982030e0)`() const` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1a1bb204035e63b18182d060b02255c6af)`(const int32 & DefaultValue) const` | Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1a1e104e5d5a81d0555749531774c57e20)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__SessionPlayer_1a7104c302ca1e6be25e64a792a6fc2640)`()` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__SessionPlayer_1a65f89cbd11987a3f666137a07abbe88a)`() const` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerId`](#structFRHAPI__SessionPlayer_1a1904aa3344becb59e73b470231169f47)`(int32 NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.
`public inline void `[`ClearPlayerId`](#structFRHAPI__SessionPlayer_1aa5068324d303c0ec84db535158fb345e)`()` | Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.
`public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__SessionPlayer_1aebb63b6bda892c9b01eba35b22163697)`() const` | Returns true if PlayerId_Optional is set and matches the default value.
`public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__SessionPlayer_1af1f33f4f89bbc5c6685fe0d700d0c65d)`()` | Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayer_1aff80c8a8801c3da78cef13c02b4c0358)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayer_1ac79ff0f30d08521f2f5e7b81041319f9)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__SessionPlayer_1afca7d66e4c75dbc1d88e130c7eeff780)`(FGuid NewValue)` | Sets the value of PlayerUuid.
`public inline ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayer_1a6c1dcd9332956742bb36aee64fd9f376)`()` | Gets the value of Status.
`public inline const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayer_1a02ca2506bc5bc82b3429833efbbccb65)`() const` | Gets the value of Status.
`public inline void `[`SetStatus`](#structFRHAPI__SessionPlayer_1a36b3c46c65ab4deaf64a2a976c511cdf)`(ERHAPI_SessionPlayerStatus NewValue)` | Sets the value of Status.
`public inline FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1acd45c7b28d8030a4e93eb540b1d1be22)`()` | Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a54de85369af1e47e840f21f47a9d3abd)`() const` | Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a945d4425d54f813d530b4786286a1026)`(const FGuid & DefaultValue) const` | Gets the value of InvitingPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a9a66f2679f58a2fe39581512c7bb808d)`(FGuid & OutValue) const` | Fills OutValue with the value of InvitingPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__SessionPlayer_1a3b147bc23a9db14aedd6b8c851bc71a8)`()` | Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__SessionPlayer_1a79e1d75785329cc7b9787fe811c77b1a)`() const` | Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1acc906044eca07ceb43ed52a1a5964642)`(FGuid NewValue)` | Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true.
`public inline void `[`ClearInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a108279eb6926eafff034a612ab51fc69)`()` | Clears the value of InvitingPlayerUuid_Optional and sets InvitingPlayerUuid_IsSet to false.
`public inline FString & `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1a58827da36bffbc5e3cb93591bce2cb0c)`()` | Gets the value of SourceSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1a1b024df8ab7ead95079f03326e85510f)`() const` | Gets the value of SourceSessionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1ad13a3ed971d11fac19977a613a105931)`(const FString & DefaultValue) const` | Gets the value of SourceSessionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1abcba87f13817fe0a6cacda017f742601)`(FString & OutValue) const` | Fills OutValue with the value of SourceSessionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetSourceSessionIdOrNull`](#structFRHAPI__SessionPlayer_1a6fbb24ae58218124424cf207a0bf47af)`()` | Returns a pointer to SourceSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetSourceSessionIdOrNull`](#structFRHAPI__SessionPlayer_1a258603cdb48ada4a5688a0c788d677b3)`() const` | Returns a pointer to SourceSessionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSourceSessionId`](#structFRHAPI__SessionPlayer_1a5642e6719ed0719b0842b60eda7d0e09)`(FString NewValue)` | Sets the value of SourceSessionId_Optional and also sets SourceSessionId_IsSet to true.
`public inline void `[`ClearSourceSessionId`](#structFRHAPI__SessionPlayer_1a94530a246d8f063c45837aef156267d5)`()` | Clears the value of SourceSessionId_Optional and sets SourceSessionId_IsSet to false.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayer_1a5eff9bc325194bc90dd734562a8c8b89)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayer_1ae6385310f74507afa449e27aeb309964)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayer_1acb1a7662127097cd97db6ee66bce6a45)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__SessionPlayer_1a84827d47bd6680f74e33e477d5ebea53)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayer_1a44de6cafe64a30947bb032a3dc6cb4f4)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayer_1a89a25ab11203738ea71a04923ee52078)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionPlayer_1a12ea2cec1d05e710a554a0eb60d65d51)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionPlayer_1a711c019f6e123fbd65355b61e3d16b23)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FString & `[`GetVersion`](#structFRHAPI__SessionPlayer_1a7b8c88818bdb429e4d8c48ab5aca5fd6)`()` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__SessionPlayer_1af89e969acd8d16449783d4d5a04e2bf8)`() const` | Gets the value of Version_Optional, regardless of it having been set.
`public inline const FString & `[`GetVersion`](#structFRHAPI__SessionPlayer_1acc5a6efe5394c1412ef6a39e06a4fe2b)`(const FString & DefaultValue) const` | Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetVersion`](#structFRHAPI__SessionPlayer_1a57c4d76dd7690b0062d7799e80e333af)`(FString & OutValue) const` | Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetVersionOrNull`](#structFRHAPI__SessionPlayer_1a0d2d6ab091911afd5e8befdfd31a6ff6)`()` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__SessionPlayer_1a11b5151b3217305efcd38671cdfc44cf)`() const` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetVersion`](#structFRHAPI__SessionPlayer_1a583d1947aeef7a39ee44ff38bfac4c2a)`(FString NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true.
`public inline void `[`ClearVersion`](#structFRHAPI__SessionPlayer_1a118c09e3ead5ffc3d5a533d39d429d8c)`()` | Clears the value of Version_Optional and sets Version_IsSet to false.
`public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1ae528a51f129695154021c0e793018c92)`()` | Gets the value of ClientSettings_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1a460f99294350394cc6d722c31d487605)`() const` | Gets the value of ClientSettings_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1a773783f32107601c280fede4ffd61df6)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & DefaultValue) const` | Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1a2fe4bca124fda7bac88a901c77f7bb73)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & OutValue) const` | Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__SessionPlayer_1a9a18ebe5edbdc58a5d26d11373abb7de)`()` | Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__SessionPlayer_1a9486a2cd28010c8e35d37a75533a3131)`() const` | Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientSettings`](#structFRHAPI__SessionPlayer_1a5a0215b63901be5413393030ecc16973)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` NewValue)` | Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.
`public inline void `[`ClearClientSettings`](#structFRHAPI__SessionPlayer_1a821f58c31fd1c68d79b8059e68050e46)`()` | Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.
`public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a5389b335b1a88ce3987698a5d375430d)`()` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a6c4ea67788f54d4479f6e1d8ad6a4665)`() const` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a5ee60d780f4728f1f7f46910f055d690)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` | Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1ad343d91946f076520d5c3622da363df9)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` | Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__SessionPlayer_1a71c83a819f2b88a8326644575317fd19)`()` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__SessionPlayer_1ac2e2424adff3522117846bb62581b695)`() const` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a1ce0e1ce8882e124d253029609cf619b)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.
`public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__SessionPlayer_1aab20b5ceba1df5862b8b103d6c6352ea)`()` | Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.
`public inline FDateTime & `[`GetInvited`](#structFRHAPI__SessionPlayer_1a14d0bbb2f3a437ad4d8110490d682ba9)`()` | Gets the value of Invited_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetInvited`](#structFRHAPI__SessionPlayer_1ad379c6e768e0c56ee579e44d08eade13)`() const` | Gets the value of Invited_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetInvited`](#structFRHAPI__SessionPlayer_1a47cb1f05a41d417c3f9ed8e9aa88f66f)`(const FDateTime & DefaultValue) const` | Gets the value of Invited_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInvited`](#structFRHAPI__SessionPlayer_1a76c27fdddda2985942a56a424bbd06b9)`(FDateTime & OutValue) const` | Fills OutValue with the value of Invited_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetInvitedOrNull`](#structFRHAPI__SessionPlayer_1a7976724ad9e4aaf6ea7edf6ad798a12c)`()` | Returns a pointer to Invited_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetInvitedOrNull`](#structFRHAPI__SessionPlayer_1a35b6948791f2d659c1fa54dbd5e32d16)`() const` | Returns a pointer to Invited_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInvited`](#structFRHAPI__SessionPlayer_1a1a96f1444823fa4ed7bb2e26cea4e632)`(FDateTime NewValue)` | Sets the value of Invited_Optional and also sets Invited_IsSet to true.
`public inline void `[`ClearInvited`](#structFRHAPI__SessionPlayer_1aa6b1a742b86c52aa02ee01441a2bf2d8)`()` | Clears the value of Invited_Optional and sets Invited_IsSet to false.
`public inline FDateTime & `[`GetJoined`](#structFRHAPI__SessionPlayer_1abecbf72283ecb262b1152bd4b9b60f5b)`()` | Gets the value of Joined_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetJoined`](#structFRHAPI__SessionPlayer_1a5a9776015def077c57f79ac3a9ea340e)`() const` | Gets the value of Joined_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetJoined`](#structFRHAPI__SessionPlayer_1a25c39669436de7c50e238fd75931d266)`(const FDateTime & DefaultValue) const` | Gets the value of Joined_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoined`](#structFRHAPI__SessionPlayer_1a5b395ef14a3539880ebb60c8388ad570)`(FDateTime & OutValue) const` | Fills OutValue with the value of Joined_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetJoinedOrNull`](#structFRHAPI__SessionPlayer_1abcecfd21a9d0658857f355def398d3e1)`()` | Returns a pointer to Joined_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetJoinedOrNull`](#structFRHAPI__SessionPlayer_1a8ea013f03ae714cb143675f500dd7dfa)`() const` | Returns a pointer to Joined_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoined`](#structFRHAPI__SessionPlayer_1a4d113ac251cab541e6a0f442aeb6ce50)`(FDateTime NewValue)` | Sets the value of Joined_Optional and also sets Joined_IsSet to true.
`public inline void `[`ClearJoined`](#structFRHAPI__SessionPlayer_1a8b9c20d24a494d6a9c252112833d06e2)`()` | Clears the value of Joined_Optional and sets Joined_IsSet to false.

#### Members

#### `public int32 `[`PlayerId_Optional`](#structFRHAPI__SessionPlayer_1ada45674d5ad30eda5058ff64a5cb105f) <a id="structFRHAPI__SessionPlayer_1ada45674d5ad30eda5058ff64a5cb105f"></a>

Legacy id for this player.

<br>
#### `public bool `[`PlayerId_IsSet`](#structFRHAPI__SessionPlayer_1a89bc0f5f785941fba984c07a1da3c628) <a id="structFRHAPI__SessionPlayer_1a89bc0f5f785941fba984c07a1da3c628"></a>

true if PlayerId_Optional has been set to a value

<br>
#### `public FGuid `[`PlayerUuid`](#structFRHAPI__SessionPlayer_1a0c29462af5da0a57e9f9491b94a30cc3) <a id="structFRHAPI__SessionPlayer_1a0c29462af5da0a57e9f9491b94a30cc3"></a>

UUID for this player.

<br>
#### `public ERHAPI_SessionPlayerStatus `[`Status`](#structFRHAPI__SessionPlayer_1a20c44a0cb2d627f0fb8417edd463b9bd) <a id="structFRHAPI__SessionPlayer_1a20c44a0cb2d627f0fb8417edd463b9bd"></a>

Status of the player in the session.

<br>
#### `public FGuid `[`InvitingPlayerUuid_Optional`](#structFRHAPI__SessionPlayer_1a900736c28c358788992534c2b32a38ea) <a id="structFRHAPI__SessionPlayer_1a900736c28c358788992534c2b32a38ea"></a>

UUID of the player who sent this players invite, if any.

<br>
#### `public bool `[`InvitingPlayerUuid_IsSet`](#structFRHAPI__SessionPlayer_1a274cd7e1313b2b25d69ca73933e76bcf) <a id="structFRHAPI__SessionPlayer_1a274cd7e1313b2b25d69ca73933e76bcf"></a>

true if InvitingPlayerUuid_Optional has been set to a value

<br>
#### `public FString `[`SourceSessionId_Optional`](#structFRHAPI__SessionPlayer_1af3736f582d13c659574eeea281356dc6) <a id="structFRHAPI__SessionPlayer_1af3736f582d13c659574eeea281356dc6"></a>

The UUID of the session that this player was invited from.

<br>
#### `public bool `[`SourceSessionId_IsSet`](#structFRHAPI__SessionPlayer_1a8f524eeefe1e57d6bfaf7b10e6e119d1) <a id="structFRHAPI__SessionPlayer_1a8f524eeefe1e57d6bfaf7b10e6e119d1"></a>

true if SourceSessionId_Optional has been set to a value

<br>
#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionPlayer_1af093d0545b4ca98d7e916d8456c6d754) <a id="structFRHAPI__SessionPlayer_1af093d0545b4ca98d7e916d8456c6d754"></a>

player-defined custom data

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__SessionPlayer_1a2fb78b14e916ce432c24c730d7895ab7) <a id="structFRHAPI__SessionPlayer_1a2fb78b14e916ce432c24c730d7895ab7"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public FString `[`Version_Optional`](#structFRHAPI__SessionPlayer_1a8464dd89d0dbd289132aaa1e0f1edb22) <a id="structFRHAPI__SessionPlayer_1a8464dd89d0dbd289132aaa1e0f1edb22"></a>

Product Client Version number. Used for compatibility checking with other players and instances.

<br>
#### `public bool `[`Version_IsSet`](#structFRHAPI__SessionPlayer_1a739f1593fa6f0f828b3acbae17b9a581) <a id="structFRHAPI__SessionPlayer_1a739f1593fa6f0f828b3acbae17b9a581"></a>

true if Version_Optional has been set to a value

<br>
#### `public `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` `[`ClientSettings_Optional`](#structFRHAPI__SessionPlayer_1a2f8f0d43f78a9b08db040a591e550082) <a id="structFRHAPI__SessionPlayer_1a2f8f0d43f78a9b08db040a591e550082"></a>

<br>
#### `public bool `[`ClientSettings_IsSet`](#structFRHAPI__SessionPlayer_1a0cb461cb01254f28e33b4ee098fff636) <a id="structFRHAPI__SessionPlayer_1a0cb461cb01254f28e33b4ee098fff636"></a>

true if ClientSettings_Optional has been set to a value

<br>
#### `public `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` `[`CrossplayPreferences_Optional`](#structFRHAPI__SessionPlayer_1a1df5a79e2e5f967579ad882122b7ad74) <a id="structFRHAPI__SessionPlayer_1a1df5a79e2e5f967579ad882122b7ad74"></a>

<br>
#### `public bool `[`CrossplayPreferences_IsSet`](#structFRHAPI__SessionPlayer_1a09fdf10fbfcdc3cdeea386b671d75273) <a id="structFRHAPI__SessionPlayer_1a09fdf10fbfcdc3cdeea386b671d75273"></a>

true if CrossplayPreferences_Optional has been set to a value

<br>
#### `public FDateTime `[`Invited_Optional`](#structFRHAPI__SessionPlayer_1a2e47dda3a7a7e474f39950a1487054a5) <a id="structFRHAPI__SessionPlayer_1a2e47dda3a7a7e474f39950a1487054a5"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

<br>
#### `public bool `[`Invited_IsSet`](#structFRHAPI__SessionPlayer_1a24180c0ac76cb70443d34261572d511c) <a id="structFRHAPI__SessionPlayer_1a24180c0ac76cb70443d34261572d511c"></a>

true if Invited_Optional has been set to a value

<br>
#### `public FDateTime `[`Joined_Optional`](#structFRHAPI__SessionPlayer_1a98a0fa4e013c02e4f94d472459d7f9b7) <a id="structFRHAPI__SessionPlayer_1a98a0fa4e013c02e4f94d472459d7f9b7"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

<br>
#### `public bool `[`Joined_IsSet`](#structFRHAPI__SessionPlayer_1ab5d3d5da597f5007fe3708826e570580) <a id="structFRHAPI__SessionPlayer_1ab5d3d5da597f5007fe3708826e570580"></a>

true if Joined_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionPlayer_1a6d68b484bda6b9c61facc7ec22a84170)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionPlayer_1a6d68b484bda6b9c61facc7ec22a84170"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionPlayer_1a5dc36810a84dc62648670acc18ba96f0)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SessionPlayer_1a5dc36810a84dc62648670acc18ba96f0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline int32 & `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1af082dcacd1e206105ce866e2f411fc5f)`()` <a id="structFRHAPI__SessionPlayer_1af082dcacd1e206105ce866e2f411fc5f"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1a38af2b3795973dd9cab39c08982030e0)`() const` <a id="structFRHAPI__SessionPlayer_1a38af2b3795973dd9cab39c08982030e0"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1a1bb204035e63b18182d060b02255c6af)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1a1bb204035e63b18182d060b02255c6af"></a>

Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlayerId`](#structFRHAPI__SessionPlayer_1a1e104e5d5a81d0555749531774c57e20)`(int32 & OutValue) const` <a id="structFRHAPI__SessionPlayer_1a1e104e5d5a81d0555749531774c57e20"></a>

Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__SessionPlayer_1a7104c302ca1e6be25e64a792a6fc2640)`()` <a id="structFRHAPI__SessionPlayer_1a7104c302ca1e6be25e64a792a6fc2640"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__SessionPlayer_1a65f89cbd11987a3f666137a07abbe88a)`() const` <a id="structFRHAPI__SessionPlayer_1a65f89cbd11987a3f666137a07abbe88a"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlayerId`](#structFRHAPI__SessionPlayer_1a1904aa3344becb59e73b470231169f47)`(int32 NewValue)` <a id="structFRHAPI__SessionPlayer_1a1904aa3344becb59e73b470231169f47"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.

<br>
#### `public inline void `[`ClearPlayerId`](#structFRHAPI__SessionPlayer_1aa5068324d303c0ec84db535158fb345e)`()` <a id="structFRHAPI__SessionPlayer_1aa5068324d303c0ec84db535158fb345e"></a>

Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.

<br>
#### `public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__SessionPlayer_1aebb63b6bda892c9b01eba35b22163697)`() const` <a id="structFRHAPI__SessionPlayer_1aebb63b6bda892c9b01eba35b22163697"></a>

Returns true if PlayerId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__SessionPlayer_1af1f33f4f89bbc5c6685fe0d700d0c65d)`()` <a id="structFRHAPI__SessionPlayer_1af1f33f4f89bbc5c6685fe0d700d0c65d"></a>

Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.

<br>
#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayer_1aff80c8a8801c3da78cef13c02b4c0358)`()` <a id="structFRHAPI__SessionPlayer_1aff80c8a8801c3da78cef13c02b4c0358"></a>

Gets the value of PlayerUuid.

<br>
#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SessionPlayer_1ac79ff0f30d08521f2f5e7b81041319f9)`() const` <a id="structFRHAPI__SessionPlayer_1ac79ff0f30d08521f2f5e7b81041319f9"></a>

Gets the value of PlayerUuid.

<br>
#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__SessionPlayer_1afca7d66e4c75dbc1d88e130c7eeff780)`(FGuid NewValue)` <a id="structFRHAPI__SessionPlayer_1afca7d66e4c75dbc1d88e130c7eeff780"></a>

Sets the value of PlayerUuid.

<br>
#### `public inline ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayer_1a6c1dcd9332956742bb36aee64fd9f376)`()` <a id="structFRHAPI__SessionPlayer_1a6c1dcd9332956742bb36aee64fd9f376"></a>

Gets the value of Status.

<br>
#### `public inline const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayer_1a02ca2506bc5bc82b3429833efbbccb65)`() const` <a id="structFRHAPI__SessionPlayer_1a02ca2506bc5bc82b3429833efbbccb65"></a>

Gets the value of Status.

<br>
#### `public inline void `[`SetStatus`](#structFRHAPI__SessionPlayer_1a36b3c46c65ab4deaf64a2a976c511cdf)`(ERHAPI_SessionPlayerStatus NewValue)` <a id="structFRHAPI__SessionPlayer_1a36b3c46c65ab4deaf64a2a976c511cdf"></a>

Sets the value of Status.

<br>
#### `public inline FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1acd45c7b28d8030a4e93eb540b1d1be22)`()` <a id="structFRHAPI__SessionPlayer_1acd45c7b28d8030a4e93eb540b1d1be22"></a>

Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a54de85369af1e47e840f21f47a9d3abd)`() const` <a id="structFRHAPI__SessionPlayer_1a54de85369af1e47e840f21f47a9d3abd"></a>

Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a945d4425d54f813d530b4786286a1026)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1a945d4425d54f813d530b4786286a1026"></a>

Gets the value of InvitingPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a9a66f2679f58a2fe39581512c7bb808d)`(FGuid & OutValue) const` <a id="structFRHAPI__SessionPlayer_1a9a66f2679f58a2fe39581512c7bb808d"></a>

Fills OutValue with the value of InvitingPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__SessionPlayer_1a3b147bc23a9db14aedd6b8c851bc71a8)`()` <a id="structFRHAPI__SessionPlayer_1a3b147bc23a9db14aedd6b8c851bc71a8"></a>

Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__SessionPlayer_1a79e1d75785329cc7b9787fe811c77b1a)`() const` <a id="structFRHAPI__SessionPlayer_1a79e1d75785329cc7b9787fe811c77b1a"></a>

Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1acc906044eca07ceb43ed52a1a5964642)`(FGuid NewValue)` <a id="structFRHAPI__SessionPlayer_1acc906044eca07ceb43ed52a1a5964642"></a>

Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true.

<br>
#### `public inline void `[`ClearInvitingPlayerUuid`](#structFRHAPI__SessionPlayer_1a108279eb6926eafff034a612ab51fc69)`()` <a id="structFRHAPI__SessionPlayer_1a108279eb6926eafff034a612ab51fc69"></a>

Clears the value of InvitingPlayerUuid_Optional and sets InvitingPlayerUuid_IsSet to false.

<br>
#### `public inline FString & `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1a58827da36bffbc5e3cb93591bce2cb0c)`()` <a id="structFRHAPI__SessionPlayer_1a58827da36bffbc5e3cb93591bce2cb0c"></a>

Gets the value of SourceSessionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1a1b024df8ab7ead95079f03326e85510f)`() const` <a id="structFRHAPI__SessionPlayer_1a1b024df8ab7ead95079f03326e85510f"></a>

Gets the value of SourceSessionId_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1ad13a3ed971d11fac19977a613a105931)`(const FString & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1ad13a3ed971d11fac19977a613a105931"></a>

Gets the value of SourceSessionId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSourceSessionId`](#structFRHAPI__SessionPlayer_1abcba87f13817fe0a6cacda017f742601)`(FString & OutValue) const` <a id="structFRHAPI__SessionPlayer_1abcba87f13817fe0a6cacda017f742601"></a>

Fills OutValue with the value of SourceSessionId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetSourceSessionIdOrNull`](#structFRHAPI__SessionPlayer_1a6fbb24ae58218124424cf207a0bf47af)`()` <a id="structFRHAPI__SessionPlayer_1a6fbb24ae58218124424cf207a0bf47af"></a>

Returns a pointer to SourceSessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetSourceSessionIdOrNull`](#structFRHAPI__SessionPlayer_1a258603cdb48ada4a5688a0c788d677b3)`() const` <a id="structFRHAPI__SessionPlayer_1a258603cdb48ada4a5688a0c788d677b3"></a>

Returns a pointer to SourceSessionId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSourceSessionId`](#structFRHAPI__SessionPlayer_1a5642e6719ed0719b0842b60eda7d0e09)`(FString NewValue)` <a id="structFRHAPI__SessionPlayer_1a5642e6719ed0719b0842b60eda7d0e09"></a>

Sets the value of SourceSessionId_Optional and also sets SourceSessionId_IsSet to true.

<br>
#### `public inline void `[`ClearSourceSessionId`](#structFRHAPI__SessionPlayer_1a94530a246d8f063c45837aef156267d5)`()` <a id="structFRHAPI__SessionPlayer_1a94530a246d8f063c45837aef156267d5"></a>

Clears the value of SourceSessionId_Optional and sets SourceSessionId_IsSet to false.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayer_1a5eff9bc325194bc90dd734562a8c8b89)`()` <a id="structFRHAPI__SessionPlayer_1a5eff9bc325194bc90dd734562a8c8b89"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayer_1ae6385310f74507afa449e27aeb309964)`() const` <a id="structFRHAPI__SessionPlayer_1ae6385310f74507afa449e27aeb309964"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayer_1acb1a7662127097cd97db6ee66bce6a45)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1acb1a7662127097cd97db6ee66bce6a45"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__SessionPlayer_1a84827d47bd6680f74e33e477d5ebea53)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionPlayer_1a84827d47bd6680f74e33e477d5ebea53"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayer_1a44de6cafe64a30947bb032a3dc6cb4f4)`()` <a id="structFRHAPI__SessionPlayer_1a44de6cafe64a30947bb032a3dc6cb4f4"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayer_1a89a25ab11203738ea71a04923ee52078)`() const` <a id="structFRHAPI__SessionPlayer_1a89a25ab11203738ea71a04923ee52078"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionPlayer_1a12ea2cec1d05e710a554a0eb60d65d51)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__SessionPlayer_1a12ea2cec1d05e710a554a0eb60d65d51"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionPlayer_1a711c019f6e123fbd65355b61e3d16b23)`()` <a id="structFRHAPI__SessionPlayer_1a711c019f6e123fbd65355b61e3d16b23"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline FString & `[`GetVersion`](#structFRHAPI__SessionPlayer_1a7b8c88818bdb429e4d8c48ab5aca5fd6)`()` <a id="structFRHAPI__SessionPlayer_1a7b8c88818bdb429e4d8c48ab5aca5fd6"></a>

Gets the value of Version_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetVersion`](#structFRHAPI__SessionPlayer_1af89e969acd8d16449783d4d5a04e2bf8)`() const` <a id="structFRHAPI__SessionPlayer_1af89e969acd8d16449783d4d5a04e2bf8"></a>

Gets the value of Version_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetVersion`](#structFRHAPI__SessionPlayer_1acc5a6efe5394c1412ef6a39e06a4fe2b)`(const FString & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1acc5a6efe5394c1412ef6a39e06a4fe2b"></a>

Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetVersion`](#structFRHAPI__SessionPlayer_1a57c4d76dd7690b0062d7799e80e333af)`(FString & OutValue) const` <a id="structFRHAPI__SessionPlayer_1a57c4d76dd7690b0062d7799e80e333af"></a>

Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetVersionOrNull`](#structFRHAPI__SessionPlayer_1a0d2d6ab091911afd5e8befdfd31a6ff6)`()` <a id="structFRHAPI__SessionPlayer_1a0d2d6ab091911afd5e8befdfd31a6ff6"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetVersionOrNull`](#structFRHAPI__SessionPlayer_1a11b5151b3217305efcd38671cdfc44cf)`() const` <a id="structFRHAPI__SessionPlayer_1a11b5151b3217305efcd38671cdfc44cf"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetVersion`](#structFRHAPI__SessionPlayer_1a583d1947aeef7a39ee44ff38bfac4c2a)`(FString NewValue)` <a id="structFRHAPI__SessionPlayer_1a583d1947aeef7a39ee44ff38bfac4c2a"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true.

<br>
#### `public inline void `[`ClearVersion`](#structFRHAPI__SessionPlayer_1a118c09e3ead5ffc3d5a533d39d429d8c)`()` <a id="structFRHAPI__SessionPlayer_1a118c09e3ead5ffc3d5a533d39d429d8c"></a>

Clears the value of Version_Optional and sets Version_IsSet to false.

<br>
#### `public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1ae528a51f129695154021c0e793018c92)`()` <a id="structFRHAPI__SessionPlayer_1ae528a51f129695154021c0e793018c92"></a>

Gets the value of ClientSettings_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1a460f99294350394cc6d722c31d487605)`() const` <a id="structFRHAPI__SessionPlayer_1a460f99294350394cc6d722c31d487605"></a>

Gets the value of ClientSettings_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1a773783f32107601c280fede4ffd61df6)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1a773783f32107601c280fede4ffd61df6"></a>

Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetClientSettings`](#structFRHAPI__SessionPlayer_1a2fe4bca124fda7bac88a901c77f7bb73)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & OutValue) const` <a id="structFRHAPI__SessionPlayer_1a2fe4bca124fda7bac88a901c77f7bb73"></a>

Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__SessionPlayer_1a9a18ebe5edbdc58a5d26d11373abb7de)`()` <a id="structFRHAPI__SessionPlayer_1a9a18ebe5edbdc58a5d26d11373abb7de"></a>

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` * `[`GetClientSettingsOrNull`](#structFRHAPI__SessionPlayer_1a9486a2cd28010c8e35d37a75533a3131)`() const` <a id="structFRHAPI__SessionPlayer_1a9486a2cd28010c8e35d37a75533a3131"></a>

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetClientSettings`](#structFRHAPI__SessionPlayer_1a5a0215b63901be5413393030ecc16973)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` NewValue)` <a id="structFRHAPI__SessionPlayer_1a5a0215b63901be5413393030ecc16973"></a>

Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.

<br>
#### `public inline void `[`ClearClientSettings`](#structFRHAPI__SessionPlayer_1a821f58c31fd1c68d79b8059e68050e46)`()` <a id="structFRHAPI__SessionPlayer_1a821f58c31fd1c68d79b8059e68050e46"></a>

Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.

<br>
#### `public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a5389b335b1a88ce3987698a5d375430d)`()` <a id="structFRHAPI__SessionPlayer_1a5389b335b1a88ce3987698a5d375430d"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a6c4ea67788f54d4479f6e1d8ad6a4665)`() const` <a id="structFRHAPI__SessionPlayer_1a6c4ea67788f54d4479f6e1d8ad6a4665"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a5ee60d780f4728f1f7f46910f055d690)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1a5ee60d780f4728f1f7f46910f055d690"></a>

Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1ad343d91946f076520d5c3622da363df9)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` <a id="structFRHAPI__SessionPlayer_1ad343d91946f076520d5c3622da363df9"></a>

Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__SessionPlayer_1a71c83a819f2b88a8326644575317fd19)`()` <a id="structFRHAPI__SessionPlayer_1a71c83a819f2b88a8326644575317fd19"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__SessionPlayer_1ac2e2424adff3522117846bb62581b695)`() const` <a id="structFRHAPI__SessionPlayer_1ac2e2424adff3522117846bb62581b695"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCrossplayPreferences`](#structFRHAPI__SessionPlayer_1a1ce0e1ce8882e124d253029609cf619b)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` NewValue)` <a id="structFRHAPI__SessionPlayer_1a1ce0e1ce8882e124d253029609cf619b"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.

<br>
#### `public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__SessionPlayer_1aab20b5ceba1df5862b8b103d6c6352ea)`()` <a id="structFRHAPI__SessionPlayer_1aab20b5ceba1df5862b8b103d6c6352ea"></a>

Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.

<br>
#### `public inline FDateTime & `[`GetInvited`](#structFRHAPI__SessionPlayer_1a14d0bbb2f3a437ad4d8110490d682ba9)`()` <a id="structFRHAPI__SessionPlayer_1a14d0bbb2f3a437ad4d8110490d682ba9"></a>

Gets the value of Invited_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetInvited`](#structFRHAPI__SessionPlayer_1ad379c6e768e0c56ee579e44d08eade13)`() const` <a id="structFRHAPI__SessionPlayer_1ad379c6e768e0c56ee579e44d08eade13"></a>

Gets the value of Invited_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetInvited`](#structFRHAPI__SessionPlayer_1a47cb1f05a41d417c3f9ed8e9aa88f66f)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1a47cb1f05a41d417c3f9ed8e9aa88f66f"></a>

Gets the value of Invited_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetInvited`](#structFRHAPI__SessionPlayer_1a76c27fdddda2985942a56a424bbd06b9)`(FDateTime & OutValue) const` <a id="structFRHAPI__SessionPlayer_1a76c27fdddda2985942a56a424bbd06b9"></a>

Fills OutValue with the value of Invited_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FDateTime * `[`GetInvitedOrNull`](#structFRHAPI__SessionPlayer_1a7976724ad9e4aaf6ea7edf6ad798a12c)`()` <a id="structFRHAPI__SessionPlayer_1a7976724ad9e4aaf6ea7edf6ad798a12c"></a>

Returns a pointer to Invited_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FDateTime * `[`GetInvitedOrNull`](#structFRHAPI__SessionPlayer_1a35b6948791f2d659c1fa54dbd5e32d16)`() const` <a id="structFRHAPI__SessionPlayer_1a35b6948791f2d659c1fa54dbd5e32d16"></a>

Returns a pointer to Invited_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetInvited`](#structFRHAPI__SessionPlayer_1a1a96f1444823fa4ed7bb2e26cea4e632)`(FDateTime NewValue)` <a id="structFRHAPI__SessionPlayer_1a1a96f1444823fa4ed7bb2e26cea4e632"></a>

Sets the value of Invited_Optional and also sets Invited_IsSet to true.

<br>
#### `public inline void `[`ClearInvited`](#structFRHAPI__SessionPlayer_1aa6b1a742b86c52aa02ee01441a2bf2d8)`()` <a id="structFRHAPI__SessionPlayer_1aa6b1a742b86c52aa02ee01441a2bf2d8"></a>

Clears the value of Invited_Optional and sets Invited_IsSet to false.

<br>
#### `public inline FDateTime & `[`GetJoined`](#structFRHAPI__SessionPlayer_1abecbf72283ecb262b1152bd4b9b60f5b)`()` <a id="structFRHAPI__SessionPlayer_1abecbf72283ecb262b1152bd4b9b60f5b"></a>

Gets the value of Joined_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetJoined`](#structFRHAPI__SessionPlayer_1a5a9776015def077c57f79ac3a9ea340e)`() const` <a id="structFRHAPI__SessionPlayer_1a5a9776015def077c57f79ac3a9ea340e"></a>

Gets the value of Joined_Optional, regardless of it having been set.

<br>
#### `public inline const FDateTime & `[`GetJoined`](#structFRHAPI__SessionPlayer_1a25c39669436de7c50e238fd75931d266)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__SessionPlayer_1a25c39669436de7c50e238fd75931d266"></a>

Gets the value of Joined_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetJoined`](#structFRHAPI__SessionPlayer_1a5b395ef14a3539880ebb60c8388ad570)`(FDateTime & OutValue) const` <a id="structFRHAPI__SessionPlayer_1a5b395ef14a3539880ebb60c8388ad570"></a>

Fills OutValue with the value of Joined_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FDateTime * `[`GetJoinedOrNull`](#structFRHAPI__SessionPlayer_1abcecfd21a9d0658857f355def398d3e1)`()` <a id="structFRHAPI__SessionPlayer_1abcecfd21a9d0658857f355def398d3e1"></a>

Returns a pointer to Joined_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FDateTime * `[`GetJoinedOrNull`](#structFRHAPI__SessionPlayer_1a8ea013f03ae714cb143675f500dd7dfa)`() const` <a id="structFRHAPI__SessionPlayer_1a8ea013f03ae714cb143675f500dd7dfa"></a>

Returns a pointer to Joined_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetJoined`](#structFRHAPI__SessionPlayer_1a4d113ac251cab541e6a0f442aeb6ce50)`(FDateTime NewValue)` <a id="structFRHAPI__SessionPlayer_1a4d113ac251cab541e6a0f442aeb6ce50"></a>

Sets the value of Joined_Optional and also sets Joined_IsSet to true.

<br>
#### `public inline void `[`ClearJoined`](#structFRHAPI__SessionPlayer_1a8b9c20d24a494d6a9c252112833d06e2)`()` <a id="structFRHAPI__SessionPlayer_1a8b9c20d24a494d6a9c252112833d06e2"></a>

Clears the value of Joined_Optional and sets Joined_IsSet to false.

<br>
