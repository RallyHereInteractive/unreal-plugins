---
title: RHAPI_InstanceInfoUpdate
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InstanceInfoUpdate`](#structFRHAPI__InstanceInfoUpdate) | A request body to update the instance resource in a session.

## struct `FRHAPI_InstanceInfoUpdate` <a id="structFRHAPI__InstanceInfoUpdate"></a>

```
struct FRHAPI_InstanceInfoUpdate
  : public FRHAPI_Model
```

A request body to update the instance resource in a session.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`AllocationId_Optional`](#structFRHAPI__InstanceInfoUpdate_1a421c12a8cd1dda60260d36fa0ddfe4d4) | Allocation ID for instance that's been spun up.
`public bool `[`AllocationId_IsSet`](#structFRHAPI__InstanceInfoUpdate_1ac508606b8473f2e8c181113f9854e38b) | true if AllocationId_Optional has been set to a value
`public ERHAPI_InstanceJoinableStatus `[`JoinStatus_Optional`](#structFRHAPI__InstanceInfoUpdate_1ac4dc17da51fdc32b763982c1ce5f2280) | Is the instance joinable at this time?
`public bool `[`JoinStatus_IsSet`](#structFRHAPI__InstanceInfoUpdate_1a58d43b5bcd88cb03d2947cbc05d281c3) | true if JoinStatus_Optional has been set to a value
`public `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` `[`JoinParams_Optional`](#structFRHAPI__InstanceInfoUpdate_1a67e685eb7f2a83856062a62b1dd97f0f) | Parameters to join the instance.
`public bool `[`JoinParams_IsSet`](#structFRHAPI__InstanceInfoUpdate_1a282916807722278b12016aa1a3ed5b75) | true if JoinParams_Optional has been set to a value
`public FString `[`Version_Optional`](#structFRHAPI__InstanceInfoUpdate_1a35ab20e36eed28c547f90e48589061d2) | Product Client Version number. Used for compatibility checking with players. Must be compatible with all players to spawn.
`public bool `[`Version_IsSet`](#structFRHAPI__InstanceInfoUpdate_1a62dd84585fe7d789fd5d075e16cdf173) | true if Version_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InstanceInfoUpdate_1a4f9df70e7dbb3fa7ad0267292d336c0c) | instance-defined custom data
`public bool `[`CustomData_IsSet`](#structFRHAPI__InstanceInfoUpdate_1a512d5615df2069935e21dcad2a28a5b1) | true if CustomData_Optional has been set to a value
`public FString `[`MatchId_Optional`](#structFRHAPI__InstanceInfoUpdate_1a24d15214932583c22aa8d389611e0092) | The match ID associated with this instance.
`public bool `[`MatchId_IsSet`](#structFRHAPI__InstanceInfoUpdate_1a9c5ec15fbe8189b275753df72d85866e) | true if MatchId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InstanceInfoUpdate_1a893ac9eabb30b799bb1abccfb8701659)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InstanceInfoUpdate_1a526a4fd1b4983e172afe49440e6b4c12)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a6497c0956fc25f8412692caae1fc7a7f)`()` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a093fd5951a724cb7f5d6f3510a3cba9a)`() const` | Gets the value of AllocationId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1aa444f7153ce71610694716a93ef394b6)`(const FString & DefaultValue) const` | Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a1b44c9c6a3cedb978aeced7a01aee2e0)`(FString & OutValue) const` | Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetAllocationIdOrNull`](#structFRHAPI__InstanceInfoUpdate_1aa1fcf9dcbf854ae46a53e22d8b9b663a)`()` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__InstanceInfoUpdate_1a62efd98bd731430e5558c81bef4aabac)`() const` | Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a1319c1e84b3e741ba2f4e89aa7c4f43b)`(const FString & NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.
`public inline FORCEINLINE void `[`SetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a54977cda32d44e36dbbd7ed32bb7bdd6)`(FString && NewValue)` | Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.
`public inline void `[`ClearAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a1ce0fdb8b13b7f7419efa864dfa511fd)`()` | Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.
`public inline FORCEINLINE ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1a388e7d7a6ea1be84fdf71fefa6bbe2e5)`()` | Gets the value of JoinStatus_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1abcc78efd4fd8b2b458814c6af2c18855)`() const` | Gets the value of JoinStatus_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1a402e609430a39279e2f68477901c057f)`(const ERHAPI_InstanceJoinableStatus & DefaultValue) const` | Gets the value of JoinStatus_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1af5b23bfa6ad6b6be1b25c024699435ad)`(ERHAPI_InstanceJoinableStatus & OutValue) const` | Fills OutValue with the value of JoinStatus_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__InstanceInfoUpdate_1a9a016fd0bfef645fdfadabe49d11d91e)`()` | Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__InstanceInfoUpdate_1a1ecbafc84e2b1b7e6f14689e69760be9)`() const` | Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1a73a899462240881b9903e9de59d32488)`(const ERHAPI_InstanceJoinableStatus & NewValue)` | Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true.
`public inline FORCEINLINE void `[`SetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1a4ecd64a5a318d0371a5c1783135c3bc4)`(ERHAPI_InstanceJoinableStatus && NewValue)` | Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true using move semantics.
`public inline void `[`ClearJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1a08d153a486e719dd86f7272688d3fd6f)`()` | Clears the value of JoinStatus_Optional and sets JoinStatus_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1a213731a8b889e66650918023aeba5e2d)`()` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1ae3749b7b841720b35f936c5c18a922f6)`() const` | Gets the value of JoinParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1a61a2e5a25a7c9139d2cb60ac4da605ac)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` | Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1a2f619b4c11c76602329b544d9802bd9d)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` | Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__InstanceInfoUpdate_1a5380e0a54eb8d7ce4229e20730595583)`()` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__InstanceInfoUpdate_1adf10677c7ff5ee03d8db11f80812f232)`() const` | Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1a33e4059739ffa3c9ccbd1ef688f7954d)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & NewValue)` | Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.
`public inline FORCEINLINE void `[`SetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1ad1774f3320972a4d2a64b2502ebda040)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` && NewValue)` | Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true using move semantics.
`public inline void `[`ClearJoinParams`](#structFRHAPI__InstanceInfoUpdate_1a8fb8d668734c8ac5966d242b3c45898d)`()` | Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.
`public inline FORCEINLINE FString & `[`GetVersion`](#structFRHAPI__InstanceInfoUpdate_1a8798f65b16fe47a751b74cb0d02ea029)`()` | Gets the value of Version_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetVersion`](#structFRHAPI__InstanceInfoUpdate_1a3c3014f00f9ecb46d4ec196fa0f1b198)`() const` | Gets the value of Version_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetVersion`](#structFRHAPI__InstanceInfoUpdate_1a58f1bee82f8bee6fd0f7f9135b5fb9a9)`(const FString & DefaultValue) const` | Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetVersion`](#structFRHAPI__InstanceInfoUpdate_1ae6daedfb843675d900525fbcb468f945)`(FString & OutValue) const` | Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetVersionOrNull`](#structFRHAPI__InstanceInfoUpdate_1ad4e23bab35d82db92b983160b29beac5)`()` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetVersionOrNull`](#structFRHAPI__InstanceInfoUpdate_1a8808b0c90eee118116e3a0149107fefb)`() const` | Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetVersion`](#structFRHAPI__InstanceInfoUpdate_1ab960324a613170cfe011550913f9f7b9)`(const FString & NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true.
`public inline FORCEINLINE void `[`SetVersion`](#structFRHAPI__InstanceInfoUpdate_1af126960e8035bbb10a6f08941722b6be)`(FString && NewValue)` | Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.
`public inline void `[`ClearVersion`](#structFRHAPI__InstanceInfoUpdate_1a38e9c831413bc30e6d00a4c6ce9930e9)`()` | Clears the value of Version_Optional and sets Version_IsSet to false.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfoUpdate_1a6a773850b9d12663e1cfb03a67d75fc0)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfoUpdate_1acc84a5abb6bfbc8cd3ae92be02ecbffb)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfoUpdate_1a1d58807211ee1fccb4c0d3d5b9a2bf92)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__InstanceInfoUpdate_1a62dd41d976494e2fd71b056d8d879f49)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceInfoUpdate_1aaccda437227e89e9a0dbdfdbc0ca7c46)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceInfoUpdate_1aeaeb0ebde7e19e3143d5e148a0f105fd)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceInfoUpdate_1ab824e6b926e16bc3984cb2bb7c2fa32a)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceInfoUpdate_1a9a8375a22ae0bc76bb16245141f87ee9)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__InstanceInfoUpdate_1a9b87f305257195c6b1f5f2e407e94ff4)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__InstanceInfoUpdate_1adc12280cf289c58feef18bbb46497837)`()` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__InstanceInfoUpdate_1a4136bfbba6067014ce4ff85dc45636ae)`() const` | Gets the value of MatchId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__InstanceInfoUpdate_1a24e57a334d948cc72bb34db3c92f2e2d)`(const FString & DefaultValue) const` | Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__InstanceInfoUpdate_1a64fca92c152a74ffdc00e110b5a6f686)`(FString & OutValue) const` | Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__InstanceInfoUpdate_1a82aca676f8af02774f6ea194c99c1907)`()` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__InstanceInfoUpdate_1a0970fe86bc1f763a6c5ec3441a4d0d8b)`() const` | Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__InstanceInfoUpdate_1a90a62d9752dbd1ae9769a06a9f808b55)`(const FString & NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.
`public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__InstanceInfoUpdate_1a92edc9d3d46bd112a216f93f67d9b3ff)`(FString && NewValue)` | Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.
`public inline void `[`ClearMatchId`](#structFRHAPI__InstanceInfoUpdate_1a3c0613c760b638002bda9e24e1defc32)`()` | Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

### Members

#### `public FString `[`AllocationId_Optional`](#structFRHAPI__InstanceInfoUpdate_1a421c12a8cd1dda60260d36fa0ddfe4d4) <a id="structFRHAPI__InstanceInfoUpdate_1a421c12a8cd1dda60260d36fa0ddfe4d4"></a>

Allocation ID for instance that's been spun up.

#### `public bool `[`AllocationId_IsSet`](#structFRHAPI__InstanceInfoUpdate_1ac508606b8473f2e8c181113f9854e38b) <a id="structFRHAPI__InstanceInfoUpdate_1ac508606b8473f2e8c181113f9854e38b"></a>

true if AllocationId_Optional has been set to a value

#### `public ERHAPI_InstanceJoinableStatus `[`JoinStatus_Optional`](#structFRHAPI__InstanceInfoUpdate_1ac4dc17da51fdc32b763982c1ce5f2280) <a id="structFRHAPI__InstanceInfoUpdate_1ac4dc17da51fdc32b763982c1ce5f2280"></a>

Is the instance joinable at this time?

#### `public bool `[`JoinStatus_IsSet`](#structFRHAPI__InstanceInfoUpdate_1a58d43b5bcd88cb03d2947cbc05d281c3) <a id="structFRHAPI__InstanceInfoUpdate_1a58d43b5bcd88cb03d2947cbc05d281c3"></a>

true if JoinStatus_Optional has been set to a value

#### `public `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` `[`JoinParams_Optional`](#structFRHAPI__InstanceInfoUpdate_1a67e685eb7f2a83856062a62b1dd97f0f) <a id="structFRHAPI__InstanceInfoUpdate_1a67e685eb7f2a83856062a62b1dd97f0f"></a>

Parameters to join the instance.

#### `public bool `[`JoinParams_IsSet`](#structFRHAPI__InstanceInfoUpdate_1a282916807722278b12016aa1a3ed5b75) <a id="structFRHAPI__InstanceInfoUpdate_1a282916807722278b12016aa1a3ed5b75"></a>

true if JoinParams_Optional has been set to a value

#### `public FString `[`Version_Optional`](#structFRHAPI__InstanceInfoUpdate_1a35ab20e36eed28c547f90e48589061d2) <a id="structFRHAPI__InstanceInfoUpdate_1a35ab20e36eed28c547f90e48589061d2"></a>

Product Client Version number. Used for compatibility checking with players. Must be compatible with all players to spawn.

#### `public bool `[`Version_IsSet`](#structFRHAPI__InstanceInfoUpdate_1a62dd84585fe7d789fd5d075e16cdf173) <a id="structFRHAPI__InstanceInfoUpdate_1a62dd84585fe7d789fd5d075e16cdf173"></a>

true if Version_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__InstanceInfoUpdate_1a4f9df70e7dbb3fa7ad0267292d336c0c) <a id="structFRHAPI__InstanceInfoUpdate_1a4f9df70e7dbb3fa7ad0267292d336c0c"></a>

instance-defined custom data

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__InstanceInfoUpdate_1a512d5615df2069935e21dcad2a28a5b1) <a id="structFRHAPI__InstanceInfoUpdate_1a512d5615df2069935e21dcad2a28a5b1"></a>

true if CustomData_Optional has been set to a value

#### `public FString `[`MatchId_Optional`](#structFRHAPI__InstanceInfoUpdate_1a24d15214932583c22aa8d389611e0092) <a id="structFRHAPI__InstanceInfoUpdate_1a24d15214932583c22aa8d389611e0092"></a>

The match ID associated with this instance.

#### `public bool `[`MatchId_IsSet`](#structFRHAPI__InstanceInfoUpdate_1a9c5ec15fbe8189b275753df72d85866e) <a id="structFRHAPI__InstanceInfoUpdate_1a9c5ec15fbe8189b275753df72d85866e"></a>

true if MatchId_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__InstanceInfoUpdate_1a893ac9eabb30b799bb1abccfb8701659)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InstanceInfoUpdate_1a893ac9eabb30b799bb1abccfb8701659"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InstanceInfoUpdate_1a526a4fd1b4983e172afe49440e6b4c12)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__InstanceInfoUpdate_1a526a4fd1b4983e172afe49440e6b4c12"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a6497c0956fc25f8412692caae1fc7a7f)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a6497c0956fc25f8412692caae1fc7a7f"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a093fd5951a724cb7f5d6f3510a3cba9a)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1a093fd5951a724cb7f5d6f3510a3cba9a"></a>

Gets the value of AllocationId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1aa444f7153ce71610694716a93ef394b6)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1aa444f7153ce71610694716a93ef394b6"></a>

Gets the value of AllocationId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a1b44c9c6a3cedb978aeced7a01aee2e0)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1a1b44c9c6a3cedb978aeced7a01aee2e0"></a>

Fills OutValue with the value of AllocationId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetAllocationIdOrNull`](#structFRHAPI__InstanceInfoUpdate_1aa1fcf9dcbf854ae46a53e22d8b9b663a)`()` <a id="structFRHAPI__InstanceInfoUpdate_1aa1fcf9dcbf854ae46a53e22d8b9b663a"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetAllocationIdOrNull`](#structFRHAPI__InstanceInfoUpdate_1a62efd98bd731430e5558c81bef4aabac)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1a62efd98bd731430e5558c81bef4aabac"></a>

Returns a pointer to AllocationId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a1319c1e84b3e741ba2f4e89aa7c4f43b)`(const FString & NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1a1319c1e84b3e741ba2f4e89aa7c4f43b"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a54977cda32d44e36dbbd7ed32bb7bdd6)`(FString && NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1a54977cda32d44e36dbbd7ed32bb7bdd6"></a>

Sets the value of AllocationId_Optional and also sets AllocationId_IsSet to true using move semantics.

#### `public inline void `[`ClearAllocationId`](#structFRHAPI__InstanceInfoUpdate_1a1ce0fdb8b13b7f7419efa864dfa511fd)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a1ce0fdb8b13b7f7419efa864dfa511fd"></a>

Clears the value of AllocationId_Optional and sets AllocationId_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1a388e7d7a6ea1be84fdf71fefa6bbe2e5)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a388e7d7a6ea1be84fdf71fefa6bbe2e5"></a>

Gets the value of JoinStatus_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1abcc78efd4fd8b2b458814c6af2c18855)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1abcc78efd4fd8b2b458814c6af2c18855"></a>

Gets the value of JoinStatus_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InstanceJoinableStatus & `[`GetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1a402e609430a39279e2f68477901c057f)`(const ERHAPI_InstanceJoinableStatus & DefaultValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1a402e609430a39279e2f68477901c057f"></a>

Gets the value of JoinStatus_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1af5b23bfa6ad6b6be1b25c024699435ad)`(ERHAPI_InstanceJoinableStatus & OutValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1af5b23bfa6ad6b6be1b25c024699435ad"></a>

Fills OutValue with the value of JoinStatus_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__InstanceInfoUpdate_1a9a016fd0bfef645fdfadabe49d11d91e)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a9a016fd0bfef645fdfadabe49d11d91e"></a>

Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InstanceJoinableStatus * `[`GetJoinStatusOrNull`](#structFRHAPI__InstanceInfoUpdate_1a1ecbafc84e2b1b7e6f14689e69760be9)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1a1ecbafc84e2b1b7e6f14689e69760be9"></a>

Returns a pointer to JoinStatus_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1a73a899462240881b9903e9de59d32488)`(const ERHAPI_InstanceJoinableStatus & NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1a73a899462240881b9903e9de59d32488"></a>

Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true.

#### `public inline FORCEINLINE void `[`SetJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1a4ecd64a5a318d0371a5c1783135c3bc4)`(ERHAPI_InstanceJoinableStatus && NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1a4ecd64a5a318d0371a5c1783135c3bc4"></a>

Sets the value of JoinStatus_Optional and also sets JoinStatus_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinStatus`](#structFRHAPI__InstanceInfoUpdate_1a08d153a486e719dd86f7272688d3fd6f)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a08d153a486e719dd86f7272688d3fd6f"></a>

Clears the value of JoinStatus_Optional and sets JoinStatus_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1a213731a8b889e66650918023aeba5e2d)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a213731a8b889e66650918023aeba5e2d"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1ae3749b7b841720b35f936c5c18a922f6)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1ae3749b7b841720b35f936c5c18a922f6"></a>

Gets the value of JoinParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & `[`GetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1a61a2e5a25a7c9139d2cb60ac4da605ac)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & DefaultValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1a61a2e5a25a7c9139d2cb60ac4da605ac"></a>

Gets the value of JoinParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1a2f619b4c11c76602329b544d9802bd9d)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & OutValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1a2f619b4c11c76602329b544d9802bd9d"></a>

Fills OutValue with the value of JoinParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__InstanceInfoUpdate_1a5380e0a54eb8d7ce4229e20730595583)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a5380e0a54eb8d7ce4229e20730595583"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` * `[`GetJoinParamsOrNull`](#structFRHAPI__InstanceInfoUpdate_1adf10677c7ff5ee03d8db11f80812f232)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1adf10677c7ff5ee03d8db11f80812f232"></a>

Returns a pointer to JoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1a33e4059739ffa3c9ccbd1ef688f7954d)`(const `[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` & NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1a33e4059739ffa3c9ccbd1ef688f7954d"></a>

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true.

#### `public inline FORCEINLINE void `[`SetJoinParams`](#structFRHAPI__InstanceInfoUpdate_1ad1774f3320972a4d2a64b2502ebda040)`(`[`FRHAPI_JoinParams`](RHAPI_JoinParams.md#structFRHAPI__JoinParams)` && NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1ad1774f3320972a4d2a64b2502ebda040"></a>

Sets the value of JoinParams_Optional and also sets JoinParams_IsSet to true using move semantics.

#### `public inline void `[`ClearJoinParams`](#structFRHAPI__InstanceInfoUpdate_1a8fb8d668734c8ac5966d242b3c45898d)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a8fb8d668734c8ac5966d242b3c45898d"></a>

Clears the value of JoinParams_Optional and sets JoinParams_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetVersion`](#structFRHAPI__InstanceInfoUpdate_1a8798f65b16fe47a751b74cb0d02ea029)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a8798f65b16fe47a751b74cb0d02ea029"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetVersion`](#structFRHAPI__InstanceInfoUpdate_1a3c3014f00f9ecb46d4ec196fa0f1b198)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1a3c3014f00f9ecb46d4ec196fa0f1b198"></a>

Gets the value of Version_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetVersion`](#structFRHAPI__InstanceInfoUpdate_1a58f1bee82f8bee6fd0f7f9135b5fb9a9)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1a58f1bee82f8bee6fd0f7f9135b5fb9a9"></a>

Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetVersion`](#structFRHAPI__InstanceInfoUpdate_1ae6daedfb843675d900525fbcb468f945)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1ae6daedfb843675d900525fbcb468f945"></a>

Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetVersionOrNull`](#structFRHAPI__InstanceInfoUpdate_1ad4e23bab35d82db92b983160b29beac5)`()` <a id="structFRHAPI__InstanceInfoUpdate_1ad4e23bab35d82db92b983160b29beac5"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetVersionOrNull`](#structFRHAPI__InstanceInfoUpdate_1a8808b0c90eee118116e3a0149107fefb)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1a8808b0c90eee118116e3a0149107fefb"></a>

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetVersion`](#structFRHAPI__InstanceInfoUpdate_1ab960324a613170cfe011550913f9f7b9)`(const FString & NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1ab960324a613170cfe011550913f9f7b9"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true.

#### `public inline FORCEINLINE void `[`SetVersion`](#structFRHAPI__InstanceInfoUpdate_1af126960e8035bbb10a6f08941722b6be)`(FString && NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1af126960e8035bbb10a6f08941722b6be"></a>

Sets the value of Version_Optional and also sets Version_IsSet to true using move semantics.

#### `public inline void `[`ClearVersion`](#structFRHAPI__InstanceInfoUpdate_1a38e9c831413bc30e6d00a4c6ce9930e9)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a38e9c831413bc30e6d00a4c6ce9930e9"></a>

Clears the value of Version_Optional and sets Version_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfoUpdate_1a6a773850b9d12663e1cfb03a67d75fc0)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a6a773850b9d12663e1cfb03a67d75fc0"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfoUpdate_1acc84a5abb6bfbc8cd3ae92be02ecbffb)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1acc84a5abb6bfbc8cd3ae92be02ecbffb"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__InstanceInfoUpdate_1a1d58807211ee1fccb4c0d3d5b9a2bf92)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1a1d58807211ee1fccb4c0d3d5b9a2bf92"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__InstanceInfoUpdate_1a62dd41d976494e2fd71b056d8d879f49)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1a62dd41d976494e2fd71b056d8d879f49"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceInfoUpdate_1aaccda437227e89e9a0dbdfdbc0ca7c46)`()` <a id="structFRHAPI__InstanceInfoUpdate_1aaccda437227e89e9a0dbdfdbc0ca7c46"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__InstanceInfoUpdate_1aeaeb0ebde7e19e3143d5e148a0f105fd)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1aeaeb0ebde7e19e3143d5e148a0f105fd"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceInfoUpdate_1ab824e6b926e16bc3984cb2bb7c2fa32a)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1ab824e6b926e16bc3984cb2bb7c2fa32a"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__InstanceInfoUpdate_1a9a8375a22ae0bc76bb16245141f87ee9)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1a9a8375a22ae0bc76bb16245141f87ee9"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__InstanceInfoUpdate_1a9b87f305257195c6b1f5f2e407e94ff4)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a9b87f305257195c6b1f5f2e407e94ff4"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetMatchId`](#structFRHAPI__InstanceInfoUpdate_1adc12280cf289c58feef18bbb46497837)`()` <a id="structFRHAPI__InstanceInfoUpdate_1adc12280cf289c58feef18bbb46497837"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__InstanceInfoUpdate_1a4136bfbba6067014ce4ff85dc45636ae)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1a4136bfbba6067014ce4ff85dc45636ae"></a>

Gets the value of MatchId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMatchId`](#structFRHAPI__InstanceInfoUpdate_1a24e57a334d948cc72bb34db3c92f2e2d)`(const FString & DefaultValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1a24e57a334d948cc72bb34db3c92f2e2d"></a>

Gets the value of MatchId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMatchId`](#structFRHAPI__InstanceInfoUpdate_1a64fca92c152a74ffdc00e110b5a6f686)`(FString & OutValue) const` <a id="structFRHAPI__InstanceInfoUpdate_1a64fca92c152a74ffdc00e110b5a6f686"></a>

Fills OutValue with the value of MatchId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMatchIdOrNull`](#structFRHAPI__InstanceInfoUpdate_1a82aca676f8af02774f6ea194c99c1907)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a82aca676f8af02774f6ea194c99c1907"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMatchIdOrNull`](#structFRHAPI__InstanceInfoUpdate_1a0970fe86bc1f763a6c5ec3441a4d0d8b)`() const` <a id="structFRHAPI__InstanceInfoUpdate_1a0970fe86bc1f763a6c5ec3441a4d0d8b"></a>

Returns a pointer to MatchId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__InstanceInfoUpdate_1a90a62d9752dbd1ae9769a06a9f808b55)`(const FString & NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1a90a62d9752dbd1ae9769a06a9f808b55"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMatchId`](#structFRHAPI__InstanceInfoUpdate_1a92edc9d3d46bd112a216f93f67d9b3ff)`(FString && NewValue)` <a id="structFRHAPI__InstanceInfoUpdate_1a92edc9d3d46bd112a216f93f67d9b3ff"></a>

Sets the value of MatchId_Optional and also sets MatchId_IsSet to true using move semantics.

#### `public inline void `[`ClearMatchId`](#structFRHAPI__InstanceInfoUpdate_1a3c0613c760b638002bda9e24e1defc32)`()` <a id="structFRHAPI__InstanceInfoUpdate_1a3c0613c760b638002bda9e24e1defc32"></a>

Clears the value of MatchId_Optional and sets MatchId_IsSet to false.

