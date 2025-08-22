---
title: RHAPI_SelfSessionPlayerUpdateRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SelfSessionPlayerUpdateRequest`](#structFRHAPI__SelfSessionPlayerUpdateRequest) | A request body for a player updating information about themselves.

## struct `FRHAPI_SelfSessionPlayerUpdateRequest` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest"></a>

```
struct FRHAPI_SelfSessionPlayerUpdateRequest
  : public FRHAPI_Model
```

A request body for a player updating information about themselves.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_SessionPlayerStatus `[`Status_Optional`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a5f87ee029d69d0bc3ffd1f4983c27547) | Status that the player would like after the request is complete. Note that some join operations may promote the player from `member` to `leader`
`public bool `[`Status_IsSet`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1acdead63ce3719b7cb13bda50220e44c3) | true if Status_Optional has been set to a value
`public FString `[`ClientVersion`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a578153977ab83acf82c229604c427a41) | Semver for updated client.
`public `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` `[`ClientSettings`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a51b20cb17231495ddb6e7904e67ff3b5) | Which input type and platform the client is using.
`public int32 `[`TeamId`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a6e30cb01f64056bb327e4bc9214d11c1) | Which team the player is one.
`public `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` `[`CrossplayPreferences_Optional`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a3add0a8d848cdc7ba37ad9e02c33df33) | Client's desired crossplay settings to determine which other clients it can play with. If not defined, assumed to be as permissive as possible.
`public bool `[`CrossplayPreferences_IsSet`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1abea2347af254bb0e3f9eb8cbb46fc9e3) | true if CrossplayPreferences_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1aaa1ded6c84ac6e5ddda821fe76a086ae) | player-defined custom data
`public bool `[`CustomData_IsSet`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a8217d194f5c6d231a970922b72505333) | true if CustomData_Optional has been set to a value
`public FString `[`Password_Optional`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1aeaffaeeb75bbf81be1c6c71f55741ea3) | Password to join a password protected session that you are not invited to.
`public bool `[`Password_IsSet`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1af920855dec5e06f3ba9e62f99c22aeca) | true if Password_Optional has been set to a value
`public FGuid `[`FriendUuid_Optional`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ae6a1a424b552a8a25282000e4d1303ac) | UUID of the friend whose session you are joining.
`public bool `[`FriendUuid_IsSet`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1abbc521201d45f81b9282912a56a95d81) | true if FriendUuid_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a689b45738def0c35f8b23d5062395aa1)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1acc77d6986116b5e4f8a94b6dec665079)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1aadbe97339ab07daa9f2360fa35824297)`()` | Gets the value of Status_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a522b3a8e98d52bbb7e4259f7f7496c99)`() const` | Gets the value of Status_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1aba5b7bd644cd5ee902c81a69e2f5ebaa)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` | Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a184fd97be8c279bd5fe2d799d0971a5c)`(ERHAPI_SessionPlayerStatus & OutValue) const` | Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_SessionPlayerStatus * `[`GetStatusOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a11852264957221c1fb477498f78b2f51)`()` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_SessionPlayerStatus * `[`GetStatusOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a8b3f12fcb98992b11a60b09d144e9431)`() const` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a04a69585090a1f796910572270a08eda)`(const ERHAPI_SessionPlayerStatus & NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a4fea1af14a658c31f276dfc006da0ee3)`(ERHAPI_SessionPlayerStatus && NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.
`public inline void `[`ClearStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a43b611f41d315e4d920418702e1c508b)`()` | Clears the value of Status_Optional and sets Status_IsSet to false.
`public inline FORCEINLINE FString & `[`GetClientVersion`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a99044510b889a3b94e720202ecf5873c)`()` | Gets the value of ClientVersion.
`public inline FORCEINLINE const FString & `[`GetClientVersion`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a672c0542c8b0b5a1936723ad45c6564c)`() const` | Gets the value of ClientVersion.
`public inline FORCEINLINE void `[`SetClientVersion`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a163517f4bb231b1841cf0104b499af0f)`(const FString & NewValue)` | Sets the value of ClientVersion.
`public inline FORCEINLINE void `[`SetClientVersion`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a3f2be3066cf851ad637b9298b9efa1b5)`(FString && NewValue)` | Sets the value of ClientVersion using move semantics.
`public inline FORCEINLINE `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a2b59c0943ac41e0916ed32ab8f4446cc)`()` | Gets the value of ClientSettings.
`public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a546279248e408eb2b94610c0966856c9)`() const` | Gets the value of ClientSettings.
`public inline FORCEINLINE void `[`SetClientSettings`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ab6c537e5d0dd92e7875762e4c4145a1c)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` | Sets the value of ClientSettings.
`public inline FORCEINLINE void `[`SetClientSettings`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a28a7fe108cbcb293eaff1c5953cd805d)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` | Sets the value of ClientSettings using move semantics.
`public inline FORCEINLINE int32 & `[`GetTeamId`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a76cd1509952c8d437af8613dc7e13259)`()` | Gets the value of TeamId.
`public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ae504bb62d601e11f1268a6656375ede2)`() const` | Gets the value of TeamId.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a8e0cf407562ef8799050c73c142aa884)`(const int32 & NewValue)` | Sets the value of TeamId.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1afae78eca032c965fdd455e7f7d762284)`(int32 && NewValue)` | Sets the value of TeamId using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TeamId`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ac64a14e5ced218cce13a20cc4888d1ef)`()` | Returns the default value of TeamId.
`public inline FORCEINLINE `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a90b0f1e4f7f0d0af9b91dded5914d9af)`()` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad1cac37963a031a4aff6b7789b64aed8)`() const` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a5b9b9fd0248bf371c767bb1e416b1583)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` | Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad1be50aa9c177b93adb40ebce8ecc4a5)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` | Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a3424959bdd41a4fe945936917efdae37)`()` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a0bc3919b8c14fbd773699fdfe363610c)`() const` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ab433b736e3d6e1de6d4768fbc2196762)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.
`public inline FORCEINLINE void `[`SetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a8fb196d433595165b1b4f3ec1499e0f7)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.
`public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad9dacb94ea41b6f8efbf9c1c9ed3420e)`()` | Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1af9dca41ee157d1f831838e864ae7ccae)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a3876823b3e1a46c4db8282c98009e5d6)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1abad5137d5aa2655a5b614356feecda2b)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a8f5e72e5a8d701e5372ab44c7a85631e)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ab14f8540dcacd1379f2922cf25e7a825)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a1c873a474ce9e6ac76bff14d5f91c3b2)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1aec90509308d3b51905792e99bbb42419)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a5c62eb058aa6ccb44c5c1c6f65b55355)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1afc76499c6b23732fdd02a72402d7e752)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE FString & `[`GetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ae68bb49fc0adee8c11a51e069320b622)`()` | Gets the value of Password_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a487af8cab5f14472b57d93d6799f097c)`() const` | Gets the value of Password_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a5045435ee3f7393219c47a75124ff30b)`(const FString & DefaultValue) const` | Gets the value of Password_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a8bc0c269ff1356f1ccd85b26239cacd9)`(FString & OutValue) const` | Fills OutValue with the value of Password_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPasswordOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a2cfcebb45cdfeeefb430c765125520d4)`()` | Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPasswordOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a3571a33c082dc47b0cebee36e9e650f7)`() const` | Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad2fd35fe9e4ac3ad1bf045197b16b7b8)`(const FString & NewValue)` | Sets the value of Password_Optional and also sets Password_IsSet to true.
`public inline FORCEINLINE void `[`SetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ae7874b8e11accd42655f60fe3793c074)`(FString && NewValue)` | Sets the value of Password_Optional and also sets Password_IsSet to true using move semantics.
`public inline void `[`ClearPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a6858175ae0bfebce9a67971e0cc3ca33)`()` | Clears the value of Password_Optional and sets Password_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetFriendUuid`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1aef47fd8e0515c441c2d6523e873cde9c)`()` | Gets the value of FriendUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetFriendUuid`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1af39e50698adcc578dbac8bb80e45d2cf)`() const` | Gets the value of FriendUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetFriendUuid`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a38a493d3749d6ec02ff1ea86a7e6497f)`(const FGuid & DefaultValue) const` | Gets the value of FriendUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetFriendUuid`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a9de7b96ca1749666fc8524705ca01030)`(FGuid & OutValue) const` | Fills OutValue with the value of FriendUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetFriendUuidOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a9a87b966f47befa0d852ea5c795ff933)`()` | Returns a pointer to FriendUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetFriendUuidOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a18bcdd2ce535d7a060249bd2b9eaa11e)`() const` | Returns a pointer to FriendUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetFriendUuid`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a178cc867f41682b440d87796d26e3881)`(const FGuid & NewValue)` | Sets the value of FriendUuid_Optional and also sets FriendUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetFriendUuid`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad3de8eb46c29e2c8b159698a93f7b69c)`(FGuid && NewValue)` | Sets the value of FriendUuid_Optional and also sets FriendUuid_IsSet to true using move semantics.
`public inline void `[`ClearFriendUuid`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1af34072b80bbe34146e951f23c69cff95)`()` | Clears the value of FriendUuid_Optional and sets FriendUuid_IsSet to false.

### Members

#### `public ERHAPI_SessionPlayerStatus `[`Status_Optional`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a5f87ee029d69d0bc3ffd1f4983c27547) <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a5f87ee029d69d0bc3ffd1f4983c27547"></a>

Status that the player would like after the request is complete. Note that some join operations may promote the player from `member` to `leader`

#### `public bool `[`Status_IsSet`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1acdead63ce3719b7cb13bda50220e44c3) <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1acdead63ce3719b7cb13bda50220e44c3"></a>

true if Status_Optional has been set to a value

#### `public FString `[`ClientVersion`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a578153977ab83acf82c229604c427a41) <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a578153977ab83acf82c229604c427a41"></a>

Semver for updated client.

#### `public `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` `[`ClientSettings`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a51b20cb17231495ddb6e7904e67ff3b5) <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a51b20cb17231495ddb6e7904e67ff3b5"></a>

Which input type and platform the client is using.

#### `public int32 `[`TeamId`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a6e30cb01f64056bb327e4bc9214d11c1) <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a6e30cb01f64056bb327e4bc9214d11c1"></a>

Which team the player is one.

#### `public `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` `[`CrossplayPreferences_Optional`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a3add0a8d848cdc7ba37ad9e02c33df33) <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a3add0a8d848cdc7ba37ad9e02c33df33"></a>

Client's desired crossplay settings to determine which other clients it can play with. If not defined, assumed to be as permissive as possible.

#### `public bool `[`CrossplayPreferences_IsSet`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1abea2347af254bb0e3f9eb8cbb46fc9e3) <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1abea2347af254bb0e3f9eb8cbb46fc9e3"></a>

true if CrossplayPreferences_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1aaa1ded6c84ac6e5ddda821fe76a086ae) <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1aaa1ded6c84ac6e5ddda821fe76a086ae"></a>

player-defined custom data

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a8217d194f5c6d231a970922b72505333) <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a8217d194f5c6d231a970922b72505333"></a>

true if CustomData_Optional has been set to a value

#### `public FString `[`Password_Optional`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1aeaffaeeb75bbf81be1c6c71f55741ea3) <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1aeaffaeeb75bbf81be1c6c71f55741ea3"></a>

Password to join a password protected session that you are not invited to.

#### `public bool `[`Password_IsSet`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1af920855dec5e06f3ba9e62f99c22aeca) <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1af920855dec5e06f3ba9e62f99c22aeca"></a>

true if Password_Optional has been set to a value

#### `public FGuid `[`FriendUuid_Optional`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ae6a1a424b552a8a25282000e4d1303ac) <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ae6a1a424b552a8a25282000e4d1303ac"></a>

UUID of the friend whose session you are joining.

#### `public bool `[`FriendUuid_IsSet`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1abbc521201d45f81b9282912a56a95d81) <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1abbc521201d45f81b9282912a56a95d81"></a>

true if FriendUuid_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a689b45738def0c35f8b23d5062395aa1)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a689b45738def0c35f8b23d5062395aa1"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1acc77d6986116b5e4f8a94b6dec665079)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1acc77d6986116b5e4f8a94b6dec665079"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1aadbe97339ab07daa9f2360fa35824297)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1aadbe97339ab07daa9f2360fa35824297"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a522b3a8e98d52bbb7e4259f7f7496c99)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a522b3a8e98d52bbb7e4259f7f7496c99"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1aba5b7bd644cd5ee902c81a69e2f5ebaa)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1aba5b7bd644cd5ee902c81a69e2f5ebaa"></a>

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a184fd97be8c279bd5fe2d799d0971a5c)`(ERHAPI_SessionPlayerStatus & OutValue) const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a184fd97be8c279bd5fe2d799d0971a5c"></a>

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_SessionPlayerStatus * `[`GetStatusOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a11852264957221c1fb477498f78b2f51)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a11852264957221c1fb477498f78b2f51"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_SessionPlayerStatus * `[`GetStatusOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a8b3f12fcb98992b11a60b09d144e9431)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a8b3f12fcb98992b11a60b09d144e9431"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a04a69585090a1f796910572270a08eda)`(const ERHAPI_SessionPlayerStatus & NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a04a69585090a1f796910572270a08eda"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a4fea1af14a658c31f276dfc006da0ee3)`(ERHAPI_SessionPlayerStatus && NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a4fea1af14a658c31f276dfc006da0ee3"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.

#### `public inline void `[`ClearStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a43b611f41d315e4d920418702e1c508b)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a43b611f41d315e4d920418702e1c508b"></a>

Clears the value of Status_Optional and sets Status_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetClientVersion`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a99044510b889a3b94e720202ecf5873c)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a99044510b889a3b94e720202ecf5873c"></a>

Gets the value of ClientVersion.

#### `public inline FORCEINLINE const FString & `[`GetClientVersion`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a672c0542c8b0b5a1936723ad45c6564c)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a672c0542c8b0b5a1936723ad45c6564c"></a>

Gets the value of ClientVersion.

#### `public inline FORCEINLINE void `[`SetClientVersion`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a163517f4bb231b1841cf0104b499af0f)`(const FString & NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a163517f4bb231b1841cf0104b499af0f"></a>

Sets the value of ClientVersion.

#### `public inline FORCEINLINE void `[`SetClientVersion`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a3f2be3066cf851ad637b9298b9efa1b5)`(FString && NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a3f2be3066cf851ad637b9298b9efa1b5"></a>

Sets the value of ClientVersion using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a2b59c0943ac41e0916ed32ab8f4446cc)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a2b59c0943ac41e0916ed32ab8f4446cc"></a>

Gets the value of ClientSettings.

#### `public inline FORCEINLINE const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a546279248e408eb2b94610c0966856c9)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a546279248e408eb2b94610c0966856c9"></a>

Gets the value of ClientSettings.

#### `public inline FORCEINLINE void `[`SetClientSettings`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ab6c537e5d0dd92e7875762e4c4145a1c)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ab6c537e5d0dd92e7875762e4c4145a1c"></a>

Sets the value of ClientSettings.

#### `public inline FORCEINLINE void `[`SetClientSettings`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a28a7fe108cbcb293eaff1c5953cd805d)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a28a7fe108cbcb293eaff1c5953cd805d"></a>

Sets the value of ClientSettings using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetTeamId`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a76cd1509952c8d437af8613dc7e13259)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a76cd1509952c8d437af8613dc7e13259"></a>

Gets the value of TeamId.

#### `public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ae504bb62d601e11f1268a6656375ede2)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ae504bb62d601e11f1268a6656375ede2"></a>

