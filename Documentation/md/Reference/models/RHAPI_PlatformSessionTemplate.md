---
title: RHAPI_PlatformSessionTemplate
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformSessionTemplate`](#structFRHAPI__PlatformSessionTemplate) | Template used to create new platform sessions for a specific type of platform. Configurable in the developer portal.

## struct `FRHAPI_PlatformSessionTemplate` <a id="structFRHAPI__PlatformSessionTemplate"></a>

```
struct FRHAPI_PlatformSessionTemplate
  : public FRHAPI_Model
```

Template used to create new platform sessions for a specific type of platform. Configurable in the developer portal.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_PlatformID `[`PlatformId`](#structFRHAPI__PlatformSessionTemplate_1afe926a18175ccb2a9c1efa37abab36ac) | DEPRECATED. ID for the platform type for this template. Use 'platform' instead.
`public ERHAPI_Platform `[`Platform`](#structFRHAPI__PlatformSessionTemplate_1a234c5994651cf76b82cd5fc10d6789b1) | Platform.
`public FString `[`PlatformSessionType`](#structFRHAPI__PlatformSessionTemplate_1a467f663872de483c259ca4e0b398bbc0) | Platform-Specific Identifier for the Platform's template.
`public int32 `[`MaxPlayers_Optional`](#structFRHAPI__PlatformSessionTemplate_1a19ca1aa4d6c345789146cbb82cc4b05a) | The maximum number of players that can be a part of this platform session.
`public bool `[`MaxPlayers_IsSet`](#structFRHAPI__PlatformSessionTemplate_1a820d7ec5127d55985fe8ec28a8507cf9) | true if MaxPlayers_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlatformSessionTemplate_1a011145a99ccb57b768e35067cded1d1d) | Product-defined custom data.
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlatformSessionTemplate_1a466d856fb15205041dfe368181512ec7) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformSessionTemplate_1a5feca0eb1cdc60926b84e5cba8ddfd14)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformSessionTemplate_1a169cedf88c64ee45f4b02a18fef622c2)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__PlatformSessionTemplate_1a86bfd1136c2806154ea2ee4f2b3447b0)`()` | Gets the value of PlatformId.
`public inline const ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__PlatformSessionTemplate_1a3740fc26d73a926acd89c94af2e5fe35)`() const` | Gets the value of PlatformId.
`public inline void `[`SetPlatformId`](#structFRHAPI__PlatformSessionTemplate_1a50de2227039ed3b70a00f0bdd56c6176)`(const ERHAPI_PlatformID & NewValue)` | Sets the value of PlatformId.
`public inline void `[`SetPlatformId`](#structFRHAPI__PlatformSessionTemplate_1a1ccf854776ab9ce9ef98ff7dfb4db375)`(ERHAPI_PlatformID && NewValue)` | Sets the value of PlatformId using move semantics.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSessionTemplate_1a5decadd98a5a175c3ec50e01f021f9e9)`()` | Gets the value of Platform.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSessionTemplate_1a7a6b98f08c9544821a261ab14ae54a8a)`() const` | Gets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PlatformSessionTemplate_1ae2778f814b7c09406ecfeb489348470e)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PlatformSessionTemplate_1a8b23d91876792c0fad9a23d7fc0baae8)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FString & `[`GetPlatformSessionType`](#structFRHAPI__PlatformSessionTemplate_1afd801507db5a8642f2fafdd373b167e4)`()` | Gets the value of PlatformSessionType.
`public inline const FString & `[`GetPlatformSessionType`](#structFRHAPI__PlatformSessionTemplate_1ac8217438e89dcbef8773fea29dd1f052)`() const` | Gets the value of PlatformSessionType.
`public inline void `[`SetPlatformSessionType`](#structFRHAPI__PlatformSessionTemplate_1ae4649c2c8e864f15123671ca4ad6697e)`(const FString & NewValue)` | Sets the value of PlatformSessionType.
`public inline void `[`SetPlatformSessionType`](#structFRHAPI__PlatformSessionTemplate_1ab0a3eb9f9c4e4a3ee3f7cc881c933f45)`(FString && NewValue)` | Sets the value of PlatformSessionType using move semantics.
`public inline int32 & `[`GetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1a63584d4fa0eff497a2150cd9c7cd6f75)`()` | Gets the value of MaxPlayers_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1aa8e36788f3a2293215524a8595f8bbdc)`() const` | Gets the value of MaxPlayers_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1af9c816fd8125a375cc80dad119aaf2ad)`(const int32 & DefaultValue) const` | Gets the value of MaxPlayers_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1a16185aff7b18ea80da7ac53720287811)`(int32 & OutValue) const` | Fills OutValue with the value of MaxPlayers_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetMaxPlayersOrNull`](#structFRHAPI__PlatformSessionTemplate_1aa59222ac248c2256bd7e3debde88f368)`()` | Returns a pointer to MaxPlayers_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetMaxPlayersOrNull`](#structFRHAPI__PlatformSessionTemplate_1ace3298ff7d281adbe10ce783938559ca)`() const` | Returns a pointer to MaxPlayers_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1a20472cbcd3e87ccbbf4933a6f7db32a3)`(const int32 & NewValue)` | Sets the value of MaxPlayers_Optional and also sets MaxPlayers_IsSet to true.
`public inline void `[`SetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1a54fcc2739ae5f6a0c923525ccfe7250e)`(int32 && NewValue)` | Sets the value of MaxPlayers_Optional and also sets MaxPlayers_IsSet to true using move semantics.
`public inline void `[`ClearMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1af2d8b5f464542815bcbbcf41870d0acc)`()` | Clears the value of MaxPlayers_Optional and sets MaxPlayers_IsSet to false.
`public inline bool `[`IsMaxPlayersSet`](#structFRHAPI__PlatformSessionTemplate_1aeb4e9ed316f1003e389b5163b4f052b3)`() const` | Checks whether MaxPlayers_Optional has been set.
`public inline bool `[`IsMaxPlayersDefaultValue`](#structFRHAPI__PlatformSessionTemplate_1afcc99ba028d9ae88bd51bd821e79081e)`() const` | Returns true if MaxPlayers_Optional is set and matches the default value.
`public inline void `[`SetMaxPlayersToDefault`](#structFRHAPI__PlatformSessionTemplate_1a906c779ed24a184bbf330d00f26a6f21)`()` | Sets the value of MaxPlayers_Optional to its default and also sets MaxPlayers_IsSet to true.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSessionTemplate_1a1418f9c744bffff2422a0bf698fa6cfd)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSessionTemplate_1a85e4cd7ca9329f5279bf3b918d4cb105)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSessionTemplate_1a370451a9be05eb4d53558af41192d971)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlatformSessionTemplate_1a245b15b5a658c492364ea19ad5911b56)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSessionTemplate_1add158a418bef6a3c9b7d4b91006b8695)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSessionTemplate_1a7270bf6f0c05bca6c6424cf1eaf25dfe)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PlatformSessionTemplate_1a84b094834ca70ea0cdef308dfca71190)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__PlatformSessionTemplate_1aca029e260d3091a665af93f24722cea1)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlatformSessionTemplate_1a1bab29f42e2c1c50068349c69c644583)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlatformSessionTemplate_1ad4b2f954c49c787ae1e31ed9d827ab0a)`() const` | Checks whether CustomData_Optional has been set.

### Members

#### `public ERHAPI_PlatformID `[`PlatformId`](#structFRHAPI__PlatformSessionTemplate_1afe926a18175ccb2a9c1efa37abab36ac) <a id="structFRHAPI__PlatformSessionTemplate_1afe926a18175ccb2a9c1efa37abab36ac"></a>

DEPRECATED. ID for the platform type for this template. Use 'platform' instead.

#### `public ERHAPI_Platform `[`Platform`](#structFRHAPI__PlatformSessionTemplate_1a234c5994651cf76b82cd5fc10d6789b1) <a id="structFRHAPI__PlatformSessionTemplate_1a234c5994651cf76b82cd5fc10d6789b1"></a>

Platform.

#### `public FString `[`PlatformSessionType`](#structFRHAPI__PlatformSessionTemplate_1a467f663872de483c259ca4e0b398bbc0) <a id="structFRHAPI__PlatformSessionTemplate_1a467f663872de483c259ca4e0b398bbc0"></a>

Platform-Specific Identifier for the Platform's template.

#### `public int32 `[`MaxPlayers_Optional`](#structFRHAPI__PlatformSessionTemplate_1a19ca1aa4d6c345789146cbb82cc4b05a) <a id="structFRHAPI__PlatformSessionTemplate_1a19ca1aa4d6c345789146cbb82cc4b05a"></a>

The maximum number of players that can be a part of this platform session.

#### `public bool `[`MaxPlayers_IsSet`](#structFRHAPI__PlatformSessionTemplate_1a820d7ec5127d55985fe8ec28a8507cf9) <a id="structFRHAPI__PlatformSessionTemplate_1a820d7ec5127d55985fe8ec28a8507cf9"></a>

true if MaxPlayers_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlatformSessionTemplate_1a011145a99ccb57b768e35067cded1d1d) <a id="structFRHAPI__PlatformSessionTemplate_1a011145a99ccb57b768e35067cded1d1d"></a>

Product-defined custom data.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlatformSessionTemplate_1a466d856fb15205041dfe368181512ec7) <a id="structFRHAPI__PlatformSessionTemplate_1a466d856fb15205041dfe368181512ec7"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformSessionTemplate_1a5feca0eb1cdc60926b84e5cba8ddfd14)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformSessionTemplate_1a5feca0eb1cdc60926b84e5cba8ddfd14"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformSessionTemplate_1a169cedf88c64ee45f4b02a18fef622c2)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlatformSessionTemplate_1a169cedf88c64ee45f4b02a18fef622c2"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__PlatformSessionTemplate_1a86bfd1136c2806154ea2ee4f2b3447b0)`()` <a id="structFRHAPI__PlatformSessionTemplate_1a86bfd1136c2806154ea2ee4f2b3447b0"></a>

Gets the value of PlatformId.

#### `public inline const ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__PlatformSessionTemplate_1a3740fc26d73a926acd89c94af2e5fe35)`() const` <a id="structFRHAPI__PlatformSessionTemplate_1a3740fc26d73a926acd89c94af2e5fe35"></a>

Gets the value of PlatformId.

#### `public inline void `[`SetPlatformId`](#structFRHAPI__PlatformSessionTemplate_1a50de2227039ed3b70a00f0bdd56c6176)`(const ERHAPI_PlatformID & NewValue)` <a id="structFRHAPI__PlatformSessionTemplate_1a50de2227039ed3b70a00f0bdd56c6176"></a>

Sets the value of PlatformId.

#### `public inline void `[`SetPlatformId`](#structFRHAPI__PlatformSessionTemplate_1a1ccf854776ab9ce9ef98ff7dfb4db375)`(ERHAPI_PlatformID && NewValue)` <a id="structFRHAPI__PlatformSessionTemplate_1a1ccf854776ab9ce9ef98ff7dfb4db375"></a>

Sets the value of PlatformId using move semantics.

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSessionTemplate_1a5decadd98a5a175c3ec50e01f021f9e9)`()` <a id="structFRHAPI__PlatformSessionTemplate_1a5decadd98a5a175c3ec50e01f021f9e9"></a>

Gets the value of Platform.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSessionTemplate_1a7a6b98f08c9544821a261ab14ae54a8a)`() const` <a id="structFRHAPI__PlatformSessionTemplate_1a7a6b98f08c9544821a261ab14ae54a8a"></a>

Gets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PlatformSessionTemplate_1ae2778f814b7c09406ecfeb489348470e)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PlatformSessionTemplate_1ae2778f814b7c09406ecfeb489348470e"></a>

Sets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PlatformSessionTemplate_1a8b23d91876792c0fad9a23d7fc0baae8)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PlatformSessionTemplate_1a8b23d91876792c0fad9a23d7fc0baae8"></a>

Sets the value of Platform using move semantics.

#### `public inline FString & `[`GetPlatformSessionType`](#structFRHAPI__PlatformSessionTemplate_1afd801507db5a8642f2fafdd373b167e4)`()` <a id="structFRHAPI__PlatformSessionTemplate_1afd801507db5a8642f2fafdd373b167e4"></a>

Gets the value of PlatformSessionType.

#### `public inline const FString & `[`GetPlatformSessionType`](#structFRHAPI__PlatformSessionTemplate_1ac8217438e89dcbef8773fea29dd1f052)`() const` <a id="structFRHAPI__PlatformSessionTemplate_1ac8217438e89dcbef8773fea29dd1f052"></a>

Gets the value of PlatformSessionType.

#### `public inline void `[`SetPlatformSessionType`](#structFRHAPI__PlatformSessionTemplate_1ae4649c2c8e864f15123671ca4ad6697e)`(const FString & NewValue)` <a id="structFRHAPI__PlatformSessionTemplate_1ae4649c2c8e864f15123671ca4ad6697e"></a>

Sets the value of PlatformSessionType.

#### `public inline void `[`SetPlatformSessionType`](#structFRHAPI__PlatformSessionTemplate_1ab0a3eb9f9c4e4a3ee3f7cc881c933f45)`(FString && NewValue)` <a id="structFRHAPI__PlatformSessionTemplate_1ab0a3eb9f9c4e4a3ee3f7cc881c933f45"></a>

Sets the value of PlatformSessionType using move semantics.

#### `public inline int32 & `[`GetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1a63584d4fa0eff497a2150cd9c7cd6f75)`()` <a id="structFRHAPI__PlatformSessionTemplate_1a63584d4fa0eff497a2150cd9c7cd6f75"></a>

Gets the value of MaxPlayers_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1aa8e36788f3a2293215524a8595f8bbdc)`() const` <a id="structFRHAPI__PlatformSessionTemplate_1aa8e36788f3a2293215524a8595f8bbdc"></a>

