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
`public FString `[`PortalUserId`](#structFRHAPI__PortalUserInfo_1a6733dd0ddc41200cf750f32de0b83dab) | Platform User ID.
`public FString `[`DisplayName`](#structFRHAPI__PortalUserInfo_1a0ba620f7ad0e76fa03651b52221672d0) | Display name.
`public ERHAPI_DeviceType `[`DeviceType_Optional`](#structFRHAPI__PortalUserInfo_1aa45110e5fcd50bfaf310fcec1caa6a77) | Platform-verified device type of the login.
`public bool `[`DeviceType_IsSet`](#structFRHAPI__PortalUserInfo_1a9048188b2de7d1fd40a98a21f30e99d4) | true if DeviceType_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PortalUserInfo_1a0ca5098c9ceb1d32639907161ac5dc8c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PortalUserInfo_1aa48113211a257428d7a48cdcd56424eb)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserInfo_1a3f453744df9708c61b8d4cbc145eb71a)`()` | Gets the value of Platform.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserInfo_1a40e45a21d723e554b55aa7a41b4af6d1)`() const` | Gets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PortalUserInfo_1a44074732910033daa094db3801af9844)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PortalUserInfo_1a61094c7e45f7523129045ea51fd10f66)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.
`public inline ERHAPI_DependenciesSchemasPortal & `[`GetPortalId`](#structFRHAPI__PortalUserInfo_1a9d1356770916296ce708f009273a37eb)`()` | Gets the value of PortalId.
`public inline const ERHAPI_DependenciesSchemasPortal & `[`GetPortalId`](#structFRHAPI__PortalUserInfo_1af6f98c6f6ac2cf9e5de6510e2217681a)`() const` | Gets the value of PortalId.
`public inline void `[`SetPortalId`](#structFRHAPI__PortalUserInfo_1a4a5ff208210acd2fb87fa780480ab9c9)`(const ERHAPI_DependenciesSchemasPortal & NewValue)` | Sets the value of PortalId.
`public inline void `[`SetPortalId`](#structFRHAPI__PortalUserInfo_1a5c46064ea43abd217be0f9dd7a08083a)`(ERHAPI_DependenciesSchemasPortal && NewValue)` | Sets the value of PortalId using move semantics.
`public inline FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserInfo_1a02293533e662c590c4d1434fa698c8e8)`()` | Gets the value of PortalUserId.
`public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserInfo_1add30541439590b909bdcff70ceaed762)`() const` | Gets the value of PortalUserId.
`public inline void `[`SetPortalUserId`](#structFRHAPI__PortalUserInfo_1a78a2bd60a18f0ad956e631568194185b)`(const FString & NewValue)` | Sets the value of PortalUserId.
`public inline void `[`SetPortalUserId`](#structFRHAPI__PortalUserInfo_1a57bc630ea606f0e717fa79b2d73e0cb5)`(FString && NewValue)` | Sets the value of PortalUserId using move semantics.
`public inline FString & `[`GetDisplayName`](#structFRHAPI__PortalUserInfo_1a2db99b60ec4b0ee6d486bfcc92499af1)`()` | Gets the value of DisplayName.
`public inline const FString & `[`GetDisplayName`](#structFRHAPI__PortalUserInfo_1a3748a4f9b1fe44030fc16bce07e5f092)`() const` | Gets the value of DisplayName.
`public inline void `[`SetDisplayName`](#structFRHAPI__PortalUserInfo_1a576242ed5ef69ebd695b8d16224de5e3)`(const FString & NewValue)` | Sets the value of DisplayName.
`public inline void `[`SetDisplayName`](#structFRHAPI__PortalUserInfo_1a081355b13257ab48967dfe0c9ab8f3c2)`(FString && NewValue)` | Sets the value of DisplayName using move semantics.
`public inline ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1a4d9ccac590f43fd64811b0a4956f3708)`()` | Gets the value of DeviceType_Optional, regardless of it having been set.
`public inline const ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1ad79f3c27099d3377ba79514a4cf51a71)`() const` | Gets the value of DeviceType_Optional, regardless of it having been set.
`public inline const ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1a5a940953bb12bc57e913331c1d39f556)`(const ERHAPI_DeviceType & DefaultValue) const` | Gets the value of DeviceType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1a576b999330fe1e647e976301d1a112fd)`(ERHAPI_DeviceType & OutValue) const` | Fills OutValue with the value of DeviceType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_DeviceType * `[`GetDeviceTypeOrNull`](#structFRHAPI__PortalUserInfo_1a9e95e02f876a25e6f6765f9d87aeddc4)`()` | Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_DeviceType * `[`GetDeviceTypeOrNull`](#structFRHAPI__PortalUserInfo_1a645020c0bf04dee502647b74c1b3d1ca)`() const` | Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDeviceType`](#structFRHAPI__PortalUserInfo_1adeaa2b041d684be51b2115c4ca9cc2d2)`(const ERHAPI_DeviceType & NewValue)` | Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true.
`public inline void `[`SetDeviceType`](#structFRHAPI__PortalUserInfo_1ada255c5a642eecefb1681dc8957bc847)`(ERHAPI_DeviceType && NewValue)` | Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true using move semantics.
`public inline void `[`ClearDeviceType`](#structFRHAPI__PortalUserInfo_1a80537c78f0e6df5473eb5d852fe03c20)`()` | Clears the value of DeviceType_Optional and sets DeviceType_IsSet to false.
`public inline bool `[`IsDeviceTypeSet`](#structFRHAPI__PortalUserInfo_1a54ed343449be7733cd8e8f396be8de37)`() const` | Checks whether DeviceType_Optional has been set.

### Members

#### `public ERHAPI_Platform `[`Platform`](#structFRHAPI__PortalUserInfo_1aa73e914e330ab525ca2662631fe1cc06) <a id="structFRHAPI__PortalUserInfo_1aa73e914e330ab525ca2662631fe1cc06"></a>

Platform for the user.

#### `public ERHAPI_DependenciesSchemasPortal `[`PortalId`](#structFRHAPI__PortalUserInfo_1af0233dbd7f509062dcf36313611ea286) <a id="structFRHAPI__PortalUserInfo_1af0233dbd7f509062dcf36313611ea286"></a>

Portal ID. *DEPRECATED* use `platform` instead.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__PortalUserInfo_1aa48113211a257428d7a48cdcd56424eb)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PortalUserInfo_1aa48113211a257428d7a48cdcd56424eb"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserInfo_1a3f453744df9708c61b8d4cbc145eb71a)`()` <a id="structFRHAPI__PortalUserInfo_1a3f453744df9708c61b8d4cbc145eb71a"></a>

Gets the value of Platform.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PortalUserInfo_1a40e45a21d723e554b55aa7a41b4af6d1)`() const` <a id="structFRHAPI__PortalUserInfo_1a40e45a21d723e554b55aa7a41b4af6d1"></a>

Gets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PortalUserInfo_1a44074732910033daa094db3801af9844)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PortalUserInfo_1a44074732910033daa094db3801af9844"></a>

Sets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PortalUserInfo_1a61094c7e45f7523129045ea51fd10f66)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PortalUserInfo_1a61094c7e45f7523129045ea51fd10f66"></a>

Sets the value of Platform using move semantics.

#### `public inline ERHAPI_DependenciesSchemasPortal & `[`GetPortalId`](#structFRHAPI__PortalUserInfo_1a9d1356770916296ce708f009273a37eb)`()` <a id="structFRHAPI__PortalUserInfo_1a9d1356770916296ce708f009273a37eb"></a>

Gets the value of PortalId.

#### `public inline const ERHAPI_DependenciesSchemasPortal & `[`GetPortalId`](#structFRHAPI__PortalUserInfo_1af6f98c6f6ac2cf9e5de6510e2217681a)`() const` <a id="structFRHAPI__PortalUserInfo_1af6f98c6f6ac2cf9e5de6510e2217681a"></a>

Gets the value of PortalId.

#### `public inline void `[`SetPortalId`](#structFRHAPI__PortalUserInfo_1a4a5ff208210acd2fb87fa780480ab9c9)`(const ERHAPI_DependenciesSchemasPortal & NewValue)` <a id="structFRHAPI__PortalUserInfo_1a4a5ff208210acd2fb87fa780480ab9c9"></a>

Sets the value of PortalId.

#### `public inline void `[`SetPortalId`](#structFRHAPI__PortalUserInfo_1a5c46064ea43abd217be0f9dd7a08083a)`(ERHAPI_DependenciesSchemasPortal && NewValue)` <a id="structFRHAPI__PortalUserInfo_1a5c46064ea43abd217be0f9dd7a08083a"></a>

Sets the value of PortalId using move semantics.

#### `public inline FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserInfo_1a02293533e662c590c4d1434fa698c8e8)`()` <a id="structFRHAPI__PortalUserInfo_1a02293533e662c590c4d1434fa698c8e8"></a>

Gets the value of PortalUserId.

#### `public inline const FString & `[`GetPortalUserId`](#structFRHAPI__PortalUserInfo_1add30541439590b909bdcff70ceaed762)`() const` <a id="structFRHAPI__PortalUserInfo_1add30541439590b909bdcff70ceaed762"></a>

Gets the value of PortalUserId.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__PortalUserInfo_1a78a2bd60a18f0ad956e631568194185b)`(const FString & NewValue)` <a id="structFRHAPI__PortalUserInfo_1a78a2bd60a18f0ad956e631568194185b"></a>

Sets the value of PortalUserId.

#### `public inline void `[`SetPortalUserId`](#structFRHAPI__PortalUserInfo_1a57bc630ea606f0e717fa79b2d73e0cb5)`(FString && NewValue)` <a id="structFRHAPI__PortalUserInfo_1a57bc630ea606f0e717fa79b2d73e0cb5"></a>

Sets the value of PortalUserId using move semantics.

#### `public inline FString & `[`GetDisplayName`](#structFRHAPI__PortalUserInfo_1a2db99b60ec4b0ee6d486bfcc92499af1)`()` <a id="structFRHAPI__PortalUserInfo_1a2db99b60ec4b0ee6d486bfcc92499af1"></a>

Gets the value of DisplayName.

#### `public inline const FString & `[`GetDisplayName`](#structFRHAPI__PortalUserInfo_1a3748a4f9b1fe44030fc16bce07e5f092)`() const` <a id="structFRHAPI__PortalUserInfo_1a3748a4f9b1fe44030fc16bce07e5f092"></a>

Gets the value of DisplayName.

#### `public inline void `[`SetDisplayName`](#structFRHAPI__PortalUserInfo_1a576242ed5ef69ebd695b8d16224de5e3)`(const FString & NewValue)` <a id="structFRHAPI__PortalUserInfo_1a576242ed5ef69ebd695b8d16224de5e3"></a>

Sets the value of DisplayName.

#### `public inline void `[`SetDisplayName`](#structFRHAPI__PortalUserInfo_1a081355b13257ab48967dfe0c9ab8f3c2)`(FString && NewValue)` <a id="structFRHAPI__PortalUserInfo_1a081355b13257ab48967dfe0c9ab8f3c2"></a>

Sets the value of DisplayName using move semantics.

#### `public inline ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1a4d9ccac590f43fd64811b0a4956f3708)`()` <a id="structFRHAPI__PortalUserInfo_1a4d9ccac590f43fd64811b0a4956f3708"></a>

Gets the value of DeviceType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1ad79f3c27099d3377ba79514a4cf51a71)`() const` <a id="structFRHAPI__PortalUserInfo_1ad79f3c27099d3377ba79514a4cf51a71"></a>

Gets the value of DeviceType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1a5a940953bb12bc57e913331c1d39f556)`(const ERHAPI_DeviceType & DefaultValue) const` <a id="structFRHAPI__PortalUserInfo_1a5a940953bb12bc57e913331c1d39f556"></a>

Gets the value of DeviceType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDeviceType`](#structFRHAPI__PortalUserInfo_1a576b999330fe1e647e976301d1a112fd)`(ERHAPI_DeviceType & OutValue) const` <a id="structFRHAPI__PortalUserInfo_1a576b999330fe1e647e976301d1a112fd"></a>

Fills OutValue with the value of DeviceType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_DeviceType * `[`GetDeviceTypeOrNull`](#structFRHAPI__PortalUserInfo_1a9e95e02f876a25e6f6765f9d87aeddc4)`()` <a id="structFRHAPI__PortalUserInfo_1a9e95e02f876a25e6f6765f9d87aeddc4"></a>

Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_DeviceType * `[`GetDeviceTypeOrNull`](#structFRHAPI__PortalUserInfo_1a645020c0bf04dee502647b74c1b3d1ca)`() const` <a id="structFRHAPI__PortalUserInfo_1a645020c0bf04dee502647b74c1b3d1ca"></a>

Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDeviceType`](#structFRHAPI__PortalUserInfo_1adeaa2b041d684be51b2115c4ca9cc2d2)`(const ERHAPI_DeviceType & NewValue)` <a id="structFRHAPI__PortalUserInfo_1adeaa2b041d684be51b2115c4ca9cc2d2"></a>

Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true.

#### `public inline void `[`SetDeviceType`](#structFRHAPI__PortalUserInfo_1ada255c5a642eecefb1681dc8957bc847)`(ERHAPI_DeviceType && NewValue)` <a id="structFRHAPI__PortalUserInfo_1ada255c5a642eecefb1681dc8957bc847"></a>

Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true using move semantics.

#### `public inline void `[`ClearDeviceType`](#structFRHAPI__PortalUserInfo_1a80537c78f0e6df5473eb5d852fe03c20)`()` <a id="structFRHAPI__PortalUserInfo_1a80537c78f0e6df5473eb5d852fe03c20"></a>

Clears the value of DeviceType_Optional and sets DeviceType_IsSet to false.

#### `public inline bool `[`IsDeviceTypeSet`](#structFRHAPI__PortalUserInfo_1a54ed343449be7733cd8e8f396be8de37)`() const` <a id="structFRHAPI__PortalUserInfo_1a54ed343449be7733cd8e8f396be8de37"></a>

Checks whether DeviceType_Optional has been set.

