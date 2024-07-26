# group `RHAPI_PlatformEntitlement` <a id="group__RHAPI__PlatformEntitlement"></a>

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
`public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlement_1ab55003f00240c1a58ca39df4db3f1011)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetPlatformSku`](#structFRHAPI__PlatformEntitlement_1ae7d2f3e8ca78bf11f59cba1875d6db13)`()` | Gets the value of PlatformSku.
`public inline const FString & `[`GetPlatformSku`](#structFRHAPI__PlatformEntitlement_1a0986b55ae5a48616adafaf6125e3c1b3)`() const` | Gets the value of PlatformSku.
`public inline void `[`SetPlatformSku`](#structFRHAPI__PlatformEntitlement_1aef9e9b4244aee6974b8374afcbcb6080)`(const FString & NewValue)` | Sets the value of PlatformSku.
`public inline void `[`SetPlatformSku`](#structFRHAPI__PlatformEntitlement_1a23caff3de089be3f4dc84b0c9996eaf0)`(FString && NewValue)` | Sets the value of PlatformSku using move semantics.
`public inline FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1a0688e6c9bdd3ea103f5b1601740d4615)`()` | Gets the value of PlatformEntitlementId.
`public inline const FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1a45d894828451cafffd0a2675c14e87ac)`() const` | Gets the value of PlatformEntitlementId.
`public inline void `[`SetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1a33f66eb90570001ef575b5a7d1cd17c9)`(const FString & NewValue)` | Sets the value of PlatformEntitlementId.
`public inline void `[`SetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1ac87cdfe9a927df24483e7055b354cf00)`(FString && NewValue)` | Sets the value of PlatformEntitlementId using move semantics.
`public inline int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1a002b3e61860cdc0f8de9e81920d21544)`()` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1a087fe561641b9e08cc343a0afa374104)`() const` | Gets the value of Quantity_Optional, regardless of it having been set.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1aaebc1948b6076293d6cb123543b4b890)`(const int32 & DefaultValue) const` | Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1adc2c8f58a43f1f99de209a3efb45f0f0)`(int32 & OutValue) const` | Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetQuantityOrNull`](#structFRHAPI__PlatformEntitlement_1ac82d77308557984168a59d8c113fee90)`()` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetQuantityOrNull`](#structFRHAPI__PlatformEntitlement_1a96d97b68fbcc7074a86bf4fc35351789)`() const` | Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetQuantity`](#structFRHAPI__PlatformEntitlement_1a8e36ac187725537298fa3b60910e5358)`(const int32 & NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.
`public inline void `[`SetQuantity`](#structFRHAPI__PlatformEntitlement_1a55ddc557bdf3ef1eeba04314a2ffa8dc)`(int32 && NewValue)` | Sets the value of Quantity_Optional and also sets Quantity_IsSet to true using move semantics.
`public inline void `[`ClearQuantity`](#structFRHAPI__PlatformEntitlement_1a0a7253e3dc98331cb4688fadb3d5ba17)`()` | Clears the value of Quantity_Optional and sets Quantity_IsSet to false.
`public inline bool `[`IsQuantitySet`](#structFRHAPI__PlatformEntitlement_1a91a19cb245b146502ef7e3938bf9bed9)`() const` | Checks whether Quantity_Optional has been set.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__PlatformEntitlement_1a5dcfd409121d5748761dd5bc2c37ff51)`() const` | Returns true if Quantity_Optional is set and matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__PlatformEntitlement_1a1cbce8267d138f0f12f14137240d78ac)`()` | Sets the value of Quantity_Optional to its default and also sets Quantity_IsSet to true.
`public inline ERHAPI_EntitlementStatus & `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1a2e982caa2328108860765ab490dfe5b7)`()` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const ERHAPI_EntitlementStatus & `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1adb079b4db7bb40cbcd8d432813797bfe)`() const` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const ERHAPI_EntitlementStatus & `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1ae2552c0a2dcc6564a938c54e25702654)`(const ERHAPI_EntitlementStatus & DefaultValue) const` | Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1a20ac5c33deadc2a4890887f370090097)`(ERHAPI_EntitlementStatus & OutValue) const` | Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_EntitlementStatus * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlement_1aaaf1a94b632794d2d692e11b8dad95a6)`()` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_EntitlementStatus * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlement_1a40687660af89a86b01ec787a7185a87d)`() const` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStatus`](#structFRHAPI__PlatformEntitlement_1aa7d15fb2a7eb5af224ea967635a6adff)`(const ERHAPI_EntitlementStatus & NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true.
`public inline void `[`SetStatus`](#structFRHAPI__PlatformEntitlement_1ac1bbc48e11051c7a9ae551d1dfd5c9d6)`(ERHAPI_EntitlementStatus && NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.
`public inline void `[`ClearStatus`](#structFRHAPI__PlatformEntitlement_1a557a01818d6f93c0569b40045cc3553a)`()` | Clears the value of Status_Optional and sets Status_IsSet to false.
`public inline bool `[`IsStatusSet`](#structFRHAPI__PlatformEntitlement_1a2a9abc10eb5335f97678595e891a09e6)`() const` | Checks whether Status_Optional has been set.
`public inline ERHAPI_EntitlementErrorCode & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1a0b8960e457476470835cf61413d86c6a)`()` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline const ERHAPI_EntitlementErrorCode & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1a0b9c276c6fb05342bc223b09d7a866f7)`() const` | Gets the value of ErrorCode_Optional, regardless of it having been set.
`public inline const ERHAPI_EntitlementErrorCode & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1aa5d119d04de715b1228616c33d15cd21)`(const ERHAPI_EntitlementErrorCode & DefaultValue) const` | Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1a2badbfc83f26e36105d15b8e982946d1)`(ERHAPI_EntitlementErrorCode & OutValue) const` | Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_EntitlementErrorCode * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlement_1a00ac801ee6920efdcf72db7f9d3cc5d1)`()` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_EntitlementErrorCode * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlement_1a7c276c46c7f48c19b74c7cae3c3f0b03)`() const` | Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlement_1a22f9927a9c7aa13d73f88dc650167a1f)`(const ERHAPI_EntitlementErrorCode & NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.
`public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlement_1a5894869973ff8642da672eec67a66581)`(ERHAPI_EntitlementErrorCode && NewValue)` | Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.
`public inline void `[`ClearErrorCode`](#structFRHAPI__PlatformEntitlement_1a51228045f457ea6ce4192f90412e9ed5)`()` | Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.
`public inline bool `[`IsErrorCodeSet`](#structFRHAPI__PlatformEntitlement_1aa355b16e9b5981f344f9e1f6568dcd4c)`() const` | Checks whether ErrorCode_Optional has been set.
`public inline FString & `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1a900cf29d0018f48bf03f0430f4f7170b)`()` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1a2e643832eed9c113e0f483940e3fd957)`() const` | Gets the value of OrderId_Optional, regardless of it having been set.
`public inline const FString & `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1a58b16ad4940cebd4fee4b39a34a6a871)`(const FString & DefaultValue) const` | Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1a86aaafe683e1976797b54975c5d5239c)`(FString & OutValue) const` | Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlatformEntitlement_1accf5583e50818353ba58714c5318f9c5)`()` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlatformEntitlement_1a80209701629609076c418db7a136e3dd)`() const` | Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlatformEntitlement_1ab55003f00240c1a58ca39df4db3f1011)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlatformEntitlement_1ab55003f00240c1a58ca39df4db3f1011"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetPlatformSku`](#structFRHAPI__PlatformEntitlement_1ae7d2f3e8ca78bf11f59cba1875d6db13)`()` <a id="structFRHAPI__PlatformEntitlement_1ae7d2f3e8ca78bf11f59cba1875d6db13"></a>

