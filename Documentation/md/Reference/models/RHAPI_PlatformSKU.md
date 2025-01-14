---
title: RHAPI_PlatformSKU
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformSKU`](#structFRHAPI__PlatformSKU) | Platform SKU that can be converted to inventory or keys.

## struct `FRHAPI_PlatformSKU` <a id="structFRHAPI__PlatformSKU"></a>

```
struct FRHAPI_PlatformSKU
  : public FRHAPI_Model
```

Platform SKU that can be converted to inventory or keys.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlatformSKU_1ab26debe0ff1c24b61599980b44812b2b) | Custom data associated with the resource.
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlatformSKU_1ad5828116f650ea7901ae60a78f2e9d7a) | true if CustomData_Optional has been set to a value
`public ERHAPI_Platform `[`Platform`](#structFRHAPI__PlatformSKU_1a422e4dab6d9fbd3f7de8fcb900ada969) | The platform of the SKU.
`public FString `[`Sku`](#structFRHAPI__PlatformSKU_1af2131a88628854eb0064c95508075269) | The SKU of the platform.
`public `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` `[`LootEntitlement_Optional`](#structFRHAPI__PlatformSKU_1ac971f3a8d5c5b954f6d1fc53bde49b5b) | The Loot that will be granted to the player.
`public bool `[`LootEntitlement_IsSet`](#structFRHAPI__PlatformSKU_1a3a9315ed369499d5167e2c87ab9b8d85) | true if LootEntitlement_Optional has been set to a value
`public `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` `[`ExternalKeyEntitlement_Optional`](#structFRHAPI__PlatformSKU_1abf0202192f57100b48733c4d5836f5fe) | The External Key Entitlement.
`public bool `[`ExternalKeyEntitlement_IsSet`](#structFRHAPI__PlatformSKU_1ab55ca7403fec640d81121324e41a2e5d) | true if ExternalKeyEntitlement_Optional has been set to a value
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PlatformSKU_1ab26bc7287f433868876e7ee8ebd78a48) | Cache info for the Platform SKUs.
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__PlatformSKU_1a232a45f2e5f3c34b5021ea0bf05a9c06) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformSKU_1a5bd16afdbc1a8f427b55df109045bca2)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformSKU_1ad6f9069526fb0ca26ac5acfb5d746551)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSKU_1adfc8c63b2b18b272136ff17101262819)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSKU_1a876933b991f9789fcc2f59e6cf34afea)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSKU_1a906ca55ee8027f4877421edc365386bd)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlatformSKU_1ac56b1bcc86df3fc187bb05f872683081)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSKU_1aebaf355635757824680f1e14239584ae)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSKU_1a256e5c4843ed0b96f119f0cc7a4a4f7d)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PlatformSKU_1a0f3511dbc61a43e4c06403965fadd6e2)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__PlatformSKU_1a97ef3918c80a8b544067db5b03420894)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlatformSKU_1aa09b2510aa16d25b7ca3745df479beda)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlatformSKU_1aeb8fd03b1ec7c1de542c21403a6145e4)`() const` | Checks whether CustomData_Optional has been set.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSKU_1a95dca308424a4cdc918b07e5830f94a8)`()` | Gets the value of Platform.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSKU_1a265e263c42b02d0af2c72467219bff68)`() const` | Gets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PlatformSKU_1a71c25cc2e0edade592d12afbbc3b56ab)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PlatformSKU_1a694174e17aa8c1d5fc4c801b25880ab8)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FString & `[`GetSku`](#structFRHAPI__PlatformSKU_1ad96c653beee9066f96509344891f85b3)`()` | Gets the value of Sku.
`public inline const FString & `[`GetSku`](#structFRHAPI__PlatformSKU_1a394a253fa753dd96fdee62e00d440599)`() const` | Gets the value of Sku.
`public inline void `[`SetSku`](#structFRHAPI__PlatformSKU_1aca7257815422f1a54091fb8b6eefce05)`(const FString & NewValue)` | Sets the value of Sku.
`public inline void `[`SetSku`](#structFRHAPI__PlatformSKU_1a13e6e915a0725006e2cb18e02918b70f)`(FString && NewValue)` | Sets the value of Sku using move semantics.
`public inline `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1a52528b628103fa06660801e660ba4639)`()` | Gets the value of LootEntitlement_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1ad267b5396786b9f0857b011c52c55016)`() const` | Gets the value of LootEntitlement_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1afd3901f4c52006a9c4387b09bd8be800)`(const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & DefaultValue) const` | Gets the value of LootEntitlement_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1ae820336d6a400d0992dde839d910e310)`(`[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & OutValue) const` | Fills OutValue with the value of LootEntitlement_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` * `[`GetLootEntitlementOrNull`](#structFRHAPI__PlatformSKU_1a99d0240c91bcaaa9a21fd5d641a2024e)`()` | Returns a pointer to LootEntitlement_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` * `[`GetLootEntitlementOrNull`](#structFRHAPI__PlatformSKU_1ab0312c5b3b2dca5c3785e5b549a53182)`() const` | Returns a pointer to LootEntitlement_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLootEntitlement`](#structFRHAPI__PlatformSKU_1a78410242d5c3ac658f3f72d681feac1a)`(const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & NewValue)` | Sets the value of LootEntitlement_Optional and also sets LootEntitlement_IsSet to true.
`public inline void `[`SetLootEntitlement`](#structFRHAPI__PlatformSKU_1a5db09a117f0070122cc317cda28624e8)`(`[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` && NewValue)` | Sets the value of LootEntitlement_Optional and also sets LootEntitlement_IsSet to true using move semantics.
`public inline void `[`ClearLootEntitlement`](#structFRHAPI__PlatformSKU_1af1e076aab333782b9c61fa0b34a7bc5c)`()` | Clears the value of LootEntitlement_Optional and sets LootEntitlement_IsSet to false.
`public inline bool `[`IsLootEntitlementSet`](#structFRHAPI__PlatformSKU_1aa13805e01a13a7cf9a2a4f85287f5e71)`() const` | Checks whether LootEntitlement_Optional has been set.
`public inline `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a1268617dde3d573d10562488f2a36ae5)`()` | Gets the value of ExternalKeyEntitlement_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a6db86ba3f7353a36724f2ebb5a04c81d)`() const` | Gets the value of ExternalKeyEntitlement_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a42b7ce58549eae4b8f7e505bb2a5389d)`(const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & DefaultValue) const` | Gets the value of ExternalKeyEntitlement_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1aa3d315d86c5081ee49829da8be019a4d)`(`[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & OutValue) const` | Fills OutValue with the value of ExternalKeyEntitlement_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` * `[`GetExternalKeyEntitlementOrNull`](#structFRHAPI__PlatformSKU_1aef875531f42c72ff4758bd464b7a1e92)`()` | Returns a pointer to ExternalKeyEntitlement_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` * `[`GetExternalKeyEntitlementOrNull`](#structFRHAPI__PlatformSKU_1a8e31a8c8bdce69f69976b212c93e08cd)`() const` | Returns a pointer to ExternalKeyEntitlement_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a29348bc682347895068750f831c396a1)`(const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & NewValue)` | Sets the value of ExternalKeyEntitlement_Optional and also sets ExternalKeyEntitlement_IsSet to true.
`public inline void `[`SetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a3f1013353632e48d9631c3f2a37eec1c)`(`[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` && NewValue)` | Sets the value of ExternalKeyEntitlement_Optional and also sets ExternalKeyEntitlement_IsSet to true using move semantics.
`public inline void `[`ClearExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1ad94aaa0ca142a3cf1c91c8e4e5972a1b)`()` | Clears the value of ExternalKeyEntitlement_Optional and sets ExternalKeyEntitlement_IsSet to false.
`public inline bool `[`IsExternalKeyEntitlementSet`](#structFRHAPI__PlatformSKU_1a14ba33df0da1f695cd268a01329e0685)`() const` | Checks whether ExternalKeyEntitlement_Optional has been set.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1a5a1cbcc144207476856952768fb46718)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1a0a9e843df977e42124462e3d6de2a46f)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1ae20c75e1560982fef9a6fd7d5f4d5d41)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1af7eb97540b84a51f252cf57420db97bf)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKU_1a2c6d24b2f2ce9e8008891b5c459f584c)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKU_1a30a9d640dfbd2cd899b35554c668627f)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__PlatformSKU_1a370dfa7aad1f1b3953ec434e0ad6a3fe)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__PlatformSKU_1a5fc849418578a1a3716fcbffc7423005)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__PlatformSKU_1a2eb6371d0f542e17466b83ab32efca14)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline bool `[`IsCacheInfoSet`](#structFRHAPI__PlatformSKU_1ae3201d40874ea86f078b1410cfe8502e)`() const` | Checks whether CacheInfo_Optional has been set.

### Members

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlatformSKU_1ab26debe0ff1c24b61599980b44812b2b) <a id="structFRHAPI__PlatformSKU_1ab26debe0ff1c24b61599980b44812b2b"></a>

Custom data associated with the resource.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlatformSKU_1ad5828116f650ea7901ae60a78f2e9d7a) <a id="structFRHAPI__PlatformSKU_1ad5828116f650ea7901ae60a78f2e9d7a"></a>

true if CustomData_Optional has been set to a value

#### `public ERHAPI_Platform `[`Platform`](#structFRHAPI__PlatformSKU_1a422e4dab6d9fbd3f7de8fcb900ada969) <a id="structFRHAPI__PlatformSKU_1a422e4dab6d9fbd3f7de8fcb900ada969"></a>

The platform of the SKU.

#### `public FString `[`Sku`](#structFRHAPI__PlatformSKU_1af2131a88628854eb0064c95508075269) <a id="structFRHAPI__PlatformSKU_1af2131a88628854eb0064c95508075269"></a>

The SKU of the platform.

#### `public `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` `[`LootEntitlement_Optional`](#structFRHAPI__PlatformSKU_1ac971f3a8d5c5b954f6d1fc53bde49b5b) <a id="structFRHAPI__PlatformSKU_1ac971f3a8d5c5b954f6d1fc53bde49b5b"></a>

The Loot that will be granted to the player.

#### `public bool `[`LootEntitlement_IsSet`](#structFRHAPI__PlatformSKU_1a3a9315ed369499d5167e2c87ab9b8d85) <a id="structFRHAPI__PlatformSKU_1a3a9315ed369499d5167e2c87ab9b8d85"></a>

true if LootEntitlement_Optional has been set to a value

#### `public `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` `[`ExternalKeyEntitlement_Optional`](#structFRHAPI__PlatformSKU_1abf0202192f57100b48733c4d5836f5fe) <a id="structFRHAPI__PlatformSKU_1abf0202192f57100b48733c4d5836f5fe"></a>

The External Key Entitlement.

#### `public bool `[`ExternalKeyEntitlement_IsSet`](#structFRHAPI__PlatformSKU_1ab55ca7403fec640d81121324e41a2e5d) <a id="structFRHAPI__PlatformSKU_1ab55ca7403fec640d81121324e41a2e5d"></a>

true if ExternalKeyEntitlement_Optional has been set to a value

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PlatformSKU_1ab26bc7287f433868876e7ee8ebd78a48) <a id="structFRHAPI__PlatformSKU_1ab26bc7287f433868876e7ee8ebd78a48"></a>

