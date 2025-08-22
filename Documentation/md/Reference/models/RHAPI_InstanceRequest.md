---
title: RHAPI_InstanceRequest
---

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

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`InstanceId_Optional`](#structFRHAPI__InstanceRequest_1ae2cd025e6006ed29f473eea7e99a5831) | Unique ID for the instance, a new one will be generated if not provided.
`public bool `[`InstanceId_IsSet`](#structFRHAPI__InstanceRequest_1aa2407894fadb8014e21cd940b890673d) | true if InstanceId_Optional has been set to a value
`public `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` `[`InstanceStartupParams_Optional`](#structFRHAPI__InstanceRequest_1ae58f5b8ca0b462edb52e44c683a4c1d8) | Parameters used by the host to startup. For UE5 this will contain the map and gamemode.
`public bool `[`InstanceStartupParams_IsSet`](#structFRHAPI__InstanceRequest_1a31863d6683b7e334f0080c322c519cec) | true if InstanceStartupParams_Optional has been set to a value
`public ERHAPI_HostType `[`HostType_Optional`](#structFRHAPI__InstanceRequest_1ab49126ea36e13b898cc993ead30d988f) | Type of the host.
`public bool `[`HostType_IsSet`](#structFRHAPI__InstanceRequest_1a0af173a7bfef1258354cf2d97f62f298) | true if HostType_Optional has been set to a value
`public FGuid `[`InstanceRequestTemplateId_Optional`](#structFRHAPI__InstanceRequest_1a9871b3fd123926136de04d484e8d3b52) | Which instance request template should be used to request this instance. Takes priority over instance_startup_params and host_type.
`public bool `[`InstanceRequestTemplateId_IsSet`](#structFRHAPI__InstanceRequest_1aa95522d7e43e4ad904241b8294d2d530) | true if InstanceRequestTemplateId_Optional has been set to a value
`public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__InstanceRequest_1aec1e068ce4fb2675ce05dc50f6abcbc8) | Player UUID of the host, if the host type is player.
`public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__InstanceRequest_1a34fdd62ebfe1782ed08b73f92bfe08ea) | true if HostPlayerUuid_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InstanceRequest_1a4c621990c63bed683c60e1665ab72730) | instance-defined custom data
`public bool `[`CustomData_IsSet`](#structFRHAPI__InstanceRequest_1aa293e408d987dc3ec8df6609d786c943) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InstanceRequest_1a118179f46525e116468fbb0d160fd98b)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InstanceRequest_1a3d9be446365be29fec80b4ef08ceddc9)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__InstanceRequest_1a2a648a2667ba84d4d4b7497dff281ae0)`()` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__InstanceRequest_1aa3c8bd9f7001fc3af3b6562df4ca57bb)`() const` | Gets the value of InstanceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__InstanceRequest_1a26820a73d2c7dbdb4d66b2405923e515)`(const FString & DefaultValue) const` | Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__InstanceRequest_1ae26981e5f444ad42de87c6001ff81511)`(FString & OutValue) const` | Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__InstanceRequest_1a335d9ebcfe9861a433f7cae19865ee83)`()` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__InstanceRequest_1a096562bb8c5d3447ecc72aff80086568)`() const` | Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__InstanceRequest_1aefef106097e5101bc964234a3379a050)`(const FString & NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__InstanceRequest_1aa08b05d2147ec154057ea916a85d9ffe)`(FString && NewValue)` | Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceId`](#structFRHAPI__InstanceRequest_1a8807721e52eb1a112dcbc1f3dfe40a37)`()` | Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1a138036c1a81a8541b8c5f71c236639ff)`()` | Gets the value of InstanceStartupParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1a5ff7fe268ac869d752cb5032f9fb2360)`() const` | Gets the value of InstanceStartupParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1a4f4b30a560f25b21d8e23ffbed78a31c)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & DefaultValue) const` | Gets the value of InstanceStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1a697240bb6ee90a5082acb42e41b78524)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & OutValue) const` | Fills OutValue with the value of InstanceStartupParams_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetInstanceStartupParamsOrNull`](#structFRHAPI__InstanceRequest_1a9adf535cd929449fd55bb5a2c6a31082)`()` | Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetInstanceStartupParamsOrNull`](#structFRHAPI__InstanceRequest_1a505ebd42cfb92cd29e6bd09ce99d4644)`() const` | Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1a469d44e70d21c4418ccf205222969497)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & NewValue)` | Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1aec4f0b565e261539d98bca7c3b65aea3)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` && NewValue)` | Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true using move semantics.
`public inline void `[`ClearInstanceStartupParams`](#structFRHAPI__InstanceRequest_1a45fa6311989ae8b6c8e1784594faca03)`()` | Clears the value of InstanceStartupParams_Optional and sets InstanceStartupParams_IsSet to false.
`public inline FORCEINLINE ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceRequest_1aa6c84fc41203fefe2c8063d110242fda)`()` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceRequest_1afe4ae7c8ee5f3f54fe49332276e4aa49)`() const` | Gets the value of HostType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceRequest_1a0dd64cd35bb54e135f65f79588bcfa8a)`(const ERHAPI_HostType & DefaultValue) const` | Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetHostType`](#structFRHAPI__InstanceRequest_1a7055f357b0a2f97800e53af6d8f37d2a)`(ERHAPI_HostType & OutValue) const` | Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__InstanceRequest_1a226b46ab421a1afe3f36c19c74adc688)`()` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__InstanceRequest_1aa5507210a42a8d9f8e99c774116ff970)`() const` | Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetHostType`](#structFRHAPI__InstanceRequest_1a290716ec3c22cb7d994d41217aa4aa99)`(const ERHAPI_HostType & NewValue)` | Sets the value of HostType_Optional and also sets HostType_IsSet to true.
`public inline FORCEINLINE void `[`SetHostType`](#structFRHAPI__InstanceRequest_1a9b0f51ebf6e62be3be349b87cd5fe480)`(ERHAPI_HostType && NewValue)` | Sets the value of HostType_Optional and also sets HostType_IsSet to true using move semantics.
`public inline void `[`ClearHostType`](#structFRHAPI__InstanceRequest_1a950f4a5ce36d9aa40cb8598a4efcebf5)`()` | Clears the value of HostType_Optional and sets HostType_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequest_1ae1224b22088818d6d64017f06002b0dd)`()` | Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequest_1a55e3c9b029861503802649efd1a6f823)`() const` | Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequest_1affeae3868fe711ee02f1b3674add373a)`(const FGuid & DefaultValue) const` | Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequest_1a905f66c09e2961d0e752889cc4f34717)`(FGuid & OutValue) const` | Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__InstanceRequest_1ac5a14c379852280d64ff829c3dd44048)`()` | Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__InstanceRequest_1a464ad7f21fc9b64cf6b5b4bbb6a5bb39)`() const` | Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequest_1afbb38d8987d9999b1601e4756337d454)`(const FGuid & NewValue)` | Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true.
`public inline FORCEINLINE void `[`SetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequest_1ac0169c3656d8211a3489ee94f1bf0eb8)`(FGuid && NewValue)` | Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true using move semantics.
`public inline void `[`ClearInstanceRequestTemplateId`](#structFRHAPI__InstanceRequest_1a7215adf9c4aa53d153b0bc4f024dfc94)`()` | Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1a9a48d287311450185e44d7efa9697d86)`()` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1a9f6f04dc8cd68f977f8664b9e778aeca)`() const` | Gets the value of HostPlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1a90a813fdb0e88e8c684eb20c2630e9ba)`(const FGuid & DefaultValue) const` | Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1ad3ee7ad45ed3e4f59022d61c6aaa0880)`(FGuid & OutValue) const` | Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__InstanceRequest_1aa0621e9e42e3564d9696152213834ccf)`()` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__InstanceRequest_1a7a8f2bc6be9787b81c39a623a76f05ad)`() const` | Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1a75f942d71ed80e183cff863caff06499)`(const FGuid & NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1a1ad7d91f473be5d57af0435e4b1af529)`(FGuid && NewValue)` | Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__InstanceRequest_1ae6ee53368bb4ad87be06ee5973876c1a)`()` | Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequest_1a5534cad565d66249e23d4e72255e5093)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequest_1a4257db5821ba2113799aebac673d0b36)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequest_1ae7b457da59d93007d331a5369dbe566a)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__InstanceRequest_1a43d8f64ea513870c864e32cbdc5c54b5)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceRequest_1ab3cf99f96e5ca94488e94a4fee201c40)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceRequest_1aa0ad7a5ba323b7fee51a04bd6caa060e)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceRequest_1ac04b03b49d3366b9ba385337acd3c256)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceRequest_1ae5efb336966374d4c7a43db510aee109)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__InstanceRequest_1a4121a0d0b10e936e6d0b4aae89f200fa)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

### Members

#### `public FString `[`InstanceId_Optional`](#structFRHAPI__InstanceRequest_1ae2cd025e6006ed29f473eea7e99a5831) <a id="structFRHAPI__InstanceRequest_1ae2cd025e6006ed29f473eea7e99a5831"></a>

Unique ID for the instance, a new one will be generated if not provided.

#### `public bool `[`InstanceId_IsSet`](#structFRHAPI__InstanceRequest_1aa2407894fadb8014e21cd940b890673d) <a id="structFRHAPI__InstanceRequest_1aa2407894fadb8014e21cd940b890673d"></a>

true if InstanceId_Optional has been set to a value

#### `public `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` `[`InstanceStartupParams_Optional`](#structFRHAPI__InstanceRequest_1ae58f5b8ca0b462edb52e44c683a4c1d8) <a id="structFRHAPI__InstanceRequest_1ae58f5b8ca0b462edb52e44c683a4c1d8"></a>

Parameters used by the host to startup. For UE5 this will contain the map and gamemode.

#### `public bool `[`InstanceStartupParams_IsSet`](#structFRHAPI__InstanceRequest_1a31863d6683b7e334f0080c322c519cec) <a id="structFRHAPI__InstanceRequest_1a31863d6683b7e334f0080c322c519cec"></a>

true if InstanceStartupParams_Optional has been set to a value

#### `public ERHAPI_HostType `[`HostType_Optional`](#structFRHAPI__InstanceRequest_1ab49126ea36e13b898cc993ead30d988f) <a id="structFRHAPI__InstanceRequest_1ab49126ea36e13b898cc993ead30d988f"></a>

Type of the host.

#### `public bool `[`HostType_IsSet`](#structFRHAPI__InstanceRequest_1a0af173a7bfef1258354cf2d97f62f298) <a id="structFRHAPI__InstanceRequest_1a0af173a7bfef1258354cf2d97f62f298"></a>

true if HostType_Optional has been set to a value

#### `public FGuid `[`InstanceRequestTemplateId_Optional`](#structFRHAPI__InstanceRequest_1a9871b3fd123926136de04d484e8d3b52) <a id="structFRHAPI__InstanceRequest_1a9871b3fd123926136de04d484e8d3b52"></a>

Which instance request template should be used to request this instance. Takes priority over instance_startup_params and host_type.

#### `public bool `[`InstanceRequestTemplateId_IsSet`](#structFRHAPI__InstanceRequest_1aa95522d7e43e4ad904241b8294d2d530) <a id="structFRHAPI__InstanceRequest_1aa95522d7e43e4ad904241b8294d2d530"></a>

true if InstanceRequestTemplateId_Optional has been set to a value

#### `public FGuid `[`HostPlayerUuid_Optional`](#structFRHAPI__InstanceRequest_1aec1e068ce4fb2675ce05dc50f6abcbc8) <a id="structFRHAPI__InstanceRequest_1aec1e068ce4fb2675ce05dc50f6abcbc8"></a>

Player UUID of the host, if the host type is player.

#### `public bool `[`HostPlayerUuid_IsSet`](#structFRHAPI__InstanceRequest_1a34fdd62ebfe1782ed08b73f92bfe08ea) <a id="structFRHAPI__InstanceRequest_1a34fdd62ebfe1782ed08b73f92bfe08ea"></a>

true if HostPlayerUuid_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InstanceRequest_1a4c621990c63bed683c60e1665ab72730) <a id="structFRHAPI__InstanceRequest_1a4c621990c63bed683c60e1665ab72730"></a>

