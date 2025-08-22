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
`public ERHAPI_InventoryPlatform `[`Platform`](#structFRHAPI__PlatformSKU_1a37559d3f68078032b7a85a324b0912a7) | 
`public FString `[`Sku`](#structFRHAPI__PlatformSKU_1af2131a88628854eb0064c95508075269) | The SKU of the platform.
`public `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` `[`LootEntitlement_Optional`](#structFRHAPI__PlatformSKU_1ac971f3a8d5c5b954f6d1fc53bde49b5b) | 
`public bool `[`LootEntitlement_IsSet`](#structFRHAPI__PlatformSKU_1a3a9315ed369499d5167e2c87ab9b8d85) | true if LootEntitlement_Optional has been set to a value
`public bool `[`LootEntitlement_IsNull`](#structFRHAPI__PlatformSKU_1a47e64e6988e8fba1586b03a087f7bdb6) | true if LootEntitlement_Optional has been explicitly set to null
`public `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` `[`ExternalKeyEntitlement_Optional`](#structFRHAPI__PlatformSKU_1abf0202192f57100b48733c4d5836f5fe) | 
`public bool `[`ExternalKeyEntitlement_IsSet`](#structFRHAPI__PlatformSKU_1ab55ca7403fec640d81121324e41a2e5d) | true if ExternalKeyEntitlement_Optional has been set to a value
`public bool `[`ExternalKeyEntitlement_IsNull`](#structFRHAPI__PlatformSKU_1abfe668ff8a6ccec21c585a2578d05b8f) | true if ExternalKeyEntitlement_Optional has been explicitly set to null
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PlatformSKU_1ab26bc7287f433868876e7ee8ebd78a48) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__PlatformSKU_1a232a45f2e5f3c34b5021ea0bf05a9c06) | true if CacheInfo_Optional has been set to a value
`public bool `[`CacheInfo_IsNull`](#structFRHAPI__PlatformSKU_1adbdde2a2cc53ad3b89c5aabadccbcf4b) | true if CacheInfo_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformSKU_1a5bd16afdbc1a8f427b55df109045bca2)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformSKU_1ad6f9069526fb0ca26ac5acfb5d746551)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSKU_1a247f66934e8dc6b181635de8f65d4927)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSKU_1a06fc547ac87b07bbc061a59f39e768ed)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSKU_1a004bbd1ffc1d7c5b0625cd992d887858)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlatformSKU_1a88cd5f3556a320cc2f411427ac1dfc0b)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSKU_1ad0979d29f798775f1e1d702a727254e3)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSKU_1a27e14334c4577ecdaf8795408e605cef)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlatformSKU_1ab76ce947fa1ece6a1eb0dd41106734ca)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlatformSKU_1a7dab9cb9478ca38554e2bd41e64c9b71)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlatformSKU_1aa09b2510aa16d25b7ca3745df479beda)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE ERHAPI_InventoryPlatform & `[`GetPlatform`](#structFRHAPI__PlatformSKU_1ae4a918b6c947da7156427414e1530d1a)`()` | Gets the value of Platform.
`public inline FORCEINLINE const ERHAPI_InventoryPlatform & `[`GetPlatform`](#structFRHAPI__PlatformSKU_1a6bc43ece8a18d33aa294d32e49dac0e2)`() const` | Gets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformSKU_1a28a9c3b60958139c6614d481315a67ac)`(const ERHAPI_InventoryPlatform & NewValue)` | Sets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformSKU_1acf98d31739b69796f0e23b4558889a0b)`(ERHAPI_InventoryPlatform && NewValue)` | Sets the value of Platform using move semantics.
`public inline FORCEINLINE FString & `[`GetSku`](#structFRHAPI__PlatformSKU_1a117ee3a73686e3f7040af8ba06b8d086)`()` | Gets the value of Sku.
`public inline FORCEINLINE const FString & `[`GetSku`](#structFRHAPI__PlatformSKU_1af98d890f67f18f4ed847e16bd16dc0d1)`() const` | Gets the value of Sku.
`public inline FORCEINLINE void `[`SetSku`](#structFRHAPI__PlatformSKU_1a233cc6f5df3e1049b89e1f287de88310)`(const FString & NewValue)` | Sets the value of Sku.
`public inline FORCEINLINE void `[`SetSku`](#structFRHAPI__PlatformSKU_1aa00f51989b9a5bf851a52a8ce122d3c9)`(FString && NewValue)` | Sets the value of Sku using move semantics.
`public inline FORCEINLINE `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1a4a2c64b3cb3b1ab15777b2a9bc70b5e0)`()` | Gets the value of LootEntitlement_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1a0fbc1388a668b58f4dd9f263d7f8111d)`() const` | Gets the value of LootEntitlement_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1a47a98d824d0129bfbe89ee6ac4bd9781)`(const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & DefaultValue) const` | Gets the value of LootEntitlement_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1a426725c779b1557631f78ec007ddfb1e)`(`[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & OutValue) const` | Fills OutValue with the value of LootEntitlement_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` * `[`GetLootEntitlementOrNull`](#structFRHAPI__PlatformSKU_1a1eaae4d8f8f4f439a719d45136d7cdf6)`()` | Returns a pointer to LootEntitlement_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` * `[`GetLootEntitlementOrNull`](#structFRHAPI__PlatformSKU_1a8234897ed80a2782c6c364b04db69916)`() const` | Returns a pointer to LootEntitlement_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLootEntitlement`](#structFRHAPI__PlatformSKU_1a0a9ee0a2158a600307cf31456f8f5b57)`(const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & NewValue)` | Sets the value of LootEntitlement_Optional and also sets LootEntitlement_IsSet to true.
`public inline FORCEINLINE void `[`SetLootEntitlement`](#structFRHAPI__PlatformSKU_1af6fa76d448698ac8a99ac20e8284b0df)`(`[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` && NewValue)` | Sets the value of LootEntitlement_Optional and also sets LootEntitlement_IsSet to true using move semantics.
`public inline void `[`ClearLootEntitlement`](#structFRHAPI__PlatformSKU_1af1e076aab333782b9c61fa0b34a7bc5c)`()` | Clears the value of LootEntitlement_Optional and sets LootEntitlement_IsSet to false.
`public inline FORCEINLINE void `[`SetLootEntitlementToNull`](#structFRHAPI__PlatformSKU_1a57fafbaeca971366e77abaaec9d27ead)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsLootEntitlementNull`](#structFRHAPI__PlatformSKU_1afff7824ee614a18a9c1db6296953b9fd)`() const` | Checks whether LootEntitlement_Optional is set to null.
`public inline FORCEINLINE `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a161e874c73da4fa0dfc43194267729b9)`()` | Gets the value of ExternalKeyEntitlement_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a6216b560d3cb723d5f799a96b8aa0164)`() const` | Gets the value of ExternalKeyEntitlement_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a5441f45bea7791461a86b12d897e99d4)`(const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & DefaultValue) const` | Gets the value of ExternalKeyEntitlement_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a7ba2f9f2fed49f4bcb6c0ac3b3461687)`(`[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & OutValue) const` | Fills OutValue with the value of ExternalKeyEntitlement_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` * `[`GetExternalKeyEntitlementOrNull`](#structFRHAPI__PlatformSKU_1a4b450998a115030eed4ce1a8586d33ac)`()` | Returns a pointer to ExternalKeyEntitlement_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` * `[`GetExternalKeyEntitlementOrNull`](#structFRHAPI__PlatformSKU_1a03f7b681f16ec0189867c97a964a7dee)`() const` | Returns a pointer to ExternalKeyEntitlement_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a547960e7d649713a09586f32f9066ff0)`(const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & NewValue)` | Sets the value of ExternalKeyEntitlement_Optional and also sets ExternalKeyEntitlement_IsSet to true.
`public inline FORCEINLINE void `[`SetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a5ee267db5099ea752432d786ab6bcf94)`(`[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` && NewValue)` | Sets the value of ExternalKeyEntitlement_Optional and also sets ExternalKeyEntitlement_IsSet to true using move semantics.
`public inline void `[`ClearExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1ad94aaa0ca142a3cf1c91c8e4e5972a1b)`()` | Clears the value of ExternalKeyEntitlement_Optional and sets ExternalKeyEntitlement_IsSet to false.
`public inline FORCEINLINE void `[`SetExternalKeyEntitlementToNull`](#structFRHAPI__PlatformSKU_1ae36db8183d1cb8c20d7a16c5ff39c118)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsExternalKeyEntitlementNull`](#structFRHAPI__PlatformSKU_1a3b066ca5b600b2032965cca538d0f6cf)`() const` | Checks whether ExternalKeyEntitlement_Optional is set to null.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1adae11eb87ba6cf6a538c6fe27b7947ad)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1a8f10594e0159d89e70df197a655df062)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1a8f9bab2d94db22358e6f5d5278a7e4ea)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1a8a7b63540cdb5817889a3ddcda5e4cce)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKU_1a71c48d4e68cc20fa3e7adf00e8068069)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKU_1aac8ad781e84316808c7f4ac0698de2fb)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PlatformSKU_1aede1184ee80d3e6502f575fcf20f8747)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PlatformSKU_1acc6f821a619eb9984d7b64dbfc47426c)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__PlatformSKU_1a2eb6371d0f542e17466b83ab32efca14)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__PlatformSKU_1af58fa6e8e43497c26e3225d32ce19487)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__PlatformSKU_1a756cc5316a4d6d1bb0d5b3911edc436d)`() const` | Checks whether CacheInfo_Optional is set to null.

### Members

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlatformSKU_1ab26debe0ff1c24b61599980b44812b2b) <a id="structFRHAPI__PlatformSKU_1ab26debe0ff1c24b61599980b44812b2b"></a>

Custom data associated with the resource.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlatformSKU_1ad5828116f650ea7901ae60a78f2e9d7a) <a id="structFRHAPI__PlatformSKU_1ad5828116f650ea7901ae60a78f2e9d7a"></a>

true if CustomData_Optional has been set to a value

#### `public ERHAPI_InventoryPlatform `[`Platform`](#structFRHAPI__PlatformSKU_1a37559d3f68078032b7a85a324b0912a7) <a id="structFRHAPI__PlatformSKU_1a37559d3f68078032b7a85a324b0912a7"></a>

#### `public FString `[`Sku`](#structFRHAPI__PlatformSKU_1af2131a88628854eb0064c95508075269) <a id="structFRHAPI__PlatformSKU_1af2131a88628854eb0064c95508075269"></a>

The SKU of the platform.

#### `public `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` `[`LootEntitlement_Optional`](#structFRHAPI__PlatformSKU_1ac971f3a8d5c5b954f6d1fc53bde49b5b) <a id="structFRHAPI__PlatformSKU_1ac971f3a8d5c5b954f6d1fc53bde49b5b"></a>

#### `public bool `[`LootEntitlement_IsSet`](#structFRHAPI__PlatformSKU_1a3a9315ed369499d5167e2c87ab9b8d85) <a id="structFRHAPI__PlatformSKU_1a3a9315ed369499d5167e2c87ab9b8d85"></a>

true if LootEntitlement_Optional has been set to a value

#### `public bool `[`LootEntitlement_IsNull`](#structFRHAPI__PlatformSKU_1a47e64e6988e8fba1586b03a087f7bdb6) <a id="structFRHAPI__PlatformSKU_1a47e64e6988e8fba1586b03a087f7bdb6"></a>

true if LootEntitlement_Optional has been explicitly set to null

#### `public `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` `[`ExternalKeyEntitlement_Optional`](#structFRHAPI__PlatformSKU_1abf0202192f57100b48733c4d5836f5fe) <a id="structFRHAPI__PlatformSKU_1abf0202192f57100b48733c4d5836f5fe"></a>

#### `public bool `[`ExternalKeyEntitlement_IsSet`](#structFRHAPI__PlatformSKU_1ab55ca7403fec640d81121324e41a2e5d) <a id="structFRHAPI__PlatformSKU_1ab55ca7403fec640d81121324e41a2e5d"></a>

true if ExternalKeyEntitlement_Optional has been set to a value

#### `public bool `[`ExternalKeyEntitlement_IsNull`](#structFRHAPI__PlatformSKU_1abfe668ff8a6ccec21c585a2578d05b8f) <a id="structFRHAPI__PlatformSKU_1abfe668ff8a6ccec21c585a2578d05b8f"></a>

true if ExternalKeyEntitlement_Optional has been explicitly set to null

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__PlatformSKU_1ab26bc7287f433868876e7ee8ebd78a48) <a id="structFRHAPI__PlatformSKU_1ab26bc7287f433868876e7ee8ebd78a48"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__PlatformSKU_1a232a45f2e5f3c34b5021ea0bf05a9c06) <a id="structFRHAPI__PlatformSKU_1a232a45f2e5f3c34b5021ea0bf05a9c06"></a>

true if CacheInfo_Optional has been set to a value

#### `public bool `[`CacheInfo_IsNull`](#structFRHAPI__PlatformSKU_1adbdde2a2cc53ad3b89c5aabadccbcf4b) <a id="structFRHAPI__PlatformSKU_1adbdde2a2cc53ad3b89c5aabadccbcf4b"></a>

true if CacheInfo_Optional has been explicitly set to null

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

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSKU_1a247f66934e8dc6b181635de8f65d4927)`()` <a id="structFRHAPI__PlatformSKU_1a247f66934e8dc6b181635de8f65d4927"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSKU_1a06fc547ac87b07bbc061a59f39e768ed)`() const` <a id="structFRHAPI__PlatformSKU_1a06fc547ac87b07bbc061a59f39e768ed"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlatformSKU_1a004bbd1ffc1d7c5b0625cd992d887858)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlatformSKU_1a004bbd1ffc1d7c5b0625cd992d887858"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlatformSKU_1a88cd5f3556a320cc2f411427ac1dfc0b)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlatformSKU_1a88cd5f3556a320cc2f411427ac1dfc0b"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSKU_1ad0979d29f798775f1e1d702a727254e3)`()` <a id="structFRHAPI__PlatformSKU_1ad0979d29f798775f1e1d702a727254e3"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlatformSKU_1a27e14334c4577ecdaf8795408e605cef)`() const` <a id="structFRHAPI__PlatformSKU_1a27e14334c4577ecdaf8795408e605cef"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlatformSKU_1ab76ce947fa1ece6a1eb0dd41106734ca)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlatformSKU_1ab76ce947fa1ece6a1eb0dd41106734ca"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlatformSKU_1a7dab9cb9478ca38554e2bd41e64c9b71)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlatformSKU_1a7dab9cb9478ca38554e2bd41e64c9b71"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlatformSKU_1aa09b2510aa16d25b7ca3745df479beda)`()` <a id="structFRHAPI__PlatformSKU_1aa09b2510aa16d25b7ca3745df479beda"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_InventoryPlatform & `[`GetPlatform`](#structFRHAPI__PlatformSKU_1ae4a918b6c947da7156427414e1530d1a)`()` <a id="structFRHAPI__PlatformSKU_1ae4a918b6c947da7156427414e1530d1a"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE const ERHAPI_InventoryPlatform & `[`GetPlatform`](#structFRHAPI__PlatformSKU_1a6bc43ece8a18d33aa294d32e49dac0e2)`() const` <a id="structFRHAPI__PlatformSKU_1a6bc43ece8a18d33aa294d32e49dac0e2"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformSKU_1a28a9c3b60958139c6614d481315a67ac)`(const ERHAPI_InventoryPlatform & NewValue)` <a id="structFRHAPI__PlatformSKU_1a28a9c3b60958139c6614d481315a67ac"></a>

Sets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlatformSKU_1acf98d31739b69796f0e23b4558889a0b)`(ERHAPI_InventoryPlatform && NewValue)` <a id="structFRHAPI__PlatformSKU_1acf98d31739b69796f0e23b4558889a0b"></a>

