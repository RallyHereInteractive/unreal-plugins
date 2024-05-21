# group `RHAPI_SessionInviteRequest` <a id="group__RHAPI__SessionInviteRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionInviteRequest`](#structFRHAPI__SessionInviteRequest) | 

## struct `FRHAPI_SessionInviteRequest` <a id="structFRHAPI__SessionInviteRequest"></a>

```
struct FRHAPI_SessionInviteRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`TeamId_Optional`](#structFRHAPI__SessionInviteRequest_1a6960c5dd86375d9d05584b631333667c) | Which team the players in the source session should be on.
`public bool `[`TeamId_IsSet`](#structFRHAPI__SessionInviteRequest_1af5c8de1e202716ef678f1a91c04baf97) | true if TeamId_Optional has been set to a value
`public ERHAPI_TeamOverflowAction `[`OverflowAction_Optional`](#structFRHAPI__SessionInviteRequest_1a97ede86a0907650eeeae1bb82644483b) | How we should handle too many players being invited to the chosen team.
`public bool `[`OverflowAction_IsSet`](#structFRHAPI__SessionInviteRequest_1a405e07aa929faceca244105a7ec8a25c) | true if OverflowAction_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionInviteRequest_1a1e95e3a93a9e51f73f44f15a01368a4c) | Custom data for all players being invited.
`public bool `[`CustomData_IsSet`](#structFRHAPI__SessionInviteRequest_1a333f9fd32c73b595cc4014c836295424) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SessionInviteRequest_1a5aa01dba6b97bfd230adef6fbe68c4a7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionInviteRequest_1a9d387fbd51eef56c050a8d03e09939b8)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetTeamId`](#structFRHAPI__SessionInviteRequest_1a7193949681fea5fd1f2623eba957c9cd)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionInviteRequest_1a701b324dd55e64455f340f1e607d8eed)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionInviteRequest_1ab2c978e04175b390ab020c2241c30710)`(const int32 & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeamId`](#structFRHAPI__SessionInviteRequest_1a8a1b425932dd231662d45969601d838b)`(int32 & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionInviteRequest_1a358b12458c94df9aa7f5ed2896ea969d)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionInviteRequest_1a579da08f99cfe8a5fbb94cfde91dcc11)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeamId`](#structFRHAPI__SessionInviteRequest_1a8f8db984220ab17e00f46c172dd1bbdd)`(int32 NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline void `[`ClearTeamId`](#structFRHAPI__SessionInviteRequest_1ab803fd40b4e56bf7305e95e52b042adc)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__SessionInviteRequest_1a9aadde9c1d4c9214e23659a7c68bebbf)`() const` | Returns true if TeamId_Optional is set and matches the default value.
`public inline void `[`SetTeamIdToDefault`](#structFRHAPI__SessionInviteRequest_1a85d4fe630db7f98e9bf2a11dc22a6729)`()` | Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.
`public inline ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionInviteRequest_1a467136114c1c85ff7f46d98696bc76b4)`()` | Gets the value of OverflowAction_Optional, regardless of it having been set.
`public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionInviteRequest_1af1b47cecb0ede79e0e2d11646d667f94)`() const` | Gets the value of OverflowAction_Optional, regardless of it having been set.
`public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionInviteRequest_1a85f07b6777a54a07f5f360dcc926ca65)`(const ERHAPI_TeamOverflowAction & DefaultValue) const` | Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOverflowAction`](#structFRHAPI__SessionInviteRequest_1a54a9e060da58850d510b20afae8a78c8)`(ERHAPI_TeamOverflowAction & OutValue) const` | Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__SessionInviteRequest_1afdaced8043e24f44fd14185f2abdf605)`()` | Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__SessionInviteRequest_1a7a08c4e5e8a2d842f7cbb7b54f38d5fc)`() const` | Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOverflowAction`](#structFRHAPI__SessionInviteRequest_1a7cd0f4812dc4862276da0056a52e5da3)`(ERHAPI_TeamOverflowAction NewValue)` | Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.
`public inline void `[`ClearOverflowAction`](#structFRHAPI__SessionInviteRequest_1a028d16832907411195a4c18f65f485a5)`()` | Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionInviteRequest_1a813e26aa5368ddd0e16a1b24c81a309b)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionInviteRequest_1a899274f259affb020bc0f36666847c80)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionInviteRequest_1a27f7196d8ac6aeffe9b5dfd3c0d11d65)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__SessionInviteRequest_1a86d2b56c097198a5a15921b6f97601f3)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionInviteRequest_1a9c306cedc62cd683032e422ec980e477)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionInviteRequest_1a807eae54e59440e7eb0bec7a82f9bf29)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionInviteRequest_1a3e89858749deba8535a5ed21cfb7d6c8)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionInviteRequest_1abf043838cd5ee967422e9bac37825728)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

### Members

#### `public int32 `[`TeamId_Optional`](#structFRHAPI__SessionInviteRequest_1a6960c5dd86375d9d05584b631333667c) <a id="structFRHAPI__SessionInviteRequest_1a6960c5dd86375d9d05584b631333667c"></a>

Which team the players in the source session should be on.

#### `public bool `[`TeamId_IsSet`](#structFRHAPI__SessionInviteRequest_1af5c8de1e202716ef678f1a91c04baf97) <a id="structFRHAPI__SessionInviteRequest_1af5c8de1e202716ef678f1a91c04baf97"></a>

true if TeamId_Optional has been set to a value

#### `public ERHAPI_TeamOverflowAction `[`OverflowAction_Optional`](#structFRHAPI__SessionInviteRequest_1a97ede86a0907650eeeae1bb82644483b) <a id="structFRHAPI__SessionInviteRequest_1a97ede86a0907650eeeae1bb82644483b"></a>

How we should handle too many players being invited to the chosen team.

#### `public bool `[`OverflowAction_IsSet`](#structFRHAPI__SessionInviteRequest_1a405e07aa929faceca244105a7ec8a25c) <a id="structFRHAPI__SessionInviteRequest_1a405e07aa929faceca244105a7ec8a25c"></a>

true if OverflowAction_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionInviteRequest_1a1e95e3a93a9e51f73f44f15a01368a4c) <a id="structFRHAPI__SessionInviteRequest_1a1e95e3a93a9e51f73f44f15a01368a4c"></a>

Custom data for all players being invited.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__SessionInviteRequest_1a333f9fd32c73b595cc4014c836295424) <a id="structFRHAPI__SessionInviteRequest_1a333f9fd32c73b595cc4014c836295424"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionInviteRequest_1a5aa01dba6b97bfd230adef6fbe68c4a7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionInviteRequest_1a5aa01dba6b97bfd230adef6fbe68c4a7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionInviteRequest_1a9d387fbd51eef56c050a8d03e09939b8)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SessionInviteRequest_1a9d387fbd51eef56c050a8d03e09939b8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetTeamId`](#structFRHAPI__SessionInviteRequest_1a7193949681fea5fd1f2623eba957c9cd)`()` <a id="structFRHAPI__SessionInviteRequest_1a7193949681fea5fd1f2623eba957c9cd"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionInviteRequest_1a701b324dd55e64455f340f1e607d8eed)`() const` <a id="structFRHAPI__SessionInviteRequest_1a701b324dd55e64455f340f1e607d8eed"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionInviteRequest_1ab2c978e04175b390ab020c2241c30710)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionInviteRequest_1ab2c978e04175b390ab020c2241c30710"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTeamId`](#structFRHAPI__SessionInviteRequest_1a8a1b425932dd231662d45969601d838b)`(int32 & OutValue) const` <a id="structFRHAPI__SessionInviteRequest_1a8a1b425932dd231662d45969601d838b"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionInviteRequest_1a358b12458c94df9aa7f5ed2896ea969d)`()` <a id="structFRHAPI__SessionInviteRequest_1a358b12458c94df9aa7f5ed2896ea969d"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionInviteRequest_1a579da08f99cfe8a5fbb94cfde91dcc11)`() const` <a id="structFRHAPI__SessionInviteRequest_1a579da08f99cfe8a5fbb94cfde91dcc11"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTeamId`](#structFRHAPI__SessionInviteRequest_1a8f8db984220ab17e00f46c172dd1bbdd)`(int32 NewValue)` <a id="structFRHAPI__SessionInviteRequest_1a8f8db984220ab17e00f46c172dd1bbdd"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__SessionInviteRequest_1ab803fd40b4e56bf7305e95e52b042adc)`()` <a id="structFRHAPI__SessionInviteRequest_1ab803fd40b4e56bf7305e95e52b042adc"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

#### `public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__SessionInviteRequest_1a9aadde9c1d4c9214e23659a7c68bebbf)`() const` <a id="structFRHAPI__SessionInviteRequest_1a9aadde9c1d4c9214e23659a7c68bebbf"></a>

Returns true if TeamId_Optional is set and matches the default value.

#### `public inline void `[`SetTeamIdToDefault`](#structFRHAPI__SessionInviteRequest_1a85d4fe630db7f98e9bf2a11dc22a6729)`()` <a id="structFRHAPI__SessionInviteRequest_1a85d4fe630db7f98e9bf2a11dc22a6729"></a>

Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.

#### `public inline ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionInviteRequest_1a467136114c1c85ff7f46d98696bc76b4)`()` <a id="structFRHAPI__SessionInviteRequest_1a467136114c1c85ff7f46d98696bc76b4"></a>

Gets the value of OverflowAction_Optional, regardless of it having been set.

#### `public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionInviteRequest_1af1b47cecb0ede79e0e2d11646d667f94)`() const` <a id="structFRHAPI__SessionInviteRequest_1af1b47cecb0ede79e0e2d11646d667f94"></a>

Gets the value of OverflowAction_Optional, regardless of it having been set.

#### `public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionInviteRequest_1a85f07b6777a54a07f5f360dcc926ca65)`(const ERHAPI_TeamOverflowAction & DefaultValue) const` <a id="structFRHAPI__SessionInviteRequest_1a85f07b6777a54a07f5f360dcc926ca65"></a>

Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOverflowAction`](#structFRHAPI__SessionInviteRequest_1a54a9e060da58850d510b20afae8a78c8)`(ERHAPI_TeamOverflowAction & OutValue) const` <a id="structFRHAPI__SessionInviteRequest_1a54a9e060da58850d510b20afae8a78c8"></a>

Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__SessionInviteRequest_1afdaced8043e24f44fd14185f2abdf605)`()` <a id="structFRHAPI__SessionInviteRequest_1afdaced8043e24f44fd14185f2abdf605"></a>

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__SessionInviteRequest_1a7a08c4e5e8a2d842f7cbb7b54f38d5fc)`() const` <a id="structFRHAPI__SessionInviteRequest_1a7a08c4e5e8a2d842f7cbb7b54f38d5fc"></a>

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOverflowAction`](#structFRHAPI__SessionInviteRequest_1a7cd0f4812dc4862276da0056a52e5da3)`(ERHAPI_TeamOverflowAction NewValue)` <a id="structFRHAPI__SessionInviteRequest_1a7cd0f4812dc4862276da0056a52e5da3"></a>

Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.

#### `public inline void `[`ClearOverflowAction`](#structFRHAPI__SessionInviteRequest_1a028d16832907411195a4c18f65f485a5)`()` <a id="structFRHAPI__SessionInviteRequest_1a028d16832907411195a4c18f65f485a5"></a>

Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionInviteRequest_1a813e26aa5368ddd0e16a1b24c81a309b)`()` <a id="structFRHAPI__SessionInviteRequest_1a813e26aa5368ddd0e16a1b24c81a309b"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionInviteRequest_1a899274f259affb020bc0f36666847c80)`() const` <a id="structFRHAPI__SessionInviteRequest_1a899274f259affb020bc0f36666847c80"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionInviteRequest_1a27f7196d8ac6aeffe9b5dfd3c0d11d65)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionInviteRequest_1a27f7196d8ac6aeffe9b5dfd3c0d11d65"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__SessionInviteRequest_1a86d2b56c097198a5a15921b6f97601f3)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionInviteRequest_1a86d2b56c097198a5a15921b6f97601f3"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionInviteRequest_1a9c306cedc62cd683032e422ec980e477)`()` <a id="structFRHAPI__SessionInviteRequest_1a9c306cedc62cd683032e422ec980e477"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionInviteRequest_1a807eae54e59440e7eb0bec7a82f9bf29)`() const` <a id="structFRHAPI__SessionInviteRequest_1a807eae54e59440e7eb0bec7a82f9bf29"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionInviteRequest_1a3e89858749deba8535a5ed21cfb7d6c8)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__SessionInviteRequest_1a3e89858749deba8535a5ed21cfb7d6c8"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionInviteRequest_1abf043838cd5ee967422e9bac37825728)`()` <a id="structFRHAPI__SessionInviteRequest_1abf043838cd5ee967422e9bac37825728"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

