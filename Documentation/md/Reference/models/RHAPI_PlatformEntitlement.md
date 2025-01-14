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
`public ERHAPI_EntitlementStatus `[`Status_Optional`](#structFRHAPI__PlatformEntitlement_1a790f0f33a52b22044781553c8dc89e9c) | status of this entitlement
`public bool `[`Status_IsSet`](#structFRHAPI__PlatformEntitlement_1adfaea0a1a88f96e0df831b5317fb9727) | true if Status_Optional has been set to a value
`public ERHAPI_EntitlementErrorCode `[`ErrorCode_Optional`](#structFRHAPI__PlatformEntitlement_1abc192a6b19ae2f8d78e3ab8f2bd327ad) | Error code for this entitlement.
`public bool `[`ErrorCode_IsSet`](#structFRHAPI__PlatformEntitlement_1a158a8da1519ab450f6b69a06c39125e4) | true if ErrorCode_Optional has been set to a value
`public FString `[`OrderId_Optional`](#structFRHAPI__PlatformEntitlement_1a6ccc74894efd1734a3039280c70e2cb4) | Order ID for this entitlement.
`public bool `[`OrderId_IsSet`](#structFRHAPI__PlatformEntitlement_1a2f2afbbb21016ec66a725cfe7d1406a6) | true if OrderId_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlatformEntitlement_1a4d50c6f627905016240b9c2fa85791af)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlement_1a55ed67228a18e39bbbc3f40ef7a9e44f)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetPlatformSku`](#structFRHAPI__PlatformEntitlement_1a6e883472a27ad2a22c739651340ab3ec)`()` | Gets the value of PlatformSku.
`public inline const FString & `[`GetPlatformSku`](#structFRHAPI__PlatformEntitlement_1a020f4f837da85878531cd0fac9e1dfb3)`() const` | Gets the value of PlatformSku.
`public inline void `[`SetPlatformSku`](#structFRHAPI__PlatformEntitlement_1aef9e9b4244aee6974b8374afcbcb6080)`(const FString & NewValue)` | Sets the value of PlatformSku.
`public inline void `[`SetPlatformSku`](#structFRHAPI__PlatformEntitlement_1a23caff3de089be3f4dc84b0c9996eaf0)`(FString && NewValue)` | Sets the value of PlatformSku using move semantics.
`public inline FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1a00e5245e1af1bff4fd407840b328731f)`()` | Gets the value of PlatformEntitlementId.
`public inline const FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1aeb04516c7e60fe4a9610a444ea783415)`() const` | Gets the value of PlatformEntitlementId.
`public inline void `[`SetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1a33f66eb90570001ef575b5a7d1cd17c9)`(const FString & NewValue)` | Sets the value of PlatformEntitlementId.
`public inline void `[`SetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1ac87cdfe9a927df24483e7055b354cf00)`(FString && NewValue)` | Sets the value of PlatformEntitlementId using move semantics.
`public inline int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1a3de5b2cdf0f3aa32c56ac1137a1e8fc9)`()` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1ad62a8884719d4677ece2ddc2138fa0e3)`() const` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1afdb1f5982a384b305ba2145b96b8b0b6)`(const int32 & DefaultValue) const` | Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1adc2c8f58a43f1f99de209a3efb45f0f0)`(int32 & OutValue) const` | Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetQuantityOrNull`](#structFRHAPI__PlatformEntitlement_1a57a12f2a44e26c89d3532ba49204d14c)`()` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetQuantityOrNull`](#structFRHAPI__PlatformEntitlement_1a1ab864c8ac287dc57bfc72004a610d8c)`() const` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQuantity`](#structFRHAPI__PlatformEntitlement_1a8e36ac187725537298fa3b60910e5358)`(const int32 & NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.
`public inline void `[`SetQuantity`](#structFRHAPI__PlatformEntitlement_1a55ddc557bdf3ef1eeba04314a2ffa8dc)`(int32 && NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.
`public inline void `[`ClearQuantity`](#structFRHAPI__PlatformEntitlement_1a0a7253e3dc98331cb4688fadb3d5ba17)`()` | Clears the value of Quantity_Optional and sets Quantity_IsSet to false.
`public inline bool `[`IsQuantitySet`](#structFRHAPI__PlatformEntitlement_1a91a19cb245b146502ef7e3938bf9bed9)`() const` | Checks whether Quantity_Optional has been set.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PlatformEntitlement_1a5dcfd409121d5748761dd5bc2c37ff51)`() const` | Returns true if Quantity_Optional is set and matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__PlatformEntitlement_1a1cbce8267d138f0f12f14137240d78ac)`()` | Sets the value of Quantity_Optional to its default and also sets Quantity_IsSet to true.
`public inline ERHAPI_EntitlementStatus & `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1a6c00a3a51a8624c126bab0a9e66eeb84)`()` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const ERHAPI_EntitlementStatus & `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1a75af06dbd4c902d9cf3fd30c3b938cb8)`() const` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const ERHAPI_EntitlementStatus & `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1aef4367baa8b6b2677746609b0b8b804c)`(const ERHAPI_EntitlementStatus & DefaultValue) const` | Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1a20ac5c33deadc2a4890887f370090097)`(ERHAPI_EntitlementStatus & OutValue) const` | Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_EntitlementStatus * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlement_1a0a5475f8a7b648a710a6e1e5487b0f38)`()` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_EntitlementStatus * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlement_1a0fef143ea57b98c3c99ff0da35f09133)`() const` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStatus`](#structFRHAPI__PlatformEntitlement_1aa7d15fb2a7eb5af224ea967635a6adff)`(const ERHAPI_EntitlementStatus & NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true.
`public inline void `[`SetStatus`](#structFRHAPI__PlatformEntitlement_1ac1bbc48e11051c7a9ae551d1dfd5c9d6)`(ERHAPI_EntitlementStatus && NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.
`public inline void `[`ClearStatus`](#structFRHAPI__PlatformEntitlement_1a557a01818d6f93c0569b40045cc3553a)`()` | Clears the value of Status_Optional and sets Status_IsSet to false.
`public inline bool `[`IsStatusSet`](#structFRHAPI__PlatformEntitlement_1a2a9abc10eb5335f97678595e891a09e6)`() const` | Checks whether Status_Optional has been set.
`public inline ERHAPI_EntitlementErrorCode & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1acbdd2f28628a0baabe7317184d14c7fb)`()` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline const ERHAPI_EntitlementErrorCode & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1afbf9c85142e9c9f52ab74abd9b0a80b7)`() const` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline const ERHAPI_EntitlementErrorCode & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1a0754240ba5a55b3ae297fdbad8c6bbc4)`(const ERHAPI_EntitlementErrorCode & DefaultValue) const` | Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1a2badbfc83f26e36105d15b8e982946d1)`(ERHAPI_EntitlementErrorCode & OutValue) const` | Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_EntitlementErrorCode * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlement_1a23a042f2ce6f9bcac7b0702d5bcc2602)`()` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_EntitlementErrorCode * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlement_1a441db27cc5749f19aa068fc0288a3475)`() const` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlement_1a22f9927a9c7aa13d73f88dc650167a1f)`(const ERHAPI_EntitlementErrorCode & NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.
`public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlement_1a5894869973ff8642da672eec67a66581)`(ERHAPI_EntitlementErrorCode && NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.
`public inline void `[`ClearErrorCode`](#structFRHAPI__PlatformEntitlement_1a51228045f457ea6ce4192f90412e9ed5)`()` | Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.
`public inline bool `[`IsErrorCodeSet`](#structFRHAPI__PlatformEntitlement_1aa355b16e9b5981f344f9e1f6568dcd4c)`() const` | Checks whether ErrorCode_Optional has been set.
`public inline FString & `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1aba3aa0fdece6ca271e36d0528537a428)`()` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1afaed0d60abaa4a835d1711f3b73436bd)`() const` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1aafb1f35c6c756ebe6dd4308df58f2bd5)`(const FString & DefaultValue) const` | Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1a86aaafe683e1976797b54975c5d5239c)`(FString & OutValue) const` | Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlatformEntitlement_1aa3787e32af2f93d00fe1dc49e317ec6b)`()` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlatformEntitlement_1ab503116967924b7047f9b20c9ed09afd)`() const` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOrderId`](#structFRHAPI__PlatformEntitlement_1a7a4d77208d6f2dea58f308f54ba3136c)`(const FString & NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.
`public inline void `[`SetOrderId`](#structFRHAPI__PlatformEntitlement_1abb47fd5e887abb41baa31daed73ab508)`(FString && NewValue)` | Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.
`public inline void `[`ClearOrderId`](#structFRHAPI__PlatformEntitlement_1aced25565f90e25790e543b78dc85432f)`()` | Clears the value of OrderId_Optional and sets OrderId_IsSet to false.
`public inline bool `[`IsOrderIdSet`](#structFRHAPI__PlatformEntitlement_1afc734865c409610afd60d1c11f4f15bd)`() const` | Checks whether OrderId_Optional has been set.

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

status of this entitlement

#### `public bool `[`Status_IsSet`](#structFRHAPI__PlatformEntitlement_1adfaea0a1a88f96e0df831b5317fb9727) <a id="structFRHAPI__PlatformEntitlement_1adfaea0a1a88f96e0df831b5317fb9727"></a>

true if Status_Optional has been set to a value

#### `public ERHAPI_EntitlementErrorCode `[`ErrorCode_Optional`](#structFRHAPI__PlatformEntitlement_1abc192a6b19ae2f8d78e3ab8f2bd327ad) <a id="structFRHAPI__PlatformEntitlement_1abc192a6b19ae2f8d78e3ab8f2bd327ad"></a>

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

#### `public inline FString & `[`GetPlatformSku`](#structFRHAPI__PlatformEntitlement_1a6e883472a27ad2a22c739651340ab3ec)`()` <a id="structFRHAPI__PlatformEntitlement_1a6e883472a27ad2a22c739651340ab3ec"></a>

Gets the value of PlatformSku.

#### `public inline const FString & `[`GetPlatformSku`](#structFRHAPI__PlatformEntitlement_1a020f4f837da85878531cd0fac9e1dfb3)`() const` <a id="structFRHAPI__PlatformEntitlement_1a020f4f837da85878531cd0fac9e1dfb3"></a>

Gets the value of PlatformSku.

#### `public inline void `[`SetPlatformSku`](#structFRHAPI__PlatformEntitlement_1aef9e9b4244aee6974b8374afcbcb6080)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlement_1aef9e9b4244aee6974b8374afcbcb6080"></a>

Sets the value of PlatformSku.

#### `public inline void `[`SetPlatformSku`](#structFRHAPI__PlatformEntitlement_1a23caff3de089be3f4dc84b0c9996eaf0)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlement_1a23caff3de089be3f4dc84b0c9996eaf0"></a>

Sets the value of PlatformSku using move semantics.

#### `public inline FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1a00e5245e1af1bff4fd407840b328731f)`()` <a id="structFRHAPI__PlatformEntitlement_1a00e5245e1af1bff4fd407840b328731f"></a>

Gets the value of PlatformEntitlementId.

#### `public inline const FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1aeb04516c7e60fe4a9610a444ea783415)`() const` <a id="structFRHAPI__PlatformEntitlement_1aeb04516c7e60fe4a9610a444ea783415"></a>

Gets the value of PlatformEntitlementId.

#### `public inline void `[`SetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1a33f66eb90570001ef575b5a7d1cd17c9)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlement_1a33f66eb90570001ef575b5a7d1cd17c9"></a>

Sets the value of PlatformEntitlementId.

#### `public inline void `[`SetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1ac87cdfe9a927df24483e7055b354cf00)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlement_1ac87cdfe9a927df24483e7055b354cf00"></a>

Sets the value of PlatformEntitlementId using move semantics.

#### `public inline int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1a3de5b2cdf0f3aa32c56ac1137a1e8fc9)`()` <a id="structFRHAPI__PlatformEntitlement_1a3de5b2cdf0f3aa32c56ac1137a1e8fc9"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1ad62a8884719d4677ece2ddc2138fa0e3)`() const` <a id="structFRHAPI__PlatformEntitlement_1ad62a8884719d4677ece2ddc2138fa0e3"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1afdb1f5982a384b305ba2145b96b8b0b6)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlement_1afdb1f5982a384b305ba2145b96b8b0b6"></a>

Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1adc2c8f58a43f1f99de209a3efb45f0f0)`(int32 & OutValue) const` <a id="structFRHAPI__PlatformEntitlement_1adc2c8f58a43f1f99de209a3efb45f0f0"></a>

Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetQuantityOrNull`](#structFRHAPI__PlatformEntitlement_1a57a12f2a44e26c89d3532ba49204d14c)`()` <a id="structFRHAPI__PlatformEntitlement_1a57a12f2a44e26c89d3532ba49204d14c"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetQuantityOrNull`](#structFRHAPI__PlatformEntitlement_1a1ab864c8ac287dc57bfc72004a610d8c)`() const` <a id="structFRHAPI__PlatformEntitlement_1a1ab864c8ac287dc57bfc72004a610d8c"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetQuantity`](#structFRHAPI__PlatformEntitlement_1a8e36ac187725537298fa3b60910e5358)`(const int32 & NewValue)` <a id="structFRHAPI__PlatformEntitlement_1a8e36ac187725537298fa3b60910e5358"></a>

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.

#### `public inline void `[`SetQuantity`](#structFRHAPI__PlatformEntitlement_1a55ddc557bdf3ef1eeba04314a2ffa8dc)`(int32 && NewValue)` <a id="structFRHAPI__PlatformEntitlement_1a55ddc557bdf3ef1eeba04314a2ffa8dc"></a>

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.

#### `public inline void `[`ClearQuantity`](#structFRHAPI__PlatformEntitlement_1a0a7253e3dc98331cb4688fadb3d5ba17)`()` <a id="structFRHAPI__PlatformEntitlement_1a0a7253e3dc98331cb4688fadb3d5ba17"></a>

Clears the value of Quantity_Optional and sets Quantity_IsSet to false.

#### `public inline bool `[`IsQuantitySet`](#structFRHAPI__PlatformEntitlement_1a91a19cb245b146502ef7e3938bf9bed9)`() const` <a id="structFRHAPI__PlatformEntitlement_1a91a19cb245b146502ef7e3938bf9bed9"></a>

Checks whether Quantity_Optional has been set.

#### `public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PlatformEntitlement_1a5dcfd409121d5748761dd5bc2c37ff51)`() const` <a id="structFRHAPI__PlatformEntitlement_1a5dcfd409121d5748761dd5bc2c37ff51"></a>

Returns true if Quantity_Optional is set and matches the default value.

#### `public inline void `[`SetQuantityToDefault`](#structFRHAPI__PlatformEntitlement_1a1cbce8267d138f0f12f14137240d78ac)`()` <a id="structFRHAPI__PlatformEntitlement_1a1cbce8267d138f0f12f14137240d78ac"></a>

Sets the value of Quantity_Optional to its default and also sets Quantity_IsSet to true.

#### `public inline ERHAPI_EntitlementStatus & `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1a6c00a3a51a8624c126bab0a9e66eeb84)`()` <a id="structFRHAPI__PlatformEntitlement_1a6c00a3a51a8624c126bab0a9e66eeb84"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const ERHAPI_EntitlementStatus & `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1a75af06dbd4c902d9cf3fd30c3b938cb8)`() const` <a id="structFRHAPI__PlatformEntitlement_1a75af06dbd4c902d9cf3fd30c3b938cb8"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const ERHAPI_EntitlementStatus & `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1aef4367baa8b6b2677746609b0b8b804c)`(const ERHAPI_EntitlementStatus & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlement_1aef4367baa8b6b2677746609b0b8b804c"></a>

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1a20ac5c33deadc2a4890887f370090097)`(ERHAPI_EntitlementStatus & OutValue) const` <a id="structFRHAPI__PlatformEntitlement_1a20ac5c33deadc2a4890887f370090097"></a>

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_EntitlementStatus * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlement_1a0a5475f8a7b648a710a6e1e5487b0f38)`()` <a id="structFRHAPI__PlatformEntitlement_1a0a5475f8a7b648a710a6e1e5487b0f38"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_EntitlementStatus * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlement_1a0fef143ea57b98c3c99ff0da35f09133)`() const` <a id="structFRHAPI__PlatformEntitlement_1a0fef143ea57b98c3c99ff0da35f09133"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStatus`](#structFRHAPI__PlatformEntitlement_1aa7d15fb2a7eb5af224ea967635a6adff)`(const ERHAPI_EntitlementStatus & NewValue)` <a id="structFRHAPI__PlatformEntitlement_1aa7d15fb2a7eb5af224ea967635a6adff"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true.

#### `public inline void `[`SetStatus`](#structFRHAPI__PlatformEntitlement_1ac1bbc48e11051c7a9ae551d1dfd5c9d6)`(ERHAPI_EntitlementStatus && NewValue)` <a id="structFRHAPI__PlatformEntitlement_1ac1bbc48e11051c7a9ae551d1dfd5c9d6"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.

#### `public inline void `[`ClearStatus`](#structFRHAPI__PlatformEntitlement_1a557a01818d6f93c0569b40045cc3553a)`()` <a id="structFRHAPI__PlatformEntitlement_1a557a01818d6f93c0569b40045cc3553a"></a>

Clears the value of Status_Optional and sets Status_IsSet to false.

#### `public inline bool `[`IsStatusSet`](#structFRHAPI__PlatformEntitlement_1a2a9abc10eb5335f97678595e891a09e6)`() const` <a id="structFRHAPI__PlatformEntitlement_1a2a9abc10eb5335f97678595e891a09e6"></a>

Checks whether Status_Optional has been set.

#### `public inline ERHAPI_EntitlementErrorCode & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1acbdd2f28628a0baabe7317184d14c7fb)`()` <a id="structFRHAPI__PlatformEntitlement_1acbdd2f28628a0baabe7317184d14c7fb"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline const ERHAPI_EntitlementErrorCode & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1afbf9c85142e9c9f52ab74abd9b0a80b7)`() const` <a id="structFRHAPI__PlatformEntitlement_1afbf9c85142e9c9f52ab74abd9b0a80b7"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline const ERHAPI_EntitlementErrorCode & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1a0754240ba5a55b3ae297fdbad8c6bbc4)`(const ERHAPI_EntitlementErrorCode & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlement_1a0754240ba5a55b3ae297fdbad8c6bbc4"></a>

Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1a2badbfc83f26e36105d15b8e982946d1)`(ERHAPI_EntitlementErrorCode & OutValue) const` <a id="structFRHAPI__PlatformEntitlement_1a2badbfc83f26e36105d15b8e982946d1"></a>

Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_EntitlementErrorCode * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlement_1a23a042f2ce6f9bcac7b0702d5bcc2602)`()` <a id="structFRHAPI__PlatformEntitlement_1a23a042f2ce6f9bcac7b0702d5bcc2602"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_EntitlementErrorCode * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlement_1a441db27cc5749f19aa068fc0288a3475)`() const` <a id="structFRHAPI__PlatformEntitlement_1a441db27cc5749f19aa068fc0288a3475"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlement_1a22f9927a9c7aa13d73f88dc650167a1f)`(const ERHAPI_EntitlementErrorCode & NewValue)` <a id="structFRHAPI__PlatformEntitlement_1a22f9927a9c7aa13d73f88dc650167a1f"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlement_1a5894869973ff8642da672eec67a66581)`(ERHAPI_EntitlementErrorCode && NewValue)` <a id="structFRHAPI__PlatformEntitlement_1a5894869973ff8642da672eec67a66581"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.

#### `public inline void `[`ClearErrorCode`](#structFRHAPI__PlatformEntitlement_1a51228045f457ea6ce4192f90412e9ed5)`()` <a id="structFRHAPI__PlatformEntitlement_1a51228045f457ea6ce4192f90412e9ed5"></a>

Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.

#### `public inline bool `[`IsErrorCodeSet`](#structFRHAPI__PlatformEntitlement_1aa355b16e9b5981f344f9e1f6568dcd4c)`() const` <a id="structFRHAPI__PlatformEntitlement_1aa355b16e9b5981f344f9e1f6568dcd4c"></a>

Checks whether ErrorCode_Optional has been set.

#### `public inline FString & `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1aba3aa0fdece6ca271e36d0528537a428)`()` <a id="structFRHAPI__PlatformEntitlement_1aba3aa0fdece6ca271e36d0528537a428"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1afaed0d60abaa4a835d1711f3b73436bd)`() const` <a id="structFRHAPI__PlatformEntitlement_1afaed0d60abaa4a835d1711f3b73436bd"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1aafb1f35c6c756ebe6dd4308df58f2bd5)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlement_1aafb1f35c6c756ebe6dd4308df58f2bd5"></a>

Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1a86aaafe683e1976797b54975c5d5239c)`(FString & OutValue) const` <a id="structFRHAPI__PlatformEntitlement_1a86aaafe683e1976797b54975c5d5239c"></a>

Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlatformEntitlement_1aa3787e32af2f93d00fe1dc49e317ec6b)`()` <a id="structFRHAPI__PlatformEntitlement_1aa3787e32af2f93d00fe1dc49e317ec6b"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlatformEntitlement_1ab503116967924b7047f9b20c9ed09afd)`() const` <a id="structFRHAPI__PlatformEntitlement_1ab503116967924b7047f9b20c9ed09afd"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOrderId`](#structFRHAPI__PlatformEntitlement_1a7a4d77208d6f2dea58f308f54ba3136c)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlement_1a7a4d77208d6f2dea58f308f54ba3136c"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.

#### `public inline void `[`SetOrderId`](#structFRHAPI__PlatformEntitlement_1abb47fd5e887abb41baa31daed73ab508)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlement_1abb47fd5e887abb41baa31daed73ab508"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.

#### `public inline void `[`ClearOrderId`](#structFRHAPI__PlatformEntitlement_1aced25565f90e25790e543b78dc85432f)`()` <a id="structFRHAPI__PlatformEntitlement_1aced25565f90e25790e543b78dc85432f"></a>

Clears the value of OrderId_Optional and sets OrderId_IsSet to false.

#### `public inline bool `[`IsOrderIdSet`](#structFRHAPI__PlatformEntitlement_1afc734865c409610afd60d1c11f4f15bd)`() const` <a id="structFRHAPI__PlatformEntitlement_1afc734865c409610afd60d1c11f4f15bd"></a>

Checks whether OrderId_Optional has been set.