Sets the value of Platform using move semantics.

#### `public inline FORCEINLINE FString & `[`GetSku`](#structFRHAPI__PlatformSKU_1a117ee3a73686e3f7040af8ba06b8d086)`()` <a id="structFRHAPI__PlatformSKU_1a117ee3a73686e3f7040af8ba06b8d086"></a>

Gets the value of Sku.

#### `public inline FORCEINLINE const FString & `[`GetSku`](#structFRHAPI__PlatformSKU_1af98d890f67f18f4ed847e16bd16dc0d1)`() const` <a id="structFRHAPI__PlatformSKU_1af98d890f67f18f4ed847e16bd16dc0d1"></a>

Gets the value of Sku.

#### `public inline FORCEINLINE void `[`SetSku`](#structFRHAPI__PlatformSKU_1a233cc6f5df3e1049b89e1f287de88310)`(const FString & NewValue)` <a id="structFRHAPI__PlatformSKU_1a233cc6f5df3e1049b89e1f287de88310"></a>

Sets the value of Sku.

#### `public inline FORCEINLINE void `[`SetSku`](#structFRHAPI__PlatformSKU_1aa00f51989b9a5bf851a52a8ce122d3c9)`(FString && NewValue)` <a id="structFRHAPI__PlatformSKU_1aa00f51989b9a5bf851a52a8ce122d3c9"></a>

