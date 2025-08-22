---
title: RHAPI_PlatformEntitlement
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlatformEntitlement`](#structFRHAPI__PlatformEntitlement) | Entitlement for a platform. This takes in a sku and platform entitlement id and checks to see if the user has the entitlement on the platform.

## struct `FRHAPI_PlatformEntitlement` <a id="structFRHAPI__PlatformEntitlement"></a>

```
struct FRHAPI_PlatformEntitlement
  : public FRHAPI_Model
```

Entitlement for a platform. This takes in a sku and platform entitlement id and checks to see if the user has the entitlement on the platform.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`PlatformSku`](#structFRHAPI__PlatformEntitlement_1afbc894e85f0ee1a0fbcec0c9406446be) | platform identifier for this purchase type
`public FString `[`PlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1a1f0da440869af28c6c1fa699f6a203c3) | unique identifier for this purchased item (instance owned by this user)
`public int32 `[`Quantity_Optional`](#structFRHAPI__PlatformEntitlement_1a2b26f0881eee1e31938f8b08dd6b8213) | number purchased
`public bool `[`Quantity_IsSet`](#structFRHAPI__PlatformEntitlement_1ae90d971477356498b773361d21b0aec5) | true if Quantity_Optional has been set to a value
`public ERHAPI_EntitlementStatus `[`Status_Optional`](#structFRHAPI__PlatformEntitlement_1a790f0f33a52b22044781553c8dc89e9c) | 
`public bool `[`Status_IsSet`](#structFRHAPI__PlatformEntitlement_1adfaea0a1a88f96e0df831b5317fb9727) | true if Status_Optional has been set to a value
`public FString `[`ErrorCode_Optional`](#structFRHAPI__PlatformEntitlement_1ac692bdec52d06c780f1ed40d7f75f26d) | Error code for this entitlement.
`public bool `[`ErrorCode_IsSet`](#structFRHAPI__PlatformEntitlement_1a158a8da1519ab450f6b69a06c39125e4) | true if ErrorCode_Optional has been set to a value
`public FString `[`OrderId_Optional`](#structFRHAPI__PlatformEntitlement_1a6ccc74894efd1734a3039280c70e2cb4) | Order ID for this entitlement.
`public bool `[`OrderId_IsSet`](#structFRHAPI__PlatformEntitlement_1a2f2afbbb21016ec66a725cfe7d1406a6) | true if OrderId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformEntitlement_1a4d50c6f627905016240b9c2fa85791af)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlement_1a55ed67228a18e39bbbc3f40ef7a9e44f)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetPlatformSku`](#structFRHAPI__PlatformEntitlement_1aeb4376617f4e7bb3340e74ef4a4ec4ff)`()` | Gets the value of PlatformSku.
`public inline FORCEINLINE const FString & `[`GetPlatformSku`](#structFRHAPI__PlatformEntitlement_1aa0777786322720408cb459be68e7344c)`() const` | Gets the value of PlatformSku.
`public inline FORCEINLINE void `[`SetPlatformSku`](#structFRHAPI__PlatformEntitlement_1aa354e092a0c0f76d6a93738437d368fb)`(const FString & NewValue)` | Sets the value of PlatformSku.
`public inline FORCEINLINE void `[`SetPlatformSku`](#structFRHAPI__PlatformEntitlement_1a05110895093d578147a9f4f0b721470c)`(FString && NewValue)` | Sets the value of PlatformSku using move semantics.
`public inline FORCEINLINE FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1a2695285c0314207ae832ab9ad318fead)`()` | Gets the value of PlatformEntitlementId.
`public inline FORCEINLINE const FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1a2759fdd70c580bd1b6cc8bef7b26ca84)`() const` | Gets the value of PlatformEntitlementId.
`public inline FORCEINLINE void `[`SetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1a926d7cdc54d9a63a98eb14145632f6a5)`(const FString & NewValue)` | Sets the value of PlatformEntitlementId.
`public inline FORCEINLINE void `[`SetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1a9c28e746e1da0e12d7f743a93b448b3e)`(FString && NewValue)` | Sets the value of PlatformEntitlementId using move semantics.
`public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1a3966cce539a8c54d1959902fa1005bfb)`()` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1adf3572ca6b4b606c4177fc3b7a49b292)`() const` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1ac115d1e5755f46ec35a8a753c93a32d6)`(const int32 & DefaultValue) const` | Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1a7aac0ea315affec06e3cf5c9c2d2a956)`(int32 & OutValue) const` | Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetQuantityOrNull`](#structFRHAPI__PlatformEntitlement_1aebb4a5e5bece823ffb3ae25b9027b249)`()` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetQuantityOrNull`](#structFRHAPI__PlatformEntitlement_1ad8f96d30e2dc5a72c24c56ca53ecfa9b)`() const` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PlatformEntitlement_1ab7878306172d7b0f1f1542a1a60c025b)`(const int32 & NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PlatformEntitlement_1a8a5a91570e4d4c93406b39ea43eaecdf)`(int32 && NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.
`public inline void `[`ClearQuantity`](#structFRHAPI__PlatformEntitlement_1a0a7253e3dc98331cb4688fadb3d5ba17)`()` | Clears the value of Quantity_Optional and sets Quantity_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__PlatformEntitlement_1a3c998332f2f0ccdbbb3b13b3ec367801)`()` | Returns the default value of Quantity.
`public inline FORCEINLINE ERHAPI_EntitlementStatus & `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1ac8d37d51830e28e3a66a89be12250bd5)`()` | Gets the value of Status_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_EntitlementStatus & `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1ab4e51d7f83325cc35a0951c361a6aeb6)`() const` | Gets the value of Status_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_EntitlementStatus & `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1a370181b2fced3b2c7ee6456dacdefe35)`(const ERHAPI_EntitlementStatus & DefaultValue) const` | Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1a1f2fe474680352910fe7a98474d002a5)`(ERHAPI_EntitlementStatus & OutValue) const` | Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_EntitlementStatus * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlement_1a66594d575c5a741ef334517eaed26793)`()` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_EntitlementStatus * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlement_1a5272bd7aacbe237e7d512d9632ded1a3)`() const` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__PlatformEntitlement_1ac9a0a3b6c4517d38a13eee1d397f250b)`(const ERHAPI_EntitlementStatus & NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__PlatformEntitlement_1a18fe6ba267db9b3a6662e036e9f53525)`(ERHAPI_EntitlementStatus && NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.
`public inline void `[`ClearStatus`](#structFRHAPI__PlatformEntitlement_1a557a01818d6f93c0569b40045cc3553a)`()` | Clears the value of Status_Optional and sets Status_IsSet to false.
`public inline FORCEINLINE FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1afba8d4b84ef475bab40ef6821d8259fe)`()` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1a7a37f55b5cb9d02b3588ad10d53f4f2b)`() const` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1a7928454009d0f21a9098994b9abfefb1)`(const FString & DefaultValue) const` | Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1afd6225b0a2ae7b6ecf5976b78d2db3a5)`(FString & OutValue) const` | Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlement_1acdf10e9b36f079982870732b18d431f7)`()` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlement_1a7fc86bfc76ab7d11ce1911ce83664033)`() const` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlement_1a1c327e3db4512374a245249c73634f1b)`(const FString & NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.
`public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlement_1aaa0a52a13fc1baea8e87904b56c4a9c8)`(FString && NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.
`public inline void `[`ClearErrorCode`](#structFRHAPI__PlatformEntitlement_1a51228045f457ea6ce4192f90412e9ed5)`()` | Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.
`public inline FORCEINLINE FString `[`GetDefaultValue_ErrorCode`](#structFRHAPI__PlatformEntitlement_1ab5115874773eddc20a4f8115095e7980)`()` | Returns the default value of ErrorCode.
`public inline FORCEINLINE FString & `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1a9ebd718e97e58b3102db5a03b4e2ed6b)`()` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1a035053e5043c525fd9e8d8b587bbd297)`() const` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1a0f7a511abfd662276e3ad6f30976c4e4)`(const FString & DefaultValue) const` | Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1a5a64e6c489594e05f0bc42947d10d683)`(FString & OutValue) const` | Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlatformEntitlement_1a1c6c2998b46b6e2a583ca32436b49baf)`()` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlatformEntitlement_1ac4b76ccc9d79076f6b01b2c1a0d01e21)`() const` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__PlatformEntitlement_1aa8f98d936a6ee1a84c5b571cd6fa5d36)`(const FString & NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.
`public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__PlatformEntitlement_1a3824b880bc1439854eef50428d39a9ed)`(FString && NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.
`public inline void `[`ClearOrderId`](#structFRHAPI__PlatformEntitlement_1aced25565f90e25790e543b78dc85432f)`()` | Clears the value of OrderId_Optional and sets OrderId_IsSet to false.

### Members

#### `public FString `[`PlatformSku`](#structFRHAPI__PlatformEntitlement_1afbc894e85f0ee1a0fbcec0c9406446be) <a id="structFRHAPI__PlatformEntitlement_1afbc894e85f0ee1a0fbcec0c9406446be"></a>

platform identifier for this purchase type

#### `public FString `[`PlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1a1f0da440869af28c6c1fa699f6a203c3) <a id="structFRHAPI__PlatformEntitlement_1a1f0da440869af28c6c1fa699f6a203c3"></a>

unique identifier for this purchased item (instance owned by this user)

#### `public int32 `[`Quantity_Optional`](#structFRHAPI__PlatformEntitlement_1a2b26f0881eee1e31938f8b08dd6b8213) <a id="structFRHAPI__PlatformEntitlement_1a2b26f0881eee1e31938f8b08dd6b8213"></a>

number purchased

#### `public bool `[`Quantity_IsSet`](#structFRHAPI__PlatformEntitlement_1ae90d971477356498b773361d21b0aec5) <a id="structFRHAPI__PlatformEntitlement_1ae90d971477356498b773361d21b0aec5"></a>

true if Quantity_Optional has been set to a value

#### `public ERHAPI_EntitlementStatus `[`Status_Optional`](#structFRHAPI__PlatformEntitlement_1a790f0f33a52b22044781553c8dc89e9c) <a id="structFRHAPI__PlatformEntitlement_1a790f0f33a52b22044781553c8dc89e9c"></a>

#### `public bool `[`Status_IsSet`](#structFRHAPI__PlatformEntitlement_1adfaea0a1a88f96e0df831b5317fb9727) <a id="structFRHAPI__PlatformEntitlement_1adfaea0a1a88f96e0df831b5317fb9727"></a>

true if Status_Optional has been set to a value

#### `public FString `[`ErrorCode_Optional`](#structFRHAPI__PlatformEntitlement_1ac692bdec52d06c780f1ed40d7f75f26d) <a id="structFRHAPI__PlatformEntitlement_1ac692bdec52d06c780f1ed40d7f75f26d"></a>

Error code for this entitlement.

#### `public bool `[`ErrorCode_IsSet`](#structFRHAPI__PlatformEntitlement_1a158a8da1519ab450f6b69a06c39125e4) <a id="structFRHAPI__PlatformEntitlement_1a158a8da1519ab450f6b69a06c39125e4"></a>

true if ErrorCode_Optional has been set to a value

#### `public FString `[`OrderId_Optional`](#structFRHAPI__PlatformEntitlement_1a6ccc74894efd1734a3039280c70e2cb4) <a id="structFRHAPI__PlatformEntitlement_1a6ccc74894efd1734a3039280c70e2cb4"></a>

Order ID for this entitlement.

#### `public bool `[`OrderId_IsSet`](#structFRHAPI__PlatformEntitlement_1a2f2afbbb21016ec66a725cfe7d1406a6) <a id="structFRHAPI__PlatformEntitlement_1a2f2afbbb21016ec66a725cfe7d1406a6"></a>

true if OrderId_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlatformEntitlement_1a4d50c6f627905016240b9c2fa85791af)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlatformEntitlement_1a4d50c6f627905016240b9c2fa85791af"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlement_1a55ed67228a18e39bbbc3f40ef7a9e44f)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlatformEntitlement_1a55ed67228a18e39bbbc3f40ef7a9e44f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetPlatformSku`](#structFRHAPI__PlatformEntitlement_1aeb4376617f4e7bb3340e74ef4a4ec4ff)`()` <a id="structFRHAPI__PlatformEntitlement_1aeb4376617f4e7bb3340e74ef4a4ec4ff"></a>

Gets the value of PlatformSku.

#### `public inline FORCEINLINE const FString & `[`GetPlatformSku`](#structFRHAPI__PlatformEntitlement_1aa0777786322720408cb459be68e7344c)`() const` <a id="structFRHAPI__PlatformEntitlement_1aa0777786322720408cb459be68e7344c"></a>

Gets the value of PlatformSku.

#### `public inline FORCEINLINE void `[`SetPlatformSku`](#structFRHAPI__PlatformEntitlement_1aa354e092a0c0f76d6a93738437d368fb)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlement_1aa354e092a0c0f76d6a93738437d368fb"></a>

Sets the value of PlatformSku.

#### `public inline FORCEINLINE void `[`SetPlatformSku`](#structFRHAPI__PlatformEntitlement_1a05110895093d578147a9f4f0b721470c)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlement_1a05110895093d578147a9f4f0b721470c"></a>

Sets the value of PlatformSku using move semantics.

#### `public inline FORCEINLINE FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1a2695285c0314207ae832ab9ad318fead)`()` <a id="structFRHAPI__PlatformEntitlement_1a2695285c0314207ae832ab9ad318fead"></a>

Gets the value of PlatformEntitlementId.

#### `public inline FORCEINLINE const FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1a2759fdd70c580bd1b6cc8bef7b26ca84)`() const` <a id="structFRHAPI__PlatformEntitlement_1a2759fdd70c580bd1b6cc8bef7b26ca84"></a>

Gets the value of PlatformEntitlementId.

#### `public inline FORCEINLINE void `[`SetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1a926d7cdc54d9a63a98eb14145632f6a5)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlement_1a926d7cdc54d9a63a98eb14145632f6a5"></a>

Sets the value of PlatformEntitlementId.

#### `public inline FORCEINLINE void `[`SetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1a9c28e746e1da0e12d7f743a93b448b3e)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlement_1a9c28e746e1da0e12d7f743a93b448b3e"></a>

Sets the value of PlatformEntitlementId using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1a3966cce539a8c54d1959902fa1005bfb)`()` <a id="structFRHAPI__PlatformEntitlement_1a3966cce539a8c54d1959902fa1005bfb"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1adf3572ca6b4b606c4177fc3b7a49b292)`() const` <a id="structFRHAPI__PlatformEntitlement_1adf3572ca6b4b606c4177fc3b7a49b292"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1ac115d1e5755f46ec35a8a753c93a32d6)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlement_1ac115d1e5755f46ec35a8a753c93a32d6"></a>

Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1a7aac0ea315affec06e3cf5c9c2d2a956)`(int32 & OutValue) const` <a id="structFRHAPI__PlatformEntitlement_1a7aac0ea315affec06e3cf5c9c2d2a956"></a>

Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetQuantityOrNull`](#structFRHAPI__PlatformEntitlement_1aebb4a5e5bece823ffb3ae25b9027b249)`()` <a id="structFRHAPI__PlatformEntitlement_1aebb4a5e5bece823ffb3ae25b9027b249"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetQuantityOrNull`](#structFRHAPI__PlatformEntitlement_1ad8f96d30e2dc5a72c24c56ca53ecfa9b)`() const` <a id="structFRHAPI__PlatformEntitlement_1ad8f96d30e2dc5a72c24c56ca53ecfa9b"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PlatformEntitlement_1ab7878306172d7b0f1f1542a1a60c025b)`(const int32 & NewValue)` <a id="structFRHAPI__PlatformEntitlement_1ab7878306172d7b0f1f1542a1a60c025b"></a>

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__PlatformEntitlement_1a8a5a91570e4d4c93406b39ea43eaecdf)`(int32 && NewValue)` <a id="structFRHAPI__PlatformEntitlement_1a8a5a91570e4d4c93406b39ea43eaecdf"></a>

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.