Gets the value of MaxPlayers_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1af9c816fd8125a375cc80dad119aaf2ad)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlatformSessionTemplate_1af9c816fd8125a375cc80dad119aaf2ad"></a>

Gets the value of MaxPlayers_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1a16185aff7b18ea80da7ac53720287811)`(int32 & OutValue) const` <a id="structFRHAPI__PlatformSessionTemplate_1a16185aff7b18ea80da7ac53720287811"></a>

Fills OutValue with the value of MaxPlayers_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetMaxPlayersOrNull`](#structFRHAPI__PlatformSessionTemplate_1aa59222ac248c2256bd7e3debde88f368)`()` <a id="structFRHAPI__PlatformSessionTemplate_1aa59222ac248c2256bd7e3debde88f368"></a>

Returns a pointer to MaxPlayers_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetMaxPlayersOrNull`](#structFRHAPI__PlatformSessionTemplate_1ace3298ff7d281adbe10ce783938559ca)`() const` <a id="structFRHAPI__PlatformSessionTemplate_1ace3298ff7d281adbe10ce783938559ca"></a>

Returns a pointer to MaxPlayers_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1a20472cbcd3e87ccbbf4933a6f7db32a3)`(const int32 & NewValue)` <a id="structFRHAPI__PlatformSessionTemplate_1a20472cbcd3e87ccbbf4933a6f7db32a3"></a>

