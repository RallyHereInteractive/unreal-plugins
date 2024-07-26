# group `RHAPI_UserLinkHistoryEntry` <a id="group__RHAPI__UserLinkHistoryEntry"></a>

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
`public virtual void `[`WriteJson`](#structFRHAPI__UserLinkHistoryEntry_1ac91bc3e1e56ab8a991334c664a201b77)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1a5ef6e119b5432af2ad51d3d88ba0e96a)`()` | Gets the value of EntryId_Optional, regardless of it having been set.
`public inline const FString & `[`GetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1aa1e824c4b283054ce9e8000ea04812df)`() const` | Gets the value of EntryId_Optional, regardless of it having been set.
`public inline const FString & `[`GetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1a162dd18ee004e049aa439ff22aa461cc)`(const FString & DefaultValue) const` | Gets the value of EntryId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1a9354d9826c5e0265567e5230d5efe996)`(FString & OutValue) const` | Fills OutValue with the value of EntryId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetEntryIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a1d32ee571230c66e5cc47d7b1b9d86d3)`()` | Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetEntryIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1ac5dd1343d7a38113bcc4c70cc141a1b1)`() const` | Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1a1f12013fbaca9e2fd6f5ac2d85683a6b)`(const FString & NewValue)` | Sets the value of EntryId_Optional and also sets EntryId_IsSet to true.
`public inline void `[`SetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1af835de6746170829fb7bf20de7f579fe)`(FString && NewValue)` | Sets the value of EntryId_Optional and also sets EntryId_IsSet to true using move semantics.
`public inline void `[`ClearEntryId`](#structFRHAPI__UserLinkHistoryEntry_1ade9214638f81f84249e19a8a90f6820a)`()` | Clears the value of EntryId_Optional and sets EntryId_IsSet to false.
`public inline bool `[`IsEntryIdSet`](#structFRHAPI__UserLinkHistoryEntry_1a28b8d6e95ea567f240158ddbf3fb19d1)`() const` | Checks whether EntryId_Optional has been set.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a3615dab5552f3569dc3887c930dac033)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a4bf9cc3eadccde05d61a40e9319b4b72)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1ac28e9899f3cff95ad20eaea74ba6824e)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1aa1085375c2691cfa81bc5d7a43aa79e3)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a12f3f35d55b422d436250555f3d91cb8)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a1256900cf9171b87bcd81bbe55b01070)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1aad24f7efaad23de5681a0712c6b8ec80)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1ad6279412a3dc4a35ff13f234e9cf00e4)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a067b2e03ddb899182e3165a16e03f4e7)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__UserLinkHistoryEntry_1a4bfa2db959c91c2a5af40f7e31d02e05)`() const` | Checks whether PlayerUuid_Optional has been set.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1a7da0ea304d1723b921b1f64ec2ba1855)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1a33ec364dd13365e3c8b829376ab81f9b)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1add9dddb4265fcfdd9af85b5ee2878d20)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1ae780d79dd84214272c2297702d9ece4b)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__UserLinkHistoryEntry_1ae7c04f705e75117ac390c4099afc2f03)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a446af2fe1ae703a3eadc5b12c87a3886)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1a6836023717b81a5dda6394c244b67c3c)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline void `[`SetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1a5a387b0d154e568092b2e9deb29b323e)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__UserLinkHistoryEntry_1a51e01961a0f0610c6651f6a1b195a91d)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline bool `[`IsPlatformSet`](#structFRHAPI__UserLinkHistoryEntry_1aa2f6ff5688514c4615fe2074ad2323e7)`() const` | Checks whether Platform_Optional has been set.
`public inline FString & `[`GetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a809f5cb9a0a81c27f66d61227e24d617)`()` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a23046117137a5525e729ea04f930e208)`() const` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a209d9df9620d31684495da7f4e08016a)`(const FString & DefaultValue) const` | Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a9c4d09b2c124622a7aaa39475e096d55)`(FString & OutValue) const` | Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a96cde056ac052e0e34051a6bfecb725a)`()` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a47f6d010947a67bc7816ea46d82b9393)`() const` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a708cbdc91af05d6c5e7bc47b95f222c2)`(const FString & NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a6d24f2e15aa034b6b3f9492401858de5)`(FString && NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a3430e6ba7ce6bdb30949924e85a9cdb2)`()` | Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.
`public inline bool `[`IsPlatformUserIdSet`](#structFRHAPI__UserLinkHistoryEntry_1a8428bdb088bdbe0afe57531e9f8dc371)`() const` | Checks whether PlatformUserId_Optional has been set.
`public inline FGuid & `[`GetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1af1f69c48fc21f0b55032ec9681870617)`()` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1a38b74750a02cc289beb77d46b5fd95c7)`() const` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1a00979e9fc84359b928a822a364a8488e)`(const FGuid & DefaultValue) const` | Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1a43a3d337970e07af64b75ba0c2f1b073)`(FGuid & OutValue) const` | Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1abacd384f32252a35d243209f01584784)`()` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a6f6a0685e90c7a4271a530716fa76e90)`() const` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1ac4fd9f20d1e9fc0b60354a12e8895def)`(const FGuid & NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.
`public inline void `[`SetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1a84608276ae6ce70dc33ee5a1c33e126e)`(FGuid && NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.
`public inline void `[`ClearPersonId`](#structFRHAPI__UserLinkHistoryEntry_1a85e1df666dc5b197b3858fd5b079d04f)`()` | Clears the value of PersonId_Optional and sets PersonId_IsSet to false.
`public inline bool `[`IsPersonIdSet`](#structFRHAPI__UserLinkHistoryEntry_1a421d985d7e566311aabefeb26a303127)`() const` | Checks whether PersonId_Optional has been set.
`public inline FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a6fcc22082b960fe25f7d53733d08c496)`()` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1ad58c7eab0ed2887f177e7d6f8ed1ad8e)`() const` | Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a7a4b5737381eed50674f3bf2d8416294)`(const FGuid & DefaultValue) const` | Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a43f8ab3a79f7fc2865207375e4152e88)`(FGuid & OutValue) const` | Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a2acc3897939706bb318ebc5853e64ce6)`()` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__UserLinkHistoryEntry_1ae75a6f6f0b8b4793d9320f075f2a4835)`() const` | Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1ae514c4df2e4442a88dbc607e40f0b375)`(const FGuid & NewValue)` | Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.
`public inline void `[`SetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1ae92668cff887406d0ce8572f14cdb143)`(FGuid && NewValue)` | Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1ad728fe83f8235bc2b713a550ccefd111)`()` | Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.
`public inline bool `[`IsActivePlayerUuidSet`](#structFRHAPI__UserLinkHistoryEntry_1a32b19173e1fcdb6c664f4906ce271b19)`() const` | Checks whether ActivePlayerUuid_Optional has been set.
`public inline ERHAPI_LinkAction & `[`GetAction`](#structFRHAPI__UserLinkHistoryEntry_1a1f70e58736def7c900af12097b1c151d)`()` | Gets the value of Action.
`public inline const ERHAPI_LinkAction & `[`GetAction`](#structFRHAPI__UserLinkHistoryEntry_1a63beb6d3ff648c841e80868107de6b5b)`() const` | Gets the value of Action.
`public inline void `[`SetAction`](#structFRHAPI__UserLinkHistoryEntry_1a23a2b1dc0c20c27723f3d7526e4f3010)`(const ERHAPI_LinkAction & NewValue)` | Sets the value of Action.
`public inline void `[`SetAction`](#structFRHAPI__UserLinkHistoryEntry_1a5257cddf8225d81ef750cfaa16740e16)`(ERHAPI_LinkAction && NewValue)` | Sets the value of Action using move semantics.
`public inline FDateTime & `[`GetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1a1615371da8b60e2d70489def3a36b00d)`()` | Gets the value of Timestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1acd2a1ff6d52de8c66249634102aa54b8)`() const` | Gets the value of Timestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1a4068844eae72530a34c807310c3385a1)`(const FDateTime & DefaultValue) const` | Gets the value of Timestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1ac4ef537b7c4cc22f8adcf6e729b7cc27)`(FDateTime & OutValue) const` | Fills OutValue with the value of Timestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetTimestampOrNull`](#structFRHAPI__UserLinkHistoryEntry_1ab4edac0f539bb50addfb81b80f9d0336)`()` | Returns a pointer to Timestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetTimestampOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a89631a346f34f2c35619a03d996a4840)`() const` | Returns a pointer to Timestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1a5590ffc7ff32d6c296e98b3ae738f05a)`(const FDateTime & NewValue)` | Sets the value of Timestamp_Optional and also sets Timestamp_IsSet to true.
`public inline void `[`SetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1a7077f9b50b91a06146f77c1a4ccad9ab)`(FDateTime && NewValue)` | Sets the value of Timestamp_Optional and also sets Timestamp_IsSet to true using move semantics.
`public inline void `[`ClearTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1a08513e951f42b87a5eab036c388a1d2d)`()` | Clears the value of Timestamp_Optional and sets Timestamp_IsSet to false.
`public inline bool `[`IsTimestampSet`](#structFRHAPI__UserLinkHistoryEntry_1a5aade2d917525534bee8d513fe4fe42a)`() const` | Checks whether Timestamp_Optional has been set.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__UserLinkHistoryEntry_1ac91bc3e1e56ab8a991334c664a201b77)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__UserLinkHistoryEntry_1ac91bc3e1e56ab8a991334c664a201b77"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1a5ef6e119b5432af2ad51d3d88ba0e96a)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a5ef6e119b5432af2ad51d3d88ba0e96a"></a>

Gets the value of EntryId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1aa1e824c4b283054ce9e8000ea04812df)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1aa1e824c4b283054ce9e8000ea04812df"></a>

Gets the value of EntryId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1a162dd18ee004e049aa439ff22aa461cc)`(const FString & DefaultValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1a162dd18ee004e049aa439ff22aa461cc"></a>

Gets the value of EntryId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1a9354d9826c5e0265567e5230d5efe996)`(FString & OutValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1a9354d9826c5e0265567e5230d5efe996"></a>

Fills OutValue with the value of EntryId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetEntryIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a1d32ee571230c66e5cc47d7b1b9d86d3)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a1d32ee571230c66e5cc47d7b1b9d86d3"></a>

Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetEntryIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1ac5dd1343d7a38113bcc4c70cc141a1b1)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1ac5dd1343d7a38113bcc4c70cc141a1b1"></a>

Returns a pointer to EntryId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1a1f12013fbaca9e2fd6f5ac2d85683a6b)`(const FString & NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a1f12013fbaca9e2fd6f5ac2d85683a6b"></a>

Sets the value of EntryId_Optional and also sets EntryId_IsSet to true.

#### `public inline void `[`SetEntryId`](#structFRHAPI__UserLinkHistoryEntry_1af835de6746170829fb7bf20de7f579fe)`(FString && NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1af835de6746170829fb7bf20de7f579fe"></a>

Sets the value of EntryId_Optional and also sets EntryId_IsSet to true using move semantics.

#### `public inline void `[`ClearEntryId`](#structFRHAPI__UserLinkHistoryEntry_1ade9214638f81f84249e19a8a90f6820a)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1ade9214638f81f84249e19a8a90f6820a"></a>

Clears the value of EntryId_Optional and sets EntryId_IsSet to false.

#### `public inline bool `[`IsEntryIdSet`](#structFRHAPI__UserLinkHistoryEntry_1a28b8d6e95ea567f240158ddbf3fb19d1)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a28b8d6e95ea567f240158ddbf3fb19d1"></a>

Checks whether EntryId_Optional has been set.

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a3615dab5552f3569dc3887c930dac033)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a3615dab5552f3569dc3887c930dac033"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a4bf9cc3eadccde05d61a40e9319b4b72)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a4bf9cc3eadccde05d61a40e9319b4b72"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1ac28e9899f3cff95ad20eaea74ba6824e)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1ac28e9899f3cff95ad20eaea74ba6824e"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1aa1085375c2691cfa81bc5d7a43aa79e3)`(FGuid & OutValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1aa1085375c2691cfa81bc5d7a43aa79e3"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a12f3f35d55b422d436250555f3d91cb8)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a12f3f35d55b422d436250555f3d91cb8"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a1256900cf9171b87bcd81bbe55b01070)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a1256900cf9171b87bcd81bbe55b01070"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1aad24f7efaad23de5681a0712c6b8ec80)`(const FGuid & NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1aad24f7efaad23de5681a0712c6b8ec80"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1ad6279412a3dc4a35ff13f234e9cf00e4)`(FGuid && NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1ad6279412a3dc4a35ff13f234e9cf00e4"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a067b2e03ddb899182e3165a16e03f4e7)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a067b2e03ddb899182e3165a16e03f4e7"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__UserLinkHistoryEntry_1a4bfa2db959c91c2a5af40f7e31d02e05)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a4bfa2db959c91c2a5af40f7e31d02e05"></a>