#### `public inline void `[`ClearQuantity`](#structFRHAPI__PlatformEntitlement_1a0a7253e3dc98331cb4688fadb3d5ba17)`()` <a id="structFRHAPI__PlatformEntitlement_1a0a7253e3dc98331cb4688fadb3d5ba17"></a>

Clears the value of Quantity_Optional and sets Quantity_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__PlatformEntitlement_1a3c998332f2f0ccdbbb3b13b3ec367801)`()` <a id="structFRHAPI__PlatformEntitlement_1a3c998332f2f0ccdbbb3b13b3ec367801"></a>

Returns the default value of Quantity.

#### `public inline FORCEINLINE ERHAPI_EntitlementStatus & `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1ac8d37d51830e28e3a66a89be12250bd5)`()` <a id="structFRHAPI__PlatformEntitlement_1ac8d37d51830e28e3a66a89be12250bd5"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_EntitlementStatus & `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1ab4e51d7f83325cc35a0951c361a6aeb6)`() const` <a id="structFRHAPI__PlatformEntitlement_1ab4e51d7f83325cc35a0951c361a6aeb6"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_EntitlementStatus & `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1a370181b2fced3b2c7ee6456dacdefe35)`(const ERHAPI_EntitlementStatus & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlement_1a370181b2fced3b2c7ee6456dacdefe35"></a>

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1a1f2fe474680352910fe7a98474d002a5)`(ERHAPI_EntitlementStatus & OutValue) const` <a id="structFRHAPI__PlatformEntitlement_1a1f2fe474680352910fe7a98474d002a5"></a>

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_EntitlementStatus * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlement_1a66594d575c5a741ef334517eaed26793)`()` <a id="structFRHAPI__PlatformEntitlement_1a66594d575c5a741ef334517eaed26793"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_EntitlementStatus * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlement_1a5272bd7aacbe237e7d512d9632ded1a3)`() const` <a id="structFRHAPI__PlatformEntitlement_1a5272bd7aacbe237e7d512d9632ded1a3"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__PlatformEntitlement_1ac9a0a3b6c4517d38a13eee1d397f250b)`(const ERHAPI_EntitlementStatus & NewValue)` <a id="structFRHAPI__PlatformEntitlement_1ac9a0a3b6c4517d38a13eee1d397f250b"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__PlatformEntitlement_1a18fe6ba267db9b3a6662e036e9f53525)`(ERHAPI_EntitlementStatus && NewValue)` <a id="structFRHAPI__PlatformEntitlement_1a18fe6ba267db9b3a6662e036e9f53525"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.

