---
title: RHAPI_UserLinkHistoryEntry
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_UserLinkHistoryEntry`](#structFRHAPI__UserLinkHistoryEntry) | 

## struct `FRHAPI_UserLinkHistoryEntry` <a id="structFRHAPI__UserLinkHistoryEntry"></a>

```
struct FRHAPI_UserLinkHistoryEntry
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`EntryId_Optional`](#structFRHAPI__UserLinkHistoryEntry_1a5ca7678d02f9d897a38317d39d1c7db4) | entry ID
`public bool `[`EntryId_IsSet`](#structFRHAPI__UserLinkHistoryEntry_1a8e8b195e061db2d498f172525b34a5f3) | true if EntryId_Optional has been set to a value
`public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__UserLinkHistoryEntry_1acbbcef98442212a7a414d0fc28b6a290) | player UUID
`public bool `[`PlayerUuid_IsSet`](#structFRHAPI__UserLinkHistoryEntry_1ac6cbc8e3ff677a1d5f319ecf46d34545) | true if PlayerUuid_Optional has been set to a value
`public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__UserLinkHistoryEntry_1a2cf722b313b3ae6676593529858863aa) | platform
`public bool `[`Platform_IsSet`](#structFRHAPI__UserLinkHistoryEntry_1a0a8e5673aa2ed3b37184d0c1ca1a643f) | true if Platform_Optional has been set to a value
`public FString `[`PlatformUserId_Optional`](#structFRHAPI__UserLinkHistoryEntry_1a23ee6f4b908ab78c9e6062af86d49ffc) | platform user ID
`public bool `[`PlatformUserId_IsSet`](#structFRHAPI__UserLinkHistoryEntry_1a6d069d44f9d5f8f91a77747c3fe80298) | true if PlatformUserId_Optional has been set to a value
`public FGuid `[`PersonId_Optional`](#structFRHAPI__UserLinkHistoryEntry_1a313a12fb9e12856aa2a821dd2eef019f) | person ID
`public bool `[`PersonId_IsSet`](#structFRHAPI__UserLinkHistoryEntry_1a7f2520c5eb33b6431ab712133be0cda5) | true if PersonId_Optional has been set to a value
`public FGuid `[`ActivePlayerUuid_Optional`](#structFRHAPI__UserLinkHistoryEntry_1a3cbfe384b070d9444b804482d435390c) | active player UUID
`public bool `[`ActivePlayerUuid_IsSet`](#structFRHAPI__UserLinkHistoryEntry_1aae8dcdae135d63113be9c199e794168c) | true if ActivePlayerUuid_Optional has been set to a value
`public ERHAPI_LinkAction `[`Action`](#structFRHAPI__UserLinkHistoryEntry_1a0b41ce84ac75e4534c0283f535f1e7e6) | action
`public FDateTime `[`Timestamp_Optional`](#structFRHAPI__UserLinkHistoryEntry_1ae004d4c3abf167c1ca780bdc865c8d81) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Timestamp_IsSet`](#structFRHAPI__UserLinkHistoryEntry_1a0e932f269110c5d5fac42bb832b8f270) | true if Timestamp_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__UserLinkHistoryEntry_1a9ae54d5c66ece275b457fa27e8211a2a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__UserLinkHistoryEntry_1a031032b9942bb229e7e1972f2a5bafd9)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1a653a8ebbb0bfc3d4db952660157177ee)`()` | Gets the value of EntryId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1afa993b294ea27aec11f2426f04906dcb)`() const` | Gets the value of EntryId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1ac944b6c10cf4492b4f4751839d28f0d6)`(const FString & DefaultValue) const` | Gets the value of EntryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1a2111ab1bda086521432ff228a3e049ac)`(FString & OutValue) const` | Fills OutValue with the value of EntryId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetEntryIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a32b68637b875fd7ced164bccb914cd58)`()` | Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetEntryIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1ae2594a270e45b2ccd3562637727e5225)`() const` | Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1a1e7d535062f78c0d3a8b8a82c3b5b72c)`(const FString & NewValue)` | Sets the value of EntryId_Optional and also sets EntryId_IsSet to true.
`public inline FORCEINLINE void `[`SetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1a789c712049d595fd6767dbbb772e5148)`(FString && NewValue)` | Sets the value of EntryId_Optional and also sets EntryId_IsSet to true using move semantics.
`public inline void `[`ClearEntryId`](#structFRHAPI__UserLinkHistoryEntry_1ade9214638f81f84249e19a8a90f6820a)`()` | Clears the value of EntryId_Optional and sets EntryId_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1aefb1b1ff184efc249d3c4ef947d842bd)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1aba3a1468bc24516ac163dfd2b3667a29)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a434110e9fa50221a43713e42cda7cd40)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1aeea44b8bfc1ead337363b180276ccd03)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__UserLinkHistoryEntry_1aecfddb8929a16017211ece12bbecd3ff)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a7945fc80b43d6c3e25b34eab94e4db3f)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a4e5ffd3af892a28f7bdd7f4d7ffbfcb5)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a1ecadfd01f389c5cf75f5f5cf588a51c)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a067b2e03ddb899182e3165a16e03f4e7)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1a963a2f49e29c1139fdd7cc6838300176)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1afb9a2ae6fabb540ca0ca015071586342)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1a318be4c0b8a6a3f42a268bf53d6fef0e)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1a19e23a9841e5dd40453edad28875b6f0)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a8e6d441e9d50c810f4f31352474bc66c)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a3c90357f84de57c4f5be23da1eb16953)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1aec75ea760bf4ad1f4085c05fd3d21ef0)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1a5f9da42dacffb4631afd89c859ca563d)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__UserLinkHistoryEntry_1a51e01961a0f0610c6651f6a1b195a91d)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a95725cd41ffee83b46a7c276e884ce5f)`()` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a09b916c15dfbe212269333818e63bd33)`() const` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a654a30d7313a8fe80bd20350b61540bf)`(const FString & DefaultValue) const` | Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a078a2582b51cf3f6c75779c9a8416558)`(FString & OutValue) const` | Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1af4bda30de732da1a41e93757b0735840)`()` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a1a5cd9f850a1884066c3a48aa26bacd4)`() const` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a41e328d3de66c009b7349a1226cb79e0)`(const FString & NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1aef18f045b9ffd0b250a62d220c9afc75)`(FString && NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a3430e6ba7ce6bdb30949924e85a9cdb2)`()` | Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1ac9d4772b59a3e644066702c8293c86e9)`()` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1ae123b0109ca3427263e13e9bde4a246e)`() const` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1a1034cb4fb8fa7ce8182b9dc2a0f107b4)`(const FGuid & DefaultValue) const` | Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1a5978890fda1dc77eced5a67348115f13)`(FGuid & OutValue) const` | Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1ab7e0d49cc55a30b314bb2715365166e4)`()` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a02ad91fadc63e2904f725818e4b9fa15)`() const` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1a5f50018bfd44b6d6068e29c9682fe052)`(const FGuid & NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1a2509a4ae857d8e71a54d30576a5f9556)`(FGuid && NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.
`public inline void `[`ClearPersonId`](#structFRHAPI__UserLinkHistoryEntry_1a85e1df666dc5b197b3858fd5b079d04f)`()` | Clears the value of PersonId_Optional and sets PersonId_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a74e5b938f4df92763b52a922cbec146c)`()` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a044f8ba683ccd05ef8bfda625347077e)`() const` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a16a13b67d97499fbf521c4be3c2ba2fd)`(const FGuid & DefaultValue) const` | Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1ac9ad1b3178486466c430ac196617d891)`(FGuid & OutValue) const` | Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a2efd5f29ac34d74084408c6aa341a8df)`()` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__UserLinkHistoryEntry_1ab61014d82fc5db35706a9d5a0604ce43)`() const` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1af4718a658ae74fe0cd54d2264141d463)`(const FGuid & NewValue)` | Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a6765b948aeb28ed2cd082318296203ab)`(FGuid && NewValue)` | Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1ad728fe83f8235bc2b713a550ccefd111)`()` | Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.
`public inline FORCEINLINE ERHAPI_LinkAction & `[`GetAction`](#structFRHAPI__UserLinkHistoryEntry_1ab464fb1a775d36a8e90444bd99a2cd5e)`()` | Gets the value of Action.
`public inline FORCEINLINE const ERHAPI_LinkAction & `[`GetAction`](#structFRHAPI__UserLinkHistoryEntry_1a6bc7dc170c2366e8d8e4c06a5cf29ff1)`() const` | Gets the value of Action.
`public inline FORCEINLINE void `[`SetAction`](#structFRHAPI__UserLinkHistoryEntry_1afc6ba0983a09b96d2662bde5ec9731b3)`(const ERHAPI_LinkAction & NewValue)` | Sets the value of Action.
`public inline FORCEINLINE void `[`SetAction`](#structFRHAPI__UserLinkHistoryEntry_1a27ee4f44a287c5b3910b8b3a4f170734)`(ERHAPI_LinkAction && NewValue)` | Sets the value of Action using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1ac3184e5a14f8d4b37d812723c4a4d00d)`()` | Gets the value of Timestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1a9f2d62565ac6d0a7844d5ea8c652a7e9)`() const` | Gets the value of Timestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1a9f51dc5fafbec0a016dc5484a9f77e49)`(const FDateTime & DefaultValue) const` | Gets the value of Timestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1ac614088482484c5aaf4739c9c37614bd)`(FDateTime & OutValue) const` | Fills OutValue with the value of Timestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetTimestampOrNull`](#structFRHAPI__UserLinkHistoryEntry_1ac97cb24080f238053e01bcde28fc3ce7)`()` | Returns a pointer to Timestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetTimestampOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a9aff3deeb59c8792c88f90b721e55f2d)`() const` | Returns a pointer to Timestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1a84325c19066c17dca0a2868e68d2dac7)`(const FDateTime & NewValue)` | Sets the value of Timestamp_Optional and also sets Timestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1ad660f56376902d4d9493baaad0e4e4f9)`(FDateTime && NewValue)` | Sets the value of Timestamp_Optional and also sets Timestamp_IsSet to true using move semantics.
`public inline void `[`ClearTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1a08513e951f42b87a5eab036c388a1d2d)`()` | Clears the value of Timestamp_Optional and sets Timestamp_IsSet to false.

### Members

#### `public FString `[`EntryId_Optional`](#structFRHAPI__UserLinkHistoryEntry_1a5ca7678d02f9d897a38317d39d1c7db4) <a id="structFRHAPI__UserLinkHistoryEntry_1a5ca7678d02f9d897a38317d39d1c7db4"></a>

entry ID

#### `public bool `[`EntryId_IsSet`](#structFRHAPI__UserLinkHistoryEntry_1a8e8b195e061db2d498f172525b34a5f3) <a id="structFRHAPI__UserLinkHistoryEntry_1a8e8b195e061db2d498f172525b34a5f3"></a>

true if EntryId_Optional has been set to a value

#### `public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__UserLinkHistoryEntry_1acbbcef98442212a7a414d0fc28b6a290) <a id="structFRHAPI__UserLinkHistoryEntry_1acbbcef98442212a7a414d0fc28b6a290"></a>

player UUID

#### `public bool `[`PlayerUuid_IsSet`](#structFRHAPI__UserLinkHistoryEntry_1ac6cbc8e3ff677a1d5f319ecf46d34545) <a id="structFRHAPI__UserLinkHistoryEntry_1ac6cbc8e3ff677a1d5f319ecf46d34545"></a>

true if PlayerUuid_Optional has been set to a value

#### `public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__UserLinkHistoryEntry_1a2cf722b313b3ae6676593529858863aa) <a id="structFRHAPI__UserLinkHistoryEntry_1a2cf722b313b3ae6676593529858863aa"></a>

platform

#### `public bool `[`Platform_IsSet`](#structFRHAPI__UserLinkHistoryEntry_1a0a8e5673aa2ed3b37184d0c1ca1a643f) <a id="structFRHAPI__UserLinkHistoryEntry_1a0a8e5673aa2ed3b37184d0c1ca1a643f"></a>

true if Platform_Optional has been set to a value

#### `public FString `[`PlatformUserId_Optional`](#structFRHAPI__UserLinkHistoryEntry_1a23ee6f4b908ab78c9e6062af86d49ffc) <a id="structFRHAPI__UserLinkHistoryEntry_1a23ee6f4b908ab78c9e6062af86d49ffc"></a>

platform user ID

#### `public bool `[`PlatformUserId_IsSet`](#structFRHAPI__UserLinkHistoryEntry_1a6d069d44f9d5f8f91a77747c3fe80298) <a id="structFRHAPI__UserLinkHistoryEntry_1a6d069d44f9d5f8f91a77747c3fe80298"></a>

true if PlatformUserId_Optional has been set to a value

#### `public FGuid `[`PersonId_Optional`](#structFRHAPI__UserLinkHistoryEntry_1a313a12fb9e12856aa2a821dd2eef019f) <a id="structFRHAPI__UserLinkHistoryEntry_1a313a12fb9e12856aa2a821dd2eef019f"></a>

person ID

#### `public bool `[`PersonId_IsSet`](#structFRHAPI__UserLinkHistoryEntry_1a7f2520c5eb33b6431ab712133be0cda5) <a id="structFRHAPI__UserLinkHistoryEntry_1a7f2520c5eb33b6431ab712133be0cda5"></a>

true if PersonId_Optional has been set to a value

#### `public FGuid `[`ActivePlayerUuid_Optional`](#structFRHAPI__UserLinkHistoryEntry_1a3cbfe384b070d9444b804482d435390c) <a id="structFRHAPI__UserLinkHistoryEntry_1a3cbfe384b070d9444b804482d435390c"></a>

active player UUID

#### `public bool `[`ActivePlayerUuid_IsSet`](#structFRHAPI__UserLinkHistoryEntry_1aae8dcdae135d63113be9c199e794168c) <a id="structFRHAPI__UserLinkHistoryEntry_1aae8dcdae135d63113be9c199e794168c"></a>

true if ActivePlayerUuid_Optional has been set to a value

#### `public ERHAPI_LinkAction `[`Action`](#structFRHAPI__UserLinkHistoryEntry_1a0b41ce84ac75e4534c0283f535f1e7e6) <a id="structFRHAPI__UserLinkHistoryEntry_1a0b41ce84ac75e4534c0283f535f1e7e6"></a>

action

#### `public FDateTime `[`Timestamp_Optional`](#structFRHAPI__UserLinkHistoryEntry_1ae004d4c3abf167c1ca780bdc865c8d81) <a id="structFRHAPI__UserLinkHistoryEntry_1ae004d4c3abf167c1ca780bdc865c8d81"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`Timestamp_IsSet`](#structFRHAPI__UserLinkHistoryEntry_1a0e932f269110c5d5fac42bb832b8f270) <a id="structFRHAPI__UserLinkHistoryEntry_1a0e932f269110c5d5fac42bb832b8f270"></a>

true if Timestamp_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__UserLinkHistoryEntry_1a9ae54d5c66ece275b457fa27e8211a2a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a9ae54d5c66ece275b457fa27e8211a2a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__UserLinkHistoryEntry_1a031032b9942bb229e7e1972f2a5bafd9)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__UserLinkHistoryEntry_1a031032b9942bb229e7e1972f2a5bafd9"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1a653a8ebbb0bfc3d4db952660157177ee)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a653a8ebbb0bfc3d4db952660157177ee"></a>

Gets the value of EntryId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1afa993b294ea27aec11f2426f04906dcb)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1afa993b294ea27aec11f2426f04906dcb"></a>

Gets the value of EntryId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1ac944b6c10cf4492b4f4751839d28f0d6)`(const FString & DefaultValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1ac944b6c10cf4492b4f4751839d28f0d6"></a>

Gets the value of EntryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1a2111ab1bda086521432ff228a3e049ac)`(FString & OutValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1a2111ab1bda086521432ff228a3e049ac"></a>

Fills OutValue with the value of EntryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetEntryIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a32b68637b875fd7ced164bccb914cd58)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a32b68637b875fd7ced164bccb914cd58"></a>

Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetEntryIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1ae2594a270e45b2ccd3562637727e5225)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1ae2594a270e45b2ccd3562637727e5225"></a>

Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1a1e7d535062f78c0d3a8b8a82c3b5b72c)`(const FString & NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a1e7d535062f78c0d3a8b8a82c3b5b72c"></a>

Sets the value of EntryId_Optional and also sets EntryId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1a789c712049d595fd6767dbbb772e5148)`(FString && NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a789c712049d595fd6767dbbb772e5148"></a>

Sets the value of EntryId_Optional and also sets EntryId_IsSet to true using move semantics.

#### `public inline void `[`ClearEntryId`](#structFRHAPI__UserLinkHistoryEntry_1ade9214638f81f84249e19a8a90f6820a)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1ade9214638f81f84249e19a8a90f6820a"></a>

Clears the value of EntryId_Optional and sets EntryId_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1aefb1b1ff184efc249d3c4ef947d842bd)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1aefb1b1ff184efc249d3c4ef947d842bd"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1aba3a1468bc24516ac163dfd2b3667a29)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1aba3a1468bc24516ac163dfd2b3667a29"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a434110e9fa50221a43713e42cda7cd40)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1a434110e9fa50221a43713e42cda7cd40"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1aeea44b8bfc1ead337363b180276ccd03)`(FGuid & OutValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1aeea44b8bfc1ead337363b180276ccd03"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__UserLinkHistoryEntry_1aecfddb8929a16017211ece12bbecd3ff)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1aecfddb8929a16017211ece12bbecd3ff"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a7945fc80b43d6c3e25b34eab94e4db3f)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a7945fc80b43d6c3e25b34eab94e4db3f"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a4e5ffd3af892a28f7bdd7f4d7ffbfcb5)`(const FGuid & NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a4e5ffd3af892a28f7bdd7f4d7ffbfcb5"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a1ecadfd01f389c5cf75f5f5cf588a51c)`(FGuid && NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a1ecadfd01f389c5cf75f5f5cf588a51c"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a067b2e03ddb899182e3165a16e03f4e7)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a067b2e03ddb899182e3165a16e03f4e7"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1a963a2f49e29c1139fdd7cc6838300176)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a963a2f49e29c1139fdd7cc6838300176"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1afb9a2ae6fabb540ca0ca015071586342)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1afb9a2ae6fabb540ca0ca015071586342"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1a318be4c0b8a6a3f42a268bf53d6fef0e)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1a318be4c0b8a6a3f42a268bf53d6fef0e"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1a19e23a9841e5dd40453edad28875b6f0)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1a19e23a9841e5dd40453edad28875b6f0"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a8e6d441e9d50c810f4f31352474bc66c)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a8e6d441e9d50c810f4f31352474bc66c"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a3c90357f84de57c4f5be23da1eb16953)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a3c90357f84de57c4f5be23da1eb16953"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1aec75ea760bf4ad1f4085c05fd3d21ef0)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1aec75ea760bf4ad1f4085c05fd3d21ef0"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1a5f9da42dacffb4631afd89c859ca563d)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a5f9da42dacffb4631afd89c859ca563d"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__UserLinkHistoryEntry_1a51e01961a0f0610c6651f6a1b195a91d)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a51e01961a0f0610c6651f6a1b195a91d"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a95725cd41ffee83b46a7c276e884ce5f)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a95725cd41ffee83b46a7c276e884ce5f"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a09b916c15dfbe212269333818e63bd33)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a09b916c15dfbe212269333818e63bd33"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a654a30d7313a8fe80bd20350b61540bf)`(const FString & DefaultValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1a654a30d7313a8fe80bd20350b61540bf"></a>

Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a078a2582b51cf3f6c75779c9a8416558)`(FString & OutValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1a078a2582b51cf3f6c75779c9a8416558"></a>

Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1af4bda30de732da1a41e93757b0735840)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1af4bda30de732da1a41e93757b0735840"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a1a5cd9f850a1884066c3a48aa26bacd4)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a1a5cd9f850a1884066c3a48aa26bacd4"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a41e328d3de66c009b7349a1226cb79e0)`(const FString & NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a41e328d3de66c009b7349a1226cb79e0"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1aef18f045b9ffd0b250a62d220c9afc75)`(FString && NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1aef18f045b9ffd0b250a62d220c9afc75"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a3430e6ba7ce6bdb30949924e85a9cdb2)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a3430e6ba7ce6bdb30949924e85a9cdb2"></a>

Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1ac9d4772b59a3e644066702c8293c86e9)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1ac9d4772b59a3e644066702c8293c86e9"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1ae123b0109ca3427263e13e9bde4a246e)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1ae123b0109ca3427263e13e9bde4a246e"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1a1034cb4fb8fa7ce8182b9dc2a0f107b4)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1a1034cb4fb8fa7ce8182b9dc2a0f107b4"></a>

Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1a5978890fda1dc77eced5a67348115f13)`(FGuid & OutValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1a5978890fda1dc77eced5a67348115f13"></a>

Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1ab7e0d49cc55a30b314bb2715365166e4)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1ab7e0d49cc55a30b314bb2715365166e4"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a02ad91fadc63e2904f725818e4b9fa15)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a02ad91fadc63e2904f725818e4b9fa15"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1a5f50018bfd44b6d6068e29c9682fe052)`(const FGuid & NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a5f50018bfd44b6d6068e29c9682fe052"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1a2509a4ae857d8e71a54d30576a5f9556)`(FGuid && NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a2509a4ae857d8e71a54d30576a5f9556"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.

#### `public inline void `[`ClearPersonId`](#structFRHAPI__UserLinkHistoryEntry_1a85e1df666dc5b197b3858fd5b079d04f)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a85e1df666dc5b197b3858fd5b079d04f"></a>

Clears the value of PersonId_Optional and sets PersonId_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a74e5b938f4df92763b52a922cbec146c)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a74e5b938f4df92763b52a922cbec146c"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a044f8ba683ccd05ef8bfda625347077e)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a044f8ba683ccd05ef8bfda625347077e"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a16a13b67d97499fbf521c4be3c2ba2fd)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1a16a13b67d97499fbf521c4be3c2ba2fd"></a>

Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1ac9ad1b3178486466c430ac196617d891)`(FGuid & OutValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1ac9ad1b3178486466c430ac196617d891"></a>

Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a2efd5f29ac34d74084408c6aa341a8df)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a2efd5f29ac34d74084408c6aa341a8df"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__UserLinkHistoryEntry_1ab61014d82fc5db35706a9d5a0604ce43)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1ab61014d82fc5db35706a9d5a0604ce43"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1af4718a658ae74fe0cd54d2264141d463)`(const FGuid & NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1af4718a658ae74fe0cd54d2264141d463"></a>

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a6765b948aeb28ed2cd082318296203ab)`(FGuid && NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a6765b948aeb28ed2cd082318296203ab"></a>

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1ad728fe83f8235bc2b713a550ccefd111)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1ad728fe83f8235bc2b713a550ccefd111"></a>

Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_LinkAction & `[`GetAction`](#structFRHAPI__UserLinkHistoryEntry_1ab464fb1a775d36a8e90444bd99a2cd5e)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1ab464fb1a775d36a8e90444bd99a2cd5e"></a>

Gets the value of Action.

#### `public inline FORCEINLINE const ERHAPI_LinkAction & `[`GetAction`](#structFRHAPI__UserLinkHistoryEntry_1a6bc7dc170c2366e8d8e4c06a5cf29ff1)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a6bc7dc170c2366e8d8e4c06a5cf29ff1"></a>

Gets the value of Action.

#### `public inline FORCEINLINE void `[`SetAction`](#structFRHAPI__UserLinkHistoryEntry_1afc6ba0983a09b96d2662bde5ec9731b3)`(const ERHAPI_LinkAction & NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1afc6ba0983a09b96d2662bde5ec9731b3"></a>

Sets the value of Action.

#### `public inline FORCEINLINE void `[`SetAction`](#structFRHAPI__UserLinkHistoryEntry_1a27ee4f44a287c5b3910b8b3a4f170734)`(ERHAPI_LinkAction && NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a27ee4f44a287c5b3910b8b3a4f170734"></a>

Sets the value of Action using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1ac3184e5a14f8d4b37d812723c4a4d00d)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1ac3184e5a14f8d4b37d812723c4a4d00d"></a>