Cache info for the Platform SKUs.

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__PlatformSKU_1a232a45f2e5f3c34b5021ea0bf05a9c06) <a id="structFRHAPI__PlatformSKU_1a232a45f2e5f3c34b5021ea0bf05a9c06"></a>

true if CacheInfo_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformSKU_1a5bd16afdbc1a8f427b55df109045bca2)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformSKU_1a5bd16afdbc1a8f427b55df109045bca2"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformSKU_1ad6f9069526fb0ca26ac5acfb5d746551)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlatformSKU_1ad6f9069526fb0ca26ac5acfb5d746551"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSKU_1adfc8c63b2b18b272136ff17101262819)`()` <a id="structFRHAPI__PlatformSKU_1adfc8c63b2b18b272136ff17101262819"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSKU_1a876933b991f9789fcc2f59e6cf34afea)`() const` <a id="structFRHAPI__PlatformSKU_1a876933b991f9789fcc2f59e6cf34afea"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSKU_1a906ca55ee8027f4877421edc365386bd)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlatformSKU_1a906ca55ee8027f4877421edc365386bd"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlatformSKU_1ac56b1bcc86df3fc187bb05f872683081)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlatformSKU_1ac56b1bcc86df3fc187bb05f872683081"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSKU_1aebaf355635757824680f1e14239584ae)`()` <a id="structFRHAPI__PlatformSKU_1aebaf355635757824680f1e14239584ae"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSKU_1a256e5c4843ed0b96f119f0cc7a4a4f7d)`() const` <a id="structFRHAPI__PlatformSKU_1a256e5c4843ed0b96f119f0cc7a4a4f7d"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlatformSKU_1a0f3511dbc61a43e4c06403965fadd6e2)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlatformSKU_1a0f3511dbc61a43e4c06403965fadd6e2"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlatformSKU_1a97ef3918c80a8b544067db5b03420894)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlatformSKU_1a97ef3918c80a8b544067db5b03420894"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlatformSKU_1aa09b2510aa16d25b7ca3745df479beda)`()` <a id="structFRHAPI__PlatformSKU_1aa09b2510aa16d25b7ca3745df479beda"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlatformSKU_1aeb8fd03b1ec7c1de542c21403a6145e4)`() const` <a id="structFRHAPI__PlatformSKU_1aeb8fd03b1ec7c1de542c21403a6145e4"></a>