#### `public inline void `[`ClearStatus`](#structFRHAPI__PlatformEntitlement_1a557a01818d6f93c0569b40045cc3553a)`()` <a id="structFRHAPI__PlatformEntitlement_1a557a01818d6f93c0569b40045cc3553a"></a>

Clears the value of Status_Optional and sets Status_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1afba8d4b84ef475bab40ef6821d8259fe)`()` <a id="structFRHAPI__PlatformEntitlement_1afba8d4b84ef475bab40ef6821d8259fe"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1a7a37f55b5cb9d02b3588ad10d53f4f2b)`() const` <a id="structFRHAPI__PlatformEntitlement_1a7a37f55b5cb9d02b3588ad10d53f4f2b"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1a7928454009d0f21a9098994b9abfefb1)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlement_1a7928454009d0f21a9098994b9abfefb1"></a>

Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1afd6225b0a2ae7b6ecf5976b78d2db3a5)`(FString & OutValue) const` <a id="structFRHAPI__PlatformEntitlement_1afd6225b0a2ae7b6ecf5976b78d2db3a5"></a>

Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlement_1acdf10e9b36f079982870732b18d431f7)`()` <a id="structFRHAPI__PlatformEntitlement_1acdf10e9b36f079982870732b18d431f7"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlement_1a7fc86bfc76ab7d11ce1911ce83664033)`() const` <a id="structFRHAPI__PlatformEntitlement_1a7fc86bfc76ab7d11ce1911ce83664033"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlement_1a1c327e3db4512374a245249c73634f1b)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlement_1a1c327e3db4512374a245249c73634f1b"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.

