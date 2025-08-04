---
title: RHAPI_PortalUserInfo
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PortalUserInfo`](#structFRHAPI__PortalUserInfo) | Portal user info.

## struct `FRHAPI_PortalUserInfo` <a id="structFRHAPI__PortalUserInfo"></a>

```
struct FRHAPI_PortalUserInfo
  : public FRHAPI_Model
```

Portal user info.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_Platform `[`Platform`](#structFRHAPI__PortalUserInfo_1aa73e914e330ab525ca2662631fe1cc06) | Platform for the user.
`public ERHAPI_DependenciesSchemasPortal `[`PortalId`](#structFRHAPI__PortalUserInfo_1af0233dbd7f509062dcf36313611ea286) | Portal ID. *DEPRECATED* use `platform` instead.
`public FString `[`PlatformEnvironment_Optional`](#structFRHAPI__PortalUserInfo_1a20d9613e04d25b1cd6178923b9f7dcff) | Which of the platform's environments was this user info from? For Xbox, this is sandbox. For PSN, this is sp-int/prod-qa/np. For Nintendo, this is jd1/dd1/dp1/sd1/sp1/lp1.
`public bool `[`PlatformEnvironment_IsSet`](#structFRHAPI__PortalUserInfo_1a7c250bd9295d1405049d9138397e4621) | true if PlatformEnvironment_Optional has been set to a value
`public FString `[`PortalUserId`](#structFRHAPI__PortalUserInfo_1a6733dd0ddc41200cf750f32de0b83dab) | Platform User ID.
`public FString `[`DisplayName`](#structFRHAPI__PortalUserInfo_1a0ba620f7ad0e76fa03651b52221672d0) | Display name.
`public ERHAPI_DeviceType `[`DeviceType_Optional`](#structFRHAPI__PortalUserInfo_1aa45110e5fcd50bfaf310fcec1caa6a77) | Platform-verified device type of the login.
`public bool `[`DeviceType_IsSet`](#structFRHAPI__PortalUserInfo_1a9048188b2de7d1fd40a98a21f30e99d4) | true if DeviceType_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PortalUserInfo_1a0ca5098c9ceb1d32639907161ac5dc8c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PortalUserInfo_1a359469aa1262b73b44658af2b667dbf5)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserInfo_1ad41a0d6e99e2d82c6fdf761ac93e3936)`()` | Gets the value of Platform.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserInfo_1a76f6dfc3cbeb3911cff00045a3ce53d6)`() const` | Gets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PortalUserInfo_1a44074732910033daa094db3801af9844)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PortalUserInfo_1a61094c7e45f7523129045ea51fd10f66)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.
`public inline ERHAPI_DependenciesSchemasPortal & `[`GetPortalId`](#structFRHAPI__PortalUserInfo_1aabcfcb9a23450baf715f0e796f910b8e)`()` | Gets the value of PortalId.
`public inline const ERHAPI_DependenciesSchemasPortal & `[`GetPortalId`](#structFRHAPI__PortalUserInfo_1a1aad331e6dc529ef57e8c35ca3107265)`() const` | Gets the value of PortalId.
`public inline void `[`SetPortalId`](#structFRHAPI__PortalUserInfo_1a4a5ff208210acd2fb87fa780480ab9c9)`(const ERHAPI_DependenciesSchemasPortal & NewValue)` | Sets the value of PortalId.
`public inline void `[`SetPortalId`](#structFRHAPI__PortalUserInfo_1a5c46064ea43abd217be0f9dd7a08083a)`(ERHAPI_DependenciesSchemasPortal && NewValue)` | Sets the value of PortalId using move semantics.
`public inline FString & `[`GetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a1d955f73bc71a6b9a900182a8e3a8924)`()` | Gets the value of PlatformEnvironment_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a30d75f77643fbc277098171bdf2ed03d)`() const` | Gets the value of PlatformEnvironment_Optional, regardless of it having been set.
`public inline const FString & `[`GetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a74a1a597fd7ea6b440c9f61e8bc84212)`(const FString & DefaultValue) const` | Gets the value of PlatformEnvironment_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a39d0b910d9e3aea55b77521ae8c35d68)`(FString & OutValue) const` | Fills OutValue with the value of PlatformEnvironment_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetPlatformEnvironmentOrNull`](#structFRHAPI__PortalUserInfo_1a2fc438884f608e144eb5b02aa63c0e27)`()` | Returns a pointer to PlatformEnvironment_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetPlatformEnvironmentOrNull`](#structFRHAPI__PortalUserInfo_1a0ec5243c88437514e46a1af4a6559203)`() const` | Returns a pointer to PlatformEnvironment_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a1c8128229812eae1961b2a591dd91166)`(const FString & NewValue)` | Sets the value of PlatformEnvironment_Optional and also sets PlatformEnvironment_IsSet to true.
`public inline void `[`SetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a587e46838fee64d5f5fef9e81f4430cc)`(FString && NewValue)` | Sets the value of PlatformEnvironment_Optional and also sets PlatformEnvironment_IsSet to true using move semantics.
`public inline void `[`ClearPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a6bddf477ffa68753c4e289d8ce4f7c4e)`()` | Clears the value of PlatformEnvironment_Optional and sets PlatformEnvironment_IsSet to false.
`public inline bool `[`IsPlatformEnvironmentSet`](#structFRHAPI__PortalUserInfo_1ab0a7a8fcd3be4a719fee738b87031478)`() const` | Checks whether PlatformEnvironment_Optional has been set.
`public inline FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserInfo_1aea9f4496fa8a28c2e41153222905c356)`()` | Gets the value of PortalUserId.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserInfo_1aee355d8df70f1c64af4feeeb3f083ee1)`() const` | Gets the value of PortalUserId.
`public inline void `[`SetPortalUserId`](#structFRHAPI__PortalUserInfo_1a78a2bd60a18f0ad956e631568194185b)`(const FString & NewValue)` | Sets the value of PortalUserId.
`public inline void `[`SetPortalUserId`](#structFRHAPI__PortalUserInfo_1a57bc630ea606f0e717fa79b2d73e0cb5)`(FString && NewValue)` | Sets the value of PortalUserId using move semantics.
`public inline FString & `[`GetDisplayName`](#structFRHAPI__PortalUserInfo_1a6dc192d01c0a0eef9bea5543389fdf08)`()` | Gets the value of DisplayName.
`public inline const FString & `[`GetDisplayName`](#structFRHAPI__PortalUserInfo_1afc20c3f325d0b68491582847ff000756)`() const` | Gets the value of DisplayName.
`public inline void `[`SetDisplayName`](#structFRHAPI__PortalUserInfo_1a576242ed5ef69ebd695b8d16224de5e3)`(const FString & NewValue)` | Sets the value of DisplayName.
`public inline void `[`SetDisplayName`](#structFRHAPI__PortalUserInfo_1a081355b13257ab48967dfe0c9ab8f3c2)`(FString && NewValue)` | Sets the value of DisplayName using move semantics.
`public inline ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1a04c52ad7fae20ca4a8890d7f1a05826c)`()` | Gets the value of DeviceType_Optional, regardless of it having been set.
`public inline const ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1a16bcbd488fa9b69fa1a53685bbf7f13b)`() const` | Gets the value of DeviceType_Optional, regardless of it having been set.
`public inline const ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1a15cd180c25e472b31aa87c9f511a3de3)`(const ERHAPI_DeviceType & DefaultValue) const` | Gets the value of DeviceType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1a576b999330fe1e647e976301d1a112fd)`(ERHAPI_DeviceType & OutValue) const` | Fills OutValue with the value of DeviceType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_DeviceType * `[`GetDeviceTypeOrNull`](#structFRHAPI__PortalUserInfo_1a7c37f4ae6ac571f798a6b417309851c2)`()` | Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_DeviceType * `[`GetDeviceTypeOrNull`](#structFRHAPI__PortalUserInfo_1aa4f38a741a70f2ddd2f006dfd4e2a0c6)`() const` | Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDeviceType`](#structFRHAPI__PortalUserInfo_1adeaa2b041d684be51b2115c4ca9cc2d2)`(const ERHAPI_DeviceType & NewValue)` | Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true.
`public inline void `[`SetDeviceType`](#structFRHAPI__PortalUserInfo_1ada255c5a642eecefb1681dc8957bc847)`(ERHAPI_DeviceType && NewValue)` | Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true using move semantics.
`public inline void `[`ClearDeviceType`](#structFRHAPI__PortalUserInfo_1a80537c78f0e6df5473eb5d852fe03c20)`()` | Clears the value of DeviceType_Optional and sets DeviceType_IsSet to false.
`public inline bool `[`IsDeviceTypeSet`](#structFRHAPI__PortalUserInfo_1a54ed343449be7733cd8e8f396be8de37)`() const` | Checks whether DeviceType_Optional has been set.

### Members

#### `public ERHAPI_Platform `[`Platform`](#structFRHAPI__PortalUserInfo_1aa73e914e330ab525ca2662631fe1cc06) <a id="structFRHAPI__PortalUserInfo_1aa73e914e330ab525ca2662631fe1cc06"></a>

Platform for the user.

#### `public ERHAPI_DependenciesSchemasPortal `[`PortalId`](#structFRHAPI__PortalUserInfo_1af0233dbd7f509062dcf36313611ea286) <a id="structFRHAPI__PortalUserInfo_1af0233dbd7f509062dcf36313611ea286"></a>

Portal ID. *DEPRECATED* use `platform` instead.

#### `public FString `[`PlatformEnvironment_Optional`](#structFRHAPI__PortalUserInfo_1a20d9613e04d25b1cd6178923b9f7dcff) <a id="structFRHAPI__PortalUserInfo_1a20d9613e04d25b1cd6178923b9f7dcff"></a>

Which of the platform's environments was this user info from? For Xbox, this is sandbox. For PSN, this is sp-int/prod-qa/np. For Nintendo, this is jd1/dd1/dp1/sd1/sp1/lp1.

#### `public bool `[`PlatformEnvironment_IsSet`](#structFRHAPI__PortalUserInfo_1a7c250bd9295d1405049d9138397e4621) <a id="structFRHAPI__PortalUserInfo_1a7c250bd9295d1405049d9138397e4621"></a>

true if PlatformEnvironment_Optional has been set to a value

#### `public FString `[`PortalUserId`](#structFRHAPI__PortalUserInfo_1a6733dd0ddc41200cf750f32de0b83dab) <a id="structFRHAPI__PortalUserInfo_1a6733dd0ddc41200cf750f32de0b83dab"></a>

Platform User ID.

#### `public FString `[`DisplayName`](#structFRHAPI__PortalUserInfo_1a0ba620f7ad0e76fa03651b52221672d0) <a id="structFRHAPI__PortalUserInfo_1a0ba620f7ad0e76fa03651b52221672d0"></a>

Display name.

#### `public ERHAPI_DeviceType `[`DeviceType_Optional`](#structFRHAPI__PortalUserInfo_1aa45110e5fcd50bfaf310fcec1caa6a77) <a id="structFRHAPI__PortalUserInfo_1aa45110e5fcd50bfaf310fcec1caa6a77"></a>

Platform-verified device type of the login.

#### `public bool `[`DeviceType_IsSet`](#structFRHAPI__PortalUserInfo_1a9048188b2de7d1fd40a98a21f30e99d4) <a id="structFRHAPI__PortalUserInfo_1a9048188b2de7d1fd40a98a21f30e99d4"></a>

true if DeviceType_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PortalUserInfo_1a0ca5098c9ceb1d32639907161ac5dc8c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PortalUserInfo_1a0ca5098c9ceb1d32639907161ac5dc8c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PortalUserInfo_1a359469aa1262b73b44658af2b667dbf5)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PortalUserInfo_1a359469aa1262b73b44658af2b667dbf5"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserInfo_1ad41a0d6e99e2d82c6fdf761ac93e3936)`()` <a id="structFRHAPI__PortalUserInfo_1ad41a0d6e99e2d82c6fdf761ac93e3936"></a>

Gets the value of Platform.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserInfo_1a76f6dfc3cbeb3911cff00045a3ce53d6)`() const` <a id="structFRHAPI__PortalUserInfo_1a76f6dfc3cbeb3911cff00045a3ce53d6"></a>

Gets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PortalUserInfo_1a44074732910033daa094db3801af9844)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PortalUserInfo_1a44074732910033daa094db3801af9844"></a>

Sets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PortalUserInfo_1a61094c7e45f7523129045ea51fd10f66)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PortalUserInfo_1a61094c7e45f7523129045ea51fd10f66"></a>

Sets the value of Platform using move semantics.

#### `public inline ERHAPI_DependenciesSchemasPortal & `[`GetPortalId`](#structFRHAPI__PortalUserInfo_1aabcfcb9a23450baf715f0e796f910b8e)`()` <a id="structFRHAPI__PortalUserInfo_1aabcfcb9a23450baf715f0e796f910b8e"></a>

Gets the value of PortalId.

#### `public inline const ERHAPI_DependenciesSchemasPortal & `[`GetPortalId`](#structFRHAPI__PortalUserInfo_1a1aad331e6dc529ef57e8c35ca3107265)`() const` <a id="structFRHAPI__PortalUserInfo_1a1aad331e6dc529ef57e8c35ca3107265"></a>

Gets the value of PortalId.

#### `public inline void `[`SetPortalId`](#structFRHAPI__PortalUserInfo_1a4a5ff208210acd2fb87fa780480ab9c9)`(const ERHAPI_DependenciesSchemasPortal & NewValue)` <a id="structFRHAPI__PortalUserInfo_1a4a5ff208210acd2fb87fa780480ab9c9"></a>

Sets the value of PortalId.

#### `public inline void `[`SetPortalId`](#structFRHAPI__PortalUserInfo_1a5c46064ea43abd217be0f9dd7a08083a)`(ERHAPI_DependenciesSchemasPortal && NewValue)` <a id="structFRHAPI__PortalUserInfo_1a5c46064ea43abd217be0f9dd7a08083a"></a>

Sets the value of PortalId using move semantics.

#### `public inline FString & `[`GetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a1d955f73bc71a6b9a900182a8e3a8924)`()` <a id="structFRHAPI__PortalUserInfo_1a1d955f73bc71a6b9a900182a8e3a8924"></a>

Gets the value of PlatformEnvironment_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a30d75f77643fbc277098171bdf2ed03d)`() const` <a id="structFRHAPI__PortalUserInfo_1a30d75f77643fbc277098171bdf2ed03d"></a>

Gets the value of PlatformEnvironment_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a74a1a597fd7ea6b440c9f61e8bc84212)`(const FString & DefaultValue) const` <a id="structFRHAPI__PortalUserInfo_1a74a1a597fd7ea6b440c9f61e8bc84212"></a>

Gets the value of PlatformEnvironment_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a39d0b910d9e3aea55b77521ae8c35d68)`(FString & OutValue) const` <a id="structFRHAPI__PortalUserInfo_1a39d0b910d9e3aea55b77521ae8c35d68"></a>

Fills OutValue with the value of PlatformEnvironment_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetPlatformEnvironmentOrNull`](#structFRHAPI__PortalUserInfo_1a2fc438884f608e144eb5b02aa63c0e27)`()` <a id="structFRHAPI__PortalUserInfo_1a2fc438884f608e144eb5b02aa63c0e27"></a>

Returns a pointer to PlatformEnvironment_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetPlatformEnvironmentOrNull`](#structFRHAPI__PortalUserInfo_1a0ec5243c88437514e46a1af4a6559203)`() const` <a id="structFRHAPI__PortalUserInfo_1a0ec5243c88437514e46a1af4a6559203"></a>

Returns a pointer to PlatformEnvironment_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a1c8128229812eae1961b2a591dd91166)`(const FString & NewValue)` <a id="structFRHAPI__PortalUserInfo_1a1c8128229812eae1961b2a591dd91166"></a>

Sets the value of PlatformEnvironment_Optional and also sets PlatformEnvironment_IsSet to true.

#### `public inline void `[`SetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a587e46838fee64d5f5fef9e81f4430cc)`(FString && NewValue)` <a id="structFRHAPI__PortalUserInfo_1a587e46838fee64d5f5fef9e81f4430cc"></a>

Sets the value of PlatformEnvironment_Optional and also sets PlatformEnvironment_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a6bddf477ffa68753c4e289d8ce4f7c4e)`()` <a id="structFRHAPI__PortalUserInfo_1a6bddf477ffa68753c4e289d8ce4f7c4e"></a>

Clears the value of PlatformEnvironment_Optional and sets PlatformEnvironment_IsSet to false.

#### `public inline bool `[`IsPlatformEnvironmentSet`](#structFRHAPI__PortalUserInfo_1ab0a7a8fcd3be4a719fee738b87031478)`() const` <a id="structFRHAPI__PortalUserInfo_1ab0a7a8fcd3be4a719fee738b87031478"></a>

Checks whether PlatformEnvironment_Optional has been set.

#### `public inline FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserInfo_1aea9f4496fa8a28c2e41153222905c356)`()` <a id="structFRHAPI__PortalUserInfo_1aea9f4496fa8a28c2e41153222905c356"></a>

Gets the value of PortalUserId.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserInfo_1aee355d8df70f1c64af4feeeb3f083ee1)`() const` <a id="structFRHAPI__PortalUserInfo_1aee355d8df70f1c64af4feeeb3f083ee1"></a>

Gets the value of PortalUserId.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__PortalUserInfo_1a78a2bd60a18f0ad956e631568194185b)`(const FString & NewValue)` <a id="structFRHAPI__PortalUserInfo_1a78a2bd60a18f0ad956e631568194185b"></a>

Sets the value of PortalUserId.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__PortalUserInfo_1a57bc630ea606f0e717fa79b2d73e0cb5)`(FString && NewValue)` <a id="structFRHAPI__PortalUserInfo_1a57bc630ea606f0e717fa79b2d73e0cb5"></a>

Sets the value of PortalUserId using move semantics.

#### `public inline FString & `[`GetDisplayName`](#structFRHAPI__PortalUserInfo_1a6dc192d01c0a0eef9bea5543389fdf08)`()` <a id="structFRHAPI__PortalUserInfo_1a6dc192d01c0a0eef9bea5543389fdf08"></a>

Gets the value of DisplayName.

#### `public inline const FString & `[`GetDisplayName`](#structFRHAPI__PortalUserInfo_1afc20c3f325d0b68491582847ff000756)`() const` <a id="structFRHAPI__PortalUserInfo_1afc20c3f325d0b68491582847ff000756"></a>

Gets the value of DisplayName.

#### `public inline void `[`SetDisplayName`](#structFRHAPI__PortalUserInfo_1a576242ed5ef69ebd695b8d16224de5e3)`(const FString & NewValue)` <a id="structFRHAPI__PortalUserInfo_1a576242ed5ef69ebd695b8d16224de5e3"></a>

Sets the value of DisplayName.

#### `public inline void `[`SetDisplayName`](#structFRHAPI__PortalUserInfo_1a081355b13257ab48967dfe0c9ab8f3c2)`(FString && NewValue)` <a id="structFRHAPI__PortalUserInfo_1a081355b13257ab48967dfe0c9ab8f3c2"></a>

Sets the value of DisplayName using move semantics.

#### `public inline ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1a04c52ad7fae20ca4a8890d7f1a05826c)`()` <a id="structFRHAPI__PortalUserInfo_1a04c52ad7fae20ca4a8890d7f1a05826c"></a>

Gets the value of DeviceType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1a16bcbd488fa9b69fa1a53685bbf7f13b)`() const` <a id="structFRHAPI__PortalUserInfo_1a16bcbd488fa9b69fa1a53685bbf7f13b"></a>

