---
title: RHAPI_SupportLogEntry
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SupportLogEntry`](#structFRHAPI__SupportLogEntry) | Support log entry details.

## struct `FRHAPI_SupportLogEntry` <a id="structFRHAPI__SupportLogEntry"></a>

```
struct FRHAPI_SupportLogEntry
  : public FRHAPI_Model
```

Support log entry details.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`SupportActionLogId`](#structFRHAPI__SupportLogEntry_1a3fbe98568c28d2981aaec6d57b4ab5e9) | Unique ID of the support action log entry.
`public FGuid `[`PersonId_Optional`](#structFRHAPI__SupportLogEntry_1a5d0ecee7dfbf5c7b24c2a211abfd528c) | Person ID the log entry is for.
`public bool `[`PersonId_IsSet`](#structFRHAPI__SupportLogEntry_1adc23cd03da87c45765228159e6213e4f) | true if PersonId_Optional has been set to a value
`public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__SupportLogEntry_1a106e2b6fa7e94b5bc601ee4226ed8be9) | Player ID the log entry is for (legacy)
`public bool `[`PlayerUuid_IsSet`](#structFRHAPI__SupportLogEntry_1ac84cfa61c586035a54fd9fb2e13a7de5) | true if PlayerUuid_Optional has been set to a value
`public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__SupportLogEntry_1ac9e6942fd452e2f01d07c15a145465f7) | Portal ID (legacy)
`public bool `[`Platform_IsSet`](#structFRHAPI__SupportLogEntry_1a8603a94bdd56aca5ac90656ada2168c0) | true if Platform_Optional has been set to a value
`public FString `[`PlatformUserId_Optional`](#structFRHAPI__SupportLogEntry_1af79df696a3b07d0dba61c24551f96f8e) | Portal user ID (legacy)
`public bool `[`PlatformUserId_IsSet`](#structFRHAPI__SupportLogEntry_1a1a6386724c30cd53a8616d68f42d7437) | true if PlatformUserId_Optional has been set to a value
`public FString `[`EventName`](#structFRHAPI__SupportLogEntry_1a05993c932d3f029a4b4200d36872ebf0) | Name of the support event.
`public FString `[`EventDescription`](#structFRHAPI__SupportLogEntry_1afd30ed3e42124bf40bca199819d29d38) | Detailed description of the support action.
`public FString `[`Ip_Optional`](#structFRHAPI__SupportLogEntry_1a142706605a0c1007b3060e5271d05676) | IP address where the action was performed.
`public bool `[`Ip_IsSet`](#structFRHAPI__SupportLogEntry_1a6bdeab329c57606c115f717a6a09f702) | true if Ip_Optional has been set to a value
`public FString `[`SupportUsername_Optional`](#structFRHAPI__SupportLogEntry_1ada60751a76c24c1340e010ab047e3036) | Username of the support agent.
`public bool `[`SupportUsername_IsSet`](#structFRHAPI__SupportLogEntry_1a34ae7fe3df47d8c3a77439c2018ba731) | true if SupportUsername_Optional has been set to a value
`public FDateTime `[`Created`](#structFRHAPI__SupportLogEntry_1a2cfd9785470365a98b2060569901099b) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public virtual bool `[`FromJson`](#structFRHAPI__SupportLogEntry_1abcaba3800c0b3aa54a2bcf75f784e818)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SupportLogEntry_1a9ce3d925ec0b01400056412f00424a23)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetSupportActionLogId`](#structFRHAPI__SupportLogEntry_1aecef3f258c05510f091fd5db0ee94108)`()` | Gets the value of SupportActionLogId.
`public inline const FString & `[`GetSupportActionLogId`](#structFRHAPI__SupportLogEntry_1ad15a591e93a43f2eb08ef7c509f62b21)`() const` | Gets the value of SupportActionLogId.
`public inline void `[`SetSupportActionLogId`](#structFRHAPI__SupportLogEntry_1abcc17d889d7fc97e3f338be07d4364cf)`(const FString & NewValue)` | Sets the value of SupportActionLogId.
`public inline void `[`SetSupportActionLogId`](#structFRHAPI__SupportLogEntry_1a808dd37f0a08498cddae49270871f090)`(FString && NewValue)` | Sets the value of SupportActionLogId using move semantics.
`public inline FGuid & `[`GetPersonId`](#structFRHAPI__SupportLogEntry_1a920fb335e430c451cb167d9c2cd2894b)`()` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__SupportLogEntry_1a89b843c0bcbf007b30ba40928675935b)`() const` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__SupportLogEntry_1ad67ac1f6fe590fd4d0158d3d5e61894a)`(const FGuid & DefaultValue) const` | Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPersonId`](#structFRHAPI__SupportLogEntry_1a23f5da2ce79c171bc803d6e7f7888a0b)`(FGuid & OutValue) const` | Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__SupportLogEntry_1abbd62d18dfbb5728639214b5a3e69d67)`()` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__SupportLogEntry_1abd100e2c69d6da5966d2ac0a8c896626)`() const` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPersonId`](#structFRHAPI__SupportLogEntry_1a33c5b450cfcd6ca89d6a7e7b60ce85c7)`(const FGuid & NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.
`public inline void `[`SetPersonId`](#structFRHAPI__SupportLogEntry_1afc3aa47cb2cb62b30fd02d4ff82abb72)`(FGuid && NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.
`public inline void `[`ClearPersonId`](#structFRHAPI__SupportLogEntry_1a78e155ebe2b6c2407bfad41c5216f1c4)`()` | Clears the value of PersonId_Optional and sets PersonId_IsSet to false.
`public inline bool `[`IsPersonIdSet`](#structFRHAPI__SupportLogEntry_1abf02abd7dd975848c8849109d2cafb5f)`() const` | Checks whether PersonId_Optional has been set.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__SupportLogEntry_1a4880b5afde5aab64f3ec7b01d719bdc8)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SupportLogEntry_1afd2eadc4409a229354105c8efc85bfed)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SupportLogEntry_1a06b65e53e2d8aba71dda7ec4695c265e)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuid`](#structFRHAPI__SupportLogEntry_1ac35a291f56824859f5381b657b6002cc)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__SupportLogEntry_1a1cc5c704e47f38d99be6883897ab0d92)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__SupportLogEntry_1a64e7782a32de773b5a16864e75294b5a)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__SupportLogEntry_1a7331a5573f5114314c396e0bef8f4d4c)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__SupportLogEntry_1ac605bf68c71c21a7368c41344e23cc9a)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__SupportLogEntry_1aaa0f4053264bc927df9dd561e4e06cb8)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__SupportLogEntry_1a571493d90c59509c783a131a81143aa7)`() const` | Checks whether PlayerUuid_Optional has been set.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__SupportLogEntry_1af1e6f9e1436b8c55b70e2f5f793f361a)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__SupportLogEntry_1a468f2873db5b6c9fc5dd9c10d8859593)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__SupportLogEntry_1a1e03afdf4cbdefa099736eff9aa81526)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatform`](#structFRHAPI__SupportLogEntry_1a503ad3a6549e3aafab874f2b0db97e5d)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__SupportLogEntry_1a1b1f258bc6dd3f48cb2962d369641342)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__SupportLogEntry_1acde03f27e33950f6f30004f0140a0c57)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatform`](#structFRHAPI__SupportLogEntry_1a34af158d27c3f8a7b3adbb2a70c193a3)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline void `[`SetPlatform`](#structFRHAPI__SupportLogEntry_1a8296ea5ba5b282bc108c205a4c672803)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__SupportLogEntry_1add0b80aae70960f66b25ec0f6f6aaa7e)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline bool `[`IsPlatformSet`](#structFRHAPI__SupportLogEntry_1a621601315f0c52ad7cf80925a9c43cb7)`() const` | Checks whether Platform_Optional has been set.
`public inline FString & `[`GetPlatformUserId`](#structFRHAPI__SupportLogEntry_1a0be34123681e91605cc093a377e8c054)`()` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__SupportLogEntry_1aec3965e31172548630727cb5d59f4be9)`() const` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__SupportLogEntry_1ac0b5c60c6f8a31c44f5962efef1650c5)`(const FString & DefaultValue) const` | Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformUserId`](#structFRHAPI__SupportLogEntry_1a5ceabd1e700a45754ebcc37139b9a06c)`(FString & OutValue) const` | Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__SupportLogEntry_1a78bb08c182204e00fa4e62b81877e109)`()` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__SupportLogEntry_1a4b7f78c506839dc2f40e3bdd1f6fd5e7)`() const` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__SupportLogEntry_1ad4db4e775f81c86bb7f774ad71e7f024)`(const FString & NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__SupportLogEntry_1a4f9c2fd7cb6bfc6672569025d53a0db8)`(FString && NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformUserId`](#structFRHAPI__SupportLogEntry_1abb31ffc71926874ad89aee17898599c6)`()` | Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.
`public inline bool `[`IsPlatformUserIdSet`](#structFRHAPI__SupportLogEntry_1a1c62833f0350dd8be6e6553c417dfd7f)`() const` | Checks whether PlatformUserId_Optional has been set.
`public inline FString & `[`GetEventName`](#structFRHAPI__SupportLogEntry_1a521643b91c069a750aef3033097cb1cd)`()` | Gets the value of EventName.
`public inline const FString & `[`GetEventName`](#structFRHAPI__SupportLogEntry_1a1b8a10f2e19ae237de1da4ae79e1823e)`() const` | Gets the value of EventName.
`public inline void `[`SetEventName`](#structFRHAPI__SupportLogEntry_1ad48a882809b68c946ad2043ae320ece0)`(const FString & NewValue)` | Sets the value of EventName.
`public inline void `[`SetEventName`](#structFRHAPI__SupportLogEntry_1a5d6dde905728d4c8483b9b7066220d1f)`(FString && NewValue)` | Sets the value of EventName using move semantics.
`public inline FString & `[`GetEventDescription`](#structFRHAPI__SupportLogEntry_1a1d7281ec4e4d1473d6217c9e205f94bd)`()` | Gets the value of EventDescription.
`public inline const FString & `[`GetEventDescription`](#structFRHAPI__SupportLogEntry_1ac7580b09631c16bca8b70bc729689078)`() const` | Gets the value of EventDescription.
`public inline void `[`SetEventDescription`](#structFRHAPI__SupportLogEntry_1afd9b287ed7e47f0e11e016bfdb07ecd3)`(const FString & NewValue)` | Sets the value of EventDescription.
`public inline void `[`SetEventDescription`](#structFRHAPI__SupportLogEntry_1a371f671ba35c1e69e13ef88fdbc6e57e)`(FString && NewValue)` | Sets the value of EventDescription using move semantics.
`public inline FString & `[`GetIp`](#structFRHAPI__SupportLogEntry_1a890dda05f37bc9f98e2eb7211644453b)`()` | Gets the value of Ip_Optional, regardless of it having been set.
`public inline const FString & `[`GetIp`](#structFRHAPI__SupportLogEntry_1a85afd3ec48a4a768b34ca3fa2a251096)`() const` | Gets the value of Ip_Optional, regardless of it having been set.
`public inline const FString & `[`GetIp`](#structFRHAPI__SupportLogEntry_1af02b1a968191f66e7be39efc7a30b873)`(const FString & DefaultValue) const` | Gets the value of Ip_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIp`](#structFRHAPI__SupportLogEntry_1a56675fe0da8e7c723d16c77f40260c03)`(FString & OutValue) const` | Fills OutValue with the value of Ip_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetIpOrNull`](#structFRHAPI__SupportLogEntry_1a4e0a5567517a5a143ddebdf6d773584b)`()` | Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetIpOrNull`](#structFRHAPI__SupportLogEntry_1abd54683c14f2c7e6d6efaa3a0f6d631c)`() const` | Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIp`](#structFRHAPI__SupportLogEntry_1afc09b25b4b1b2de609e75d408f1ffbe2)`(const FString & NewValue)` | Sets the value of Ip_Optional and also sets Ip_IsSet to true.
`public inline void `[`SetIp`](#structFRHAPI__SupportLogEntry_1a86184c37eaec51541ec35a4a2b05c2d2)`(FString && NewValue)` | Sets the value of Ip_Optional and also sets Ip_IsSet to true using move semantics.
`public inline void `[`ClearIp`](#structFRHAPI__SupportLogEntry_1af70ef8a6920465af1cff423083aafef5)`()` | Clears the value of Ip_Optional and sets Ip_IsSet to false.
`public inline bool `[`IsIpSet`](#structFRHAPI__SupportLogEntry_1ac337adcb69e5946cf3be06edb08306c6)`() const` | Checks whether Ip_Optional has been set.
`public inline FString & `[`GetSupportUsername`](#structFRHAPI__SupportLogEntry_1a5911dc7ea4d7e48f4048b9c0bad08427)`()` | Gets the value of SupportUsername_Optional, regardless of it having been set.
`public inline const FString & `[`GetSupportUsername`](#structFRHAPI__SupportLogEntry_1ad31f69a6c0b5bd1967e14546dc919f10)`() const` | Gets the value of SupportUsername_Optional, regardless of it having been set.
`public inline const FString & `[`GetSupportUsername`](#structFRHAPI__SupportLogEntry_1af1d07eea1317b143b269bece41da958b)`(const FString & DefaultValue) const` | Gets the value of SupportUsername_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSupportUsername`](#structFRHAPI__SupportLogEntry_1a825ecd1ca21d73f9e8a3f692c0b1c45c)`(FString & OutValue) const` | Fills OutValue with the value of SupportUsername_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetSupportUsernameOrNull`](#structFRHAPI__SupportLogEntry_1af2fc58a6aa31d40e5ee5312e38017b5f)`()` | Returns a pointer to SupportUsername_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetSupportUsernameOrNull`](#structFRHAPI__SupportLogEntry_1a32ff29bafe647ac450ef0dd38e46a42a)`() const` | Returns a pointer to SupportUsername_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSupportUsername`](#structFRHAPI__SupportLogEntry_1a5adeb3f9d8b530607aa4cc366a8cc079)`(const FString & NewValue)` | Sets the value of SupportUsername_Optional and also sets SupportUsername_IsSet to true.
`public inline void `[`SetSupportUsername`](#structFRHAPI__SupportLogEntry_1aa49040983df33dfcf89595393fabc641)`(FString && NewValue)` | Sets the value of SupportUsername_Optional and also sets SupportUsername_IsSet to true using move semantics.
`public inline void `[`ClearSupportUsername`](#structFRHAPI__SupportLogEntry_1a8abb6a809eed01c61ada12c3ac87029c)`()` | Clears the value of SupportUsername_Optional and sets SupportUsername_IsSet to false.
`public inline bool `[`IsSupportUsernameSet`](#structFRHAPI__SupportLogEntry_1a145bd532b4a4dd0f7bb8a9913482aaec)`() const` | Checks whether SupportUsername_Optional has been set.
`public inline FDateTime & `[`GetCreated`](#structFRHAPI__SupportLogEntry_1aeb270b698a3e32761e97c09f302eaf9b)`()` | Gets the value of Created.
`public inline const FDateTime & `[`GetCreated`](#structFRHAPI__SupportLogEntry_1ad01f8b36219822cbaf9665b344b4eb64)`() const` | Gets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__SupportLogEntry_1ac719095125c820384d49a4490b151fbf)`(const FDateTime & NewValue)` | Sets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__SupportLogEntry_1a1c74dfd4d5eab0b4bf39139f2a8bfe91)`(FDateTime && NewValue)` | Sets the value of Created using move semantics.

### Members

#### `public FString `[`SupportActionLogId`](#structFRHAPI__SupportLogEntry_1a3fbe98568c28d2981aaec6d57b4ab5e9) <a id="structFRHAPI__SupportLogEntry_1a3fbe98568c28d2981aaec6d57b4ab5e9"></a>

Unique ID of the support action log entry.

#### `public FGuid `[`PersonId_Optional`](#structFRHAPI__SupportLogEntry_1a5d0ecee7dfbf5c7b24c2a211abfd528c) <a id="structFRHAPI__SupportLogEntry_1a5d0ecee7dfbf5c7b24c2a211abfd528c"></a>

Person ID the log entry is for.

#### `public bool `[`PersonId_IsSet`](#structFRHAPI__SupportLogEntry_1adc23cd03da87c45765228159e6213e4f) <a id="structFRHAPI__SupportLogEntry_1adc23cd03da87c45765228159e6213e4f"></a>

true if PersonId_Optional has been set to a value

#### `public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__SupportLogEntry_1a106e2b6fa7e94b5bc601ee4226ed8be9) <a id="structFRHAPI__SupportLogEntry_1a106e2b6fa7e94b5bc601ee4226ed8be9"></a>

Player ID the log entry is for (legacy)

#### `public bool `[`PlayerUuid_IsSet`](#structFRHAPI__SupportLogEntry_1ac84cfa61c586035a54fd9fb2e13a7de5) <a id="structFRHAPI__SupportLogEntry_1ac84cfa61c586035a54fd9fb2e13a7de5"></a>

true if PlayerUuid_Optional has been set to a value

#### `public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__SupportLogEntry_1ac9e6942fd452e2f01d07c15a145465f7) <a id="structFRHAPI__SupportLogEntry_1ac9e6942fd452e2f01d07c15a145465f7"></a>

Portal ID (legacy)

#### `public bool `[`Platform_IsSet`](#structFRHAPI__SupportLogEntry_1a8603a94bdd56aca5ac90656ada2168c0) <a id="structFRHAPI__SupportLogEntry_1a8603a94bdd56aca5ac90656ada2168c0"></a>

true if Platform_Optional has been set to a value

#### `public FString `[`PlatformUserId_Optional`](#structFRHAPI__SupportLogEntry_1af79df696a3b07d0dba61c24551f96f8e) <a id="structFRHAPI__SupportLogEntry_1af79df696a3b07d0dba61c24551f96f8e"></a>

Portal user ID (legacy)

#### `public bool `[`PlatformUserId_IsSet`](#structFRHAPI__SupportLogEntry_1a1a6386724c30cd53a8616d68f42d7437) <a id="structFRHAPI__SupportLogEntry_1a1a6386724c30cd53a8616d68f42d7437"></a>

true if PlatformUserId_Optional has been set to a value

#### `public FString `[`EventName`](#structFRHAPI__SupportLogEntry_1a05993c932d3f029a4b4200d36872ebf0) <a id="structFRHAPI__SupportLogEntry_1a05993c932d3f029a4b4200d36872ebf0"></a>

Name of the support event.

#### `public FString `[`EventDescription`](#structFRHAPI__SupportLogEntry_1afd30ed3e42124bf40bca199819d29d38) <a id="structFRHAPI__SupportLogEntry_1afd30ed3e42124bf40bca199819d29d38"></a>

Detailed description of the support action.

#### `public FString `[`Ip_Optional`](#structFRHAPI__SupportLogEntry_1a142706605a0c1007b3060e5271d05676) <a id="structFRHAPI__SupportLogEntry_1a142706605a0c1007b3060e5271d05676"></a>

IP address where the action was performed.

#### `public bool `[`Ip_IsSet`](#structFRHAPI__SupportLogEntry_1a6bdeab329c57606c115f717a6a09f702) <a id="structFRHAPI__SupportLogEntry_1a6bdeab329c57606c115f717a6a09f702"></a>

true if Ip_Optional has been set to a value

#### `public FString `[`SupportUsername_Optional`](#structFRHAPI__SupportLogEntry_1ada60751a76c24c1340e010ab047e3036) <a id="structFRHAPI__SupportLogEntry_1ada60751a76c24c1340e010ab047e3036"></a>

Username of the support agent.

#### `public bool `[`SupportUsername_IsSet`](#structFRHAPI__SupportLogEntry_1a34ae7fe3df47d8c3a77439c2018ba731) <a id="structFRHAPI__SupportLogEntry_1a34ae7fe3df47d8c3a77439c2018ba731"></a>

true if SupportUsername_Optional has been set to a value

#### `public FDateTime `[`Created`](#structFRHAPI__SupportLogEntry_1a2cfd9785470365a98b2060569901099b) <a id="structFRHAPI__SupportLogEntry_1a2cfd9785470365a98b2060569901099b"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public virtual bool `[`FromJson`](#structFRHAPI__SupportLogEntry_1abcaba3800c0b3aa54a2bcf75f784e818)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SupportLogEntry_1abcaba3800c0b3aa54a2bcf75f784e818"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SupportLogEntry_1a9ce3d925ec0b01400056412f00424a23)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SupportLogEntry_1a9ce3d925ec0b01400056412f00424a23"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetSupportActionLogId`](#structFRHAPI__SupportLogEntry_1aecef3f258c05510f091fd5db0ee94108)`()` <a id="structFRHAPI__SupportLogEntry_1aecef3f258c05510f091fd5db0ee94108"></a>

Gets the value of SupportActionLogId.

#### `public inline const FString & `[`GetSupportActionLogId`](#structFRHAPI__SupportLogEntry_1ad15a591e93a43f2eb08ef7c509f62b21)`() const` <a id="structFRHAPI__SupportLogEntry_1ad15a591e93a43f2eb08ef7c509f62b21"></a>

Gets the value of SupportActionLogId.

#### `public inline void `[`SetSupportActionLogId`](#structFRHAPI__SupportLogEntry_1abcc17d889d7fc97e3f338be07d4364cf)`(const FString & NewValue)` <a id="structFRHAPI__SupportLogEntry_1abcc17d889d7fc97e3f338be07d4364cf"></a>

Sets the value of SupportActionLogId.

#### `public inline void `[`SetSupportActionLogId`](#structFRHAPI__SupportLogEntry_1a808dd37f0a08498cddae49270871f090)`(FString && NewValue)` <a id="structFRHAPI__SupportLogEntry_1a808dd37f0a08498cddae49270871f090"></a>

Sets the value of SupportActionLogId using move semantics.

#### `public inline FGuid & `[`GetPersonId`](#structFRHAPI__SupportLogEntry_1a920fb335e430c451cb167d9c2cd2894b)`()` <a id="structFRHAPI__SupportLogEntry_1a920fb335e430c451cb167d9c2cd2894b"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__SupportLogEntry_1a89b843c0bcbf007b30ba40928675935b)`() const` <a id="structFRHAPI__SupportLogEntry_1a89b843c0bcbf007b30ba40928675935b"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__SupportLogEntry_1ad67ac1f6fe590fd4d0158d3d5e61894a)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__SupportLogEntry_1ad67ac1f6fe590fd4d0158d3d5e61894a"></a>

Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPersonId`](#structFRHAPI__SupportLogEntry_1a23f5da2ce79c171bc803d6e7f7888a0b)`(FGuid & OutValue) const` <a id="structFRHAPI__SupportLogEntry_1a23f5da2ce79c171bc803d6e7f7888a0b"></a>

Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__SupportLogEntry_1abbd62d18dfbb5728639214b5a3e69d67)`()` <a id="structFRHAPI__SupportLogEntry_1abbd62d18dfbb5728639214b5a3e69d67"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__SupportLogEntry_1abd100e2c69d6da5966d2ac0a8c896626)`() const` <a id="structFRHAPI__SupportLogEntry_1abd100e2c69d6da5966d2ac0a8c896626"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPersonId`](#structFRHAPI__SupportLogEntry_1a33c5b450cfcd6ca89d6a7e7b60ce85c7)`(const FGuid & NewValue)` <a id="structFRHAPI__SupportLogEntry_1a33c5b450cfcd6ca89d6a7e7b60ce85c7"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.

#### `public inline void `[`SetPersonId`](#structFRHAPI__SupportLogEntry_1afc3aa47cb2cb62b30fd02d4ff82abb72)`(FGuid && NewValue)` <a id="structFRHAPI__SupportLogEntry_1afc3aa47cb2cb62b30fd02d4ff82abb72"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.

#### `public inline void `[`ClearPersonId`](#structFRHAPI__SupportLogEntry_1a78e155ebe2b6c2407bfad41c5216f1c4)`()` <a id="structFRHAPI__SupportLogEntry_1a78e155ebe2b6c2407bfad41c5216f1c4"></a>

Clears the value of PersonId_Optional and sets PersonId_IsSet to false.

#### `public inline bool `[`IsPersonIdSet`](#structFRHAPI__SupportLogEntry_1abf02abd7dd975848c8849109d2cafb5f)`() const` <a id="structFRHAPI__SupportLogEntry_1abf02abd7dd975848c8849109d2cafb5f"></a>

Checks whether PersonId_Optional has been set.

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__SupportLogEntry_1a4880b5afde5aab64f3ec7b01d719bdc8)`()` <a id="structFRHAPI__SupportLogEntry_1a4880b5afde5aab64f3ec7b01d719bdc8"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SupportLogEntry_1afd2eadc4409a229354105c8efc85bfed)`() const` <a id="structFRHAPI__SupportLogEntry_1afd2eadc4409a229354105c8efc85bfed"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SupportLogEntry_1a06b65e53e2d8aba71dda7ec4695c265e)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__SupportLogEntry_1a06b65e53e2d8aba71dda7ec4695c265e"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerUuid`](#structFRHAPI__SupportLogEntry_1ac35a291f56824859f5381b657b6002cc)`(FGuid & OutValue) const` <a id="structFRHAPI__SupportLogEntry_1ac35a291f56824859f5381b657b6002cc"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__SupportLogEntry_1a1cc5c704e47f38d99be6883897ab0d92)`()` <a id="structFRHAPI__SupportLogEntry_1a1cc5c704e47f38d99be6883897ab0d92"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__SupportLogEntry_1a64e7782a32de773b5a16864e75294b5a)`() const` <a id="structFRHAPI__SupportLogEntry_1a64e7782a32de773b5a16864e75294b5a"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__SupportLogEntry_1a7331a5573f5114314c396e0bef8f4d4c)`(const FGuid & NewValue)` <a id="structFRHAPI__SupportLogEntry_1a7331a5573f5114314c396e0bef8f4d4c"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__SupportLogEntry_1ac605bf68c71c21a7368c41344e23cc9a)`(FGuid && NewValue)` <a id="structFRHAPI__SupportLogEntry_1ac605bf68c71c21a7368c41344e23cc9a"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__SupportLogEntry_1aaa0f4053264bc927df9dd561e4e06cb8)`()` <a id="structFRHAPI__SupportLogEntry_1aaa0f4053264bc927df9dd561e4e06cb8"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__SupportLogEntry_1a571493d90c59509c783a131a81143aa7)`() const` <a id="structFRHAPI__SupportLogEntry_1a571493d90c59509c783a131a81143aa7"></a>

Checks whether PlayerUuid_Optional has been set.

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__SupportLogEntry_1af1e6f9e1436b8c55b70e2f5f793f361a)`()` <a id="structFRHAPI__SupportLogEntry_1af1e6f9e1436b8c55b70e2f5f793f361a"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__SupportLogEntry_1a468f2873db5b6c9fc5dd9c10d8859593)`() const` <a id="structFRHAPI__SupportLogEntry_1a468f2873db5b6c9fc5dd9c10d8859593"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__SupportLogEntry_1a1e03afdf4cbdefa099736eff9aa81526)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__SupportLogEntry_1a1e03afdf4cbdefa099736eff9aa81526"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatform`](#structFRHAPI__SupportLogEntry_1a503ad3a6549e3aafab874f2b0db97e5d)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__SupportLogEntry_1a503ad3a6549e3aafab874f2b0db97e5d"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__SupportLogEntry_1a1b1f258bc6dd3f48cb2962d369641342)`()` <a id="structFRHAPI__SupportLogEntry_1a1b1f258bc6dd3f48cb2962d369641342"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__SupportLogEntry_1acde03f27e33950f6f30004f0140a0c57)`() const` <a id="structFRHAPI__SupportLogEntry_1acde03f27e33950f6f30004f0140a0c57"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatform`](#structFRHAPI__SupportLogEntry_1a34af158d27c3f8a7b3adbb2a70c193a3)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__SupportLogEntry_1a34af158d27c3f8a7b3adbb2a70c193a3"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline void `[`SetPlatform`](#structFRHAPI__SupportLogEntry_1a8296ea5ba5b282bc108c205a4c672803)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__SupportLogEntry_1a8296ea5ba5b282bc108c205a4c672803"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__SupportLogEntry_1add0b80aae70960f66b25ec0f6f6aaa7e)`()` <a id="structFRHAPI__SupportLogEntry_1add0b80aae70960f66b25ec0f6f6aaa7e"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline bool `[`IsPlatformSet`](#structFRHAPI__SupportLogEntry_1a621601315f0c52ad7cf80925a9c43cb7)`() const` <a id="structFRHAPI__SupportLogEntry_1a621601315f0c52ad7cf80925a9c43cb7"></a>

Checks whether Platform_Optional has been set.

#### `public inline FString & `[`GetPlatformUserId`](#structFRHAPI__SupportLogEntry_1a0be34123681e91605cc093a377e8c054)`()` <a id="structFRHAPI__SupportLogEntry_1a0be34123681e91605cc093a377e8c054"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__SupportLogEntry_1aec3965e31172548630727cb5d59f4be9)`() const` <a id="structFRHAPI__SupportLogEntry_1aec3965e31172548630727cb5d59f4be9"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__SupportLogEntry_1ac0b5c60c6f8a31c44f5962efef1650c5)`(const FString & DefaultValue) const` <a id="structFRHAPI__SupportLogEntry_1ac0b5c60c6f8a31c44f5962efef1650c5"></a>

Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformUserId`](#structFRHAPI__SupportLogEntry_1a5ceabd1e700a45754ebcc37139b9a06c)`(FString & OutValue) const` <a id="structFRHAPI__SupportLogEntry_1a5ceabd1e700a45754ebcc37139b9a06c"></a>

Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__SupportLogEntry_1a78bb08c182204e00fa4e62b81877e109)`()` <a id="structFRHAPI__SupportLogEntry_1a78bb08c182204e00fa4e62b81877e109"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__SupportLogEntry_1a4b7f78c506839dc2f40e3bdd1f6fd5e7)`() const` <a id="structFRHAPI__SupportLogEntry_1a4b7f78c506839dc2f40e3bdd1f6fd5e7"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__SupportLogEntry_1ad4db4e775f81c86bb7f774ad71e7f024)`(const FString & NewValue)` <a id="structFRHAPI__SupportLogEntry_1ad4db4e775f81c86bb7f774ad71e7f024"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__SupportLogEntry_1a4f9c2fd7cb6bfc6672569025d53a0db8)`(FString && NewValue)` <a id="structFRHAPI__SupportLogEntry_1a4f9c2fd7cb6bfc6672569025d53a0db8"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformUserId`](#structFRHAPI__SupportLogEntry_1abb31ffc71926874ad89aee17898599c6)`()` <a id="structFRHAPI__SupportLogEntry_1abb31ffc71926874ad89aee17898599c6"></a>

Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.

#### `public inline bool `[`IsPlatformUserIdSet`](#structFRHAPI__SupportLogEntry_1a1c62833f0350dd8be6e6553c417dfd7f)`() const` <a id="structFRHAPI__SupportLogEntry_1a1c62833f0350dd8be6e6553c417dfd7f"></a>

Checks whether PlatformUserId_Optional has been set.

#### `public inline FString & `[`GetEventName`](#structFRHAPI__SupportLogEntry_1a521643b91c069a750aef3033097cb1cd)`()` <a id="structFRHAPI__SupportLogEntry_1a521643b91c069a750aef3033097cb1cd"></a>

Gets the value of EventName.

#### `public inline const FString & `[`GetEventName`](#structFRHAPI__SupportLogEntry_1a1b8a10f2e19ae237de1da4ae79e1823e)`() const` <a id="structFRHAPI__SupportLogEntry_1a1b8a10f2e19ae237de1da4ae79e1823e"></a>

Gets the value of EventName.

#### `public inline void `[`SetEventName`](#structFRHAPI__SupportLogEntry_1ad48a882809b68c946ad2043ae320ece0)`(const FString & NewValue)` <a id="structFRHAPI__SupportLogEntry_1ad48a882809b68c946ad2043ae320ece0"></a>

Sets the value of EventName.

#### `public inline void `[`SetEventName`](#structFRHAPI__SupportLogEntry_1a5d6dde905728d4c8483b9b7066220d1f)`(FString && NewValue)` <a id="structFRHAPI__SupportLogEntry_1a5d6dde905728d4c8483b9b7066220d1f"></a>

Sets the value of EventName using move semantics.

#### `public inline FString & `[`GetEventDescription`](#structFRHAPI__SupportLogEntry_1a1d7281ec4e4d1473d6217c9e205f94bd)`()` <a id="structFRHAPI__SupportLogEntry_1a1d7281ec4e4d1473d6217c9e205f94bd"></a>

Gets the value of EventDescription.

#### `public inline const FString & `[`GetEventDescription`](#structFRHAPI__SupportLogEntry_1ac7580b09631c16bca8b70bc729689078)`() const` <a id="structFRHAPI__SupportLogEntry_1ac7580b09631c16bca8b70bc729689078"></a>

Gets the value of EventDescription.

#### `public inline void `[`SetEventDescription`](#structFRHAPI__SupportLogEntry_1afd9b287ed7e47f0e11e016bfdb07ecd3)`(const FString & NewValue)` <a id="structFRHAPI__SupportLogEntry_1afd9b287ed7e47f0e11e016bfdb07ecd3"></a>

Sets the value of EventDescription.

#### `public inline void `[`SetEventDescription`](#structFRHAPI__SupportLogEntry_1a371f671ba35c1e69e13ef88fdbc6e57e)`(FString && NewValue)` <a id="structFRHAPI__SupportLogEntry_1a371f671ba35c1e69e13ef88fdbc6e57e"></a>

Sets the value of EventDescription using move semantics.

#### `public inline FString & `[`GetIp`](#structFRHAPI__SupportLogEntry_1a890dda05f37bc9f98e2eb7211644453b)`()` <a id="structFRHAPI__SupportLogEntry_1a890dda05f37bc9f98e2eb7211644453b"></a>

Gets the value of Ip_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetIp`](#structFRHAPI__SupportLogEntry_1a85afd3ec48a4a768b34ca3fa2a251096)`() const` <a id="structFRHAPI__SupportLogEntry_1a85afd3ec48a4a768b34ca3fa2a251096"></a>

Gets the value of Ip_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetIp`](#structFRHAPI__SupportLogEntry_1af02b1a968191f66e7be39efc7a30b873)`(const FString & DefaultValue) const` <a id="structFRHAPI__SupportLogEntry_1af02b1a968191f66e7be39efc7a30b873"></a>

Gets the value of Ip_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetIp`](#structFRHAPI__SupportLogEntry_1a56675fe0da8e7c723d16c77f40260c03)`(FString & OutValue) const` <a id="structFRHAPI__SupportLogEntry_1a56675fe0da8e7c723d16c77f40260c03"></a>

Fills OutValue with the value of Ip_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetIpOrNull`](#structFRHAPI__SupportLogEntry_1a4e0a5567517a5a143ddebdf6d773584b)`()` <a id="structFRHAPI__SupportLogEntry_1a4e0a5567517a5a143ddebdf6d773584b"></a>

Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetIpOrNull`](#structFRHAPI__SupportLogEntry_1abd54683c14f2c7e6d6efaa3a0f6d631c)`() const` <a id="structFRHAPI__SupportLogEntry_1abd54683c14f2c7e6d6efaa3a0f6d631c"></a>

Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetIp`](#structFRHAPI__SupportLogEntry_1afc09b25b4b1b2de609e75d408f1ffbe2)`(const FString & NewValue)` <a id="structFRHAPI__SupportLogEntry_1afc09b25b4b1b2de609e75d408f1ffbe2"></a>

Sets the value of Ip_Optional and also sets Ip_IsSet to true.

#### `public inline void `[`SetIp`](#structFRHAPI__SupportLogEntry_1a86184c37eaec51541ec35a4a2b05c2d2)`(FString && NewValue)` <a id="structFRHAPI__SupportLogEntry_1a86184c37eaec51541ec35a4a2b05c2d2"></a>

Sets the value of Ip_Optional and also sets Ip_IsSet to true using move semantics.

#### `public inline void `[`ClearIp`](#structFRHAPI__SupportLogEntry_1af70ef8a6920465af1cff423083aafef5)`()` <a id="structFRHAPI__SupportLogEntry_1af70ef8a6920465af1cff423083aafef5"></a>

Clears the value of Ip_Optional and sets Ip_IsSet to false.

#### `public inline bool `[`IsIpSet`](#structFRHAPI__SupportLogEntry_1ac337adcb69e5946cf3be06edb08306c6)`() const` <a id="structFRHAPI__SupportLogEntry_1ac337adcb69e5946cf3be06edb08306c6"></a>

Checks whether Ip_Optional has been set.

#### `public inline FString & `[`GetSupportUsername`](#structFRHAPI__SupportLogEntry_1a5911dc7ea4d7e48f4048b9c0bad08427)`()` <a id="structFRHAPI__SupportLogEntry_1a5911dc7ea4d7e48f4048b9c0bad08427"></a>

Gets the value of SupportUsername_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSupportUsername`](#structFRHAPI__SupportLogEntry_1ad31f69a6c0b5bd1967e14546dc919f10)`() const` <a id="structFRHAPI__SupportLogEntry_1ad31f69a6c0b5bd1967e14546dc919f10"></a>

Gets the value of SupportUsername_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSupportUsername`](#structFRHAPI__SupportLogEntry_1af1d07eea1317b143b269bece41da958b)`(const FString & DefaultValue) const` <a id="structFRHAPI__SupportLogEntry_1af1d07eea1317b143b269bece41da958b"></a>

Gets the value of SupportUsername_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSupportUsername`](#structFRHAPI__SupportLogEntry_1a825ecd1ca21d73f9e8a3f692c0b1c45c)`(FString & OutValue) const` <a id="structFRHAPI__SupportLogEntry_1a825ecd1ca21d73f9e8a3f692c0b1c45c"></a>

Fills OutValue with the value of SupportUsername_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetSupportUsernameOrNull`](#structFRHAPI__SupportLogEntry_1af2fc58a6aa31d40e5ee5312e38017b5f)`()` <a id="structFRHAPI__SupportLogEntry_1af2fc58a6aa31d40e5ee5312e38017b5f"></a>

Returns a pointer to SupportUsername_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetSupportUsernameOrNull`](#structFRHAPI__SupportLogEntry_1a32ff29bafe647ac450ef0dd38e46a42a)`() const` <a id="structFRHAPI__SupportLogEntry_1a32ff29bafe647ac450ef0dd38e46a42a"></a>

Returns a pointer to SupportUsername_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSupportUsername`](#structFRHAPI__SupportLogEntry_1a5adeb3f9d8b530607aa4cc366a8cc079)`(const FString & NewValue)` <a id="structFRHAPI__SupportLogEntry_1a5adeb3f9d8b530607aa4cc366a8cc079"></a>

Sets the value of SupportUsername_Optional and also sets SupportUsername_IsSet to true.

#### `public inline void `[`SetSupportUsername`](#structFRHAPI__SupportLogEntry_1aa49040983df33dfcf89595393fabc641)`(FString && NewValue)` <a id="structFRHAPI__SupportLogEntry_1aa49040983df33dfcf89595393fabc641"></a>

Sets the value of SupportUsername_Optional and also sets SupportUsername_IsSet to true using move semantics.

#### `public inline void `[`ClearSupportUsername`](#structFRHAPI__SupportLogEntry_1a8abb6a809eed01c61ada12c3ac87029c)`()` <a id="structFRHAPI__SupportLogEntry_1a8abb6a809eed01c61ada12c3ac87029c"></a>

Clears the value of SupportUsername_Optional and sets SupportUsername_IsSet to false.

#### `public inline bool `[`IsSupportUsernameSet`](#structFRHAPI__SupportLogEntry_1a145bd532b4a4dd0f7bb8a9913482aaec)`() const` <a id="structFRHAPI__SupportLogEntry_1a145bd532b4a4dd0f7bb8a9913482aaec"></a>

Checks whether SupportUsername_Optional has been set.

#### `public inline FDateTime & `[`GetCreated`](#structFRHAPI__SupportLogEntry_1aeb270b698a3e32761e97c09f302eaf9b)`()` <a id="structFRHAPI__SupportLogEntry_1aeb270b698a3e32761e97c09f302eaf9b"></a>

Gets the value of Created.

#### `public inline const FDateTime & `[`GetCreated`](#structFRHAPI__SupportLogEntry_1ad01f8b36219822cbaf9665b344b4eb64)`() const` <a id="structFRHAPI__SupportLogEntry_1ad01f8b36219822cbaf9665b344b4eb64"></a>

Gets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__SupportLogEntry_1ac719095125c820384d49a4490b151fbf)`(const FDateTime & NewValue)` <a id="structFRHAPI__SupportLogEntry_1ac719095125c820384d49a4490b151fbf"></a>

Sets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__SupportLogEntry_1a1c74dfd4d5eab0b4bf39139f2a8bfe91)`(FDateTime && NewValue)` <a id="structFRHAPI__SupportLogEntry_1a1c74dfd4d5eab0b4bf39139f2a8bfe91"></a>

Sets the value of Created using move semantics.