Checks whether PlayerUuid_Optional has been set.

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1a7da0ea304d1723b921b1f64ec2ba1855)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a7da0ea304d1723b921b1f64ec2ba1855"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1a33ec364dd13365e3c8b829376ab81f9b)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a33ec364dd13365e3c8b829376ab81f9b"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1add9dddb4265fcfdd9af85b5ee2878d20)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1add9dddb4265fcfdd9af85b5ee2878d20"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1ae780d79dd84214272c2297702d9ece4b)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1ae780d79dd84214272c2297702d9ece4b"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__UserLinkHistoryEntry_1ae7c04f705e75117ac390c4099afc2f03)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1ae7c04f705e75117ac390c4099afc2f03"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a446af2fe1ae703a3eadc5b12c87a3886)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a446af2fe1ae703a3eadc5b12c87a3886"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1a6836023717b81a5dda6394c244b67c3c)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a6836023717b81a5dda6394c244b67c3c"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline void `[`SetPlatform`](#structFRHAPI__UserLinkHistoryEntry_1a5a387b0d154e568092b2e9deb29b323e)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a5a387b0d154e568092b2e9deb29b323e"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__UserLinkHistoryEntry_1a51e01961a0f0610c6651f6a1b195a91d)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a51e01961a0f0610c6651f6a1b195a91d"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline bool `[`IsPlatformSet`](#structFRHAPI__UserLinkHistoryEntry_1aa2f6ff5688514c4615fe2074ad2323e7)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1aa2f6ff5688514c4615fe2074ad2323e7"></a>

