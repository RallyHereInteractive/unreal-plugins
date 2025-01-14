---
title: RHAPI_Role
---

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
`public virtual void `[`WriteJson`](#structFRHAPI__Role_1a85c8c61e186c0b26352073bf93607dcb)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetRoleId`](#structFRHAPI__Role_1ad75587fe81b61e9cdb56425ca9020fdd)`()` | Gets the value of RoleId.
`public inline const FString & `[`GetRoleId`](#structFRHAPI__Role_1aff04a52f2af29d92616929df45fbdc64)`() const` | Gets the value of RoleId.
`public inline void `[`SetRoleId`](#structFRHAPI__Role_1ae4b2e528fcbf901b946c58cae3982a27)`(const FString & NewValue)` | Sets the value of RoleId.
`public inline void `[`SetRoleId`](#structFRHAPI__Role_1ad032c152ad0db245805da556d52e55d7)`(FString && NewValue)` | Sets the value of RoleId using move semantics.
`public inline int32 & `[`GetLegacyRoleId`](#structFRHAPI__Role_1a3e042e96bb95da970ecd97c41edec2e9)`()` | Gets the value of LegacyRoleId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacyRoleId`](#structFRHAPI__Role_1a3fd3e98afd54ed16bc29c60fb1c37d45)`() const` | Gets the value of LegacyRoleId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetLegacyRoleId`](#structFRHAPI__Role_1ac7b4743f06960e5cccfec0264a0a37fa)`(const int32 & DefaultValue) const` | Gets the value of LegacyRoleId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacyRoleId`](#structFRHAPI__Role_1aaa13e90a1eb377ae654aa98c335b0d8e)`(int32 & OutValue) const` | Fills OutValue with the value of LegacyRoleId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetLegacyRoleIdOrNull`](#structFRHAPI__Role_1af74dc1d167d98c2ebc68d9e119c01512)`()` | Returns a pointer to LegacyRoleId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetLegacyRoleIdOrNull`](#structFRHAPI__Role_1ad415eca7e421c7ec2e4d09b59e598520)`() const` | Returns a pointer to LegacyRoleId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacyRoleId`](#structFRHAPI__Role_1abe1a5927061258288037e217926d5b6a)`(const int32 & NewValue)` | Sets the value of LegacyRoleId_Optional and also sets LegacyRoleId_IsSet to true.
`public inline void `[`SetLegacyRoleId`](#structFRHAPI__Role_1a01395ed3fb1f18f5ca7de1efa92b1898)`(int32 && NewValue)` | Sets the value of LegacyRoleId_Optional and also sets LegacyRoleId_IsSet to true using move semantics.
`public inline void `[`ClearLegacyRoleId`](#structFRHAPI__Role_1a9cb12ab94b578441cf50b075f6f0078c)`()` | Clears the value of LegacyRoleId_Optional and sets LegacyRoleId_IsSet to false.
`public inline bool `[`IsLegacyRoleIdSet`](#structFRHAPI__Role_1ac104d3d9ae72ebd6f4acf58c894f294e)`() const` | Checks whether LegacyRoleId_Optional has been set.
`public inline bool `[`IsLegacyRoleIdDefaultValue`](#structFRHAPI__Role_1aef383ffe94891ed9193cc74582df277f)`() const` | Returns true if LegacyRoleId_Optional is set and matches the default value.
`public inline void `[`SetLegacyRoleIdToDefault`](#structFRHAPI__Role_1a92a947734678e4bb8bba0aee49b34012)`()` | Sets the value of LegacyRoleId_Optional to its default and also sets LegacyRoleId_IsSet to true.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1a9704ee45353865cbe1925386dafb6d6e)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1a1e0ca18c4ffe9ab37a871a90903abe98)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1a569e66c16578e730c1333a6827be4ff0)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__Role_1abb29df8d12a7138ea24fb4eb2846eec8)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__Role_1a4ce167cc4ebfa39e82aea7f18238af74)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__Role_1a25936de426ca441ffcb15119bc910e41)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__Role_1a8aea3ff061fc436639626c68a8a9705b)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__Role_1ace70ad0698497d4473f6ad7bf7496def)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__Role_1ad396c9bca677e071fe8d14d0e7ec2c72)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__Role_1ab10b12ddfa7e1398fa3fd381bcc4a1fa)`() const` | Checks whether CustomData_Optional has been set.
`public inline ERHAPI_RoleAuthBypass & `[`GetAuthBypass`](#structFRHAPI__Role_1a41e11db7782025a39aa3070affa82552)`()` | Gets the value of AuthBypass_Optional, regardless of it having been set.
`public inline const ERHAPI_RoleAuthBypass & `[`GetAuthBypass`](#structFRHAPI__Role_1a648df6145123ced1244aa01f501dcafb)`() const` | Gets the value of AuthBypass_Optional, regardless of it having been set.
`public inline const ERHAPI_RoleAuthBypass & `[`GetAuthBypass`](#structFRHAPI__Role_1ad5afefba28f239b461f615519ff704d6)`(const ERHAPI_RoleAuthBypass & DefaultValue) const` | Gets the value of AuthBypass_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAuthBypass`](#structFRHAPI__Role_1a8c7e8e6738df06e4828df0fbde8ee0f1)`(ERHAPI_RoleAuthBypass & OutValue) const` | Fills OutValue with the value of AuthBypass_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_RoleAuthBypass * `[`GetAuthBypassOrNull`](#structFRHAPI__Role_1af5ac734f09ad0df99ee0ad8d2f2f4a3b)`()` | Returns a pointer to AuthBypass_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_RoleAuthBypass * `[`GetAuthBypassOrNull`](#structFRHAPI__Role_1acae656cb3723dfd3a1e5cef7e72702bf)`() const` | Returns a pointer to AuthBypass_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAuthBypass`](#structFRHAPI__Role_1a38a135ed36e9e19a287b6b8bf3e841d0)`(const ERHAPI_RoleAuthBypass & NewValue)` | Sets the value of AuthBypass_Optional and also sets AuthBypass_IsSet to true.
`public inline void `[`SetAuthBypass`](#structFRHAPI__Role_1a0b679a8b8910c6a8c4d83617ea849b5d)`(ERHAPI_RoleAuthBypass && NewValue)` | Sets the value of AuthBypass_Optional and also sets AuthBypass_IsSet to true using move semantics.
`public inline void `[`ClearAuthBypass`](#structFRHAPI__Role_1a9385618ce915da9fa5f1fea764d32026)`()` | Clears the value of AuthBypass_Optional and sets AuthBypass_IsSet to false.
`public inline bool `[`IsAuthBypassSet`](#structFRHAPI__Role_1ad5b7a3bea5498473d734d10f55da91d6)`() const` | Checks whether AuthBypass_Optional has been set.
`public inline TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1a2119af14df00e3d5d329d0ab7c90d54e)`()` | Gets the value of LoginLootRewards_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1a15464583bd7c00ec991a8afd5b901681)`() const` | Gets the value of LoginLootRewards_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1ad4e92e98f1ad2ab16ca192be14a316aa)`(const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & DefaultValue) const` | Gets the value of LoginLootRewards_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLoginLootRewards`](#structFRHAPI__Role_1a998822f05fb00274a284efc474ea5d86)`(TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & OutValue) const` | Fills OutValue with the value of LoginLootRewards_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > * `[`GetLoginLootRewardsOrNull`](#structFRHAPI__Role_1ae2f83846611eb5ac2632b7433db28c54)`()` | Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > * `[`GetLoginLootRewardsOrNull`](#structFRHAPI__Role_1a805e8fa981b3156fe191c7ccc127c38d)`() const` | Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__Role_1a85c8c61e186c0b26352073bf93607dcb)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__Role_1a85c8c61e186c0b26352073bf93607dcb"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetRoleId`](#structFRHAPI__Role_1ad75587fe81b61e9cdb56425ca9020fdd)`()` <a id="structFRHAPI__Role_1ad75587fe81b61e9cdb56425ca9020fdd"></a>

Gets the value of RoleId.

#### `public inline const FString & `[`GetRoleId`](#structFRHAPI__Role_1aff04a52f2af29d92616929df45fbdc64)`() const` <a id="structFRHAPI__Role_1aff04a52f2af29d92616929df45fbdc64"></a>

Gets the value of RoleId.

#### `public inline void `[`SetRoleId`](#structFRHAPI__Role_1ae4b2e528fcbf901b946c58cae3982a27)`(const FString & NewValue)` <a id="structFRHAPI__Role_1ae4b2e528fcbf901b946c58cae3982a27"></a>

Sets the value of RoleId.

#### `public inline void `[`SetRoleId`](#structFRHAPI__Role_1ad032c152ad0db245805da556d52e55d7)`(FString && NewValue)` <a id="structFRHAPI__Role_1ad032c152ad0db245805da556d52e55d7"></a>

Sets the value of RoleId using move semantics.

#### `public inline int32 & `[`GetLegacyRoleId`](#structFRHAPI__Role_1a3e042e96bb95da970ecd97c41edec2e9)`()` <a id="structFRHAPI__Role_1a3e042e96bb95da970ecd97c41edec2e9"></a>

Gets the value of LegacyRoleId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLegacyRoleId`](#structFRHAPI__Role_1a3fd3e98afd54ed16bc29c60fb1c37d45)`() const` <a id="structFRHAPI__Role_1a3fd3e98afd54ed16bc29c60fb1c37d45"></a>

Gets the value of LegacyRoleId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetLegacyRoleId`](#structFRHAPI__Role_1ac7b4743f06960e5cccfec0264a0a37fa)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Role_1ac7b4743f06960e5cccfec0264a0a37fa"></a>

Gets the value of LegacyRoleId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLegacyRoleId`](#structFRHAPI__Role_1aaa13e90a1eb377ae654aa98c335b0d8e)`(int32 & OutValue) const` <a id="structFRHAPI__Role_1aaa13e90a1eb377ae654aa98c335b0d8e"></a>

Fills OutValue with the value of LegacyRoleId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetLegacyRoleIdOrNull`](#structFRHAPI__Role_1af74dc1d167d98c2ebc68d9e119c01512)`()` <a id="structFRHAPI__Role_1af74dc1d167d98c2ebc68d9e119c01512"></a>

Returns a pointer to LegacyRoleId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetLegacyRoleIdOrNull`](#structFRHAPI__Role_1ad415eca7e421c7ec2e4d09b59e598520)`() const` <a id="structFRHAPI__Role_1ad415eca7e421c7ec2e4d09b59e598520"></a>

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

#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1a9704ee45353865cbe1925386dafb6d6e)`()` <a id="structFRHAPI__Role_1a9704ee45353865cbe1925386dafb6d6e"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1a1e0ca18c4ffe9ab37a871a90903abe98)`() const` <a id="structFRHAPI__Role_1a1e0ca18c4ffe9ab37a871a90903abe98"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1a569e66c16578e730c1333a6827be4ff0)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` <a id="structFRHAPI__Role_1a569e66c16578e730c1333a6827be4ff0"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__Role_1abb29df8d12a7138ea24fb4eb2846eec8)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` <a id="structFRHAPI__Role_1abb29df8d12a7138ea24fb4eb2846eec8"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__Role_1a4ce167cc4ebfa39e82aea7f18238af74)`()` <a id="structFRHAPI__Role_1a4ce167cc4ebfa39e82aea7f18238af74"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__Role_1a25936de426ca441ffcb15119bc910e41)`() const` <a id="structFRHAPI__Role_1a25936de426ca441ffcb15119bc910e41"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__Role_1a8aea3ff061fc436639626c68a8a9705b)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` <a id="structFRHAPI__Role_1a8aea3ff061fc436639626c68a8a9705b"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__Role_1ace70ad0698497d4473f6ad7bf7496def)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` <a id="structFRHAPI__Role_1ace70ad0698497d4473f6ad7bf7496def"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__Role_1ad396c9bca677e071fe8d14d0e7ec2c72)`()` <a id="structFRHAPI__Role_1ad396c9bca677e071fe8d14d0e7ec2c72"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__Role_1ab10b12ddfa7e1398fa3fd381bcc4a1fa)`() const` <a id="structFRHAPI__Role_1ab10b12ddfa7e1398fa3fd381bcc4a1fa"></a>

Checks whether CustomData_Optional has been set.

#### `public inline ERHAPI_RoleAuthBypass & `[`GetAuthBypass`](#structFRHAPI__Role_1a41e11db7782025a39aa3070affa82552)`()` <a id="structFRHAPI__Role_1a41e11db7782025a39aa3070affa82552"></a>

Gets the value of AuthBypass_Optional, regardless of it having been set.

#### `public inline const ERHAPI_RoleAuthBypass & `[`GetAuthBypass`](#structFRHAPI__Role_1a648df6145123ced1244aa01f501dcafb)`() const` <a id="structFRHAPI__Role_1a648df6145123ced1244aa01f501dcafb"></a>

Gets the value of AuthBypass_Optional, regardless of it having been set.

#### `public inline const ERHAPI_RoleAuthBypass & `[`GetAuthBypass`](#structFRHAPI__Role_1ad5afefba28f239b461f615519ff704d6)`(const ERHAPI_RoleAuthBypass & DefaultValue) const` <a id="structFRHAPI__Role_1ad5afefba28f239b461f615519ff704d6"></a>

Gets the value of AuthBypass_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAuthBypass`](#structFRHAPI__Role_1a8c7e8e6738df06e4828df0fbde8ee0f1)`(ERHAPI_RoleAuthBypass & OutValue) const` <a id="structFRHAPI__Role_1a8c7e8e6738df06e4828df0fbde8ee0f1"></a>

Fills OutValue with the value of AuthBypass_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_RoleAuthBypass * `[`GetAuthBypassOrNull`](#structFRHAPI__Role_1af5ac734f09ad0df99ee0ad8d2f2f4a3b)`()` <a id="structFRHAPI__Role_1af5ac734f09ad0df99ee0ad8d2f2f4a3b"></a>

Returns a pointer to AuthBypass_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_RoleAuthBypass * `[`GetAuthBypassOrNull`](#structFRHAPI__Role_1acae656cb3723dfd3a1e5cef7e72702bf)`() const` <a id="structFRHAPI__Role_1acae656cb3723dfd3a1e5cef7e72702bf"></a>

Returns a pointer to AuthBypass_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAuthBypass`](#structFRHAPI__Role_1a38a135ed36e9e19a287b6b8bf3e841d0)`(const ERHAPI_RoleAuthBypass & NewValue)` <a id="structFRHAPI__Role_1a38a135ed36e9e19a287b6b8bf3e841d0"></a>

Sets the value of AuthBypass_Optional and also sets AuthBypass_IsSet to true.

#### `public inline void `[`SetAuthBypass`](#structFRHAPI__Role_1a0b679a8b8910c6a8c4d83617ea849b5d)`(ERHAPI_RoleAuthBypass && NewValue)` <a id="structFRHAPI__Role_1a0b679a8b8910c6a8c4d83617ea849b5d"></a>

Sets the value of AuthBypass_Optional and also sets AuthBypass_IsSet to true using move semantics.

#### `public inline void `[`ClearAuthBypass`](#structFRHAPI__Role_1a9385618ce915da9fa5f1fea764d32026)`()` <a id="structFRHAPI__Role_1a9385618ce915da9fa5f1fea764d32026"></a>

Clears the value of AuthBypass_Optional and sets AuthBypass_IsSet to false.

#### `public inline bool `[`IsAuthBypassSet`](#structFRHAPI__Role_1ad5b7a3bea5498473d734d10f55da91d6)`() const` <a id="structFRHAPI__Role_1ad5b7a3bea5498473d734d10f55da91d6"></a>

Checks whether AuthBypass_Optional has been set.

#### `public inline TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1a2119af14df00e3d5d329d0ab7c90d54e)`()` <a id="structFRHAPI__Role_1a2119af14df00e3d5d329d0ab7c90d54e"></a>

Gets the value of LoginLootRewards_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1a15464583bd7c00ec991a8afd5b901681)`() const` <a id="structFRHAPI__Role_1a15464583bd7c00ec991a8afd5b901681"></a>

Gets the value of LoginLootRewards_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1ad4e92e98f1ad2ab16ca192be14a316aa)`(const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & DefaultValue) const` <a id="structFRHAPI__Role_1ad4e92e98f1ad2ab16ca192be14a316aa"></a>

Gets the value of LoginLootRewards_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLoginLootRewards`](#structFRHAPI__Role_1a998822f05fb00274a284efc474ea5d86)`(TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & OutValue) const` <a id="structFRHAPI__Role_1a998822f05fb00274a284efc474ea5d86"></a>

Fills OutValue with the value of LoginLootRewards_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > * `[`GetLoginLootRewardsOrNull`](#structFRHAPI__Role_1ae2f83846611eb5ac2632b7433db28c54)`()` <a id="structFRHAPI__Role_1ae2f83846611eb5ac2632b7433db28c54"></a>

Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > * `[`GetLoginLootRewardsOrNull`](#structFRHAPI__Role_1a805e8fa981b3156fe191c7ccc127c38d)`() const` <a id="structFRHAPI__Role_1a805e8fa981b3156fe191c7ccc127c38d"></a>

Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLoginLootRewards`](#structFRHAPI__Role_1a6a0b2d094e7c9eda60fedf8c45b32e3b)`(const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & NewValue)` <a id="structFRHAPI__Role_1a6a0b2d094e7c9eda60fedf8c45b32e3b"></a>

Sets the value of LoginLootRewards_Optional and also sets LoginLootRewards_IsSet to true.

#### `public inline void `[`SetLoginLootRewards`](#structFRHAPI__Role_1a50cb6a350a9914f3a5709a20b082d24e)`(TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > && NewValue)` <a id="structFRHAPI__Role_1a50cb6a350a9914f3a5709a20b082d24e"></a>

Sets the value of LoginLootRewards_Optional and also sets LoginLootRewards_IsSet to true using move semantics.

#### `public inline void `[`ClearLoginLootRewards`](#structFRHAPI__Role_1aa842b6af31f9b729dc3d1783c58a143d)`()` <a id="structFRHAPI__Role_1aa842b6af31f9b729dc3d1783c58a143d"></a>

Clears the value of LoginLootRewards_Optional and sets LoginLootRewards_IsSet to false.

#### `public inline bool `[`IsLoginLootRewardsSet`](#structFRHAPI__Role_1a621379dbfe910df7b8358bd32d99952b)`() const` <a id="structFRHAPI__Role_1a621379dbfe910df7b8358bd32d99952b"></a>

Checks whether LoginLootRewards_Optional has been set.

