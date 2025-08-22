---
title: RHAPI_ClientSettings
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_ClientSettings`](#structFRHAPI__ClientSettings) | A player&#39;s platform and input settings.

## struct `FRHAPI_ClientSettings` <a id="structFRHAPI__ClientSettings"></a>

```
struct FRHAPI_ClientSettings
  : public FRHAPI_Model
```

A player&#39;s platform and input settings.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_PlatformID `[`PlatformId_Optional`](#structFRHAPI__ClientSettings_1ae9ccc7ffd86f7cb177884eabb4102e60) | DEPRECATED. Use 'platform' instead. Id for which platform this client is on. ID will be ignored if 'platform' is given. At least one of the two is required.
`public bool `[`PlatformId_IsSet`](#structFRHAPI__ClientSettings_1a5abccc6e19a15830bf7a25bc0fef7c3e) | true if PlatformId_Optional has been set to a value
`public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__ClientSettings_1a3cda3757a464c85429c807e30aafb5c9) | Which platform this client is on. If one is not provided, will get the platform from the 'platform_id'. Platform is now read from client's authorization claims if available.
`public bool `[`Platform_IsSet`](#structFRHAPI__ClientSettings_1a431c764ade30fe22fdaed9059dffbfa4) | true if Platform_Optional has been set to a value
`public ERHAPI_Input `[`Input`](#structFRHAPI__ClientSettings_1a7bcfb29cf8b0184e366256a614f39278) | Which input type this client is using.
`public ERHAPI_DeviceType `[`DeviceType_Optional`](#structFRHAPI__ClientSettings_1a042d8f8e2a55fb8337c7fe61b606bd3b) | Platform verified device type for this client.
`public bool `[`DeviceType_IsSet`](#structFRHAPI__ClientSettings_1a6da7e289f1d81989aac606902478f835) | true if DeviceType_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__ClientSettings_1a5022e2daded462f99927edbd94981a43)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__ClientSettings_1a719eba9c6fe0cf9e13418d2d28202890)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__ClientSettings_1a4fdf81fae2c0403d78b5f93b7a1794a7)`()` | Gets the value of PlatformId_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__ClientSettings_1afa21e1c44fc917294c7df4d0c06c1edd)`() const` | Gets the value of PlatformId_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__ClientSettings_1ae68f430b92cc2ed327423e93995fa610)`(const ERHAPI_PlatformID & DefaultValue) const` | Gets the value of PlatformId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatformId`](#structFRHAPI__ClientSettings_1a5d5eb8b81698206cbee0c695c8a4a27c)`(ERHAPI_PlatformID & OutValue) const` | Fills OutValue with the value of PlatformId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_PlatformID * `[`GetPlatformIdOrNull`](#structFRHAPI__ClientSettings_1a9d314fc5737407a5cc6b761a8b2c8478)`()` | Returns a pointer to PlatformId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_PlatformID * `[`GetPlatformIdOrNull`](#structFRHAPI__ClientSettings_1a60e0e3ca202d6a169fb5aaa653aa42e3)`() const` | Returns a pointer to PlatformId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatformId`](#structFRHAPI__ClientSettings_1a50f14869e629f39bb5ffdedd4a83f186)`(const ERHAPI_PlatformID & NewValue)` | Sets the value of PlatformId_Optional and also sets PlatformId_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatformId`](#structFRHAPI__ClientSettings_1af0e6b740b4c1a3c2456459fc82449761)`(ERHAPI_PlatformID && NewValue)` | Sets the value of PlatformId_Optional and also sets PlatformId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformId`](#structFRHAPI__ClientSettings_1a664e3f1014412b0595ccc0af264539d8)`()` | Clears the value of PlatformId_Optional and sets PlatformId_IsSet to false.
`public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__ClientSettings_1a05d013709e1e3d51c3599c4f8d3291c4)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__ClientSettings_1a2442bf4cf530324a4f929011cf5bca6b)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__ClientSettings_1a32ebcf3ecbfcee9fc316c7cb269f7309)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__ClientSettings_1afdfc3da18d02189f421058504773dcb3)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__ClientSettings_1a99f1f7cc32110bd676f9ae87007e9b09)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__ClientSettings_1afb303d282b654d8380282c10fe76c7ca)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__ClientSettings_1ad0cdeaa66b88435489691e7cd03143ae)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__ClientSettings_1a66effbefa40e0ba2c872de6a364cb949)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__ClientSettings_1ac631d7b1d552180893eee6278baca67d)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline FORCEINLINE ERHAPI_Input & `[`GetInput`](#structFRHAPI__ClientSettings_1a28462a3259e36fe5f98369f31d56ba0a)`()` | Gets the value of Input.
`public inline FORCEINLINE const ERHAPI_Input & `[`GetInput`](#structFRHAPI__ClientSettings_1af1648ab9ba315eb08deab9f69d272cf0)`() const` | Gets the value of Input.
`public inline FORCEINLINE void `[`SetInput`](#structFRHAPI__ClientSettings_1a331e165148448352203850770dbfdba0)`(const ERHAPI_Input & NewValue)` | Sets the value of Input.
`public inline FORCEINLINE void `[`SetInput`](#structFRHAPI__ClientSettings_1ae83c774cc30dd433be70ef3dc9d8bc76)`(ERHAPI_Input && NewValue)` | Sets the value of Input using move semantics.
`public inline FORCEINLINE ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__ClientSettings_1a33232e10f9b981d2580fd03f9ef2758d)`()` | Gets the value of DeviceType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__ClientSettings_1a7f2ceb2bd712c7dafe50dbc41540cdef)`() const` | Gets the value of DeviceType_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__ClientSettings_1a5b17f17fa9addac3b0a1cb978368caa5)`(const ERHAPI_DeviceType & DefaultValue) const` | Gets the value of DeviceType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDeviceType`](#structFRHAPI__ClientSettings_1a7ca4fadec30fa5ceaf3319f8629ce3da)`(ERHAPI_DeviceType & OutValue) const` | Fills OutValue with the value of DeviceType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_DeviceType * `[`GetDeviceTypeOrNull`](#structFRHAPI__ClientSettings_1a34d8ddcf86b982bf28bb1925eed6b931)`()` | Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_DeviceType * `[`GetDeviceTypeOrNull`](#structFRHAPI__ClientSettings_1aefb414bef48ebb9bcfdc7edbe6a9f35c)`() const` | Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDeviceType`](#structFRHAPI__ClientSettings_1a91be88c639d679ba679e2341442887f9)`(const ERHAPI_DeviceType & NewValue)` | Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true.
`public inline FORCEINLINE void `[`SetDeviceType`](#structFRHAPI__ClientSettings_1a13cc702a14a9a2a4364d5c2d73b2be97)`(ERHAPI_DeviceType && NewValue)` | Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true using move semantics.
`public inline void `[`ClearDeviceType`](#structFRHAPI__ClientSettings_1a290624f71ac968f32dc6af054f3e531a)`()` | Clears the value of DeviceType_Optional and sets DeviceType_IsSet to false.

### Members

#### `public ERHAPI_PlatformID `[`PlatformId_Optional`](#structFRHAPI__ClientSettings_1ae9ccc7ffd86f7cb177884eabb4102e60) <a id="structFRHAPI__ClientSettings_1ae9ccc7ffd86f7cb177884eabb4102e60"></a>

DEPRECATED. Use 'platform' instead. Id for which platform this client is on. ID will be ignored if 'platform' is given. At least one of the two is required.

#### `public bool `[`PlatformId_IsSet`](#structFRHAPI__ClientSettings_1a5abccc6e19a15830bf7a25bc0fef7c3e) <a id="structFRHAPI__ClientSettings_1a5abccc6e19a15830bf7a25bc0fef7c3e"></a>

true if PlatformId_Optional has been set to a value

#### `public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__ClientSettings_1a3cda3757a464c85429c807e30aafb5c9) <a id="structFRHAPI__ClientSettings_1a3cda3757a464c85429c807e30aafb5c9"></a>

Which platform this client is on. If one is not provided, will get the platform from the 'platform_id'. Platform is now read from client's authorization claims if available.

#### `public bool `[`Platform_IsSet`](#structFRHAPI__ClientSettings_1a431c764ade30fe22fdaed9059dffbfa4) <a id="structFRHAPI__ClientSettings_1a431c764ade30fe22fdaed9059dffbfa4"></a>

true if Platform_Optional has been set to a value

#### `public ERHAPI_Input `[`Input`](#structFRHAPI__ClientSettings_1a7bcfb29cf8b0184e366256a614f39278) <a id="structFRHAPI__ClientSettings_1a7bcfb29cf8b0184e366256a614f39278"></a>

Which input type this client is using.

#### `public ERHAPI_DeviceType `[`DeviceType_Optional`](#structFRHAPI__ClientSettings_1a042d8f8e2a55fb8337c7fe61b606bd3b) <a id="structFRHAPI__ClientSettings_1a042d8f8e2a55fb8337c7fe61b606bd3b"></a>

Platform verified device type for this client.

#### `public bool `[`DeviceType_IsSet`](#structFRHAPI__ClientSettings_1a6da7e289f1d81989aac606902478f835) <a id="structFRHAPI__ClientSettings_1a6da7e289f1d81989aac606902478f835"></a>

true if DeviceType_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__ClientSettings_1a5022e2daded462f99927edbd94981a43)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__ClientSettings_1a5022e2daded462f99927edbd94981a43"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__ClientSettings_1a719eba9c6fe0cf9e13418d2d28202890)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__ClientSettings_1a719eba9c6fe0cf9e13418d2d28202890"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__ClientSettings_1a4fdf81fae2c0403d78b5f93b7a1794a7)`()` <a id="structFRHAPI__ClientSettings_1a4fdf81fae2c0403d78b5f93b7a1794a7"></a>

Gets the value of PlatformId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__ClientSettings_1afa21e1c44fc917294c7df4d0c06c1edd)`() const` <a id="structFRHAPI__ClientSettings_1afa21e1c44fc917294c7df4d0c06c1edd"></a>

Gets the value of PlatformId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__ClientSettings_1ae68f430b92cc2ed327423e93995fa610)`(const ERHAPI_PlatformID & DefaultValue) const` <a id="structFRHAPI__ClientSettings_1ae68f430b92cc2ed327423e93995fa610"></a>

Gets the value of PlatformId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatformId`](#structFRHAPI__ClientSettings_1a5d5eb8b81698206cbee0c695c8a4a27c)`(ERHAPI_PlatformID & OutValue) const` <a id="structFRHAPI__ClientSettings_1a5d5eb8b81698206cbee0c695c8a4a27c"></a>

Fills OutValue with the value of PlatformId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_PlatformID * `[`GetPlatformIdOrNull`](#structFRHAPI__ClientSettings_1a9d314fc5737407a5cc6b761a8b2c8478)`()` <a id="structFRHAPI__ClientSettings_1a9d314fc5737407a5cc6b761a8b2c8478"></a>

Returns a pointer to PlatformId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_PlatformID * `[`GetPlatformIdOrNull`](#structFRHAPI__ClientSettings_1a60e0e3ca202d6a169fb5aaa653aa42e3)`() const` <a id="structFRHAPI__ClientSettings_1a60e0e3ca202d6a169fb5aaa653aa42e3"></a>

Returns a pointer to PlatformId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatformId`](#structFRHAPI__ClientSettings_1a50f14869e629f39bb5ffdedd4a83f186)`(const ERHAPI_PlatformID & NewValue)` <a id="structFRHAPI__ClientSettings_1a50f14869e629f39bb5ffdedd4a83f186"></a>

Sets the value of PlatformId_Optional and also sets PlatformId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatformId`](#structFRHAPI__ClientSettings_1af0e6b740b4c1a3c2456459fc82449761)`(ERHAPI_PlatformID && NewValue)` <a id="structFRHAPI__ClientSettings_1af0e6b740b4c1a3c2456459fc82449761"></a>

Sets the value of PlatformId_Optional and also sets PlatformId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformId`](#structFRHAPI__ClientSettings_1a664e3f1014412b0595ccc0af264539d8)`()` <a id="structFRHAPI__ClientSettings_1a664e3f1014412b0595ccc0af264539d8"></a>

Clears the value of PlatformId_Optional and sets PlatformId_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__ClientSettings_1a05d013709e1e3d51c3599c4f8d3291c4)`()` <a id="structFRHAPI__ClientSettings_1a05d013709e1e3d51c3599c4f8d3291c4"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__ClientSettings_1a2442bf4cf530324a4f929011cf5bca6b)`() const` <a id="structFRHAPI__ClientSettings_1a2442bf4cf530324a4f929011cf5bca6b"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__ClientSettings_1a32ebcf3ecbfcee9fc316c7cb269f7309)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__ClientSettings_1a32ebcf3ecbfcee9fc316c7cb269f7309"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__ClientSettings_1afdfc3da18d02189f421058504773dcb3)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__ClientSettings_1afdfc3da18d02189f421058504773dcb3"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__ClientSettings_1a99f1f7cc32110bd676f9ae87007e9b09)`()` <a id="structFRHAPI__ClientSettings_1a99f1f7cc32110bd676f9ae87007e9b09"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__ClientSettings_1afb303d282b654d8380282c10fe76c7ca)`() const` <a id="structFRHAPI__ClientSettings_1afb303d282b654d8380282c10fe76c7ca"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__ClientSettings_1ad0cdeaa66b88435489691e7cd03143ae)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__ClientSettings_1ad0cdeaa66b88435489691e7cd03143ae"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__ClientSettings_1a66effbefa40e0ba2c872de6a364cb949)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__ClientSettings_1a66effbefa40e0ba2c872de6a364cb949"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__ClientSettings_1ac631d7b1d552180893eee6278baca67d)`()` <a id="structFRHAPI__ClientSettings_1ac631d7b1d552180893eee6278baca67d"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_Input & `[`GetInput`](#structFRHAPI__ClientSettings_1a28462a3259e36fe5f98369f31d56ba0a)`()` <a id="structFRHAPI__ClientSettings_1a28462a3259e36fe5f98369f31d56ba0a"></a>

Gets the value of Input.

#### `public inline FORCEINLINE const ERHAPI_Input & `[`GetInput`](#structFRHAPI__ClientSettings_1af1648ab9ba315eb08deab9f69d272cf0)`() const` <a id="structFRHAPI__ClientSettings_1af1648ab9ba315eb08deab9f69d272cf0"></a>

Gets the value of Input.

#### `public inline FORCEINLINE void `[`SetInput`](#structFRHAPI__ClientSettings_1a331e165148448352203850770dbfdba0)`(const ERHAPI_Input & NewValue)` <a id="structFRHAPI__ClientSettings_1a331e165148448352203850770dbfdba0"></a>

Sets the value of Input.

#### `public inline FORCEINLINE void `[`SetInput`](#structFRHAPI__ClientSettings_1ae83c774cc30dd433be70ef3dc9d8bc76)`(ERHAPI_Input && NewValue)` <a id="structFRHAPI__ClientSettings_1ae83c774cc30dd433be70ef3dc9d8bc76"></a>

Sets the value of Input using move semantics.

#### `public inline FORCEINLINE ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__ClientSettings_1a33232e10f9b981d2580fd03f9ef2758d)`()` <a id="structFRHAPI__ClientSettings_1a33232e10f9b981d2580fd03f9ef2758d"></a>