#### `public inline FORCEINLINE void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlement_1aaa0a52a13fc1baea8e87904b56c4a9c8)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlement_1aaa0a52a13fc1baea8e87904b56c4a9c8"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.

#### `public inline void `[`ClearErrorCode`](#structFRHAPI__PlatformEntitlement_1a51228045f457ea6ce4192f90412e9ed5)`()` <a id="structFRHAPI__PlatformEntitlement_1a51228045f457ea6ce4192f90412e9ed5"></a>

Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.

#### `public inline FORCEINLINE FString `[`GetDefaultValue_ErrorCode`](#structFRHAPI__PlatformEntitlement_1ab5115874773eddc20a4f8115095e7980)`()` <a id="structFRHAPI__PlatformEntitlement_1ab5115874773eddc20a4f8115095e7980"></a>

Returns the default value of ErrorCode.

#### `public inline FORCEINLINE FString & `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1a9ebd718e97e58b3102db5a03b4e2ed6b)`()` <a id="structFRHAPI__PlatformEntitlement_1a9ebd718e97e58b3102db5a03b4e2ed6b"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1a035053e5043c525fd9e8d8b587bbd297)`() const` <a id="structFRHAPI__PlatformEntitlement_1a035053e5043c525fd9e8d8b587bbd297"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1a0f7a511abfd662276e3ad6f30976c4e4)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlement_1a0f7a511abfd662276e3ad6f30976c4e4"></a>

Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1a5a64e6c489594e05f0bc42947d10d683)`(FString & OutValue) const` <a id="structFRHAPI__PlatformEntitlement_1a5a64e6c489594e05f0bc42947d10d683"></a>

Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlatformEntitlement_1a1c6c2998b46b6e2a583ca32436b49baf)`()` <a id="structFRHAPI__PlatformEntitlement_1a1c6c2998b46b6e2a583ca32436b49baf"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlatformEntitlement_1ac4b76ccc9d79076f6b01b2c1a0d01e21)`() const` <a id="structFRHAPI__PlatformEntitlement_1ac4b76ccc9d79076f6b01b2c1a0d01e21"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__PlatformEntitlement_1aa8f98d936a6ee1a84c5b571cd6fa5d36)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlement_1aa8f98d936a6ee1a84c5b571cd6fa5d36"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetOrderId`](#structFRHAPI__PlatformEntitlement_1a3824b880bc1439854eef50428d39a9ed)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlement_1a3824b880bc1439854eef50428d39a9ed"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.

#### `public inline void `[`ClearOrderId`](#structFRHAPI__PlatformEntitlement_1aced25565f90e25790e543b78dc85432f)`()` <a id="structFRHAPI__PlatformEntitlement_1aced25565f90e25790e543b78dc85432f"></a>

Clears the value of OrderId_Optional and sets OrderId_IsSet to false.

