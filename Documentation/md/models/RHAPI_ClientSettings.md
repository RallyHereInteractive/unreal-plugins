# group `RHAPI_ClientSettings` <a id="group__RHAPI__ClientSettings"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_ClientSettings`](#structFRHAPI__ClientSettings) | A player&#39;s platform and input settings.

---
title: FRHAPI_ClientSettings
---

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
`public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__ClientSettings_1a3cda3757a464c85429c807e30aafb5c9) | Which platform this client is on. If one is not provided, will get the platform from the 'platform_id'. At least one of the two is required.
`public bool `[`Platform_IsSet`](#structFRHAPI__ClientSettings_1a431c764ade30fe22fdaed9059dffbfa4) | true if Platform_Optional has been set to a value
`public ERHAPI_Input `[`Input`](#structFRHAPI__ClientSettings_1a7bcfb29cf8b0184e366256a614f39278) | Which input type this client is using.
`public virtual bool `[`FromJson`](#structFRHAPI__ClientSettings_1a5022e2daded462f99927edbd94981a43)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__ClientSettings_1aa686bf40f9a3c9f9046f2dc50ef5b161)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__ClientSettings_1ababdad725c89a53c60af202e4390d584)`()` | Gets the value of PlatformId_Optional, regardless of it having been set.
`public inline const ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__ClientSettings_1ae7eed8a38479ae108c355641582b0a55)`() const` | Gets the value of PlatformId_Optional, regardless of it having been set.
`public inline const ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__ClientSettings_1acdebe91f0e01ccac31a4eb29e67ac278)`(const ERHAPI_PlatformID & DefaultValue) const` | Gets the value of PlatformId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformId`](#structFRHAPI__ClientSettings_1a98dc74d68ee137b3a4da707fe1188af8)`(ERHAPI_PlatformID & OutValue) const` | Fills OutValue with the value of PlatformId_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_PlatformID * `[`GetPlatformIdOrNull`](#structFRHAPI__ClientSettings_1a682c548a788d96fb81260c49f9ff7887)`()` | Returns a pointer to PlatformId_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_PlatformID * `[`GetPlatformIdOrNull`](#structFRHAPI__ClientSettings_1a15bc6ad8edead108914e572d428ae6d3)`() const` | Returns a pointer to PlatformId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformId`](#structFRHAPI__ClientSettings_1a2e349e7e7a7e64f9240bbdc26e5f2d45)`(const ERHAPI_PlatformID & NewValue)` | Sets the value of PlatformId_Optional and also sets PlatformId_IsSet to true.
`public inline void `[`SetPlatformId`](#structFRHAPI__ClientSettings_1a0fcd9aa6004e107ff3c88932f80b3d4a)`(ERHAPI_PlatformID && NewValue)` | Sets the value of PlatformId_Optional and also sets PlatformId_IsSet to true using move semantics.
`public inline void `[`ClearPlatformId`](#structFRHAPI__ClientSettings_1a664e3f1014412b0595ccc0af264539d8)`()` | Clears the value of PlatformId_Optional and sets PlatformId_IsSet to false.
`public inline bool `[`IsPlatformIdSet`](#structFRHAPI__ClientSettings_1af3a9f8f60641a95599d643fd987fd004)`() const` | Checks whether PlatformId_Optional has been set.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__ClientSettings_1aae02bf1e6b936d62341704c89dc12234)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__ClientSettings_1aada5b2c1fd356a1896e31a81dfbf86cb)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__ClientSettings_1a87db38bba214f5f0bfd4cebdb5399de3)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatform`](#structFRHAPI__ClientSettings_1ae4527cd8e88b306dd13587b3b821d925)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__ClientSettings_1afe0cf4cde1a6e9f19aa7bdc435cf6596)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__ClientSettings_1a380ae371c54cb209f3f0286482b43408)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatform`](#structFRHAPI__ClientSettings_1a1be22efee7d1c5cbb10adc67cd6d281f)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline void `[`SetPlatform`](#structFRHAPI__ClientSettings_1adb02a093433bb593f4677d37de4da4f4)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__ClientSettings_1ac631d7b1d552180893eee6278baca67d)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline bool `[`IsPlatformSet`](#structFRHAPI__ClientSettings_1a7f3c89d65f94a238cc25603631c750c3)`() const` | Checks whether Platform_Optional has been set.
`public inline ERHAPI_Input & `[`GetInput`](#structFRHAPI__ClientSettings_1a93d46c212f51efcac6bc6a56655367ce)`()` | Gets the value of Input.
`public inline const ERHAPI_Input & `[`GetInput`](#structFRHAPI__ClientSettings_1a987756f572f84cc101ec31fef828a1b9)`() const` | Gets the value of Input.
`public inline void `[`SetInput`](#structFRHAPI__ClientSettings_1a76aa599df8c174ff30b606a756bd93eb)`(const ERHAPI_Input & NewValue)` | Sets the value of Input.
`public inline void `[`SetInput`](#structFRHAPI__ClientSettings_1a3f3387f1f429c614b68d2e3519eaf23b)`(ERHAPI_Input && NewValue)` | Sets the value of Input using move semantics.

### Members

#### `public ERHAPI_PlatformID `[`PlatformId_Optional`](#structFRHAPI__ClientSettings_1ae9ccc7ffd86f7cb177884eabb4102e60) <a id="structFRHAPI__ClientSettings_1ae9ccc7ffd86f7cb177884eabb4102e60"></a>

DEPRECATED. Use 'platform' instead. Id for which platform this client is on. ID will be ignored if 'platform' is given. At least one of the two is required.

#### `public bool `[`PlatformId_IsSet`](#structFRHAPI__ClientSettings_1a5abccc6e19a15830bf7a25bc0fef7c3e) <a id="structFRHAPI__ClientSettings_1a5abccc6e19a15830bf7a25bc0fef7c3e"></a>

true if PlatformId_Optional has been set to a value

#### `public ERHAPI_Platform `[`Platform_Optional`](#structFRHAPI__ClientSettings_1a3cda3757a464c85429c807e30aafb5c9) <a id="structFRHAPI__ClientSettings_1a3cda3757a464c85429c807e30aafb5c9"></a>

Which platform this client is on. If one is not provided, will get the platform from the 'platform_id'. At least one of the two is required.

#### `public bool `[`Platform_IsSet`](#structFRHAPI__ClientSettings_1a431c764ade30fe22fdaed9059dffbfa4) <a id="structFRHAPI__ClientSettings_1a431c764ade30fe22fdaed9059dffbfa4"></a>

true if Platform_Optional has been set to a value

#### `public ERHAPI_Input `[`Input`](#structFRHAPI__ClientSettings_1a7bcfb29cf8b0184e366256a614f39278) <a id="structFRHAPI__ClientSettings_1a7bcfb29cf8b0184e366256a614f39278"></a>

Which input type this client is using.

#### `public virtual bool `[`FromJson`](#structFRHAPI__ClientSettings_1a5022e2daded462f99927edbd94981a43)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__ClientSettings_1a5022e2daded462f99927edbd94981a43"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__ClientSettings_1aa686bf40f9a3c9f9046f2dc50ef5b161)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__ClientSettings_1aa686bf40f9a3c9f9046f2dc50ef5b161"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__ClientSettings_1ababdad725c89a53c60af202e4390d584)`()` <a id="structFRHAPI__ClientSettings_1ababdad725c89a53c60af202e4390d584"></a>

Gets the value of PlatformId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__ClientSettings_1ae7eed8a38479ae108c355641582b0a55)`() const` <a id="structFRHAPI__ClientSettings_1ae7eed8a38479ae108c355641582b0a55"></a>

Gets the value of PlatformId_Optional, regardless of it having been set.

#### `public inline const ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__ClientSettings_1acdebe91f0e01ccac31a4eb29e67ac278)`(const ERHAPI_PlatformID & DefaultValue) const` <a id="structFRHAPI__ClientSettings_1acdebe91f0e01ccac31a4eb29e67ac278"></a>

Gets the value of PlatformId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatformId`](#structFRHAPI__ClientSettings_1a98dc74d68ee137b3a4da707fe1188af8)`(ERHAPI_PlatformID & OutValue) const` <a id="structFRHAPI__ClientSettings_1a98dc74d68ee137b3a4da707fe1188af8"></a>

Fills OutValue with the value of PlatformId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_PlatformID * `[`GetPlatformIdOrNull`](#structFRHAPI__ClientSettings_1a682c548a788d96fb81260c49f9ff7887)`()` <a id="structFRHAPI__ClientSettings_1a682c548a788d96fb81260c49f9ff7887"></a>

Returns a pointer to PlatformId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_PlatformID * `[`GetPlatformIdOrNull`](#structFRHAPI__ClientSettings_1a15bc6ad8edead108914e572d428ae6d3)`() const` <a id="structFRHAPI__ClientSettings_1a15bc6ad8edead108914e572d428ae6d3"></a>

Returns a pointer to PlatformId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatformId`](#structFRHAPI__ClientSettings_1a2e349e7e7a7e64f9240bbdc26e5f2d45)`(const ERHAPI_PlatformID & NewValue)` <a id="structFRHAPI__ClientSettings_1a2e349e7e7a7e64f9240bbdc26e5f2d45"></a>

Sets the value of PlatformId_Optional and also sets PlatformId_IsSet to true.

#### `public inline void `[`SetPlatformId`](#structFRHAPI__ClientSettings_1a0fcd9aa6004e107ff3c88932f80b3d4a)`(ERHAPI_PlatformID && NewValue)` <a id="structFRHAPI__ClientSettings_1a0fcd9aa6004e107ff3c88932f80b3d4a"></a>

Sets the value of PlatformId_Optional and also sets PlatformId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatformId`](#structFRHAPI__ClientSettings_1a664e3f1014412b0595ccc0af264539d8)`()` <a id="structFRHAPI__ClientSettings_1a664e3f1014412b0595ccc0af264539d8"></a>

Clears the value of PlatformId_Optional and sets PlatformId_IsSet to false.

#### `public inline bool `[`IsPlatformIdSet`](#structFRHAPI__ClientSettings_1af3a9f8f60641a95599d643fd987fd004)`() const` <a id="structFRHAPI__ClientSettings_1af3a9f8f60641a95599d643fd987fd004"></a>

Checks whether PlatformId_Optional has been set.

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__ClientSettings_1aae02bf1e6b936d62341704c89dc12234)`()` <a id="structFRHAPI__ClientSettings_1aae02bf1e6b936d62341704c89dc12234"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__ClientSettings_1aada5b2c1fd356a1896e31a81dfbf86cb)`() const` <a id="structFRHAPI__ClientSettings_1aada5b2c1fd356a1896e31a81dfbf86cb"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__ClientSettings_1a87db38bba214f5f0bfd4cebdb5399de3)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__ClientSettings_1a87db38bba214f5f0bfd4cebdb5399de3"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlatform`](#structFRHAPI__ClientSettings_1ae4527cd8e88b306dd13587b3b821d925)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__ClientSettings_1ae4527cd8e88b306dd13587b3b821d925"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__ClientSettings_1afe0cf4cde1a6e9f19aa7bdc435cf6596)`()` <a id="structFRHAPI__ClientSettings_1afe0cf4cde1a6e9f19aa7bdc435cf6596"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_Platform * `[`GetPlatformOrNull`](#structFRHAPI__ClientSettings_1a380ae371c54cb209f3f0286482b43408)`() const` <a id="structFRHAPI__ClientSettings_1a380ae371c54cb209f3f0286482b43408"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlatform`](#structFRHAPI__ClientSettings_1a1be22efee7d1c5cbb10adc67cd6d281f)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__ClientSettings_1a1be22efee7d1c5cbb10adc67cd6d281f"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline void `[`SetPlatform`](#structFRHAPI__ClientSettings_1adb02a093433bb593f4677d37de4da4f4)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__ClientSettings_1adb02a093433bb593f4677d37de4da4f4"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__ClientSettings_1ac631d7b1d552180893eee6278baca67d)`()` <a id="structFRHAPI__ClientSettings_1ac631d7b1d552180893eee6278baca67d"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline bool `[`IsPlatformSet`](#structFRHAPI__ClientSettings_1a7f3c89d65f94a238cc25603631c750c3)`() const` <a id="structFRHAPI__ClientSettings_1a7f3c89d65f94a238cc25603631c750c3"></a>

Checks whether Platform_Optional has been set.

#### `public inline ERHAPI_Input & `[`GetInput`](#structFRHAPI__ClientSettings_1a93d46c212f51efcac6bc6a56655367ce)`()` <a id="structFRHAPI__ClientSettings_1a93d46c212f51efcac6bc6a56655367ce"></a>

Gets the value of Input.

#### `public inline const ERHAPI_Input & `[`GetInput`](#structFRHAPI__ClientSettings_1a987756f572f84cc101ec31fef828a1b9)`() const` <a id="structFRHAPI__ClientSettings_1a987756f572f84cc101ec31fef828a1b9"></a>

Gets the value of Input.

#### `public inline void `[`SetInput`](#structFRHAPI__ClientSettings_1a76aa599df8c174ff30b606a756bd93eb)`(const ERHAPI_Input & NewValue)` <a id="structFRHAPI__ClientSettings_1a76aa599df8c174ff30b606a756bd93eb"></a>

Sets the value of Input.

#### `public inline void `[`SetInput`](#structFRHAPI__ClientSettings_1a3f3387f1f429c614b68d2e3519eaf23b)`(ERHAPI_Input && NewValue)` <a id="structFRHAPI__ClientSettings_1a3f3387f1f429c614b68d2e3519eaf23b"></a>

Sets the value of Input using move semantics.