Gets the value of PlatformSku.

#### `public inline const FString & `[`GetPlatformSku`](#structFRHAPI__PlatformEntitlement_1a0986b55ae5a48616adafaf6125e3c1b3)`() const` <a id="structFRHAPI__PlatformEntitlement_1a0986b55ae5a48616adafaf6125e3c1b3"></a>

Gets the value of PlatformSku.

#### `public inline void `[`SetPlatformSku`](#structFRHAPI__PlatformEntitlement_1aef9e9b4244aee6974b8374afcbcb6080)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlement_1aef9e9b4244aee6974b8374afcbcb6080"></a>

Sets the value of PlatformSku.

#### `public inline void `[`SetPlatformSku`](#structFRHAPI__PlatformEntitlement_1a23caff3de089be3f4dc84b0c9996eaf0)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlement_1a23caff3de089be3f4dc84b0c9996eaf0"></a>

Sets the value of PlatformSku using move semantics.

#### `public inline FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1a0688e6c9bdd3ea103f5b1601740d4615)`()` <a id="structFRHAPI__PlatformEntitlement_1a0688e6c9bdd3ea103f5b1601740d4615"></a>

Gets the value of PlatformEntitlementId.

#### `public inline const FString & `[`GetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1a45d894828451cafffd0a2675c14e87ac)`() const` <a id="structFRHAPI__PlatformEntitlement_1a45d894828451cafffd0a2675c14e87ac"></a>

