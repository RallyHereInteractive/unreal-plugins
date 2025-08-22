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
`public inline FORCEINLINE FString & `[`GetCountryCode`](#structFRHAPI__BodyBeginNewSession_1a66d70ce4035a552469a2abc673bf29e4)`()` | Gets the value of CountryCode.
`public inline FORCEINLINE const FString & `[`GetCountryCode`](#structFRHAPI__BodyBeginNewSession_1a36e57c11a7a9151a06a07e0fbf00d971)`() const` | Gets the value of CountryCode.
`public inline FORCEINLINE void `[`SetCountryCode`](#structFRHAPI__BodyBeginNewSession_1afe3ccfd994785c9f6848c9512addbc1c)`(const FString & NewValue)` | Sets the value of CountryCode.
`public inline FORCEINLINE void `[`SetCountryCode`](#structFRHAPI__BodyBeginNewSession_1a8c8983354a9d4c3a567b3f2d5e57326b)`(FString && NewValue)` | Sets the value of CountryCode using move semantics.
`public inline FORCEINLINE FString & `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a793ca6f8d5b522668272903cae372b12)`()` | Gets the value of DeviceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a6fbce961f06e2efbfc000de54184aebc)`() const` | Gets the value of DeviceId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a6ac0f0c73aa1bed62171f6c03027e55b)`(const FString & DefaultValue) const` | Gets the value of DeviceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a5d6c5fa4a33a7572c0a342b64ee11be4)`(FString & OutValue) const` | Fills OutValue with the value of DeviceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyBeginNewSession_1aa68601edbfd5bfdaa5b144334de19fc8)`()` | Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyBeginNewSession_1ae14a25d7fc2a56a73e0b56bf53702571)`() const` | Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a261c78ea8585476fa8e6e7471ebf39cb)`(const FString & NewValue)` | Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true.
`public inline FORCEINLINE void `[`SetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a23a08c8f29ff968cf760ba3b71a7ada5)`(FString && NewValue)` | Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true using move semantics.
`public inline void `[`ClearDeviceId`](#structFRHAPI__BodyBeginNewSession_1aae458d9179139e19b99c983ce6ba80c5)`()` | Clears the value of DeviceId_Optional and sets DeviceId_IsSet to false.

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

#### `public inline FORCEINLINE FString & `[`GetCountryCode`](#structFRHAPI__BodyBeginNewSession_1a66d70ce4035a552469a2abc673bf29e4)`()` <a id="structFRHAPI__BodyBeginNewSession_1a66d70ce4035a552469a2abc673bf29e4"></a>

Gets the value of CountryCode.

#### `public inline FORCEINLINE const FString & `[`GetCountryCode`](#structFRHAPI__BodyBeginNewSession_1a36e57c11a7a9151a06a07e0fbf00d971)`() const` <a id="structFRHAPI__BodyBeginNewSession_1a36e57c11a7a9151a06a07e0fbf00d971"></a>

Gets the value of CountryCode.

#### `public inline FORCEINLINE void `[`SetCountryCode`](#structFRHAPI__BodyBeginNewSession_1afe3ccfd994785c9f6848c9512addbc1c)`(const FString & NewValue)` <a id="structFRHAPI__BodyBeginNewSession_1afe3ccfd994785c9f6848c9512addbc1c"></a>

Sets the value of CountryCode.

#### `public inline FORCEINLINE void `[`SetCountryCode`](#structFRHAPI__BodyBeginNewSession_1a8c8983354a9d4c3a567b3f2d5e57326b)`(FString && NewValue)` <a id="structFRHAPI__BodyBeginNewSession_1a8c8983354a9d4c3a567b3f2d5e57326b"></a>

Sets the value of CountryCode using move semantics.

#### `public inline FORCEINLINE FString & `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a793ca6f8d5b522668272903cae372b12)`()` <a id="structFRHAPI__BodyBeginNewSession_1a793ca6f8d5b522668272903cae372b12"></a>

Gets the value of DeviceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a6fbce961f06e2efbfc000de54184aebc)`() const` <a id="structFRHAPI__BodyBeginNewSession_1a6fbce961f06e2efbfc000de54184aebc"></a>

Gets the value of DeviceId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a6ac0f0c73aa1bed62171f6c03027e55b)`(const FString & DefaultValue) const` <a id="structFRHAPI__BodyBeginNewSession_1a6ac0f0c73aa1bed62171f6c03027e55b"></a>

Gets the value of DeviceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a5d6c5fa4a33a7572c0a342b64ee11be4)`(FString & OutValue) const` <a id="structFRHAPI__BodyBeginNewSession_1a5d6c5fa4a33a7572c0a342b64ee11be4"></a>

Fills OutValue with the value of DeviceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyBeginNewSession_1aa68601edbfd5bfdaa5b144334de19fc8)`()` <a id="structFRHAPI__BodyBeginNewSession_1aa68601edbfd5bfdaa5b144334de19fc8"></a>

Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyBeginNewSession_1ae14a25d7fc2a56a73e0b56bf53702571)`() const` <a id="structFRHAPI__BodyBeginNewSession_1ae14a25d7fc2a56a73e0b56bf53702571"></a>

Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a261c78ea8585476fa8e6e7471ebf39cb)`(const FString & NewValue)` <a id="structFRHAPI__BodyBeginNewSession_1a261c78ea8585476fa8e6e7471ebf39cb"></a>

Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a23a08c8f29ff968cf760ba3b71a7ada5)`(FString && NewValue)` <a id="structFRHAPI__BodyBeginNewSession_1a23a08c8f29ff968cf760ba3b71a7ada5"></a>

Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true using move semantics.

#### `public inline void `[`ClearDeviceId`](#structFRHAPI__BodyBeginNewSession_1aae458d9179139e19b99c983ce6ba80c5)`()` <a id="structFRHAPI__BodyBeginNewSession_1aae458d9179139e19b99c983ce6ba80c5"></a>

Clears the value of DeviceId_Optional and sets DeviceId_IsSet to false.

