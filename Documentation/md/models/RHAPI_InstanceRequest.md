# RHAPI_InstanceRequest <a id="group__RHAPI__InstanceRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InstanceRequest`](#structFRHAPI__InstanceRequest) | A request body to create an instance resource in a session.

## struct `FRHAPI_InstanceRequest` <a id="structFRHAPI__InstanceRequest"></a>

```
struct FRHAPI_InstanceRequest
  : public FRHAPI_Model
```

A request body to create an instance resource in a session.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`InstanceId_Optional`](#structFRHAPI__InstanceRequest_1ae2cd025e6006ed29f473eea7e99a5831) | Unique ID for the instance, a new one will be generated if not provided.
`public bool `[`InstanceId_IsSet`](#structFRHAPI__InstanceRequest_1aa2407894fadb8014e21cd940b890673d) | true if InstanceId_Optional has been set to a value
`public `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` `[`InstanceStartupParams_Optional`](#structFRHAPI__InstanceRequest_1ae58f5b8ca0b462edb52e44c683a4c1d8) | Parameters used by the host to startup. For UE5 this will contain the map and gamemode.
`public bool `[`InstanceStartupParams_IsSet`](#structFRHAPI__InstanceRequest_1a31863d6683b7e334f0080c322c519cec) | true if InstanceStartupParams_Optional has been set to a value
`public ERHAPI_HostType `[`HostType`](#structFRHAPI__InstanceRequest_1ac1fb0f22f5da79bcdf7356ebcba4e972) | Type of the host.
`public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__InstanceRequest_1aec1e068ce4fb2675ce05dc50f6abcbc8) | Player UUID of the host, if the host type is player.
`public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__InstanceRequest_1a34fdd62ebfe1782ed08b73f92bfe08ea) | true if HostPlayerUuid_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InstanceRequest_1a4c621990c63bed683c60e1665ab72730) | instance-defined custom data
`public bool `[`CustomData_IsSet`](#structFRHAPI__InstanceRequest_1aa293e408d987dc3ec8df6609d786c943) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InstanceRequest_1af96a93daa49224834905105d21c5bd36)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InstanceRequest_1a481185ea9d96096d351ed84b774a720e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__InstanceRequest_1aa7d8997f1cc19e5bd956356308445ce5)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__InstanceRequest_1a2688849dcb166d4cfbb76b11f8427634)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__InstanceRequest_1a65fd2a966b346fe2bc54fb26d8666cfd)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceId`](#structFRHAPI__InstanceRequest_1ac0e4b0cab82917b1df3fa56f1104a5cc)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__InstanceRequest_1a2db86a7e608a88d01c6cc402f660f06b)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__InstanceRequest_1a05b27a065f11196c836c639400af54e4)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceId`](#structFRHAPI__InstanceRequest_1a5809412ad6749342a811e3c2ce071383)`(FString NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline void `[`ClearInstanceId`](#structFRHAPI__InstanceRequest_1a8807721e52eb1a112dcbc1f3dfe40a37)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1a0cbd5eebba53e976d3fb4724f0ce14c7)`()` | Gets the value of InstanceStartupParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1aa5141f5032f82812dd02fd49aa625066)`() const` | Gets the value of InstanceStartupParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1a341119bd46c33b2d330b1c06229d3aef)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & DefaultValue) const` | Gets the value of InstanceStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1ac3bd45ed219f2019d3e782feca55ee5c)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & OutValue) const` | Fills OutValue with the value of InstanceStartupParams_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetInstanceStartupParamsOrNull`](#structFRHAPI__InstanceRequest_1a1de4510b22949878cce7d9f59808f7f9)`()` | Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetInstanceStartupParamsOrNull`](#structFRHAPI__InstanceRequest_1ac63949f7619cb205508acea0d20ae732)`() const` | Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1a777df4ce96091f706ebcba369d45ee6b)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` NewValue)` | Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true.
`public inline void `[`ClearInstanceStartupParams`](#structFRHAPI__InstanceRequest_1a45fa6311989ae8b6c8e1784594faca03)`()` | Clears the value of InstanceStartupParams_Optional and sets InstanceStartupParams_IsSet to false.
`public inline ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceRequest_1aa065c59ff35a79e7fcae4eac6cd3fdb6)`()` | Gets the value of HostType.
`public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceRequest_1a5787c909c62151814f4eb5bca331c72d)`() const` | Gets the value of HostType.
`public inline void `[`SetHostType`](#structFRHAPI__InstanceRequest_1aadedef73ec200362b3b30aad96b4339a)`(ERHAPI_HostType NewValue)` | Sets the value of HostType.
`public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1afea933372204e8989f29f367c20797ae)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1ac242ba9cf077f5337f74d21b928fa602)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1a1ca12cfad38278490c1d353be29e55b5)`(const FGuid & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1ab37ad6d7b9d29367d7f1f2e57278172e)`(FGuid & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__InstanceRequest_1a82761dba8cc190250bcefe5a6895f83c)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__InstanceRequest_1a4a12910ce85fe436f07ffda2ffc2ae7b)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1ad05dde1d91e2409db32af22f2652dea3)`(FGuid NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__InstanceRequest_1ae6ee53368bb4ad87be06ee5973876c1a)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequest_1a145e751e000f44b175f6ae94325bb3a0)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequest_1a5fe5f1bf54f6f6373e63b37a6df96b88)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequest_1aa6dae53c35ea7435ccfe5d8afb1b2ec6)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__InstanceRequest_1aafe1e35919ac76db051c71308609e78d)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceRequest_1afcc6f6de48af0546fa928ba72ca66a3b)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceRequest_1ae3dd5c71c7947e1cbe4add6b7a06edc8)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__InstanceRequest_1a5b0340ced10fd5813d796f1659d0960d)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__InstanceRequest_1a4121a0d0b10e936e6d0b4aae89f200fa)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### Members

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__InstanceRequest_1ae2cd025e6006ed29f473eea7e99a5831) <a id="structFRHAPI__InstanceRequest_1ae2cd025e6006ed29f473eea7e99a5831"></a>

