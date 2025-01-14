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
`public virtual bool `[`FromJson`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a689b45738def0c35f8b23d5062395aa1)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1acc77d6986116b5e4f8a94b6dec665079)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad1c4283d346348c48a0399c7bbc72bda)`()` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a615de1690a836ab13b68b49a455289f1)`() const` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a6630ffbc1017bdc2c4a09c732efbeba9)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` | Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1aa4778eafeab137a80737cb4ac3b85aeb)`(ERHAPI_SessionPlayerStatus & OutValue) const` | Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_SessionPlayerStatus * `[`GetStatusOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a7ff1da1458e4abecfc2fc2bf116cca78)`()` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_SessionPlayerStatus * `[`GetStatusOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a53c6e48844f971b8f61b8d8cdc5145f4)`() const` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a0f285e59bfe54b7d0c4b97241906b0be)`(const ERHAPI_SessionPlayerStatus & NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true.
`public inline void `[`SetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a4948faa7fe9618c2724448e48a7d850e)`(ERHAPI_SessionPlayerStatus && NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.
`public inline void `[`ClearStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a43b611f41d315e4d920418702e1c508b)`()` | Clears the value of Status_Optional and sets Status_IsSet to false.
`public inline bool `[`IsStatusSet`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a0e359e5db88aeb6df18a6c6bbfcf1297)`() const` | Checks whether Status_Optional has been set.
`public inline FString & `[`GetClientVersion`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a09267f5b3d19a49b9d49da7c7dd177e4)`()` | Gets the value of ClientVersion.
`public inline const FString & `[`GetClientVersion`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a0c8b6f93c6bb01e8ca34a494dd7ae7ff)`() const` | Gets the value of ClientVersion.
`public inline void `[`SetClientVersion`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1afa6bcea0716b1ec9c7092fe36487504f)`(const FString & NewValue)` | Sets the value of ClientVersion.
`public inline void `[`SetClientVersion`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a9fbcbc38c7afa20eea8bacab4b460eee)`(FString && NewValue)` | Sets the value of ClientVersion using move semantics.
`public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ac6a7515517ea7a0a0b907a55c80ddbe6)`()` | Gets the value of ClientSettings.
`public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a694862117dd70367116675ec2b87619d)`() const` | Gets the value of ClientSettings.
`public inline void `[`SetClientSettings`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1aa8e0a5a86495dcdcb3210f511dd1f0dd)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` | Sets the value of ClientSettings.
`public inline void `[`SetClientSettings`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1aedd38d9bfb6d078e9486e860982c9450)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` | Sets the value of ClientSettings using move semantics.
`public inline int32 & `[`GetTeamId`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a4587f314d7190dffb38da86aaed743d5)`()` | Gets the value of TeamId.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1afd1f0a082a080ca7629cf0ae691673fa)`() const` | Gets the value of TeamId.
`public inline void `[`SetTeamId`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a440a6f1d74af247d9284f4f118d509c7)`(const int32 & NewValue)` | Sets the value of TeamId.
`public inline void `[`SetTeamId`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad69f91c5a1374d5baf61211880aac340)`(int32 && NewValue)` | Sets the value of TeamId using move semantics.
`public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a15c6b3db1569e1555132bf0540770064)`() const` | Returns true if TeamId matches the default value.
`public inline void `[`SetTeamIdToDefault`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a3782cd521bb7775f673f97861613130d)`()` | Sets the value of TeamId to its default
`public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a6fcccfc4c7a628742283a4578d90ac54)`()` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1abc40671a82fe0ed7bc58a5f0290e784a)`() const` | Gets the value of CrossplayPreferences_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a0079f15e45f762cb62468a28921a4438)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` | Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1adb508ab41d796ca2863c518504d67284)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` | Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a77a66a4169e88d27a3965cf23f263447)`()` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ae6f87a3213e993da084de77029f61f6d)`() const` | Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ae8c58a3802a65126d2796b83ab9710d9)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.
`public inline void `[`SetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad76136a2d0ff6bcd321f8bd2fa0fdaee)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` | Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.
`public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad9dacb94ea41b6f8efbf9c1c9ed3420e)`()` | Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.
`public inline bool `[`IsCrossplayPreferencesSet`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a0db5881c81d0a60eba18e0065f635c4d)`() const` | Checks whether CrossplayPreferences_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a67e8839dc5815d6bd53283e2299c1394)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a4b01bd60d251698e1c801b8fa79d030f)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a1af343676a250b975678347b507dba0c)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a77e8157f202a5ad51f743a00178f92a4)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad580526dac614389d7901d43ba4d7ba8)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1adbc276a9c1788b71b1b0640f4cacfdc3)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a4fa7c9343daa4537935132227e07d4ae)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a7abed25d8014343285c9a8af520774f4)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1afc76499c6b23732fdd02a72402d7e752)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1af5b2c1bd05fafedcc787875fca55b5b1)`() const` | Checks whether CustomData_Optional has been set.
`public inline FString & `[`GetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1af3596f9942f0d9dc7c28c80e50d21243)`()` | Gets the value of Password_Optional, regardless of it having been set.
`public inline const FString & `[`GetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ae9784848e74252929401ec72525d600f)`() const` | Gets the value of Password_Optional, regardless of it having been set.
`public inline const FString & `[`GetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a10811610355908048d88d841c8a16667)`(const FString & DefaultValue) const` | Gets the value of Password_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a3f8a6b7193a915eadc71dbaed0d42845)`(FString & OutValue) const` | Fills OutValue with the value of Password_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPasswordOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a9a8c0bd6e3ae45b929742bdb27826920)`()` | Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPasswordOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad1e4a6e8a938c1cf84b6c26665a7c7cc)`() const` | Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a02a56609839b92b82c929da432854667)`(const FString & NewValue)` | Sets the value of Password_Optional and also sets Password_IsSet to true.
`public inline void `[`SetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a87e2bd4ccd25a598e1176b7c23948b31)`(FString && NewValue)` | Sets the value of Password_Optional and also sets Password_IsSet to true using move semantics.
`public inline void `[`ClearPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a6858175ae0bfebce9a67971e0cc3ca33)`()` | Clears the value of Password_Optional and sets Password_IsSet to false.
`public inline bool `[`IsPasswordSet`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1aa8855f2950fb13c365cd9a2ab6ba77ca)`() const` | Checks whether Password_Optional has been set.

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

#### `public inline ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad1c4283d346348c48a0399c7bbc72bda)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ad1c4283d346348c48a0399c7bbc72bda"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a615de1690a836ab13b68b49a455289f1)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a615de1690a836ab13b68b49a455289f1"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a6630ffbc1017bdc2c4a09c732efbeba9)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a6630ffbc1017bdc2c4a09c732efbeba9"></a>

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1aa4778eafeab137a80737cb4ac3b85aeb)`(ERHAPI_SessionPlayerStatus & OutValue) const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1aa4778eafeab137a80737cb4ac3b85aeb"></a>

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_SessionPlayerStatus * `[`GetStatusOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a7ff1da1458e4abecfc2fc2bf116cca78)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a7ff1da1458e4abecfc2fc2bf116cca78"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_SessionPlayerStatus * `[`GetStatusOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a53c6e48844f971b8f61b8d8cdc5145f4)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a53c6e48844f971b8f61b8d8cdc5145f4"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a0f285e59bfe54b7d0c4b97241906b0be)`(const ERHAPI_SessionPlayerStatus & NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a0f285e59bfe54b7d0c4b97241906b0be"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true.

#### `public inline void `[`SetStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a4948faa7fe9618c2724448e48a7d850e)`(ERHAPI_SessionPlayerStatus && NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a4948faa7fe9618c2724448e48a7d850e"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.

#### `public inline void `[`ClearStatus`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a43b611f41d315e4d920418702e1c508b)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a43b611f41d315e4d920418702e1c508b"></a>

Clears the value of Status_Optional and sets Status_IsSet to false.

#### `public inline bool `[`IsStatusSet`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a0e359e5db88aeb6df18a6c6bbfcf1297)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a0e359e5db88aeb6df18a6c6bbfcf1297"></a>

Checks whether Status_Optional has been set.

#### `public inline FString & `[`GetClientVersion`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a09267f5b3d19a49b9d49da7c7dd177e4)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a09267f5b3d19a49b9d49da7c7dd177e4"></a>

Gets the value of ClientVersion.

#### `public inline const FString & `[`GetClientVersion`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a0c8b6f93c6bb01e8ca34a494dd7ae7ff)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a0c8b6f93c6bb01e8ca34a494dd7ae7ff"></a>

Gets the value of ClientVersion.

#### `public inline void `[`SetClientVersion`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1afa6bcea0716b1ec9c7092fe36487504f)`(const FString & NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1afa6bcea0716b1ec9c7092fe36487504f"></a>

Sets the value of ClientVersion.

#### `public inline void `[`SetClientVersion`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a9fbcbc38c7afa20eea8bacab4b460eee)`(FString && NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a9fbcbc38c7afa20eea8bacab4b460eee"></a>

Sets the value of ClientVersion using move semantics.

#### `public inline `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ac6a7515517ea7a0a0b907a55c80ddbe6)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ac6a7515517ea7a0a0b907a55c80ddbe6"></a>

Gets the value of ClientSettings.

#### `public inline const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & `[`GetClientSettings`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a694862117dd70367116675ec2b87619d)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a694862117dd70367116675ec2b87619d"></a>

Gets the value of ClientSettings.

#### `public inline void `[`SetClientSettings`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1aa8e0a5a86495dcdcb3210f511dd1f0dd)`(const `[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` & NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1aa8e0a5a86495dcdcb3210f511dd1f0dd"></a>

Sets the value of ClientSettings.

#### `public inline void `[`SetClientSettings`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1aedd38d9bfb6d078e9486e860982c9450)`(`[`FRHAPI_ClientSettings`](RHAPI_ClientSettings.md#structFRHAPI__ClientSettings)` && NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1aedd38d9bfb6d078e9486e860982c9450"></a>

Sets the value of ClientSettings using move semantics.

#### `public inline int32 & `[`GetTeamId`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a4587f314d7190dffb38da86aaed743d5)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a4587f314d7190dffb38da86aaed743d5"></a>

Gets the value of TeamId.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1afd1f0a082a080ca7629cf0ae691673fa)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1afd1f0a082a080ca7629cf0ae691673fa"></a>

Gets the value of TeamId.

#### `public inline void `[`SetTeamId`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a440a6f1d74af247d9284f4f118d509c7)`(const int32 & NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a440a6f1d74af247d9284f4f118d509c7"></a>

Sets the value of TeamId.

#### `public inline void `[`SetTeamId`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad69f91c5a1374d5baf61211880aac340)`(int32 && NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ad69f91c5a1374d5baf61211880aac340"></a>

Sets the value of TeamId using move semantics.

#### `public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a15c6b3db1569e1555132bf0540770064)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a15c6b3db1569e1555132bf0540770064"></a>

Returns true if TeamId matches the default value.

#### `public inline void `[`SetTeamIdToDefault`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a3782cd521bb7775f673f97861613130d)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a3782cd521bb7775f673f97861613130d"></a>

Sets the value of TeamId to its default

#### `public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a6fcccfc4c7a628742283a4578d90ac54)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a6fcccfc4c7a628742283a4578d90ac54"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1abc40671a82fe0ed7bc58a5f0290e784a)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1abc40671a82fe0ed7bc58a5f0290e784a"></a>

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & `[`GetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a0079f15e45f762cb62468a28921a4438)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & DefaultValue) const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a0079f15e45f762cb62468a28921a4438"></a>

Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1adb508ab41d796ca2863c518504d67284)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & OutValue) const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1adb508ab41d796ca2863c518504d67284"></a>

Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a77a66a4169e88d27a3965cf23f263447)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a77a66a4169e88d27a3965cf23f263447"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` * `[`GetCrossplayPreferencesOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ae6f87a3213e993da084de77029f61f6d)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ae6f87a3213e993da084de77029f61f6d"></a>

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ae8c58a3802a65126d2796b83ab9710d9)`(const `[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` & NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ae8c58a3802a65126d2796b83ab9710d9"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.

#### `public inline void `[`SetCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad76136a2d0ff6bcd321f8bd2fa0fdaee)`(`[`FRHAPI_CrossplayPreferences`](RHAPI_CrossplayPreferences.md#structFRHAPI__CrossplayPreferences)` && NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ad76136a2d0ff6bcd321f8bd2fa0fdaee"></a>

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true using move semantics.

#### `public inline void `[`ClearCrossplayPreferences`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad9dacb94ea41b6f8efbf9c1c9ed3420e)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ad9dacb94ea41b6f8efbf9c1c9ed3420e"></a>

Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.

#### `public inline bool `[`IsCrossplayPreferencesSet`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a0db5881c81d0a60eba18e0065f635c4d)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a0db5881c81d0a60eba18e0065f635c4d"></a>

Checks whether CrossplayPreferences_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a67e8839dc5815d6bd53283e2299c1394)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a67e8839dc5815d6bd53283e2299c1394"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a4b01bd60d251698e1c801b8fa79d030f)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a4b01bd60d251698e1c801b8fa79d030f"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a1af343676a250b975678347b507dba0c)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a1af343676a250b975678347b507dba0c"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a77e8157f202a5ad51f743a00178f92a4)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a77e8157f202a5ad51f743a00178f92a4"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad580526dac614389d7901d43ba4d7ba8)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ad580526dac614389d7901d43ba4d7ba8"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1adbc276a9c1788b71b1b0640f4cacfdc3)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1adbc276a9c1788b71b1b0640f4cacfdc3"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a4fa7c9343daa4537935132227e07d4ae)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a4fa7c9343daa4537935132227e07d4ae"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a7abed25d8014343285c9a8af520774f4)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a7abed25d8014343285c9a8af520774f4"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1afc76499c6b23732fdd02a72402d7e752)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1afc76499c6b23732fdd02a72402d7e752"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1af5b2c1bd05fafedcc787875fca55b5b1)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1af5b2c1bd05fafedcc787875fca55b5b1"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FString & `[`GetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1af3596f9942f0d9dc7c28c80e50d21243)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1af3596f9942f0d9dc7c28c80e50d21243"></a>

