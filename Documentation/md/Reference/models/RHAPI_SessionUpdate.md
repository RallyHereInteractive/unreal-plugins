---
title: RHAPI_SessionUpdate
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionUpdate`](#structFRHAPI__SessionUpdate) | A request body to update information about a session resource.

## struct `FRHAPI_SessionUpdate` <a id="structFRHAPI__SessionUpdate"></a>

```
struct FRHAPI_SessionUpdate
  : public FRHAPI_Model
```

A request body to update information about a session resource.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`RegionId_Optional`](#structFRHAPI__SessionUpdate_1aa6a8ea4e32122c33643902ccae72a6cb) | Preferred region for the instance and match to take place in.
`public bool `[`RegionId_IsSet`](#structFRHAPI__SessionUpdate_1a9da573f2aec70094dcf75954ace79333) | true if RegionId_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionUpdate_1a75a25433fd525c331b5e6119f40c6816) | Leader Player or instance defined custom data about this session.
`public bool `[`CustomData_IsSet`](#structFRHAPI__SessionUpdate_1a2e97bffd938db16822e8f35b4b808ef6) | true if CustomData_Optional has been set to a value
`public bool `[`Joinable_Optional`](#structFRHAPI__SessionUpdate_1aacbfdec8b14c38f25c0a26d96e373f80) | Flag for if players can freely join this session without an invite.
`public bool `[`Joinable_IsSet`](#structFRHAPI__SessionUpdate_1a1771b6a886f26629df2e7c1f798c3632) | true if Joinable_Optional has been set to a value
`public TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > `[`Teams_Optional`](#structFRHAPI__SessionUpdate_1aea24906b7e7a2d1b3e5fc24dd2475623) | List of team size updates for this session. The length of the list represents the number of desired teams.
`public bool `[`Teams_IsSet`](#structFRHAPI__SessionUpdate_1aac6261a25e5317b6c4a1a31a7c4bb920) | true if Teams_Optional has been set to a value
`public FString `[`Password_Optional`](#structFRHAPI__SessionUpdate_1ad87dc561bd34385bd9b4ab8b2e9eee9b) | A password to join this session.
`public bool `[`Password_IsSet`](#structFRHAPI__SessionUpdate_1a6c0f390872003a6774d2569f074c0887) | true if Password_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SessionUpdate_1a92402f614620d0a1b3605ca95b8a2905)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionUpdate_1a551b8a5eb63887467a302d51293e4272)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1a171f6dd534c92a8505eb1188f83e0851)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1a1de9879e44c89bec49b498109401d2b9)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1aea117c4b0dad4e51e6bf0e5830e20c91)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRegionId`](#structFRHAPI__SessionUpdate_1abb52a4f959368b5ff17dfca55868ca1a)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__SessionUpdate_1a877ce8b7bb00229665a3e53cea0937ff)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__SessionUpdate_1a65a8b74e447d0d9a8dd826ae4269ebec)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRegionId`](#structFRHAPI__SessionUpdate_1a401142b51f0adb69e21ec5d9f5634fc2)`(const FString & NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline void `[`SetRegionId`](#structFRHAPI__SessionUpdate_1a1f6cde5e867eb7f9fdda5971bdf176b7)`(FString && NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.
`public inline void `[`ClearRegionId`](#structFRHAPI__SessionUpdate_1a9d0d41f29e5abde04971abc760e79cad)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline bool `[`IsRegionIdSet`](#structFRHAPI__SessionUpdate_1a33da1bb90b01e97abc06214f3b93f2fe)`() const` | Checks whether RegionId_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a798cfdb5cbc260e0d0b82237fcc8d503)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1ae6a937e9c382deac9a2bbc26ca3e1cf3)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a8c25c4a3be86788145d75a18286a6f6e)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a6ad53d6269bd9319b6aa9fd4d6dc57f7)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionUpdate_1a9fe4b23b8d98351476c08c06437452e2)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionUpdate_1ac6a6fee3213d7f571443a63117c00a53)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionUpdate_1ac7201f17e26632c0d05833448028b429)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionUpdate_1aa1167e54c679c4006fa5788fcafd7b84)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionUpdate_1ae42a27ea8701e456d8c7da0a840ab67a)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__SessionUpdate_1ac30a0f40e60cf77832530be5aaf0b9e5)`() const` | Checks whether CustomData_Optional has been set.
`public inline bool & `[`GetJoinable`](#structFRHAPI__SessionUpdate_1a54f485b157f9418581483bebb1e9c551)`()` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline const bool & `[`GetJoinable`](#structFRHAPI__SessionUpdate_1aa3e7d33980a81a2fbf6db5a82050817f)`() const` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline const bool & `[`GetJoinable`](#structFRHAPI__SessionUpdate_1acf8bcc77b45fb09d5a34f74b8f258b59)`(const bool & DefaultValue) const` | Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinable`](#structFRHAPI__SessionUpdate_1ab8ce51e436d1aec01168e2685464133f)`(bool & OutValue) const` | Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionUpdate_1aff24242e1582e36df049c7abbf383154)`()` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionUpdate_1ab104f608a14dee27c1810ffa5b11faa9)`() const` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinable`](#structFRHAPI__SessionUpdate_1a44e9bcc3963f6fd2c9409a812fe5e63a)`(const bool & NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.
`public inline void `[`SetJoinable`](#structFRHAPI__SessionUpdate_1a1f07dcf1e00e5b84e580b21e3f9d3fbd)`(bool && NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true using move semantics.
`public inline void `[`ClearJoinable`](#structFRHAPI__SessionUpdate_1a5e38954afb4281bfd14241a6b0faca88)`()` | Clears the value of Joinable_Optional and sets Joinable_IsSet to false.
`public inline bool `[`IsJoinableSet`](#structFRHAPI__SessionUpdate_1a01f8199fd03e955b7e29fc48decbafbb)`() const` | Checks whether Joinable_Optional has been set.
`public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__SessionUpdate_1a6c81424549450bef7b7430faa548f0e4)`() const` | Returns true if Joinable_Optional is set and matches the default value.
`public inline void `[`SetJoinableToDefault`](#structFRHAPI__SessionUpdate_1a0831036473b80aa18223036feeab2a6f)`()` | Sets the value of Joinable_Optional to its default and also sets Joinable_IsSet to true.
`public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetTeams`](#structFRHAPI__SessionUpdate_1a416e3c1c0bdab649cf7d0808c4d3bf3d)`()` | Gets the value of Teams_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetTeams`](#structFRHAPI__SessionUpdate_1af6c422557c8c40f2940563499f439d79)`() const` | Gets the value of Teams_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetTeams`](#structFRHAPI__SessionUpdate_1aff3e0fb8526863a471e316f7dfca9d04)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & DefaultValue) const` | Gets the value of Teams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeams`](#structFRHAPI__SessionUpdate_1a958de74a0023e45b3d6fbd9526536623)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & OutValue) const` | Fills OutValue with the value of Teams_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetTeamsOrNull`](#structFRHAPI__SessionUpdate_1aa726aaa76ac043d2bd0cb1ce225f422e)`()` | Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetTeamsOrNull`](#structFRHAPI__SessionUpdate_1ac77633fd3887e39d847b2f24828630ae)`() const` | Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeams`](#structFRHAPI__SessionUpdate_1a4dfc73f5fff1d622501ad2ded10818a3)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & NewValue)` | Sets the value of Teams_Optional and also sets Teams_IsSet to true.
`public inline void `[`SetTeams`](#structFRHAPI__SessionUpdate_1a9b6f391a708d219f7f7eee092ef4853f)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > && NewValue)` | Sets the value of Teams_Optional and also sets Teams_IsSet to true using move semantics.
`public inline void `[`ClearTeams`](#structFRHAPI__SessionUpdate_1a25c2f946c12657cbf3ecd48755f2b141)`()` | Clears the value of Teams_Optional and sets Teams_IsSet to false.
`public inline bool `[`IsTeamsSet`](#structFRHAPI__SessionUpdate_1aeebf249d5d2ea99471be863fbcdcc3ab)`() const` | Checks whether Teams_Optional has been set.
`public inline FString & `[`GetPassword`](#structFRHAPI__SessionUpdate_1a5fad12fc7d319f8cb0e68a0dfbb49044)`()` | Gets the value of Password_Optional, regardless of it having been set.
`public inline const FString & `[`GetPassword`](#structFRHAPI__SessionUpdate_1aec008dd4e24e035ab8d6b943ff834278)`() const` | Gets the value of Password_Optional, regardless of it having been set.
`public inline const FString & `[`GetPassword`](#structFRHAPI__SessionUpdate_1ae50f3df89bf5924cca06f405779887d5)`(const FString & DefaultValue) const` | Gets the value of Password_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPassword`](#structFRHAPI__SessionUpdate_1aef76f832fce8c3c0de46b708ebe0a028)`(FString & OutValue) const` | Fills OutValue with the value of Password_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPasswordOrNull`](#structFRHAPI__SessionUpdate_1a8f084df85012ef4c4061ec4635c48f1a)`()` | Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPasswordOrNull`](#structFRHAPI__SessionUpdate_1abcf246e16673eadf44a35293713c3568)`() const` | Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPassword`](#structFRHAPI__SessionUpdate_1a9248f190b5be5597fed91faf404df2fa)`(const FString & NewValue)` | Sets the value of Password_Optional and also sets Password_IsSet to true.
`public inline void `[`SetPassword`](#structFRHAPI__SessionUpdate_1ae6b53cf6942dddc717770b7f31f1f154)`(FString && NewValue)` | Sets the value of Password_Optional and also sets Password_IsSet to true using move semantics.
`public inline void `[`ClearPassword`](#structFRHAPI__SessionUpdate_1a97e1dde9469af932d4083b01fbe2a2fd)`()` | Clears the value of Password_Optional and sets Password_IsSet to false.
`public inline bool `[`IsPasswordSet`](#structFRHAPI__SessionUpdate_1a6cbae1f2dfb99b4fefd6e07765541a12)`() const` | Checks whether Password_Optional has been set.

### Members

#### `public FString `[`RegionId_Optional`](#structFRHAPI__SessionUpdate_1aa6a8ea4e32122c33643902ccae72a6cb) <a id="structFRHAPI__SessionUpdate_1aa6a8ea4e32122c33643902ccae72a6cb"></a>

Preferred region for the instance and match to take place in.

#### `public bool `[`RegionId_IsSet`](#structFRHAPI__SessionUpdate_1a9da573f2aec70094dcf75954ace79333) <a id="structFRHAPI__SessionUpdate_1a9da573f2aec70094dcf75954ace79333"></a>

true if RegionId_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionUpdate_1a75a25433fd525c331b5e6119f40c6816) <a id="structFRHAPI__SessionUpdate_1a75a25433fd525c331b5e6119f40c6816"></a>

Leader Player or instance defined custom data about this session.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__SessionUpdate_1a2e97bffd938db16822e8f35b4b808ef6) <a id="structFRHAPI__SessionUpdate_1a2e97bffd938db16822e8f35b4b808ef6"></a>

true if CustomData_Optional has been set to a value

#### `public bool `[`Joinable_Optional`](#structFRHAPI__SessionUpdate_1aacbfdec8b14c38f25c0a26d96e373f80) <a id="structFRHAPI__SessionUpdate_1aacbfdec8b14c38f25c0a26d96e373f80"></a>

Flag for if players can freely join this session without an invite.

#### `public bool `[`Joinable_IsSet`](#structFRHAPI__SessionUpdate_1a1771b6a886f26629df2e7c1f798c3632) <a id="structFRHAPI__SessionUpdate_1a1771b6a886f26629df2e7c1f798c3632"></a>

true if Joinable_Optional has been set to a value

#### `public TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > `[`Teams_Optional`](#structFRHAPI__SessionUpdate_1aea24906b7e7a2d1b3e5fc24dd2475623) <a id="structFRHAPI__SessionUpdate_1aea24906b7e7a2d1b3e5fc24dd2475623"></a>

List of team size updates for this session. The length of the list represents the number of desired teams.

#### `public bool `[`Teams_IsSet`](#structFRHAPI__SessionUpdate_1aac6261a25e5317b6c4a1a31a7c4bb920) <a id="structFRHAPI__SessionUpdate_1aac6261a25e5317b6c4a1a31a7c4bb920"></a>

true if Teams_Optional has been set to a value

#### `public FString `[`Password_Optional`](#structFRHAPI__SessionUpdate_1ad87dc561bd34385bd9b4ab8b2e9eee9b) <a id="structFRHAPI__SessionUpdate_1ad87dc561bd34385bd9b4ab8b2e9eee9b"></a>

A password to join this session.

#### `public bool `[`Password_IsSet`](#structFRHAPI__SessionUpdate_1a6c0f390872003a6774d2569f074c0887) <a id="structFRHAPI__SessionUpdate_1a6c0f390872003a6774d2569f074c0887"></a>

true if Password_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionUpdate_1a92402f614620d0a1b3605ca95b8a2905)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionUpdate_1a92402f614620d0a1b3605ca95b8a2905"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionUpdate_1a551b8a5eb63887467a302d51293e4272)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SessionUpdate_1a551b8a5eb63887467a302d51293e4272"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1a171f6dd534c92a8505eb1188f83e0851)`()` <a id="structFRHAPI__SessionUpdate_1a171f6dd534c92a8505eb1188f83e0851"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1a1de9879e44c89bec49b498109401d2b9)`() const` <a id="structFRHAPI__SessionUpdate_1a1de9879e44c89bec49b498109401d2b9"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1aea117c4b0dad4e51e6bf0e5830e20c91)`(const FString & DefaultValue) const` <a id="structFRHAPI__SessionUpdate_1aea117c4b0dad4e51e6bf0e5830e20c91"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRegionId`](#structFRHAPI__SessionUpdate_1abb52a4f959368b5ff17dfca55868ca1a)`(FString & OutValue) const` <a id="structFRHAPI__SessionUpdate_1abb52a4f959368b5ff17dfca55868ca1a"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__SessionUpdate_1a877ce8b7bb00229665a3e53cea0937ff)`()` <a id="structFRHAPI__SessionUpdate_1a877ce8b7bb00229665a3e53cea0937ff"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__SessionUpdate_1a65a8b74e447d0d9a8dd826ae4269ebec)`() const` <a id="structFRHAPI__SessionUpdate_1a65a8b74e447d0d9a8dd826ae4269ebec"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRegionId`](#structFRHAPI__SessionUpdate_1a401142b51f0adb69e21ec5d9f5634fc2)`(const FString & NewValue)` <a id="structFRHAPI__SessionUpdate_1a401142b51f0adb69e21ec5d9f5634fc2"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

#### `public inline void `[`SetRegionId`](#structFRHAPI__SessionUpdate_1a1f6cde5e867eb7f9fdda5971bdf176b7)`(FString && NewValue)` <a id="structFRHAPI__SessionUpdate_1a1f6cde5e867eb7f9fdda5971bdf176b7"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRegionId`](#structFRHAPI__SessionUpdate_1a9d0d41f29e5abde04971abc760e79cad)`()` <a id="structFRHAPI__SessionUpdate_1a9d0d41f29e5abde04971abc760e79cad"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

#### `public inline bool `[`IsRegionIdSet`](#structFRHAPI__SessionUpdate_1a33da1bb90b01e97abc06214f3b93f2fe)`() const` <a id="structFRHAPI__SessionUpdate_1a33da1bb90b01e97abc06214f3b93f2fe"></a>

Checks whether RegionId_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a798cfdb5cbc260e0d0b82237fcc8d503)`()` <a id="structFRHAPI__SessionUpdate_1a798cfdb5cbc260e0d0b82237fcc8d503"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1ae6a937e9c382deac9a2bbc26ca3e1cf3)`() const` <a id="structFRHAPI__SessionUpdate_1ae6a937e9c382deac9a2bbc26ca3e1cf3"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a8c25c4a3be86788145d75a18286a6f6e)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionUpdate_1a8c25c4a3be86788145d75a18286a6f6e"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a6ad53d6269bd9319b6aa9fd4d6dc57f7)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionUpdate_1a6ad53d6269bd9319b6aa9fd4d6dc57f7"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionUpdate_1a9fe4b23b8d98351476c08c06437452e2)`()` <a id="structFRHAPI__SessionUpdate_1a9fe4b23b8d98351476c08c06437452e2"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionUpdate_1ac6a6fee3213d7f571443a63117c00a53)`() const` <a id="structFRHAPI__SessionUpdate_1ac6a6fee3213d7f571443a63117c00a53"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionUpdate_1ac7201f17e26632c0d05833448028b429)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__SessionUpdate_1ac7201f17e26632c0d05833448028b429"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionUpdate_1aa1167e54c679c4006fa5788fcafd7b84)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__SessionUpdate_1aa1167e54c679c4006fa5788fcafd7b84"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionUpdate_1ae42a27ea8701e456d8c7da0a840ab67a)`()` <a id="structFRHAPI__SessionUpdate_1ae42a27ea8701e456d8c7da0a840ab67a"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__SessionUpdate_1ac30a0f40e60cf77832530be5aaf0b9e5)`() const` <a id="structFRHAPI__SessionUpdate_1ac30a0f40e60cf77832530be5aaf0b9e5"></a>

Checks whether CustomData_Optional has been set.

#### `public inline bool & `[`GetJoinable`](#structFRHAPI__SessionUpdate_1a54f485b157f9418581483bebb1e9c551)`()` <a id="structFRHAPI__SessionUpdate_1a54f485b157f9418581483bebb1e9c551"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetJoinable`](#structFRHAPI__SessionUpdate_1aa3e7d33980a81a2fbf6db5a82050817f)`() const` <a id="structFRHAPI__SessionUpdate_1aa3e7d33980a81a2fbf6db5a82050817f"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetJoinable`](#structFRHAPI__SessionUpdate_1acf8bcc77b45fb09d5a34f74b8f258b59)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionUpdate_1acf8bcc77b45fb09d5a34f74b8f258b59"></a>

Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinable`](#structFRHAPI__SessionUpdate_1ab8ce51e436d1aec01168e2685464133f)`(bool & OutValue) const` <a id="structFRHAPI__SessionUpdate_1ab8ce51e436d1aec01168e2685464133f"></a>

Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionUpdate_1aff24242e1582e36df049c7abbf383154)`()` <a id="structFRHAPI__SessionUpdate_1aff24242e1582e36df049c7abbf383154"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionUpdate_1ab104f608a14dee27c1810ffa5b11faa9)`() const` <a id="structFRHAPI__SessionUpdate_1ab104f608a14dee27c1810ffa5b11faa9"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetJoinable`](#structFRHAPI__SessionUpdate_1a44e9bcc3963f6fd2c9409a812fe5e63a)`(const bool & NewValue)` <a id="structFRHAPI__SessionUpdate_1a44e9bcc3963f6fd2c9409a812fe5e63a"></a>

Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.

#### `public inline void `[`SetJoinable`](#structFRHAPI__SessionUpdate_1a1f07dcf1e00e5b84e580b21e3f9d3fbd)`(bool && NewValue)` <a id="structFRHAPI__SessionUpdate_1a1f07dcf1e00e5b84e580b21e3f9d3fbd"></a>

Sets the value of Joinable_Optional and also sets Joinable_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinable`](#structFRHAPI__SessionUpdate_1a5e38954afb4281bfd14241a6b0faca88)`()` <a id="structFRHAPI__SessionUpdate_1a5e38954afb4281bfd14241a6b0faca88"></a>

Clears the value of Joinable_Optional and sets Joinable_IsSet to false.

#### `public inline bool `[`IsJoinableSet`](#structFRHAPI__SessionUpdate_1a01f8199fd03e955b7e29fc48decbafbb)`() const` <a id="structFRHAPI__SessionUpdate_1a01f8199fd03e955b7e29fc48decbafbb"></a>

Checks whether Joinable_Optional has been set.

#### `public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__SessionUpdate_1a6c81424549450bef7b7430faa548f0e4)`() const` <a id="structFRHAPI__SessionUpdate_1a6c81424549450bef7b7430faa548f0e4"></a>

