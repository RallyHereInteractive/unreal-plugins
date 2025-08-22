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
`public inline FORCEINLINE FString & `[`GetRoleId`](#structFRHAPI__Role_1aac9cccdaf699a83be0190925be9d308a)`()` | Gets the value of RoleId.
`public inline FORCEINLINE const FString & `[`GetRoleId`](#structFRHAPI__Role_1a8b60ce4882d93b83997ce1e50e6151bd)`() const` | Gets the value of RoleId.
`public inline FORCEINLINE void `[`SetRoleId`](#structFRHAPI__Role_1adecaea8cc09c5adf2942aec13b0dad73)`(const FString & NewValue)` | Sets the value of RoleId.
`public inline FORCEINLINE void `[`SetRoleId`](#structFRHAPI__Role_1a3d38fe4e9c3cee3db21bf9b75f7ab7cf)`(FString && NewValue)` | Sets the value of RoleId using move semantics.
`public inline FORCEINLINE int32 & `[`GetLegacyRoleId`](#structFRHAPI__Role_1ae8ee5c8e835c1309b915b8db0e214bb0)`()` | Gets the value of LegacyRoleId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLegacyRoleId`](#structFRHAPI__Role_1ad8c0a65544aa3ad6820e7c16d182e65a)`() const` | Gets the value of LegacyRoleId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLegacyRoleId`](#structFRHAPI__Role_1aceae540731d4610910b0e893d4614229)`(const int32 & DefaultValue) const` | Gets the value of LegacyRoleId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLegacyRoleId`](#structFRHAPI__Role_1a3436d8040f7b75e4f0431da874184dce)`(int32 & OutValue) const` | Fills OutValue with the value of LegacyRoleId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetLegacyRoleIdOrNull`](#structFRHAPI__Role_1ae6fa5cf274f6b12d5a772c872da7b44f)`()` | Returns a pointer to LegacyRoleId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetLegacyRoleIdOrNull`](#structFRHAPI__Role_1abeefa13e69c52e73b524ae909d876051)`() const` | Returns a pointer to LegacyRoleId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLegacyRoleId`](#structFRHAPI__Role_1a61533d1a6875ac51e5c63f26b08b5ec3)`(const int32 & NewValue)` | Sets the value of LegacyRoleId_Optional and also sets LegacyRoleId_IsSet to true.
`public inline FORCEINLINE void `[`SetLegacyRoleId`](#structFRHAPI__Role_1ad4a742c53efcc82ae9175882dd2411f2)`(int32 && NewValue)` | Sets the value of LegacyRoleId_Optional and also sets LegacyRoleId_IsSet to true using move semantics.
`public inline void `[`ClearLegacyRoleId`](#structFRHAPI__Role_1a9cb12ab94b578441cf50b075f6f0078c)`()` | Clears the value of LegacyRoleId_Optional and sets LegacyRoleId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_LegacyRoleId`](#structFRHAPI__Role_1a3af701f7e17e18cf5c4a3224886e5204)`()` | Returns the default value of LegacyRoleId.
`public inline FORCEINLINE `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1ab3ec1ce06e9883ca7f86287b61033284)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1a43bba279527962d44d23bf55b67b2d96)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1aae2b2e0293e6bb651b80317637257b6d)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__Role_1a38aaf0eccad753a01e738b2ddf46447c)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__Role_1a6928f677f4fbd27be3f025e116a7c5db)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__Role_1ae42e355dd07c637747b62e789faf52d0)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Role_1ac18ff0558123cf5dc96565b929387c5a)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Role_1a305511a45e35af12c38c4e4be347aa06)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__Role_1ad396c9bca677e071fe8d14d0e7ec2c72)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE ERHAPI_RoleAuthBypass & `[`GetAuthBypass`](#structFRHAPI__Role_1a0d60bb9c95c9b0ce945ec98dc14393b3)`()` | Gets the value of AuthBypass_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_RoleAuthBypass & `[`GetAuthBypass`](#structFRHAPI__Role_1a06b039c98329ce7a2432fa65ec48e0cf)`() const` | Gets the value of AuthBypass_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_RoleAuthBypass & `[`GetAuthBypass`](#structFRHAPI__Role_1a96559404de3738d5893fb1e716fae78a)`(const ERHAPI_RoleAuthBypass & DefaultValue) const` | Gets the value of AuthBypass_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAuthBypass`](#structFRHAPI__Role_1a7e39a483c7ee32e8f5f95b8ee8b68bda)`(ERHAPI_RoleAuthBypass & OutValue) const` | Fills OutValue with the value of AuthBypass_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_RoleAuthBypass * `[`GetAuthBypassOrNull`](#structFRHAPI__Role_1a1b83a0e12a484555da615cbb0743dc6e)`()` | Returns a pointer to AuthBypass_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_RoleAuthBypass * `[`GetAuthBypassOrNull`](#structFRHAPI__Role_1a9198b3986a04755e66686a2619b7060a)`() const` | Returns a pointer to AuthBypass_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAuthBypass`](#structFRHAPI__Role_1ac31c8323d1d231ecd2d3759cc16e1b80)`(const ERHAPI_RoleAuthBypass & NewValue)` | Sets the value of AuthBypass_Optional and also sets AuthBypass_IsSet to true.
`public inline FORCEINLINE void `[`SetAuthBypass`](#structFRHAPI__Role_1a53e3a56ae5791b5fe217b74a4e77385f)`(ERHAPI_RoleAuthBypass && NewValue)` | Sets the value of AuthBypass_Optional and also sets AuthBypass_IsSet to true using move semantics.
`public inline void `[`ClearAuthBypass`](#structFRHAPI__Role_1a9385618ce915da9fa5f1fea764d32026)`()` | Clears the value of AuthBypass_Optional and sets AuthBypass_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1a2db7d2451995736820067bcf10d4d8ed)`()` | Gets the value of LoginLootRewards_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1a7b8d404c7e1aaf1813cf3d06631e138e)`() const` | Gets the value of LoginLootRewards_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1a3a9f2228dce8c0a580b1784b7325eadb)`(const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & DefaultValue) const` | Gets the value of LoginLootRewards_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLoginLootRewards`](#structFRHAPI__Role_1a9e02f4a09b25eb4ec38e846f3c8cd552)`(TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & OutValue) const` | Fills OutValue with the value of LoginLootRewards_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > * `[`GetLoginLootRewardsOrNull`](#structFRHAPI__Role_1ad1c0ca7ac3a342333c388eca95876436)`()` | Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > * `[`GetLoginLootRewardsOrNull`](#structFRHAPI__Role_1ae061576a3708f21a0a63a6534a27f254)`() const` | Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLoginLootRewards`](#structFRHAPI__Role_1a02e6efff56d2fdcee9ed9f7459c7e3d2)`(const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & NewValue)` | Sets the value of LoginLootRewards_Optional and also sets LoginLootRewards_IsSet to true.
`public inline FORCEINLINE void `[`SetLoginLootRewards`](#structFRHAPI__Role_1a429616b8f16fcdce66b1b73230a83f1c)`(TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > && NewValue)` | Sets the value of LoginLootRewards_Optional and also sets LoginLootRewards_IsSet to true using move semantics.
`public inline void `[`ClearLoginLootRewards`](#structFRHAPI__Role_1aa842b6af31f9b729dc3d1783c58a143d)`()` | Clears the value of LoginLootRewards_Optional and sets LoginLootRewards_IsSet to false.

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

#### `public inline FORCEINLINE FString & `[`GetRoleId`](#structFRHAPI__Role_1aac9cccdaf699a83be0190925be9d308a)`()` <a id="structFRHAPI__Role_1aac9cccdaf699a83be0190925be9d308a"></a>

Gets the value of RoleId.

#### `public inline FORCEINLINE const FString & `[`GetRoleId`](#structFRHAPI__Role_1a8b60ce4882d93b83997ce1e50e6151bd)`() const` <a id="structFRHAPI__Role_1a8b60ce4882d93b83997ce1e50e6151bd"></a>

Gets the value of RoleId.

#### `public inline FORCEINLINE void `[`SetRoleId`](#structFRHAPI__Role_1adecaea8cc09c5adf2942aec13b0dad73)`(const FString & NewValue)` <a id="structFRHAPI__Role_1adecaea8cc09c5adf2942aec13b0dad73"></a>

Sets the value of RoleId.

#### `public inline FORCEINLINE void `[`SetRoleId`](#structFRHAPI__Role_1a3d38fe4e9c3cee3db21bf9b75f7ab7cf)`(FString && NewValue)` <a id="structFRHAPI__Role_1a3d38fe4e9c3cee3db21bf9b75f7ab7cf"></a>

Sets the value of RoleId using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetLegacyRoleId`](#structFRHAPI__Role_1ae8ee5c8e835c1309b915b8db0e214bb0)`()` <a id="structFRHAPI__Role_1ae8ee5c8e835c1309b915b8db0e214bb0"></a>

Gets the value of LegacyRoleId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLegacyRoleId`](#structFRHAPI__Role_1ad8c0a65544aa3ad6820e7c16d182e65a)`() const` <a id="structFRHAPI__Role_1ad8c0a65544aa3ad6820e7c16d182e65a"></a>

Gets the value of LegacyRoleId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLegacyRoleId`](#structFRHAPI__Role_1aceae540731d4610910b0e893d4614229)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Role_1aceae540731d4610910b0e893d4614229"></a>

Gets the value of LegacyRoleId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLegacyRoleId`](#structFRHAPI__Role_1a3436d8040f7b75e4f0431da874184dce)`(int32 & OutValue) const` <a id="structFRHAPI__Role_1a3436d8040f7b75e4f0431da874184dce"></a>

Fills OutValue with the value of LegacyRoleId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetLegacyRoleIdOrNull`](#structFRHAPI__Role_1ae6fa5cf274f6b12d5a772c872da7b44f)`()` <a id="structFRHAPI__Role_1ae6fa5cf274f6b12d5a772c872da7b44f"></a>

Returns a pointer to LegacyRoleId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetLegacyRoleIdOrNull`](#structFRHAPI__Role_1abeefa13e69c52e73b524ae909d876051)`() const` <a id="structFRHAPI__Role_1abeefa13e69c52e73b524ae909d876051"></a>

Returns a pointer to LegacyRoleId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLegacyRoleId`](#structFRHAPI__Role_1a61533d1a6875ac51e5c63f26b08b5ec3)`(const int32 & NewValue)` <a id="structFRHAPI__Role_1a61533d1a6875ac51e5c63f26b08b5ec3"></a>

Sets the value of LegacyRoleId_Optional and also sets LegacyRoleId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLegacyRoleId`](#structFRHAPI__Role_1ad4a742c53efcc82ae9175882dd2411f2)`(int32 && NewValue)` <a id="structFRHAPI__Role_1ad4a742c53efcc82ae9175882dd2411f2"></a>

Sets the value of LegacyRoleId_Optional and also sets LegacyRoleId_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacyRoleId`](#structFRHAPI__Role_1a9cb12ab94b578441cf50b075f6f0078c)`()` <a id="structFRHAPI__Role_1a9cb12ab94b578441cf50b075f6f0078c"></a>

Clears the value of LegacyRoleId_Optional and sets LegacyRoleId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_LegacyRoleId`](#structFRHAPI__Role_1a3af701f7e17e18cf5c4a3224886e5204)`()` <a id="structFRHAPI__Role_1a3af701f7e17e18cf5c4a3224886e5204"></a>

Returns the default value of LegacyRoleId.

#### `public inline FORCEINLINE `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1ab3ec1ce06e9883ca7f86287b61033284)`()` <a id="structFRHAPI__Role_1ab3ec1ce06e9883ca7f86287b61033284"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1a43bba279527962d44d23bf55b67b2d96)`() const` <a id="structFRHAPI__Role_1a43bba279527962d44d23bf55b67b2d96"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1aae2b2e0293e6bb651b80317637257b6d)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` <a id="structFRHAPI__Role_1aae2b2e0293e6bb651b80317637257b6d"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__Role_1a38aaf0eccad753a01e738b2ddf46447c)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` <a id="structFRHAPI__Role_1a38aaf0eccad753a01e738b2ddf46447c"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__Role_1a6928f677f4fbd27be3f025e116a7c5db)`()` <a id="structFRHAPI__Role_1a6928f677f4fbd27be3f025e116a7c5db"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__Role_1ae42e355dd07c637747b62e789faf52d0)`() const` <a id="structFRHAPI__Role_1ae42e355dd07c637747b62e789faf52d0"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Role_1ac18ff0558123cf5dc96565b929387c5a)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & NewValue)` <a id="structFRHAPI__Role_1ac18ff0558123cf5dc96565b929387c5a"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Role_1a305511a45e35af12c38c4e4be347aa06)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` && NewValue)` <a id="structFRHAPI__Role_1a305511a45e35af12c38c4e4be347aa06"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__Role_1ad396c9bca677e071fe8d14d0e7ec2c72)`()` <a id="structFRHAPI__Role_1ad396c9bca677e071fe8d14d0e7ec2c72"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_RoleAuthBypass & `[`GetAuthBypass`](#structFRHAPI__Role_1a0d60bb9c95c9b0ce945ec98dc14393b3)`()` <a id="structFRHAPI__Role_1a0d60bb9c95c9b0ce945ec98dc14393b3"></a>

Gets the value of AuthBypass_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_RoleAuthBypass & `[`GetAuthBypass`](#structFRHAPI__Role_1a06b039c98329ce7a2432fa65ec48e0cf)`() const` <a id="structFRHAPI__Role_1a06b039c98329ce7a2432fa65ec48e0cf"></a>

Gets the value of AuthBypass_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_RoleAuthBypass & `[`GetAuthBypass`](#structFRHAPI__Role_1a96559404de3738d5893fb1e716fae78a)`(const ERHAPI_RoleAuthBypass & DefaultValue) const` <a id="structFRHAPI__Role_1a96559404de3738d5893fb1e716fae78a"></a>

Gets the value of AuthBypass_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAuthBypass`](#structFRHAPI__Role_1a7e39a483c7ee32e8f5f95b8ee8b68bda)`(ERHAPI_RoleAuthBypass & OutValue) const` <a id="structFRHAPI__Role_1a7e39a483c7ee32e8f5f95b8ee8b68bda"></a>

Fills OutValue with the value of AuthBypass_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_RoleAuthBypass * `[`GetAuthBypassOrNull`](#structFRHAPI__Role_1a1b83a0e12a484555da615cbb0743dc6e)`()` <a id="structFRHAPI__Role_1a1b83a0e12a484555da615cbb0743dc6e"></a>

Returns a pointer to AuthBypass_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_RoleAuthBypass * `[`GetAuthBypassOrNull`](#structFRHAPI__Role_1a9198b3986a04755e66686a2619b7060a)`() const` <a id="structFRHAPI__Role_1a9198b3986a04755e66686a2619b7060a"></a>

Returns a pointer to AuthBypass_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAuthBypass`](#structFRHAPI__Role_1ac31c8323d1d231ecd2d3759cc16e1b80)`(const ERHAPI_RoleAuthBypass & NewValue)` <a id="structFRHAPI__Role_1ac31c8323d1d231ecd2d3759cc16e1b80"></a>

Sets the value of AuthBypass_Optional and also sets AuthBypass_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAuthBypass`](#structFRHAPI__Role_1a53e3a56ae5791b5fe217b74a4e77385f)`(ERHAPI_RoleAuthBypass && NewValue)` <a id="structFRHAPI__Role_1a53e3a56ae5791b5fe217b74a4e77385f"></a>

Sets the value of AuthBypass_Optional and also sets AuthBypass_IsSet to true using move semantics.

#### `public inline void `[`ClearAuthBypass`](#structFRHAPI__Role_1a9385618ce915da9fa5f1fea764d32026)`()` <a id="structFRHAPI__Role_1a9385618ce915da9fa5f1fea764d32026"></a>

Clears the value of AuthBypass_Optional and sets AuthBypass_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1a2db7d2451995736820067bcf10d4d8ed)`()` <a id="structFRHAPI__Role_1a2db7d2451995736820067bcf10d4d8ed"></a>

Gets the value of LoginLootRewards_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1a7b8d404c7e1aaf1813cf3d06631e138e)`() const` <a id="structFRHAPI__Role_1a7b8d404c7e1aaf1813cf3d06631e138e"></a>

Gets the value of LoginLootRewards_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1a3a9f2228dce8c0a580b1784b7325eadb)`(const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & DefaultValue) const` <a id="structFRHAPI__Role_1a3a9f2228dce8c0a580b1784b7325eadb"></a>

Gets the value of LoginLootRewards_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLoginLootRewards`](#structFRHAPI__Role_1a9e02f4a09b25eb4ec38e846f3c8cd552)`(TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & OutValue) const` <a id="structFRHAPI__Role_1a9e02f4a09b25eb4ec38e846f3c8cd552"></a>

Fills OutValue with the value of LoginLootRewards_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > * `[`GetLoginLootRewardsOrNull`](#structFRHAPI__Role_1ad1c0ca7ac3a342333c388eca95876436)`()` <a id="structFRHAPI__Role_1ad1c0ca7ac3a342333c388eca95876436"></a>

Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > * `[`GetLoginLootRewardsOrNull`](#structFRHAPI__Role_1ae061576a3708f21a0a63a6534a27f254)`() const` <a id="structFRHAPI__Role_1ae061576a3708f21a0a63a6534a27f254"></a>

Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLoginLootRewards`](#structFRHAPI__Role_1a02e6efff56d2fdcee9ed9f7459c7e3d2)`(const TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > & NewValue)` <a id="structFRHAPI__Role_1a02e6efff56d2fdcee9ed9f7459c7e3d2"></a>

Sets the value of LoginLootRewards_Optional and also sets LoginLootRewards_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLoginLootRewards`](#structFRHAPI__Role_1a429616b8f16fcdce66b1b73230a83f1c)`(TArray< `[`FRHAPI_LoginLootReward`](RHAPI_LoginLootReward.md#structFRHAPI__LoginLootReward)` > && NewValue)` <a id="structFRHAPI__Role_1a429616b8f16fcdce66b1b73230a83f1c"></a>

Sets the value of LoginLootRewards_Optional and also sets LoginLootRewards_IsSet to true using move semantics.

#### `public inline void `[`ClearLoginLootRewards`](#structFRHAPI__Role_1aa842b6af31f9b729dc3d1783c58a143d)`()` <a id="structFRHAPI__Role_1aa842b6af31f9b729dc3d1783c58a143d"></a>

Clears the value of LoginLootRewards_Optional and sets LoginLootRewards_IsSet to false.

