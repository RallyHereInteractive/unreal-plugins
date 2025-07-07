---
title: RHAPI_CreateSupportLogRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_CreateSupportLogRequest`](#structFRHAPI__CreateSupportLogRequest) | Request to create a new support log entry.

## struct `FRHAPI_CreateSupportLogRequest` <a id="structFRHAPI__CreateSupportLogRequest"></a>

```
struct FRHAPI_CreateSupportLogRequest
  : public FRHAPI_Model
```

Request to create a new support log entry.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PersonId_Optional`](#structFRHAPI__CreateSupportLogRequest_1a3a7c1f7f56bc809058d66008d4f0063e) | Person ID to associate with the log entry.
`public bool `[`PersonId_IsSet`](#structFRHAPI__CreateSupportLogRequest_1a38e3a19235582c3bb22074dd62543fde) | true if PersonId_Optional has been set to a value
`public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__CreateSupportLogRequest_1aef63882fbbe3a2fa993340b7914ccc8a) | Player UUID to associate with the log entry.
`public bool `[`PlayerUuid_IsSet`](#structFRHAPI__CreateSupportLogRequest_1a227839b1183835912cf1033246e431fb) | true if PlayerUuid_Optional has been set to a value
`public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__CreateSupportLogRequest_1af8670a751de282be196632e37f8309b9) | Platform to associate with the log entry.
`public bool `[`Platform_IsSet`](#structFRHAPI__CreateSupportLogRequest_1a77f9be77c748f811c9b78f513acddebe) | true if Platform_Optional has been set to a value
`public FString `[`PlatformUserId_Optional`](#structFRHAPI__CreateSupportLogRequest_1ae8b2c0c20f5b233dfa79f42923cc8adc) | Platform user ID to associate with the log entry.
`public bool `[`PlatformUserId_IsSet`](#structFRHAPI__CreateSupportLogRequest_1a0a3744b3edd39c700f1afee6588a09ef) | true if PlatformUserId_Optional has been set to a value
`public FString `[`EventName`](#structFRHAPI__CreateSupportLogRequest_1a06bc9bd0a433c559a0d9fa05d6f2a65c) | Name of the support event.
`public FString `[`EventDescription`](#structFRHAPI__CreateSupportLogRequest_1a73ec85afa049b99259b4b34a421dbd83) | Detailed description of the support action.
`public FString `[`SupportUsername_Optional`](#structFRHAPI__CreateSupportLogRequest_1a804fd890a83890cf4d3bb3fccae218bb) | Username of the support agent.
`public bool `[`SupportUsername_IsSet`](#structFRHAPI__CreateSupportLogRequest_1a6776168428e8053461318411a10335f5) | true if SupportUsername_Optional has been set to a value
`public FString `[`Ip_Optional`](#structFRHAPI__CreateSupportLogRequest_1ad28f447627a2e624c7017fe71af46c00) | IP address where the action was performed.
`public bool `[`Ip_IsSet`](#structFRHAPI__CreateSupportLogRequest_1ab9e15ff9de2d8e6b457851ff733bc952) | true if Ip_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__CreateSupportLogRequest_1a4cd23b307977270f7dca33e569ce89e7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__CreateSupportLogRequest_1a4fe9b3848a96ac1e2976774dd044cc2e)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPersonId`](#structFRHAPI__CreateSupportLogRequest_1a2d58bdaa3d883f4d056e8fd50c6993d2)`()` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__CreateSupportLogRequest_1a506bbc49b22fd9d7fcd512c03cdf7ad5)`() const` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__CreateSupportLogRequest_1a095e2910bff989c31ebb098510b8b696)`(const FGuid & DefaultValue) const` | Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPersonId`](#structFRHAPI__CreateSupportLogRequest_1a3c308c964dd17cdba208d15cdf51bcce)`(FGuid & OutValue) const` | Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__CreateSupportLogRequest_1a5f45faffa6f21d76d9f0c5688c38098c)`()` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__CreateSupportLogRequest_1a9aae0729a530065284ded0dd6424d82e)`() const` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPersonId`](#structFRHAPI__CreateSupportLogRequest_1a373db8332492db80d2c8fa3aae8647d7)`(const FGuid & NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.
`public inline void `[`SetPersonId`](#structFRHAPI__CreateSupportLogRequest_1a52798563bb33f34039520e3f9b6cc6ba)`(FGuid && NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.
`public inline void `[`ClearPersonId`](#structFRHAPI__CreateSupportLogRequest_1a2c8e68a19e0da684c8ab0aca6fcdb03a)`()` | Clears the value of PersonId_Optional and sets PersonId_IsSet to false.
`public inline bool `[`IsPersonIdSet`](#structFRHAPI__CreateSupportLogRequest_1ae3b4d349aaf49b05792490153d251bc1)`() const` | Checks whether PersonId_Optional has been set.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1a1a60450be30f51e2f377c58e181d3663)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1a057fdec3cbd5a320959e6a26b816edda)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1a29c229ae11317e900dff3a06480d23af)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1afd79a09a7a98df596148cc9b3cbe4873)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CreateSupportLogRequest_1a0128ae37bdd59447a9950e7146e1b4d0)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CreateSupportLogRequest_1a9241cd752053969e9f01b4c498f8fbe6)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1a7051481d510273839a847513875899c3)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1a6ceb09691133ee27a2cb3d312eafc39e)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1ae081f21cba1070f287e9d5c756d84f28)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__CreateSupportLogRequest_1aa0f1901254338e541e20597a6626c059)`() const` | Checks whether PlayerUuid_Optional has been set.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateSupportLogRequest_1aaa84f8c538d564d2147b2dd82e7d76bb)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateSupportLogRequest_1a8b0360ab7007576dee569c839cb5f28b)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateSupportLogRequest_1ad3d809621b5878ec192b77e3dd2b2453)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatform`](#structFRHAPI__CreateSupportLogRequest_1a09bf73966d610f2eeefb09cb3c75f7d9)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CreateSupportLogRequest_1a776118ef023c2a891a7991a9b2e3e821)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CreateSupportLogRequest_1ad01e91c370f9ae942c51bc04821165c8)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatform`](#structFRHAPI__CreateSupportLogRequest_1ac585ec286ba8370f4b29d07522154b6d)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline void `[`SetPlatform`](#structFRHAPI__CreateSupportLogRequest_1a1175179a361d8ec2830b719cdac4c2d6)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__CreateSupportLogRequest_1a2636045a68da22ac90f93576a1328c17)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline bool `[`IsPlatformSet`](#structFRHAPI__CreateSupportLogRequest_1a07aa17f6596aba64dda3af1f689acdea)`() const` | Checks whether Platform_Optional has been set.
`public inline FString & `[`GetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1a4e6ea491b7e2f86632e5f4fa2d45510f)`()` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1ae618badeaa320aedb99a98833f589a44)`() const` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1a1b26a9b975d101be20dee41543db95f7)`(const FString & DefaultValue) const` | Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1a217fcd41a0ddf6e3b4cd98e2ccb36940)`(FString & OutValue) const` | Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__CreateSupportLogRequest_1a669ab5c1c5f9c220c89c845bbd5e1025)`()` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__CreateSupportLogRequest_1a85a4fae6f86aa13e57f40e8cbf2190c0)`() const` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1aea96a2d545c5ee5261078e33bb3b346b)`(const FString & NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.
`public inline void `[`SetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1acfbdc50f6b26c0a7f3f81cf5e1a8a2a3)`(FString && NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1a3bd03bc80494e02aa9e3a74315fb7900)`()` | Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.
`public inline bool `[`IsPlatformUserIdSet`](#structFRHAPI__CreateSupportLogRequest_1adba290e7bb0568450d4284d110550718)`() const` | Checks whether PlatformUserId_Optional has been set.
`public inline FString & `[`GetEventName`](#structFRHAPI__CreateSupportLogRequest_1a52bdb7255ef5b9ab531b38b3d96718a5)`()` | Gets the value of EventName.
`public inline const FString & `[`GetEventName`](#structFRHAPI__CreateSupportLogRequest_1a8f5985e24e04127c9d2d3c56585ab425)`() const` | Gets the value of EventName.
`public inline void `[`SetEventName`](#structFRHAPI__CreateSupportLogRequest_1a8384e6a09c5f5bd400359c189c2b2d0f)`(const FString & NewValue)` | Sets the value of EventName.
`public inline void `[`SetEventName`](#structFRHAPI__CreateSupportLogRequest_1aeb0b9b995af8e8bfbac54d045320118b)`(FString && NewValue)` | Sets the value of EventName using move semantics.
`public inline FString & `[`GetEventDescription`](#structFRHAPI__CreateSupportLogRequest_1a81c8640ce696e3e26902059fe10af661)`()` | Gets the value of EventDescription.
`public inline const FString & `[`GetEventDescription`](#structFRHAPI__CreateSupportLogRequest_1a1a37198dd12f600441294f4b55e74550)`() const` | Gets the value of EventDescription.
`public inline void `[`SetEventDescription`](#structFRHAPI__CreateSupportLogRequest_1a5a4b31aa41db268a1ef0f62105ad78f9)`(const FString & NewValue)` | Sets the value of EventDescription.
`public inline void `[`SetEventDescription`](#structFRHAPI__CreateSupportLogRequest_1a0bcd3760f5599d9f03a2e2338dfe820f)`(FString && NewValue)` | Sets the value of EventDescription using move semantics.
`public inline FString & `[`GetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1ad94c311021461b0ee83f5933dcb6f116)`()` | Gets the value of SupportUsername_Optional, regardless of it having been set.
`public inline const FString & `[`GetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1a1fe54aff241cb94391bc9429b070a295)`() const` | Gets the value of SupportUsername_Optional, regardless of it having been set.
`public inline const FString & `[`GetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1a6b752c2d4a7d4401f166771ed55635d9)`(const FString & DefaultValue) const` | Gets the value of SupportUsername_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1af837f214fd011020fce221ebe3e7ebfb)`(FString & OutValue) const` | Fills OutValue with the value of SupportUsername_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetSupportUsernameOrNull`](#structFRHAPI__CreateSupportLogRequest_1a99fbb2d9aa9debaf2663c8cac60a8006)`()` | Returns a pointer to SupportUsername_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetSupportUsernameOrNull`](#structFRHAPI__CreateSupportLogRequest_1a993739d3dea6175df72b1df530c15954)`() const` | Returns a pointer to SupportUsername_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1aa38a73f528f307db133187b2a3209fa0)`(const FString & NewValue)` | Sets the value of SupportUsername_Optional and also sets SupportUsername_IsSet to true.
`public inline void `[`SetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1ae14ad51aaad4549b63b145ca2afb8b81)`(FString && NewValue)` | Sets the value of SupportUsername_Optional and also sets SupportUsername_IsSet to true using move semantics.
`public inline void `[`ClearSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1a2d7d82bd7f04826bc1b1b2639e172857)`()` | Clears the value of SupportUsername_Optional and sets SupportUsername_IsSet to false.
`public inline bool `[`IsSupportUsernameSet`](#structFRHAPI__CreateSupportLogRequest_1ab4be8c109c6a54d883ec4e1dba61aece)`() const` | Checks whether SupportUsername_Optional has been set.
`public inline FString & `[`GetIp`](#structFRHAPI__CreateSupportLogRequest_1a15266f9dfc09ed0c50c4ec3852b6dcfe)`()` | Gets the value of Ip_Optional, regardless of it having been set.
`public inline const FString & `[`GetIp`](#structFRHAPI__CreateSupportLogRequest_1acba4c8a68762f8bf8f07ee519ecb0e85)`() const` | Gets the value of Ip_Optional, regardless of it having been set.
`public inline const FString & `[`GetIp`](#structFRHAPI__CreateSupportLogRequest_1a7f0449afdf650c715ec27281aaa379a0)`(const FString & DefaultValue) const` | Gets the value of Ip_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetIp`](#structFRHAPI__CreateSupportLogRequest_1a1d717572165080ef1395ae90337e4947)`(FString & OutValue) const` | Fills OutValue with the value of Ip_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetIpOrNull`](#structFRHAPI__CreateSupportLogRequest_1a508281400b8bc5b677a414792513abaa)`()` | Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetIpOrNull`](#structFRHAPI__CreateSupportLogRequest_1a372a4cb47d6eea5a44cbd91b505a961c)`() const` | Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetIp`](#structFRHAPI__CreateSupportLogRequest_1aece909f532ecbeebb5b1e685d4e60866)`(const FString & NewValue)` | Sets the value of Ip_Optional and also sets Ip_IsSet to true.
`public inline void `[`SetIp`](#structFRHAPI__CreateSupportLogRequest_1a69cecc12186ec30615d03a5ab0987c1c)`(FString && NewValue)` | Sets the value of Ip_Optional and also sets Ip_IsSet to true using move semantics.
`public inline void `[`ClearIp`](#structFRHAPI__CreateSupportLogRequest_1a8cc2d404ce52debdd151e83dcf5bcc41)`()` | Clears the value of Ip_Optional and sets Ip_IsSet to false.
`public inline bool `[`IsIpSet`](#structFRHAPI__CreateSupportLogRequest_1ac90c15d836b08305a7db0eec3737a9b6)`() const` | Checks whether Ip_Optional has been set.

### Members

#### `public FGuid `[`PersonId_Optional`](#structFRHAPI__CreateSupportLogRequest_1a3a7c1f7f56bc809058d66008d4f0063e) <a id="structFRHAPI__CreateSupportLogRequest_1a3a7c1f7f56bc809058d66008d4f0063e"></a>

Person ID to associate with the log entry.

#### `public bool `[`PersonId_IsSet`](#structFRHAPI__CreateSupportLogRequest_1a38e3a19235582c3bb22074dd62543fde) <a id="structFRHAPI__CreateSupportLogRequest_1a38e3a19235582c3bb22074dd62543fde"></a>

true if PersonId_Optional has been set to a value

#### `public FGuid `[`PlayerUuid_Optional`](#structFRHAPI__CreateSupportLogRequest_1aef63882fbbe3a2fa993340b7914ccc8a) <a id="structFRHAPI__CreateSupportLogRequest_1aef63882fbbe3a2fa993340b7914ccc8a"></a>

Player UUID to associate with the log entry.

#### `public bool `[`PlayerUuid_IsSet`](#structFRHAPI__CreateSupportLogRequest_1a227839b1183835912cf1033246e431fb) <a id="structFRHAPI__CreateSupportLogRequest_1a227839b1183835912cf1033246e431fb"></a>

true if PlayerUuid_Optional has been set to a value

#### `public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__CreateSupportLogRequest_1af8670a751de282be196632e37f8309b9) <a id="structFRHAPI__CreateSupportLogRequest_1af8670a751de282be196632e37f8309b9"></a>

Platform to associate with the log entry.

#### `public bool `[`Platform_IsSet`](#structFRHAPI__CreateSupportLogRequest_1a77f9be77c748f811c9b78f513acddebe) <a id="structFRHAPI__CreateSupportLogRequest_1a77f9be77c748f811c9b78f513acddebe"></a>

true if Platform_Optional has been set to a value

#### `public FString `[`PlatformUserId_Optional`](#structFRHAPI__CreateSupportLogRequest_1ae8b2c0c20f5b233dfa79f42923cc8adc) <a id="structFRHAPI__CreateSupportLogRequest_1ae8b2c0c20f5b233dfa79f42923cc8adc"></a>

Platform user ID to associate with the log entry.

#### `public bool `[`PlatformUserId_IsSet`](#structFRHAPI__CreateSupportLogRequest_1a0a3744b3edd39c700f1afee6588a09ef) <a id="structFRHAPI__CreateSupportLogRequest_1a0a3744b3edd39c700f1afee6588a09ef"></a>

true if PlatformUserId_Optional has been set to a value

#### `public FString `[`EventName`](#structFRHAPI__CreateSupportLogRequest_1a06bc9bd0a433c559a0d9fa05d6f2a65c) <a id="structFRHAPI__CreateSupportLogRequest_1a06bc9bd0a433c559a0d9fa05d6f2a65c"></a>

Name of the support event.

#### `public FString `[`EventDescription`](#structFRHAPI__CreateSupportLogRequest_1a73ec85afa049b99259b4b34a421dbd83) <a id="structFRHAPI__CreateSupportLogRequest_1a73ec85afa049b99259b4b34a421dbd83"></a>

Detailed description of the support action.

#### `public FString `[`SupportUsername_Optional`](#structFRHAPI__CreateSupportLogRequest_1a804fd890a83890cf4d3bb3fccae218bb) <a id="structFRHAPI__CreateSupportLogRequest_1a804fd890a83890cf4d3bb3fccae218bb"></a>

Username of the support agent.

#### `public bool `[`SupportUsername_IsSet`](#structFRHAPI__CreateSupportLogRequest_1a6776168428e8053461318411a10335f5) <a id="structFRHAPI__CreateSupportLogRequest_1a6776168428e8053461318411a10335f5"></a>

true if SupportUsername_Optional has been set to a value

#### `public FString `[`Ip_Optional`](#structFRHAPI__CreateSupportLogRequest_1ad28f447627a2e624c7017fe71af46c00) <a id="structFRHAPI__CreateSupportLogRequest_1ad28f447627a2e624c7017fe71af46c00"></a>

IP address where the action was performed.

#### `public bool `[`Ip_IsSet`](#structFRHAPI__CreateSupportLogRequest_1ab9e15ff9de2d8e6b457851ff733bc952) <a id="structFRHAPI__CreateSupportLogRequest_1ab9e15ff9de2d8e6b457851ff733bc952"></a>

true if Ip_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__CreateSupportLogRequest_1a4cd23b307977270f7dca33e569ce89e7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__CreateSupportLogRequest_1a4cd23b307977270f7dca33e569ce89e7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__CreateSupportLogRequest_1a4fe9b3848a96ac1e2976774dd044cc2e)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__CreateSupportLogRequest_1a4fe9b3848a96ac1e2976774dd044cc2e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPersonId`](#structFRHAPI__CreateSupportLogRequest_1a2d58bdaa3d883f4d056e8fd50c6993d2)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a2d58bdaa3d883f4d056e8fd50c6993d2"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__CreateSupportLogRequest_1a506bbc49b22fd9d7fcd512c03cdf7ad5)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1a506bbc49b22fd9d7fcd512c03cdf7ad5"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__CreateSupportLogRequest_1a095e2910bff989c31ebb098510b8b696)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1a095e2910bff989c31ebb098510b8b696"></a>

Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPersonId`](#structFRHAPI__CreateSupportLogRequest_1a3c308c964dd17cdba208d15cdf51bcce)`(FGuid & OutValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1a3c308c964dd17cdba208d15cdf51bcce"></a>

Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__CreateSupportLogRequest_1a5f45faffa6f21d76d9f0c5688c38098c)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a5f45faffa6f21d76d9f0c5688c38098c"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__CreateSupportLogRequest_1a9aae0729a530065284ded0dd6424d82e)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1a9aae0729a530065284ded0dd6424d82e"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPersonId`](#structFRHAPI__CreateSupportLogRequest_1a373db8332492db80d2c8fa3aae8647d7)`(const FGuid & NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1a373db8332492db80d2c8fa3aae8647d7"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.

#### `public inline void `[`SetPersonId`](#structFRHAPI__CreateSupportLogRequest_1a52798563bb33f34039520e3f9b6cc6ba)`(FGuid && NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1a52798563bb33f34039520e3f9b6cc6ba"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.

#### `public inline void `[`ClearPersonId`](#structFRHAPI__CreateSupportLogRequest_1a2c8e68a19e0da684c8ab0aca6fcdb03a)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a2c8e68a19e0da684c8ab0aca6fcdb03a"></a>

Clears the value of PersonId_Optional and sets PersonId_IsSet to false.

#### `public inline bool `[`IsPersonIdSet`](#structFRHAPI__CreateSupportLogRequest_1ae3b4d349aaf49b05792490153d251bc1)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1ae3b4d349aaf49b05792490153d251bc1"></a>

Checks whether PersonId_Optional has been set.

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1a1a60450be30f51e2f377c58e181d3663)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a1a60450be30f51e2f377c58e181d3663"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1a057fdec3cbd5a320959e6a26b816edda)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1a057fdec3cbd5a320959e6a26b816edda"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1a29c229ae11317e900dff3a06480d23af)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1a29c229ae11317e900dff3a06480d23af"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1afd79a09a7a98df596148cc9b3cbe4873)`(FGuid & OutValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1afd79a09a7a98df596148cc9b3cbe4873"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CreateSupportLogRequest_1a0128ae37bdd59447a9950e7146e1b4d0)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a0128ae37bdd59447a9950e7146e1b4d0"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CreateSupportLogRequest_1a9241cd752053969e9f01b4c498f8fbe6)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1a9241cd752053969e9f01b4c498f8fbe6"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1a7051481d510273839a847513875899c3)`(const FGuid & NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1a7051481d510273839a847513875899c3"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1a6ceb09691133ee27a2cb3d312eafc39e)`(FGuid && NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1a6ceb09691133ee27a2cb3d312eafc39e"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1ae081f21cba1070f287e9d5c756d84f28)`()` <a id="structFRHAPI__CreateSupportLogRequest_1ae081f21cba1070f287e9d5c756d84f28"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline bool `[`IsPlayerUuidSet`](#structFRHAPI__CreateSupportLogRequest_1aa0f1901254338e541e20597a6626c059)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1aa0f1901254338e541e20597a6626c059"></a>

Checks whether PlayerUuid_Optional has been set.

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateSupportLogRequest_1aaa84f8c538d564d2147b2dd82e7d76bb)`()` <a id="structFRHAPI__CreateSupportLogRequest_1aaa84f8c538d564d2147b2dd82e7d76bb"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateSupportLogRequest_1a8b0360ab7007576dee569c839cb5f28b)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1a8b0360ab7007576dee569c839cb5f28b"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateSupportLogRequest_1ad3d809621b5878ec192b77e3dd2b2453)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1ad3d809621b5878ec192b77e3dd2b2453"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatform`](#structFRHAPI__CreateSupportLogRequest_1a09bf73966d610f2eeefb09cb3c75f7d9)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1a09bf73966d610f2eeefb09cb3c75f7d9"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CreateSupportLogRequest_1a776118ef023c2a891a7991a9b2e3e821)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a776118ef023c2a891a7991a9b2e3e821"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CreateSupportLogRequest_1ad01e91c370f9ae942c51bc04821165c8)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1ad01e91c370f9ae942c51bc04821165c8"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatform`](#structFRHAPI__CreateSupportLogRequest_1ac585ec286ba8370f4b29d07522154b6d)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1ac585ec286ba8370f4b29d07522154b6d"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline void `[`SetPlatform`](#structFRHAPI__CreateSupportLogRequest_1a1175179a361d8ec2830b719cdac4c2d6)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1a1175179a361d8ec2830b719cdac4c2d6"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__CreateSupportLogRequest_1a2636045a68da22ac90f93576a1328c17)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a2636045a68da22ac90f93576a1328c17"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline bool `[`IsPlatformSet`](#structFRHAPI__CreateSupportLogRequest_1a07aa17f6596aba64dda3af1f689acdea)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1a07aa17f6596aba64dda3af1f689acdea"></a>

Checks whether Platform_Optional has been set.

#### `public inline FString & `[`GetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1a4e6ea491b7e2f86632e5f4fa2d45510f)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a4e6ea491b7e2f86632e5f4fa2d45510f"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1ae618badeaa320aedb99a98833f589a44)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1ae618badeaa320aedb99a98833f589a44"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1a1b26a9b975d101be20dee41543db95f7)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1a1b26a9b975d101be20dee41543db95f7"></a>

Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1a217fcd41a0ddf6e3b4cd98e2ccb36940)`(FString & OutValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1a217fcd41a0ddf6e3b4cd98e2ccb36940"></a>

Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__CreateSupportLogRequest_1a669ab5c1c5f9c220c89c845bbd5e1025)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a669ab5c1c5f9c220c89c845bbd5e1025"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__CreateSupportLogRequest_1a85a4fae6f86aa13e57f40e8cbf2190c0)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1a85a4fae6f86aa13e57f40e8cbf2190c0"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1aea96a2d545c5ee5261078e33bb3b346b)`(const FString & NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1aea96a2d545c5ee5261078e33bb3b346b"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.

#### `public inline void `[`SetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1acfbdc50f6b26c0a7f3f81cf5e1a8a2a3)`(FString && NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1acfbdc50f6b26c0a7f3f81cf5e1a8a2a3"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1a3bd03bc80494e02aa9e3a74315fb7900)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a3bd03bc80494e02aa9e3a74315fb7900"></a>

Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.

#### `public inline bool `[`IsPlatformUserIdSet`](#structFRHAPI__CreateSupportLogRequest_1adba290e7bb0568450d4284d110550718)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1adba290e7bb0568450d4284d110550718"></a>

Checks whether PlatformUserId_Optional has been set.

#### `public inline FString & `[`GetEventName`](#structFRHAPI__CreateSupportLogRequest_1a52bdb7255ef5b9ab531b38b3d96718a5)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a52bdb7255ef5b9ab531b38b3d96718a5"></a>

Gets the value of EventName.

#### `public inline const FString & `[`GetEventName`](#structFRHAPI__CreateSupportLogRequest_1a8f5985e24e04127c9d2d3c56585ab425)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1a8f5985e24e04127c9d2d3c56585ab425"></a>

Gets the value of EventName.

#### `public inline void `[`SetEventName`](#structFRHAPI__CreateSupportLogRequest_1a8384e6a09c5f5bd400359c189c2b2d0f)`(const FString & NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1a8384e6a09c5f5bd400359c189c2b2d0f"></a>

Sets the value of EventName.

#### `public inline void `[`SetEventName`](#structFRHAPI__CreateSupportLogRequest_1aeb0b9b995af8e8bfbac54d045320118b)`(FString && NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1aeb0b9b995af8e8bfbac54d045320118b"></a>

Sets the value of EventName using move semantics.

#### `public inline FString & `[`GetEventDescription`](#structFRHAPI__CreateSupportLogRequest_1a81c8640ce696e3e26902059fe10af661)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a81c8640ce696e3e26902059fe10af661"></a>

Gets the value of EventDescription.

#### `public inline const FString & `[`GetEventDescription`](#structFRHAPI__CreateSupportLogRequest_1a1a37198dd12f600441294f4b55e74550)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1a1a37198dd12f600441294f4b55e74550"></a>

Gets the value of EventDescription.

#### `public inline void `[`SetEventDescription`](#structFRHAPI__CreateSupportLogRequest_1a5a4b31aa41db268a1ef0f62105ad78f9)`(const FString & NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1a5a4b31aa41db268a1ef0f62105ad78f9"></a>

Sets the value of EventDescription.

#### `public inline void `[`SetEventDescription`](#structFRHAPI__CreateSupportLogRequest_1a0bcd3760f5599d9f03a2e2338dfe820f)`(FString && NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1a0bcd3760f5599d9f03a2e2338dfe820f"></a>

Sets the value of EventDescription using move semantics.

#### `public inline FString & `[`GetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1ad94c311021461b0ee83f5933dcb6f116)`()` <a id="structFRHAPI__CreateSupportLogRequest_1ad94c311021461b0ee83f5933dcb6f116"></a>

Gets the value of SupportUsername_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1a1fe54aff241cb94391bc9429b070a295)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1a1fe54aff241cb94391bc9429b070a295"></a>

Gets the value of SupportUsername_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1a6b752c2d4a7d4401f166771ed55635d9)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1a6b752c2d4a7d4401f166771ed55635d9"></a>

Gets the value of SupportUsername_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1af837f214fd011020fce221ebe3e7ebfb)`(FString & OutValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1af837f214fd011020fce221ebe3e7ebfb"></a>

Fills OutValue with the value of SupportUsername_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetSupportUsernameOrNull`](#structFRHAPI__CreateSupportLogRequest_1a99fbb2d9aa9debaf2663c8cac60a8006)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a99fbb2d9aa9debaf2663c8cac60a8006"></a>

Returns a pointer to SupportUsername_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetSupportUsernameOrNull`](#structFRHAPI__CreateSupportLogRequest_1a993739d3dea6175df72b1df530c15954)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1a993739d3dea6175df72b1df530c15954"></a>

Returns a pointer to SupportUsername_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1aa38a73f528f307db133187b2a3209fa0)`(const FString & NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1aa38a73f528f307db133187b2a3209fa0"></a>

Sets the value of SupportUsername_Optional and also sets SupportUsername_IsSet to true.

#### `public inline void `[`SetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1ae14ad51aaad4549b63b145ca2afb8b81)`(FString && NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1ae14ad51aaad4549b63b145ca2afb8b81"></a>

Sets the value of SupportUsername_Optional and also sets SupportUsername_IsSet to true using move semantics.

#### `public inline void `[`ClearSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1a2d7d82bd7f04826bc1b1b2639e172857)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a2d7d82bd7f04826bc1b1b2639e172857"></a>

Clears the value of SupportUsername_Optional and sets SupportUsername_IsSet to false.

#### `public inline bool `[`IsSupportUsernameSet`](#structFRHAPI__CreateSupportLogRequest_1ab4be8c109c6a54d883ec4e1dba61aece)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1ab4be8c109c6a54d883ec4e1dba61aece"></a>

Checks whether SupportUsername_Optional has been set.

#### `public inline FString & `[`GetIp`](#structFRHAPI__CreateSupportLogRequest_1a15266f9dfc09ed0c50c4ec3852b6dcfe)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a15266f9dfc09ed0c50c4ec3852b6dcfe"></a>

Gets the value of Ip_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetIp`](#structFRHAPI__CreateSupportLogRequest_1acba4c8a68762f8bf8f07ee519ecb0e85)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1acba4c8a68762f8bf8f07ee519ecb0e85"></a>

Gets the value of Ip_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetIp`](#structFRHAPI__CreateSupportLogRequest_1a7f0449afdf650c715ec27281aaa379a0)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1a7f0449afdf650c715ec27281aaa379a0"></a>

Gets the value of Ip_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetIp`](#structFRHAPI__CreateSupportLogRequest_1a1d717572165080ef1395ae90337e4947)`(FString & OutValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1a1d717572165080ef1395ae90337e4947"></a>

Fills OutValue with the value of Ip_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetIpOrNull`](#structFRHAPI__CreateSupportLogRequest_1a508281400b8bc5b677a414792513abaa)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a508281400b8bc5b677a414792513abaa"></a>

Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetIpOrNull`](#structFRHAPI__CreateSupportLogRequest_1a372a4cb47d6eea5a44cbd91b505a961c)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1a372a4cb47d6eea5a44cbd91b505a961c"></a>

Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetIp`](#structFRHAPI__CreateSupportLogRequest_1aece909f532ecbeebb5b1e685d4e60866)`(const FString & NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1aece909f532ecbeebb5b1e685d4e60866"></a>

Sets the value of Ip_Optional and also sets Ip_IsSet to true.

#### `public inline void `[`SetIp`](#structFRHAPI__CreateSupportLogRequest_1a69cecc12186ec30615d03a5ab0987c1c)`(FString && NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1a69cecc12186ec30615d03a5ab0987c1c"></a>

Sets the value of Ip_Optional and also sets Ip_IsSet to true using move semantics.

#### `public inline void `[`ClearIp`](#structFRHAPI__CreateSupportLogRequest_1a8cc2d404ce52debdd151e83dcf5bcc41)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a8cc2d404ce52debdd151e83dcf5bcc41"></a>

Clears the value of Ip_Optional and sets Ip_IsSet to false.

#### `public inline bool `[`IsIpSet`](#structFRHAPI__CreateSupportLogRequest_1ac90c15d836b08305a7db0eec3737a9b6)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1ac90c15d836b08305a7db0eec3737a9b6"></a>

Checks whether Ip_Optional has been set.

