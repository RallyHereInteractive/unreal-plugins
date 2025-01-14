---
title: RHAPI_BodyBeginNewSession
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BodyBeginNewSession`](#structFRHAPI__BodyBeginNewSession) | 

## struct `FRHAPI_BodyBeginNewSession` <a id="structFRHAPI__BodyBeginNewSession"></a>

```
struct FRHAPI_BodyBeginNewSession
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`CountryCode`](#structFRHAPI__BodyBeginNewSession_1a870690b3e6af31e45215bbdaa0127596) | [ISO 3166-1 alpha-2](https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2) country code for the user
`public FString `[`DeviceId_Optional`](#structFRHAPI__BodyBeginNewSession_1afb3f92a8ebaa4b435f58d8a3e2f1cb6b) | Unique Identifier for the device a session is started on. E.g should be the same for multiple users on the same device.
`public bool `[`DeviceId_IsSet`](#structFRHAPI__BodyBeginNewSession_1a1ab96b1e204409126b40d416a87d4255) | true if DeviceId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__BodyBeginNewSession_1a5434d98824dd8551f368ff6f30b526ce)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BodyBeginNewSession_1ab98c08045505fa5294485467218abf3e)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetCountryCode`](#structFRHAPI__BodyBeginNewSession_1a2a50a22385aeabb3dbee5539a10c8ef3)`()` | Gets the value of CountryCode.
`public inline const FString & `[`GetCountryCode`](#structFRHAPI__BodyBeginNewSession_1afbd9691c733f973ae2bdf456781a2aed)`() const` | Gets the value of CountryCode.
`public inline void `[`SetCountryCode`](#structFRHAPI__BodyBeginNewSession_1a35478f3af0971b1433dbad006124973c)`(const FString & NewValue)` | Sets the value of CountryCode.
`public inline void `[`SetCountryCode`](#structFRHAPI__BodyBeginNewSession_1a541ebeb59cdd2f1aa2962e70ea990620)`(FString && NewValue)` | Sets the value of CountryCode using move semantics.
`public inline FString & `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a0e119dd55dc01b532bbb7d6cbdd02c70)`()` | Gets the value of DeviceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a3dc4361c25ebf376a13e8c96dcac1935)`() const` | Gets the value of DeviceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a762f4e341d687989b4f9f7dd4641cd76)`(const FString & DefaultValue) const` | Gets the value of DeviceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a8ffe9a4c354f183c5372e80e8e957a29)`(FString & OutValue) const` | Fills OutValue with the value of DeviceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyBeginNewSession_1a8860a6566f88a1def03f60920e5f16ac)`()` | Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyBeginNewSession_1aec2d1c1b24067fbd54e37dbfe7dc8a52)`() const` | Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDeviceId`](#structFRHAPI__BodyBeginNewSession_1afa826ef99895ffefc51fc55e5f3e70cf)`(const FString & NewValue)` | Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true.
`public inline void `[`SetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a65bfb4595fdf40d2ec1aa2e5574958e0)`(FString && NewValue)` | Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true using move semantics.
`public inline void `[`ClearDeviceId`](#structFRHAPI__BodyBeginNewSession_1aae458d9179139e19b99c983ce6ba80c5)`()` | Clears the value of DeviceId_Optional and sets DeviceId_IsSet to false.
`public inline bool `[`IsDeviceIdSet`](#structFRHAPI__BodyBeginNewSession_1accaefee47354645ae421f8076077602c)`() const` | Checks whether DeviceId_Optional has been set.

### Members

#### `public FString `[`CountryCode`](#structFRHAPI__BodyBeginNewSession_1a870690b3e6af31e45215bbdaa0127596) <a id="structFRHAPI__BodyBeginNewSession_1a870690b3e6af31e45215bbdaa0127596"></a>

[ISO 3166-1 alpha-2](https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2) country code for the user

#### `public FString `[`DeviceId_Optional`](#structFRHAPI__BodyBeginNewSession_1afb3f92a8ebaa4b435f58d8a3e2f1cb6b) <a id="structFRHAPI__BodyBeginNewSession_1afb3f92a8ebaa4b435f58d8a3e2f1cb6b"></a>

Unique Identifier for the device a session is started on. E.g should be the same for multiple users on the same device.

#### `public bool `[`DeviceId_IsSet`](#structFRHAPI__BodyBeginNewSession_1a1ab96b1e204409126b40d416a87d4255) <a id="structFRHAPI__BodyBeginNewSession_1a1ab96b1e204409126b40d416a87d4255"></a>

true if DeviceId_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__BodyBeginNewSession_1a5434d98824dd8551f368ff6f30b526ce)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BodyBeginNewSession_1a5434d98824dd8551f368ff6f30b526ce"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BodyBeginNewSession_1ab98c08045505fa5294485467218abf3e)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__BodyBeginNewSession_1ab98c08045505fa5294485467218abf3e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetCountryCode`](#structFRHAPI__BodyBeginNewSession_1a2a50a22385aeabb3dbee5539a10c8ef3)`()` <a id="structFRHAPI__BodyBeginNewSession_1a2a50a22385aeabb3dbee5539a10c8ef3"></a>

Gets the value of CountryCode.

#### `public inline const FString & `[`GetCountryCode`](#structFRHAPI__BodyBeginNewSession_1afbd9691c733f973ae2bdf456781a2aed)`() const` <a id="structFRHAPI__BodyBeginNewSession_1afbd9691c733f973ae2bdf456781a2aed"></a>

Gets the value of CountryCode.

#### `public inline void `[`SetCountryCode`](#structFRHAPI__BodyBeginNewSession_1a35478f3af0971b1433dbad006124973c)`(const FString & NewValue)` <a id="structFRHAPI__BodyBeginNewSession_1a35478f3af0971b1433dbad006124973c"></a>

Sets the value of CountryCode.

#### `public inline void `[`SetCountryCode`](#structFRHAPI__BodyBeginNewSession_1a541ebeb59cdd2f1aa2962e70ea990620)`(FString && NewValue)` <a id="structFRHAPI__BodyBeginNewSession_1a541ebeb59cdd2f1aa2962e70ea990620"></a>

Sets the value of CountryCode using move semantics.

#### `public inline FString & `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a0e119dd55dc01b532bbb7d6cbdd02c70)`()` <a id="structFRHAPI__BodyBeginNewSession_1a0e119dd55dc01b532bbb7d6cbdd02c70"></a>

Gets the value of DeviceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a3dc4361c25ebf376a13e8c96dcac1935)`() const` <a id="structFRHAPI__BodyBeginNewSession_1a3dc4361c25ebf376a13e8c96dcac1935"></a>