Gets the value of DeviceType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1a15cd180c25e472b31aa87c9f511a3de3)`(const ERHAPI_DeviceType & DefaultValue) const` <a id="structFRHAPI__PortalUserInfo_1a15cd180c25e472b31aa87c9f511a3de3"></a>

Gets the value of DeviceType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1a576b999330fe1e647e976301d1a112fd)`(ERHAPI_DeviceType & OutValue) const` <a id="structFRHAPI__PortalUserInfo_1a576b999330fe1e647e976301d1a112fd"></a>

Fills OutValue with the value of DeviceType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_DeviceType * `[`GetDeviceTypeOrNull`](#structFRHAPI__PortalUserInfo_1a7c37f4ae6ac571f798a6b417309851c2)`()` <a id="structFRHAPI__PortalUserInfo_1a7c37f4ae6ac571f798a6b417309851c2"></a>

Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_DeviceType * `[`GetDeviceTypeOrNull`](#structFRHAPI__PortalUserInfo_1aa4f38a741a70f2ddd2f006dfd4e2a0c6)`() const` <a id="structFRHAPI__PortalUserInfo_1aa4f38a741a70f2ddd2f006dfd4e2a0c6"></a>

Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDeviceType`](#structFRHAPI__PortalUserInfo_1adeaa2b041d684be51b2115c4ca9cc2d2)`(const ERHAPI_DeviceType & NewValue)` <a id="structFRHAPI__PortalUserInfo_1adeaa2b041d684be51b2115c4ca9cc2d2"></a>

Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true.

#### `public inline void `[`SetDeviceType`](#structFRHAPI__PortalUserInfo_1ada255c5a642eecefb1681dc8957bc847)`(ERHAPI_DeviceType && NewValue)` <a id="structFRHAPI__PortalUserInfo_1ada255c5a642eecefb1681dc8957bc847"></a>

Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true using move semantics.

#### `public inline void `[`ClearDeviceType`](#structFRHAPI__PortalUserInfo_1a80537c78f0e6df5473eb5d852fe03c20)`()` <a id="structFRHAPI__PortalUserInfo_1a80537c78f0e6df5473eb5d852fe03c20"></a>

Clears the value of DeviceType_Optional and sets DeviceType_IsSet to false.

#### `public inline bool `[`IsDeviceTypeSet`](#structFRHAPI__PortalUserInfo_1a54ed343449be7733cd8e8f396be8de37)`() const` <a id="structFRHAPI__PortalUserInfo_1a54ed343449be7733cd8e8f396be8de37"></a>

Checks whether DeviceType_Optional has been set.