Checks whether Platform_Optional has been set.

#### `public inline FString & `[`GetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a809f5cb9a0a81c27f66d61227e24d617)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a809f5cb9a0a81c27f66d61227e24d617"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a23046117137a5525e729ea04f930e208)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a23046117137a5525e729ea04f930e208"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a209d9df9620d31684495da7f4e08016a)`(const FString & DefaultValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1a209d9df9620d31684495da7f4e08016a"></a>

Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a9c4d09b2c124622a7aaa39475e096d55)`(FString & OutValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1a9c4d09b2c124622a7aaa39475e096d55"></a>

Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a96cde056ac052e0e34051a6bfecb725a)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a96cde056ac052e0e34051a6bfecb725a"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a47f6d010947a67bc7816ea46d82b9393)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a47f6d010947a67bc7816ea46d82b9393"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a708cbdc91af05d6c5e7bc47b95f222c2)`(const FString & NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a708cbdc91af05d6c5e7bc47b95f222c2"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a6d24f2e15aa034b6b3f9492401858de5)`(FString && NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a6d24f2e15aa034b6b3f9492401858de5"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformUserId`](#structFRHAPI__UserLinkHistoryEntry_1a3430e6ba7ce6bdb30949924e85a9cdb2)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a3430e6ba7ce6bdb30949924e85a9cdb2"></a>

Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.

#### `public inline bool `[`IsPlatformUserIdSet`](#structFRHAPI__UserLinkHistoryEntry_1a8428bdb088bdbe0afe57531e9f8dc371)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a8428bdb088bdbe0afe57531e9f8dc371"></a>

Checks whether PlatformUserId_Optional has been set.

#### `public inline FGuid & `[`GetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1af1f69c48fc21f0b55032ec9681870617)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1af1f69c48fc21f0b55032ec9681870617"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1a38b74750a02cc289beb77d46b5fd95c7)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a38b74750a02cc289beb77d46b5fd95c7"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1a00979e9fc84359b928a822a364a8488e)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1a00979e9fc84359b928a822a364a8488e"></a>

Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1a43a3d337970e07af64b75ba0c2f1b073)`(FGuid & OutValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1a43a3d337970e07af64b75ba0c2f1b073"></a>

Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1abacd384f32252a35d243209f01584784)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1abacd384f32252a35d243209f01584784"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a6f6a0685e90c7a4271a530716fa76e90)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a6f6a0685e90c7a4271a530716fa76e90"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1ac4fd9f20d1e9fc0b60354a12e8895def)`(const FGuid & NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1ac4fd9f20d1e9fc0b60354a12e8895def"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.

#### `public inline void `[`SetPersonId`](#structFRHAPI__UserLinkHistoryEntry_1a84608276ae6ce70dc33ee5a1c33e126e)`(FGuid && NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a84608276ae6ce70dc33ee5a1c33e126e"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.

#### `public inline void `[`ClearPersonId`](#structFRHAPI__UserLinkHistoryEntry_1a85e1df666dc5b197b3858fd5b079d04f)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a85e1df666dc5b197b3858fd5b079d04f"></a>

Clears the value of PersonId_Optional and sets PersonId_IsSet to false.

#### `public inline bool `[`IsPersonIdSet`](#structFRHAPI__UserLinkHistoryEntry_1a421d985d7e566311aabefeb26a303127)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a421d985d7e566311aabefeb26a303127"></a>

Checks whether PersonId_Optional has been set.

#### `public inline FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a6fcc22082b960fe25f7d53733d08c496)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a6fcc22082b960fe25f7d53733d08c496"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1ad58c7eab0ed2887f177e7d6f8ed1ad8e)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1ad58c7eab0ed2887f177e7d6f8ed1ad8e"></a>

Gets the value of ActivePlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a7a4b5737381eed50674f3bf2d8416294)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1a7a4b5737381eed50674f3bf2d8416294"></a>

