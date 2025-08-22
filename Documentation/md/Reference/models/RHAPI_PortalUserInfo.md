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
`public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserInfo_1a905dede290ec84ea07be5a38f3dfedc5)`()` | Gets the value of Platform.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserInfo_1a6253f8ef84d1f6cdcca51fff988b6d54)`() const` | Gets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PortalUserInfo_1ae756f19e857c195cf7b2a6f291b89214)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PortalUserInfo_1a6110e2303318e68d89979f72f570ede7)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FORCEINLINE ERHAPI_DependenciesSchemasPortal & `[`GetPortalId`](#structFRHAPI__PortalUserInfo_1a10c71febde4d50d1fc8acf55fe44584b)`()` | Gets the value of PortalId.
`public inline FORCEINLINE const ERHAPI_DependenciesSchemasPortal & `[`GetPortalId`](#structFRHAPI__PortalUserInfo_1adb827a85d0ab93c4a328354e48f0c01c)`() const` | Gets the value of PortalId.
`public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PortalUserInfo_1ae08018e3223055477e1d4508de89358c)`(const ERHAPI_DependenciesSchemasPortal & NewValue)` | Sets the value of PortalId.
`public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PortalUserInfo_1acae2ccb44df7710b1e66f1f14cdd8df2)`(ERHAPI_DependenciesSchemasPortal && NewValue)` | Sets the value of PortalId using move semantics.
`public inline FORCEINLINE FString & `[`GetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a6bf59bcbf0c964eaa14ccf79efb13bb7)`()` | Gets the value of PlatformEnvironment_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a13225ddf81a5699682e8dd82978f4256)`() const` | Gets the value of PlatformEnvironment_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a2aa31e128e1929da89c8921fd4d80b87)`(const FString & DefaultValue) const` | Gets the value of PlatformEnvironment_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a3b966a0e362a49c267f0e4555129f5b4)`(FString & OutValue) const` | Fills OutValue with the value of PlatformEnvironment_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPlatformEnvironmentOrNull`](#structFRHAPI__PortalUserInfo_1a67d75cd4a3cb46be6506858f610ec06a)`()` | Returns a pointer to PlatformEnvironment_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPlatformEnvironmentOrNull`](#structFRHAPI__PortalUserInfo_1a3ef7c1c34f7e1c41e9d2e41d0664c821)`() const` | Returns a pointer to PlatformEnvironment_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1ae453dd79b8973f5e18eca5baadc5a546)`(const FString & NewValue)` | Sets the value of PlatformEnvironment_Optional and also sets PlatformEnvironment_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a690c8f3dba648d54dcd207ce4c18fee8)`(FString && NewValue)` | Sets the value of PlatformEnvironment_Optional and also sets PlatformEnvironment_IsSet to true using move semantics.
`public inline void `[`ClearPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a6bddf477ffa68753c4e289d8ce4f7c4e)`()` | Clears the value of PlatformEnvironment_Optional and sets PlatformEnvironment_IsSet to false.
`public inline FORCEINLINE FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserInfo_1abba0749f162a17705cf00f1e77408162)`()` | Gets the value of PortalUserId.
`public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserInfo_1a083e026215f3170ef93c124063c3119b)`() const` | Gets the value of PortalUserId.
`public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PortalUserInfo_1a470d35bf1951816208961cc36e81e0db)`(const FString & NewValue)` | Sets the value of PortalUserId.
`public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PortalUserInfo_1a612ca8001e858ea913d7edba12d2c79c)`(FString && NewValue)` | Sets the value of PortalUserId using move semantics.
`public inline FORCEINLINE FString & `[`GetDisplayName`](#structFRHAPI__PortalUserInfo_1ac059286f06b56352238e9ede438bb1ec)`()` | Gets the value of DisplayName.
`public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__PortalUserInfo_1aa1203fefd96140e552768e306c3f1bf0)`() const` | Gets the value of DisplayName.
`public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__PortalUserInfo_1ac785a0a1f8f5d205624e74132e07faac)`(const FString & NewValue)` | Sets the value of DisplayName.
`public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__PortalUserInfo_1a6a4a7ea66069419d6c23a76f732bb5e2)`(FString && NewValue)` | Sets the value of DisplayName using move semantics.
`public inline FORCEINLINE ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1a90d8c806a323b98c31fa3b5b0ce643c7)`()` | Gets the value of DeviceType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1a234e0d3ab72f9385377dd2da5a74b2a2)`() const` | Gets the value of DeviceType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1adc50fb9caccbb237b15e1773bc17637d)`(const ERHAPI_DeviceType & DefaultValue) const` | Gets the value of DeviceType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1aac0e98d77bdcb461f8c3fb8dfa7ff990)`(ERHAPI_DeviceType & OutValue) const` | Fills OutValue with the value of DeviceType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_DeviceType * `[`GetDeviceTypeOrNull`](#structFRHAPI__PortalUserInfo_1a6b2da396867de6b6189ab918bde9133f)`()` | Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_DeviceType * `[`GetDeviceTypeOrNull`](#structFRHAPI__PortalUserInfo_1afe6f23843fb423c77ffe863b60b4c30b)`() const` | Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDeviceType`](#structFRHAPI__PortalUserInfo_1a8e46b8f736f1ccd5e2e6bf44d2062112)`(const ERHAPI_DeviceType & NewValue)` | Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true.
`public inline FORCEINLINE void `[`SetDeviceType`](#structFRHAPI__PortalUserInfo_1aaa46b46072a66af55f057ffaec4fe262)`(ERHAPI_DeviceType && NewValue)` | Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true using move semantics.
`public inline void `[`ClearDeviceType`](#structFRHAPI__PortalUserInfo_1a80537c78f0e6df5473eb5d852fe03c20)`()` | Clears the value of DeviceType_Optional and sets DeviceType_IsSet to false.

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

#### `public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserInfo_1a905dede290ec84ea07be5a38f3dfedc5)`()` <a id="structFRHAPI__PortalUserInfo_1a905dede290ec84ea07be5a38f3dfedc5"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserInfo_1a6253f8ef84d1f6cdcca51fff988b6d54)`() const` <a id="structFRHAPI__PortalUserInfo_1a6253f8ef84d1f6cdcca51fff988b6d54"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PortalUserInfo_1ae756f19e857c195cf7b2a6f291b89214)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PortalUserInfo_1ae756f19e857c195cf7b2a6f291b89214"></a>

Sets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PortalUserInfo_1a6110e2303318e68d89979f72f570ede7)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PortalUserInfo_1a6110e2303318e68d89979f72f570ede7"></a>

Sets the value of Platform using move semantics.

#### `public inline FORCEINLINE ERHAPI_DependenciesSchemasPortal & `[`GetPortalId`](#structFRHAPI__PortalUserInfo_1a10c71febde4d50d1fc8acf55fe44584b)`()` <a id="structFRHAPI__PortalUserInfo_1a10c71febde4d50d1fc8acf55fe44584b"></a>

Gets the value of PortalId.

#### `public inline FORCEINLINE const ERHAPI_DependenciesSchemasPortal & `[`GetPortalId`](#structFRHAPI__PortalUserInfo_1adb827a85d0ab93c4a328354e48f0c01c)`() const` <a id="structFRHAPI__PortalUserInfo_1adb827a85d0ab93c4a328354e48f0c01c"></a>

Gets the value of PortalId.

#### `public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PortalUserInfo_1ae08018e3223055477e1d4508de89358c)`(const ERHAPI_DependenciesSchemasPortal & NewValue)` <a id="structFRHAPI__PortalUserInfo_1ae08018e3223055477e1d4508de89358c"></a>

Sets the value of PortalId.

#### `public inline FORCEINLINE void `[`SetPortalId`](#structFRHAPI__PortalUserInfo_1acae2ccb44df7710b1e66f1f14cdd8df2)`(ERHAPI_DependenciesSchemasPortal && NewValue)` <a id="structFRHAPI__PortalUserInfo_1acae2ccb44df7710b1e66f1f14cdd8df2"></a>

Sets the value of PortalId using move semantics.

#### `public inline FORCEINLINE FString & `[`GetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a6bf59bcbf0c964eaa14ccf79efb13bb7)`()` <a id="structFRHAPI__PortalUserInfo_1a6bf59bcbf0c964eaa14ccf79efb13bb7"></a>

Gets the value of PlatformEnvironment_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a13225ddf81a5699682e8dd82978f4256)`() const` <a id="structFRHAPI__PortalUserInfo_1a13225ddf81a5699682e8dd82978f4256"></a>

Gets the value of PlatformEnvironment_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a2aa31e128e1929da89c8921fd4d80b87)`(const FString & DefaultValue) const` <a id="structFRHAPI__PortalUserInfo_1a2aa31e128e1929da89c8921fd4d80b87"></a>