Sets the value of MaxPlayers_Optional and also sets MaxPlayers_IsSet to true.

#### `public inline void `[`SetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1a54fcc2739ae5f6a0c923525ccfe7250e)`(int32 && NewValue)` <a id="structFRHAPI__PlatformSessionTemplate_1a54fcc2739ae5f6a0c923525ccfe7250e"></a>

Sets the value of MaxPlayers_Optional and also sets MaxPlayers_IsSet to true using move semantics.

#### `public inline void `[`ClearMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1af2d8b5f464542815bcbbcf41870d0acc)`()` <a id="structFRHAPI__PlatformSessionTemplate_1af2d8b5f464542815bcbbcf41870d0acc"></a>

Clears the value of MaxPlayers_Optional and sets MaxPlayers_IsSet to false.

#### `public inline bool `[`IsMaxPlayersSet`](#structFRHAPI__PlatformSessionTemplate_1aeb4e9ed316f1003e389b5163b4f052b3)`() const` <a id="structFRHAPI__PlatformSessionTemplate_1aeb4e9ed316f1003e389b5163b4f052b3"></a>

Checks whether MaxPlayers_Optional has been set.

#### `public inline bool `[`IsMaxPlayersDefaultValue`](#structFRHAPI__PlatformSessionTemplate_1afcc99ba028d9ae88bd51bd821e79081e)`() const` <a id="structFRHAPI__PlatformSessionTemplate_1afcc99ba028d9ae88bd51bd821e79081e"></a>