Checks whether CustomData_Optional has been set.

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSKU_1a95dca308424a4cdc918b07e5830f94a8)`()` <a id="structFRHAPI__PlatformSKU_1a95dca308424a4cdc918b07e5830f94a8"></a>

Gets the value of Platform.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSKU_1a265e263c42b02d0af2c72467219bff68)`() const` <a id="structFRHAPI__PlatformSKU_1a265e263c42b02d0af2c72467219bff68"></a>

Gets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PlatformSKU_1a71c25cc2e0edade592d12afbbc3b56ab)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PlatformSKU_1a71c25cc2e0edade592d12afbbc3b56ab"></a>

Sets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PlatformSKU_1a694174e17aa8c1d5fc4c801b25880ab8)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PlatformSKU_1a694174e17aa8c1d5fc4c801b25880ab8"></a>

Sets the value of Platform using move semantics.

#### `public inline FString & `[`GetSku`](#structFRHAPI__PlatformSKU_1ad96c653beee9066f96509344891f85b3)`()` <a id="structFRHAPI__PlatformSKU_1ad96c653beee9066f96509344891f85b3"></a>

Gets the value of Sku.

#### `public inline const FString & `[`GetSku`](#structFRHAPI__PlatformSKU_1a394a253fa753dd96fdee62e00d440599)`() const` <a id="structFRHAPI__PlatformSKU_1a394a253fa753dd96fdee62e00d440599"></a>