Gets the value of TeamId.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a8e0cf407562ef8799050c73c142aa884)`(const int32 & NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a8e0cf407562ef8799050c73c142aa884"></a>

Sets the value of TeamId.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1afae78eca032c965fdd455e7f7d762284)`(int32 && NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1afae78eca032c965fdd455e7f7d762284"></a>

Sets the value of TeamId using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TeamId`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ac64a14e5ced218cce13a20cc4888d1ef)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ac64a14e5ced218cce13a20cc4888d1ef"></a>

Returns the default value of TeamId.

#### `public inline FORCEINLINE `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a90b0f1e4f7f0d0af9b91dded5914d9af)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a90b0f1e4f7f0d0af9b91dded5914d9af"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad1cac37963a031a4aff6b7789b64aed8)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ad1cac37963a031a4aff6b7789b64aed8"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a5b9b9fd0248bf371c767bb1e416b1583)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a5b9b9fd0248bf371c767bb1e416b1583"></a>

Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad1be50aa9c177b93adb40ebce8ecc4a5)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ad1be50aa9c177b93adb40ebce8ecc4a5"></a>

Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a3424959bdd41a4fe945936917efdae37)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a3424959bdd41a4fe945936917efdae37"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a0bc3919b8c14fbd773699fdfe363610c)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a0bc3919b8c14fbd773699fdfe363610c"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ab433b736e3d6e1de6d4768fbc2196762)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ab433b736e3d6e1de6d4768fbc2196762"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a8fb196d433595165b1b4f3ec1499e0f7)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a8fb196d433595165b1b4f3ec1499e0f7"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.

#### `public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad9dacb94ea41b6f8efbf9c1c9ed3420e)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ad9dacb94ea41b6f8efbf9c1c9ed3420e"></a>

Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1af9dca41ee157d1f831838e864ae7ccae)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1af9dca41ee157d1f831838e864ae7ccae"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a3876823b3e1a46c4db8282c98009e5d6)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a3876823b3e1a46c4db8282c98009e5d6"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1abad5137d5aa2655a5b614356feecda2b)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1abad5137d5aa2655a5b614356feecda2b"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a8f5e72e5a8d701e5372ab44c7a85631e)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a8f5e72e5a8d701e5372ab44c7a85631e"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ab14f8540dcacd1379f2922cf25e7a825)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ab14f8540dcacd1379f2922cf25e7a825"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a1c873a474ce9e6ac76bff14d5f91c3b2)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a1c873a474ce9e6ac76bff14d5f91c3b2"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1aec90509308d3b51905792e99bbb42419)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1aec90509308d3b51905792e99bbb42419"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a5c62eb058aa6ccb44c5c1c6f65b55355)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a5c62eb058aa6ccb44c5c1c6f65b55355"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1afc76499c6b23732fdd02a72402d7e752)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1afc76499c6b23732fdd02a72402d7e752"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ae68bb49fc0adee8c11a51e069320b622)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ae68bb49fc0adee8c11a51e069320b622"></a>