Returns true if MaxPlayers_Optional is set and matches the default value.

#### `public inline void `[`SetMaxPlayersToDefault`](#structFRHAPI__PlatformSessionTemplate_1a906c779ed24a184bbf330d00f26a6f21)`()` <a id="structFRHAPI__PlatformSessionTemplate_1a906c779ed24a184bbf330d00f26a6f21"></a>

Sets the value of MaxPlayers_Optional to its default and also sets MaxPlayers_IsSet to true.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSessionTemplate_1a1418f9c744bffff2422a0bf698fa6cfd)`()` <a id="structFRHAPI__PlatformSessionTemplate_1a1418f9c744bffff2422a0bf698fa6cfd"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSessionTemplate_1a85e4cd7ca9329f5279bf3b918d4cb105)`() const` <a id="structFRHAPI__PlatformSessionTemplate_1a85e4cd7ca9329f5279bf3b918d4cb105"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSessionTemplate_1a370451a9be05eb4d53558af41192d971)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlatformSessionTemplate_1a370451a9be05eb4d53558af41192d971"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlatformSessionTemplate_1a245b15b5a658c492364ea19ad5911b56)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlatformSessionTemplate_1a245b15b5a658c492364ea19ad5911b56"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSessionTemplate_1add158a418bef6a3c9b7d4b91006b8695)`()` <a id="structFRHAPI__PlatformSessionTemplate_1add158a418bef6a3c9b7d4b91006b8695"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSessionTemplate_1a7270bf6f0c05bca6c6424cf1eaf25dfe)`() const` <a id="structFRHAPI__PlatformSessionTemplate_1a7270bf6f0c05bca6c6424cf1eaf25dfe"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlatformSessionTemplate_1a84b094834ca70ea0cdef308dfca71190)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlatformSessionTemplate_1a84b094834ca70ea0cdef308dfca71190"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlatformSessionTemplate_1aca029e260d3091a665af93f24722cea1)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlatformSessionTemplate_1aca029e260d3091a665af93f24722cea1"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlatformSessionTemplate_1a1bab29f42e2c1c50068349c69c644583)`()` <a id="structFRHAPI__PlatformSessionTemplate_1a1bab29f42e2c1c50068349c69c644583"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlatformSessionTemplate_1ad4b2f954c49c787ae1e31ed9d827ab0a)`() const` <a id="structFRHAPI__PlatformSessionTemplate_1ad4b2f954c49c787ae1e31ed9d827ab0a"></a>

Checks whether CustomData_Optional has been set.

