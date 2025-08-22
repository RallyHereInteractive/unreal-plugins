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
`public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__CreateSupportLogRequest_1a7481ff7a5207062a2401e65316f5ba30)`()` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__CreateSupportLogRequest_1ac99a55596c1ed82e82ae5759fa371b9f)`() const` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__CreateSupportLogRequest_1ae9bee66fe78aff0dce45ea098ea2d36f)`(const FGuid & DefaultValue) const` | Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPersonId`](#structFRHAPI__CreateSupportLogRequest_1aa743759a3ff84e6803ba72070576c6ca)`(FGuid & OutValue) const` | Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__CreateSupportLogRequest_1a4c41b15a03b68fef0e86523967ce2218)`()` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__CreateSupportLogRequest_1a24418686069959ff5d858c7a5da7c231)`() const` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__CreateSupportLogRequest_1ae45bad05a4712b1dad0d6a9e9777b475)`(const FGuid & NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__CreateSupportLogRequest_1a16e1b01c7e32641b7f6f2a5fddf44d80)`(FGuid && NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.
`public inline void `[`ClearPersonId`](#structFRHAPI__CreateSupportLogRequest_1a2c8e68a19e0da684c8ab0aca6fcdb03a)`()` | Clears the value of PersonId_Optional and sets PersonId_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1a8b4f2a4154b827fd58c9d0cf1cadccec)`()` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1aa451dde463e525804cf9cef175025df2)`() const` | Gets the value of PlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1a9acc027c5e2433a1f517ccd50044497b)`(const FGuid & DefaultValue) const` | Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1ac43b23cbc95b8955a983a0ce6ac7f40f)`(FGuid & OutValue) const` | Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CreateSupportLogRequest_1ae3e3bbb403a8b661254af730cea21ce1)`()` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CreateSupportLogRequest_1aec693564206b1f4ab72fd8cef800a9da)`() const` | Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1a6c298ceb264f7223f302bbd0a0a8a30a)`(const FGuid & NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1aac84efbded2c029d6d575ae073230a87)`(FGuid && NewValue)` | Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1ae081f21cba1070f287e9d5c756d84f28)`()` | Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.
`public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateSupportLogRequest_1a94a22c5041b517a15e7fb1b50e7c24cd)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateSupportLogRequest_1a2da407a2ba3615635d6d17b218d7b052)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateSupportLogRequest_1a5da771c486e3361d8c7f4fcbe2eea78d)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__CreateSupportLogRequest_1aaebec9cc63f685221a56adf8420db726)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CreateSupportLogRequest_1aa9bdfd975c7ebd4d233085a310d760a5)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CreateSupportLogRequest_1ae8d51969b5d8dd48e3be811311689d65)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__CreateSupportLogRequest_1a7145336f0f566d86530e08c8ee5ef51f)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__CreateSupportLogRequest_1adb290922592b388d483eff289b42331f)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__CreateSupportLogRequest_1a2636045a68da22ac90f93576a1328c17)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1a82f4a11bc5cf34c29c21d0c530d38546)`()` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1a2f6f4fcd16abdb823bdd72c7d9e3f37f)`() const` | Gets the value of PlatformUserId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1a05b9c12a19bdfa2e2a5a3071cf7978b9)`(const FString & DefaultValue) const` | Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1a1df305e0843365b213d0d378e5b833a9)`(FString & OutValue) const` | Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__CreateSupportLogRequest_1ae7344e2badc41b9056942cfc9bf1b1a3)`()` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__CreateSupportLogRequest_1ab1b156c2d453974466249ae90428d1c7)`() const` | Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1a62d2e60451be9dd61036a85a07649667)`(const FString & NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1ab33b0da99f24e8b47bcf8e6c45ef63e4)`(FString && NewValue)` | Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1a3bd03bc80494e02aa9e3a74315fb7900)`()` | Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.
`public inline FORCEINLINE FString & `[`GetEventName`](#structFRHAPI__CreateSupportLogRequest_1aded8513c0dff74c58082726b4bd54146)`()` | Gets the value of EventName.
`public inline FORCEINLINE const FString & `[`GetEventName`](#structFRHAPI__CreateSupportLogRequest_1a33600ac15e15193c8710ce96654297e5)`() const` | Gets the value of EventName.
`public inline FORCEINLINE void `[`SetEventName`](#structFRHAPI__CreateSupportLogRequest_1a9ba5e5d68bfa85801125b6eed2d1baef)`(const FString & NewValue)` | Sets the value of EventName.
`public inline FORCEINLINE void `[`SetEventName`](#structFRHAPI__CreateSupportLogRequest_1ac09e18f55026aeb5f4aa9a24e0849a30)`(FString && NewValue)` | Sets the value of EventName using move semantics.
`public inline FORCEINLINE FString & `[`GetEventDescription`](#structFRHAPI__CreateSupportLogRequest_1a51e9c22f3dae05d006ead3497575e435)`()` | Gets the value of EventDescription.
`public inline FORCEINLINE const FString & `[`GetEventDescription`](#structFRHAPI__CreateSupportLogRequest_1a0ea128ad6a4629a0070327461de994e6)`() const` | Gets the value of EventDescription.
`public inline FORCEINLINE void `[`SetEventDescription`](#structFRHAPI__CreateSupportLogRequest_1af16f37b3bbc67051d7ecdab6af671b4d)`(const FString & NewValue)` | Sets the value of EventDescription.
`public inline FORCEINLINE void `[`SetEventDescription`](#structFRHAPI__CreateSupportLogRequest_1abd3d80f6a9d79e501939bfcc2e90c60a)`(FString && NewValue)` | Sets the value of EventDescription using move semantics.
`public inline FORCEINLINE FString & `[`GetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1ae9e3fc42c97064e094c8d08f46bc6081)`()` | Gets the value of SupportUsername_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1a0099a0707617d6fe22d0fe58c0d869ea)`() const` | Gets the value of SupportUsername_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1adb45c9bada11e927920781668ba5a77b)`(const FString & DefaultValue) const` | Gets the value of SupportUsername_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1ac30da347f975fa2aeeea472e418f5c1f)`(FString & OutValue) const` | Fills OutValue with the value of SupportUsername_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetSupportUsernameOrNull`](#structFRHAPI__CreateSupportLogRequest_1aa311b5f0872a3241c527248ee6f42e41)`()` | Returns a pointer to SupportUsername_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetSupportUsernameOrNull`](#structFRHAPI__CreateSupportLogRequest_1a8bc132876dfde46be322073b1c892f75)`() const` | Returns a pointer to SupportUsername_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1a372f802e5d2e258e84b71681f3d61aed)`(const FString & NewValue)` | Sets the value of SupportUsername_Optional and also sets SupportUsername_IsSet to true.
`public inline FORCEINLINE void `[`SetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1a8dd719bcf22feb9c5ce2600fe6b5ef52)`(FString && NewValue)` | Sets the value of SupportUsername_Optional and also sets SupportUsername_IsSet to true using move semantics.
`public inline void `[`ClearSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1a2d7d82bd7f04826bc1b1b2639e172857)`()` | Clears the value of SupportUsername_Optional and sets SupportUsername_IsSet to false.
`public inline FORCEINLINE FString & `[`GetIp`](#structFRHAPI__CreateSupportLogRequest_1a2dbed059a86f645ce4de0bd137757096)`()` | Gets the value of Ip_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetIp`](#structFRHAPI__CreateSupportLogRequest_1a7f2b3defc0b99808d17f72008dc41cb0)`() const` | Gets the value of Ip_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetIp`](#structFRHAPI__CreateSupportLogRequest_1ae028faf340fc9c7768d1c2259a462192)`(const FString & DefaultValue) const` | Gets the value of Ip_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetIp`](#structFRHAPI__CreateSupportLogRequest_1a57b66c4cf71a5448afa1d1ebab47c699)`(FString & OutValue) const` | Fills OutValue with the value of Ip_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetIpOrNull`](#structFRHAPI__CreateSupportLogRequest_1ab9d4cc40dd8b3555351b1df68222d53c)`()` | Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetIpOrNull`](#structFRHAPI__CreateSupportLogRequest_1a48db56f05e893a0812c21e23cc33024f)`() const` | Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetIp`](#structFRHAPI__CreateSupportLogRequest_1aa3824300689a534b1044c79aa962fb06)`(const FString & NewValue)` | Sets the value of Ip_Optional and also sets Ip_IsSet to true.
`public inline FORCEINLINE void `[`SetIp`](#structFRHAPI__CreateSupportLogRequest_1a7d7b1b4ddd8f65ab3f40da9af427c96e)`(FString && NewValue)` | Sets the value of Ip_Optional and also sets Ip_IsSet to true using move semantics.
`public inline void `[`ClearIp`](#structFRHAPI__CreateSupportLogRequest_1a8cc2d404ce52debdd151e83dcf5bcc41)`()` | Clears the value of Ip_Optional and sets Ip_IsSet to false.

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

#### `public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__CreateSupportLogRequest_1a7481ff7a5207062a2401e65316f5ba30)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a7481ff7a5207062a2401e65316f5ba30"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__CreateSupportLogRequest_1ac99a55596c1ed82e82ae5759fa371b9f)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1ac99a55596c1ed82e82ae5759fa371b9f"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__CreateSupportLogRequest_1ae9bee66fe78aff0dce45ea098ea2d36f)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1ae9bee66fe78aff0dce45ea098ea2d36f"></a>

Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPersonId`](#structFRHAPI__CreateSupportLogRequest_1aa743759a3ff84e6803ba72070576c6ca)`(FGuid & OutValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1aa743759a3ff84e6803ba72070576c6ca"></a>

Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__CreateSupportLogRequest_1a4c41b15a03b68fef0e86523967ce2218)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a4c41b15a03b68fef0e86523967ce2218"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__CreateSupportLogRequest_1a24418686069959ff5d858c7a5da7c231)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1a24418686069959ff5d858c7a5da7c231"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__CreateSupportLogRequest_1ae45bad05a4712b1dad0d6a9e9777b475)`(const FGuid & NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1ae45bad05a4712b1dad0d6a9e9777b475"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__CreateSupportLogRequest_1a16e1b01c7e32641b7f6f2a5fddf44d80)`(FGuid && NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1a16e1b01c7e32641b7f6f2a5fddf44d80"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.

#### `public inline void `[`ClearPersonId`](#structFRHAPI__CreateSupportLogRequest_1a2c8e68a19e0da684c8ab0aca6fcdb03a)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a2c8e68a19e0da684c8ab0aca6fcdb03a"></a>

Clears the value of PersonId_Optional and sets PersonId_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1a8b4f2a4154b827fd58c9d0cf1cadccec)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a8b4f2a4154b827fd58c9d0cf1cadccec"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1aa451dde463e525804cf9cef175025df2)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1aa451dde463e525804cf9cef175025df2"></a>

Gets the value of PlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1a9acc027c5e2433a1f517ccd50044497b)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1a9acc027c5e2433a1f517ccd50044497b"></a>

Gets the value of PlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1ac43b23cbc95b8955a983a0ce6ac7f40f)`(FGuid & OutValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1ac43b23cbc95b8955a983a0ce6ac7f40f"></a>

Fills OutValue with the value of PlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CreateSupportLogRequest_1ae3e3bbb403a8b661254af730cea21ce1)`()` <a id="structFRHAPI__CreateSupportLogRequest_1ae3e3bbb403a8b661254af730cea21ce1"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetPlayerUuidOrNull`](#structFRHAPI__CreateSupportLogRequest_1aec693564206b1f4ab72fd8cef800a9da)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1aec693564206b1f4ab72fd8cef800a9da"></a>

Returns a pointer to PlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1a6c298ceb264f7223f302bbd0a0a8a30a)`(const FGuid & NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1a6c298ceb264f7223f302bbd0a0a8a30a"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1aac84efbded2c029d6d575ae073230a87)`(FGuid && NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1aac84efbded2c029d6d575ae073230a87"></a>

Sets the value of PlayerUuid_Optional and also sets PlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuid`](#structFRHAPI__CreateSupportLogRequest_1ae081f21cba1070f287e9d5c756d84f28)`()` <a id="structFRHAPI__CreateSupportLogRequest_1ae081f21cba1070f287e9d5c756d84f28"></a>

Clears the value of PlayerUuid_Optional and sets PlayerUuid_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateSupportLogRequest_1a94a22c5041b517a15e7fb1b50e7c24cd)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a94a22c5041b517a15e7fb1b50e7c24cd"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateSupportLogRequest_1a2da407a2ba3615635d6d17b218d7b052)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1a2da407a2ba3615635d6d17b218d7b052"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__CreateSupportLogRequest_1a5da771c486e3361d8c7f4fcbe2eea78d)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1a5da771c486e3361d8c7f4fcbe2eea78d"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__CreateSupportLogRequest_1aaebec9cc63f685221a56adf8420db726)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1aaebec9cc63f685221a56adf8420db726"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CreateSupportLogRequest_1aa9bdfd975c7ebd4d233085a310d760a5)`()` <a id="structFRHAPI__CreateSupportLogRequest_1aa9bdfd975c7ebd4d233085a310d760a5"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__CreateSupportLogRequest_1ae8d51969b5d8dd48e3be811311689d65)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1ae8d51969b5d8dd48e3be811311689d65"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__CreateSupportLogRequest_1a7145336f0f566d86530e08c8ee5ef51f)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1a7145336f0f566d86530e08c8ee5ef51f"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__CreateSupportLogRequest_1adb290922592b388d483eff289b42331f)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1adb290922592b388d483eff289b42331f"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__CreateSupportLogRequest_1a2636045a68da22ac90f93576a1328c17)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a2636045a68da22ac90f93576a1328c17"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1a82f4a11bc5cf34c29c21d0c530d38546)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a82f4a11bc5cf34c29c21d0c530d38546"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1a2f6f4fcd16abdb823bdd72c7d9e3f37f)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1a2f6f4fcd16abdb823bdd72c7d9e3f37f"></a>

Gets the value of PlatformUserId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1a05b9c12a19bdfa2e2a5a3071cf7978b9)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1a05b9c12a19bdfa2e2a5a3071cf7978b9"></a>

Gets the value of PlatformUserId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1a1df305e0843365b213d0d378e5b833a9)`(FString & OutValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1a1df305e0843365b213d0d378e5b833a9"></a>

Fills OutValue with the value of PlatformUserId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__CreateSupportLogRequest_1ae7344e2badc41b9056942cfc9bf1b1a3)`()` <a id="structFRHAPI__CreateSupportLogRequest_1ae7344e2badc41b9056942cfc9bf1b1a3"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPlatformUserIdOrNull`](#structFRHAPI__CreateSupportLogRequest_1ab1b156c2d453974466249ae90428d1c7)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1ab1b156c2d453974466249ae90428d1c7"></a>

Returns a pointer to PlatformUserId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1a62d2e60451be9dd61036a85a07649667)`(const FString & NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1a62d2e60451be9dd61036a85a07649667"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1ab33b0da99f24e8b47bcf8e6c45ef63e4)`(FString && NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1ab33b0da99f24e8b47bcf8e6c45ef63e4"></a>

Sets the value of PlatformUserId_Optional and also sets PlatformUserId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformUserId`](#structFRHAPI__CreateSupportLogRequest_1a3bd03bc80494e02aa9e3a74315fb7900)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a3bd03bc80494e02aa9e3a74315fb7900"></a>

Clears the value of PlatformUserId_Optional and sets PlatformUserId_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetEventName`](#structFRHAPI__CreateSupportLogRequest_1aded8513c0dff74c58082726b4bd54146)`()` <a id="structFRHAPI__CreateSupportLogRequest_1aded8513c0dff74c58082726b4bd54146"></a>

Gets the value of EventName.

#### `public inline FORCEINLINE const FString & `[`GetEventName`](#structFRHAPI__CreateSupportLogRequest_1a33600ac15e15193c8710ce96654297e5)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1a33600ac15e15193c8710ce96654297e5"></a>

Gets the value of EventName.

#### `public inline FORCEINLINE void `[`SetEventName`](#structFRHAPI__CreateSupportLogRequest_1a9ba5e5d68bfa85801125b6eed2d1baef)`(const FString & NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1a9ba5e5d68bfa85801125b6eed2d1baef"></a>

Sets the value of EventName.

#### `public inline FORCEINLINE void `[`SetEventName`](#structFRHAPI__CreateSupportLogRequest_1ac09e18f55026aeb5f4aa9a24e0849a30)`(FString && NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1ac09e18f55026aeb5f4aa9a24e0849a30"></a>

Sets the value of EventName using move semantics.

#### `public inline FORCEINLINE FString & `[`GetEventDescription`](#structFRHAPI__CreateSupportLogRequest_1a51e9c22f3dae05d006ead3497575e435)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a51e9c22f3dae05d006ead3497575e435"></a>

Gets the value of EventDescription.

#### `public inline FORCEINLINE const FString & `[`GetEventDescription`](#structFRHAPI__CreateSupportLogRequest_1a0ea128ad6a4629a0070327461de994e6)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1a0ea128ad6a4629a0070327461de994e6"></a>

Gets the value of EventDescription.

#### `public inline FORCEINLINE void `[`SetEventDescription`](#structFRHAPI__CreateSupportLogRequest_1af16f37b3bbc67051d7ecdab6af671b4d)`(const FString & NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1af16f37b3bbc67051d7ecdab6af671b4d"></a>

Sets the value of EventDescription.

#### `public inline FORCEINLINE void `[`SetEventDescription`](#structFRHAPI__CreateSupportLogRequest_1abd3d80f6a9d79e501939bfcc2e90c60a)`(FString && NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1abd3d80f6a9d79e501939bfcc2e90c60a"></a>

Sets the value of EventDescription using move semantics.

#### `public inline FORCEINLINE FString & `[`GetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1ae9e3fc42c97064e094c8d08f46bc6081)`()` <a id="structFRHAPI__CreateSupportLogRequest_1ae9e3fc42c97064e094c8d08f46bc6081"></a>

Gets the value of SupportUsername_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1a0099a0707617d6fe22d0fe58c0d869ea)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1a0099a0707617d6fe22d0fe58c0d869ea"></a>

Gets the value of SupportUsername_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1adb45c9bada11e927920781668ba5a77b)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1adb45c9bada11e927920781668ba5a77b"></a>

Gets the value of SupportUsername_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1ac30da347f975fa2aeeea472e418f5c1f)`(FString & OutValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1ac30da347f975fa2aeeea472e418f5c1f"></a>

Fills OutValue with the value of SupportUsername_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetSupportUsernameOrNull`](#structFRHAPI__CreateSupportLogRequest_1aa311b5f0872a3241c527248ee6f42e41)`()` <a id="structFRHAPI__CreateSupportLogRequest_1aa311b5f0872a3241c527248ee6f42e41"></a>

Returns a pointer to SupportUsername_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetSupportUsernameOrNull`](#structFRHAPI__CreateSupportLogRequest_1a8bc132876dfde46be322073b1c892f75)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1a8bc132876dfde46be322073b1c892f75"></a>

Returns a pointer to SupportUsername_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1a372f802e5d2e258e84b71681f3d61aed)`(const FString & NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1a372f802e5d2e258e84b71681f3d61aed"></a>

Sets the value of SupportUsername_Optional and also sets SupportUsername_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1a8dd719bcf22feb9c5ce2600fe6b5ef52)`(FString && NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1a8dd719bcf22feb9c5ce2600fe6b5ef52"></a>

Sets the value of SupportUsername_Optional and also sets SupportUsername_IsSet to true using move semantics.

#### `public inline void `[`ClearSupportUsername`](#structFRHAPI__CreateSupportLogRequest_1a2d7d82bd7f04826bc1b1b2639e172857)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a2d7d82bd7f04826bc1b1b2639e172857"></a>

Clears the value of SupportUsername_Optional and sets SupportUsername_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetIp`](#structFRHAPI__CreateSupportLogRequest_1a2dbed059a86f645ce4de0bd137757096)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a2dbed059a86f645ce4de0bd137757096"></a>

Gets the value of Ip_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetIp`](#structFRHAPI__CreateSupportLogRequest_1a7f2b3defc0b99808d17f72008dc41cb0)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1a7f2b3defc0b99808d17f72008dc41cb0"></a>

Gets the value of Ip_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetIp`](#structFRHAPI__CreateSupportLogRequest_1ae028faf340fc9c7768d1c2259a462192)`(const FString & DefaultValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1ae028faf340fc9c7768d1c2259a462192"></a>

Gets the value of Ip_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetIp`](#structFRHAPI__CreateSupportLogRequest_1a57b66c4cf71a5448afa1d1ebab47c699)`(FString & OutValue) const` <a id="structFRHAPI__CreateSupportLogRequest_1a57b66c4cf71a5448afa1d1ebab47c699"></a>

Fills OutValue with the value of Ip_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetIpOrNull`](#structFRHAPI__CreateSupportLogRequest_1ab9d4cc40dd8b3555351b1df68222d53c)`()` <a id="structFRHAPI__CreateSupportLogRequest_1ab9d4cc40dd8b3555351b1df68222d53c"></a>

Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetIpOrNull`](#structFRHAPI__CreateSupportLogRequest_1a48db56f05e893a0812c21e23cc33024f)`() const` <a id="structFRHAPI__CreateSupportLogRequest_1a48db56f05e893a0812c21e23cc33024f"></a>

Returns a pointer to Ip_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetIp`](#structFRHAPI__CreateSupportLogRequest_1aa3824300689a534b1044c79aa962fb06)`(const FString & NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1aa3824300689a534b1044c79aa962fb06"></a>

Sets the value of Ip_Optional and also sets Ip_IsSet to true.

#### `public inline FORCEINLINE void `[`SetIp`](#structFRHAPI__CreateSupportLogRequest_1a7d7b1b4ddd8f65ab3f40da9af427c96e)`(FString && NewValue)` <a id="structFRHAPI__CreateSupportLogRequest_1a7d7b1b4ddd8f65ab3f40da9af427c96e"></a>

Sets the value of Ip_Optional and also sets Ip_IsSet to true using move semantics.

#### `public inline void `[`ClearIp`](#structFRHAPI__CreateSupportLogRequest_1a8cc2d404ce52debdd151e83dcf5bcc41)`()` <a id="structFRHAPI__CreateSupportLogRequest_1a8cc2d404ce52debdd151e83dcf5bcc41"></a>

Clears the value of Ip_Optional and sets Ip_IsSet to false.