Gets the value of PlatformEntitlementId.

#### `public inline void `[`SetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1a33f66eb90570001ef575b5a7d1cd17c9)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlement_1a33f66eb90570001ef575b5a7d1cd17c9"></a>

Sets the value of PlatformEntitlementId.

#### `public inline void `[`SetPlatformEntitlementId`](#structFRHAPI__PlatformEntitlement_1ac87cdfe9a927df24483e7055b354cf00)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlement_1ac87cdfe9a927df24483e7055b354cf00"></a>

Sets the value of PlatformEntitlementId using move semantics.

#### `public inline int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1a002b3e61860cdc0f8de9e81920d21544)`()` <a id="structFRHAPI__PlatformEntitlement_1a002b3e61860cdc0f8de9e81920d21544"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1a087fe561641b9e08cc343a0afa374104)`() const` <a id="structFRHAPI__PlatformEntitlement_1a087fe561641b9e08cc343a0afa374104"></a>

Gets the value of Quantity_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1aaebc1948b6076293d6cb123543b4b890)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlement_1aaebc1948b6076293d6cb123543b4b890"></a>

Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetQuantity`](#structFRHAPI__PlatformEntitlement_1adc2c8f58a43f1f99de209a3efb45f0f0)`(int32 & OutValue) const` <a id="structFRHAPI__PlatformEntitlement_1adc2c8f58a43f1f99de209a3efb45f0f0"></a>

Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetQuantityOrNull`](#structFRHAPI__PlatformEntitlement_1ac82d77308557984168a59d8c113fee90)`()` <a id="structFRHAPI__PlatformEntitlement_1ac82d77308557984168a59d8c113fee90"></a>

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetQuantityOrNull`](#structFRHAPI__PlatformEntitlement_1a96d97b68fbcc7074a86bf4fc35351789)`() const` <a id="structFRHAPI__PlatformEntitlement_1a96d97b68fbcc7074a86bf4fc35351789"></a>

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

#### `public inline ERHAPI_EntitlementStatus & `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1a2e982caa2328108860765ab490dfe5b7)`()` <a id="structFRHAPI__PlatformEntitlement_1a2e982caa2328108860765ab490dfe5b7"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const ERHAPI_EntitlementStatus & `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1adb079b4db7bb40cbcd8d432813797bfe)`() const` <a id="structFRHAPI__PlatformEntitlement_1adb079b4db7bb40cbcd8d432813797bfe"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const ERHAPI_EntitlementStatus & `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1ae2552c0a2dcc6564a938c54e25702654)`(const ERHAPI_EntitlementStatus & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlement_1ae2552c0a2dcc6564a938c54e25702654"></a>

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStatus`](#structFRHAPI__PlatformEntitlement_1a20ac5c33deadc2a4890887f370090097)`(ERHAPI_EntitlementStatus & OutValue) const` <a id="structFRHAPI__PlatformEntitlement_1a20ac5c33deadc2a4890887f370090097"></a>

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_EntitlementStatus * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlement_1aaaf1a94b632794d2d692e11b8dad95a6)`()` <a id="structFRHAPI__PlatformEntitlement_1aaaf1a94b632794d2d692e11b8dad95a6"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_EntitlementStatus * `[`GetStatusOrNull`](#structFRHAPI__PlatformEntitlement_1a40687660af89a86b01ec787a7185a87d)`() const` <a id="structFRHAPI__PlatformEntitlement_1a40687660af89a86b01ec787a7185a87d"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStatus`](#structFRHAPI__PlatformEntitlement_1aa7d15fb2a7eb5af224ea967635a6adff)`(const ERHAPI_EntitlementStatus & NewValue)` <a id="structFRHAPI__PlatformEntitlement_1aa7d15fb2a7eb5af224ea967635a6adff"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true.

#### `public inline void `[`SetStatus`](#structFRHAPI__PlatformEntitlement_1ac1bbc48e11051c7a9ae551d1dfd5c9d6)`(ERHAPI_EntitlementStatus && NewValue)` <a id="structFRHAPI__PlatformEntitlement_1ac1bbc48e11051c7a9ae551d1dfd5c9d6"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.

#### `public inline void `[`ClearStatus`](#structFRHAPI__PlatformEntitlement_1a557a01818d6f93c0569b40045cc3553a)`()` <a id="structFRHAPI__PlatformEntitlement_1a557a01818d6f93c0569b40045cc3553a"></a>

Clears the value of Status_Optional and sets Status_IsSet to false.

#### `public inline bool `[`IsStatusSet`](#structFRHAPI__PlatformEntitlement_1a2a9abc10eb5335f97678595e891a09e6)`() const` <a id="structFRHAPI__PlatformEntitlement_1a2a9abc10eb5335f97678595e891a09e6"></a>

Checks whether Status_Optional has been set.

#### `public inline ERHAPI_EntitlementErrorCode & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1a0b8960e457476470835cf61413d86c6a)`()` <a id="structFRHAPI__PlatformEntitlement_1a0b8960e457476470835cf61413d86c6a"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline const ERHAPI_EntitlementErrorCode & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1a0b9c276c6fb05342bc223b09d7a866f7)`() const` <a id="structFRHAPI__PlatformEntitlement_1a0b9c276c6fb05342bc223b09d7a866f7"></a>

Gets the value of ErrorCode_Optional, regardless of it having been set.

#### `public inline const ERHAPI_EntitlementErrorCode & `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1aa5d119d04de715b1228616c33d15cd21)`(const ERHAPI_EntitlementErrorCode & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlement_1aa5d119d04de715b1228616c33d15cd21"></a>

Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetErrorCode`](#structFRHAPI__PlatformEntitlement_1a2badbfc83f26e36105d15b8e982946d1)`(ERHAPI_EntitlementErrorCode & OutValue) const` <a id="structFRHAPI__PlatformEntitlement_1a2badbfc83f26e36105d15b8e982946d1"></a>

Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_EntitlementErrorCode * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlement_1a00ac801ee6920efdcf72db7f9d3cc5d1)`()` <a id="structFRHAPI__PlatformEntitlement_1a00ac801ee6920efdcf72db7f9d3cc5d1"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_EntitlementErrorCode * `[`GetErrorCodeOrNull`](#structFRHAPI__PlatformEntitlement_1a7c276c46c7f48c19b74c7cae3c3f0b03)`() const` <a id="structFRHAPI__PlatformEntitlement_1a7c276c46c7f48c19b74c7cae3c3f0b03"></a>

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlement_1a22f9927a9c7aa13d73f88dc650167a1f)`(const ERHAPI_EntitlementErrorCode & NewValue)` <a id="structFRHAPI__PlatformEntitlement_1a22f9927a9c7aa13d73f88dc650167a1f"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.

#### `public inline void `[`SetErrorCode`](#structFRHAPI__PlatformEntitlement_1a5894869973ff8642da672eec67a66581)`(ERHAPI_EntitlementErrorCode && NewValue)` <a id="structFRHAPI__PlatformEntitlement_1a5894869973ff8642da672eec67a66581"></a>

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true using move semantics.

#### `public inline void `[`ClearErrorCode`](#structFRHAPI__PlatformEntitlement_1a51228045f457ea6ce4192f90412e9ed5)`()` <a id="structFRHAPI__PlatformEntitlement_1a51228045f457ea6ce4192f90412e9ed5"></a>

Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.

#### `public inline bool `[`IsErrorCodeSet`](#structFRHAPI__PlatformEntitlement_1aa355b16e9b5981f344f9e1f6568dcd4c)`() const` <a id="structFRHAPI__PlatformEntitlement_1aa355b16e9b5981f344f9e1f6568dcd4c"></a>

Checks whether ErrorCode_Optional has been set.

#### `public inline FString & `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1a900cf29d0018f48bf03f0430f4f7170b)`()` <a id="structFRHAPI__PlatformEntitlement_1a900cf29d0018f48bf03f0430f4f7170b"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1a2e643832eed9c113e0f483940e3fd957)`() const` <a id="structFRHAPI__PlatformEntitlement_1a2e643832eed9c113e0f483940e3fd957"></a>

Gets the value of OrderId_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1a58b16ad4940cebd4fee4b39a34a6a871)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlatformEntitlement_1a58b16ad4940cebd4fee4b39a34a6a871"></a>

Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOrderId`](#structFRHAPI__PlatformEntitlement_1a86aaafe683e1976797b54975c5d5239c)`(FString & OutValue) const` <a id="structFRHAPI__PlatformEntitlement_1a86aaafe683e1976797b54975c5d5239c"></a>

Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlatformEntitlement_1accf5583e50818353ba58714c5318f9c5)`()` <a id="structFRHAPI__PlatformEntitlement_1accf5583e50818353ba58714c5318f9c5"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetOrderIdOrNull`](#structFRHAPI__PlatformEntitlement_1a80209701629609076c418db7a136e3dd)`() const` <a id="structFRHAPI__PlatformEntitlement_1a80209701629609076c418db7a136e3dd"></a>

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOrderId`](#structFRHAPI__PlatformEntitlement_1a7a4d77208d6f2dea58f308f54ba3136c)`(const FString & NewValue)` <a id="structFRHAPI__PlatformEntitlement_1a7a4d77208d6f2dea58f308f54ba3136c"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.

#### `public inline void `[`SetOrderId`](#structFRHAPI__PlatformEntitlement_1abb47fd5e887abb41baa31daed73ab508)`(FString && NewValue)` <a id="structFRHAPI__PlatformEntitlement_1abb47fd5e887abb41baa31daed73ab508"></a>

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true using move semantics.

#### `public inline void `[`ClearOrderId`](#structFRHAPI__PlatformEntitlement_1aced25565f90e25790e543b78dc85432f)`()` <a id="structFRHAPI__PlatformEntitlement_1aced25565f90e25790e543b78dc85432f"></a>

Clears the value of OrderId_Optional and sets OrderId_IsSet to false.

#### `public inline bool `[`IsOrderIdSet`](#structFRHAPI__PlatformEntitlement_1afc734865c409610afd60d1c11f4f15bd)`() const` <a id="structFRHAPI__PlatformEntitlement_1afc734865c409610afd60d1c11f4f15bd"></a>

Checks whether OrderId_Optional has been set.