Unique ID for the instance, a new one will be generated if not provided.

#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__InstanceRequest_1aa2407894fadb8014e21cd940b890673d) <a id="structFRHAPI__InstanceRequest_1aa2407894fadb8014e21cd940b890673d"></a>

true if InstanceId_Optional has been set to a value

#### `public `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` `[`InstanceStartupParams_Optional`](#structFRHAPI__InstanceRequest_1ae58f5b8ca0b462edb52e44c683a4c1d8) <a id="structFRHAPI__InstanceRequest_1ae58f5b8ca0b462edb52e44c683a4c1d8"></a>

Parameters used by the host to startup. For UE5 this will contain the map and gamemode.

#### `public bool `[`InstanceStartupParams_IsSet`](#structFRHAPI__InstanceRequest_1a31863d6683b7e334f0080c322c519cec) <a id="structFRHAPI__InstanceRequest_1a31863d6683b7e334f0080c322c519cec"></a>

true if InstanceStartupParams_Optional has been set to a value

#### `public ERHAPI_HostType `[`HostType`](#structFRHAPI__InstanceRequest_1ac1fb0f22f5da79bcdf7356ebcba4e972) <a id="structFRHAPI__InstanceRequest_1ac1fb0f22f5da79bcdf7356ebcba4e972"></a>

Type of the host.

#### `public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__InstanceRequest_1aec1e068ce4fb2675ce05dc50f6abcbc8) <a id="structFRHAPI__InstanceRequest_1aec1e068ce4fb2675ce05dc50f6abcbc8"></a>

Player UUID of the host, if the host type is player.

#### `public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__InstanceRequest_1a34fdd62ebfe1782ed08b73f92bfe08ea) <a id="structFRHAPI__InstanceRequest_1a34fdd62ebfe1782ed08b73f92bfe08ea"></a>

true if HostPlayerUuid_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InstanceRequest_1a4c621990c63bed683c60e1665ab72730) <a id="structFRHAPI__InstanceRequest_1a4c621990c63bed683c60e1665ab72730"></a>

