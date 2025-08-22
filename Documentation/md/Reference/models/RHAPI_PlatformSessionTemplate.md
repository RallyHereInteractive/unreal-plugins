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
`public inline FORCEINLINE ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__PlatformSessionTemplate_1a8704226222f92e50405cdbea86d05a36)`()` | Gets the value of PlatformId.
`public inline FORCEINLINE const ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__PlatformSessionTemplate_1aa558fbf1676f82524b386bd8f4626d2f)`() const` | Gets the value of PlatformId.
`public inline FORCEINLINE void `[`SetPlatformId`](#structFRHAPI__PlatformSessionTemplate_1a4f149f38ade9c36b9da63a72eb4cdde1)`(const ERHAPI_PlatformID & NewValue)` | Sets the value of PlatformId.
`public inline FORCEINLINE void `[`SetPlatformId`](#structFRHAPI__PlatformSessionTemplate_1aabed76b8a774be6f6c7d0c6d1d5dd25a)`(ERHAPI_PlatformID && NewValue)` | Sets the value of PlatformId using move semantics.
`public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSessionTemplate_1ad2276377067db3b12c7aa98ecb2ce0ee)`()` | Gets the value of Platform.
`public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSessionTemplate_1a78aec730ffdb25342bb4b29075b8d81d)`() const` | Gets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformSessionTemplate_1a13f2224da2e8a5078d2ddd0fd88d9c59)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformSessionTemplate_1ac0fc515b4e25b188f88de8e42d572914)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FORCEINLINE FString & `[`GetPlatformSessionType`](#structFRHAPI__PlatformSessionTemplate_1ac399881a319d3b5dfff6701c8d5e761a)`()` | Gets the value of PlatformSessionType.
`public inline FORCEINLINE const FString & `[`GetPlatformSessionType`](#structFRHAPI__PlatformSessionTemplate_1a28df781b8de347784f529274bd97c623)`() const` | Gets the value of PlatformSessionType.
`public inline FORCEINLINE void `[`SetPlatformSessionType`](#structFRHAPI__PlatformSessionTemplate_1a8290885d07b689e6f5d4c412b1c455a0)`(const FString & NewValue)` | Sets the value of PlatformSessionType.
`public inline FORCEINLINE void `[`SetPlatformSessionType`](#structFRHAPI__PlatformSessionTemplate_1a9acdc84945c3ce035e4792ec06592c58)`(FString && NewValue)` | Sets the value of PlatformSessionType using move semantics.
`public inline FORCEINLINE int32 & `[`GetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1ab622f88cadf7b6423547e9d437896c0b)`()` | Gets the value of MaxPlayers_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1a736cc77565e64ee7dd08dde838b0ab64)`() const` | Gets the value of MaxPlayers_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1ad63c44b4054b8b3b214adc671a151c47)`(const int32 & DefaultValue) const` | Gets the value of MaxPlayers_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1a0d0d95e7cdeddd9764525e2fd4df3eff)`(int32 & OutValue) const` | Fills OutValue with the value of MaxPlayers_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetMaxPlayersOrNull`](#structFRHAPI__PlatformSessionTemplate_1afc5d61e4b6b44420456f87d91bd4da7c)`()` | Returns a pointer to MaxPlayers_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetMaxPlayersOrNull`](#structFRHAPI__PlatformSessionTemplate_1a595f30e4ceda24697c05da6878413bfd)`() const` | Returns a pointer to MaxPlayers_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1a12eb70d53d99ee63a86805d6def4ed6d)`(const int32 & NewValue)` | Sets the value of MaxPlayers_Optional and also sets MaxPlayers_IsSet to true.
`public inline FORCEINLINE void `[`SetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1a99072b91807eb2b05469585f3da4c942)`(int32 && NewValue)` | Sets the value of MaxPlayers_Optional and also sets MaxPlayers_IsSet to true using move semantics.
`public inline void `[`ClearMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1af2d8b5f464542815bcbbcf41870d0acc)`()` | Clears the value of MaxPlayers_Optional and sets MaxPlayers_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_MaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1a44afb1a6f54a90a80a36e16b567665c6)`()` | Returns the default value of MaxPlayers.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSessionTemplate_1aa25bce0ef93fa41598507a1f10336838)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSessionTemplate_1ad4e02026f079c99868257fd790e981e8)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSessionTemplate_1a6eed61cf07654632551612bcdd1079f8)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlatformSessionTemplate_1a1bc2d2531056e36a9df542de1b15c601)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSessionTemplate_1a80c016af40782a7933ee3013e5721fbd)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSessionTemplate_1aa32d2d5499c20cce11a61d7bc72824b4)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlatformSessionTemplate_1ac65f0deb32cd9aa5040ed53d47bb1e5c)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlatformSessionTemplate_1a9cd3e8e7c26c27f4d844f247b083ac32)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlatformSessionTemplate_1a1bab29f42e2c1c50068349c69c644583)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

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