Gets the value of Timestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1a9f2d62565ac6d0a7844d5ea8c652a7e9)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a9f2d62565ac6d0a7844d5ea8c652a7e9"></a>

Gets the value of Timestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1a9f51dc5fafbec0a016dc5484a9f77e49)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1a9f51dc5fafbec0a016dc5484a9f77e49"></a>

Gets the value of Timestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1ac614088482484c5aaf4739c9c37614bd)`(FDateTime & OutValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1ac614088482484c5aaf4739c9c37614bd"></a>

Fills OutValue with the value of Timestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetTimestampOrNull`](#structFRHAPI__UserLinkHistoryEntry_1ac97cb24080f238053e01bcde28fc3ce7)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1ac97cb24080f238053e01bcde28fc3ce7"></a>

Returns a pointer to Timestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetTimestampOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a9aff3deeb59c8792c88f90b721e55f2d)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a9aff3deeb59c8792c88f90b721e55f2d"></a>

Returns a pointer to Timestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1a84325c19066c17dca0a2868e68d2dac7)`(const FDateTime & NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a84325c19066c17dca0a2868e68d2dac7"></a>

Sets the value of Timestamp_Optional and also sets Timestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1ad660f56376902d4d9493baaad0e4e4f9)`(FDateTime && NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1ad660f56376902d4d9493baaad0e4e4f9"></a>

Sets the value of Timestamp_Optional and also sets Timestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1a08513e951f42b87a5eab036c388a1d2d)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a08513e951f42b87a5eab036c388a1d2d"></a>

Clears the value of Timestamp_Optional and sets Timestamp_IsSet to false.