Gets the value of Password_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a487af8cab5f14472b57d93d6799f097c)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a487af8cab5f14472b57d93d6799f097c"></a>

Gets the value of Password_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a5045435ee3f7393219c47a75124ff30b)`(const FString & DefaultValue) const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a5045435ee3f7393219c47a75124ff30b"></a>

Gets the value of Password_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a8bc0c269ff1356f1ccd85b26239cacd9)`(FString & OutValue) const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a8bc0c269ff1356f1ccd85b26239cacd9"></a>

Fills OutValue with the value of Password_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPasswordOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a2cfcebb45cdfeeefb430c765125520d4)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a2cfcebb45cdfeeefb430c765125520d4"></a>

Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPasswordOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a3571a33c082dc47b0cebee36e9e650f7)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a3571a33c082dc47b0cebee36e9e650f7"></a>

Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad2fd35fe9e4ac3ad1bf045197b16b7b8)`(const FString & NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ad2fd35fe9e4ac3ad1bf045197b16b7b8"></a>

Sets the value of Password_Optional and also sets Password_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ae7874b8e11accd42655f60fe3793c074)`(FString && NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ae7874b8e11accd42655f60fe3793c074"></a>

Sets the value of Password_Optional and also sets Password_IsSet to true using move semantics.

#### `public inline void `[`ClearPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a6858175ae0bfebce9a67971e0cc3ca33)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a6858175ae0bfebce9a67971e0cc3ca33"></a>

Clears the value of Password_Optional and sets Password_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetFriendUuid`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1aef47fd8e0515c441c2d6523e873cde9c)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1aef47fd8e0515c441c2d6523e873cde9c"></a>

Gets the value of FriendUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetFriendUuid`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1af39e50698adcc578dbac8bb80e45d2cf)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1af39e50698adcc578dbac8bb80e45d2cf"></a>