#### `public inline FORCEINLINE ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__PlatformSessionTemplate_1a8704226222f92e50405cdbea86d05a36)`()` <a id="structFRHAPI__PlatformSessionTemplate_1a8704226222f92e50405cdbea86d05a36"></a>

Gets the value of PlatformId.

#### `public inline FORCEINLINE const ERHAPI_PlatformID & `[`GetPlatformId`](#structFRHAPI__PlatformSessionTemplate_1aa558fbf1676f82524b386bd8f4626d2f)`() const` <a id="structFRHAPI__PlatformSessionTemplate_1aa558fbf1676f82524b386bd8f4626d2f"></a>

Gets the value of PlatformId.

#### `public inline FORCEINLINE void `[`SetPlatformId`](#structFRHAPI__PlatformSessionTemplate_1a4f149f38ade9c36b9da63a72eb4cdde1)`(const ERHAPI_PlatformID & NewValue)` <a id="structFRHAPI__PlatformSessionTemplate_1a4f149f38ade9c36b9da63a72eb4cdde1"></a>

Sets the value of PlatformId.

#### `public inline FORCEINLINE void `[`SetPlatformId`](#structFRHAPI__PlatformSessionTemplate_1aabed76b8a774be6f6c7d0c6d1d5dd25a)`(ERHAPI_PlatformID && NewValue)` <a id="structFRHAPI__PlatformSessionTemplate_1aabed76b8a774be6f6c7d0c6d1d5dd25a"></a>

Sets the value of PlatformId using move semantics.

#### `public inline FORCEINLINE ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSessionTemplate_1ad2276377067db3b12c7aa98ecb2ce0ee)`()` <a id="structFRHAPI__PlatformSessionTemplate_1ad2276377067db3b12c7aa98ecb2ce0ee"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSessionTemplate_1a78aec730ffdb25342bb4b29075b8d81d)`() const` <a id="structFRHAPI__PlatformSessionTemplate_1a78aec730ffdb25342bb4b29075b8d81d"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformSessionTemplate_1a13f2224da2e8a5078d2ddd0fd88d9c59)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PlatformSessionTemplate_1a13f2224da2e8a5078d2ddd0fd88d9c59"></a>

Sets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformSessionTemplate_1ac0fc515b4e25b188f88de8e42d572914)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PlatformSessionTemplate_1ac0fc515b4e25b188f88de8e42d572914"></a>

Sets the value of Platform using move semantics.

#### `public inline FORCEINLINE FString & `[`GetPlatformSessionType`](#structFRHAPI__PlatformSessionTemplate_1ac399881a319d3b5dfff6701c8d5e761a)`()` <a id="structFRHAPI__PlatformSessionTemplate_1ac399881a319d3b5dfff6701c8d5e761a"></a>

Gets the value of PlatformSessionType.

#### `public inline FORCEINLINE const FString & `[`GetPlatformSessionType`](#structFRHAPI__PlatformSessionTemplate_1a28df781b8de347784f529274bd97c623)`() const` <a id="structFRHAPI__PlatformSessionTemplate_1a28df781b8de347784f529274bd97c623"></a>

Gets the value of PlatformSessionType.

#### `public inline FORCEINLINE void `[`SetPlatformSessionType`](#structFRHAPI__PlatformSessionTemplate_1a8290885d07b689e6f5d4c412b1c455a0)`(const FString & NewValue)` <a id="structFRHAPI__PlatformSessionTemplate_1a8290885d07b689e6f5d4c412b1c455a0"></a>

Sets the value of PlatformSessionType.

#### `public inline FORCEINLINE void `[`SetPlatformSessionType`](#structFRHAPI__PlatformSessionTemplate_1a9acdc84945c3ce035e4792ec06592c58)`(FString && NewValue)` <a id="structFRHAPI__PlatformSessionTemplate_1a9acdc84945c3ce035e4792ec06592c58"></a>

Sets the value of PlatformSessionType using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1ab622f88cadf7b6423547e9d437896c0b)`()` <a id="structFRHAPI__PlatformSessionTemplate_1ab622f88cadf7b6423547e9d437896c0b"></a>

