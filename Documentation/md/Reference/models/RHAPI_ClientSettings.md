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
`public inline ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__ClientSettings_1a100da80c0ace3cf60328207c2f616b07)`()` | Gets the value of PlatformId_Optional, regardless of it having been set.
`public inline const ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__ClientSettings_1a887a51a92ee02b15a7395a258987e548)`() const` | Gets the value of PlatformId_Optional, regardless of it having been set.
`public inline const ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__ClientSettings_1a9eaf29e31a98cbf42cf516ad17c7618c)`(const ERHAPI_PlatformID & DefaultValue) const` | Gets the value of PlatformId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformId`](#structFRHAPI__ClientSettings_1a98dc74d68ee137b3a4da707fe1188af8)`(ERHAPI_PlatformID & OutValue) const` | Fills OutValue with the value of PlatformId_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_PlatformID * `[`GetPlatformIdOrNull`](#structFRHAPI__ClientSettings_1aa399694a199977d0271607e040d79855)`()` | Returns a pointer to PlatformId_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_PlatformID * `[`GetPlatformIdOrNull`](#structFRHAPI__ClientSettings_1a1f974779074acd61b1e7b8852f206afb)`() const` | Returns a pointer to PlatformId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformId`](#structFRHAPI__ClientSettings_1a2e349e7e7a7e64f9240bbdc26e5f2d45)`(const ERHAPI_PlatformID & NewValue)` | Sets the value of PlatformId_Optional and also sets PlatformId_IsSet to true.
`public inline void `[`SetPlatformId`](#structFRHAPI__ClientSettings_1a0fcd9aa6004e107ff3c88932f80b3d4a)`(ERHAPI_PlatformID && NewValue)` | Sets the value of PlatformId_Optional and also sets PlatformId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformId`](#structFRHAPI__ClientSettings_1a664e3f1014412b0595ccc0af264539d8)`()` | Clears the value of PlatformId_Optional and sets PlatformId_IsSet to false.
`public inline bool `[`IsPlatformIdSet`](#structFRHAPI__ClientSettings_1af3a9f8f60641a95599d643fd987fd004)`() const` | Checks whether PlatformId_Optional has been set.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__ClientSettings_1a498cbdfff8e91e0b4d4cf13f35e969bf)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__ClientSettings_1aeee45c11f511061dca187f02acc20b98)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__ClientSettings_1a1e1325b0b74a07e3a448a96460f4c227)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatform`](#structFRHAPI__ClientSettings_1ae4527cd8e88b306dd13587b3b821d925)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__ClientSettings_1a7d1f8bc736b8ea19d3487b8efd9cf5cf)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__ClientSettings_1a30202a15b85146d7c81abd8db3648f47)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatform`](#structFRHAPI__ClientSettings_1a1be22efee7d1c5cbb10adc67cd6d281f)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline void `[`SetPlatform`](#structFRHAPI__ClientSettings_1adb02a093433bb593f4677d37de4da4f4)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__ClientSettings_1ac631d7b1d552180893eee6278baca67d)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline bool `[`IsPlatformSet`](#structFRHAPI__ClientSettings_1a7f3c89d65f94a238cc25603631c750c3)`() const` | Checks whether Platform_Optional has been set.
`public inline ERHAPI_Input & `[`GetInput`](#structFRHAPI__ClientSettings_1ae2a85bf2ff7d5183af8610a130cb392d)`()` | Gets the value of Input.
`public inline const ERHAPI_Input & `[`GetInput`](#structFRHAPI__ClientSettings_1a05f8071b92f06d6d9733874a6ddd63af)`() const` | Gets the value of Input.
`public inline void `[`SetInput`](#structFRHAPI__ClientSettings_1a76aa599df8c174ff30b606a756bd93eb)`(const ERHAPI_Input & NewValue)` | Sets the value of Input.
`public inline void `[`SetInput`](#structFRHAPI__ClientSettings_1a3f3387f1f429c614b68d2e3519eaf23b)`(ERHAPI_Input && NewValue)` | Sets the value of Input using move semantics.
`public inline ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__ClientSettings_1ab9de3300800dfc0d1e1b31537ee0c227)`()` | Gets the value of DeviceType_Optional, regardless of it having been set.
`public inline const ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__ClientSettings_1ad0dac320ce0f4f16d76738e7c36021ff)`() const` | Gets the value of DeviceType_Optional, regardless of it having been set.
`public inline const ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__ClientSettings_1ad07cfbff4ad879f8c85b693d0e6a831f)`(const ERHAPI_DeviceType & DefaultValue) const` | Gets the value of DeviceType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDeviceType`](#structFRHAPI__ClientSettings_1a831a9c0eb51c883a9982e15598f7a640)`(ERHAPI_DeviceType & OutValue) const` | Fills OutValue with the value of DeviceType_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_DeviceType * `[`GetDeviceTypeOrNull`](#structFRHAPI__ClientSettings_1ad31b677df7f7d5d27c4aa9450d88111d)`()` | Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_DeviceType * `[`GetDeviceTypeOrNull`](#structFRHAPI__ClientSettings_1a6c50fe10e20ae5d82116b5b21908e1fb)`() const` | Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDeviceType`](#structFRHAPI__ClientSettings_1ac66a0245e8cc3dcb3ab81ad17e23b283)`(const ERHAPI_DeviceType & NewValue)` | Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true.
`public inline void `[`SetDeviceType`](#structFRHAPI__ClientSettings_1ac10ec30c248c61d6375c95e034b1e9bc)`(ERHAPI_DeviceType && NewValue)` | Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true using move semantics.
`public inline void `[`ClearDeviceType`](#structFRHAPI__ClientSettings_1a290624f71ac968f32dc6af054f3e531a)`()` | Clears the value of DeviceType_Optional and sets DeviceType_IsSet to false.
`public inline bool `[`IsDeviceTypeSet`](#structFRHAPI__ClientSettings_1a454bee6f9cfee8bc73f8859c95775cce)`() const` | Checks whether DeviceType_Optional has been set.

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

#### `public inline ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__ClientSettings_1a100da80c0ace3cf60328207c2f616b07)`()` <a id="structFRHAPI__ClientSettings_1a100da80c0ace3cf60328207c2f616b07"></a>

Gets the value of PlatformId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__ClientSettings_1a887a51a92ee02b15a7395a258987e548)`() const` <a id="structFRHAPI__ClientSettings_1a887a51a92ee02b15a7395a258987e548"></a>

Gets the value of PlatformId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__ClientSettings_1a9eaf29e31a98cbf42cf516ad17c7618c)`(const ERHAPI_PlatformID & DefaultValue) const` <a id="structFRHAPI__ClientSettings_1a9eaf29e31a98cbf42cf516ad17c7618c"></a>

Gets the value of PlatformId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformId`](#structFRHAPI__ClientSettings_1a98dc74d68ee137b3a4da707fe1188af8)`(ERHAPI_PlatformID & OutValue) const` <a id="structFRHAPI__ClientSettings_1a98dc74d68ee137b3a4da707fe1188af8"></a>

Fills OutValue with the value of PlatformId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_PlatformID * `[`GetPlatformIdOrNull`](#structFRHAPI__ClientSettings_1aa399694a199977d0271607e040d79855)`()` <a id="structFRHAPI__ClientSettings_1aa399694a199977d0271607e040d79855"></a>

Returns a pointer to PlatformId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_PlatformID * `[`GetPlatformIdOrNull`](#structFRHAPI__ClientSettings_1a1f974779074acd61b1e7b8852f206afb)`() const` <a id="structFRHAPI__ClientSettings_1a1f974779074acd61b1e7b8852f206afb"></a>

Returns a pointer to PlatformId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformId`](#structFRHAPI__ClientSettings_1a2e349e7e7a7e64f9240bbdc26e5f2d45)`(const ERHAPI_PlatformID & NewValue)` <a id="structFRHAPI__ClientSettings_1a2e349e7e7a7e64f9240bbdc26e5f2d45"></a>

Sets the value of PlatformId_Optional and also sets PlatformId_IsSet to true.

#### `public inline void `[`SetPlatformId`](#structFRHAPI__ClientSettings_1a0fcd9aa6004e107ff3c88932f80b3d4a)`(ERHAPI_PlatformID && NewValue)` <a id="structFRHAPI__ClientSettings_1a0fcd9aa6004e107ff3c88932f80b3d4a"></a>

Sets the value of PlatformId_Optional and also sets PlatformId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformId`](#structFRHAPI__ClientSettings_1a664e3f1014412b0595ccc0af264539d8)`()` <a id="structFRHAPI__ClientSettings_1a664e3f1014412b0595ccc0af264539d8"></a>

Clears the value of PlatformId_Optional and sets PlatformId_IsSet to false.

#### `public inline bool `[`IsPlatformIdSet`](#structFRHAPI__ClientSettings_1af3a9f8f60641a95599d643fd987fd004)`() const` <a id="structFRHAPI__ClientSettings_1af3a9f8f60641a95599d643fd987fd004"></a>

Checks whether PlatformId_Optional has been set.

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__ClientSettings_1a498cbdfff8e91e0b4d4cf13f35e969bf)`()` <a id="structFRHAPI__ClientSettings_1a498cbdfff8e91e0b4d4cf13f35e969bf"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__ClientSettings_1aeee45c11f511061dca187f02acc20b98)`() const` <a id="structFRHAPI__ClientSettings_1aeee45c11f511061dca187f02acc20b98"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__ClientSettings_1a1e1325b0b74a07e3a448a96460f4c227)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__ClientSettings_1a1e1325b0b74a07e3a448a96460f4c227"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatform`](#structFRHAPI__ClientSettings_1ae4527cd8e88b306dd13587b3b821d925)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__ClientSettings_1ae4527cd8e88b306dd13587b3b821d925"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__ClientSettings_1a7d1f8bc736b8ea19d3487b8efd9cf5cf)`()` <a id="structFRHAPI__ClientSettings_1a7d1f8bc736b8ea19d3487b8efd9cf5cf"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__ClientSettings_1a30202a15b85146d7c81abd8db3648f47)`() const` <a id="structFRHAPI__ClientSettings_1a30202a15b85146d7c81abd8db3648f47"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatform`](#structFRHAPI__ClientSettings_1a1be22efee7d1c5cbb10adc67cd6d281f)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__ClientSettings_1a1be22efee7d1c5cbb10adc67cd6d281f"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline void `[`SetPlatform`](#structFRHAPI__ClientSettings_1adb02a093433bb593f4677d37de4da4f4)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__ClientSettings_1adb02a093433bb593f4677d37de4da4f4"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__ClientSettings_1ac631d7b1d552180893eee6278baca67d)`()` <a id="structFRHAPI__ClientSettings_1ac631d7b1d552180893eee6278baca67d"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline bool `[`IsPlatformSet`](#structFRHAPI__ClientSettings_1a7f3c89d65f94a238cc25603631c750c3)`() const` <a id="structFRHAPI__ClientSettings_1a7f3c89d65f94a238cc25603631c750c3"></a>

Checks whether Platform_Optional has been set.

#### `public inline ERHAPI_Input & `[`GetInput`](#structFRHAPI__ClientSettings_1ae2a85bf2ff7d5183af8610a130cb392d)`()` <a id="structFRHAPI__ClientSettings_1ae2a85bf2ff7d5183af8610a130cb392d"></a>

Gets the value of Input.

#### `public inline const ERHAPI_Input & `[`GetInput`](#structFRHAPI__ClientSettings_1a05f8071b92f06d6d9733874a6ddd63af)`() const` <a id="structFRHAPI__ClientSettings_1a05f8071b92f06d6d9733874a6ddd63af"></a>

Gets the value of Input.

#### `public inline void `[`SetInput`](#structFRHAPI__ClientSettings_1a76aa599df8c174ff30b606a756bd93eb)`(const ERHAPI_Input & NewValue)` <a id="structFRHAPI__ClientSettings_1a76aa599df8c174ff30b606a756bd93eb"></a>

Sets the value of Input.

#### `public inline void `[`SetInput`](#structFRHAPI__ClientSettings_1a3f3387f1f429c614b68d2e3519eaf23b)`(ERHAPI_Input && NewValue)` <a id="structFRHAPI__ClientSettings_1a3f3387f1f429c614b68d2e3519eaf23b"></a>

Sets the value of Input using move semantics.

#### `public inline ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__ClientSettings_1ab9de3300800dfc0d1e1b31537ee0c227)`()` <a id="structFRHAPI__ClientSettings_1ab9de3300800dfc0d1e1b31537ee0c227"></a>

Gets the value of DeviceType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__ClientSettings_1ad0dac320ce0f4f16d76738e7c36021ff)`() const` <a id="structFRHAPI__ClientSettings_1ad0dac320ce0f4f16d76738e7c36021ff"></a>

Gets the value of DeviceType_Optional, regardless of it having been set.

#### `public inline const ERHAPI_DeviceType & `[`GetDeviceType`](#structFRHAPI__ClientSettings_1ad07cfbff4ad879f8c85b693d0e6a831f)`(const ERHAPI_DeviceType & DefaultValue) const` <a id="structFRHAPI__ClientSettings_1ad07cfbff4ad879f8c85b693d0e6a831f"></a>

Gets the value of DeviceType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDeviceType`](#structFRHAPI__ClientSettings_1a831a9c0eb51c883a9982e15598f7a640)`(ERHAPI_DeviceType & OutValue) const` <a id="structFRHAPI__ClientSettings_1a831a9c0eb51c883a9982e15598f7a640"></a>

Fills OutValue with the value of DeviceType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_DeviceType * `[`GetDeviceTypeOrNull`](#structFRHAPI__ClientSettings_1ad31b677df7f7d5d27c4aa9450d88111d)`()` <a id="structFRHAPI__ClientSettings_1ad31b677df7f7d5d27c4aa9450d88111d"></a>

Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_DeviceType * `[`GetDeviceTypeOrNull`](#structFRHAPI__ClientSettings_1a6c50fe10e20ae5d82116b5b21908e1fb)`() const` <a id="structFRHAPI__ClientSettings_1a6c50fe10e20ae5d82116b5b21908e1fb"></a>

Returns a pointer to DeviceType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDeviceType`](#structFRHAPI__ClientSettings_1ac66a0245e8cc3dcb3ab81ad17e23b283)`(const ERHAPI_DeviceType & NewValue)` <a id="structFRHAPI__ClientSettings_1ac66a0245e8cc3dcb3ab81ad17e23b283"></a>

Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true.

#### `public inline void `[`SetDeviceType`](#structFRHAPI__ClientSettings_1ac10ec30c248c61d6375c95e034b1e9bc)`(ERHAPI_DeviceType && NewValue)` <a id="structFRHAPI__ClientSettings_1ac10ec30c248c61d6375c95e034b1e9bc"></a>

Sets the value of DeviceType_Optional and also sets DeviceType_IsSet to true using move semantics.

#### `public inline void `[`ClearDeviceType`](#structFRHAPI__ClientSettings_1a290624f71ac968f32dc6af054f3e531a)`()` <a id="structFRHAPI__ClientSettings_1a290624f71ac968f32dc6af054f3e531a"></a>

Clears the value of DeviceType_Optional and sets DeviceType_IsSet to false.

#### `public inline bool `[`IsDeviceTypeSet`](#structFRHAPI__ClientSettings_1a454bee6f9cfee8bc73f8859c95775cce)`() const` <a id="structFRHAPI__ClientSettings_1a454bee6f9cfee8bc73f8859c95775cce"></a>

Checks whether DeviceType_Optional has been set.

