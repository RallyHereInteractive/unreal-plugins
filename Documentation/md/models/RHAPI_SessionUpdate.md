# group `RHAPI_SessionUpdate` <a id="group__RHAPI__SessionUpdate"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__SessionUpdate_1a92402f614620d0a1b3605ca95b8a2905)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionUpdate_1a8475ec92a18311bdd5b517fcee91a261)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1a89c91fcd33810a8033ff794ad01923ab)`()` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1aead7d3b8758e4d3009ae50a728814bf9)`() const` | Gets the value of RegionId_Optional, regardless of it having been set.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1a7a63b0205dd6e8ec13ff38eae4bc7729)`(const FString & DefaultValue) const` | Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRegionId`](#structFRHAPI__SessionUpdate_1abb52a4f959368b5ff17dfca55868ca1a)`(FString & OutValue) const` | Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__SessionUpdate_1a98aa631f19fe9d833553ce00e76784c9)`()` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__SessionUpdate_1a3c305f88622374211674d0460ffbe2ec)`() const` | Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRegionId`](#structFRHAPI__SessionUpdate_1a401142b51f0adb69e21ec5d9f5634fc2)`(const FString & NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.
`public inline void `[`SetRegionId`](#structFRHAPI__SessionUpdate_1a1f6cde5e867eb7f9fdda5971bdf176b7)`(FString && NewValue)` | Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.
`public inline void `[`ClearRegionId`](#structFRHAPI__SessionUpdate_1a9d0d41f29e5abde04971abc760e79cad)`()` | Clears the value of RegionId_Optional and sets RegionId_IsSet to false.
`public inline bool `[`IsRegionIdSet`](#structFRHAPI__SessionUpdate_1a33da1bb90b01e97abc06214f3b93f2fe)`() const` | Checks whether RegionId_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a90c555e3270441fd39ca37b48f42e4b7)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a25f19ba461efb88d2e796043b704acbe)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1ad55370ef9e60177045854e7ef98dce12)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a6ad53d6269bd9319b6aa9fd4d6dc57f7)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionUpdate_1a511d62a037fe7af840ad0a35146fa553)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionUpdate_1a24df114a5fcae9e12a1c2d0c35d9ab5e)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionUpdate_1ac7201f17e26632c0d05833448028b429)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionUpdate_1aa1167e54c679c4006fa5788fcafd7b84)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionUpdate_1ae42a27ea8701e456d8c7da0a840ab67a)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__SessionUpdate_1ac30a0f40e60cf77832530be5aaf0b9e5)`() const` | Checks whether CustomData_Optional has been set.
`public inline bool & `[`GetJoinable`](#structFRHAPI__SessionUpdate_1a02c087ef532461a4a67965edf157e2be)`()` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline const bool & `[`GetJoinable`](#structFRHAPI__SessionUpdate_1a76ddc37b2559202fb20415df8dd2b6b7)`() const` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline const bool & `[`GetJoinable`](#structFRHAPI__SessionUpdate_1a702ccd3fd1429a1fa75cc224af6609f2)`(const bool & DefaultValue) const` | Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinable`](#structFRHAPI__SessionUpdate_1ab8ce51e436d1aec01168e2685464133f)`(bool & OutValue) const` | Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionUpdate_1a72e87a8e9e412964af2f81946e6adbb4)`()` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionUpdate_1a81dd7dfa0fc643e2c7f136d667fe5112)`() const` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinable`](#structFRHAPI__SessionUpdate_1a44e9bcc3963f6fd2c9409a812fe5e63a)`(const bool & NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.
`public inline void `[`SetJoinable`](#structFRHAPI__SessionUpdate_1a1f07dcf1e00e5b84e580b21e3f9d3fbd)`(bool && NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true using move semantics.
`public inline void `[`ClearJoinable`](#structFRHAPI__SessionUpdate_1a5e38954afb4281bfd14241a6b0faca88)`()` | Clears the value of Joinable_Optional and sets Joinable_IsSet to false.
`public inline bool `[`IsJoinableSet`](#structFRHAPI__SessionUpdate_1a01f8199fd03e955b7e29fc48decbafbb)`() const` | Checks whether Joinable_Optional has been set.
`public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__SessionUpdate_1a6c81424549450bef7b7430faa548f0e4)`() const` | Returns true if Joinable_Optional is set and matches the default value.
`public inline void `[`SetJoinableToDefault`](#structFRHAPI__SessionUpdate_1a0831036473b80aa18223036feeab2a6f)`()` | Sets the value of Joinable_Optional to its default and also sets Joinable_IsSet to true.
`public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetTeams`](#structFRHAPI__SessionUpdate_1a9ce41bf148bbb238b5708bc07e7d727c)`()` | Gets the value of Teams_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetTeams`](#structFRHAPI__SessionUpdate_1ab8e9afa010557fde834eca1410959bfe)`() const` | Gets the value of Teams_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetTeams`](#structFRHAPI__SessionUpdate_1aa15e021759eb93c5b33e423195e01d36)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & DefaultValue) const` | Gets the value of Teams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeams`](#structFRHAPI__SessionUpdate_1a958de74a0023e45b3d6fbd9526536623)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & OutValue) const` | Fills OutValue with the value of Teams_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetTeamsOrNull`](#structFRHAPI__SessionUpdate_1aa600a05a479e733189aeca7a9f236fd5)`()` | Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetTeamsOrNull`](#structFRHAPI__SessionUpdate_1a4422c103e603e65d9d2805fcbe7e7ace)`() const` | Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeams`](#structFRHAPI__SessionUpdate_1a4dfc73f5fff1d622501ad2ded10818a3)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & NewValue)` | Sets the value of Teams_Optional and also sets Teams_IsSet to true.
`public inline void `[`SetTeams`](#structFRHAPI__SessionUpdate_1a9b6f391a708d219f7f7eee092ef4853f)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > && NewValue)` | Sets the value of Teams_Optional and also sets Teams_IsSet to true using move semantics.
`public inline void `[`ClearTeams`](#structFRHAPI__SessionUpdate_1a25c2f946c12657cbf3ecd48755f2b141)`()` | Clears the value of Teams_Optional and sets Teams_IsSet to false.
`public inline bool `[`IsTeamsSet`](#structFRHAPI__SessionUpdate_1aeebf249d5d2ea99471be863fbcdcc3ab)`() const` | Checks whether Teams_Optional has been set.

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

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionUpdate_1a92402f614620d0a1b3605ca95b8a2905)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionUpdate_1a92402f614620d0a1b3605ca95b8a2905"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionUpdate_1a8475ec92a18311bdd5b517fcee91a261)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SessionUpdate_1a8475ec92a18311bdd5b517fcee91a261"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1a89c91fcd33810a8033ff794ad01923ab)`()` <a id="structFRHAPI__SessionUpdate_1a89c91fcd33810a8033ff794ad01923ab"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1aead7d3b8758e4d3009ae50a728814bf9)`() const` <a id="structFRHAPI__SessionUpdate_1aead7d3b8758e4d3009ae50a728814bf9"></a>

Gets the value of RegionId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__SessionUpdate_1a7a63b0205dd6e8ec13ff38eae4bc7729)`(const FString & DefaultValue) const` <a id="structFRHAPI__SessionUpdate_1a7a63b0205dd6e8ec13ff38eae4bc7729"></a>

Gets the value of RegionId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRegionId`](#structFRHAPI__SessionUpdate_1abb52a4f959368b5ff17dfca55868ca1a)`(FString & OutValue) const` <a id="structFRHAPI__SessionUpdate_1abb52a4f959368b5ff17dfca55868ca1a"></a>

Fills OutValue with the value of RegionId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRegionIdOrNull`](#structFRHAPI__SessionUpdate_1a98aa631f19fe9d833553ce00e76784c9)`()` <a id="structFRHAPI__SessionUpdate_1a98aa631f19fe9d833553ce00e76784c9"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRegionIdOrNull`](#structFRHAPI__SessionUpdate_1a3c305f88622374211674d0460ffbe2ec)`() const` <a id="structFRHAPI__SessionUpdate_1a3c305f88622374211674d0460ffbe2ec"></a>

Returns a pointer to RegionId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRegionId`](#structFRHAPI__SessionUpdate_1a401142b51f0adb69e21ec5d9f5634fc2)`(const FString & NewValue)` <a id="structFRHAPI__SessionUpdate_1a401142b51f0adb69e21ec5d9f5634fc2"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true.

#### `public inline void `[`SetRegionId`](#structFRHAPI__SessionUpdate_1a1f6cde5e867eb7f9fdda5971bdf176b7)`(FString && NewValue)` <a id="structFRHAPI__SessionUpdate_1a1f6cde5e867eb7f9fdda5971bdf176b7"></a>

Sets the value of RegionId_Optional and also sets RegionId_IsSet to true using move semantics.

#### `public inline void `[`ClearRegionId`](#structFRHAPI__SessionUpdate_1a9d0d41f29e5abde04971abc760e79cad)`()` <a id="structFRHAPI__SessionUpdate_1a9d0d41f29e5abde04971abc760e79cad"></a>

Clears the value of RegionId_Optional and sets RegionId_IsSet to false.

#### `public inline bool `[`IsRegionIdSet`](#structFRHAPI__SessionUpdate_1a33da1bb90b01e97abc06214f3b93f2fe)`() const` <a id="structFRHAPI__SessionUpdate_1a33da1bb90b01e97abc06214f3b93f2fe"></a>

Checks whether RegionId_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a90c555e3270441fd39ca37b48f42e4b7)`()` <a id="structFRHAPI__SessionUpdate_1a90c555e3270441fd39ca37b48f42e4b7"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a25f19ba461efb88d2e796043b704acbe)`() const` <a id="structFRHAPI__SessionUpdate_1a25f19ba461efb88d2e796043b704acbe"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionUpdate_1ad55370ef9e60177045854e7ef98dce12)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionUpdate_1ad55370ef9e60177045854e7ef98dce12"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__SessionUpdate_1a6ad53d6269bd9319b6aa9fd4d6dc57f7)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionUpdate_1a6ad53d6269bd9319b6aa9fd4d6dc57f7"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionUpdate_1a511d62a037fe7af840ad0a35146fa553)`()` <a id="structFRHAPI__SessionUpdate_1a511d62a037fe7af840ad0a35146fa553"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionUpdate_1a24df114a5fcae9e12a1c2d0c35d9ab5e)`() const` <a id="structFRHAPI__SessionUpdate_1a24df114a5fcae9e12a1c2d0c35d9ab5e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionUpdate_1ac7201f17e26632c0d05833448028b429)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__SessionUpdate_1ac7201f17e26632c0d05833448028b429"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionUpdate_1aa1167e54c679c4006fa5788fcafd7b84)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__SessionUpdate_1aa1167e54c679c4006fa5788fcafd7b84"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionUpdate_1ae42a27ea8701e456d8c7da0a840ab67a)`()` <a id="structFRHAPI__SessionUpdate_1ae42a27ea8701e456d8c7da0a840ab67a"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__SessionUpdate_1ac30a0f40e60cf77832530be5aaf0b9e5)`() const` <a id="structFRHAPI__SessionUpdate_1ac30a0f40e60cf77832530be5aaf0b9e5"></a>

Checks whether CustomData_Optional has been set.

#### `public inline bool & `[`GetJoinable`](#structFRHAPI__SessionUpdate_1a02c087ef532461a4a67965edf157e2be)`()` <a id="structFRHAPI__SessionUpdate_1a02c087ef532461a4a67965edf157e2be"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetJoinable`](#structFRHAPI__SessionUpdate_1a76ddc37b2559202fb20415df8dd2b6b7)`() const` <a id="structFRHAPI__SessionUpdate_1a76ddc37b2559202fb20415df8dd2b6b7"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetJoinable`](#structFRHAPI__SessionUpdate_1a702ccd3fd1429a1fa75cc224af6609f2)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionUpdate_1a702ccd3fd1429a1fa75cc224af6609f2"></a>

Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetJoinable`](#structFRHAPI__SessionUpdate_1ab8ce51e436d1aec01168e2685464133f)`(bool & OutValue) const` <a id="structFRHAPI__SessionUpdate_1ab8ce51e436d1aec01168e2685464133f"></a>

Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionUpdate_1a72e87a8e9e412964af2f81946e6adbb4)`()` <a id="structFRHAPI__SessionUpdate_1a72e87a8e9e412964af2f81946e6adbb4"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionUpdate_1a81dd7dfa0fc643e2c7f136d667fe5112)`() const` <a id="structFRHAPI__SessionUpdate_1a81dd7dfa0fc643e2c7f136d667fe5112"></a>

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

#### `public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetTeams`](#structFRHAPI__SessionUpdate_1a9ce41bf148bbb238b5708bc07e7d727c)`()` <a id="structFRHAPI__SessionUpdate_1a9ce41bf148bbb238b5708bc07e7d727c"></a>

Gets the value of Teams_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetTeams`](#structFRHAPI__SessionUpdate_1ab8e9afa010557fde834eca1410959bfe)`() const` <a id="structFRHAPI__SessionUpdate_1ab8e9afa010557fde834eca1410959bfe"></a>

Gets the value of Teams_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & `[`GetTeams`](#structFRHAPI__SessionUpdate_1aa15e021759eb93c5b33e423195e01d36)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & DefaultValue) const` <a id="structFRHAPI__SessionUpdate_1aa15e021759eb93c5b33e423195e01d36"></a>

Gets the value of Teams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTeams`](#structFRHAPI__SessionUpdate_1a958de74a0023e45b3d6fbd9526536623)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & OutValue) const` <a id="structFRHAPI__SessionUpdate_1a958de74a0023e45b3d6fbd9526536623"></a>

Fills OutValue with the value of Teams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetTeamsOrNull`](#structFRHAPI__SessionUpdate_1aa600a05a479e733189aeca7a9f236fd5)`()` <a id="structFRHAPI__SessionUpdate_1aa600a05a479e733189aeca7a9f236fd5"></a>

Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > * `[`GetTeamsOrNull`](#structFRHAPI__SessionUpdate_1a4422c103e603e65d9d2805fcbe7e7ace)`() const` <a id="structFRHAPI__SessionUpdate_1a4422c103e603e65d9d2805fcbe7e7ace"></a>

Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTeams`](#structFRHAPI__SessionUpdate_1a4dfc73f5fff1d622501ad2ded10818a3)`(const TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > & NewValue)` <a id="structFRHAPI__SessionUpdate_1a4dfc73f5fff1d622501ad2ded10818a3"></a>

Sets the value of Teams_Optional and also sets Teams_IsSet to true.

#### `public inline void `[`SetTeams`](#structFRHAPI__SessionUpdate_1a9b6f391a708d219f7f7eee092ef4853f)`(TArray< `[`FRHAPI_TeamUpdate`](RHAPI_TeamUpdate.md#structFRHAPI__TeamUpdate)` > && NewValue)` <a id="structFRHAPI__SessionUpdate_1a9b6f391a708d219f7f7eee092ef4853f"></a>

Sets the value of Teams_Optional and also sets Teams_IsSet to true using move semantics.

#### `public inline void `[`ClearTeams`](#structFRHAPI__SessionUpdate_1a25c2f946c12657cbf3ecd48755f2b141)`()` <a id="structFRHAPI__SessionUpdate_1a25c2f946c12657cbf3ecd48755f2b141"></a>

Clears the value of Teams_Optional and sets Teams_IsSet to false.

#### `public inline bool `[`IsTeamsSet`](#structFRHAPI__SessionUpdate_1aeebf249d5d2ea99471be863fbcdcc3ab)`() const` <a id="structFRHAPI__SessionUpdate_1aeebf249d5d2ea99471be863fbcdcc3ab"></a>

Checks whether Teams_Optional has been set.

