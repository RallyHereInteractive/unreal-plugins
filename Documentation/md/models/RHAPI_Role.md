# RHAPI_Role <a id="group__RHAPI__Role"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Role`](#structFRHAPI__Role) | 

## struct `FRHAPI_Role` <a id="structFRHAPI__Role"></a>

```
struct FRHAPI_Role
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`RoleId`](#structFRHAPI__Role_1a52f32f8c3152eec8e2eaba9bcfc8f8b5) | 
`public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`CustomData_Optional`](#structFRHAPI__Role_1ab56bcc46d8e231e0c8970cf4b28806c4) | 
`public bool `[`CustomData_IsSet`](#structFRHAPI__Role_1a7009c6fa9d36ddb72c54a9658b63e42d) | true if CustomData_Optional has been set to a value
`public TArray< int32 > `[`LoginLootRewards_Optional`](#structFRHAPI__Role_1a5085d5aa449f92dbb0cb0c236f476b86) | 
`public bool `[`LoginLootRewards_IsSet`](#structFRHAPI__Role_1a6e132dc93f9582659561567ad17f151c) | true if LoginLootRewards_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__Role_1a229641efe3ca109c0f3c7b53422b42ad)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Role_1ae845c90d963aeb9ae58170a483d25275)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetRoleId`](#structFRHAPI__Role_1a49452f02b34778848d259e045e851009)`()` | Gets the value of RoleId.
`public inline const FString & `[`GetRoleId`](#structFRHAPI__Role_1ac0647a02b144923a4cd8580a1dc2e57b)`() const` | Gets the value of RoleId.
`public inline void `[`SetRoleId`](#structFRHAPI__Role_1a9f7686e73ba330fc24da8745bd76ec5c)`(FString NewValue)` | Sets the value of RoleId.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1a6a89b0beabb5a58ef2732b747c52c3f5)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1a6f0ff8d950da4423d60febbad9613730)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1a07133ecd6ca89b5c37506def2ef52e2a)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__Role_1abb29df8d12a7138ea24fb4eb2846eec8)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__Role_1a8bf58372a5ac17505435fffd2d03e1d3)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__Role_1ae8305c6970feae2fff88f38b4e4064bb)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__Role_1ab88a5bb3ecf915fd1576007efca37877)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__Role_1ad396c9bca677e071fe8d14d0e7ec2c72)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline TArray< int32 > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1a85e8879b4b2fbd1984816123c7bd7c63)`()` | Gets the value of LoginLootRewards_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1a00f845665922f1e86a648b164d1f4d4d)`() const` | Gets the value of LoginLootRewards_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1af667b94f1457c4162846587ab1c81bd8)`(const TArray< int32 > & DefaultValue) const` | Gets the value of LoginLootRewards_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLoginLootRewards`](#structFRHAPI__Role_1ac995d6d055b323f552a834e750652754)`(TArray< int32 > & OutValue) const` | Fills OutValue with the value of LoginLootRewards_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< int32 > * `[`GetLoginLootRewardsOrNull`](#structFRHAPI__Role_1af16dec3e5e36570a7089df6038b2bfa3)`()` | Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< int32 > * `[`GetLoginLootRewardsOrNull`](#structFRHAPI__Role_1a59107e4c9555de012c1fdb8ebed12e2a)`() const` | Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLoginLootRewards`](#structFRHAPI__Role_1a420acb1ad3fd91c2a7d1f97d6e1e17d3)`(TArray< int32 > NewValue)` | Sets the value of LoginLootRewards_Optional and also sets LoginLootRewards_IsSet to true.
`public inline void `[`ClearLoginLootRewards`](#structFRHAPI__Role_1aa842b6af31f9b729dc3d1783c58a143d)`()` | Clears the value of LoginLootRewards_Optional and sets LoginLootRewards_IsSet to false.

#### Members

#### `public FString `[`RoleId`](#structFRHAPI__Role_1a52f32f8c3152eec8e2eaba9bcfc8f8b5) <a id="structFRHAPI__Role_1a52f32f8c3152eec8e2eaba9bcfc8f8b5"></a>

<br>
#### `public `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` `[`CustomData_Optional`](#structFRHAPI__Role_1ab56bcc46d8e231e0c8970cf4b28806c4) <a id="structFRHAPI__Role_1ab56bcc46d8e231e0c8970cf4b28806c4"></a>

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__Role_1a7009c6fa9d36ddb72c54a9658b63e42d) <a id="structFRHAPI__Role_1a7009c6fa9d36ddb72c54a9658b63e42d"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public TArray< int32 > `[`LoginLootRewards_Optional`](#structFRHAPI__Role_1a5085d5aa449f92dbb0cb0c236f476b86) <a id="structFRHAPI__Role_1a5085d5aa449f92dbb0cb0c236f476b86"></a>

<br>
#### `public bool `[`LoginLootRewards_IsSet`](#structFRHAPI__Role_1a6e132dc93f9582659561567ad17f151c) <a id="structFRHAPI__Role_1a6e132dc93f9582659561567ad17f151c"></a>

true if LoginLootRewards_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__Role_1a229641efe3ca109c0f3c7b53422b42ad)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Role_1a229641efe3ca109c0f3c7b53422b42ad"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__Role_1ae845c90d963aeb9ae58170a483d25275)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Role_1ae845c90d963aeb9ae58170a483d25275"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetRoleId`](#structFRHAPI__Role_1a49452f02b34778848d259e045e851009)`()` <a id="structFRHAPI__Role_1a49452f02b34778848d259e045e851009"></a>

Gets the value of RoleId.

<br>
#### `public inline const FString & `[`GetRoleId`](#structFRHAPI__Role_1ac0647a02b144923a4cd8580a1dc2e57b)`() const` <a id="structFRHAPI__Role_1ac0647a02b144923a4cd8580a1dc2e57b"></a>

Gets the value of RoleId.

<br>
#### `public inline void `[`SetRoleId`](#structFRHAPI__Role_1a9f7686e73ba330fc24da8745bd76ec5c)`(FString NewValue)` <a id="structFRHAPI__Role_1a9f7686e73ba330fc24da8745bd76ec5c"></a>

Sets the value of RoleId.

<br>
#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1a6a89b0beabb5a58ef2732b747c52c3f5)`()` <a id="structFRHAPI__Role_1a6a89b0beabb5a58ef2732b747c52c3f5"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1a6f0ff8d950da4423d60febbad9613730)`() const` <a id="structFRHAPI__Role_1a6f0ff8d950da4423d60febbad9613730"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & `[`GetCustomData`](#structFRHAPI__Role_1a07133ecd6ca89b5c37506def2ef52e2a)`(const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & DefaultValue) const` <a id="structFRHAPI__Role_1a07133ecd6ca89b5c37506def2ef52e2a"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__Role_1abb29df8d12a7138ea24fb4eb2846eec8)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` & OutValue) const` <a id="structFRHAPI__Role_1abb29df8d12a7138ea24fb4eb2846eec8"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__Role_1a8bf58372a5ac17505435fffd2d03e1d3)`()` <a id="structFRHAPI__Role_1a8bf58372a5ac17505435fffd2d03e1d3"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` * `[`GetCustomDataOrNull`](#structFRHAPI__Role_1ae8305c6970feae2fff88f38b4e4064bb)`() const` <a id="structFRHAPI__Role_1ae8305c6970feae2fff88f38b4e4064bb"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__Role_1ab88a5bb3ecf915fd1576007efca37877)`(`[`FRHAPI_JsonObject`](undefined.md#structFRHAPI__JsonObject)` NewValue)` <a id="structFRHAPI__Role_1ab88a5bb3ecf915fd1576007efca37877"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__Role_1ad396c9bca677e071fe8d14d0e7ec2c72)`()` <a id="structFRHAPI__Role_1ad396c9bca677e071fe8d14d0e7ec2c72"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline TArray< int32 > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1a85e8879b4b2fbd1984816123c7bd7c63)`()` <a id="structFRHAPI__Role_1a85e8879b4b2fbd1984816123c7bd7c63"></a>

Gets the value of LoginLootRewards_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< int32 > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1a00f845665922f1e86a648b164d1f4d4d)`() const` <a id="structFRHAPI__Role_1a00f845665922f1e86a648b164d1f4d4d"></a>

Gets the value of LoginLootRewards_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< int32 > & `[`GetLoginLootRewards`](#structFRHAPI__Role_1af667b94f1457c4162846587ab1c81bd8)`(const TArray< int32 > & DefaultValue) const` <a id="structFRHAPI__Role_1af667b94f1457c4162846587ab1c81bd8"></a>

Gets the value of LoginLootRewards_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetLoginLootRewards`](#structFRHAPI__Role_1ac995d6d055b323f552a834e750652754)`(TArray< int32 > & OutValue) const` <a id="structFRHAPI__Role_1ac995d6d055b323f552a834e750652754"></a>

Fills OutValue with the value of LoginLootRewards_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< int32 > * `[`GetLoginLootRewardsOrNull`](#structFRHAPI__Role_1af16dec3e5e36570a7089df6038b2bfa3)`()` <a id="structFRHAPI__Role_1af16dec3e5e36570a7089df6038b2bfa3"></a>

Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< int32 > * `[`GetLoginLootRewardsOrNull`](#structFRHAPI__Role_1a59107e4c9555de012c1fdb8ebed12e2a)`() const` <a id="structFRHAPI__Role_1a59107e4c9555de012c1fdb8ebed12e2a"></a>

Returns a pointer to LoginLootRewards_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetLoginLootRewards`](#structFRHAPI__Role_1a420acb1ad3fd91c2a7d1f97d6e1e17d3)`(TArray< int32 > NewValue)` <a id="structFRHAPI__Role_1a420acb1ad3fd91c2a7d1f97d6e1e17d3"></a>

Sets the value of LoginLootRewards_Optional and also sets LoginLootRewards_IsSet to true.

<br>
#### `public inline void `[`ClearLoginLootRewards`](#structFRHAPI__Role_1aa842b6af31f9b729dc3d1783c58a143d)`()` <a id="structFRHAPI__Role_1aa842b6af31f9b729dc3d1783c58a143d"></a>

Clears the value of LoginLootRewards_Optional and sets LoginLootRewards_IsSet to false.

<br>