instance-defined custom data

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__InstanceRequest_1aa293e408d987dc3ec8df6609d786c943) <a id="structFRHAPI__InstanceRequest_1aa293e408d987dc3ec8df6609d786c943"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__InstanceRequest_1a118179f46525e116468fbb0d160fd98b)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InstanceRequest_1a118179f46525e116468fbb0d160fd98b"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InstanceRequest_1a3d9be446365be29fec80b4ef08ceddc9)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__InstanceRequest_1a3d9be446365be29fec80b4ef08ceddc9"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__InstanceRequest_1a2a648a2667ba84d4d4b7497dff281ae0)`()` <a id="structFRHAPI__InstanceRequest_1a2a648a2667ba84d4d4b7497dff281ae0"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__InstanceRequest_1aa3c8bd9f7001fc3af3b6562df4ca57bb)`() const` <a id="structFRHAPI__InstanceRequest_1aa3c8bd9f7001fc3af3b6562df4ca57bb"></a>

Gets the value of InstanceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__InstanceRequest_1a26820a73d2c7dbdb4d66b2405923e515)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceRequest_1a26820a73d2c7dbdb4d66b2405923e515"></a>

Gets the value of InstanceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceId`](#structFRHAPI__InstanceRequest_1ae26981e5f444ad42de87c6001ff81511)`(FString & OutValue) const` <a id="structFRHAPI__InstanceRequest_1ae26981e5f444ad42de87c6001ff81511"></a>

Fills OutValue with the value of InstanceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetInstanceIdOrNull`](#structFRHAPI__InstanceRequest_1a335d9ebcfe9861a433f7cae19865ee83)`()` <a id="structFRHAPI__InstanceRequest_1a335d9ebcfe9861a433f7cae19865ee83"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetInstanceIdOrNull`](#structFRHAPI__InstanceRequest_1a096562bb8c5d3447ecc72aff80086568)`() const` <a id="structFRHAPI__InstanceRequest_1a096562bb8c5d3447ecc72aff80086568"></a>

Returns a pointer to InstanceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__InstanceRequest_1aefef106097e5101bc964234a3379a050)`(const FString & NewValue)` <a id="structFRHAPI__InstanceRequest_1aefef106097e5101bc964234a3379a050"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__InstanceRequest_1aa08b05d2147ec154057ea916a85d9ffe)`(FString && NewValue)` <a id="structFRHAPI__InstanceRequest_1aa08b05d2147ec154057ea916a85d9ffe"></a>

