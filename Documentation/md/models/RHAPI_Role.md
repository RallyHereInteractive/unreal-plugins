# group `RHAPI_Role` <a id="group__RHAPI__Role"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Role`](#structFRHAPI__Role) | Role object that is used to define a role for a player.

## struct `FRHAPI_Role` <a id="structFRHAPI__Role"></a>

```
struct FRHAPI_Role
  : public FRHAPI_Model
```

Role object that is used to define a role for a player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`RoleId`](#structFRHAPI__Role_1a52f32f8c3152eec8e2eaba9bcfc8f8b5) | Unique Role ID.
`public int32 `[`LegacyRoleId_Optional`](#structFRHAPI__Role_1a512210e78afdd92164363acf1f45ad37) | Legacy role ID.
`public bool `[`LegacyRoleId_IsSet`](#structFRHAPI__Role_1a277884e986688574c5d8f8eec74995e8) | true if LegacyRoleId_Optional has been set to a value
`public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`CustomData_Optional`](#structFRHAPI__Role_1ab56bcc46d8e231e0c8970cf4b28806c4) | Custom data for the role.
`public bool `[`CustomData_IsSet`](#structFRHAPI__Role_1a7009c6fa9d36ddb72c54a9658b63e42d) | true if CustomData_Optional has been set to a value
`public ERHAPI_RoleAuthBypass `[`AuthBypass_Optional`](#structFRHAPI__Role_1a8e0230998648ffb297d56c4605a1332d) | Level of auth bypass for limited/locked modes.
`public bool `[`AuthBypass_IsSet`](#structFRHAPI__Role_1a950879446b1d18137f3af343f23fc8d1) | true if AuthBypass_Optional has been set to a value
`public TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > `[`LoginLootRewards_Optional`](#structFRHAPI__Role_1a1c62d305374f0b53aa1a88803d4be01e) | List of loot ids that are fulfilled for the player when they begin a new inventory session.
`public bool `[`LoginLootRewards_IsSet`](#structFRHAPI__Role_1a6e132dc93f9582659561567ad17f151c) | true if LoginLootRewards_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Role_1a4b5e65cf0b50898cc108867d2ae12b0a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Role_1ae6a4c5d7c71a62390f4c340e1574adf0)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetRoleId`](#structFRHAPI__Role_1a49452f02b34778848d259e045e851009)`()` | Gets the value of RoleId.
`public inline const FString & `[`GetRoleId`](#structFRHAPI__Role_1ac0647a02b144923a4cd8580a1dc2e57b)`() const` | Gets the value of RoleId.
`public inline void `[`SetRoleId`](#structFRHAPI__Role_1ae4b2e528fcbf901b946c58cae3982a27)`(const FString & NewValue)` | Sets the value of RoleId.
`public inline void `[`SetRoleId`](#structFRHAPI__Role_1ad032c152ad0db245805da556d52e55d7)`(FString && NewValue)` | Sets the value of RoleId using move semantics.
`public inline int32 & `[`GetLegacyRoleId`](#structFRHAPI__Role_1ab3eac045f013eecf2029f96ff2cd03dc)`()` | Gets the value of LegacyRoleId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacyRoleId`](#structFRHAPI__Role_1a99d57f2531fe82a19aa03c9edca6c709)`() const` | Gets the value of LegacyRoleId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacyRoleId`](#structFRHAPI__Role_1a9eb61280c86c3c3690ee3aa9ada492ae)`(const int32 & DefaultValue) const` | Gets the value of LegacyRoleId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacyRoleId`](#structFRHAPI__Role_1aaa13e90a1eb377ae654aa98c335b0d8e)`(int32 & OutValue) const` | Fills OutValue with the value of LegacyRoleId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLegacyRoleIdOrNull`](#structFRHAPI__Role_1a2949a41b24f5f822166beebc707c2655)`()` | Returns a pointer to LegacyRoleId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLegacyRoleIdOrNull`](#structFRHAPI__Role_1a1fdf365e291b5dcd3a96ad1215f3c0c5)`() const` | Returns a pointer to LegacyRoleId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacyRoleId`](#structFRHAPI__Role_1abe1a5927061258288037e217926d5b6a)`(const int32 & NewValue)` | Sets the value of LegacyRoleId_Optional and also sets LegacyRoleId_IsSet to true.
`public inline void `[`SetLegacyRoleId`](#structFRHAPI__Role_1a01395ed3fb1f18f5ca7de1efa92b1898)`(int32 && NewValue)` | Sets the value of LegacyRoleId_Optional and also sets LegacyRoleId_IsSet to true using move semantics.
`public inline void `[`ClearLegacyRoleId`](#structFRHAPI__Role_1a9cb12ab94b578441cf50b075f6f0078c)`()` | Clears the value of LegacyRoleId_Optional and sets LegacyRoleId_IsSet to false.
`public inline bool `[`IsLegacyRoleIdSet`](#structFRHAPI__Role_1ac104d3d9ae72ebd6f4acf58c894f294e)`() const` | Checks whether LegacyRoleId_Optional has been set.
`public inline bool `[`IsLegacyRoleIdDefaultValue`](#structFRHAPI__Role_1aef383ffe94891ed9193cc74582df277f)`() const` | Returns true if LegacyRoleId_Optional is set and matches the default value.
`public inline void `[`SetLegacyRoleIdToDefault`](#structFRHAPI__Role_1a92a947734678e4bb8bba0aee49b34012)`()` | Sets the value of LegacyRoleId_Optional to its default and also sets LegacyRoleId_IsSet to true.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1a6a89b0beabb5a58ef2732b747c52c3f5)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1a6f0ff8d950da4423d60febbad9613730)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1a07133ecd6ca89b5c37506def2ef52e2a)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__Role_1abb29df8d12a7138ea24fb4eb2846eec8)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__Role_1a8bf58372a5ac17505435fffd2d03e1d3)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__Role_1ae8305c6970feae2fff88f38b4e4064bb)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__Role_1a8aea3ff061fc436639626c68a8a9705b)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__Role_1ace70ad0698497d4473f6ad7bf7496def)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__Role_1ad396c9bca677e071fe8d14d0e7ec2c72)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__Role_1ab10b12ddfa7e1398fa3fd381bcc4a1fa)`() const` | Checks whether CustomData_Optional has been set.
`public inline ERHAPI_RoleAuthBypass & `[`GetAuthBypass`](#structFRHAPI__Role_1a96717a2f39eeab5e35efc25fc997d6fb)`()` | Gets the value of AuthBypass_Optional, regardless of it having been set.
`public inline const ERHAPI_RoleAuthBypass & `[`GetAuthBypass`](#structFRHAPI__Role_1a176cc7996b1a51c4db7eb9342e4e1577)`() const` | Gets the value of AuthBypass_Optional, regardless of it having been set.
`public inline const ERHAPI_RoleAuthBypass & `[`GetAuthBypass`](#structFRHAPI__Role_1a9a2f320042ee44649cfc88afcdefff58)`(const ERHAPI_RoleAuthBypass & DefaultValue) const` | Gets the value of AuthBypass_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAuthBypass`](#structFRHAPI__Role_1a8c7e8e6738df06e4828df0fbde8ee0f1)`(ERHAPI_RoleAuthBypass & OutValue) const` | Fills OutValue with the value of AuthBypass_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_RoleAuthBypass * `[`GetAuthBypassOrNull`](#structFRHAPI__Role_1a3c8cfc1bea5fb9275e3a34a0d442f6e3)`()` | Returns a pointer to AuthBypass_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_RoleAuthBypass * `[`GetAuthBypassOrNull`](#structFRHAPI__Role_1a588ea5b537363e4def3ece41944e694c)`() const` | Returns a pointer to AuthBypass_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAuthBypass`](#structFRHAPI__Role_1a38a135ed36e9e19a287b6b8bf3e841d0)`(const ERHAPI_RoleAuthBypass & NewValue)` | Sets the value of AuthBypass_Optional and also sets AuthBypass_IsSet to true.
`public inline void `[`SetAuthBypass`](#structFRHAPI__Role_1a0b679a8b8910c6a8c4d83617ea849b5d)`(ERHAPI_RoleAuthBypass && NewValue)` | Sets the value of AuthBypass_Optional and also sets AuthBypass_IsSet to true using move semantics.
`public inline void `[`ClearAuthBypass`](#structFRHAPI__Role_1a9385618ce915da9fa5f1fea764d32026)`()` | Clears the value of AuthBypass_Optional and sets AuthBypass_IsSet to false.
`public inline bool `[`IsAuthBypassSet`](#structFRHAPI__Role_1ad5b7a3bea5498473d734d10f55da91d6)`() const` | Checks whether AuthBypass_Optional has been set.
`public inline TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1a805c6b70ee2ffad8a88c03149517932e)`()` | Gets the value of LoginLootRewards_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1a8f4654ea8828956d45d8f0fdf90f6b13)`() const` | Gets the value of LoginLootRewards_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1a07cbb41171e5c00b2788825b09a536f7)`(const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & DefaultValue) const` | Gets the value of LoginLootRewards_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLoginLootRewards`](#structFRHAPI__Role_1a998822f05fb00274a284efc474ea5d86)`(TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & OutValue) const` | Fills OutValue with the value of LoginLootRewards_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > * `[`GetLoginLootRewardsOrNull`](#structFRHAPI__Role_1af6cfcf60f8016ac80ee796d724bdb123)`()` | Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > * `[`GetLoginLootRewardsOrNull`](#structFRHAPI__Role_1ac54b7b45797949988f31300ea59755a6)`() const` | Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLoginLootRewards`](#structFRHAPI__Role_1a6a0b2d094e7c9eda60fedf8c45b32e3b)`(const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & NewValue)` | Sets the value of LoginLootRewards_Optional and also sets LoginLootRewards_IsSet to true.
`public inline void `[`SetLoginLootRewards`](#structFRHAPI__Role_1a50cb6a350a9914f3a5709a20b082d24e)`(TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > && NewValue)` | Sets the value of LoginLootRewards_Optional and also sets LoginLootRewards_IsSet to true using move semantics.
`public inline void `[`ClearLoginLootRewards`](#structFRHAPI__Role_1aa842b6af31f9b729dc3d1783c58a143d)`()` | Clears the value of LoginLootRewards_Optional and sets LoginLootRewards_IsSet to false.
`public inline bool `[`IsLoginLootRewardsSet`](#structFRHAPI__Role_1a621379dbfe910df7b8358bd32d99952b)`() const` | Checks whether LoginLootRewards_Optional has been set.

### Members

#### `public FString `[`RoleId`](#structFRHAPI__Role_1a52f32f8c3152eec8e2eaba9bcfc8f8b5) <a id="structFRHAPI__Role_1a52f32f8c3152eec8e2eaba9bcfc8f8b5"></a>

Unique Role ID.

#### `public int32 `[`LegacyRoleId_Optional`](#structFRHAPI__Role_1a512210e78afdd92164363acf1f45ad37) <a id="structFRHAPI__Role_1a512210e78afdd92164363acf1f45ad37"></a>

Legacy role ID.

#### `public bool `[`LegacyRoleId_IsSet`](#structFRHAPI__Role_1a277884e986688574c5d8f8eec74995e8) <a id="structFRHAPI__Role_1a277884e986688574c5d8f8eec74995e8"></a>

true if LegacyRoleId_Optional has been set to a value

#### `public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`CustomData_Optional`](#structFRHAPI__Role_1ab56bcc46d8e231e0c8970cf4b28806c4) <a id="structFRHAPI__Role_1ab56bcc46d8e231e0c8970cf4b28806c4"></a>

Custom data for the role.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__Role_1a7009c6fa9d36ddb72c54a9658b63e42d) <a id="structFRHAPI__Role_1a7009c6fa9d36ddb72c54a9658b63e42d"></a>

true if CustomData_Optional has been set to a value

#### `public ERHAPI_RoleAuthBypass `[`AuthBypass_Optional`](#structFRHAPI__Role_1a8e0230998648ffb297d56c4605a1332d) <a id="structFRHAPI__Role_1a8e0230998648ffb297d56c4605a1332d"></a>

Level of auth bypass for limited/locked modes.

#### `public bool `[`AuthBypass_IsSet`](#structFRHAPI__Role_1a950879446b1d18137f3af343f23fc8d1) <a id="structFRHAPI__Role_1a950879446b1d18137f3af343f23fc8d1"></a>

true if AuthBypass_Optional has been set to a value

#### `public TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > `[`LoginLootRewards_Optional`](#structFRHAPI__Role_1a1c62d305374f0b53aa1a88803d4be01e) <a id="structFRHAPI__Role_1a1c62d305374f0b53aa1a88803d4be01e"></a>

List of loot ids that are fulfilled for the player when they begin a new inventory session.

#### `public bool `[`LoginLootRewards_IsSet`](#structFRHAPI__Role_1a6e132dc93f9582659561567ad17f151c) <a id="structFRHAPI__Role_1a6e132dc93f9582659561567ad17f151c"></a>

true if LoginLootRewards_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__Role_1a4b5e65cf0b50898cc108867d2ae12b0a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Role_1a4b5e65cf0b50898cc108867d2ae12b0a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Role_1ae6a4c5d7c71a62390f4c340e1574adf0)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Role_1ae6a4c5d7c71a62390f4c340e1574adf0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetRoleId`](#structFRHAPI__Role_1a49452f02b34778848d259e045e851009)`()` <a id="structFRHAPI__Role_1a49452f02b34778848d259e045e851009"></a>

Gets the value of RoleId.

#### `public inline const FString & `[`GetRoleId`](#structFRHAPI__Role_1ac0647a02b144923a4cd8580a1dc2e57b)`() const` <a id="structFRHAPI__Role_1ac0647a02b144923a4cd8580a1dc2e57b"></a>

Gets the value of RoleId.

#### `public inline void `[`SetRoleId`](#structFRHAPI__Role_1ae4b2e528fcbf901b946c58cae3982a27)`(const FString & NewValue)` <a id="structFRHAPI__Role_1ae4b2e528fcbf901b946c58cae3982a27"></a>

Sets the value of RoleId.

#### `public inline void `[`SetRoleId`](#structFRHAPI__Role_1ad032c152ad0db245805da556d52e55d7)`(FString && NewValue)` <a id="structFRHAPI__Role_1ad032c152ad0db245805da556d52e55d7"></a>

Sets the value of RoleId using move semantics.

#### `public inline int32 & `[`GetLegacyRoleId`](#structFRHAPI__Role_1ab3eac045f013eecf2029f96ff2cd03dc)`()` <a id="structFRHAPI__Role_1ab3eac045f013eecf2029f96ff2cd03dc"></a>

Gets the value of LegacyRoleId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLegacyRoleId`](#structFRHAPI__Role_1a99d57f2531fe82a19aa03c9edca6c709)`() const` <a id="structFRHAPI__Role_1a99d57f2531fe82a19aa03c9edca6c709"></a>

Gets the value of LegacyRoleId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLegacyRoleId`](#structFRHAPI__Role_1a9eb61280c86c3c3690ee3aa9ada492ae)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Role_1a9eb61280c86c3c3690ee3aa9ada492ae"></a>

Gets the value of LegacyRoleId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLegacyRoleId`](#structFRHAPI__Role_1aaa13e90a1eb377ae654aa98c335b0d8e)`(int32 & OutValue) const` <a id="structFRHAPI__Role_1aaa13e90a1eb377ae654aa98c335b0d8e"></a>

Fills OutValue with the value of LegacyRoleId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetLegacyRoleIdOrNull`](#structFRHAPI__Role_1a2949a41b24f5f822166beebc707c2655)`()` <a id="structFRHAPI__Role_1a2949a41b24f5f822166beebc707c2655"></a>

Returns a pointer to LegacyRoleId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetLegacyRoleIdOrNull`](#structFRHAPI__Role_1a1fdf365e291b5dcd3a96ad1215f3c0c5)`() const` <a id="structFRHAPI__Role_1a1fdf365e291b5dcd3a96ad1215f3c0c5"></a>

Returns a pointer to LegacyRoleId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLegacyRoleId`](#structFRHAPI__Role_1abe1a5927061258288037e217926d5b6a)`(const int32 & NewValue)` <a id="structFRHAPI__Role_1abe1a5927061258288037e217926d5b6a"></a>

Sets the value of LegacyRoleId_Optional and also sets LegacyRoleId_IsSet to true.

#### `public inline void `[`SetLegacyRoleId`](#structFRHAPI__Role_1a01395ed3fb1f18f5ca7de1efa92b1898)`(int32 && NewValue)` <a id="structFRHAPI__Role_1a01395ed3fb1f18f5ca7de1efa92b1898"></a>

Sets the value of LegacyRoleId_Optional and also sets LegacyRoleId_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacyRoleId`](#structFRHAPI__Role_1a9cb12ab94b578441cf50b075f6f0078c)`()` <a id="structFRHAPI__Role_1a9cb12ab94b578441cf50b075f6f0078c"></a>

Clears the value of LegacyRoleId_Optional and sets LegacyRoleId_IsSet to false.

#### `public inline bool `[`IsLegacyRoleIdSet`](#structFRHAPI__Role_1ac104d3d9ae72ebd6f4acf58c894f294e)`() const` <a id="structFRHAPI__Role_1ac104d3d9ae72ebd6f4acf58c894f294e"></a>

Checks whether LegacyRoleId_Optional has been set.

#### `public inline bool `[`IsLegacyRoleIdDefaultValue`](#structFRHAPI__Role_1aef383ffe94891ed9193cc74582df277f)`() const` <a id="structFRHAPI__Role_1aef383ffe94891ed9193cc74582df277f"></a>

Returns true if LegacyRoleId_Optional is set and matches the default value.

#### `public inline void `[`SetLegacyRoleIdToDefault`](#structFRHAPI__Role_1a92a947734678e4bb8bba0aee49b34012)`()` <a id="structFRHAPI__Role_1a92a947734678e4bb8bba0aee49b34012"></a>

Sets the value of LegacyRoleId_Optional to its default and also sets LegacyRoleId_IsSet to true.

#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1a6a89b0beabb5a58ef2732b747c52c3f5)`()` <a id="structFRHAPI__Role_1a6a89b0beabb5a58ef2732b747c52c3f5"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1a6f0ff8d950da4423d60febbad9613730)`() const` <a id="structFRHAPI__Role_1a6f0ff8d950da4423d60febbad9613730"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1a07133ecd6ca89b5c37506def2ef52e2a)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` <a id="structFRHAPI__Role_1a07133ecd6ca89b5c37506def2ef52e2a"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__Role_1abb29df8d12a7138ea24fb4eb2846eec8)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` <a id="structFRHAPI__Role_1abb29df8d12a7138ea24fb4eb2846eec8"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__Role_1a8bf58372a5ac17505435fffd2d03e1d3)`()` <a id="structFRHAPI__Role_1a8bf58372a5ac17505435fffd2d03e1d3"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__Role_1ae8305c6970feae2fff88f38b4e4064bb)`() const` <a id="structFRHAPI__Role_1ae8305c6970feae2fff88f38b4e4064bb"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__Role_1a8aea3ff061fc436639626c68a8a9705b)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` <a id="structFRHAPI__Role_1a8aea3ff061fc436639626c68a8a9705b"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__Role_1ace70ad0698497d4473f6ad7bf7496def)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` <a id="structFRHAPI__Role_1ace70ad0698497d4473f6ad7bf7496def"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__Role_1ad396c9bca677e071fe8d14d0e7ec2c72)`()` <a id="structFRHAPI__Role_1ad396c9bca677e071fe8d14d0e7ec2c72"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__Role_1ab10b12ddfa7e1398fa3fd381bcc4a1fa)`() const` <a id="structFRHAPI__Role_1ab10b12ddfa7e1398fa3fd381bcc4a1fa"></a>

Checks whether CustomData_Optional has been set.

#### `public inline ERHAPI_RoleAuthBypass & `[`GetAuthBypass`](#structFRHAPI__Role_1a96717a2f39eeab5e35efc25fc997d6fb)`()` <a id="structFRHAPI__Role_1a96717a2f39eeab5e35efc25fc997d6fb"></a>

Gets the value of AuthBypass_Optional, regardless of it having been set.

#### `public inline const ERHAPI_RoleAuthBypass & `[`GetAuthBypass`](#structFRHAPI__Role_1a176cc7996b1a51c4db7eb9342e4e1577)`() const` <a id="structFRHAPI__Role_1a176cc7996b1a51c4db7eb9342e4e1577"></a>

Gets the value of AuthBypass_Optional, regardless of it having been set.

#### `public inline const ERHAPI_RoleAuthBypass & `[`GetAuthBypass`](#structFRHAPI__Role_1a9a2f320042ee44649cfc88afcdefff58)`(const ERHAPI_RoleAuthBypass & DefaultValue) const` <a id="structFRHAPI__Role_1a9a2f320042ee44649cfc88afcdefff58"></a>

Gets the value of AuthBypass_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAuthBypass`](#structFRHAPI__Role_1a8c7e8e6738df06e4828df0fbde8ee0f1)`(ERHAPI_RoleAuthBypass & OutValue) const` <a id="structFRHAPI__Role_1a8c7e8e6738df06e4828df0fbde8ee0f1"></a>

Fills OutValue with the value of AuthBypass_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_RoleAuthBypass * `[`GetAuthBypassOrNull`](#structFRHAPI__Role_1a3c8cfc1bea5fb9275e3a34a0d442f6e3)`()` <a id="structFRHAPI__Role_1a3c8cfc1bea5fb9275e3a34a0d442f6e3"></a>

Returns a pointer to AuthBypass_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_RoleAuthBypass * `[`GetAuthBypassOrNull`](#structFRHAPI__Role_1a588ea5b537363e4def3ece41944e694c)`() const` <a id="structFRHAPI__Role_1a588ea5b537363e4def3ece41944e694c"></a>

Returns a pointer to AuthBypass_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAuthBypass`](#structFRHAPI__Role_1a38a135ed36e9e19a287b6b8bf3e841d0)`(const ERHAPI_RoleAuthBypass & NewValue)` <a id="structFRHAPI__Role_1a38a135ed36e9e19a287b6b8bf3e841d0"></a>

Sets the value of AuthBypass_Optional and also sets AuthBypass_IsSet to true.

#### `public inline void `[`SetAuthBypass`](#structFRHAPI__Role_1a0b679a8b8910c6a8c4d83617ea849b5d)`(ERHAPI_RoleAuthBypass && NewValue)` <a id="structFRHAPI__Role_1a0b679a8b8910c6a8c4d83617ea849b5d"></a>

Sets the value of AuthBypass_Optional and also sets AuthBypass_IsSet to true using move semantics.

#### `public inline void `[`ClearAuthBypass`](#structFRHAPI__Role_1a9385618ce915da9fa5f1fea764d32026)`()` <a id="structFRHAPI__Role_1a9385618ce915da9fa5f1fea764d32026"></a>

Clears the value of AuthBypass_Optional and sets AuthBypass_IsSet to false.

#### `public inline bool `[`IsAuthBypassSet`](#structFRHAPI__Role_1ad5b7a3bea5498473d734d10f55da91d6)`() const` <a id="structFRHAPI__Role_1ad5b7a3bea5498473d734d10f55da91d6"></a>

Checks whether AuthBypass_Optional has been set.

#### `public inline TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1a805c6b70ee2ffad8a88c03149517932e)`()` <a id="structFRHAPI__Role_1a805c6b70ee2ffad8a88c03149517932e"></a>

Gets the value of LoginLootRewards_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1a8f4654ea8828956d45d8f0fdf90f6b13)`() const` <a id="structFRHAPI__Role_1a8f4654ea8828956d45d8f0fdf90f6b13"></a>

Gets the value of LoginLootRewards_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1a07cbb41171e5c00b2788825b09a536f7)`(const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & DefaultValue) const` <a id="structFRHAPI__Role_1a07cbb41171e5c00b2788825b09a536f7"></a>

Gets the value of LoginLootRewards_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLoginLootRewards`](#structFRHAPI__Role_1a998822f05fb00274a284efc474ea5d86)`(TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & OutValue) const` <a id="structFRHAPI__Role_1a998822f05fb00274a284efc474ea5d86"></a>

Fills OutValue with the value of LoginLootRewards_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > * `[`GetLoginLootRewardsOrNull`](#structFRHAPI__Role_1af6cfcf60f8016ac80ee796d724bdb123)`()` <a id="structFRHAPI__Role_1af6cfcf60f8016ac80ee796d724bdb123"></a>

Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > * `[`GetLoginLootRewardsOrNull`](#structFRHAPI__Role_1ac54b7b45797949988f31300ea59755a6)`() const` <a id="structFRHAPI__Role_1ac54b7b45797949988f31300ea59755a6"></a>

Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLoginLootRewards`](#structFRHAPI__Role_1a6a0b2d094e7c9eda60fedf8c45b32e3b)`(const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & NewValue)` <a id="structFRHAPI__Role_1a6a0b2d094e7c9eda60fedf8c45b32e3b"></a>

Sets the value of LoginLootRewards_Optional and also sets LoginLootRewards_IsSet to true.

#### `public inline void `[`SetLoginLootRewards`](#structFRHAPI__Role_1a50cb6a350a9914f3a5709a20b082d24e)`(TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > && NewValue)` <a id="structFRHAPI__Role_1a50cb6a350a9914f3a5709a20b082d24e"></a>

Sets the value of LoginLootRewards_Optional and also sets LoginLootRewards_IsSet to true using move semantics.

#### `public inline void `[`ClearLoginLootRewards`](#structFRHAPI__Role_1aa842b6af31f9b729dc3d1783c58a143d)`()` <a id="structFRHAPI__Role_1aa842b6af31f9b729dc3d1783c58a143d"></a>

Clears the value of LoginLootRewards_Optional and sets LoginLootRewards_IsSet to false.

#### `public inline bool `[`IsLoginLootRewardsSet`](#structFRHAPI__Role_1a621379dbfe910df7b8358bd32d99952b)`() const` <a id="structFRHAPI__Role_1a621379dbfe910df7b8358bd32d99952b"></a>

Checks whether LoginLootRewards_Optional has been set.

