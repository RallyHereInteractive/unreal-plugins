---
title: RHAPI_PlayerLastSeenUpdate
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerLastSeenUpdate`](#structFRHAPI__PlayerLastSeenUpdate) | 

## struct `FRHAPI_PlayerLastSeenUpdate` <a id="structFRHAPI__PlayerLastSeenUpdate"></a>

```
struct FRHAPI_PlayerLastSeenUpdate
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FDateTime `[`Time`](#structFRHAPI__PlayerLastSeenUpdate_1ac52ac599410a5675a0052148618eb994) | Last time this player reported their online status.
`public FString `[`Platform_Optional`](#structFRHAPI__PlayerLastSeenUpdate_1ace7260325ef2f15713ef90d0544387d3) | 
`public bool `[`Platform_IsSet`](#structFRHAPI__PlayerLastSeenUpdate_1a3e0f8a06427ed33debc26f6e803716f3) | true if Platform_Optional has been set to a value
`public bool `[`Platform_IsNull`](#structFRHAPI__PlayerLastSeenUpdate_1a82407c5e78005f3226bff4e55eac595a) | true if Platform_Optional has been explicitly set to null
`public FString `[`DisplayName_Optional`](#structFRHAPI__PlayerLastSeenUpdate_1af7ccaaa4754dfdfecb54198a36a1023c) | 
`public bool `[`DisplayName_IsSet`](#structFRHAPI__PlayerLastSeenUpdate_1a5806815fa7538ea0b3c068d1542bc012) | true if DisplayName_Optional has been set to a value
`public bool `[`DisplayName_IsNull`](#structFRHAPI__PlayerLastSeenUpdate_1add4f849ba7cc9cdf28e419be00221440) | true if DisplayName_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerLastSeenUpdate_1acdff6f30fa41ed2d32f1aef8d5398354)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerLastSeenUpdate_1a0c2d9dd3b7095e1d00a28837ea08ac6a)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FDateTime & `[`GetTime`](#structFRHAPI__PlayerLastSeenUpdate_1aae9d3bdb7abc1bc424dec264aec0d2fd)`()` | Gets the value of Time.
`public inline FORCEINLINE const FDateTime & `[`GetTime`](#structFRHAPI__PlayerLastSeenUpdate_1a013e1c77437383cb5d02a92ea45486a2)`() const` | Gets the value of Time.
`public inline FORCEINLINE void `[`SetTime`](#structFRHAPI__PlayerLastSeenUpdate_1a7a2a7b51e0658e9b190a2a5ba36673ba)`(const FDateTime & NewValue)` | Sets the value of Time.
`public inline FORCEINLINE void `[`SetTime`](#structFRHAPI__PlayerLastSeenUpdate_1a8700f5ad8ccf135877f07d638c3da2e0)`(FDateTime && NewValue)` | Sets the value of Time using move semantics.
`public inline FORCEINLINE FString & `[`GetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1ab457bd464f741d253c95689a50e41cbd)`()` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1ae7c2cf50a696a339acdf9b87aa0e28f0)`() const` | Gets the value of Platform_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1ab2ccd443ed421d8a2b77e17cf93fe793)`(const FString & DefaultValue) const` | Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1a1f632377c88f917bc29ba62180f7bce7)`(FString & OutValue) const` | Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetPlatformOrNull`](#structFRHAPI__PlayerLastSeenUpdate_1a95ff024361b7f650f5b54cebfd7c4d24)`()` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetPlatformOrNull`](#structFRHAPI__PlayerLastSeenUpdate_1a9dbca51f08d52c895a4683619e85692c)`() const` | Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1a06629b1de6c8d359e2d533f2bc0a5334)`(const FString & NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1a3dba8eed251bfbeb4ac1aa8a22c8a6ca)`(FString && NewValue)` | Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.
`public inline void `[`ClearPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1aa3cc09e14a89615c9bbe6c0c8d8fae9b)`()` | Clears the value of Platform_Optional and sets Platform_IsSet to false.
`public inline FORCEINLINE void `[`SetPlatformToNull`](#structFRHAPI__PlayerLastSeenUpdate_1ad8d5d2d764618d40c8fadd90ac5a5261)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPlatformNull`](#structFRHAPI__PlayerLastSeenUpdate_1a23012d7ee3d497180aaf9122783f920e)`() const` | Checks whether Platform_Optional is set to null.
`public inline FORCEINLINE FString & `[`GetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1ab1adb6b76b604da7585b2770b6fa8382)`()` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a51907c3cb1147c9a63dea1c7f3dddacd)`() const` | Gets the value of DisplayName_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1ac05f16c338b5f1b6653ec7e9269d8b39)`(const FString & DefaultValue) const` | Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a47fb3ecaac3047fd091d749e4e8a9b66)`(FString & OutValue) const` | Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PlayerLastSeenUpdate_1af8a52cc99eea526be112427619bcdefb)`()` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PlayerLastSeenUpdate_1a31db481e513bc9f4cadb72ec508dc1f8)`() const` | Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a8e02c9cd56acf1d2c86e87fc0b3d0ad6)`(const FString & NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.
`public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a0a63e2eb729585068e3af64ab8aa9d50)`(FString && NewValue)` | Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.
`public inline void `[`ClearDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a808a56f9cf76cfde9abcf2bb0c5bd9c4)`()` | Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.
`public inline FORCEINLINE void `[`SetDisplayNameToNull`](#structFRHAPI__PlayerLastSeenUpdate_1ab93b046a817930e72eac4b138a2b6568)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsDisplayNameNull`](#structFRHAPI__PlayerLastSeenUpdate_1a25f1c5fab6e308f8918bcbc0b9ac0ee2)`() const` | Checks whether DisplayName_Optional is set to null.

### Members

#### `public FDateTime `[`Time`](#structFRHAPI__PlayerLastSeenUpdate_1ac52ac599410a5675a0052148618eb994) <a id="structFRHAPI__PlayerLastSeenUpdate_1ac52ac599410a5675a0052148618eb994"></a>

Last time this player reported their online status.

#### `public FString `[`Platform_Optional`](#structFRHAPI__PlayerLastSeenUpdate_1ace7260325ef2f15713ef90d0544387d3) <a id="structFRHAPI__PlayerLastSeenUpdate_1ace7260325ef2f15713ef90d0544387d3"></a>

#### `public bool `[`Platform_IsSet`](#structFRHAPI__PlayerLastSeenUpdate_1a3e0f8a06427ed33debc26f6e803716f3) <a id="structFRHAPI__PlayerLastSeenUpdate_1a3e0f8a06427ed33debc26f6e803716f3"></a>

true if Platform_Optional has been set to a value

#### `public bool `[`Platform_IsNull`](#structFRHAPI__PlayerLastSeenUpdate_1a82407c5e78005f3226bff4e55eac595a) <a id="structFRHAPI__PlayerLastSeenUpdate_1a82407c5e78005f3226bff4e55eac595a"></a>

true if Platform_Optional has been explicitly set to null

#### `public FString `[`DisplayName_Optional`](#structFRHAPI__PlayerLastSeenUpdate_1af7ccaaa4754dfdfecb54198a36a1023c) <a id="structFRHAPI__PlayerLastSeenUpdate_1af7ccaaa4754dfdfecb54198a36a1023c"></a>

#### `public bool `[`DisplayName_IsSet`](#structFRHAPI__PlayerLastSeenUpdate_1a5806815fa7538ea0b3c068d1542bc012) <a id="structFRHAPI__PlayerLastSeenUpdate_1a5806815fa7538ea0b3c068d1542bc012"></a>

true if DisplayName_Optional has been set to a value

#### `public bool `[`DisplayName_IsNull`](#structFRHAPI__PlayerLastSeenUpdate_1add4f849ba7cc9cdf28e419be00221440) <a id="structFRHAPI__PlayerLastSeenUpdate_1add4f849ba7cc9cdf28e419be00221440"></a>

true if DisplayName_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerLastSeenUpdate_1acdff6f30fa41ed2d32f1aef8d5398354)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerLastSeenUpdate_1acdff6f30fa41ed2d32f1aef8d5398354"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerLastSeenUpdate_1a0c2d9dd3b7095e1d00a28837ea08ac6a)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerLastSeenUpdate_1a0c2d9dd3b7095e1d00a28837ea08ac6a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FDateTime & `[`GetTime`](#structFRHAPI__PlayerLastSeenUpdate_1aae9d3bdb7abc1bc424dec264aec0d2fd)`()` <a id="structFRHAPI__PlayerLastSeenUpdate_1aae9d3bdb7abc1bc424dec264aec0d2fd"></a>

Gets the value of Time.

#### `public inline FORCEINLINE const FDateTime & `[`GetTime`](#structFRHAPI__PlayerLastSeenUpdate_1a013e1c77437383cb5d02a92ea45486a2)`() const` <a id="structFRHAPI__PlayerLastSeenUpdate_1a013e1c77437383cb5d02a92ea45486a2"></a>

Gets the value of Time.

#### `public inline FORCEINLINE void `[`SetTime`](#structFRHAPI__PlayerLastSeenUpdate_1a7a2a7b51e0658e9b190a2a5ba36673ba)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerLastSeenUpdate_1a7a2a7b51e0658e9b190a2a5ba36673ba"></a>

Sets the value of Time.

#### `public inline FORCEINLINE void `[`SetTime`](#structFRHAPI__PlayerLastSeenUpdate_1a8700f5ad8ccf135877f07d638c3da2e0)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerLastSeenUpdate_1a8700f5ad8ccf135877f07d638c3da2e0"></a>

Sets the value of Time using move semantics.

#### `public inline FORCEINLINE FString & `[`GetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1ab457bd464f741d253c95689a50e41cbd)`()` <a id="structFRHAPI__PlayerLastSeenUpdate_1ab457bd464f741d253c95689a50e41cbd"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1ae7c2cf50a696a339acdf9b87aa0e28f0)`() const` <a id="structFRHAPI__PlayerLastSeenUpdate_1ae7c2cf50a696a339acdf9b87aa0e28f0"></a>

Gets the value of Platform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1ab2ccd443ed421d8a2b77e17cf93fe793)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerLastSeenUpdate_1ab2ccd443ed421d8a2b77e17cf93fe793"></a>

Gets the value of Platform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1a1f632377c88f917bc29ba62180f7bce7)`(FString & OutValue) const` <a id="structFRHAPI__PlayerLastSeenUpdate_1a1f632377c88f917bc29ba62180f7bce7"></a>

Fills OutValue with the value of Platform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetPlatformOrNull`](#structFRHAPI__PlayerLastSeenUpdate_1a95ff024361b7f650f5b54cebfd7c4d24)`()` <a id="structFRHAPI__PlayerLastSeenUpdate_1a95ff024361b7f650f5b54cebfd7c4d24"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetPlatformOrNull`](#structFRHAPI__PlayerLastSeenUpdate_1a9dbca51f08d52c895a4683619e85692c)`() const` <a id="structFRHAPI__PlayerLastSeenUpdate_1a9dbca51f08d52c895a4683619e85692c"></a>

Returns a pointer to Platform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1a06629b1de6c8d359e2d533f2bc0a5334)`(const FString & NewValue)` <a id="structFRHAPI__PlayerLastSeenUpdate_1a06629b1de6c8d359e2d533f2bc0a5334"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1a3dba8eed251bfbeb4ac1aa8a22c8a6ca)`(FString && NewValue)` <a id="structFRHAPI__PlayerLastSeenUpdate_1a3dba8eed251bfbeb4ac1aa8a22c8a6ca"></a>

Sets the value of Platform_Optional and also sets Platform_IsSet to true using move semantics.

#### `public inline void `[`ClearPlatform`](#structFRHAPI__PlayerLastSeenUpdate_1aa3cc09e14a89615c9bbe6c0c8d8fae9b)`()` <a id="structFRHAPI__PlayerLastSeenUpdate_1aa3cc09e14a89615c9bbe6c0c8d8fae9b"></a>

Clears the value of Platform_Optional and sets Platform_IsSet to false.

#### `public inline FORCEINLINE void `[`SetPlatformToNull`](#structFRHAPI__PlayerLastSeenUpdate_1ad8d5d2d764618d40c8fadd90ac5a5261)`()` <a id="structFRHAPI__PlayerLastSeenUpdate_1ad8d5d2d764618d40c8fadd90ac5a5261"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPlatformNull`](#structFRHAPI__PlayerLastSeenUpdate_1a23012d7ee3d497180aaf9122783f920e)`() const` <a id="structFRHAPI__PlayerLastSeenUpdate_1a23012d7ee3d497180aaf9122783f920e"></a>

Checks whether Platform_Optional is set to null.

#### `public inline FORCEINLINE FString & `[`GetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1ab1adb6b76b604da7585b2770b6fa8382)`()` <a id="structFRHAPI__PlayerLastSeenUpdate_1ab1adb6b76b604da7585b2770b6fa8382"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a51907c3cb1147c9a63dea1c7f3dddacd)`() const` <a id="structFRHAPI__PlayerLastSeenUpdate_1a51907c3cb1147c9a63dea1c7f3dddacd"></a>

Gets the value of DisplayName_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1ac05f16c338b5f1b6653ec7e9269d8b39)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerLastSeenUpdate_1ac05f16c338b5f1b6653ec7e9269d8b39"></a>

Gets the value of DisplayName_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a47fb3ecaac3047fd091d749e4e8a9b66)`(FString & OutValue) const` <a id="structFRHAPI__PlayerLastSeenUpdate_1a47fb3ecaac3047fd091d749e4e8a9b66"></a>

Fills OutValue with the value of DisplayName_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PlayerLastSeenUpdate_1af8a52cc99eea526be112427619bcdefb)`()` <a id="structFRHAPI__PlayerLastSeenUpdate_1af8a52cc99eea526be112427619bcdefb"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetDisplayNameOrNull`](#structFRHAPI__PlayerLastSeenUpdate_1a31db481e513bc9f4cadb72ec508dc1f8)`() const` <a id="structFRHAPI__PlayerLastSeenUpdate_1a31db481e513bc9f4cadb72ec508dc1f8"></a>

Returns a pointer to DisplayName_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a8e02c9cd56acf1d2c86e87fc0b3d0ad6)`(const FString & NewValue)` <a id="structFRHAPI__PlayerLastSeenUpdate_1a8e02c9cd56acf1d2c86e87fc0b3d0ad6"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a0a63e2eb729585068e3af64ab8aa9d50)`(FString && NewValue)` <a id="structFRHAPI__PlayerLastSeenUpdate_1a0a63e2eb729585068e3af64ab8aa9d50"></a>

Sets the value of DisplayName_Optional and also sets DisplayName_IsSet to true using move semantics.

#### `public inline void `[`ClearDisplayName`](#structFRHAPI__PlayerLastSeenUpdate_1a808a56f9cf76cfde9abcf2bb0c5bd9c4)`()` <a id="structFRHAPI__PlayerLastSeenUpdate_1a808a56f9cf76cfde9abcf2bb0c5bd9c4"></a>

Clears the value of DisplayName_Optional and sets DisplayName_IsSet to false.

#### `public inline FORCEINLINE void `[`SetDisplayNameToNull`](#structFRHAPI__PlayerLastSeenUpdate_1ab93b046a817930e72eac4b138a2b6568)`()` <a id="structFRHAPI__PlayerLastSeenUpdate_1ab93b046a817930e72eac4b138a2b6568"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsDisplayNameNull`](#structFRHAPI__PlayerLastSeenUpdate_1a25f1c5fab6e308f8918bcbc0b9ac0ee2)`() const` <a id="structFRHAPI__PlayerLastSeenUpdate_1a25f1c5fab6e308f8918bcbc0b9ac0ee2"></a>

Checks whether DisplayName_Optional is set to null.

