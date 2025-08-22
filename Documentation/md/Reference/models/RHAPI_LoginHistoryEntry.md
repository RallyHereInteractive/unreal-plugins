---
title: RHAPI_LoginHistoryEntry
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_LoginHistoryEntry`](#structFRHAPI__LoginHistoryEntry) | Entry in a users&#39;s login history. Some fields may be missing if the data is not available.

## struct `FRHAPI_LoginHistoryEntry` <a id="structFRHAPI__LoginHistoryEntry"></a>

```
struct FRHAPI_LoginHistoryEntry
  : public FRHAPI_Model
```

Entry in a users&#39;s login history. Some fields may be missing if the data is not available.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__LoginHistoryEntry_1a0c5c4e1c579123812176f3eb97630764) | player UUID
`public bool `[`PlayerUuid_IsSet`](#structFRHAPI__LoginHistoryEntry_1a99bffc5274b0995ee0922ab1d320d3a0) | true if PlayerUuid_Optional has been set to a value
`public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__LoginHistoryEntry_1a81e3dbc40705e7266e3300bda9605e5d) | platform
`public bool `[`Platform_IsSet`](#structFRHAPI__LoginHistoryEntry_1ac93408bb978174ae5883cdc7a495b2fb) | true if Platform_Optional has been set to a value
`public FString `[`PlatformUserId_Optional`](#structFRHAPI__LoginHistoryEntry_1ac5a4bf0332aaf35b0cfba6e4ab56cc49) | platform user ID
`public bool `[`PlatformUserId_IsSet`](#structFRHAPI__LoginHistoryEntry_1a3fcf4125bd781b91572a70e798328cbb) | true if PlatformUserId_Optional has been set to a value
`public FGuid `[`PersonId_Optional`](#structFRHAPI__LoginHistoryEntry_1ac6765a578af82e23a684905e912ca7a2) | person ID
`public bool `[`PersonId_IsSet`](#structFRHAPI__LoginHistoryEntry_1ac037ab5bbaa8afa52d73b61ddc1ecce4) | true if PersonId_Optional has been set to a value
`public FString `[`UserAgent_Optional`](#structFRHAPI__LoginHistoryEntry_1a4386a0e8786fd90110126d0b176e4c3f) | user agent string
`public bool `[`UserAgent_IsSet`](#structFRHAPI__LoginHistoryEntry_1a2f9dd2ea28bda2af9bc909e2e4d9cefb) | true if UserAgent_Optional has been set to a value
`public FString `[`Ip_Optional`](#structFRHAPI__LoginHistoryEntry_1aeb586ac78765df62294255b56b4ccafe) | IP address.
`public bool `[`Ip_IsSet`](#structFRHAPI__LoginHistoryEntry_1af5cfcc43374e5bfc67013db05b92adbd) | true if Ip_Optional has been set to a value
`public FString `[`ClientId_Optional`](#structFRHAPI__LoginHistoryEntry_1a212838e0a426987d8686470d3d544d7e) | client ID
`public bool `[`ClientId_IsSet`](#structFRHAPI__LoginHistoryEntry_1adbf347b7245aa300f49f44c294180f2e) | true if ClientId_Optional has been set to a value
`public FDateTime `[`Timestamp_Optional`](#structFRHAPI__LoginHistoryEntry_1ac831af27c0a13f76d2b379f9e6a666b2) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Timestamp_IsSet`](#structFRHAPI__LoginHistoryEntry_1a99489375adb489fb3c3e6ae3de594f0a) | true if Timestamp_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__LoginHistoryEntry_1a7c84e74acce241c556a9f53ae588f85b)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__LoginHistoryEntry_1a08c0b98d59bb8004ae450ec7d6e670f8)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a82c078d7e7a926016df360072eb8179e)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a0e75b38381efdd4ed350c9ef20704951)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a9f2584fb9235e77f066b06345e58641d)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1aea8d7acafc13fbece75fe78967aa0491)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__LoginHistoryEntry_1a8f6bdaa22e58e013ffb715f9fee7b980)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__LoginHistoryEntry_1aa7bf606677fad14c2c4adb299e2c8e65)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a9a1341d10c71ff3300b12c1088a74424)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a1856b9cf6ad923ea40ac04b05ea76a18)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a3345929131af289cdc4c409f32ab959b)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginHistoryEntry_1a5205e512027bbdf5ea916724d6280ca1)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginHistoryEntry_1a2c758d0e269473a78c817060647de8f1)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginHistoryEntry_1ab6bc70a4886b545b2b240891a43aabbc)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__LoginHistoryEntry_1a15cb089ccfe990beb3197599e5e379fa)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__LoginHistoryEntry_1af5a8ce6801d723db090dbc3620a702b0)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__LoginHistoryEntry_1ac48820109c7f0acb8bd4eb3a50172986)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__LoginHistoryEntry_1a0e3207bcbac3072dd392799bac6371ae)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__LoginHistoryEntry_1a33e382ed1ef404cea273b84e8b26a4a0)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__LoginHistoryEntry_1a2b3e3b21e6f59132746f2eafbf882e70)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1af8639d624901e77235499887c9797d4d)`()` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1a7813a7388b0313d92a6fc472effbc0c2)`() const` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1a6d8f124d0b04f0a072973437fad97fad)`(const FString & DefaultValue) const` | Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1a104987471c019058ad5e822b59dd002b)`(FString & OutValue) const` | Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__LoginHistoryEntry_1a0b58b9ada4b764f74128de85fc14b31b)`()` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__LoginHistoryEntry_1a0c1be27e5c19720adb1d94f1e6614d31)`() const` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1ad94306a461990ffa734dff10369bb5ec)`(const FString & NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1a52ca208f3c5f9ead29ed97faa8fd2f13)`(FString && NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1a641ef023e6ebd24b7f3a4fa2a79fba61)`()` | Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__LoginHistoryEntry_1a2bbae1d78ef3c4a59df705715ce1ae98)`()` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__LoginHistoryEntry_1abcd10ce3dca7613b200bf25a356e61cc)`() const` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__LoginHistoryEntry_1af793b8303ab13fde004f9929ff571ef2)`(const FGuid & DefaultValue) const` | Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPersonId`](#structFRHAPI__LoginHistoryEntry_1adf493226da3e305debda3f318c45d477)`(FGuid & OutValue) const` | Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__LoginHistoryEntry_1a484b3d2fb34db8b4e4a75559940bb946)`()` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__LoginHistoryEntry_1a38f8f6c5212aeb9eb1503cbc42ead73f)`() const` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__LoginHistoryEntry_1a6da4eaa710223f24a24e0c6dfffd3234)`(const FGuid & NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__LoginHistoryEntry_1aa7f54dfa1715517d9c4e11ba56df0516)`(FGuid && NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.
`public inline void `[`ClearPersonId`](#structFRHAPI__LoginHistoryEntry_1a6975f18bf5e1e2e927c50ecd7f14bd30)`()` | Clears the value of PersonId_Optional and sets PersonId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetUserAgent`](#structFRHAPI__LoginHistoryEntry_1a410206393d952e90fcd0cb75a6785b9f)`()` | Gets the value of UserAgent_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetUserAgent`](#structFRHAPI__LoginHistoryEntry_1a5e43ec2a52af44f8658c2d1322e2dc72)`() const` | Gets the value of UserAgent_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetUserAgent`](#structFRHAPI__LoginHistoryEntry_1ac0be010063d701c64227df99e6dc9bbf)`(const FString & DefaultValue) const` | Gets the value of UserAgent_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetUserAgent`](#structFRHAPI__LoginHistoryEntry_1ad7e673ca877d72b3ae809c33477d2226)`(FString & OutValue) const` | Fills OutValue with the value of UserAgent_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetUserAgentOrNull`](#structFRHAPI__LoginHistoryEntry_1a394773fbdf81af481bb2900d50b4d652)`()` | Returns a pointer to UserAgent_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetUserAgentOrNull`](#structFRHAPI__LoginHistoryEntry_1a392c831edfb2e8c453cab34415abfee7)`() const` | Returns a pointer to UserAgent_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetUserAgent`](#structFRHAPI__LoginHistoryEntry_1ab76d909762af3e9f51a3886f486883e1)`(const FString & NewValue)` | Sets the value of UserAgent_Optional and also sets UserAgent_IsSet to true.
`public inline FORCEINLINE void `[`SetUserAgent`](#structFRHAPI__LoginHistoryEntry_1a598dbb319ce6b60868ce394c6a3b8ce9)`(FString && NewValue)` | Sets the value of UserAgent_Optional and also sets UserAgent_IsSet to true using move semantics.
`public inline void `[`ClearUserAgent`](#structFRHAPI__LoginHistoryEntry_1a92eab03ba65145c048768f43f33516d9)`()` | Clears the value of UserAgent_Optional and sets UserAgent_IsSet to false.
`public inline FORCEINLINE FString & `[`GetIp`](#structFRHAPI__LoginHistoryEntry_1a8275abde3870c16c6666a066aaefcc16)`()` | Gets the value of Ip_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetIp`](#structFRHAPI__LoginHistoryEntry_1a5e93af238e95e98527c02642b03071d9)`() const` | Gets the value of Ip_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetIp`](#structFRHAPI__LoginHistoryEntry_1ace45468a65acc537445e13c8e31f8c92)`(const FString & DefaultValue) const` | Gets the value of Ip_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetIp`](#structFRHAPI__LoginHistoryEntry_1a75432c838d0a067a0777f214291185b8)`(FString & OutValue) const` | Fills OutValue with the value of Ip_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetIpOrNull`](#structFRHAPI__LoginHistoryEntry_1ae0f9fd5a951986e17adb60ed2518a306)`()` | Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetIpOrNull`](#structFRHAPI__LoginHistoryEntry_1a2a43d933af9b464d7a55b77881ea1bb9)`() const` | Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetIp`](#structFRHAPI__LoginHistoryEntry_1ad7dfc17cd7309ecf6478853f9cb866a6)`(const FString & NewValue)` | Sets the value of Ip_Optional and also sets Ip_IsSet to true.
`public inline FORCEINLINE void `[`SetIp`](#structFRHAPI__LoginHistoryEntry_1af00c5cf48939357b4b2d28f48c8c639c)`(FString && NewValue)` | Sets the value of Ip_Optional and also sets Ip_IsSet to true using move semantics.
`public inline void `[`ClearIp`](#structFRHAPI__LoginHistoryEntry_1aeaaca996bebc29399978fc31af9c3fc3)`()` | Clears the value of Ip_Optional and sets Ip_IsSet to false.
`public inline FORCEINLINE FString & `[`GetClientId`](#structFRHAPI__LoginHistoryEntry_1a96edb9923ce82c1f0196c2c0f21cb788)`()` | Gets the value of ClientId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetClientId`](#structFRHAPI__LoginHistoryEntry_1a03dea24f5f364cf4f860ad0143c8fc3c)`() const` | Gets the value of ClientId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetClientId`](#structFRHAPI__LoginHistoryEntry_1a7696d13e3108797a430a5940e42b8a98)`(const FString & DefaultValue) const` | Gets the value of ClientId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetClientId`](#structFRHAPI__LoginHistoryEntry_1a2bac3044af6636f76d8e7ec1f33ca408)`(FString & OutValue) const` | Fills OutValue with the value of ClientId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetClientIdOrNull`](#structFRHAPI__LoginHistoryEntry_1afb9c3a664bf3c0e09b7015d6c4cb7338)`()` | Returns a pointer to ClientId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetClientIdOrNull`](#structFRHAPI__LoginHistoryEntry_1a6b038e11f7e66066792940cb33f23982)`() const` | Returns a pointer to ClientId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetClientId`](#structFRHAPI__LoginHistoryEntry_1a67943dcbd67638ed892b0434d68476f1)`(const FString & NewValue)` | Sets the value of ClientId_Optional and also sets ClientId_IsSet to true.
`public inline FORCEINLINE void `[`SetClientId`](#structFRHAPI__LoginHistoryEntry_1a59c7ec0ebb986fed6f6a2fd2aa169fd9)`(FString && NewValue)` | Sets the value of ClientId_Optional and also sets ClientId_IsSet to true using move semantics.
`public inline void `[`ClearClientId`](#structFRHAPI__LoginHistoryEntry_1a98cf748e36af28794be07c7cd58d882e)`()` | Clears the value of ClientId_Optional and sets ClientId_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetTimestamp`](#structFRHAPI__LoginHistoryEntry_1af29732b52d9c5ccb784b6151e55b4551)`()` | Gets the value of Timestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetTimestamp`](#structFRHAPI__LoginHistoryEntry_1ac08634dcb9095a83965ca5817589f82d)`() const` | Gets the value of Timestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetTimestamp`](#structFRHAPI__LoginHistoryEntry_1a51ceb375d8ce5e981ec20b4bea9d2557)`(const FDateTime & DefaultValue) const` | Gets the value of Timestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTimestamp`](#structFRHAPI__LoginHistoryEntry_1afa8d929caecff8a6df8d1ec8c44ef079)`(FDateTime & OutValue) const` | Fills OutValue with the value of Timestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetTimestampOrNull`](#structFRHAPI__LoginHistoryEntry_1a2a73c9a5d5db5fc1d8fadf33cf1f4b27)`()` | Returns a pointer to Timestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetTimestampOrNull`](#structFRHAPI__LoginHistoryEntry_1a582ee4fc59506870c027acd37b799530)`() const` | Returns a pointer to Timestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTimestamp`](#structFRHAPI__LoginHistoryEntry_1af5304def6f985e8f43247c70f71160ea)`(const FDateTime & NewValue)` | Sets the value of Timestamp_Optional and also sets Timestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetTimestamp`](#structFRHAPI__LoginHistoryEntry_1aab41591cbf1de55ff53652c47029c17c)`(FDateTime && NewValue)` | Sets the value of Timestamp_Optional and also sets Timestamp_IsSet to true using move semantics.
`public inline void `[`ClearTimestamp`](#structFRHAPI__LoginHistoryEntry_1ac1ae1c0d66b99f9e322075e4efb67161)`()` | Clears the value of Timestamp_Optional and sets Timestamp_IsSet to false.

### Members

#### `public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__LoginHistoryEntry_1a0c5c4e1c579123812176f3eb97630764) <a id="structFRHAPI__LoginHistoryEntry_1a0c5c4e1c579123812176f3eb97630764"></a>

player UUID

#### `public bool `[`PlayerUuid_IsSet`](#structFRHAPI__LoginHistoryEntry_1a99bffc5274b0995ee0922ab1d320d3a0) <a id="structFRHAPI__LoginHistoryEntry_1a99bffc5274b0995ee0922ab1d320d3a0"></a>

true if PlayerUuid_Optional has been set to a value

#### `public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__LoginHistoryEntry_1a81e3dbc40705e7266e3300bda9605e5d) <a id="structFRHAPI__LoginHistoryEntry_1a81e3dbc40705e7266e3300bda9605e5d"></a>

platform

#### `public bool `[`Platform_IsSet`](#structFRHAPI__LoginHistoryEntry_1ac93408bb978174ae5883cdc7a495b2fb) <a id="structFRHAPI__LoginHistoryEntry_1ac93408bb978174ae5883cdc7a495b2fb"></a>

true if Platform_Optional has been set to a value

#### `public FString `[`PlatformUserId_Optional`](#structFRHAPI__LoginHistoryEntry_1ac5a4bf0332aaf35b0cfba6e4ab56cc49) <a id="structFRHAPI__LoginHistoryEntry_1ac5a4bf0332aaf35b0cfba6e4ab56cc49"></a>

platform user ID

#### `public bool `[`PlatformUserId_IsSet`](#structFRHAPI__LoginHistoryEntry_1a3fcf4125bd781b91572a70e798328cbb) <a id="structFRHAPI__LoginHistoryEntry_1a3fcf4125bd781b91572a70e798328cbb"></a>

true if PlatformUserId_Optional has been set to a value

#### `public FGuid `[`PersonId_Optional`](#structFRHAPI__LoginHistoryEntry_1ac6765a578af82e23a684905e912ca7a2) <a id="structFRHAPI__LoginHistoryEntry_1ac6765a578af82e23a684905e912ca7a2"></a>

person ID

#### `public bool `[`PersonId_IsSet`](#structFRHAPI__LoginHistoryEntry_1ac037ab5bbaa8afa52d73b61ddc1ecce4) <a id="structFRHAPI__LoginHistoryEntry_1ac037ab5bbaa8afa52d73b61ddc1ecce4"></a>

true if PersonId_Optional has been set to a value

#### `public FString `[`UserAgent_Optional`](#structFRHAPI__LoginHistoryEntry_1a4386a0e8786fd90110126d0b176e4c3f) <a id="structFRHAPI__LoginHistoryEntry_1a4386a0e8786fd90110126d0b176e4c3f"></a>

user agent string

#### `public bool `[`UserAgent_IsSet`](#structFRHAPI__LoginHistoryEntry_1a2f9dd2ea28bda2af9bc909e2e4d9cefb) <a id="structFRHAPI__LoginHistoryEntry_1a2f9dd2ea28bda2af9bc909e2e4d9cefb"></a>

true if UserAgent_Optional has been set to a value

#### `public FString `[`Ip_Optional`](#structFRHAPI__LoginHistoryEntry_1aeb586ac78765df62294255b56b4ccafe) <a id="structFRHAPI__LoginHistoryEntry_1aeb586ac78765df62294255b56b4ccafe"></a>

IP address.

#### `public bool `[`Ip_IsSet`](#structFRHAPI__LoginHistoryEntry_1af5cfcc43374e5bfc67013db05b92adbd) <a id="structFRHAPI__LoginHistoryEntry_1af5cfcc43374e5bfc67013db05b92adbd"></a>

true if Ip_Optional has been set to a value

#### `public FString `[`ClientId_Optional`](#structFRHAPI__LoginHistoryEntry_1a212838e0a426987d8686470d3d544d7e) <a id="structFRHAPI__LoginHistoryEntry_1a212838e0a426987d8686470d3d544d7e"></a>

client ID

#### `public bool `[`ClientId_IsSet`](#structFRHAPI__LoginHistoryEntry_1adbf347b7245aa300f49f44c294180f2e) <a id="structFRHAPI__LoginHistoryEntry_1adbf347b7245aa300f49f44c294180f2e"></a>

true if ClientId_Optional has been set to a value

#### `public FDateTime `[`Timestamp_Optional`](#structFRHAPI__LoginHistoryEntry_1ac831af27c0a13f76d2b379f9e6a666b2) <a id="structFRHAPI__LoginHistoryEntry_1ac831af27c0a13f76d2b379f9e6a666b2"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`Timestamp_IsSet`](#structFRHAPI__LoginHistoryEntry_1a99489375adb489fb3c3e6ae3de594f0a) <a id="structFRHAPI__LoginHistoryEntry_1a99489375adb489fb3c3e6ae3de594f0a"></a>

true if Timestamp_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__LoginHistoryEntry_1a7c84e74acce241c556a9f53ae588f85b)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__LoginHistoryEntry_1a7c84e74acce241c556a9f53ae588f85b"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__LoginHistoryEntry_1a08c0b98d59bb8004ae450ec7d6e670f8)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__LoginHistoryEntry_1a08c0b98d59bb8004ae450ec7d6e670f8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a82c078d7e7a926016df360072eb8179e)`()` <a id="structFRHAPI__LoginHistoryEntry_1a82c078d7e7a926016df360072eb8179e"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a0e75b38381efdd4ed350c9ef20704951)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a0e75b38381efdd4ed350c9ef20704951"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a9f2584fb9235e77f066b06345e58641d)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__LoginHistoryEntry_1a9f2584fb9235e77f066b06345e58641d"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1aea8d7acafc13fbece75fe78967aa0491)`(FGuid & OutValue) const` <a id="structFRHAPI__LoginHistoryEntry_1aea8d7acafc13fbece75fe78967aa0491"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__LoginHistoryEntry_1a8f6bdaa22e58e013ffb715f9fee7b980)`()` <a id="structFRHAPI__LoginHistoryEntry_1a8f6bdaa22e58e013ffb715f9fee7b980"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__LoginHistoryEntry_1aa7bf606677fad14c2c4adb299e2c8e65)`() const` <a id="structFRHAPI__LoginHistoryEntry_1aa7bf606677fad14c2c4adb299e2c8e65"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a9a1341d10c71ff3300b12c1088a74424)`(const FGuid & NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1a9a1341d10c71ff3300b12c1088a74424"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a1856b9cf6ad923ea40ac04b05ea76a18)`(FGuid && NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1a1856b9cf6ad923ea40ac04b05ea76a18"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a3345929131af289cdc4c409f32ab959b)`()` <a id="structFRHAPI__LoginHistoryEntry_1a3345929131af289cdc4c409f32ab959b"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginHistoryEntry_1a5205e512027bbdf5ea916724d6280ca1)`()` <a id="structFRHAPI__LoginHistoryEntry_1a5205e512027bbdf5ea916724d6280ca1"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginHistoryEntry_1a2c758d0e269473a78c817060647de8f1)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a2c758d0e269473a78c817060647de8f1"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginHistoryEntry_1ab6bc70a4886b545b2b240891a43aabbc)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__LoginHistoryEntry_1ab6bc70a4886b545b2b240891a43aabbc"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__LoginHistoryEntry_1a15cb089ccfe990beb3197599e5e379fa)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__LoginHistoryEntry_1a15cb089ccfe990beb3197599e5e379fa"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__LoginHistoryEntry_1af5a8ce6801d723db090dbc3620a702b0)`()` <a id="structFRHAPI__LoginHistoryEntry_1af5a8ce6801d723db090dbc3620a702b0"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__LoginHistoryEntry_1ac48820109c7f0acb8bd4eb3a50172986)`() const` <a id="structFRHAPI__LoginHistoryEntry_1ac48820109c7f0acb8bd4eb3a50172986"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__LoginHistoryEntry_1a0e3207bcbac3072dd392799bac6371ae)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1a0e3207bcbac3072dd392799bac6371ae"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__LoginHistoryEntry_1a33e382ed1ef404cea273b84e8b26a4a0)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1a33e382ed1ef404cea273b84e8b26a4a0"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__LoginHistoryEntry_1a2b3e3b21e6f59132746f2eafbf882e70)`()` <a id="structFRHAPI__LoginHistoryEntry_1a2b3e3b21e6f59132746f2eafbf882e70"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1af8639d624901e77235499887c9797d4d)`()` <a id="structFRHAPI__LoginHistoryEntry_1af8639d624901e77235499887c9797d4d"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1a7813a7388b0313d92a6fc472effbc0c2)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a7813a7388b0313d92a6fc472effbc0c2"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1a6d8f124d0b04f0a072973437fad97fad)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginHistoryEntry_1a6d8f124d0b04f0a072973437fad97fad"></a>

Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1a104987471c019058ad5e822b59dd002b)`(FString & OutValue) const` <a id="structFRHAPI__LoginHistoryEntry_1a104987471c019058ad5e822b59dd002b"></a>

Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__LoginHistoryEntry_1a0b58b9ada4b764f74128de85fc14b31b)`()` <a id="structFRHAPI__LoginHistoryEntry_1a0b58b9ada4b764f74128de85fc14b31b"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__LoginHistoryEntry_1a0c1be27e5c19720adb1d94f1e6614d31)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a0c1be27e5c19720adb1d94f1e6614d31"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1ad94306a461990ffa734dff10369bb5ec)`(const FString & NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1ad94306a461990ffa734dff10369bb5ec"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1a52ca208f3c5f9ead29ed97faa8fd2f13)`(FString && NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1a52ca208f3c5f9ead29ed97faa8fd2f13"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1a641ef023e6ebd24b7f3a4fa2a79fba61)`()` <a id="structFRHAPI__LoginHistoryEntry_1a641ef023e6ebd24b7f3a4fa2a79fba61"></a>

Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__LoginHistoryEntry_1a2bbae1d78ef3c4a59df705715ce1ae98)`()` <a id="structFRHAPI__LoginHistoryEntry_1a2bbae1d78ef3c4a59df705715ce1ae98"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__LoginHistoryEntry_1abcd10ce3dca7613b200bf25a356e61cc)`() const` <a id="structFRHAPI__LoginHistoryEntry_1abcd10ce3dca7613b200bf25a356e61cc"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__LoginHistoryEntry_1af793b8303ab13fde004f9929ff571ef2)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__LoginHistoryEntry_1af793b8303ab13fde004f9929ff571ef2"></a>

Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPersonId`](#structFRHAPI__LoginHistoryEntry_1adf493226da3e305debda3f318c45d477)`(FGuid & OutValue) const` <a id="structFRHAPI__LoginHistoryEntry_1adf493226da3e305debda3f318c45d477"></a>

Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__LoginHistoryEntry_1a484b3d2fb34db8b4e4a75559940bb946)`()` <a id="structFRHAPI__LoginHistoryEntry_1a484b3d2fb34db8b4e4a75559940bb946"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__LoginHistoryEntry_1a38f8f6c5212aeb9eb1503cbc42ead73f)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a38f8f6c5212aeb9eb1503cbc42ead73f"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__LoginHistoryEntry_1a6da4eaa710223f24a24e0c6dfffd3234)`(const FGuid & NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1a6da4eaa710223f24a24e0c6dfffd3234"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__LoginHistoryEntry_1aa7f54dfa1715517d9c4e11ba56df0516)`(FGuid && NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1aa7f54dfa1715517d9c4e11ba56df0516"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.

#### `public inline void `[`ClearPersonId`](#structFRHAPI__LoginHistoryEntry_1a6975f18bf5e1e2e927c50ecd7f14bd30)`()` <a id="structFRHAPI__LoginHistoryEntry_1a6975f18bf5e1e2e927c50ecd7f14bd30"></a>

Clears the value of PersonId_Optional and sets PersonId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetUserAgent`](#structFRHAPI__LoginHistoryEntry_1a410206393d952e90fcd0cb75a6785b9f)`()` <a id="structFRHAPI__LoginHistoryEntry_1a410206393d952e90fcd0cb75a6785b9f"></a>

Gets the value of UserAgent_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetUserAgent`](#structFRHAPI__LoginHistoryEntry_1a5e43ec2a52af44f8658c2d1322e2dc72)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a5e43ec2a52af44f8658c2d1322e2dc72"></a>

Gets the value of UserAgent_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetUserAgent`](#structFRHAPI__LoginHistoryEntry_1ac0be010063d701c64227df99e6dc9bbf)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginHistoryEntry_1ac0be010063d701c64227df99e6dc9bbf"></a>

Gets the value of UserAgent_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetUserAgent`](#structFRHAPI__LoginHistoryEntry_1ad7e673ca877d72b3ae809c33477d2226)`(FString & OutValue) const` <a id="structFRHAPI__LoginHistoryEntry_1ad7e673ca877d72b3ae809c33477d2226"></a>

Fills OutValue with the value of UserAgent_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetUserAgentOrNull`](#structFRHAPI__LoginHistoryEntry_1a394773fbdf81af481bb2900d50b4d652)`()` <a id="structFRHAPI__LoginHistoryEntry_1a394773fbdf81af481bb2900d50b4d652"></a>

Returns a pointer to UserAgent_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetUserAgentOrNull`](#structFRHAPI__LoginHistoryEntry_1a392c831edfb2e8c453cab34415abfee7)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a392c831edfb2e8c453cab34415abfee7"></a>

Returns a pointer to UserAgent_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetUserAgent`](#structFRHAPI__LoginHistoryEntry_1ab76d909762af3e9f51a3886f486883e1)`(const FString & NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1ab76d909762af3e9f51a3886f486883e1"></a>

Sets the value of UserAgent_Optional and also sets UserAgent_IsSet to true.

#### `public inline FORCEINLINE void `[`SetUserAgent`](#structFRHAPI__LoginHistoryEntry_1a598dbb319ce6b60868ce394c6a3b8ce9)`(FString && NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1a598dbb319ce6b60868ce394c6a3b8ce9"></a>

Sets the value of UserAgent_Optional and also sets UserAgent_IsSet to true using move semantics.

#### `public inline void `[`ClearUserAgent`](#structFRHAPI__LoginHistoryEntry_1a92eab03ba65145c048768f43f33516d9)`()` <a id="structFRHAPI__LoginHistoryEntry_1a92eab03ba65145c048768f43f33516d9"></a>

Clears the value of UserAgent_Optional and sets UserAgent_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetIp`](#structFRHAPI__LoginHistoryEntry_1a8275abde3870c16c6666a066aaefcc16)`()` <a id="structFRHAPI__LoginHistoryEntry_1a8275abde3870c16c6666a066aaefcc16"></a>

Gets the value of Ip_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetIp`](#structFRHAPI__LoginHistoryEntry_1a5e93af238e95e98527c02642b03071d9)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a5e93af238e95e98527c02642b03071d9"></a>

Gets the value of Ip_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetIp`](#structFRHAPI__LoginHistoryEntry_1ace45468a65acc537445e13c8e31f8c92)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginHistoryEntry_1ace45468a65acc537445e13c8e31f8c92"></a>

Gets the value of Ip_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetIp`](#structFRHAPI__LoginHistoryEntry_1a75432c838d0a067a0777f214291185b8)`(FString & OutValue) const` <a id="structFRHAPI__LoginHistoryEntry_1a75432c838d0a067a0777f214291185b8"></a>

Fills OutValue with the value of Ip_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetIpOrNull`](#structFRHAPI__LoginHistoryEntry_1ae0f9fd5a951986e17adb60ed2518a306)`()` <a id="structFRHAPI__LoginHistoryEntry_1ae0f9fd5a951986e17adb60ed2518a306"></a>

Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetIpOrNull`](#structFRHAPI__LoginHistoryEntry_1a2a43d933af9b464d7a55b77881ea1bb9)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a2a43d933af9b464d7a55b77881ea1bb9"></a>

Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetIp`](#structFRHAPI__LoginHistoryEntry_1ad7dfc17cd7309ecf6478853f9cb866a6)`(const FString & NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1ad7dfc17cd7309ecf6478853f9cb866a6"></a>

Sets the value of Ip_Optional and also sets Ip_IsSet to true.

#### `public inline FORCEINLINE void `[`SetIp`](#structFRHAPI__LoginHistoryEntry_1af00c5cf48939357b4b2d28f48c8c639c)`(FString && NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1af00c5cf48939357b4b2d28f48c8c639c"></a>

Sets the value of Ip_Optional and also sets Ip_IsSet to true using move semantics.

#### `public inline void `[`ClearIp`](#structFRHAPI__LoginHistoryEntry_1aeaaca996bebc29399978fc31af9c3fc3)`()` <a id="structFRHAPI__LoginHistoryEntry_1aeaaca996bebc29399978fc31af9c3fc3"></a>

Clears the value of Ip_Optional and sets Ip_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetClientId`](#structFRHAPI__LoginHistoryEntry_1a96edb9923ce82c1f0196c2c0f21cb788)`()` <a id="structFRHAPI__LoginHistoryEntry_1a96edb9923ce82c1f0196c2c0f21cb788"></a>

Gets the value of ClientId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetClientId`](#structFRHAPI__LoginHistoryEntry_1a03dea24f5f364cf4f860ad0143c8fc3c)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a03dea24f5f364cf4f860ad0143c8fc3c"></a>

Gets the value of ClientId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetClientId`](#structFRHAPI__LoginHistoryEntry_1a7696d13e3108797a430a5940e42b8a98)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginHistoryEntry_1a7696d13e3108797a430a5940e42b8a98"></a>

Gets the value of ClientId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetClientId`](#structFRHAPI__LoginHistoryEntry_1a2bac3044af6636f76d8e7ec1f33ca408)`(FString & OutValue) const` <a id="structFRHAPI__LoginHistoryEntry_1a2bac3044af6636f76d8e7ec1f33ca408"></a>

Fills OutValue with the value of ClientId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetClientIdOrNull`](#structFRHAPI__LoginHistoryEntry_1afb9c3a664bf3c0e09b7015d6c4cb7338)`()` <a id="structFRHAPI__LoginHistoryEntry_1afb9c3a664bf3c0e09b7015d6c4cb7338"></a>

Returns a pointer to ClientId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetClientIdOrNull`](#structFRHAPI__LoginHistoryEntry_1a6b038e11f7e66066792940cb33f23982)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a6b038e11f7e66066792940cb33f23982"></a>

Returns a pointer to ClientId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetClientId`](#structFRHAPI__LoginHistoryEntry_1a67943dcbd67638ed892b0434d68476f1)`(const FString & NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1a67943dcbd67638ed892b0434d68476f1"></a>

Sets the value of ClientId_Optional and also sets ClientId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetClientId`](#structFRHAPI__LoginHistoryEntry_1a59c7ec0ebb986fed6f6a2fd2aa169fd9)`(FString && NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1a59c7ec0ebb986fed6f6a2fd2aa169fd9"></a>

Sets the value of ClientId_Optional and also sets ClientId_IsSet to true using move semantics.

#### `public inline void `[`ClearClientId`](#structFRHAPI__LoginHistoryEntry_1a98cf748e36af28794be07c7cd58d882e)`()` <a id="structFRHAPI__LoginHistoryEntry_1a98cf748e36af28794be07c7cd58d882e"></a>

Clears the value of ClientId_Optional and sets ClientId_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetTimestamp`](#structFRHAPI__LoginHistoryEntry_1af29732b52d9c5ccb784b6151e55b4551)`()` <a id="structFRHAPI__LoginHistoryEntry_1af29732b52d9c5ccb784b6151e55b4551"></a>

Gets the value of Timestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetTimestamp`](#structFRHAPI__LoginHistoryEntry_1ac08634dcb9095a83965ca5817589f82d)`() const` <a id="structFRHAPI__LoginHistoryEntry_1ac08634dcb9095a83965ca5817589f82d"></a>

Gets the value of Timestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetTimestamp`](#structFRHAPI__LoginHistoryEntry_1a51ceb375d8ce5e981ec20b4bea9d2557)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__LoginHistoryEntry_1a51ceb375d8ce5e981ec20b4bea9d2557"></a>

Gets the value of Timestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTimestamp`](#structFRHAPI__LoginHistoryEntry_1afa8d929caecff8a6df8d1ec8c44ef079)`(FDateTime & OutValue) const` <a id="structFRHAPI__LoginHistoryEntry_1afa8d929caecff8a6df8d1ec8c44ef079"></a>

Fills OutValue with the value of Timestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetTimestampOrNull`](#structFRHAPI__LoginHistoryEntry_1a2a73c9a5d5db5fc1d8fadf33cf1f4b27)`()` <a id="structFRHAPI__LoginHistoryEntry_1a2a73c9a5d5db5fc1d8fadf33cf1f4b27"></a>

Returns a pointer to Timestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetTimestampOrNull`](#structFRHAPI__LoginHistoryEntry_1a582ee4fc59506870c027acd37b799530)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a582ee4fc59506870c027acd37b799530"></a>

Returns a pointer to Timestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTimestamp`](#structFRHAPI__LoginHistoryEntry_1af5304def6f985e8f43247c70f71160ea)`(const FDateTime & NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1af5304def6f985e8f43247c70f71160ea"></a>

Sets the value of Timestamp_Optional and also sets Timestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTimestamp`](#structFRHAPI__LoginHistoryEntry_1aab41591cbf1de55ff53652c47029c17c)`(FDateTime && NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1aab41591cbf1de55ff53652c47029c17c"></a>

Sets the value of Timestamp_Optional and also sets Timestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearTimestamp`](#structFRHAPI__LoginHistoryEntry_1ac1ae1c0d66b99f9e322075e4efb67161)`()` <a id="structFRHAPI__LoginHistoryEntry_1ac1ae1c0d66b99f9e322075e4efb67161"></a>

Clears the value of Timestamp_Optional and sets Timestamp_IsSet to false.

