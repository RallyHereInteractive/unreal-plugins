---
title: RHAPI_Vendor
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Vendor`](#structFRHAPI__Vendor) | A collection of Loot and how to fulfill them.

## struct `FRHAPI_Vendor` <a id="structFRHAPI__Vendor"></a>

```
struct FRHAPI_Vendor
  : public FRHAPI_Model
```

A collection of Loot and how to fulfill them.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__Vendor_1ad1fd7d01d6c9003ad84a5e58e8b638f5) | Custom data associated with the resource.
`public bool `[`CustomData_IsSet`](#structFRHAPI__Vendor_1a2c1b1b4781dae86fc8d06815eb882ae2) | true if CustomData_Optional has been set to a value
`public FGuid `[`VendorUuid_Optional`](#structFRHAPI__Vendor_1a19f4b7dd00d5e1e14767e0913b5b2c57) | 
`public bool `[`VendorUuid_IsSet`](#structFRHAPI__Vendor_1a492f4a102e5132fc7532ba567d1925da) | true if VendorUuid_Optional has been set to a value
`public bool `[`VendorUuid_IsNull`](#structFRHAPI__Vendor_1a8c672192a79c63b0fd424a1d053ad963) | true if VendorUuid_Optional has been explicitly set to null
`public ERHAPI_VendorType `[`Type_Optional`](#structFRHAPI__Vendor_1a5679543c05b7c35a6b7f9dfb45e82782) | 
`public bool `[`Type_IsSet`](#structFRHAPI__Vendor_1a2b43a4bd9314bb4dda95366e7465eab2) | true if Type_Optional has been set to a value
`public int32 `[`LegacyType_Optional`](#structFRHAPI__Vendor_1a7ddc9fd486f80acdd94206d576727874) | 
`public bool `[`LegacyType_IsSet`](#structFRHAPI__Vendor_1a3eff8bffdc3807d97e3e6a92802e1f6d) | true if LegacyType_Optional has been set to a value
`public int32 `[`LegacyConfigVersion_Optional`](#structFRHAPI__Vendor_1afa022639264c0e49e1c57c4702eabfe6) | 
`public bool `[`LegacyConfigVersion_IsSet`](#structFRHAPI__Vendor_1a470fecdc7ab9ab86933c50c02fbbbf98) | true if LegacyConfigVersion_Optional has been set to a value
`public TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > `[`Loot_Optional`](#structFRHAPI__Vendor_1a199a358c2b66f0c42a3c81bc12b8ef4b) | The Loot the Vendor will fulfill mapped by Loot ID.
`public bool `[`Loot_IsSet`](#structFRHAPI__Vendor_1a49cb8534ae895d0dbbb4718e49bc5d0d) | true if Loot_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Vendor_1a186c1479137c03910236ca2dec11939e) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__Vendor_1a02cff5941552eb97b863c0504e9279ed) | true if CacheInfo_Optional has been set to a value
`public bool `[`CacheInfo_IsNull`](#structFRHAPI__Vendor_1a3e636f389bd556a9dbdc72808845c9f8) | true if CacheInfo_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__Vendor_1a738b5fac41b67022677ef3d8974d8b7e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Vendor_1ad7ad6a81717917683200addaf9ef1402)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Vendor_1ad768d4d370c406a5e97c5bdcfb398551)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Vendor_1a1104dd5f97d0c2281b52317b60bdb330)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Vendor_1a7389343f8d99e6147fba9d118e1fa170)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__Vendor_1a50ee5cd827540beedd23fcd79fc07e87)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Vendor_1aafb7b0db5789d6afe4040bd40392b983)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Vendor_1ade56beb127faba299cf41c8a266e866c)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Vendor_1aa38adf531219e9afdfc82dd412fe516f)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Vendor_1a0a8b4dcf200c2cde73d08d75f8a9f0bc)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__Vendor_1a3be0ed314dd1c186d5437cd282e72367)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE FGuid & `[`GetVendorUuid`](#structFRHAPI__Vendor_1a192fe739f0b40ad074450dc77f485489)`()` | Gets the value of VendorUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetVendorUuid`](#structFRHAPI__Vendor_1a18ebe58d89f63cdf8ab7814895e80b7e)`() const` | Gets the value of VendorUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetVendorUuid`](#structFRHAPI__Vendor_1ab963f6a3634cf643a6e588becc8a630f)`(const FGuid & DefaultValue) const` | Gets the value of VendorUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetVendorUuid`](#structFRHAPI__Vendor_1a3cb308e96d099f0a518864900acba97d)`(FGuid & OutValue) const` | Fills OutValue with the value of VendorUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetVendorUuidOrNull`](#structFRHAPI__Vendor_1a21faaed47304a47cc232bbef827dd3ce)`()` | Returns a pointer to VendorUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetVendorUuidOrNull`](#structFRHAPI__Vendor_1a0363bad3fe2c93d141c5118c6d340f20)`() const` | Returns a pointer to VendorUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetVendorUuid`](#structFRHAPI__Vendor_1a7a8cb3360a469773a20575333a988818)`(const FGuid & NewValue)` | Sets the value of VendorUuid_Optional and also sets VendorUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetVendorUuid`](#structFRHAPI__Vendor_1a50351183ca1a0bca48491d8d6b6196d6)`(FGuid && NewValue)` | Sets the value of VendorUuid_Optional and also sets VendorUuid_IsSet to true using move semantics.
`public inline void `[`ClearVendorUuid`](#structFRHAPI__Vendor_1abf17b70aaa40c7c92456dd853564d0b9)`()` | Clears the value of VendorUuid_Optional and sets VendorUuid_IsSet to false.
`public inline FORCEINLINE void `[`SetVendorUuidToNull`](#structFRHAPI__Vendor_1a0b681ac8759310957229d8b59364fb48)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsVendorUuidNull`](#structFRHAPI__Vendor_1aee9d61c8f4b2d38562af9cb9cb25a3ca)`() const` | Checks whether VendorUuid_Optional is set to null.
`public inline FORCEINLINE ERHAPI_VendorType & `[`GetType`](#structFRHAPI__Vendor_1ac264cee4f45055d5a9206ecd2d60466f)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_VendorType & `[`GetType`](#structFRHAPI__Vendor_1a1d85671af67c121652664012356b6060)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_VendorType & `[`GetType`](#structFRHAPI__Vendor_1a8d1cf298bd00543a2b86f986ff84b3d3)`(const ERHAPI_VendorType & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType`](#structFRHAPI__Vendor_1a87030482b83a5714c34e3aee3beea8fb)`(ERHAPI_VendorType & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_VendorType * `[`GetTypeOrNull`](#structFRHAPI__Vendor_1a5dbf2b997f059cd807943620437e0197)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_VendorType * `[`GetTypeOrNull`](#structFRHAPI__Vendor_1ac73d2cd71ee3963a7bfa92ab992af8eb)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__Vendor_1a1ccb01695c121acfb7e61e2faa6b4d31)`(const ERHAPI_VendorType & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__Vendor_1ad9b6ac41a45a3f8be84b03d56a402260)`(ERHAPI_VendorType && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__Vendor_1a80edd87ab36f2af40668d9cded28fe38)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetLegacyType`](#structFRHAPI__Vendor_1a1c0b6f042e6a67db7112fd79fcd39dfe)`()` | Gets the value of LegacyType_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLegacyType`](#structFRHAPI__Vendor_1ab674eb2c64e4752517529229e4d780a4)`() const` | Gets the value of LegacyType_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLegacyType`](#structFRHAPI__Vendor_1af966a9fab2f1aca2c845715374c1aa20)`(const int32 & DefaultValue) const` | Gets the value of LegacyType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLegacyType`](#structFRHAPI__Vendor_1aca4b9cfe684772f529d1821377932163)`(int32 & OutValue) const` | Fills OutValue with the value of LegacyType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetLegacyTypeOrNull`](#structFRHAPI__Vendor_1a9ba2ffb0c202e8fabc7b41c5989f488d)`()` | Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetLegacyTypeOrNull`](#structFRHAPI__Vendor_1a1633b8c503fd9625c600a3bb60e11363)`() const` | Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLegacyType`](#structFRHAPI__Vendor_1aa68ecce5c6d598970f5c13c679b95e31)`(const int32 & NewValue)` | Sets the value of LegacyType_Optional and also sets LegacyType_IsSet to true.
`public inline FORCEINLINE void `[`SetLegacyType`](#structFRHAPI__Vendor_1a3d9fce77d3c4ed069a49318ac013ec8d)`(int32 && NewValue)` | Sets the value of LegacyType_Optional and also sets LegacyType_IsSet to true using move semantics.
`public inline void `[`ClearLegacyType`](#structFRHAPI__Vendor_1abbe2f3c16522df63f1e1ed1c1e83050e)`()` | Clears the value of LegacyType_Optional and sets LegacyType_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_LegacyType`](#structFRHAPI__Vendor_1ada5317a36a1bfa88b6d8d216d75f60f4)`()` | Returns the default value of LegacyType.
`public inline FORCEINLINE int32 & `[`GetLegacyConfigVersion`](#structFRHAPI__Vendor_1a3181dd883f51832bf8e87587b3f2a2e6)`()` | Gets the value of LegacyConfigVersion_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLegacyConfigVersion`](#structFRHAPI__Vendor_1a013b02205ed61d08e9a77bd54a4a7242)`() const` | Gets the value of LegacyConfigVersion_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetLegacyConfigVersion`](#structFRHAPI__Vendor_1ad23b8e4ffcbc60957fc302fc6d68aac7)`(const int32 & DefaultValue) const` | Gets the value of LegacyConfigVersion_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLegacyConfigVersion`](#structFRHAPI__Vendor_1abc57f177d2784500e372a13f33f4098b)`(int32 & OutValue) const` | Fills OutValue with the value of LegacyConfigVersion_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetLegacyConfigVersionOrNull`](#structFRHAPI__Vendor_1a6a01a4b9543bfda65749c6c97d85fb39)`()` | Returns a pointer to LegacyConfigVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetLegacyConfigVersionOrNull`](#structFRHAPI__Vendor_1a6d6e373f146ec1c3ef858b1e69300ee3)`() const` | Returns a pointer to LegacyConfigVersion_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLegacyConfigVersion`](#structFRHAPI__Vendor_1a3caab96be5de2e51133818687183ede6)`(const int32 & NewValue)` | Sets the value of LegacyConfigVersion_Optional and also sets LegacyConfigVersion_IsSet to true.
`public inline FORCEINLINE void `[`SetLegacyConfigVersion`](#structFRHAPI__Vendor_1a186ea8088f2b269c7e591c55f212f120)`(int32 && NewValue)` | Sets the value of LegacyConfigVersion_Optional and also sets LegacyConfigVersion_IsSet to true using move semantics.
`public inline void `[`ClearLegacyConfigVersion`](#structFRHAPI__Vendor_1a39cd6cbcb2eac3f3c0ead5e4f4829c4b)`()` | Clears the value of LegacyConfigVersion_Optional and sets LegacyConfigVersion_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_LegacyConfigVersion`](#structFRHAPI__Vendor_1a35a99e026456c734f8e42f8c584b3f40)`()` | Returns the default value of LegacyConfigVersion.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Vendor_1a7bed2a22b2fe6459e184d3c693efe1a0)`()` | Gets the value of Loot_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Vendor_1a71a2446192fb7c7ef318615dd44a11aa)`() const` | Gets the value of Loot_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Vendor_1a7b13b91131040d44c35ecc3e912c3204)`(const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & DefaultValue) const` | Gets the value of Loot_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLoot`](#structFRHAPI__Vendor_1a069ef2e42daa1ebb5d07912704f6a8db)`(TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & OutValue) const` | Fills OutValue with the value of Loot_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > * `[`GetLootOrNull`](#structFRHAPI__Vendor_1a6ee63afa2f69f38eecd6e4409a48e595)`()` | Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > * `[`GetLootOrNull`](#structFRHAPI__Vendor_1aa0c4ba7f057eef6471f38f42f99ea3e3)`() const` | Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLoot`](#structFRHAPI__Vendor_1a128610e748b2df124774c278d671f0ae)`(const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & NewValue)` | Sets the value of Loot_Optional and also sets Loot_IsSet to true.
`public inline FORCEINLINE void `[`SetLoot`](#structFRHAPI__Vendor_1af376a55c19f0078e37cca5b8a17642e9)`(TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > && NewValue)` | Sets the value of Loot_Optional and also sets Loot_IsSet to true using move semantics.
`public inline void `[`ClearLoot`](#structFRHAPI__Vendor_1a4df091c709882709f1f85c228a2c433b)`()` | Clears the value of Loot_Optional and sets Loot_IsSet to false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendor_1ae2a078b2f6d6bc36e7a456b4806225dc)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendor_1a44b303b3ca50c14471f68803600bec9e)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendor_1a8b12849e640ec3ab52dd2b1957d12cb3)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__Vendor_1acc708a409b5fb1eabcc5a2e86c106822)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Vendor_1aae70f4c100ab47da9ecf7f59223bfae9)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Vendor_1af2232575116a5c9c62d60b286a99da32)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Vendor_1a8267542ce7195929be52fcd6319512bb)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Vendor_1aea68b5f893f0805eed2ae4b114352466)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__Vendor_1aab46ead254eea4bde0f552f352c5e2ad)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__Vendor_1a16590c79c72722a4567a73310ca57260)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__Vendor_1a2a6fa34f6abad86a10ee18acaab25096)`() const` | Checks whether CacheInfo_Optional is set to null.

### Members

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__Vendor_1ad1fd7d01d6c9003ad84a5e58e8b638f5) <a id="structFRHAPI__Vendor_1ad1fd7d01d6c9003ad84a5e58e8b638f5"></a>

Custom data associated with the resource.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__Vendor_1a2c1b1b4781dae86fc8d06815eb882ae2) <a id="structFRHAPI__Vendor_1a2c1b1b4781dae86fc8d06815eb882ae2"></a>

true if CustomData_Optional has been set to a value

#### `public FGuid `[`VendorUuid_Optional`](#structFRHAPI__Vendor_1a19f4b7dd00d5e1e14767e0913b5b2c57) <a id="structFRHAPI__Vendor_1a19f4b7dd00d5e1e14767e0913b5b2c57"></a>

#### `public bool `[`VendorUuid_IsSet`](#structFRHAPI__Vendor_1a492f4a102e5132fc7532ba567d1925da) <a id="structFRHAPI__Vendor_1a492f4a102e5132fc7532ba567d1925da"></a>

true if VendorUuid_Optional has been set to a value

#### `public bool `[`VendorUuid_IsNull`](#structFRHAPI__Vendor_1a8c672192a79c63b0fd424a1d053ad963) <a id="structFRHAPI__Vendor_1a8c672192a79c63b0fd424a1d053ad963"></a>

true if VendorUuid_Optional has been explicitly set to null

#### `public ERHAPI_VendorType `[`Type_Optional`](#structFRHAPI__Vendor_1a5679543c05b7c35a6b7f9dfb45e82782) <a id="structFRHAPI__Vendor_1a5679543c05b7c35a6b7f9dfb45e82782"></a>

#### `public bool `[`Type_IsSet`](#structFRHAPI__Vendor_1a2b43a4bd9314bb4dda95366e7465eab2) <a id="structFRHAPI__Vendor_1a2b43a4bd9314bb4dda95366e7465eab2"></a>

true if Type_Optional has been set to a value

#### `public int32 `[`LegacyType_Optional`](#structFRHAPI__Vendor_1a7ddc9fd486f80acdd94206d576727874) <a id="structFRHAPI__Vendor_1a7ddc9fd486f80acdd94206d576727874"></a>

#### `public bool `[`LegacyType_IsSet`](#structFRHAPI__Vendor_1a3eff8bffdc3807d97e3e6a92802e1f6d) <a id="structFRHAPI__Vendor_1a3eff8bffdc3807d97e3e6a92802e1f6d"></a>

true if LegacyType_Optional has been set to a value

#### `public int32 `[`LegacyConfigVersion_Optional`](#structFRHAPI__Vendor_1afa022639264c0e49e1c57c4702eabfe6) <a id="structFRHAPI__Vendor_1afa022639264c0e49e1c57c4702eabfe6"></a>

#### `public bool `[`LegacyConfigVersion_IsSet`](#structFRHAPI__Vendor_1a470fecdc7ab9ab86933c50c02fbbbf98) <a id="structFRHAPI__Vendor_1a470fecdc7ab9ab86933c50c02fbbbf98"></a>

true if LegacyConfigVersion_Optional has been set to a value

#### `public TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > `[`Loot_Optional`](#structFRHAPI__Vendor_1a199a358c2b66f0c42a3c81bc12b8ef4b) <a id="structFRHAPI__Vendor_1a199a358c2b66f0c42a3c81bc12b8ef4b"></a>

The Loot the Vendor will fulfill mapped by Loot ID.

#### `public bool `[`Loot_IsSet`](#structFRHAPI__Vendor_1a49cb8534ae895d0dbbb4718e49bc5d0d) <a id="structFRHAPI__Vendor_1a49cb8534ae895d0dbbb4718e49bc5d0d"></a>

true if Loot_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__Vendor_1a186c1479137c03910236ca2dec11939e) <a id="structFRHAPI__Vendor_1a186c1479137c03910236ca2dec11939e"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__Vendor_1a02cff5941552eb97b863c0504e9279ed) <a id="structFRHAPI__Vendor_1a02cff5941552eb97b863c0504e9279ed"></a>

true if CacheInfo_Optional has been set to a value

#### `public bool `[`CacheInfo_IsNull`](#structFRHAPI__Vendor_1a3e636f389bd556a9dbdc72808845c9f8) <a id="structFRHAPI__Vendor_1a3e636f389bd556a9dbdc72808845c9f8"></a>

true if CacheInfo_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__Vendor_1a738b5fac41b67022677ef3d8974d8b7e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Vendor_1a738b5fac41b67022677ef3d8974d8b7e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Vendor_1ad7ad6a81717917683200addaf9ef1402)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__Vendor_1ad7ad6a81717917683200addaf9ef1402"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Vendor_1ad768d4d370c406a5e97c5bdcfb398551)`()` <a id="structFRHAPI__Vendor_1ad768d4d370c406a5e97c5bdcfb398551"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Vendor_1a1104dd5f97d0c2281b52317b60bdb330)`() const` <a id="structFRHAPI__Vendor_1a1104dd5f97d0c2281b52317b60bdb330"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Vendor_1a7389343f8d99e6147fba9d118e1fa170)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__Vendor_1a7389343f8d99e6147fba9d118e1fa170"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__Vendor_1a50ee5cd827540beedd23fcd79fc07e87)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__Vendor_1a50ee5cd827540beedd23fcd79fc07e87"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Vendor_1aafb7b0db5789d6afe4040bd40392b983)`()` <a id="structFRHAPI__Vendor_1aafb7b0db5789d6afe4040bd40392b983"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Vendor_1ade56beb127faba299cf41c8a266e866c)`() const` <a id="structFRHAPI__Vendor_1ade56beb127faba299cf41c8a266e866c"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Vendor_1aa38adf531219e9afdfc82dd412fe516f)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__Vendor_1aa38adf531219e9afdfc82dd412fe516f"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Vendor_1a0a8b4dcf200c2cde73d08d75f8a9f0bc)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__Vendor_1a0a8b4dcf200c2cde73d08d75f8a9f0bc"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__Vendor_1a3be0ed314dd1c186d5437cd282e72367)`()` <a id="structFRHAPI__Vendor_1a3be0ed314dd1c186d5437cd282e72367"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE FGuid & `[`GetVendorUuid`](#structFRHAPI__Vendor_1a192fe739f0b40ad074450dc77f485489)`()` <a id="structFRHAPI__Vendor_1a192fe739f0b40ad074450dc77f485489"></a>

Gets the value of VendorUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetVendorUuid`](#structFRHAPI__Vendor_1a18ebe58d89f63cdf8ab7814895e80b7e)`() const` <a id="structFRHAPI__Vendor_1a18ebe58d89f63cdf8ab7814895e80b7e"></a>

Gets the value of VendorUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetVendorUuid`](#structFRHAPI__Vendor_1ab963f6a3634cf643a6e588becc8a630f)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__Vendor_1ab963f6a3634cf643a6e588becc8a630f"></a>

Gets the value of VendorUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetVendorUuid`](#structFRHAPI__Vendor_1a3cb308e96d099f0a518864900acba97d)`(FGuid & OutValue) const` <a id="structFRHAPI__Vendor_1a3cb308e96d099f0a518864900acba97d"></a>

Fills OutValue with the value of VendorUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetVendorUuidOrNull`](#structFRHAPI__Vendor_1a21faaed47304a47cc232bbef827dd3ce)`()` <a id="structFRHAPI__Vendor_1a21faaed47304a47cc232bbef827dd3ce"></a>

Returns a pointer to VendorUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetVendorUuidOrNull`](#structFRHAPI__Vendor_1a0363bad3fe2c93d141c5118c6d340f20)`() const` <a id="structFRHAPI__Vendor_1a0363bad3fe2c93d141c5118c6d340f20"></a>

Returns a pointer to VendorUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetVendorUuid`](#structFRHAPI__Vendor_1a7a8cb3360a469773a20575333a988818)`(const FGuid & NewValue)` <a id="structFRHAPI__Vendor_1a7a8cb3360a469773a20575333a988818"></a>

Sets the value of VendorUuid_Optional and also sets VendorUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetVendorUuid`](#structFRHAPI__Vendor_1a50351183ca1a0bca48491d8d6b6196d6)`(FGuid && NewValue)` <a id="structFRHAPI__Vendor_1a50351183ca1a0bca48491d8d6b6196d6"></a>

Sets the value of VendorUuid_Optional and also sets VendorUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearVendorUuid`](#structFRHAPI__Vendor_1abf17b70aaa40c7c92456dd853564d0b9)`()` <a id="structFRHAPI__Vendor_1abf17b70aaa40c7c92456dd853564d0b9"></a>

Clears the value of VendorUuid_Optional and sets VendorUuid_IsSet to false.

#### `public inline FORCEINLINE void `[`SetVendorUuidToNull`](#structFRHAPI__Vendor_1a0b681ac8759310957229d8b59364fb48)`()` <a id="structFRHAPI__Vendor_1a0b681ac8759310957229d8b59364fb48"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsVendorUuidNull`](#structFRHAPI__Vendor_1aee9d61c8f4b2d38562af9cb9cb25a3ca)`() const` <a id="structFRHAPI__Vendor_1aee9d61c8f4b2d38562af9cb9cb25a3ca"></a>

Checks whether VendorUuid_Optional is set to null.

#### `public inline FORCEINLINE ERHAPI_VendorType & `[`GetType`](#structFRHAPI__Vendor_1ac264cee4f45055d5a9206ecd2d60466f)`()` <a id="structFRHAPI__Vendor_1ac264cee4f45055d5a9206ecd2d60466f"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_VendorType & `[`GetType`](#structFRHAPI__Vendor_1a1d85671af67c121652664012356b6060)`() const` <a id="structFRHAPI__Vendor_1a1d85671af67c121652664012356b6060"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_VendorType & `[`GetType`](#structFRHAPI__Vendor_1a8d1cf298bd00543a2b86f986ff84b3d3)`(const ERHAPI_VendorType & DefaultValue) const` <a id="structFRHAPI__Vendor_1a8d1cf298bd00543a2b86f986ff84b3d3"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType`](#structFRHAPI__Vendor_1a87030482b83a5714c34e3aee3beea8fb)`(ERHAPI_VendorType & OutValue) const` <a id="structFRHAPI__Vendor_1a87030482b83a5714c34e3aee3beea8fb"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_VendorType * `[`GetTypeOrNull`](#structFRHAPI__Vendor_1a5dbf2b997f059cd807943620437e0197)`()` <a id="structFRHAPI__Vendor_1a5dbf2b997f059cd807943620437e0197"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_VendorType * `[`GetTypeOrNull`](#structFRHAPI__Vendor_1ac73d2cd71ee3963a7bfa92ab992af8eb)`() const` <a id="structFRHAPI__Vendor_1ac73d2cd71ee3963a7bfa92ab992af8eb"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__Vendor_1a1ccb01695c121acfb7e61e2faa6b4d31)`(const ERHAPI_VendorType & NewValue)` <a id="structFRHAPI__Vendor_1a1ccb01695c121acfb7e61e2faa6b4d31"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__Vendor_1ad9b6ac41a45a3f8be84b03d56a402260)`(ERHAPI_VendorType && NewValue)` <a id="structFRHAPI__Vendor_1ad9b6ac41a45a3f8be84b03d56a402260"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__Vendor_1a80edd87ab36f2af40668d9cded28fe38)`()` <a id="structFRHAPI__Vendor_1a80edd87ab36f2af40668d9cded28fe38"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetLegacyType`](#structFRHAPI__Vendor_1a1c0b6f042e6a67db7112fd79fcd39dfe)`()` <a id="structFRHAPI__Vendor_1a1c0b6f042e6a67db7112fd79fcd39dfe"></a>

Gets the value of LegacyType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLegacyType`](#structFRHAPI__Vendor_1ab674eb2c64e4752517529229e4d780a4)`() const` <a id="structFRHAPI__Vendor_1ab674eb2c64e4752517529229e4d780a4"></a>

Gets the value of LegacyType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLegacyType`](#structFRHAPI__Vendor_1af966a9fab2f1aca2c845715374c1aa20)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Vendor_1af966a9fab2f1aca2c845715374c1aa20"></a>

Gets the value of LegacyType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLegacyType`](#structFRHAPI__Vendor_1aca4b9cfe684772f529d1821377932163)`(int32 & OutValue) const` <a id="structFRHAPI__Vendor_1aca4b9cfe684772f529d1821377932163"></a>

Fills OutValue with the value of LegacyType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetLegacyTypeOrNull`](#structFRHAPI__Vendor_1a9ba2ffb0c202e8fabc7b41c5989f488d)`()` <a id="structFRHAPI__Vendor_1a9ba2ffb0c202e8fabc7b41c5989f488d"></a>

Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetLegacyTypeOrNull`](#structFRHAPI__Vendor_1a1633b8c503fd9625c600a3bb60e11363)`() const` <a id="structFRHAPI__Vendor_1a1633b8c503fd9625c600a3bb60e11363"></a>

Returns a pointer to LegacyType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLegacyType`](#structFRHAPI__Vendor_1aa68ecce5c6d598970f5c13c679b95e31)`(const int32 & NewValue)` <a id="structFRHAPI__Vendor_1aa68ecce5c6d598970f5c13c679b95e31"></a>

Sets the value of LegacyType_Optional and also sets LegacyType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLegacyType`](#structFRHAPI__Vendor_1a3d9fce77d3c4ed069a49318ac013ec8d)`(int32 && NewValue)` <a id="structFRHAPI__Vendor_1a3d9fce77d3c4ed069a49318ac013ec8d"></a>

Sets the value of LegacyType_Optional and also sets LegacyType_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacyType`](#structFRHAPI__Vendor_1abbe2f3c16522df63f1e1ed1c1e83050e)`()` <a id="structFRHAPI__Vendor_1abbe2f3c16522df63f1e1ed1c1e83050e"></a>

Clears the value of LegacyType_Optional and sets LegacyType_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_LegacyType`](#structFRHAPI__Vendor_1ada5317a36a1bfa88b6d8d216d75f60f4)`()` <a id="structFRHAPI__Vendor_1ada5317a36a1bfa88b6d8d216d75f60f4"></a>

Returns the default value of LegacyType.

#### `public inline FORCEINLINE int32 & `[`GetLegacyConfigVersion`](#structFRHAPI__Vendor_1a3181dd883f51832bf8e87587b3f2a2e6)`()` <a id="structFRHAPI__Vendor_1a3181dd883f51832bf8e87587b3f2a2e6"></a>

Gets the value of LegacyConfigVersion_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLegacyConfigVersion`](#structFRHAPI__Vendor_1a013b02205ed61d08e9a77bd54a4a7242)`() const` <a id="structFRHAPI__Vendor_1a013b02205ed61d08e9a77bd54a4a7242"></a>

Gets the value of LegacyConfigVersion_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetLegacyConfigVersion`](#structFRHAPI__Vendor_1ad23b8e4ffcbc60957fc302fc6d68aac7)`(const int32 & DefaultValue) const` <a id="structFRHAPI__Vendor_1ad23b8e4ffcbc60957fc302fc6d68aac7"></a>

Gets the value of LegacyConfigVersion_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLegacyConfigVersion`](#structFRHAPI__Vendor_1abc57f177d2784500e372a13f33f4098b)`(int32 & OutValue) const` <a id="structFRHAPI__Vendor_1abc57f177d2784500e372a13f33f4098b"></a>

Fills OutValue with the value of LegacyConfigVersion_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetLegacyConfigVersionOrNull`](#structFRHAPI__Vendor_1a6a01a4b9543bfda65749c6c97d85fb39)`()` <a id="structFRHAPI__Vendor_1a6a01a4b9543bfda65749c6c97d85fb39"></a>

Returns a pointer to LegacyConfigVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetLegacyConfigVersionOrNull`](#structFRHAPI__Vendor_1a6d6e373f146ec1c3ef858b1e69300ee3)`() const` <a id="structFRHAPI__Vendor_1a6d6e373f146ec1c3ef858b1e69300ee3"></a>

Returns a pointer to LegacyConfigVersion_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLegacyConfigVersion`](#structFRHAPI__Vendor_1a3caab96be5de2e51133818687183ede6)`(const int32 & NewValue)` <a id="structFRHAPI__Vendor_1a3caab96be5de2e51133818687183ede6"></a>

Sets the value of LegacyConfigVersion_Optional and also sets LegacyConfigVersion_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLegacyConfigVersion`](#structFRHAPI__Vendor_1a186ea8088f2b269c7e591c55f212f120)`(int32 && NewValue)` <a id="structFRHAPI__Vendor_1a186ea8088f2b269c7e591c55f212f120"></a>

Sets the value of LegacyConfigVersion_Optional and also sets LegacyConfigVersion_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacyConfigVersion`](#structFRHAPI__Vendor_1a39cd6cbcb2eac3f3c0ead5e4f4829c4b)`()` <a id="structFRHAPI__Vendor_1a39cd6cbcb2eac3f3c0ead5e4f4829c4b"></a>

Clears the value of LegacyConfigVersion_Optional and sets LegacyConfigVersion_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_LegacyConfigVersion`](#structFRHAPI__Vendor_1a35a99e026456c734f8e42f8c584b3f40)`()` <a id="structFRHAPI__Vendor_1a35a99e026456c734f8e42f8c584b3f40"></a>

Returns the default value of LegacyConfigVersion.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Vendor_1a7bed2a22b2fe6459e184d3c693efe1a0)`()` <a id="structFRHAPI__Vendor_1a7bed2a22b2fe6459e184d3c693efe1a0"></a>

Gets the value of Loot_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Vendor_1a71a2446192fb7c7ef318615dd44a11aa)`() const` <a id="structFRHAPI__Vendor_1a71a2446192fb7c7ef318615dd44a11aa"></a>

Gets the value of Loot_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & `[`GetLoot`](#structFRHAPI__Vendor_1a7b13b91131040d44c35ecc3e912c3204)`(const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & DefaultValue) const` <a id="structFRHAPI__Vendor_1a7b13b91131040d44c35ecc3e912c3204"></a>

Gets the value of Loot_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLoot`](#structFRHAPI__Vendor_1a069ef2e42daa1ebb5d07912704f6a8db)`(TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & OutValue) const` <a id="structFRHAPI__Vendor_1a069ef2e42daa1ebb5d07912704f6a8db"></a>

Fills OutValue with the value of Loot_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > * `[`GetLootOrNull`](#structFRHAPI__Vendor_1a6ee63afa2f69f38eecd6e4409a48e595)`()` <a id="structFRHAPI__Vendor_1a6ee63afa2f69f38eecd6e4409a48e595"></a>

Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > * `[`GetLootOrNull`](#structFRHAPI__Vendor_1aa0c4ba7f057eef6471f38f42f99ea3e3)`() const` <a id="structFRHAPI__Vendor_1aa0c4ba7f057eef6471f38f42f99ea3e3"></a>

Returns a pointer to Loot_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLoot`](#structFRHAPI__Vendor_1a128610e748b2df124774c278d671f0ae)`(const TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > & NewValue)` <a id="structFRHAPI__Vendor_1a128610e748b2df124774c278d671f0ae"></a>

Sets the value of Loot_Optional and also sets Loot_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLoot`](#structFRHAPI__Vendor_1af376a55c19f0078e37cca5b8a17642e9)`(TMap< FString, `[`FRHAPI_Loot`](RHAPI_Loot.md#structFRHAPI__Loot)` > && NewValue)` <a id="structFRHAPI__Vendor_1af376a55c19f0078e37cca5b8a17642e9"></a>

Sets the value of Loot_Optional and also sets Loot_IsSet to true using move semantics.

#### `public inline void `[`ClearLoot`](#structFRHAPI__Vendor_1a4df091c709882709f1f85c228a2c433b)`()` <a id="structFRHAPI__Vendor_1a4df091c709882709f1f85c228a2c433b"></a>

Clears the value of Loot_Optional and sets Loot_IsSet to false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendor_1ae2a078b2f6d6bc36e7a456b4806225dc)`()` <a id="structFRHAPI__Vendor_1ae2a078b2f6d6bc36e7a456b4806225dc"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendor_1a44b303b3ca50c14471f68803600bec9e)`() const` <a id="structFRHAPI__Vendor_1a44b303b3ca50c14471f68803600bec9e"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__Vendor_1a8b12849e640ec3ab52dd2b1957d12cb3)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__Vendor_1a8b12849e640ec3ab52dd2b1957d12cb3"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__Vendor_1acc708a409b5fb1eabcc5a2e86c106822)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__Vendor_1acc708a409b5fb1eabcc5a2e86c106822"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Vendor_1aae70f4c100ab47da9ecf7f59223bfae9)`()` <a id="structFRHAPI__Vendor_1aae70f4c100ab47da9ecf7f59223bfae9"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__Vendor_1af2232575116a5c9c62d60b286a99da32)`() const` <a id="structFRHAPI__Vendor_1af2232575116a5c9c62d60b286a99da32"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Vendor_1a8267542ce7195929be52fcd6319512bb)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__Vendor_1a8267542ce7195929be52fcd6319512bb"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__Vendor_1aea68b5f893f0805eed2ae4b114352466)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__Vendor_1aea68b5f893f0805eed2ae4b114352466"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__Vendor_1aab46ead254eea4bde0f552f352c5e2ad)`()` <a id="structFRHAPI__Vendor_1aab46ead254eea4bde0f552f352c5e2ad"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__Vendor_1a16590c79c72722a4567a73310ca57260)`()` <a id="structFRHAPI__Vendor_1a16590c79c72722a4567a73310ca57260"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__Vendor_1a2a6fa34f6abad86a10ee18acaab25096)`() const` <a id="structFRHAPI__Vendor_1a2a6fa34f6abad86a10ee18acaab25096"></a>

Checks whether CacheInfo_Optional is set to null.