Gets the value of Sku.

#### `public inline void `[`SetSku`](#structFRHAPI__PlatformSKU_1aca7257815422f1a54091fb8b6eefce05)`(const FString & NewValue)` <a id="structFRHAPI__PlatformSKU_1aca7257815422f1a54091fb8b6eefce05"></a>

Sets the value of Sku.

#### `public inline void `[`SetSku`](#structFRHAPI__PlatformSKU_1a13e6e915a0725006e2cb18e02918b70f)`(FString && NewValue)` <a id="structFRHAPI__PlatformSKU_1a13e6e915a0725006e2cb18e02918b70f"></a>

Sets the value of Sku using move semantics.

#### `public inline `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1a52528b628103fa06660801e660ba4639)`()` <a id="structFRHAPI__PlatformSKU_1a52528b628103fa06660801e660ba4639"></a>

Gets the value of LootEntitlement_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1ad267b5396786b9f0857b011c52c55016)`() const` <a id="structFRHAPI__PlatformSKU_1ad267b5396786b9f0857b011c52c55016"></a>

Gets the value of LootEntitlement_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1afd3901f4c52006a9c4387b09bd8be800)`(const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & DefaultValue) const` <a id="structFRHAPI__PlatformSKU_1afd3901f4c52006a9c4387b09bd8be800"></a>