Gets the value of FriendUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetFriendUuid`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a38a493d3749d6ec02ff1ea86a7e6497f)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a38a493d3749d6ec02ff1ea86a7e6497f"></a>

Gets the value of FriendUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetFriendUuid`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a9de7b96ca1749666fc8524705ca01030)`(FGuid & OutValue) const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a9de7b96ca1749666fc8524705ca01030"></a>

Fills OutValue with the value of FriendUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetFriendUuidOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a9a87b966f47befa0d852ea5c795ff933)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a9a87b966f47befa0d852ea5c795ff933"></a>

Returns a pointer to FriendUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetFriendUuidOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a18bcdd2ce535d7a060249bd2b9eaa11e)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a18bcdd2ce535d7a060249bd2b9eaa11e"></a>

Returns a pointer to FriendUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetFriendUuid`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a178cc867f41682b440d87796d26e3881)`(const FGuid & NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a178cc867f41682b440d87796d26e3881"></a>

Sets the value of FriendUuid_Optional and also sets FriendUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetFriendUuid`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad3de8eb46c29e2c8b159698a93f7b69c)`(FGuid && NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ad3de8eb46c29e2c8b159698a93f7b69c"></a>

Sets the value of FriendUuid_Optional and also sets FriendUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearFriendUuid`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1af34072b80bbe34146e951f23c69cff95)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1af34072b80bbe34146e951f23c69cff95"></a>

Clears the value of FriendUuid_Optional and sets FriendUuid_IsSet to false.