instance-defined custom data

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__InstanceRequest_1aa293e408d987dc3ec8df6609d786c943) <a id="structFRHAPI__InstanceRequest_1aa293e408d987dc3ec8df6609d786c943"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__InstanceRequest_1af96a93daa49224834905105d21c5bd36)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InstanceRequest_1af96a93daa49224834905105d21c5bd36"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InstanceRequest_1a481185ea9d96096d351ed84b774a720e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__InstanceRequest_1a481185ea9d96096d351ed84b774a720e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__InstanceRequest_1aa7d8997f1cc19e5bd956356308445ce5)`()` <a id="structFRHAPI__InstanceRequest_1aa7d8997f1cc19e5bd956356308445ce5"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__InstanceRequest_1a2688849dcb166d4cfbb76b11f8427634)`() const` <a id="structFRHAPI__InstanceRequest_1a2688849dcb166d4cfbb76b11f8427634"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__InstanceRequest_1a65fd2a966b346fe2bc54fb26d8666cfd)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceRequest_1a65fd2a966b346fe2bc54fb26d8666cfd"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceId`](#structFRHAPI__InstanceRequest_1ac0e4b0cab82917b1df3fa56f1104a5cc)`(FString & OutValue) const` <a id="structFRHAPI__InstanceRequest_1ac0e4b0cab82917b1df3fa56f1104a5cc"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetInstanceIdOrNull`](#structFRHAPI__InstanceRequest_1a2db86a7e608a88d01c6cc402f660f06b)`()` <a id="structFRHAPI__InstanceRequest_1a2db86a7e608a88d01c6cc402f660f06b"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__InstanceRequest_1a05b27a065f11196c836c639400af54e4)`() const` <a id="structFRHAPI__InstanceRequest_1a05b27a065f11196c836c639400af54e4"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__InstanceRequest_1a5809412ad6749342a811e3c2ce071383)`(FString NewValue)` <a id="structFRHAPI__InstanceRequest_1a5809412ad6749342a811e3c2ce071383"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__InstanceRequest_1a8807721e52eb1a112dcbc1f3dfe40a37)`()` <a id="structFRHAPI__InstanceRequest_1a8807721e52eb1a112dcbc1f3dfe40a37"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1a0cbd5eebba53e976d3fb4724f0ce14c7)`()` <a id="structFRHAPI__InstanceRequest_1a0cbd5eebba53e976d3fb4724f0ce14c7"></a>

Gets the value of InstanceStartupParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1aa5141f5032f82812dd02fd49aa625066)`() const` <a id="structFRHAPI__InstanceRequest_1aa5141f5032f82812dd02fd49aa625066"></a>

Gets the value of InstanceStartupParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1a341119bd46c33b2d330b1c06229d3aef)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & DefaultValue) const` <a id="structFRHAPI__InstanceRequest_1a341119bd46c33b2d330b1c06229d3aef"></a>

Gets the value of InstanceStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1ac3bd45ed219f2019d3e782feca55ee5c)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & OutValue) const` <a id="structFRHAPI__InstanceRequest_1ac3bd45ed219f2019d3e782feca55ee5c"></a>

Fills OutValue with the value of InstanceStartupParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetInstanceStartupParamsOrNull`](#structFRHAPI__InstanceRequest_1a1de4510b22949878cce7d9f59808f7f9)`()` <a id="structFRHAPI__InstanceRequest_1a1de4510b22949878cce7d9f59808f7f9"></a>

Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetInstanceStartupParamsOrNull`](#structFRHAPI__InstanceRequest_1ac63949f7619cb205508acea0d20ae732)`() const` <a id="structFRHAPI__InstanceRequest_1ac63949f7619cb205508acea0d20ae732"></a>

Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1a777df4ce96091f706ebcba369d45ee6b)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` NewValue)` <a id="structFRHAPI__InstanceRequest_1a777df4ce96091f706ebcba369d45ee6b"></a>

Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true.

#### `public inline void `[`ClearInstanceStartupParams`](#structFRHAPI__InstanceRequest_1a45fa6311989ae8b6c8e1784594faca03)`()` <a id="structFRHAPI__InstanceRequest_1a45fa6311989ae8b6c8e1784594faca03"></a>