Gets the value of Password_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ae9784848e74252929401ec72525d600f)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ae9784848e74252929401ec72525d600f"></a>

Gets the value of Password_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a10811610355908048d88d841c8a16667)`(const FString & DefaultValue) const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a10811610355908048d88d841c8a16667"></a>

Gets the value of Password_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a3f8a6b7193a915eadc71dbaed0d42845)`(FString & OutValue) const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a3f8a6b7193a915eadc71dbaed0d42845"></a>

Fills OutValue with the value of Password_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPasswordOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a9a8c0bd6e3ae45b929742bdb27826920)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a9a8c0bd6e3ae45b929742bdb27826920"></a>

Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPasswordOrNull`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1ad1e4a6e8a938c1cf84b6c26665a7c7cc)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1ad1e4a6e8a938c1cf84b6c26665a7c7cc"></a>

Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a02a56609839b92b82c929da432854667)`(const FString & NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a02a56609839b92b82c929da432854667"></a>

Sets the value of Password_Optional and also sets Password_IsSet to true.

#### `public inline void `[`SetPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a87e2bd4ccd25a598e1176b7c23948b31)`(FString && NewValue)` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a87e2bd4ccd25a598e1176b7c23948b31"></a>

Sets the value of Password_Optional and also sets Password_IsSet to true using move semantics.

#### `public inline void `[`ClearPassword`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1a6858175ae0bfebce9a67971e0cc3ca33)`()` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1a6858175ae0bfebce9a67971e0cc3ca33"></a>

Clears the value of Password_Optional and sets Password_IsSet to false.

#### `public inline bool `[`IsPasswordSet`](#structFRHAPI__SelfSessionPlayerUpdateRequest_1aa8855f2950fb13c365cd9a2ab6ba77ca)`() const` <a id="structFRHAPI__SelfSessionPlayerUpdateRequest_1aa8855f2950fb13c365cd9a2ab6ba77ca"></a>

Checks whether Password_Optional has been set.

