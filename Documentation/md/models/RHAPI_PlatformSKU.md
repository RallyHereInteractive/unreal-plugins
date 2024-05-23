# group `RHAPI_PlatformSKU` <a id="group__RHAPI__PlatformSKU"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformSKU_1a4c39365f2f44c859c8101eb49ab92f60)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformSKU_1af07efdeb2ff37471aa284eb8f4ef32cf)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSKU_1a2d6f7e0acef1f7c31d9f893c112d6603)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSKU_1a9aa63ec8a957015c4242dc01b4cb96fe)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSKU_1a44d6c38331f64ed8c52af9d258d89e56)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlatformSKU_1ac56b1bcc86df3fc187bb05f872683081)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSKU_1aa880ae31e2fa7756f05194f839e6e141)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSKU_1a69706adb064ef3adc93fe73717a9fa77)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PlatformSKU_1a0f3511dbc61a43e4c06403965fadd6e2)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__PlatformSKU_1a97ef3918c80a8b544067db5b03420894)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlatformSKU_1aa09b2510aa16d25b7ca3745df479beda)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSKU_1a312ca77af030bdcc3dda327d7cdaf125)`()` | Gets the value of Platform.
`public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSKU_1a6f405f71a099bb401a595e402758424a)`() const` | Gets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PlatformSKU_1a71c25cc2e0edade592d12afbbc3b56ab)`(const ERHAPI_Platform & NewValue)` | Sets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PlatformSKU_1a694174e17aa8c1d5fc4c801b25880ab8)`(ERHAPI_Platform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FString & `[`GetSku`](#structFRHAPI__PlatformSKU_1adc508749618e35b7dac7fb031d49230d)`()` | Gets the value of Sku.
`public inline const FString & `[`GetSku`](#structFRHAPI__PlatformSKU_1a5fd709cf7823c990bd7784f4de7e148d)`() const` | Gets the value of Sku.
`public inline void `[`SetSku`](#structFRHAPI__PlatformSKU_1aca7257815422f1a54091fb8b6eefce05)`(const FString & NewValue)` | Sets the value of Sku.
`public inline void `[`SetSku`](#structFRHAPI__PlatformSKU_1a13e6e915a0725006e2cb18e02918b70f)`(FString && NewValue)` | Sets the value of Sku using move semantics.
`public inline `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1adff89c41a35f05efc4b43e5dc18cb7be)`()` | Gets the value of LootEntitlement_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1a06a95cb0eee331fecad7849566c33ba9)`() const` | Gets the value of LootEntitlement_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1ad8a636004cf54ed845c9df971cc273b4)`(const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & DefaultValue) const` | Gets the value of LootEntitlement_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1ae820336d6a400d0992dde839d910e310)`(`[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & OutValue) const` | Fills OutValue with the value of LootEntitlement_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` * `[`GetLootEntitlementOrNull`](#structFRHAPI__PlatformSKU_1a922e69344cfd461e01ebb6600a77fe5d)`()` | Returns a pointer to LootEntitlement_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` * `[`GetLootEntitlementOrNull`](#structFRHAPI__PlatformSKU_1a07a82e53683b10ebe3d970af87f5a49f)`() const` | Returns a pointer to LootEntitlement_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLootEntitlement`](#structFRHAPI__PlatformSKU_1a78410242d5c3ac658f3f72d681feac1a)`(const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & NewValue)` | Sets the value of LootEntitlement_Optional and also sets LootEntitlement_IsSet to true.
`public inline void `[`SetLootEntitlement`](#structFRHAPI__PlatformSKU_1a5db09a117f0070122cc317cda28624e8)`(`[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` && NewValue)` | Sets the value of LootEntitlement_Optional and also sets LootEntitlement_IsSet to true using move semantics.
`public inline void `[`ClearLootEntitlement`](#structFRHAPI__PlatformSKU_1af1e076aab333782b9c61fa0b34a7bc5c)`()` | Clears the value of LootEntitlement_Optional and sets LootEntitlement_IsSet to false.
`public inline `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a1ced2e72cde628255e4e247c3a018b2b)`()` | Gets the value of ExternalKeyEntitlement_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a6cb51a0d6f390a58a1c94379908980c9)`() const` | Gets the value of ExternalKeyEntitlement_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1ab1a28b04a3d0114d493a46f36d66bdf1)`(const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & DefaultValue) const` | Gets the value of ExternalKeyEntitlement_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1aa3d315d86c5081ee49829da8be019a4d)`(`[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & OutValue) const` | Fills OutValue with the value of ExternalKeyEntitlement_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` * `[`GetExternalKeyEntitlementOrNull`](#structFRHAPI__PlatformSKU_1ad377c5921227864149d7a31373f69fa9)`()` | Returns a pointer to ExternalKeyEntitlement_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` * `[`GetExternalKeyEntitlementOrNull`](#structFRHAPI__PlatformSKU_1a7d1a84da843f54f7c03b05b2a0a85805)`() const` | Returns a pointer to ExternalKeyEntitlement_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a29348bc682347895068750f831c396a1)`(const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & NewValue)` | Sets the value of ExternalKeyEntitlement_Optional and also sets ExternalKeyEntitlement_IsSet to true.
`public inline void `[`SetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a3f1013353632e48d9631c3f2a37eec1c)`(`[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` && NewValue)` | Sets the value of ExternalKeyEntitlement_Optional and also sets ExternalKeyEntitlement_IsSet to true using move semantics.
`public inline void `[`ClearExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1ad94aaa0ca142a3cf1c91c8e4e5972a1b)`()` | Clears the value of ExternalKeyEntitlement_Optional and sets ExternalKeyEntitlement_IsSet to false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1afaa3fb6bc0fd35ecd893723f85f00013)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1af288972cfc77f1513d97c07b9c86f201)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1aa6dba5e083ff1a680175c5a108be15ad)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1af7eb97540b84a51f252cf57420db97bf)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKU_1af1e919ef6e1b2c245b068b9b184f41a2)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKU_1a93192d56d0378a1b94bedaf7dc66d75d)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__PlatformSKU_1a370dfa7aad1f1b3953ec434e0ad6a3fe)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__PlatformSKU_1a5fc849418578a1a3716fcbffc7423005)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__PlatformSKU_1a2eb6371d0f542e17466b83ab32efca14)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

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

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformSKU_1a4c39365f2f44c859c8101eb49ab92f60)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformSKU_1a4c39365f2f44c859c8101eb49ab92f60"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformSKU_1af07efdeb2ff37471aa284eb8f4ef32cf)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlatformSKU_1af07efdeb2ff37471aa284eb8f4ef32cf"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSKU_1a2d6f7e0acef1f7c31d9f893c112d6603)`()` <a id="structFRHAPI__PlatformSKU_1a2d6f7e0acef1f7c31d9f893c112d6603"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSKU_1a9aa63ec8a957015c4242dc01b4cb96fe)`() const` <a id="structFRHAPI__PlatformSKU_1a9aa63ec8a957015c4242dc01b4cb96fe"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSKU_1a44d6c38331f64ed8c52af9d258d89e56)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlatformSKU_1a44d6c38331f64ed8c52af9d258d89e56"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlatformSKU_1ac56b1bcc86df3fc187bb05f872683081)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlatformSKU_1ac56b1bcc86df3fc187bb05f872683081"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSKU_1aa880ae31e2fa7756f05194f839e6e141)`()` <a id="structFRHAPI__PlatformSKU_1aa880ae31e2fa7756f05194f839e6e141"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSKU_1a69706adb064ef3adc93fe73717a9fa77)`() const` <a id="structFRHAPI__PlatformSKU_1a69706adb064ef3adc93fe73717a9fa77"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlatformSKU_1a0f3511dbc61a43e4c06403965fadd6e2)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlatformSKU_1a0f3511dbc61a43e4c06403965fadd6e2"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlatformSKU_1a97ef3918c80a8b544067db5b03420894)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlatformSKU_1a97ef3918c80a8b544067db5b03420894"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlatformSKU_1aa09b2510aa16d25b7ca3745df479beda)`()` <a id="structFRHAPI__PlatformSKU_1aa09b2510aa16d25b7ca3745df479beda"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSKU_1a312ca77af030bdcc3dda327d7cdaf125)`()` <a id="structFRHAPI__PlatformSKU_1a312ca77af030bdcc3dda327d7cdaf125"></a>

Gets the value of Platform.

#### `public inline const ERHAPI_Platform & `[`GetPlatform`](#structFRHAPI__PlatformSKU_1a6f405f71a099bb401a595e402758424a)`() const` <a id="structFRHAPI__PlatformSKU_1a6f405f71a099bb401a595e402758424a"></a>

Gets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PlatformSKU_1a71c25cc2e0edade592d12afbbc3b56ab)`(const ERHAPI_Platform & NewValue)` <a id="structFRHAPI__PlatformSKU_1a71c25cc2e0edade592d12afbbc3b56ab"></a>

Sets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PlatformSKU_1a694174e17aa8c1d5fc4c801b25880ab8)`(ERHAPI_Platform && NewValue)` <a id="structFRHAPI__PlatformSKU_1a694174e17aa8c1d5fc4c801b25880ab8"></a>

Sets the value of Platform using move semantics.

#### `public inline FString & `[`GetSku`](#structFRHAPI__PlatformSKU_1adc508749618e35b7dac7fb031d49230d)`()` <a id="structFRHAPI__PlatformSKU_1adc508749618e35b7dac7fb031d49230d"></a>

Gets the value of Sku.

#### `public inline const FString & `[`GetSku`](#structFRHAPI__PlatformSKU_1a5fd709cf7823c990bd7784f4de7e148d)`() const` <a id="structFRHAPI__PlatformSKU_1a5fd709cf7823c990bd7784f4de7e148d"></a>

Gets the value of Sku.

#### `public inline void `[`SetSku`](#structFRHAPI__PlatformSKU_1aca7257815422f1a54091fb8b6eefce05)`(const FString & NewValue)` <a id="structFRHAPI__PlatformSKU_1aca7257815422f1a54091fb8b6eefce05"></a>

Sets the value of Sku.

#### `public inline void `[`SetSku`](#structFRHAPI__PlatformSKU_1a13e6e915a0725006e2cb18e02918b70f)`(FString && NewValue)` <a id="structFRHAPI__PlatformSKU_1a13e6e915a0725006e2cb18e02918b70f"></a>

Sets the value of Sku using move semantics.

#### `public inline `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1adff89c41a35f05efc4b43e5dc18cb7be)`()` <a id="structFRHAPI__PlatformSKU_1adff89c41a35f05efc4b43e5dc18cb7be"></a>

Gets the value of LootEntitlement_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1a06a95cb0eee331fecad7849566c33ba9)`() const` <a id="structFRHAPI__PlatformSKU_1a06a95cb0eee331fecad7849566c33ba9"></a>

Gets the value of LootEntitlement_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1ad8a636004cf54ed845c9df971cc273b4)`(const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & DefaultValue) const` <a id="structFRHAPI__PlatformSKU_1ad8a636004cf54ed845c9df971cc273b4"></a>

Gets the value of LootEntitlement_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1ae820336d6a400d0992dde839d910e310)`(`[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & OutValue) const` <a id="structFRHAPI__PlatformSKU_1ae820336d6a400d0992dde839d910e310"></a>

Fills OutValue with the value of LootEntitlement_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` * `[`GetLootEntitlementOrNull`](#structFRHAPI__PlatformSKU_1a922e69344cfd461e01ebb6600a77fe5d)`()` <a id="structFRHAPI__PlatformSKU_1a922e69344cfd461e01ebb6600a77fe5d"></a>

Returns a pointer to LootEntitlement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` * `[`GetLootEntitlementOrNull`](#structFRHAPI__PlatformSKU_1a07a82e53683b10ebe3d970af87f5a49f)`() const` <a id="structFRHAPI__PlatformSKU_1a07a82e53683b10ebe3d970af87f5a49f"></a>

Returns a pointer to LootEntitlement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLootEntitlement`](#structFRHAPI__PlatformSKU_1a78410242d5c3ac658f3f72d681feac1a)`(const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & NewValue)` <a id="structFRHAPI__PlatformSKU_1a78410242d5c3ac658f3f72d681feac1a"></a>

Sets the value of LootEntitlement_Optional and also sets LootEntitlement_IsSet to true.

#### `public inline void `[`SetLootEntitlement`](#structFRHAPI__PlatformSKU_1a5db09a117f0070122cc317cda28624e8)`(`[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` && NewValue)` <a id="structFRHAPI__PlatformSKU_1a5db09a117f0070122cc317cda28624e8"></a>

Sets the value of LootEntitlement_Optional and also sets LootEntitlement_IsSet to true using move semantics.

#### `public inline void `[`ClearLootEntitlement`](#structFRHAPI__PlatformSKU_1af1e076aab333782b9c61fa0b34a7bc5c)`()` <a id="structFRHAPI__PlatformSKU_1af1e076aab333782b9c61fa0b34a7bc5c"></a>

Clears the value of LootEntitlement_Optional and sets LootEntitlement_IsSet to false.

#### `public inline `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a1ced2e72cde628255e4e247c3a018b2b)`()` <a id="structFRHAPI__PlatformSKU_1a1ced2e72cde628255e4e247c3a018b2b"></a>

Gets the value of ExternalKeyEntitlement_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a6cb51a0d6f390a58a1c94379908980c9)`() const` <a id="structFRHAPI__PlatformSKU_1a6cb51a0d6f390a58a1c94379908980c9"></a>

Gets the value of ExternalKeyEntitlement_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1ab1a28b04a3d0114d493a46f36d66bdf1)`(const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & DefaultValue) const` <a id="structFRHAPI__PlatformSKU_1ab1a28b04a3d0114d493a46f36d66bdf1"></a>

Gets the value of ExternalKeyEntitlement_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1aa3d315d86c5081ee49829da8be019a4d)`(`[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & OutValue) const` <a id="structFRHAPI__PlatformSKU_1aa3d315d86c5081ee49829da8be019a4d"></a>

Fills OutValue with the value of ExternalKeyEntitlement_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` * `[`GetExternalKeyEntitlementOrNull`](#structFRHAPI__PlatformSKU_1ad377c5921227864149d7a31373f69fa9)`()` <a id="structFRHAPI__PlatformSKU_1ad377c5921227864149d7a31373f69fa9"></a>

Returns a pointer to ExternalKeyEntitlement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` * `[`GetExternalKeyEntitlementOrNull`](#structFRHAPI__PlatformSKU_1a7d1a84da843f54f7c03b05b2a0a85805)`() const` <a id="structFRHAPI__PlatformSKU_1a7d1a84da843f54f7c03b05b2a0a85805"></a>

Returns a pointer to ExternalKeyEntitlement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a29348bc682347895068750f831c396a1)`(const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & NewValue)` <a id="structFRHAPI__PlatformSKU_1a29348bc682347895068750f831c396a1"></a>

Sets the value of ExternalKeyEntitlement_Optional and also sets ExternalKeyEntitlement_IsSet to true.

#### `public inline void `[`SetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a3f1013353632e48d9631c3f2a37eec1c)`(`[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` && NewValue)` <a id="structFRHAPI__PlatformSKU_1a3f1013353632e48d9631c3f2a37eec1c"></a>

Sets the value of ExternalKeyEntitlement_Optional and also sets ExternalKeyEntitlement_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1ad94aaa0ca142a3cf1c91c8e4e5972a1b)`()` <a id="structFRHAPI__PlatformSKU_1ad94aaa0ca142a3cf1c91c8e4e5972a1b"></a>

Clears the value of ExternalKeyEntitlement_Optional and sets ExternalKeyEntitlement_IsSet to false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1afaa3fb6bc0fd35ecd893723f85f00013)`()` <a id="structFRHAPI__PlatformSKU_1afaa3fb6bc0fd35ecd893723f85f00013"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1af288972cfc77f1513d97c07b9c86f201)`() const` <a id="structFRHAPI__PlatformSKU_1af288972cfc77f1513d97c07b9c86f201"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1aa6dba5e083ff1a680175c5a108be15ad)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__PlatformSKU_1aa6dba5e083ff1a680175c5a108be15ad"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1af7eb97540b84a51f252cf57420db97bf)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__PlatformSKU_1af7eb97540b84a51f252cf57420db97bf"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKU_1af1e919ef6e1b2c245b068b9b184f41a2)`()` <a id="structFRHAPI__PlatformSKU_1af1e919ef6e1b2c245b068b9b184f41a2"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKU_1a93192d56d0378a1b94bedaf7dc66d75d)`() const` <a id="structFRHAPI__PlatformSKU_1a93192d56d0378a1b94bedaf7dc66d75d"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PlatformSKU_1a370dfa7aad1f1b3953ec434e0ad6a3fe)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__PlatformSKU_1a370dfa7aad1f1b3953ec434e0ad6a3fe"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__PlatformSKU_1a5fc849418578a1a3716fcbffc7423005)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__PlatformSKU_1a5fc849418578a1a3716fcbffc7423005"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__PlatformSKU_1a2eb6371d0f542e17466b83ab32efca14)`()` <a id="structFRHAPI__PlatformSKU_1a2eb6371d0f542e17466b83ab32efca14"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