Gets the value of PlatformEnvironment_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a3b966a0e362a49c267f0e4555129f5b4)`(FString & OutValue) const` <a id="structFRHAPI__PortalUserInfo_1a3b966a0e362a49c267f0e4555129f5b4"></a>

Fills OutValue with the value of PlatformEnvironment_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPlatformEnvironmentOrNull`](#structFRHAPI__PortalUserInfo_1a67d75cd4a3cb46be6506858f610ec06a)`()` <a id="structFRHAPI__PortalUserInfo_1a67d75cd4a3cb46be6506858f610ec06a"></a>

Returns a pointer to PlatformEnvironment_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPlatformEnvironmentOrNull`](#structFRHAPI__PortalUserInfo_1a3ef7c1c34f7e1c41e9d2e41d0664c821)`() const` <a id="structFRHAPI__PortalUserInfo_1a3ef7c1c34f7e1c41e9d2e41d0664c821"></a>

Returns a pointer to PlatformEnvironment_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1ae453dd79b8973f5e18eca5baadc5a546)`(const FString & NewValue)` <a id="structFRHAPI__PortalUserInfo_1ae453dd79b8973f5e18eca5baadc5a546"></a>

Sets the value of PlatformEnvironment_Optional and also sets PlatformEnvironment_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a690c8f3dba648d54dcd207ce4c18fee8)`(FString && NewValue)` <a id="structFRHAPI__PortalUserInfo_1a690c8f3dba648d54dcd207ce4c18fee8"></a>