Returns true if Joinable_Optional is set and matches the default value.

#### `public inline void `[`SetJoinableToDefault`](#structFRHAPI__SessionUpdate_1a0831036473b80aa18223036feeab2a6f)`()` <a id="structFRHAPI__SessionUpdate_1a0831036473b80aa18223036feeab2a6f"></a>

Sets the value of Joinable_Optional to its default and also sets Joinable_IsSet to true.

#### `public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetTeams`](#structFRHAPI__SessionUpdate_1a416e3c1c0bdab649cf7d0808c4d3bf3d)`()` <a id="structFRHAPI__SessionUpdate_1a416e3c1c0bdab649cf7d0808c4d3bf3d"></a>

Gets the value of Teams_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetTeams`](#structFRHAPI__SessionUpdate_1af6c422557c8c40f2940563499f439d79)`() const` <a id="structFRHAPI__SessionUpdate_1af6c422557c8c40f2940563499f439d79"></a>

Gets the value of Teams_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetTeams`](#structFRHAPI__SessionUpdate_1aff3e0fb8526863a471e316f7dfca9d04)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & DefaultValue) const` <a id="structFRHAPI__SessionUpdate_1aff3e0fb8526863a471e316f7dfca9d04"></a>

Gets the value of Teams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTeams`](#structFRHAPI__SessionUpdate_1a958de74a0023e45b3d6fbd9526536623)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & OutValue) const` <a id="structFRHAPI__SessionUpdate_1a958de74a0023e45b3d6fbd9526536623"></a>

Fills OutValue with the value of Teams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetTeamsOrNull`](#structFRHAPI__SessionUpdate_1aa726aaa76ac043d2bd0cb1ce225f422e)`()` <a id="structFRHAPI__SessionUpdate_1aa726aaa76ac043d2bd0cb1ce225f422e"></a>

Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetTeamsOrNull`](#structFRHAPI__SessionUpdate_1ac77633fd3887e39d847b2f24828630ae)`() const` <a id="structFRHAPI__SessionUpdate_1ac77633fd3887e39d847b2f24828630ae"></a>

Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTeams`](#structFRHAPI__SessionUpdate_1a4dfc73f5fff1d622501ad2ded10818a3)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & NewValue)` <a id="structFRHAPI__SessionUpdate_1a4dfc73f5fff1d622501ad2ded10818a3"></a>

Sets the value of Teams_Optional and also sets Teams_IsSet to true.

#### `public inline void `[`SetTeams`](#structFRHAPI__SessionUpdate_1a9b6f391a708d219f7f7eee092ef4853f)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > && NewValue)` <a id="structFRHAPI__SessionUpdate_1a9b6f391a708d219f7f7eee092ef4853f"></a>

Sets the value of Teams_Optional and also sets Teams_IsSet to true using move semantics.

#### `public inline void `[`ClearTeams`](#structFRHAPI__SessionUpdate_1a25c2f946c12657cbf3ecd48755f2b141)`()` <a id="structFRHAPI__SessionUpdate_1a25c2f946c12657cbf3ecd48755f2b141"></a>

Clears the value of Teams_Optional and sets Teams_IsSet to false.

#### `public inline bool `[`IsTeamsSet`](#structFRHAPI__SessionUpdate_1aeebf249d5d2ea99471be863fbcdcc3ab)`() const` <a id="structFRHAPI__SessionUpdate_1aeebf249d5d2ea99471be863fbcdcc3ab"></a>

Checks whether Teams_Optional has been set.

#### `public inline FString & `[`GetPassword`](#structFRHAPI__SessionUpdate_1a5fad12fc7d319f8cb0e68a0dfbb49044)`()` <a id="structFRHAPI__SessionUpdate_1a5fad12fc7d319f8cb0e68a0dfbb49044"></a>

Gets the value of Password_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPassword`](#structFRHAPI__SessionUpdate_1aec008dd4e24e035ab8d6b943ff834278)`() const` <a id="structFRHAPI__SessionUpdate_1aec008dd4e24e035ab8d6b943ff834278"></a>

Gets the value of Password_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPassword`](#structFRHAPI__SessionUpdate_1ae50f3df89bf5924cca06f405779887d5)`(const FString & DefaultValue) const` <a id="structFRHAPI__SessionUpdate_1ae50f3df89bf5924cca06f405779887d5"></a>

Gets the value of Password_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPassword`](#structFRHAPI__SessionUpdate_1aef76f832fce8c3c0de46b708ebe0a028)`(FString & OutValue) const` <a id="structFRHAPI__SessionUpdate_1aef76f832fce8c3c0de46b708ebe0a028"></a>

Fills OutValue with the value of Password_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPasswordOrNull`](#structFRHAPI__SessionUpdate_1a8f084df85012ef4c4061ec4635c48f1a)`()` <a id="structFRHAPI__SessionUpdate_1a8f084df85012ef4c4061ec4635c48f1a"></a>

Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPasswordOrNull`](#structFRHAPI__SessionUpdate_1abcf246e16673eadf44a35293713c3568)`() const` <a id="structFRHAPI__SessionUpdate_1abcf246e16673eadf44a35293713c3568"></a>

Returns a pointer to Password_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPassword`](#structFRHAPI__SessionUpdate_1a9248f190b5be5597fed91faf404df2fa)`(const FString & NewValue)` <a id="structFRHAPI__SessionUpdate_1a9248f190b5be5597fed91faf404df2fa"></a>

Sets the value of Password_Optional and also sets Password_IsSet to true.

#### `public inline void `[`SetPassword`](#structFRHAPI__SessionUpdate_1ae6b53cf6942dddc717770b7f31f1f154)`(FString && NewValue)` <a id="structFRHAPI__SessionUpdate_1ae6b53cf6942dddc717770b7f31f1f154"></a>

Sets the value of Password_Optional and also sets Password_IsSet to true using move semantics.

#### `public inline void `[`ClearPassword`](#structFRHAPI__SessionUpdate_1a97e1dde9469af932d4083b01fbe2a2fd)`()` <a id="structFRHAPI__SessionUpdate_1a97e1dde9469af932d4083b01fbe2a2fd"></a>

Clears the value of Password_Optional and sets Password_IsSet to false.

#### `public inline bool `[`IsPasswordSet`](#structFRHAPI__SessionUpdate_1a6cbae1f2dfb99b4fefd6e07765541a12)`() const` <a id="structFRHAPI__SessionUpdate_1a6cbae1f2dfb99b4fefd6e07765541a12"></a>

Checks whether Password_Optional has been set.