Gets the value of MaxPlayers_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1a736cc77565e64ee7dd08dde838b0ab64)`() const` <a id="structFRHAPI__PlatformSessionTemplate_1a736cc77565e64ee7dd08dde838b0ab64"></a>

Gets the value of MaxPlayers_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1ad63c44b4054b8b3b214adc671a151c47)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlatformSessionTemplate_1ad63c44b4054b8b3b214adc671a151c47"></a>

Gets the value of MaxPlayers_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1a0d0d95e7cdeddd9764525e2fd4df3eff)`(int32 & OutValue) const` <a id="structFRHAPI__PlatformSessionTemplate_1a0d0d95e7cdeddd9764525e2fd4df3eff"></a>

Fills OutValue with the value of MaxPlayers_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetMaxPlayersOrNull`](#structFRHAPI__PlatformSessionTemplate_1afc5d61e4b6b44420456f87d91bd4da7c)`()` <a id="structFRHAPI__PlatformSessionTemplate_1afc5d61e4b6b44420456f87d91bd4da7c"></a>

Returns a pointer to MaxPlayers_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetMaxPlayersOrNull`](#structFRHAPI__PlatformSessionTemplate_1a595f30e4ceda24697c05da6878413bfd)`() const` <a id="structFRHAPI__PlatformSessionTemplate_1a595f30e4ceda24697c05da6878413bfd"></a>

Returns a pointer to MaxPlayers_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1a12eb70d53d99ee63a86805d6def4ed6d)`(const int32 & NewValue)` <a id="structFRHAPI__PlatformSessionTemplate_1a12eb70d53d99ee63a86805d6def4ed6d"></a>

Sets the value of MaxPlayers_Optional and also sets MaxPlayers_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1a99072b91807eb2b05469585f3da4c942)`(int32 && NewValue)` <a id="structFRHAPI__PlatformSessionTemplate_1a99072b91807eb2b05469585f3da4c942"></a>

Sets the value of MaxPlayers_Optional and also sets MaxPlayers_IsSet to true using move semantics.

#### `public inline void `[`ClearMaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1af2d8b5f464542815bcbbcf41870d0acc)`()` <a id="structFRHAPI__PlatformSessionTemplate_1af2d8b5f464542815bcbbcf41870d0acc"></a>

Clears the value of MaxPlayers_Optional and sets MaxPlayers_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_MaxPlayers`](#structFRHAPI__PlatformSessionTemplate_1a44afb1a6f54a90a80a36e16b567665c6)`()` <a id="structFRHAPI__PlatformSessionTemplate_1a44afb1a6f54a90a80a36e16b567665c6"></a>

Returns the default value of MaxPlayers.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSessionTemplate_1aa25bce0ef93fa41598507a1f10336838)`()` <a id="structFRHAPI__PlatformSessionTemplate_1aa25bce0ef93fa41598507a1f10336838"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSessionTemplate_1ad4e02026f079c99868257fd790e981e8)`() const` <a id="structFRHAPI__PlatformSessionTemplate_1ad4e02026f079c99868257fd790e981e8"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSessionTemplate_1a6eed61cf07654632551612bcdd1079f8)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlatformSessionTemplate_1a6eed61cf07654632551612bcdd1079f8"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlatformSessionTemplate_1a1bc2d2531056e36a9df542de1b15c601)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlatformSessionTemplate_1a1bc2d2531056e36a9df542de1b15c601"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSessionTemplate_1a80c016af40782a7933ee3013e5721fbd)`()` <a id="structFRHAPI__PlatformSessionTemplate_1a80c016af40782a7933ee3013e5721fbd"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSessionTemplate_1aa32d2d5499c20cce11a61d7bc72824b4)`() const` <a id="structFRHAPI__PlatformSessionTemplate_1aa32d2d5499c20cce11a61d7bc72824b4"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlatformSessionTemplate_1ac65f0deb32cd9aa5040ed53d47bb1e5c)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlatformSessionTemplate_1ac65f0deb32cd9aa5040ed53d47bb1e5c"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlatformSessionTemplate_1a9cd3e8e7c26c27f4d844f247b083ac32)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlatformSessionTemplate_1a9cd3e8e7c26c27f4d844f247b083ac32"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlatformSessionTemplate_1a1bab29f42e2c1c50068349c69c644583)`()` <a id="structFRHAPI__PlatformSessionTemplate_1a1bab29f42e2c1c50068349c69c644583"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