Sets the value of PlatformEnvironment_Optional and also sets PlatformEnvironment_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformEnvironment`](#structFRHAPI__PortalUserInfo_1a6bddf477ffa68753c4e289d8ce4f7c4e)`()` <a id="structFRHAPI__PortalUserInfo_1a6bddf477ffa68753c4e289d8ce4f7c4e"></a>

Clears the value of PlatformEnvironment_Optional and sets PlatformEnvironment_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserInfo_1abba0749f162a17705cf00f1e77408162)`()` <a id="structFRHAPI__PortalUserInfo_1abba0749f162a17705cf00f1e77408162"></a>

Gets the value of PortalUserId.

#### `public inline FORCEINLINE const FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserInfo_1a083e026215f3170ef93c124063c3119b)`() const` <a id="structFRHAPI__PortalUserInfo_1a083e026215f3170ef93c124063c3119b"></a>

Gets the value of PortalUserId.

#### `public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PortalUserInfo_1a470d35bf1951816208961cc36e81e0db)`(const FString & NewValue)` <a id="structFRHAPI__PortalUserInfo_1a470d35bf1951816208961cc36e81e0db"></a>

Sets the value of PortalUserId.

#### `public inline FORCEINLINE void `[`SetPortalUserId`](#structFRHAPI__PortalUserInfo_1a612ca8001e858ea913d7edba12d2c79c)`(FString && NewValue)` <a id="structFRHAPI__PortalUserInfo_1a612ca8001e858ea913d7edba12d2c79c"></a>