Gets the value of DeviceType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__ClientSettings_1a7f2ceb2bd712c7dafe50dbc41540cdef)`() const` <a id="structFRHAPI__ClientSettings_1a7f2ceb2bd712c7dafe50dbc41540cdef"></a>

Gets the value of DeviceType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__ClientSettings_1a5b17f17fa9addac3b0a1cb978368caa5)`(const ERHAPI_DeviceType & DefaultValue) const` <a id="structFRHAPI__ClientSettings_1a5b17f17fa9addac3b0a1cb978368caa5"></a>

Gets the value of DeviceType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDeviceType`](#structFRHAPI__ClientSettings_1a7ca4fadec30fa5ceaf3319f8629ce3da)`(ERHAPI_DeviceType & OutValue) const` <a id="structFRHAPI__ClientSettings_1a7ca4fadec30fa5ceaf3319f8629ce3da"></a>

Fills OutValue with the value of DeviceType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_DeviceType * `[`GetDeviceTypeOrNull`](#structFRHAPI__ClientSettings_1a34d8ddcf86b982bf28bb1925eed6b931)`()` <a id="structFRHAPI__ClientSettings_1a34d8ddcf86b982bf28bb1925eed6b931"></a>

Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_DeviceType * `[`GetDeviceTypeOrNull`](#structFRHAPI__ClientSettings_1aefb414bef48ebb9bcfdc7edbe6a9f35c)`() const` <a id="structFRHAPI__ClientSettings_1aefb414bef48ebb9bcfdc7edbe6a9f35c"></a>

Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDeviceType`](#structFRHAPI__ClientSettings_1a91be88c639d679ba679e2341442887f9)`(const ERHAPI_DeviceType & NewValue)` <a id="structFRHAPI__ClientSettings_1a91be88c639d679ba679e2341442887f9"></a>

Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDeviceType`](#structFRHAPI__ClientSettings_1a13cc702a14a9a2a4364d5c2d73b2be97)`(ERHAPI_DeviceType && NewValue)` <a id="structFRHAPI__ClientSettings_1a13cc702a14a9a2a4364d5c2d73b2be97"></a>

Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true using move semantics.

#### `public inline void `[`ClearDeviceType`](#structFRHAPI__ClientSettings_1a290624f71ac968f32dc6af054f3e531a)`()` <a id="structFRHAPI__ClientSettings_1a290624f71ac968f32dc6af054f3e531a"></a>

Clears the value of DeviceType_Optional and sets DeviceType_IsSet to false.