Gets the value of LootEntitlement_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1ae820336d6a400d0992dde839d910e310)`(`[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & OutValue) const` <a id="structFRHAPI__PlatformSKU_1ae820336d6a400d0992dde839d910e310"></a>

Fills OutValue with the value of LootEntitlement_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` * `[`GetLootEntitlementOrNull`](#structFRHAPI__PlatformSKU_1a99d0240c91bcaaa9a21fd5d641a2024e)`()` <a id="structFRHAPI__PlatformSKU_1a99d0240c91bcaaa9a21fd5d641a2024e"></a>

Returns a pointer to LootEntitlement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` * `[`GetLootEntitlementOrNull`](#structFRHAPI__PlatformSKU_1ab0312c5b3b2dca5c3785e5b549a53182)`() const` <a id="structFRHAPI__PlatformSKU_1ab0312c5b3b2dca5c3785e5b549a53182"></a>

Returns a pointer to LootEntitlement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLootEntitlement`](#structFRHAPI__PlatformSKU_1a78410242d5c3ac658f3f72d681feac1a)`(const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & NewValue)` <a id="structFRHAPI__PlatformSKU_1a78410242d5c3ac658f3f72d681feac1a"></a>

Sets the value of LootEntitlement_Optional and also sets LootEntitlement_IsSet to true.

#### `public inline void `[`SetLootEntitlement`](#structFRHAPI__PlatformSKU_1a5db09a117f0070122cc317cda28624e8)`(`[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` && NewValue)` <a id="structFRHAPI__PlatformSKU_1a5db09a117f0070122cc317cda28624e8"></a>

Sets the value of LootEntitlement_Optional and also sets LootEntitlement_IsSet to true using move semantics.

#### `public inline void `[`ClearLootEntitlement`](#structFRHAPI__PlatformSKU_1af1e076aab333782b9c61fa0b34a7bc5c)`()` <a id="structFRHAPI__PlatformSKU_1af1e076aab333782b9c61fa0b34a7bc5c"></a>

Clears the value of LootEntitlement_Optional and sets LootEntitlement_IsSet to false.

#### `public inline bool `[`IsLootEntitlementSet`](#structFRHAPI__PlatformSKU_1aa13805e01a13a7cf9a2a4f85287f5e71)`() const` <a id="structFRHAPI__PlatformSKU_1aa13805e01a13a7cf9a2a4f85287f5e71"></a>

Checks whether LootEntitlement_Optional has been set.

#### `public inline `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a1268617dde3d573d10562488f2a36ae5)`()` <a id="structFRHAPI__PlatformSKU_1a1268617dde3d573d10562488f2a36ae5"></a>

Gets the value of ExternalKeyEntitlement_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a6db86ba3f7353a36724f2ebb5a04c81d)`() const` <a id="structFRHAPI__PlatformSKU_1a6db86ba3f7353a36724f2ebb5a04c81d"></a>

Gets the value of ExternalKeyEntitlement_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a42b7ce58549eae4b8f7e505bb2a5389d)`(const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & DefaultValue) const` <a id="structFRHAPI__PlatformSKU_1a42b7ce58549eae4b8f7e505bb2a5389d"></a>