Sets the value of InstanceId_Optional and also sets InstanceId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceId`](#structFRHAPI__InstanceRequest_1a8807721e52eb1a112dcbc1f3dfe40a37)`()` <a id="structFRHAPI__InstanceRequest_1a8807721e52eb1a112dcbc1f3dfe40a37"></a>

Clears the value of InstanceId_Optional and sets InstanceId_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1a138036c1a81a8541b8c5f71c236639ff)`()` <a id="structFRHAPI__InstanceRequest_1a138036c1a81a8541b8c5f71c236639ff"></a>

Gets the value of InstanceStartupParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1a5ff7fe268ac869d752cb5032f9fb2360)`() const` <a id="structFRHAPI__InstanceRequest_1a5ff7fe268ac869d752cb5032f9fb2360"></a>

Gets the value of InstanceStartupParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1a4f4b30a560f25b21d8e23ffbed78a31c)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & DefaultValue) const` <a id="structFRHAPI__InstanceRequest_1a4f4b30a560f25b21d8e23ffbed78a31c"></a>

Gets the value of InstanceStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1a697240bb6ee90a5082acb42e41b78524)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & OutValue) const` <a id="structFRHAPI__InstanceRequest_1a697240bb6ee90a5082acb42e41b78524"></a>

Fills OutValue with the value of InstanceStartupParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetInstanceStartupParamsOrNull`](#structFRHAPI__InstanceRequest_1a9adf535cd929449fd55bb5a2c6a31082)`()` <a id="structFRHAPI__InstanceRequest_1a9adf535cd929449fd55bb5a2c6a31082"></a>

Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetInstanceStartupParamsOrNull`](#structFRHAPI__InstanceRequest_1a505ebd42cfb92cd29e6bd09ce99d4644)`() const` <a id="structFRHAPI__InstanceRequest_1a505ebd42cfb92cd29e6bd09ce99d4644"></a>

Returns a pointer to InstanceStartupParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1a469d44e70d21c4418ccf205222969497)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & NewValue)` <a id="structFRHAPI__InstanceRequest_1a469d44e70d21c4418ccf205222969497"></a>

Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceStartupParams`](#structFRHAPI__InstanceRequest_1aec4f0b565e261539d98bca7c3b65aea3)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` && NewValue)` <a id="structFRHAPI__InstanceRequest_1aec4f0b565e261539d98bca7c3b65aea3"></a>

Sets the value of InstanceStartupParams_Optional and also sets InstanceStartupParams_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceStartupParams`](#structFRHAPI__InstanceRequest_1a45fa6311989ae8b6c8e1784594faca03)`()` <a id="structFRHAPI__InstanceRequest_1a45fa6311989ae8b6c8e1784594faca03"></a>

Clears the value of InstanceStartupParams_Optional and sets InstanceStartupParams_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceRequest_1aa6c84fc41203fefe2c8063d110242fda)`()` <a id="structFRHAPI__InstanceRequest_1aa6c84fc41203fefe2c8063d110242fda"></a>