Gets the value of DeviceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a762f4e341d687989b4f9f7dd4641cd76)`(const FString & DefaultValue) const` <a id="structFRHAPI__BodyBeginNewSession_1a762f4e341d687989b4f9f7dd4641cd76"></a>

Gets the value of DeviceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a8ffe9a4c354f183c5372e80e8e957a29)`(FString & OutValue) const` <a id="structFRHAPI__BodyBeginNewSession_1a8ffe9a4c354f183c5372e80e8e957a29"></a>

Fills OutValue with the value of DeviceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyBeginNewSession_1a8860a6566f88a1def03f60920e5f16ac)`()` <a id="structFRHAPI__BodyBeginNewSession_1a8860a6566f88a1def03f60920e5f16ac"></a>

Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyBeginNewSession_1aec2d1c1b24067fbd54e37dbfe7dc8a52)`() const` <a id="structFRHAPI__BodyBeginNewSession_1aec2d1c1b24067fbd54e37dbfe7dc8a52"></a>

Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDeviceId`](#structFRHAPI__BodyBeginNewSession_1afa826ef99895ffefc51fc55e5f3e70cf)`(const FString & NewValue)` <a id="structFRHAPI__BodyBeginNewSession_1afa826ef99895ffefc51fc55e5f3e70cf"></a>

Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true.

#### `public inline void `[`SetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a65bfb4595fdf40d2ec1aa2e5574958e0)`(FString && NewValue)` <a id="structFRHAPI__BodyBeginNewSession_1a65bfb4595fdf40d2ec1aa2e5574958e0"></a>

Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true using move semantics.

#### `public inline void `[`ClearDeviceId`](#structFRHAPI__BodyBeginNewSession_1aae458d9179139e19b99c983ce6ba80c5)`()` <a id="structFRHAPI__BodyBeginNewSession_1aae458d9179139e19b99c983ce6ba80c5"></a>

Clears the value of DeviceId_Optional and sets DeviceId_IsSet to false.

#### `public inline bool `[`IsDeviceIdSet`](#structFRHAPI__BodyBeginNewSession_1accaefee47354645ae421f8076077602c)`() const` <a id="structFRHAPI__BodyBeginNewSession_1accaefee47354645ae421f8076077602c"></a>

Checks whether DeviceId_Optional has been set.