Gets the value of ExternalKeyEntitlement_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1aa3d315d86c5081ee49829da8be019a4d)`(`[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & OutValue) const` <a id="structFRHAPI__PlatformSKU_1aa3d315d86c5081ee49829da8be019a4d"></a>

Fills OutValue with the value of ExternalKeyEntitlement_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` * `[`GetExternalKeyEntitlementOrNull`](#structFRHAPI__PlatformSKU_1aef875531f42c72ff4758bd464b7a1e92)`()` <a id="structFRHAPI__PlatformSKU_1aef875531f42c72ff4758bd464b7a1e92"></a>

Returns a pointer to ExternalKeyEntitlement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` * `[`GetExternalKeyEntitlementOrNull`](#structFRHAPI__PlatformSKU_1a8e31a8c8bdce69f69976b212c93e08cd)`() const` <a id="structFRHAPI__PlatformSKU_1a8e31a8c8bdce69f69976b212c93e08cd"></a>

Returns a pointer to ExternalKeyEntitlement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a29348bc682347895068750f831c396a1)`(const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & NewValue)` <a id="structFRHAPI__PlatformSKU_1a29348bc682347895068750f831c396a1"></a>

Sets the value of ExternalKeyEntitlement_Optional and also sets ExternalKeyEntitlement_IsSet to true.

#### `public inline void `[`SetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a3f1013353632e48d9631c3f2a37eec1c)`(`[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` && NewValue)` <a id="structFRHAPI__PlatformSKU_1a3f1013353632e48d9631c3f2a37eec1c"></a>

Sets the value of ExternalKeyEntitlement_Optional and also sets ExternalKeyEntitlement_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1ad94aaa0ca142a3cf1c91c8e4e5972a1b)`()` <a id="structFRHAPI__PlatformSKU_1ad94aaa0ca142a3cf1c91c8e4e5972a1b"></a>

Clears the value of ExternalKeyEntitlement_Optional and sets ExternalKeyEntitlement_IsSet to false.

#### `public inline bool `[`IsExternalKeyEntitlementSet`](#structFRHAPI__PlatformSKU_1a14ba33df0da1f695cd268a01329e0685)`() const` <a id="structFRHAPI__PlatformSKU_1a14ba33df0da1f695cd268a01329e0685"></a>

Checks whether ExternalKeyEntitlement_Optional has been set.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1a5a1cbcc144207476856952768fb46718)`()` <a id="structFRHAPI__PlatformSKU_1a5a1cbcc144207476856952768fb46718"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1a0a9e843df977e42124462e3d6de2a46f)`() const` <a id="structFRHAPI__PlatformSKU_1a0a9e843df977e42124462e3d6de2a46f"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1ae20c75e1560982fef9a6fd7d5f4d5d41)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__PlatformSKU_1ae20c75e1560982fef9a6fd7d5f4d5d41"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1af7eb97540b84a51f252cf57420db97bf)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__PlatformSKU_1af7eb97540b84a51f252cf57420db97bf"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKU_1a2c6d24b2f2ce9e8008891b5c459f584c)`()` <a id="structFRHAPI__PlatformSKU_1a2c6d24b2f2ce9e8008891b5c459f584c"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKU_1a30a9d640dfbd2cd899b35554c668627f)`() const` <a id="structFRHAPI__PlatformSKU_1a30a9d640dfbd2cd899b35554c668627f"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PlatformSKU_1a370dfa7aad1f1b3953ec434e0ad6a3fe)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__PlatformSKU_1a370dfa7aad1f1b3953ec434e0ad6a3fe"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PlatformSKU_1a5fc849418578a1a3716fcbffc7423005)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__PlatformSKU_1a5fc849418578a1a3716fcbffc7423005"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__PlatformSKU_1a2eb6371d0f542e17466b83ab32efca14)`()` <a id="structFRHAPI__PlatformSKU_1a2eb6371d0f542e17466b83ab32efca14"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__PlatformSKU_1ae3201d40874ea86f078b1410cfe8502e)`() const` <a id="structFRHAPI__PlatformSKU_1ae3201d40874ea86f078b1410cfe8502e"></a>

Checks whether CacheInfo_Optional has been set.