Gets the value of HostType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceRequest_1afe4ae7c8ee5f3f54fe49332276e4aa49)`() const` <a id="structFRHAPI__InstanceRequest_1afe4ae7c8ee5f3f54fe49332276e4aa49"></a>

Gets the value of HostType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_HostType & `[`GetHostType`](#structFRHAPI__InstanceRequest_1a0dd64cd35bb54e135f65f79588bcfa8a)`(const ERHAPI_HostType & DefaultValue) const` <a id="structFRHAPI__InstanceRequest_1a0dd64cd35bb54e135f65f79588bcfa8a"></a>

Gets the value of HostType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetHostType`](#structFRHAPI__InstanceRequest_1a7055f357b0a2f97800e53af6d8f37d2a)`(ERHAPI_HostType & OutValue) const` <a id="structFRHAPI__InstanceRequest_1a7055f357b0a2f97800e53af6d8f37d2a"></a>

Fills OutValue with the value of HostType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__InstanceRequest_1a226b46ab421a1afe3f36c19c74adc688)`()` <a id="structFRHAPI__InstanceRequest_1a226b46ab421a1afe3f36c19c74adc688"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_HostType * `[`GetHostTypeOrNull`](#structFRHAPI__InstanceRequest_1aa5507210a42a8d9f8e99c774116ff970)`() const` <a id="structFRHAPI__InstanceRequest_1aa5507210a42a8d9f8e99c774116ff970"></a>

Returns a pointer to HostType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetHostType`](#structFRHAPI__InstanceRequest_1a290716ec3c22cb7d994d41217aa4aa99)`(const ERHAPI_HostType & NewValue)` <a id="structFRHAPI__InstanceRequest_1a290716ec3c22cb7d994d41217aa4aa99"></a>

Sets the value of HostType_Optional and also sets HostType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetHostType`](#structFRHAPI__InstanceRequest_1a9b0f51ebf6e62be3be349b87cd5fe480)`(ERHAPI_HostType && NewValue)` <a id="structFRHAPI__InstanceRequest_1a9b0f51ebf6e62be3be349b87cd5fe480"></a>

Sets the value of HostType_Optional and also sets HostType_IsSet to true using move semantics.

#### `public inline void `[`ClearHostType`](#structFRHAPI__InstanceRequest_1a950f4a5ce36d9aa40cb8598a4efcebf5)`()` <a id="structFRHAPI__InstanceRequest_1a950f4a5ce36d9aa40cb8598a4efcebf5"></a>

Clears the value of HostType_Optional and sets HostType_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequest_1ae1224b22088818d6d64017f06002b0dd)`()` <a id="structFRHAPI__InstanceRequest_1ae1224b22088818d6d64017f06002b0dd"></a>

Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequest_1a55e3c9b029861503802649efd1a6f823)`() const` <a id="structFRHAPI__InstanceRequest_1a55e3c9b029861503802649efd1a6f823"></a>

Gets the value of InstanceRequestTemplateId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequest_1affeae3868fe711ee02f1b3674add373a)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__InstanceRequest_1affeae3868fe711ee02f1b3674add373a"></a>

Gets the value of InstanceRequestTemplateId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequest_1a905f66c09e2961d0e752889cc4f34717)`(FGuid & OutValue) const` <a id="structFRHAPI__InstanceRequest_1a905f66c09e2961d0e752889cc4f34717"></a>

Fills OutValue with the value of InstanceRequestTemplateId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__InstanceRequest_1ac5a14c379852280d64ff829c3dd44048)`()` <a id="structFRHAPI__InstanceRequest_1ac5a14c379852280d64ff829c3dd44048"></a>

Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetInstanceRequestTemplateIdOrNull`](#structFRHAPI__InstanceRequest_1a464ad7f21fc9b64cf6b5b4bbb6a5bb39)`() const` <a id="structFRHAPI__InstanceRequest_1a464ad7f21fc9b64cf6b5b4bbb6a5bb39"></a>

Returns a pointer to InstanceRequestTemplateId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequest_1afbb38d8987d9999b1601e4756337d454)`(const FGuid & NewValue)` <a id="structFRHAPI__InstanceRequest_1afbb38d8987d9999b1601e4756337d454"></a>

Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInstanceRequestTemplateId`](#structFRHAPI__InstanceRequest_1ac0169c3656d8211a3489ee94f1bf0eb8)`(FGuid && NewValue)` <a id="structFRHAPI__InstanceRequest_1ac0169c3656d8211a3489ee94f1bf0eb8"></a>

Sets the value of InstanceRequestTemplateId_Optional and also sets InstanceRequestTemplateId_IsSet to true using move semantics.

#### `public inline void `[`ClearInstanceRequestTemplateId`](#structFRHAPI__InstanceRequest_1a7215adf9c4aa53d153b0bc4f024dfc94)`()` <a id="structFRHAPI__InstanceRequest_1a7215adf9c4aa53d153b0bc4f024dfc94"></a>

Clears the value of InstanceRequestTemplateId_Optional and sets InstanceRequestTemplateId_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1a9a48d287311450185e44d7efa9697d86)`()` <a id="structFRHAPI__InstanceRequest_1a9a48d287311450185e44d7efa9697d86"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1a9f6f04dc8cd68f977f8664b9e778aeca)`() const` <a id="structFRHAPI__InstanceRequest_1a9f6f04dc8cd68f977f8664b9e778aeca"></a>

Gets the value of HostPlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1a90a813fdb0e88e8c684eb20c2630e9ba)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__InstanceRequest_1a90a813fdb0e88e8c684eb20c2630e9ba"></a>

Gets the value of HostPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1ad3ee7ad45ed3e4f59022d61c6aaa0880)`(FGuid & OutValue) const` <a id="structFRHAPI__InstanceRequest_1ad3ee7ad45ed3e4f59022d61c6aaa0880"></a>

Fills OutValue with the value of HostPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__InstanceRequest_1aa0621e9e42e3564d9696152213834ccf)`()` <a id="structFRHAPI__InstanceRequest_1aa0621e9e42e3564d9696152213834ccf"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetHostPlayerUuidOrNull`](#structFRHAPI__InstanceRequest_1a7a8f2bc6be9787b81c39a623a76f05ad)`() const` <a id="structFRHAPI__InstanceRequest_1a7a8f2bc6be9787b81c39a623a76f05ad"></a>

Returns a pointer to HostPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1a75f942d71ed80e183cff863caff06499)`(const FGuid & NewValue)` <a id="structFRHAPI__InstanceRequest_1a75f942d71ed80e183cff863caff06499"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetHostPlayerUuid`](#structFRHAPI__InstanceRequest_1a1ad7d91f473be5d57af0435e4b1af529)`(FGuid && NewValue)` <a id="structFRHAPI__InstanceRequest_1a1ad7d91f473be5d57af0435e4b1af529"></a>

Sets the value of HostPlayerUuid_Optional and also sets HostPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearHostPlayerUuid`](#structFRHAPI__InstanceRequest_1ae6ee53368bb4ad87be06ee5973876c1a)`()` <a id="structFRHAPI__InstanceRequest_1ae6ee53368bb4ad87be06ee5973876c1a"></a>

Clears the value of HostPlayerUuid_Optional and sets HostPlayerUuid_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequest_1a5534cad565d66249e23d4e72255e5093)`()` <a id="structFRHAPI__InstanceRequest_1a5534cad565d66249e23d4e72255e5093"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequest_1a4257db5821ba2113799aebac673d0b36)`() const` <a id="structFRHAPI__InstanceRequest_1a4257db5821ba2113799aebac673d0b36"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceRequest_1ae7b457da59d93007d331a5369dbe566a)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__InstanceRequest_1ae7b457da59d93007d331a5369dbe566a"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__InstanceRequest_1a43d8f64ea513870c864e32cbdc5c54b5)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__InstanceRequest_1a43d8f64ea513870c864e32cbdc5c54b5"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceRequest_1ab3cf99f96e5ca94488e94a4fee201c40)`()` <a id="structFRHAPI__InstanceRequest_1ab3cf99f96e5ca94488e94a4fee201c40"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceRequest_1aa0ad7a5ba323b7fee51a04bd6caa060e)`() const` <a id="structFRHAPI__InstanceRequest_1aa0ad7a5ba323b7fee51a04bd6caa060e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceRequest_1ac04b03b49d3366b9ba385337acd3c256)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__InstanceRequest_1ac04b03b49d3366b9ba385337acd3c256"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceRequest_1ae5efb336966374d4c7a43db510aee109)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__InstanceRequest_1ae5efb336966374d4c7a43db510aee109"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__InstanceRequest_1a4121a0d0b10e936e6d0b4aae89f200fa)`()` <a id="structFRHAPI__InstanceRequest_1a4121a0d0b10e936e6d0b4aae89f200fa"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