Clears the value of InstanceStartupParams_Optional and sets InstanceStartupParams_IsSet to false.

#### `public inline ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceRequest_1aa065c59ff35a79e7fcae4eac6cd3fdb6)`()` <a id="structFRHAPI__InstanceRequest_1aa065c59ff35a79e7fcae4eac6cd3fdb6"></a>

Gets the value of HostType.

#### `public inline const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceRequest_1a5787c909c62151814f4eb5bca331c72d)`() const` <a id="structFRHAPI__InstanceRequest_1a5787c909c62151814f4eb5bca331c72d"></a>

Gets the value of HostType.

#### `public inline void `[`SetHostType`](#structFRHAPI__InstanceRequest_1aadedef73ec200362b3b30aad96b4339a)`(ERHAPI_HostType NewValue)` <a id="structFRHAPI__InstanceRequest_1aadedef73ec200362b3b30aad96b4339a"></a>

Sets the value of HostType.

#### `public inline FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1afea933372204e8989f29f367c20797ae)`()` <a id="structFRHAPI__InstanceRequest_1afea933372204e8989f29f367c20797ae"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1ac242ba9cf077f5337f74d21b928fa602)`() const` <a id="structFRHAPI__InstanceRequest_1ac242ba9cf077f5337f74d21b928fa602"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1a1ca12cfad38278490c1d353be29e55b5)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__InstanceRequest_1a1ca12cfad38278490c1d353be29e55b5"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1ab37ad6d7b9d29367d7f1f2e57278172e)`(FGuid & OutValue) const` <a id="structFRHAPI__InstanceRequest_1ab37ad6d7b9d29367d7f1f2e57278172e"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__InstanceRequest_1a82761dba8cc190250bcefe5a6895f83c)`()` <a id="structFRHAPI__InstanceRequest_1a82761dba8cc190250bcefe5a6895f83c"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__InstanceRequest_1a4a12910ce85fe436f07ffda2ffc2ae7b)`() const` <a id="structFRHAPI__InstanceRequest_1a4a12910ce85fe436f07ffda2ffc2ae7b"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1ad05dde1d91e2409db32af22f2652dea3)`(FGuid NewValue)` <a id="structFRHAPI__InstanceRequest_1ad05dde1d91e2409db32af22f2652dea3"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.

#### `public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__InstanceRequest_1ae6ee53368bb4ad87be06ee5973876c1a)`()` <a id="structFRHAPI__InstanceRequest_1ae6ee53368bb4ad87be06ee5973876c1a"></a>

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequest_1a145e751e000f44b175f6ae94325bb3a0)`()` <a id="structFRHAPI__InstanceRequest_1a145e751e000f44b175f6ae94325bb3a0"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequest_1a5fe5f1bf54f6f6373e63b37a6df96b88)`() const` <a id="structFRHAPI__InstanceRequest_1a5fe5f1bf54f6f6373e63b37a6df96b88"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequest_1aa6dae53c35ea7435ccfe5d8afb1b2ec6)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__InstanceRequest_1aa6dae53c35ea7435ccfe5d8afb1b2ec6"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__InstanceRequest_1aafe1e35919ac76db051c71308609e78d)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__InstanceRequest_1aafe1e35919ac76db051c71308609e78d"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceRequest_1afcc6f6de48af0546fa928ba72ca66a3b)`()` <a id="structFRHAPI__InstanceRequest_1afcc6f6de48af0546fa928ba72ca66a3b"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceRequest_1ae3dd5c71c7947e1cbe4add6b7a06edc8)`() const` <a id="structFRHAPI__InstanceRequest_1ae3dd5c71c7947e1cbe4add6b7a06edc8"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__InstanceRequest_1a5b0340ced10fd5813d796f1659d0960d)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__InstanceRequest_1a5b0340ced10fd5813d796f1659d0960d"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__InstanceRequest_1a4121a0d0b10e936e6d0b4aae89f200fa)`()` <a id="structFRHAPI__InstanceRequest_1a4121a0d0b10e936e6d0b4aae89f200fa"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

