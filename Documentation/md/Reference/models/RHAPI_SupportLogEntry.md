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
`public inline FORCEINLINE FString & `[`GetSupportActionLogId`](#structFRHAPI__SupportLogEntry_1a1e1df371695008273ddf54f7d08ca00e)`()` | Gets the value of SupportActionLogId.
`public inline FORCEINLINE const FString & `[`GetSupportActionLogId`](#structFRHAPI__SupportLogEntry_1aa827d8e3c5a376ec8eb718bbc5b73001)`() const` | Gets the value of SupportActionLogId.
`public inline FORCEINLINE void `[`SetSupportActionLogId`](#structFRHAPI__SupportLogEntry_1ab931ab820ce38da5d0368a8f926cad4f)`(const FString & NewValue)` | Sets the value of SupportActionLogId.
`public inline FORCEINLINE void `[`SetSupportActionLogId`](#structFRHAPI__SupportLogEntry_1a3434f3566ed2ec44a1f8ad634b7aa059)`(FString && NewValue)` | Sets the value of SupportActionLogId using move semantics.
`public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__SupportLogEntry_1ab4e2c9287aec10702651f364f36380d5)`()` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__SupportLogEntry_1ad7f3e58d8cba647fde0a5d06a32c5a38)`() const` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__SupportLogEntry_1a992cace66e0185a9f4bce37a8c47bdd3)`(const FGuid & DefaultValue) const` | Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPersonId`](#structFRHAPI__SupportLogEntry_1ab4f4b30f1a486ffffe504c822405f0f5)`(FGuid & OutValue) const` | Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__SupportLogEntry_1a0aeaf5b7b6c1eaab6d927ad695cf3c90)`()` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__SupportLogEntry_1a6010977d1a5d6be8bbc3fb1cd7105e4c)`() const` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__SupportLogEntry_1a8188383d9dcbe33dc145564f1b7db2ca)`(const FGuid & NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__SupportLogEntry_1aa99407219ae95e3c193eb6e8b77e4648)`(FGuid && NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.
`public inline void `[`ClearPersonId`](#structFRHAPI__SupportLogEntry_1a78e155ebe2b6c2407bfad41c5216f1c4)`()` | Clears the value of PersonId_Optional and sets PersonId_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__SupportLogEntry_1a65bb2e7e3696b1ea15de6d8f1259c947)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SupportLogEntry_1acf1ca7b6398587d498cbca9965883d93)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SupportLogEntry_1a537cdaf405377e479d49ad69c19d493c)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__SupportLogEntry_1a7c62efbb5e7505b7507b4d19413f1884)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__SupportLogEntry_1a69bd6f4f913dc045e36c6cac58d15ad3)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__SupportLogEntry_1af24cfe51fa245f7e89992de8b75b7232)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__SupportLogEntry_1a2adcc079eaeae4f0e3d76a12ec15e3d8)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__SupportLogEntry_1adc6b014a0fb1a974f2acd28e3e686110)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__SupportLogEntry_1aaa0f4053264bc927df9dd561e4e06cb8)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__SupportLogEntry_1a37a40d9ae68c203e1e135943f71e8a19)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__SupportLogEntry_1aac39ba755fcdb1ef37d6d8be1a2fed01)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__SupportLogEntry_1a9d7f4e5151e2f9ce2ffd33460abf2d8e)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__SupportLogEntry_1a67b43aaa6354cf582d535b8dc2a06ad7)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__SupportLogEntry_1a7e75eb2c2bda55c5174a207dcd0e1bea)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__SupportLogEntry_1ad5c4cc5206a020e65c0974a29c5dfbcc)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__SupportLogEntry_1a3ee72ed8e4359dd4c3b33277800e2925)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__SupportLogEntry_1acef89fb0bc16b69add56a91c6a808c20)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__SupportLogEntry_1add0b80aae70960f66b25ec0f6f6aaa7e)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__SupportLogEntry_1a2ea6166b901b2b3ee70b89101e46dc49)`()` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__SupportLogEntry_1a0d927438de6938b7c3b481e57d3210c7)`() const` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__SupportLogEntry_1a0ae8db864ddc4d921ce8d4b928e328b1)`(const FString & DefaultValue) const` | Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformUserId`](#structFRHAPI__SupportLogEntry_1aba78d6c7781f788cc880050e63ae4ec2)`(FString & OutValue) const` | Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__SupportLogEntry_1a603efce2fba61d082099407197caf700)`()` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__SupportLogEntry_1a867938f7a7c91fa8c621244a61b2e229)`() const` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__SupportLogEntry_1a12e2d9e72b2206add5099bc4023df866)`(const FString & NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__SupportLogEntry_1a6e52818ddd9efa16b0c841447c41eb18)`(FString && NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformUserId`](#structFRHAPI__SupportLogEntry_1abb31ffc71926874ad89aee17898599c6)`()` | Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetEventName`](#structFRHAPI__SupportLogEntry_1a11ddabd351e2408ff8e458b838fd7b2c)`()` | Gets the value of EventName.
`public inline FORCEINLINE const FString & `[`GetEventName`](#structFRHAPI__SupportLogEntry_1a1821f592b3b85a9550c29dd394a8fc1a)`() const` | Gets the value of EventName.
`public inline FORCEINLINE void `[`SetEventName`](#structFRHAPI__SupportLogEntry_1aa1cc267949aebfaf860c145138e0d4cb)`(const FString & NewValue)` | Sets the value of EventName.
`public inline FORCEINLINE void `[`SetEventName`](#structFRHAPI__SupportLogEntry_1ad7b91f3819d8d0af85ae6171063e61cc)`(FString && NewValue)` | Sets the value of EventName using move semantics.
`public inline FORCEINLINE FString & `[`GetEventDescription`](#structFRHAPI__SupportLogEntry_1aef8a07f9f903b910133fb6d71d292617)`()` | Gets the value of EventDescription.
`public inline FORCEINLINE const FString & `[`GetEventDescription`](#structFRHAPI__SupportLogEntry_1a11103e9efee598cc23ecc43d1c5cf723)`() const` | Gets the value of EventDescription.
`public inline FORCEINLINE void `[`SetEventDescription`](#structFRHAPI__SupportLogEntry_1a93938094570dd94545c03cc3d559a760)`(const FString & NewValue)` | Sets the value of EventDescription.
`public inline FORCEINLINE void `[`SetEventDescription`](#structFRHAPI__SupportLogEntry_1a367cfb1620317c2131f33adbd8069074)`(FString && NewValue)` | Sets the value of EventDescription using move semantics.
`public inline FORCEINLINE FString & `[`GetIp`](#structFRHAPI__SupportLogEntry_1a101743b7bd4ea8cf8ca263caa28b4ef5)`()` | Gets the value of Ip_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetIp`](#structFRHAPI__SupportLogEntry_1a7e4ff53d4f9a0f542654cd3b68aaa9f8)`() const` | Gets the value of Ip_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetIp`](#structFRHAPI__SupportLogEntry_1a9131c536f6b32a957c2df16ea5b5a643)`(const FString & DefaultValue) const` | Gets the value of Ip_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetIp`](#structFRHAPI__SupportLogEntry_1a76b86f9891fe16359769b241a9bca3ef)`(FString & OutValue) const` | Fills OutValue with the value of Ip_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetIpOrNull`](#structFRHAPI__SupportLogEntry_1a80981f6a688dea382beb38b904b1f170)`()` | Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetIpOrNull`](#structFRHAPI__SupportLogEntry_1a95b1bc50564588e2207cf9362203d2fa)`() const` | Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetIp`](#structFRHAPI__SupportLogEntry_1a89a3f7fb0648c28820479f5f0bab203d)`(const FString & NewValue)` | Sets the value of Ip_Optional and also sets Ip_IsSet to true.
`public inline FORCEINLINE void `[`SetIp`](#structFRHAPI__SupportLogEntry_1a83ecdcd3217e027a3de352314ea5abe3)`(FString && NewValue)` | Sets the value of Ip_Optional and also sets Ip_IsSet to true using move semantics.
`public inline void `[`ClearIp`](#structFRHAPI__SupportLogEntry_1af70ef8a6920465af1cff423083aafef5)`()` | Clears the value of Ip_Optional and sets Ip_IsSet to false.
`public inline FORCEINLINE FString & `[`GetSupportUsername`](#structFRHAPI__SupportLogEntry_1ab8e71740efe32262cb2c276d5eb89436)`()` | Gets the value of SupportUsername_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetSupportUsername`](#structFRHAPI__SupportLogEntry_1a4464b2d1613c87cc91cc71d39933a35a)`() const` | Gets the value of SupportUsername_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetSupportUsername`](#structFRHAPI__SupportLogEntry_1a9be6bc61d0b1e1581300bc7d0e1bd306)`(const FString & DefaultValue) const` | Gets the value of SupportUsername_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSupportUsername`](#structFRHAPI__SupportLogEntry_1aa664579267d643a1006953878a5386d8)`(FString & OutValue) const` | Fills OutValue with the value of SupportUsername_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetSupportUsernameOrNull`](#structFRHAPI__SupportLogEntry_1a0164c6798e1795b525ec82faeef07381)`()` | Returns a pointer to SupportUsername_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetSupportUsernameOrNull`](#structFRHAPI__SupportLogEntry_1a701f5ebb2df69361ce2e8a42e1098c0f)`() const` | Returns a pointer to SupportUsername_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSupportUsername`](#structFRHAPI__SupportLogEntry_1a6223965c9fbadbebc78713b64829e029)`(const FString & NewValue)` | Sets the value of SupportUsername_Optional and also sets SupportUsername_IsSet to true.
`public inline FORCEINLINE void `[`SetSupportUsername`](#structFRHAPI__SupportLogEntry_1a94ef0de304ac64d157baaec7e5cc5e6c)`(FString && NewValue)` | Sets the value of SupportUsername_Optional and also sets SupportUsername_IsSet to true using move semantics.
`public inline void `[`ClearSupportUsername`](#structFRHAPI__SupportLogEntry_1a8abb6a809eed01c61ada12c3ac87029c)`()` | Clears the value of SupportUsername_Optional and sets SupportUsername_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetCreated`](#structFRHAPI__SupportLogEntry_1a60b47f2b292c9ad9fc264773d8d382c4)`()` | Gets the value of Created.
`public inline FORCEINLINE const FDateTime & `[`GetCreated`](#structFRHAPI__SupportLogEntry_1a1a89cceee8a5a2c1b9eee6337399a973)`() const` | Gets the value of Created.
`public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__SupportLogEntry_1a69bbf690c4d97056934097bb3b83bfe1)`(const FDateTime & NewValue)` | Sets the value of Created.
`public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__SupportLogEntry_1aa3b398f7e80650cf53cbe4513c1e96ff)`(FDateTime && NewValue)` | Sets the value of Created using move semantics.

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

#### `public inline FORCEINLINE FString & `[`GetSupportActionLogId`](#structFRHAPI__SupportLogEntry_1a1e1df371695008273ddf54f7d08ca00e)`()` <a id="structFRHAPI__SupportLogEntry_1a1e1df371695008273ddf54f7d08ca00e"></a>

Gets the value of SupportActionLogId.

#### `public inline FORCEINLINE const FString & `[`GetSupportActionLogId`](#structFRHAPI__SupportLogEntry_1aa827d8e3c5a376ec8eb718bbc5b73001)`() const` <a id="structFRHAPI__SupportLogEntry_1aa827d8e3c5a376ec8eb718bbc5b73001"></a>

Gets the value of SupportActionLogId.

#### `public inline FORCEINLINE void `[`SetSupportActionLogId`](#structFRHAPI__SupportLogEntry_1ab931ab820ce38da5d0368a8f926cad4f)`(const FString & NewValue)` <a id="structFRHAPI__SupportLogEntry_1ab931ab820ce38da5d0368a8f926cad4f"></a>

Sets the value of SupportActionLogId.

#### `public inline FORCEINLINE void `[`SetSupportActionLogId`](#structFRHAPI__SupportLogEntry_1a3434f3566ed2ec44a1f8ad634b7aa059)`(FString && NewValue)` <a id="structFRHAPI__SupportLogEntry_1a3434f3566ed2ec44a1f8ad634b7aa059"></a>

Sets the value of SupportActionLogId using move semantics.

#### `public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__SupportLogEntry_1ab4e2c9287aec10702651f364f36380d5)`()` <a id="structFRHAPI__SupportLogEntry_1ab4e2c9287aec10702651f364f36380d5"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__SupportLogEntry_1ad7f3e58d8cba647fde0a5d06a32c5a38)`() const` <a id="structFRHAPI__SupportLogEntry_1ad7f3e58d8cba647fde0a5d06a32c5a38"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__SupportLogEntry_1a992cace66e0185a9f4bce37a8c47bdd3)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__SupportLogEntry_1a992cace66e0185a9f4bce37a8c47bdd3"></a>

Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPersonId`](#structFRHAPI__SupportLogEntry_1ab4f4b30f1a486ffffe504c822405f0f5)`(FGuid & OutValue) const` <a id="structFRHAPI__SupportLogEntry_1ab4f4b30f1a486ffffe504c822405f0f5"></a>

Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__SupportLogEntry_1a0aeaf5b7b6c1eaab6d927ad695cf3c90)`()` <a id="structFRHAPI__SupportLogEntry_1a0aeaf5b7b6c1eaab6d927ad695cf3c90"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__SupportLogEntry_1a6010977d1a5d6be8bbc3fb1cd7105e4c)`() const` <a id="structFRHAPI__SupportLogEntry_1a6010977d1a5d6be8bbc3fb1cd7105e4c"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__SupportLogEntry_1a8188383d9dcbe33dc145564f1b7db2ca)`(const FGuid & NewValue)` <a id="structFRHAPI__SupportLogEntry_1a8188383d9dcbe33dc145564f1b7db2ca"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__SupportLogEntry_1aa99407219ae95e3c193eb6e8b77e4648)`(FGuid && NewValue)` <a id="structFRHAPI__SupportLogEntry_1aa99407219ae95e3c193eb6e8b77e4648"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.

#### `public inline void `[`ClearPersonId`](#structFRHAPI__SupportLogEntry_1a78e155ebe2b6c2407bfad41c5216f1c4)`()` <a id="structFRHAPI__SupportLogEntry_1a78e155ebe2b6c2407bfad41c5216f1c4"></a>

Clears the value of PersonId_Optional and sets PersonId_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__SupportLogEntry_1a65bb2e7e3696b1ea15de6d8f1259c947)`()` <a id="structFRHAPI__SupportLogEntry_1a65bb2e7e3696b1ea15de6d8f1259c947"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SupportLogEntry_1acf1ca7b6398587d498cbca9965883d93)`() const` <a id="structFRHAPI__SupportLogEntry_1acf1ca7b6398587d498cbca9965883d93"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__SupportLogEntry_1a537cdaf405377e479d49ad69c19d493c)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__SupportLogEntry_1a537cdaf405377e479d49ad69c19d493c"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__SupportLogEntry_1a7c62efbb5e7505b7507b4d19413f1884)`(FGuid & OutValue) const` <a id="structFRHAPI__SupportLogEntry_1a7c62efbb5e7505b7507b4d19413f1884"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__SupportLogEntry_1a69bd6f4f913dc045e36c6cac58d15ad3)`()` <a id="structFRHAPI__SupportLogEntry_1a69bd6f4f913dc045e36c6cac58d15ad3"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__SupportLogEntry_1af24cfe51fa245f7e89992de8b75b7232)`() const` <a id="structFRHAPI__SupportLogEntry_1af24cfe51fa245f7e89992de8b75b7232"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__SupportLogEntry_1a2adcc079eaeae4f0e3d76a12ec15e3d8)`(const FGuid & NewValue)` <a id="structFRHAPI__SupportLogEntry_1a2adcc079eaeae4f0e3d76a12ec15e3d8"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__SupportLogEntry_1adc6b014a0fb1a974f2acd28e3e686110)`(FGuid && NewValue)` <a id="structFRHAPI__SupportLogEntry_1adc6b014a0fb1a974f2acd28e3e686110"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__SupportLogEntry_1aaa0f4053264bc927df9dd561e4e06cb8)`()` <a id="structFRHAPI__SupportLogEntry_1aaa0f4053264bc927df9dd561e4e06cb8"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__SupportLogEntry_1a37a40d9ae68c203e1e135943f71e8a19)`()` <a id="structFRHAPI__SupportLogEntry_1a37a40d9ae68c203e1e135943f71e8a19"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__SupportLogEntry_1aac39ba755fcdb1ef37d6d8be1a2fed01)`() const` <a id="structFRHAPI__SupportLogEntry_1aac39ba755fcdb1ef37d6d8be1a2fed01"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__SupportLogEntry_1a9d7f4e5151e2f9ce2ffd33460abf2d8e)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__SupportLogEntry_1a9d7f4e5151e2f9ce2ffd33460abf2d8e"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__SupportLogEntry_1a67b43aaa6354cf582d535b8dc2a06ad7)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__SupportLogEntry_1a67b43aaa6354cf582d535b8dc2a06ad7"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__SupportLogEntry_1a7e75eb2c2bda55c5174a207dcd0e1bea)`()` <a id="structFRHAPI__SupportLogEntry_1a7e75eb2c2bda55c5174a207dcd0e1bea"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__SupportLogEntry_1ad5c4cc5206a020e65c0974a29c5dfbcc)`() const` <a id="structFRHAPI__SupportLogEntry_1ad5c4cc5206a020e65c0974a29c5dfbcc"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__SupportLogEntry_1a3ee72ed8e4359dd4c3b33277800e2925)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__SupportLogEntry_1a3ee72ed8e4359dd4c3b33277800e2925"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__SupportLogEntry_1acef89fb0bc16b69add56a91c6a808c20)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__SupportLogEntry_1acef89fb0bc16b69add56a91c6a808c20"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__SupportLogEntry_1add0b80aae70960f66b25ec0f6f6aaa7e)`()` <a id="structFRHAPI__SupportLogEntry_1add0b80aae70960f66b25ec0f6f6aaa7e"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__SupportLogEntry_1a2ea6166b901b2b3ee70b89101e46dc49)`()` <a id="structFRHAPI__SupportLogEntry_1a2ea6166b901b2b3ee70b89101e46dc49"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__SupportLogEntry_1a0d927438de6938b7c3b481e57d3210c7)`() const` <a id="structFRHAPI__SupportLogEntry_1a0d927438de6938b7c3b481e57d3210c7"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__SupportLogEntry_1a0ae8db864ddc4d921ce8d4b928e328b1)`(const FString & DefaultValue) const` <a id="structFRHAPI__SupportLogEntry_1a0ae8db864ddc4d921ce8d4b928e328b1"></a>

Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformUserId`](#structFRHAPI__SupportLogEntry_1aba78d6c7781f788cc880050e63ae4ec2)`(FString & OutValue) const` <a id="structFRHAPI__SupportLogEntry_1aba78d6c7781f788cc880050e63ae4ec2"></a>

Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__SupportLogEntry_1a603efce2fba61d082099407197caf700)`()` <a id="structFRHAPI__SupportLogEntry_1a603efce2fba61d082099407197caf700"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__SupportLogEntry_1a867938f7a7c91fa8c621244a61b2e229)`() const` <a id="structFRHAPI__SupportLogEntry_1a867938f7a7c91fa8c621244a61b2e229"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__SupportLogEntry_1a12e2d9e72b2206add5099bc4023df866)`(const FString & NewValue)` <a id="structFRHAPI__SupportLogEntry_1a12e2d9e72b2206add5099bc4023df866"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__SupportLogEntry_1a6e52818ddd9efa16b0c841447c41eb18)`(FString && NewValue)` <a id="structFRHAPI__SupportLogEntry_1a6e52818ddd9efa16b0c841447c41eb18"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformUserId`](#structFRHAPI__SupportLogEntry_1abb31ffc71926874ad89aee17898599c6)`()` <a id="structFRHAPI__SupportLogEntry_1abb31ffc71926874ad89aee17898599c6"></a>

Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetEventName`](#structFRHAPI__SupportLogEntry_1a11ddabd351e2408ff8e458b838fd7b2c)`()` <a id="structFRHAPI__SupportLogEntry_1a11ddabd351e2408ff8e458b838fd7b2c"></a>

Gets the value of EventName.

#### `public inline FORCEINLINE const FString & `[`GetEventName`](#structFRHAPI__SupportLogEntry_1a1821f592b3b85a9550c29dd394a8fc1a)`() const` <a id="structFRHAPI__SupportLogEntry_1a1821f592b3b85a9550c29dd394a8fc1a"></a>

Gets the value of EventName.

#### `public inline FORCEINLINE void `[`SetEventName`](#structFRHAPI__SupportLogEntry_1aa1cc267949aebfaf860c145138e0d4cb)`(const FString & NewValue)` <a id="structFRHAPI__SupportLogEntry_1aa1cc267949aebfaf860c145138e0d4cb"></a>

Sets the value of EventName.

#### `public inline FORCEINLINE void `[`SetEventName`](#structFRHAPI__SupportLogEntry_1ad7b91f3819d8d0af85ae6171063e61cc)`(FString && NewValue)` <a id="structFRHAPI__SupportLogEntry_1ad7b91f3819d8d0af85ae6171063e61cc"></a>

Sets the value of EventName using move semantics.

#### `public inline FORCEINLINE FString & `[`GetEventDescription`](#structFRHAPI__SupportLogEntry_1aef8a07f9f903b910133fb6d71d292617)`()` <a id="structFRHAPI__SupportLogEntry_1aef8a07f9f903b910133fb6d71d292617"></a>

Gets the value of EventDescription.

#### `public inline FORCEINLINE const FString & `[`GetEventDescription`](#structFRHAPI__SupportLogEntry_1a11103e9efee598cc23ecc43d1c5cf723)`() const` <a id="structFRHAPI__SupportLogEntry_1a11103e9efee598cc23ecc43d1c5cf723"></a>

Gets the value of EventDescription.

#### `public inline FORCEINLINE void `[`SetEventDescription`](#structFRHAPI__SupportLogEntry_1a93938094570dd94545c03cc3d559a760)`(const FString & NewValue)` <a id="structFRHAPI__SupportLogEntry_1a93938094570dd94545c03cc3d559a760"></a>

Sets the value of EventDescription.

#### `public inline FORCEINLINE void `[`SetEventDescription`](#structFRHAPI__SupportLogEntry_1a367cfb1620317c2131f33adbd8069074)`(FString && NewValue)` <a id="structFRHAPI__SupportLogEntry_1a367cfb1620317c2131f33adbd8069074"></a>

Sets the value of EventDescription using move semantics.

#### `public inline FORCEINLINE FString & `[`GetIp`](#structFRHAPI__SupportLogEntry_1a101743b7bd4ea8cf8ca263caa28b4ef5)`()` <a id="structFRHAPI__SupportLogEntry_1a101743b7bd4ea8cf8ca263caa28b4ef5"></a>

Gets the value of Ip_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetIp`](#structFRHAPI__SupportLogEntry_1a7e4ff53d4f9a0f542654cd3b68aaa9f8)`() const` <a id="structFRHAPI__SupportLogEntry_1a7e4ff53d4f9a0f542654cd3b68aaa9f8"></a>

Gets the value of Ip_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetIp`](#structFRHAPI__SupportLogEntry_1a9131c536f6b32a957c2df16ea5b5a643)`(const FString & DefaultValue) const` <a id="structFRHAPI__SupportLogEntry_1a9131c536f6b32a957c2df16ea5b5a643"></a>

Gets the value of Ip_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetIp`](#structFRHAPI__SupportLogEntry_1a76b86f9891fe16359769b241a9bca3ef)`(FString & OutValue) const` <a id="structFRHAPI__SupportLogEntry_1a76b86f9891fe16359769b241a9bca3ef"></a>

Fills OutValue with the value of Ip_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetIpOrNull`](#structFRHAPI__SupportLogEntry_1a80981f6a688dea382beb38b904b1f170)`()` <a id="structFRHAPI__SupportLogEntry_1a80981f6a688dea382beb38b904b1f170"></a>

Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetIpOrNull`](#structFRHAPI__SupportLogEntry_1a95b1bc50564588e2207cf9362203d2fa)`() const` <a id="structFRHAPI__SupportLogEntry_1a95b1bc50564588e2207cf9362203d2fa"></a>

Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetIp`](#structFRHAPI__SupportLogEntry_1a89a3f7fb0648c28820479f5f0bab203d)`(const FString & NewValue)` <a id="structFRHAPI__SupportLogEntry_1a89a3f7fb0648c28820479f5f0bab203d"></a>

Sets the value of Ip_Optional and also sets Ip_IsSet to true.

#### `public inline FORCEINLINE void `[`SetIp`](#structFRHAPI__SupportLogEntry_1a83ecdcd3217e027a3de352314ea5abe3)`(FString && NewValue)` <a id="structFRHAPI__SupportLogEntry_1a83ecdcd3217e027a3de352314ea5abe3"></a>

Sets the value of Ip_Optional and also sets Ip_IsSet to true using move semantics.

#### `public inline void `[`ClearIp`](#structFRHAPI__SupportLogEntry_1af70ef8a6920465af1cff423083aafef5)`()` <a id="structFRHAPI__SupportLogEntry_1af70ef8a6920465af1cff423083aafef5"></a>

Clears the value of Ip_Optional and sets Ip_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetSupportUsername`](#structFRHAPI__SupportLogEntry_1ab8e71740efe32262cb2c276d5eb89436)`()` <a id="structFRHAPI__SupportLogEntry_1ab8e71740efe32262cb2c276d5eb89436"></a>

Gets the value of SupportUsername_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetSupportUsername`](#structFRHAPI__SupportLogEntry_1a4464b2d1613c87cc91cc71d39933a35a)`() const` <a id="structFRHAPI__SupportLogEntry_1a4464b2d1613c87cc91cc71d39933a35a"></a>

Gets the value of SupportUsername_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetSupportUsername`](#structFRHAPI__SupportLogEntry_1a9be6bc61d0b1e1581300bc7d0e1bd306)`(const FString & DefaultValue) const` <a id="structFRHAPI__SupportLogEntry_1a9be6bc61d0b1e1581300bc7d0e1bd306"></a>

Gets the value of SupportUsername_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSupportUsername`](#structFRHAPI__SupportLogEntry_1aa664579267d643a1006953878a5386d8)`(FString & OutValue) const` <a id="structFRHAPI__SupportLogEntry_1aa664579267d643a1006953878a5386d8"></a>

Fills OutValue with the value of SupportUsername_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetSupportUsernameOrNull`](#structFRHAPI__SupportLogEntry_1a0164c6798e1795b525ec82faeef07381)`()` <a id="structFRHAPI__SupportLogEntry_1a0164c6798e1795b525ec82faeef07381"></a>

Returns a pointer to SupportUsername_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetSupportUsernameOrNull`](#structFRHAPI__SupportLogEntry_1a701f5ebb2df69361ce2e8a42e1098c0f)`() const` <a id="structFRHAPI__SupportLogEntry_1a701f5ebb2df69361ce2e8a42e1098c0f"></a>

Returns a pointer to SupportUsername_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSupportUsername`](#structFRHAPI__SupportLogEntry_1a6223965c9fbadbebc78713b64829e029)`(const FString & NewValue)` <a id="structFRHAPI__SupportLogEntry_1a6223965c9fbadbebc78713b64829e029"></a>

Sets the value of SupportUsername_Optional and also sets SupportUsername_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSupportUsername`](#structFRHAPI__SupportLogEntry_1a94ef0de304ac64d157baaec7e5cc5e6c)`(FString && NewValue)` <a id="structFRHAPI__SupportLogEntry_1a94ef0de304ac64d157baaec7e5cc5e6c"></a>

Sets the value of SupportUsername_Optional and also sets SupportUsername_IsSet to true using move semantics.

#### `public inline void `[`ClearSupportUsername`](#structFRHAPI__SupportLogEntry_1a8abb6a809eed01c61ada12c3ac87029c)`()` <a id="structFRHAPI__SupportLogEntry_1a8abb6a809eed01c61ada12c3ac87029c"></a>

Clears the value of SupportUsername_Optional and sets SupportUsername_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetCreated`](#structFRHAPI__SupportLogEntry_1a60b47f2b292c9ad9fc264773d8d382c4)`()` <a id="structFRHAPI__SupportLogEntry_1a60b47f2b292c9ad9fc264773d8d382c4"></a>

Gets the value of Created.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreated`](#structFRHAPI__SupportLogEntry_1a1a89cceee8a5a2c1b9eee6337399a973)`() const` <a id="structFRHAPI__SupportLogEntry_1a1a89cceee8a5a2c1b9eee6337399a973"></a>

Gets the value of Created.

#### `public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__SupportLogEntry_1a69bbf690c4d97056934097bb3b83bfe1)`(const FDateTime & NewValue)` <a id="structFRHAPI__SupportLogEntry_1a69bbf690c4d97056934097bb3b83bfe1"></a>

Sets the value of Created.

#### `public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__SupportLogEntry_1aa3b398f7e80650cf53cbe4513c1e96ff)`(FDateTime && NewValue)` <a id="structFRHAPI__SupportLogEntry_1aa3b398f7e80650cf53cbe4513c1e96ff"></a>

Sets the value of Created using move semantics.