Sets the value of PortalUserId using move semantics.

#### `public inline FORCEINLINE FString & `[`GetDisplayName`](#structFRHAPI__PortalUserInfo_1ac059286f06b56352238e9ede438bb1ec)`()` <a id="structFRHAPI__PortalUserInfo_1ac059286f06b56352238e9ede438bb1ec"></a>

Gets the value of DisplayName.

#### `public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__PortalUserInfo_1aa1203fefd96140e552768e306c3f1bf0)`() const` <a id="structFRHAPI__PortalUserInfo_1aa1203fefd96140e552768e306c3f1bf0"></a>

Gets the value of DisplayName.

#### `public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__PortalUserInfo_1ac785a0a1f8f5d205624e74132e07faac)`(const FString & NewValue)` <a id="structFRHAPI__PortalUserInfo_1ac785a0a1f8f5d205624e74132e07faac"></a>

Sets the value of DisplayName.

#### `public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__PortalUserInfo_1a6a4a7ea66069419d6c23a76f732bb5e2)`(FString && NewValue)` <a id="structFRHAPI__PortalUserInfo_1a6a4a7ea66069419d6c23a76f732bb5e2"></a>

Sets the value of DisplayName using move semantics.

#### `public inline FORCEINLINE ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1a90d8c806a323b98c31fa3b5b0ce643c7)`()` <a id="structFRHAPI__PortalUserInfo_1a90d8c806a323b98c31fa3b5b0ce643c7"></a>

Gets the value of DeviceType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1a234e0d3ab72f9385377dd2da5a74b2a2)`() const` <a id="structFRHAPI__PortalUserInfo_1a234e0d3ab72f9385377dd2da5a74b2a2"></a>

Gets the value of DeviceType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1adc50fb9caccbb237b15e1773bc17637d)`(const ERHAPI_DeviceType & DefaultValue) const` <a id="structFRHAPI__PortalUserInfo_1adc50fb9caccbb237b15e1773bc17637d"></a>

Gets the value of DeviceType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1aac0e98d77bdcb461f8c3fb8dfa7ff990)`(ERHAPI_DeviceType & OutValue) const` <a id="structFRHAPI__PortalUserInfo_1aac0e98d77bdcb461f8c3fb8dfa7ff990"></a>

Fills OutValue with the value of DeviceType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_DeviceType * `[`GetDeviceTypeOrNull`](#structFRHAPI__PortalUserInfo_1a6b2da396867de6b6189ab918bde9133f)`()` <a id="structFRHAPI__PortalUserInfo_1a6b2da396867de6b6189ab918bde9133f"></a>

Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_DeviceType * `[`GetDeviceTypeOrNull`](#structFRHAPI__PortalUserInfo_1afe6f23843fb423c77ffe863b60b4c30b)`() const` <a id="structFRHAPI__PortalUserInfo_1afe6f23843fb423c77ffe863b60b4c30b"></a>

Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDeviceType`](#structFRHAPI__PortalUserInfo_1a8e46b8f736f1ccd5e2e6bf44d2062112)`(const ERHAPI_DeviceType & NewValue)` <a id="structFRHAPI__PortalUserInfo_1a8e46b8f736f1ccd5e2e6bf44d2062112"></a>

Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDeviceType`](#structFRHAPI__PortalUserInfo_1aaa46b46072a66af55f057ffaec4fe262)`(ERHAPI_DeviceType && NewValue)` <a id="structFRHAPI__PortalUserInfo_1aaa46b46072a66af55f057ffaec4fe262"></a>

Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true using move semantics.

#### `public inline void `[`ClearDeviceType`](#structFRHAPI__PortalUserInfo_1a80537c78f0e6df5473eb5d852fe03c20)`()` <a id="structFRHAPI__PortalUserInfo_1a80537c78f0e6df5473eb5d852fe03c20"></a>

Clears the value of DeviceType_Optional and sets DeviceType_IsSet to false.

