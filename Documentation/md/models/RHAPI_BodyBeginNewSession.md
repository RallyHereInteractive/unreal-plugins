# group `RHAPI_BodyBeginNewSession` <a id="group__RHAPI__BodyBeginNewSession"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__BodyBeginNewSession_1ad9fa67312817cbcb19ff67cb57f29efe)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BodyBeginNewSession_1a5d1dde9f77c7668e7b6719a96ef7b764)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetCountryCode`](#structFRHAPI__BodyBeginNewSession_1a6389cd1eff5913dc8846897aa608bac7)`()` | Gets the value of CountryCode.
`public inline const FString & `[`GetCountryCode`](#structFRHAPI__BodyBeginNewSession_1a260f56c1f98a11fb15cee9782b9ed373)`() const` | Gets the value of CountryCode.
`public inline void `[`SetCountryCode`](#structFRHAPI__BodyBeginNewSession_1a32cbcd75f9a37e01716b923702a5fced)`(FString NewValue)` | Sets the value of CountryCode.
`public inline FString & `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a4eea2f2bd9d4bd859380833600c3f610)`()` | Gets the value of DeviceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1ade2cd5930fe03039e294e42d436b4628)`() const` | Gets the value of DeviceId_Optional, regardless of it having been set.
`public inline const FString & `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a9620840815ec9c2ee834e1ca31d62dee)`(const FString & DefaultValue) const` | Gets the value of DeviceId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a8ffe9a4c354f183c5372e80e8e957a29)`(FString & OutValue) const` | Fills OutValue with the value of DeviceId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyBeginNewSession_1a8b21a4a1672d0c12b008b5d389c522c3)`()` | Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyBeginNewSession_1a891c220cbbdb6dc7a930f6ac7f64aa2e)`() const` | Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a4a8a729f2efb24d2e09caefe6ba8e25f)`(FString NewValue)` | Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true.
`public inline void `[`ClearDeviceId`](#structFRHAPI__BodyBeginNewSession_1aae458d9179139e19b99c983ce6ba80c5)`()` | Clears the value of DeviceId_Optional and sets DeviceId_IsSet to false.

### Members

#### `public FString `[`CountryCode`](#structFRHAPI__BodyBeginNewSession_1a870690b3e6af31e45215bbdaa0127596) <a id="structFRHAPI__BodyBeginNewSession_1a870690b3e6af31e45215bbdaa0127596"></a>

[ISO 3166-1 alpha-2](https://en.wikipedia.org/wiki/ISO_3166-1_alpha-2) country code for the user

#### `public FString `[`DeviceId_Optional`](#structFRHAPI__BodyBeginNewSession_1afb3f92a8ebaa4b435f58d8a3e2f1cb6b) <a id="structFRHAPI__BodyBeginNewSession_1afb3f92a8ebaa4b435f58d8a3e2f1cb6b"></a>

Unique Identifier for the device a session is started on. E.g should be the same for multiple users on the same device.

#### `public bool `[`DeviceId_IsSet`](#structFRHAPI__BodyBeginNewSession_1a1ab96b1e204409126b40d416a87d4255) <a id="structFRHAPI__BodyBeginNewSession_1a1ab96b1e204409126b40d416a87d4255"></a>

true if DeviceId_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__BodyBeginNewSession_1ad9fa67312817cbcb19ff67cb57f29efe)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BodyBeginNewSession_1ad9fa67312817cbcb19ff67cb57f29efe"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BodyBeginNewSession_1a5d1dde9f77c7668e7b6719a96ef7b764)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__BodyBeginNewSession_1a5d1dde9f77c7668e7b6719a96ef7b764"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetCountryCode`](#structFRHAPI__BodyBeginNewSession_1a6389cd1eff5913dc8846897aa608bac7)`()` <a id="structFRHAPI__BodyBeginNewSession_1a6389cd1eff5913dc8846897aa608bac7"></a>

Gets the value of CountryCode.

#### `public inline const FString & `[`GetCountryCode`](#structFRHAPI__BodyBeginNewSession_1a260f56c1f98a11fb15cee9782b9ed373)`() const` <a id="structFRHAPI__BodyBeginNewSession_1a260f56c1f98a11fb15cee9782b9ed373"></a>

Gets the value of CountryCode.

#### `public inline void `[`SetCountryCode`](#structFRHAPI__BodyBeginNewSession_1a32cbcd75f9a37e01716b923702a5fced)`(FString NewValue)` <a id="structFRHAPI__BodyBeginNewSession_1a32cbcd75f9a37e01716b923702a5fced"></a>

Sets the value of CountryCode.

#### `public inline FString & `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a4eea2f2bd9d4bd859380833600c3f610)`()` <a id="structFRHAPI__BodyBeginNewSession_1a4eea2f2bd9d4bd859380833600c3f610"></a>

Gets the value of DeviceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1ade2cd5930fe03039e294e42d436b4628)`() const` <a id="structFRHAPI__BodyBeginNewSession_1ade2cd5930fe03039e294e42d436b4628"></a>

Gets the value of DeviceId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a9620840815ec9c2ee834e1ca31d62dee)`(const FString & DefaultValue) const` <a id="structFRHAPI__BodyBeginNewSession_1a9620840815ec9c2ee834e1ca31d62dee"></a>

Gets the value of DeviceId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a8ffe9a4c354f183c5372e80e8e957a29)`(FString & OutValue) const` <a id="structFRHAPI__BodyBeginNewSession_1a8ffe9a4c354f183c5372e80e8e957a29"></a>

Fills OutValue with the value of DeviceId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyBeginNewSession_1a8b21a4a1672d0c12b008b5d389c522c3)`()` <a id="structFRHAPI__BodyBeginNewSession_1a8b21a4a1672d0c12b008b5d389c522c3"></a>

Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetDeviceIdOrNull`](#structFRHAPI__BodyBeginNewSession_1a891c220cbbdb6dc7a930f6ac7f64aa2e)`() const` <a id="structFRHAPI__BodyBeginNewSession_1a891c220cbbdb6dc7a930f6ac7f64aa2e"></a>

Returns a pointer to DeviceId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDeviceId`](#structFRHAPI__BodyBeginNewSession_1a4a8a729f2efb24d2e09caefe6ba8e25f)`(FString NewValue)` <a id="structFRHAPI__BodyBeginNewSession_1a4a8a729f2efb24d2e09caefe6ba8e25f"></a>

Sets the value of DeviceId_Optional and also sets DeviceId_IsSet to true.

#### `public inline void `[`ClearDeviceId`](#structFRHAPI__BodyBeginNewSession_1aae458d9179139e19b99c983ce6ba80c5)`()` <a id="structFRHAPI__BodyBeginNewSession_1aae458d9179139e19b99c983ce6ba80c5"></a>

Clears the value of DeviceId_Optional and sets DeviceId_IsSet to false.