Gets the value of ActivePlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1a43f8ab3a79f7fc2865207375e4152e88)`(FGuid & OutValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1a43f8ab3a79f7fc2865207375e4152e88"></a>

Fills OutValue with the value of ActivePlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a2acc3897939706bb318ebc5853e64ce6)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a2acc3897939706bb318ebc5853e64ce6"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetActivePlayerUuidOrNull`](#structFRHAPI__UserLinkHistoryEntry_1ae75a6f6f0b8b4793d9320f075f2a4835)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1ae75a6f6f0b8b4793d9320f075f2a4835"></a>

Returns a pointer to ActivePlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1ae514c4df2e4442a88dbc607e40f0b375)`(const FGuid & NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1ae514c4df2e4442a88dbc607e40f0b375"></a>

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true.

#### `public inline void `[`SetActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1ae92668cff887406d0ce8572f14cdb143)`(FGuid && NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1ae92668cff887406d0ce8572f14cdb143"></a>

Sets the value of ActivePlayerUuid_Optional and also sets ActivePlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearActivePlayerUuid`](#structFRHAPI__UserLinkHistoryEntry_1ad728fe83f8235bc2b713a550ccefd111)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1ad728fe83f8235bc2b713a550ccefd111"></a>

Clears the value of ActivePlayerUuid_Optional and sets ActivePlayerUuid_IsSet to false.

#### `public inline bool `[`IsActivePlayerUuidSet`](#structFRHAPI__UserLinkHistoryEntry_1a32b19173e1fcdb6c664f4906ce271b19)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a32b19173e1fcdb6c664f4906ce271b19"></a>

Checks whether ActivePlayerUuid_Optional has been set.

#### `public inline ERHAPI_LinkAction & `[`GetAction`](#structFRHAPI__UserLinkHistoryEntry_1a1f70e58736def7c900af12097b1c151d)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a1f70e58736def7c900af12097b1c151d"></a>

Gets the value of Action.

#### `public inline const ERHAPI_LinkAction & `[`GetAction`](#structFRHAPI__UserLinkHistoryEntry_1a63beb6d3ff648c841e80868107de6b5b)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a63beb6d3ff648c841e80868107de6b5b"></a>

Gets the value of Action.

#### `public inline void `[`SetAction`](#structFRHAPI__UserLinkHistoryEntry_1a23a2b1dc0c20c27723f3d7526e4f3010)`(const ERHAPI_LinkAction & NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a23a2b1dc0c20c27723f3d7526e4f3010"></a>

Sets the value of Action.

#### `public inline void `[`SetAction`](#structFRHAPI__UserLinkHistoryEntry_1a5257cddf8225d81ef750cfaa16740e16)`(ERHAPI_LinkAction && NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a5257cddf8225d81ef750cfaa16740e16"></a>

Sets the value of Action using move semantics.

#### `public inline FDateTime & `[`GetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1a1615371da8b60e2d70489def3a36b00d)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a1615371da8b60e2d70489def3a36b00d"></a>

Gets the value of Timestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1acd2a1ff6d52de8c66249634102aa54b8)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1acd2a1ff6d52de8c66249634102aa54b8"></a>

