# group `RHAPI_LoginHistoryEntry` <a id="group__RHAPI__LoginHistoryEntry"></a>

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
`public virtual void `[`WriteJson`](#structFRHAPI__LoginHistoryEntry_1ac507adfc363bbcd9deff1b519146d135)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1abb20eb689e67b5beee838e75c468e234)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a3318f8f8aa337d7a4d3c613d91cd4a73)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a025d6c61fedb6e6dd63ad62dd3ba533f)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a445d385447ca6a4503235d98304a718c)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__LoginHistoryEntry_1a8973db2088ebc75719261f03843da039)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__LoginHistoryEntry_1abe0aad6d28c0af2873105274d405d9fb)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a95ca24756f7fdc0fa8b057460d69de70)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1af3a1458d7d8047b8bd1f4e31b9f5ed52)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a3345929131af289cdc4c409f32ab959b)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__LoginHistoryEntry_1a3325b975c9e75a4c849367ee615d4896)`() const` | Checks whether PlayerUuid_Optional has been set.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginHistoryEntry_1ab34ce3840573aa4f1f98711499f40d3b)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginHistoryEntry_1ae9bae62709e28348ed3a720fb3a4ff6b)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginHistoryEntry_1ace33124149ee1607472eb7d893ed7a19)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatform`](#structFRHAPI__LoginHistoryEntry_1aa78c5691c27e4093bb0d2293ed815eb7)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__LoginHistoryEntry_1afd8926e6acd10c8a03a1cc5a2dee7c9c)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__LoginHistoryEntry_1a66b71fdc17692d92b087c4f30f2686e3)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatform`](#structFRHAPI__LoginHistoryEntry_1a5c2d769ce088101cf64930c609c164d5)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline void `[`SetPlatform`](#structFRHAPI__LoginHistoryEntry_1a1b93661260a36a7695e765d1b1a7ba06)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__LoginHistoryEntry_1a2b3e3b21e6f59132746f2eafbf882e70)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline bool `[`IsPlatformSet`](#structFRHAPI__LoginHistoryEntry_1aeda6e6d465dc75c9967ef8bccd473cb6)`() const` | Checks whether Platform_Optional has been set.
`public inline FString & `[`GetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1adc33cbabfdce8c7da16596a9bddd2208)`()` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1a39f367b44927a5b4938bf5974e181afb)`() const` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1af5d6e2c22559bdb2be623ca35bf7ef7d)`(const FString & DefaultValue) const` | Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1a7179bfc3473f1184cc5cc908543be26c)`(FString & OutValue) const` | Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__LoginHistoryEntry_1ab53f38526796cf710d50e492f5d06f9d)`()` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__LoginHistoryEntry_1a9b3d7778260886993a7b0cd182ad07a0)`() const` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1ae931ffd066d8579566a669aaa1c693a5)`(const FString & NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1a595cad00476340f37794a3d79eb1c52c)`(FString && NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1a641ef023e6ebd24b7f3a4fa2a79fba61)`()` | Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.
`public inline bool `[`IsPlatformUserIdSet`](#structFRHAPI__LoginHistoryEntry_1ab4b9a3293e5d513f15f38d88c1cb1056)`() const` | Checks whether PlatformUserId_Optional has been set.
`public inline FGuid & `[`GetPersonId`](#structFRHAPI__LoginHistoryEntry_1a304ae34bd2fb36e66126f4a30bf0ca62)`()` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__LoginHistoryEntry_1a584ece88e170b80b9a7d9e9f39c06864)`() const` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__LoginHistoryEntry_1ae3f78ca23cad6c66780949f6c206a2e8)`(const FGuid & DefaultValue) const` | Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPersonId`](#structFRHAPI__LoginHistoryEntry_1a306c0fec5d3ebed234df35d07faa57b4)`(FGuid & OutValue) const` | Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__LoginHistoryEntry_1a7755405f53350f4539d335fd72820940)`()` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__LoginHistoryEntry_1a8bad2f927c7dcfe942c845ec4c7d758d)`() const` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPersonId`](#structFRHAPI__LoginHistoryEntry_1aed0682c88dc400ccc4806ae27291f286)`(const FGuid & NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.
`public inline void `[`SetPersonId`](#structFRHAPI__LoginHistoryEntry_1a7cf0c41f21175c7e75d051496ba3ca65)`(FGuid && NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.
`public inline void `[`ClearPersonId`](#structFRHAPI__LoginHistoryEntry_1a6975f18bf5e1e2e927c50ecd7f14bd30)`()` | Clears the value of PersonId_Optional and sets PersonId_IsSet to false.
`public inline bool `[`IsPersonIdSet`](#structFRHAPI__LoginHistoryEntry_1a95ab58bb4142d9a2eee24b091e901cea)`() const` | Checks whether PersonId_Optional has been set.
`public inline FString & `[`GetUserAgent`](#structFRHAPI__LoginHistoryEntry_1a328bb4a807fe7ce02ca6d550a30a0dcf)`()` | Gets the value of UserAgent_Optional, regardless of it having been set.
`public inline const FString & `[`GetUserAgent`](#structFRHAPI__LoginHistoryEntry_1ad96991aa1d1cc7c8387b02481d8ef850)`() const` | Gets the value of UserAgent_Optional, regardless of it having been set.
`public inline const FString & `[`GetUserAgent`](#structFRHAPI__LoginHistoryEntry_1aab2424a87f546fd4204022b891acd52b)`(const FString & DefaultValue) const` | Gets the value of UserAgent_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetUserAgent`](#structFRHAPI__LoginHistoryEntry_1a74a137c35d0c72906a857211be7d7fbd)`(FString & OutValue) const` | Fills OutValue with the value of UserAgent_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetUserAgentOrNull`](#structFRHAPI__LoginHistoryEntry_1a4b84619f12e59ab0c4baf2dbca8e3029)`()` | Returns a pointer to UserAgent_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetUserAgentOrNull`](#structFRHAPI__LoginHistoryEntry_1aede0bd0ec9f242a7fde72c23d3937e7e)`() const` | Returns a pointer to UserAgent_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetUserAgent`](#structFRHAPI__LoginHistoryEntry_1af7798b270c08ffb08f593cbc3896ddca)`(const FString & NewValue)` | Sets the value of UserAgent_Optional and also sets UserAgent_IsSet to true.
`public inline void `[`SetUserAgent`](#structFRHAPI__LoginHistoryEntry_1a4c1e4b5543a42f762d5da1cf0605cf92)`(FString && NewValue)` | Sets the value of UserAgent_Optional and also sets UserAgent_IsSet to true using move semantics.
`public inline void `[`ClearUserAgent`](#structFRHAPI__LoginHistoryEntry_1a92eab03ba65145c048768f43f33516d9)`()` | Clears the value of UserAgent_Optional and sets UserAgent_IsSet to false.
`public inline bool `[`IsUserAgentSet`](#structFRHAPI__LoginHistoryEntry_1aaff6289f20ee0a5464f9b51fd036d04d)`() const` | Checks whether UserAgent_Optional has been set.
`public inline FString & `[`GetIp`](#structFRHAPI__LoginHistoryEntry_1a423d4160832974bc24adc63d29f5390c)`()` | Gets the value of Ip_Optional, regardless of it having been set.
`public inline const FString & `[`GetIp`](#structFRHAPI__LoginHistoryEntry_1a6aa8baa5893c8237232c16c7c693fd8e)`() const` | Gets the value of Ip_Optional, regardless of it having been set.
`public inline const FString & `[`GetIp`](#structFRHAPI__LoginHistoryEntry_1a3582e61c3543561df4fa5fd4006e187b)`(const FString & DefaultValue) const` | Gets the value of Ip_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIp`](#structFRHAPI__LoginHistoryEntry_1a04d2ca6d3451dce3901e998183010751)`(FString & OutValue) const` | Fills OutValue with the value of Ip_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetIpOrNull`](#structFRHAPI__LoginHistoryEntry_1adcacf8460de7705bb51f2f9f9a508113)`()` | Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetIpOrNull`](#structFRHAPI__LoginHistoryEntry_1a17a7f64bf83699128ee808cc533a2674)`() const` | Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIp`](#structFRHAPI__LoginHistoryEntry_1ad38a1adedaf75682d690b104079caaaf)`(const FString & NewValue)` | Sets the value of Ip_Optional and also sets Ip_IsSet to true.
`public inline void `[`SetIp`](#structFRHAPI__LoginHistoryEntry_1afe0e40d32460dfc16135b5bcc51112d6)`(FString && NewValue)` | Sets the value of Ip_Optional and also sets Ip_IsSet to true using move semantics.
`public inline void `[`ClearIp`](#structFRHAPI__LoginHistoryEntry_1aeaaca996bebc29399978fc31af9c3fc3)`()` | Clears the value of Ip_Optional and sets Ip_IsSet to false.
`public inline bool `[`IsIpSet`](#structFRHAPI__LoginHistoryEntry_1aa912126752e6e16b69d6b1b8337e216a)`() const` | Checks whether Ip_Optional has been set.
`public inline FString & `[`GetClientId`](#structFRHAPI__LoginHistoryEntry_1a03e46d5dab1202b588b00817ca7ae63a)`()` | Gets the value of ClientId_Optional, regardless of it having been set.
`public inline const FString & `[`GetClientId`](#structFRHAPI__LoginHistoryEntry_1aade91ba767c00068c1b7234e91c1f63e)`() const` | Gets the value of ClientId_Optional, regardless of it having been set.
`public inline const FString & `[`GetClientId`](#structFRHAPI__LoginHistoryEntry_1a6c47ffa34cdf191cdcd56fb856df43b5)`(const FString & DefaultValue) const` | Gets the value of ClientId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetClientId`](#structFRHAPI__LoginHistoryEntry_1ad3163ba12f4de5d0894a56e2487634bc)`(FString & OutValue) const` | Fills OutValue with the value of ClientId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetClientIdOrNull`](#structFRHAPI__LoginHistoryEntry_1a2f52c5527ae6a6b14fc2f431ed30338d)`()` | Returns a pointer to ClientId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetClientIdOrNull`](#structFRHAPI__LoginHistoryEntry_1a0b69cf7befb7612e19bdd91340a2d877)`() const` | Returns a pointer to ClientId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetClientId`](#structFRHAPI__LoginHistoryEntry_1a36a8de77d4d6c43dca6ab3f783dba329)`(const FString & NewValue)` | Sets the value of ClientId_Optional and also sets ClientId_IsSet to true.
`public inline void `[`SetClientId`](#structFRHAPI__LoginHistoryEntry_1a21188c0fd51dd85aeaad35914213b190)`(FString && NewValue)` | Sets the value of ClientId_Optional and also sets ClientId_IsSet to true using move semantics.
`public inline void `[`ClearClientId`](#structFRHAPI__LoginHistoryEntry_1a98cf748e36af28794be07c7cd58d882e)`()` | Clears the value of ClientId_Optional and sets ClientId_IsSet to false.
`public inline bool `[`IsClientIdSet`](#structFRHAPI__LoginHistoryEntry_1a84cd1d6e37b11550d4c1edf8270cf2ca)`() const` | Checks whether ClientId_Optional has been set.
`public inline FDateTime & `[`GetTimestamp`](#structFRHAPI__LoginHistoryEntry_1a86b966d6232eccadbc877d0705cffaa1)`()` | Gets the value of Timestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetTimestamp`](#structFRHAPI__LoginHistoryEntry_1aed5df6b4a02dccf7781391c3fd64ef77)`() const` | Gets the value of Timestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetTimestamp`](#structFRHAPI__LoginHistoryEntry_1a1019f299add842153a54eeb9730c79e6)`(const FDateTime & DefaultValue) const` | Gets the value of Timestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTimestamp`](#structFRHAPI__LoginHistoryEntry_1abecd3dc232d00c5eb41baa7fb6b64ed9)`(FDateTime & OutValue) const` | Fills OutValue with the value of Timestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetTimestampOrNull`](#structFRHAPI__LoginHistoryEntry_1a2a5219350f087ddc8cb7f7aa84ebefa3)`()` | Returns a pointer to Timestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetTimestampOrNull`](#structFRHAPI__LoginHistoryEntry_1a390917f4546d68a754a6887a999615cd)`() const` | Returns a pointer to Timestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTimestamp`](#structFRHAPI__LoginHistoryEntry_1a304fbf6c8499af3b7db78cc67db57a0f)`(const FDateTime & NewValue)` | Sets the value of Timestamp_Optional and also sets Timestamp_IsSet to true.
`public inline void `[`SetTimestamp`](#structFRHAPI__LoginHistoryEntry_1a9a254c1929c0e0c32ffa07dd774cd5f3)`(FDateTime && NewValue)` | Sets the value of Timestamp_Optional and also sets Timestamp_IsSet to true using move semantics.
`public inline void `[`ClearTimestamp`](#structFRHAPI__LoginHistoryEntry_1ac1ae1c0d66b99f9e322075e4efb67161)`()` | Clears the value of Timestamp_Optional and sets Timestamp_IsSet to false.
`public inline bool `[`IsTimestampSet`](#structFRHAPI__LoginHistoryEntry_1ab6509042879c6c9710d2d65212ca401a)`() const` | Checks whether Timestamp_Optional has been set.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__LoginHistoryEntry_1ac507adfc363bbcd9deff1b519146d135)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__LoginHistoryEntry_1ac507adfc363bbcd9deff1b519146d135"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1abb20eb689e67b5beee838e75c468e234)`()` <a id="structFRHAPI__LoginHistoryEntry_1abb20eb689e67b5beee838e75c468e234"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a3318f8f8aa337d7a4d3c613d91cd4a73)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a3318f8f8aa337d7a4d3c613d91cd4a73"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a025d6c61fedb6e6dd63ad62dd3ba533f)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__LoginHistoryEntry_1a025d6c61fedb6e6dd63ad62dd3ba533f"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a445d385447ca6a4503235d98304a718c)`(FGuid & OutValue) const` <a id="structFRHAPI__LoginHistoryEntry_1a445d385447ca6a4503235d98304a718c"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__LoginHistoryEntry_1a8973db2088ebc75719261f03843da039)`()` <a id="structFRHAPI__LoginHistoryEntry_1a8973db2088ebc75719261f03843da039"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__LoginHistoryEntry_1abe0aad6d28c0af2873105274d405d9fb)`() const` <a id="structFRHAPI__LoginHistoryEntry_1abe0aad6d28c0af2873105274d405d9fb"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a95ca24756f7fdc0fa8b057460d69de70)`(const FGuid & NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1a95ca24756f7fdc0fa8b057460d69de70"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1af3a1458d7d8047b8bd1f4e31b9f5ed52)`(FGuid && NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1af3a1458d7d8047b8bd1f4e31b9f5ed52"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__LoginHistoryEntry_1a3345929131af289cdc4c409f32ab959b)`()` <a id="structFRHAPI__LoginHistoryEntry_1a3345929131af289cdc4c409f32ab959b"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__LoginHistoryEntry_1a3325b975c9e75a4c849367ee615d4896)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a3325b975c9e75a4c849367ee615d4896"></a>

Checks whether PlayerUuid_Optional has been set.

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginHistoryEntry_1ab34ce3840573aa4f1f98711499f40d3b)`()` <a id="structFRHAPI__LoginHistoryEntry_1ab34ce3840573aa4f1f98711499f40d3b"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginHistoryEntry_1ae9bae62709e28348ed3a720fb3a4ff6b)`() const` <a id="structFRHAPI__LoginHistoryEntry_1ae9bae62709e28348ed3a720fb3a4ff6b"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__LoginHistoryEntry_1ace33124149ee1607472eb7d893ed7a19)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__LoginHistoryEntry_1ace33124149ee1607472eb7d893ed7a19"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatform`](#structFRHAPI__LoginHistoryEntry_1aa78c5691c27e4093bb0d2293ed815eb7)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__LoginHistoryEntry_1aa78c5691c27e4093bb0d2293ed815eb7"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__LoginHistoryEntry_1afd8926e6acd10c8a03a1cc5a2dee7c9c)`()` <a id="structFRHAPI__LoginHistoryEntry_1afd8926e6acd10c8a03a1cc5a2dee7c9c"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__LoginHistoryEntry_1a66b71fdc17692d92b087c4f30f2686e3)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a66b71fdc17692d92b087c4f30f2686e3"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatform`](#structFRHAPI__LoginHistoryEntry_1a5c2d769ce088101cf64930c609c164d5)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1a5c2d769ce088101cf64930c609c164d5"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline void `[`SetPlatform`](#structFRHAPI__LoginHistoryEntry_1a1b93661260a36a7695e765d1b1a7ba06)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1a1b93661260a36a7695e765d1b1a7ba06"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__LoginHistoryEntry_1a2b3e3b21e6f59132746f2eafbf882e70)`()` <a id="structFRHAPI__LoginHistoryEntry_1a2b3e3b21e6f59132746f2eafbf882e70"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline bool `[`IsPlatformSet`](#structFRHAPI__LoginHistoryEntry_1aeda6e6d465dc75c9967ef8bccd473cb6)`() const` <a id="structFRHAPI__LoginHistoryEntry_1aeda6e6d465dc75c9967ef8bccd473cb6"></a>

Checks whether Platform_Optional has been set.

#### `public inline FString & `[`GetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1adc33cbabfdce8c7da16596a9bddd2208)`()` <a id="structFRHAPI__LoginHistoryEntry_1adc33cbabfdce8c7da16596a9bddd2208"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1a39f367b44927a5b4938bf5974e181afb)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a39f367b44927a5b4938bf5974e181afb"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1af5d6e2c22559bdb2be623ca35bf7ef7d)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginHistoryEntry_1af5d6e2c22559bdb2be623ca35bf7ef7d"></a>

Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1a7179bfc3473f1184cc5cc908543be26c)`(FString & OutValue) const` <a id="structFRHAPI__LoginHistoryEntry_1a7179bfc3473f1184cc5cc908543be26c"></a>

Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__LoginHistoryEntry_1ab53f38526796cf710d50e492f5d06f9d)`()` <a id="structFRHAPI__LoginHistoryEntry_1ab53f38526796cf710d50e492f5d06f9d"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__LoginHistoryEntry_1a9b3d7778260886993a7b0cd182ad07a0)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a9b3d7778260886993a7b0cd182ad07a0"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1ae931ffd066d8579566a669aaa1c693a5)`(const FString & NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1ae931ffd066d8579566a669aaa1c693a5"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1a595cad00476340f37794a3d79eb1c52c)`(FString && NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1a595cad00476340f37794a3d79eb1c52c"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformUserId`](#structFRHAPI__LoginHistoryEntry_1a641ef023e6ebd24b7f3a4fa2a79fba61)`()` <a id="structFRHAPI__LoginHistoryEntry_1a641ef023e6ebd24b7f3a4fa2a79fba61"></a>

Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.

#### `public inline bool `[`IsPlatformUserIdSet`](#structFRHAPI__LoginHistoryEntry_1ab4b9a3293e5d513f15f38d88c1cb1056)`() const` <a id="structFRHAPI__LoginHistoryEntry_1ab4b9a3293e5d513f15f38d88c1cb1056"></a>

Checks whether PlatformUserId_Optional has been set.

#### `public inline FGuid & `[`GetPersonId`](#structFRHAPI__LoginHistoryEntry_1a304ae34bd2fb36e66126f4a30bf0ca62)`()` <a id="structFRHAPI__LoginHistoryEntry_1a304ae34bd2fb36e66126f4a30bf0ca62"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__LoginHistoryEntry_1a584ece88e170b80b9a7d9e9f39c06864)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a584ece88e170b80b9a7d9e9f39c06864"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__LoginHistoryEntry_1ae3f78ca23cad6c66780949f6c206a2e8)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__LoginHistoryEntry_1ae3f78ca23cad6c66780949f6c206a2e8"></a>

Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPersonId`](#structFRHAPI__LoginHistoryEntry_1a306c0fec5d3ebed234df35d07faa57b4)`(FGuid & OutValue) const` <a id="structFRHAPI__LoginHistoryEntry_1a306c0fec5d3ebed234df35d07faa57b4"></a>

Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__LoginHistoryEntry_1a7755405f53350f4539d335fd72820940)`()` <a id="structFRHAPI__LoginHistoryEntry_1a7755405f53350f4539d335fd72820940"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__LoginHistoryEntry_1a8bad2f927c7dcfe942c845ec4c7d758d)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a8bad2f927c7dcfe942c845ec4c7d758d"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPersonId`](#structFRHAPI__LoginHistoryEntry_1aed0682c88dc400ccc4806ae27291f286)`(const FGuid & NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1aed0682c88dc400ccc4806ae27291f286"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.

#### `public inline void `[`SetPersonId`](#structFRHAPI__LoginHistoryEntry_1a7cf0c41f21175c7e75d051496ba3ca65)`(FGuid && NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1a7cf0c41f21175c7e75d051496ba3ca65"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.

#### `public inline void `[`ClearPersonId`](#structFRHAPI__LoginHistoryEntry_1a6975f18bf5e1e2e927c50ecd7f14bd30)`()` <a id="structFRHAPI__LoginHistoryEntry_1a6975f18bf5e1e2e927c50ecd7f14bd30"></a>

Clears the value of PersonId_Optional and sets PersonId_IsSet to false.

#### `public inline bool `[`IsPersonIdSet`](#structFRHAPI__LoginHistoryEntry_1a95ab58bb4142d9a2eee24b091e901cea)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a95ab58bb4142d9a2eee24b091e901cea"></a>

Checks whether PersonId_Optional has been set.

#### `public inline FString & `[`GetUserAgent`](#structFRHAPI__LoginHistoryEntry_1a328bb4a807fe7ce02ca6d550a30a0dcf)`()` <a id="structFRHAPI__LoginHistoryEntry_1a328bb4a807fe7ce02ca6d550a30a0dcf"></a>

Gets the value of UserAgent_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetUserAgent`](#structFRHAPI__LoginHistoryEntry_1ad96991aa1d1cc7c8387b02481d8ef850)`() const` <a id="structFRHAPI__LoginHistoryEntry_1ad96991aa1d1cc7c8387b02481d8ef850"></a>

Gets the value of UserAgent_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetUserAgent`](#structFRHAPI__LoginHistoryEntry_1aab2424a87f546fd4204022b891acd52b)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginHistoryEntry_1aab2424a87f546fd4204022b891acd52b"></a>

Gets the value of UserAgent_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetUserAgent`](#structFRHAPI__LoginHistoryEntry_1a74a137c35d0c72906a857211be7d7fbd)`(FString & OutValue) const` <a id="structFRHAPI__LoginHistoryEntry_1a74a137c35d0c72906a857211be7d7fbd"></a>

Fills OutValue with the value of UserAgent_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetUserAgentOrNull`](#structFRHAPI__LoginHistoryEntry_1a4b84619f12e59ab0c4baf2dbca8e3029)`()` <a id="structFRHAPI__LoginHistoryEntry_1a4b84619f12e59ab0c4baf2dbca8e3029"></a>

Returns a pointer to UserAgent_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetUserAgentOrNull`](#structFRHAPI__LoginHistoryEntry_1aede0bd0ec9f242a7fde72c23d3937e7e)`() const` <a id="structFRHAPI__LoginHistoryEntry_1aede0bd0ec9f242a7fde72c23d3937e7e"></a>

Returns a pointer to UserAgent_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetUserAgent`](#structFRHAPI__LoginHistoryEntry_1af7798b270c08ffb08f593cbc3896ddca)`(const FString & NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1af7798b270c08ffb08f593cbc3896ddca"></a>

Sets the value of UserAgent_Optional and also sets UserAgent_IsSet to true.

#### `public inline void `[`SetUserAgent`](#structFRHAPI__LoginHistoryEntry_1a4c1e4b5543a42f762d5da1cf0605cf92)`(FString && NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1a4c1e4b5543a42f762d5da1cf0605cf92"></a>

Sets the value of UserAgent_Optional and also sets UserAgent_IsSet to true using move semantics.

#### `public inline void `[`ClearUserAgent`](#structFRHAPI__LoginHistoryEntry_1a92eab03ba65145c048768f43f33516d9)`()` <a id="structFRHAPI__LoginHistoryEntry_1a92eab03ba65145c048768f43f33516d9"></a>

Clears the value of UserAgent_Optional and sets UserAgent_IsSet to false.

#### `public inline bool `[`IsUserAgentSet`](#structFRHAPI__LoginHistoryEntry_1aaff6289f20ee0a5464f9b51fd036d04d)`() const` <a id="structFRHAPI__LoginHistoryEntry_1aaff6289f20ee0a5464f9b51fd036d04d"></a>

Checks whether UserAgent_Optional has been set.

#### `public inline FString & `[`GetIp`](#structFRHAPI__LoginHistoryEntry_1a423d4160832974bc24adc63d29f5390c)`()` <a id="structFRHAPI__LoginHistoryEntry_1a423d4160832974bc24adc63d29f5390c"></a>

Gets the value of Ip_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetIp`](#structFRHAPI__LoginHistoryEntry_1a6aa8baa5893c8237232c16c7c693fd8e)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a6aa8baa5893c8237232c16c7c693fd8e"></a>

Gets the value of Ip_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetIp`](#structFRHAPI__LoginHistoryEntry_1a3582e61c3543561df4fa5fd4006e187b)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginHistoryEntry_1a3582e61c3543561df4fa5fd4006e187b"></a>

Gets the value of Ip_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetIp`](#structFRHAPI__LoginHistoryEntry_1a04d2ca6d3451dce3901e998183010751)`(FString & OutValue) const` <a id="structFRHAPI__LoginHistoryEntry_1a04d2ca6d3451dce3901e998183010751"></a>

Fills OutValue with the value of Ip_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetIpOrNull`](#structFRHAPI__LoginHistoryEntry_1adcacf8460de7705bb51f2f9f9a508113)`()` <a id="structFRHAPI__LoginHistoryEntry_1adcacf8460de7705bb51f2f9f9a508113"></a>

Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetIpOrNull`](#structFRHAPI__LoginHistoryEntry_1a17a7f64bf83699128ee808cc533a2674)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a17a7f64bf83699128ee808cc533a2674"></a>

Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetIp`](#structFRHAPI__LoginHistoryEntry_1ad38a1adedaf75682d690b104079caaaf)`(const FString & NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1ad38a1adedaf75682d690b104079caaaf"></a>

Sets the value of Ip_Optional and also sets Ip_IsSet to true.

#### `public inline void `[`SetIp`](#structFRHAPI__LoginHistoryEntry_1afe0e40d32460dfc16135b5bcc51112d6)`(FString && NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1afe0e40d32460dfc16135b5bcc51112d6"></a>

Sets the value of Ip_Optional and also sets Ip_IsSet to true using move semantics.

#### `public inline void `[`ClearIp`](#structFRHAPI__LoginHistoryEntry_1aeaaca996bebc29399978fc31af9c3fc3)`()` <a id="structFRHAPI__LoginHistoryEntry_1aeaaca996bebc29399978fc31af9c3fc3"></a>

Clears the value of Ip_Optional and sets Ip_IsSet to false.

#### `public inline bool `[`IsIpSet`](#structFRHAPI__LoginHistoryEntry_1aa912126752e6e16b69d6b1b8337e216a)`() const` <a id="structFRHAPI__LoginHistoryEntry_1aa912126752e6e16b69d6b1b8337e216a"></a>

Checks whether Ip_Optional has been set.

#### `public inline FString & `[`GetClientId`](#structFRHAPI__LoginHistoryEntry_1a03e46d5dab1202b588b00817ca7ae63a)`()` <a id="structFRHAPI__LoginHistoryEntry_1a03e46d5dab1202b588b00817ca7ae63a"></a>

Gets the value of ClientId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetClientId`](#structFRHAPI__LoginHistoryEntry_1aade91ba767c00068c1b7234e91c1f63e)`() const` <a id="structFRHAPI__LoginHistoryEntry_1aade91ba767c00068c1b7234e91c1f63e"></a>

Gets the value of ClientId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetClientId`](#structFRHAPI__LoginHistoryEntry_1a6c47ffa34cdf191cdcd56fb856df43b5)`(const FString & DefaultValue) const` <a id="structFRHAPI__LoginHistoryEntry_1a6c47ffa34cdf191cdcd56fb856df43b5"></a>

Gets the value of ClientId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetClientId`](#structFRHAPI__LoginHistoryEntry_1ad3163ba12f4de5d0894a56e2487634bc)`(FString & OutValue) const` <a id="structFRHAPI__LoginHistoryEntry_1ad3163ba12f4de5d0894a56e2487634bc"></a>

Fills OutValue with the value of ClientId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetClientIdOrNull`](#structFRHAPI__LoginHistoryEntry_1a2f52c5527ae6a6b14fc2f431ed30338d)`()` <a id="structFRHAPI__LoginHistoryEntry_1a2f52c5527ae6a6b14fc2f431ed30338d"></a>

Returns a pointer to ClientId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetClientIdOrNull`](#structFRHAPI__LoginHistoryEntry_1a0b69cf7befb7612e19bdd91340a2d877)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a0b69cf7befb7612e19bdd91340a2d877"></a>

Returns a pointer to ClientId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetClientId`](#structFRHAPI__LoginHistoryEntry_1a36a8de77d4d6c43dca6ab3f783dba329)`(const FString & NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1a36a8de77d4d6c43dca6ab3f783dba329"></a>

Sets the value of ClientId_Optional and also sets ClientId_IsSet to true.

#### `public inline void `[`SetClientId`](#structFRHAPI__LoginHistoryEntry_1a21188c0fd51dd85aeaad35914213b190)`(FString && NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1a21188c0fd51dd85aeaad35914213b190"></a>

Sets the value of ClientId_Optional and also sets ClientId_IsSet to true using move semantics.

#### `public inline void `[`ClearClientId`](#structFRHAPI__LoginHistoryEntry_1a98cf748e36af28794be07c7cd58d882e)`()` <a id="structFRHAPI__LoginHistoryEntry_1a98cf748e36af28794be07c7cd58d882e"></a>

Clears the value of ClientId_Optional and sets ClientId_IsSet to false.

#### `public inline bool `[`IsClientIdSet`](#structFRHAPI__LoginHistoryEntry_1a84cd1d6e37b11550d4c1edf8270cf2ca)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a84cd1d6e37b11550d4c1edf8270cf2ca"></a>

Checks whether ClientId_Optional has been set.

#### `public inline FDateTime & `[`GetTimestamp`](#structFRHAPI__LoginHistoryEntry_1a86b966d6232eccadbc877d0705cffaa1)`()` <a id="structFRHAPI__LoginHistoryEntry_1a86b966d6232eccadbc877d0705cffaa1"></a>

Gets the value of Timestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetTimestamp`](#structFRHAPI__LoginHistoryEntry_1aed5df6b4a02dccf7781391c3fd64ef77)`() const` <a id="structFRHAPI__LoginHistoryEntry_1aed5df6b4a02dccf7781391c3fd64ef77"></a>

Gets the value of Timestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetTimestamp`](#structFRHAPI__LoginHistoryEntry_1a1019f299add842153a54eeb9730c79e6)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__LoginHistoryEntry_1a1019f299add842153a54eeb9730c79e6"></a>

Gets the value of Timestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTimestamp`](#structFRHAPI__LoginHistoryEntry_1abecd3dc232d00c5eb41baa7fb6b64ed9)`(FDateTime & OutValue) const` <a id="structFRHAPI__LoginHistoryEntry_1abecd3dc232d00c5eb41baa7fb6b64ed9"></a>

Fills OutValue with the value of Timestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetTimestampOrNull`](#structFRHAPI__LoginHistoryEntry_1a2a5219350f087ddc8cb7f7aa84ebefa3)`()` <a id="structFRHAPI__LoginHistoryEntry_1a2a5219350f087ddc8cb7f7aa84ebefa3"></a>

Returns a pointer to Timestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetTimestampOrNull`](#structFRHAPI__LoginHistoryEntry_1a390917f4546d68a754a6887a999615cd)`() const` <a id="structFRHAPI__LoginHistoryEntry_1a390917f4546d68a754a6887a999615cd"></a>

Returns a pointer to Timestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTimestamp`](#structFRHAPI__LoginHistoryEntry_1a304fbf6c8499af3b7db78cc67db57a0f)`(const FDateTime & NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1a304fbf6c8499af3b7db78cc67db57a0f"></a>

Sets the value of Timestamp_Optional and also sets Timestamp_IsSet to true.

#### `public inline void `[`SetTimestamp`](#structFRHAPI__LoginHistoryEntry_1a9a254c1929c0e0c32ffa07dd774cd5f3)`(FDateTime && NewValue)` <a id="structFRHAPI__LoginHistoryEntry_1a9a254c1929c0e0c32ffa07dd774cd5f3"></a>

Sets the value of Timestamp_Optional and also sets Timestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearTimestamp`](#structFRHAPI__LoginHistoryEntry_1ac1ae1c0d66b99f9e322075e4efb67161)`()` <a id="structFRHAPI__LoginHistoryEntry_1ac1ae1c0d66b99f9e322075e4efb67161"></a>

Clears the value of Timestamp_Optional and sets Timestamp_IsSet to false.

#### `public inline bool `[`IsTimestampSet`](#structFRHAPI__LoginHistoryEntry_1ab6509042879c6c9710d2d65212ca401a)`() const` <a id="structFRHAPI__LoginHistoryEntry_1ab6509042879c6c9710d2d65212ca401a"></a>

Checks whether Timestamp_Optional has been set.