Sets the value of Sku using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1a4a2c64b3cb3b1ab15777b2a9bc70b5e0)`()` <a id="structFRHAPI__PlatformSKU_1a4a2c64b3cb3b1ab15777b2a9bc70b5e0"></a>

Gets the value of LootEntitlement_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1a0fbc1388a668b58f4dd9f263d7f8111d)`() const` <a id="structFRHAPI__PlatformSKU_1a0fbc1388a668b58f4dd9f263d7f8111d"></a>

Gets the value of LootEntitlement_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1a47a98d824d0129bfbe89ee6ac4bd9781)`(const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & DefaultValue) const` <a id="structFRHAPI__PlatformSKU_1a47a98d824d0129bfbe89ee6ac4bd9781"></a>

Gets the value of LootEntitlement_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLootEntitlement`](#structFRHAPI__PlatformSKU_1a426725c779b1557631f78ec007ddfb1e)`(`[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & OutValue) const` <a id="structFRHAPI__PlatformSKU_1a426725c779b1557631f78ec007ddfb1e"></a>

Fills OutValue with the value of LootEntitlement_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` * `[`GetLootEntitlementOrNull`](#structFRHAPI__PlatformSKU_1a1eaae4d8f8f4f439a719d45136d7cdf6)`()` <a id="structFRHAPI__PlatformSKU_1a1eaae4d8f8f4f439a719d45136d7cdf6"></a>

Returns a pointer to LootEntitlement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` * `[`GetLootEntitlementOrNull`](#structFRHAPI__PlatformSKU_1a8234897ed80a2782c6c364b04db69916)`() const` <a id="structFRHAPI__PlatformSKU_1a8234897ed80a2782c6c364b04db69916"></a>

Returns a pointer to LootEntitlement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLootEntitlement`](#structFRHAPI__PlatformSKU_1a0a9ee0a2158a600307cf31456f8f5b57)`(const `[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` & NewValue)` <a id="structFRHAPI__PlatformSKU_1a0a9ee0a2158a600307cf31456f8f5b57"></a>

Sets the value of LootEntitlement_Optional and also sets LootEntitlement_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLootEntitlement`](#structFRHAPI__PlatformSKU_1af6fa76d448698ac8a99ac20e8284b0df)`(`[`FRHAPI_LootEntitlement`](RHAPI_LootEntitlement.md#structFRHAPI__LootEntitlement)` && NewValue)` <a id="structFRHAPI__PlatformSKU_1af6fa76d448698ac8a99ac20e8284b0df"></a>

Sets the value of LootEntitlement_Optional and also sets LootEntitlement_IsSet to true using move semantics.

#### `public inline void `[`ClearLootEntitlement`](#structFRHAPI__PlatformSKU_1af1e076aab333782b9c61fa0b34a7bc5c)`()` <a id="structFRHAPI__PlatformSKU_1af1e076aab333782b9c61fa0b34a7bc5c"></a>

Clears the value of LootEntitlement_Optional and sets LootEntitlement_IsSet to false.

#### `public inline FORCEINLINE void `[`SetLootEntitlementToNull`](#structFRHAPI__PlatformSKU_1a57fafbaeca971366e77abaaec9d27ead)`()` <a id="structFRHAPI__PlatformSKU_1a57fafbaeca971366e77abaaec9d27ead"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsLootEntitlementNull`](#structFRHAPI__PlatformSKU_1afff7824ee614a18a9c1db6296953b9fd)`() const` <a id="structFRHAPI__PlatformSKU_1afff7824ee614a18a9c1db6296953b9fd"></a>

Checks whether LootEntitlement_Optional is set to null.

#### `public inline FORCEINLINE `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a161e874c73da4fa0dfc43194267729b9)`()` <a id="structFRHAPI__PlatformSKU_1a161e874c73da4fa0dfc43194267729b9"></a>

Gets the value of ExternalKeyEntitlement_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a6216b560d3cb723d5f799a96b8aa0164)`() const` <a id="structFRHAPI__PlatformSKU_1a6216b560d3cb723d5f799a96b8aa0164"></a>

Gets the value of ExternalKeyEntitlement_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a5441f45bea7791461a86b12d897e99d4)`(const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & DefaultValue) const` <a id="structFRHAPI__PlatformSKU_1a5441f45bea7791461a86b12d897e99d4"></a>

Gets the value of ExternalKeyEntitlement_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a7ba2f9f2fed49f4bcb6c0ac3b3461687)`(`[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & OutValue) const` <a id="structFRHAPI__PlatformSKU_1a7ba2f9f2fed49f4bcb6c0ac3b3461687"></a>

Fills OutValue with the value of ExternalKeyEntitlement_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` * `[`GetExternalKeyEntitlementOrNull`](#structFRHAPI__PlatformSKU_1a4b450998a115030eed4ce1a8586d33ac)`()` <a id="structFRHAPI__PlatformSKU_1a4b450998a115030eed4ce1a8586d33ac"></a>

Returns a pointer to ExternalKeyEntitlement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` * `[`GetExternalKeyEntitlementOrNull`](#structFRHAPI__PlatformSKU_1a03f7b681f16ec0189867c97a964a7dee)`() const` <a id="structFRHAPI__PlatformSKU_1a03f7b681f16ec0189867c97a964a7dee"></a>

Returns a pointer to ExternalKeyEntitlement_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a547960e7d649713a09586f32f9066ff0)`(const `[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` & NewValue)` <a id="structFRHAPI__PlatformSKU_1a547960e7d649713a09586f32f9066ff0"></a>

Sets the value of ExternalKeyEntitlement_Optional and also sets ExternalKeyEntitlement_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1a5ee267db5099ea752432d786ab6bcf94)`(`[`FRHAPI_ExternalKeyEntitlement`](RHAPI_ExternalKeyEntitlement.md#structFRHAPI__ExternalKeyEntitlement)` && NewValue)` <a id="structFRHAPI__PlatformSKU_1a5ee267db5099ea752432d786ab6bcf94"></a>

Sets the value of ExternalKeyEntitlement_Optional and also sets ExternalKeyEntitlement_IsSet to true using move semantics.

#### `public inline void `[`ClearExternalKeyEntitlement`](#structFRHAPI__PlatformSKU_1ad94aaa0ca142a3cf1c91c8e4e5972a1b)`()` <a id="structFRHAPI__PlatformSKU_1ad94aaa0ca142a3cf1c91c8e4e5972a1b"></a>

Clears the value of ExternalKeyEntitlement_Optional and sets ExternalKeyEntitlement_IsSet to false.

#### `public inline FORCEINLINE void `[`SetExternalKeyEntitlementToNull`](#structFRHAPI__PlatformSKU_1ae36db8183d1cb8c20d7a16c5ff39c118)`()` <a id="structFRHAPI__PlatformSKU_1ae36db8183d1cb8c20d7a16c5ff39c118"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsExternalKeyEntitlementNull`](#structFRHAPI__PlatformSKU_1a3b066ca5b600b2032965cca538d0f6cf)`() const` <a id="structFRHAPI__PlatformSKU_1a3b066ca5b600b2032965cca538d0f6cf"></a>

Checks whether ExternalKeyEntitlement_Optional is set to null.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1adae11eb87ba6cf6a538c6fe27b7947ad)`()` <a id="structFRHAPI__PlatformSKU_1adae11eb87ba6cf6a538c6fe27b7947ad"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1a8f10594e0159d89e70df197a655df062)`() const` <a id="structFRHAPI__PlatformSKU_1a8f10594e0159d89e70df197a655df062"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1a8f9bab2d94db22358e6f5d5278a7e4ea)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__PlatformSKU_1a8f9bab2d94db22358e6f5d5278a7e4ea"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__PlatformSKU_1a8a7b63540cdb5817889a3ddcda5e4cce)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__PlatformSKU_1a8a7b63540cdb5817889a3ddcda5e4cce"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKU_1a71c48d4e68cc20fa3e7adf00e8068069)`()` <a id="structFRHAPI__PlatformSKU_1a71c48d4e68cc20fa3e7adf00e8068069"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__PlatformSKU_1aac8ad781e84316808c7f4ac0698de2fb)`() const` <a id="structFRHAPI__PlatformSKU_1aac8ad781e84316808c7f4ac0698de2fb"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PlatformSKU_1aede1184ee80d3e6502f575fcf20f8747)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__PlatformSKU_1aede1184ee80d3e6502f575fcf20f8747"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__PlatformSKU_1acc6f821a619eb9984d7b64dbfc47426c)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__PlatformSKU_1acc6f821a619eb9984d7b64dbfc47426c"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__PlatformSKU_1a2eb6371d0f542e17466b83ab32efca14)`()` <a id="structFRHAPI__PlatformSKU_1a2eb6371d0f542e17466b83ab32efca14"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__PlatformSKU_1af58fa6e8e43497c26e3225d32ce19487)`()` <a id="structFRHAPI__PlatformSKU_1af58fa6e8e43497c26e3225d32ce19487"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__PlatformSKU_1a756cc5316a4d6d1bb0d5b3911edc436d)`() const` <a id="structFRHAPI__PlatformSKU_1a756cc5316a4d6d1bb0d5b3911edc436d"></a>

Checks whether CacheInfo_Optional is set to null.