Gets the value of Timestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1a4068844eae72530a34c807310c3385a1)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1a4068844eae72530a34c807310c3385a1"></a>

Gets the value of Timestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1ac4ef537b7c4cc22f8adcf6e729b7cc27)`(FDateTime & OutValue) const` <a id="structFRHAPI__UserLinkHistoryEntry_1ac4ef537b7c4cc22f8adcf6e729b7cc27"></a>

Fills OutValue with the value of Timestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetTimestampOrNull`](#structFRHAPI__UserLinkHistoryEntry_1ab4edac0f539bb50addfb81b80f9d0336)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1ab4edac0f539bb50addfb81b80f9d0336"></a>

Returns a pointer to Timestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetTimestampOrNull`](#structFRHAPI__UserLinkHistoryEntry_1a89631a346f34f2c35619a03d996a4840)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a89631a346f34f2c35619a03d996a4840"></a>

Returns a pointer to Timestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1a5590ffc7ff32d6c296e98b3ae738f05a)`(const FDateTime & NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a5590ffc7ff32d6c296e98b3ae738f05a"></a>

Sets the value of Timestamp_Optional and also sets Timestamp_IsSet to true.

#### `public inline void `[`SetTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1a7077f9b50b91a06146f77c1a4ccad9ab)`(FDateTime && NewValue)` <a id="structFRHAPI__UserLinkHistoryEntry_1a7077f9b50b91a06146f77c1a4ccad9ab"></a>

Sets the value of Timestamp_Optional and also sets Timestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearTimestamp`](#structFRHAPI__UserLinkHistoryEntry_1a08513e951f42b87a5eab036c388a1d2d)`()` <a id="structFRHAPI__UserLinkHistoryEntry_1a08513e951f42b87a5eab036c388a1d2d"></a>

Clears the value of Timestamp_Optional and sets Timestamp_IsSet to false.

#### `public inline bool `[`IsTimestampSet`](#structFRHAPI__UserLinkHistoryEntry_1a5aade2d917525534bee8d513fe4fe42a)`() const` <a id="structFRHAPI__UserLinkHistoryEntry_1a5aade2d917525534bee8d513fe4fe42a"></a>

Checks whether Timestamp_Optional has been set.

