---
title: FRHAPI_PlatformEntitlement Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Entitlement for a platform. This takes in a sku and platform entitlement id and checks to see if the user has the entitlement on the platform.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[PlatformSku](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1afbc894e85f0ee1a0fbcec0c9406446be)|platform identifier for this purchase type|
|FString|[PlatformEntitlementId](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a1f0da440869af28c6c1fa699f6a203c3)|unique identifier for this purchased item (instance owned by this user)|
|int32|[Quantity_Optional](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a2b26f0881eee1e31938f8b08dd6b8213)|number purchased|
|bool|[Quantity_IsSet](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1ae90d971477356498b773361d21b0aec5)|true if Quantity_Optional has been set to a value|
|ERHAPI_EntitlementStatus|[Status_Optional](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a790f0f33a52b22044781553c8dc89e9c)|status of this entitlement|
|bool|[Status_IsSet](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1adfaea0a1a88f96e0df831b5317fb9727)|true if Status_Optional has been set to a value|
|ERHAPI_EntitlementErrorCode|[ErrorCode_Optional](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1abc192a6b19ae2f8d78e3ab8f2bd327ad)|Error code for this entitlement.|
|bool|[ErrorCode_IsSet](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a158a8da1519ab450f6b69a06c39125e4)|true if ErrorCode_Optional has been set to a value|
|FString|[OrderId_Optional](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a6ccc74894efd1734a3039280c70e2cb4)|Order ID for this entitlement.|
|bool|[OrderId_IsSet](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a2f2afbbb21016ec66a725cfe7d1406a6)|true if OrderId_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1ad434bfd6f81b303cdc2dea8d8680767c)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1ac19edbfa175263473d02d08ce522ee75)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetPlatformSku](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1ae7d2f3e8ca78bf11f59cba1875d6db13)()|Gets the value of PlatformSku.|
|const FString &|[GetPlatformSku](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a0986b55ae5a48616adafaf6125e3c1b3)()|Gets the value of PlatformSku.|
|void|[SetPlatformSku](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a9b857b2419b5825b33403ac40e664b8d)(FString NewValue)|Sets the value of PlatformSku.|
|FString &|[GetPlatformEntitlementId](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a0688e6c9bdd3ea103f5b1601740d4615)()|Gets the value of PlatformEntitlementId.|
|const FString &|[GetPlatformEntitlementId](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a45d894828451cafffd0a2675c14e87ac)()|Gets the value of PlatformEntitlementId.|
|void|[SetPlatformEntitlementId](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1afba2455c3636f607230c156933f44a0e)(FString NewValue)|Sets the value of PlatformEntitlementId.|
|int32 &|[GetQuantity](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a002b3e61860cdc0f8de9e81920d21544)()|Gets the value of Quantity_Optional, regardless of it having been set.|
|const int32 &|[GetQuantity](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a087fe561641b9e08cc343a0afa374104)()|Gets the value of Quantity_Optional, regardless of it having been set.|
|const int32 &|[GetQuantity](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1aaebc1948b6076293d6cb123543b4b890)(const int32 & DefaultValue)|Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetQuantity](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1adc2c8f58a43f1f99de209a3efb45f0f0)(int32 & OutValue)|Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetQuantityOrNull](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1ac82d77308557984168a59d8c113fee90)()|Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetQuantityOrNull](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a96d97b68fbcc7074a86bf4fc35351789)()|Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetQuantity](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1ae18417879b10f68f0e2395327846da1d)(int32 NewValue)|Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.|
|void|[ClearQuantity](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a0a7253e3dc98331cb4688fadb3d5ba17)()|Clears the value of Quantity_Optional and sets Quantity_IsSet to false.|
|bool|[IsQuantityDefaultValue](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a5dcfd409121d5748761dd5bc2c37ff51)()|Returns true if Quantity_Optional is set and matches the default value.|
|void|[SetQuantityToDefault](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a1cbce8267d138f0f12f14137240d78ac)()|Sets the value of Quantity_Optional to its default and also sets Quantity_IsSet to true.|
|ERHAPI_EntitlementStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a2e982caa2328108860765ab490dfe5b7)()|Gets the value of Status_Optional, regardless of it having been set.|
|const ERHAPI_EntitlementStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1adb079b4db7bb40cbcd8d432813797bfe)()|Gets the value of Status_Optional, regardless of it having been set.|
|const ERHAPI_EntitlementStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1ae2552c0a2dcc6564a938c54e25702654)(const ERHAPI_EntitlementStatus & DefaultValue)|Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetStatus](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a20ac5c33deadc2a4890887f370090097)(ERHAPI_EntitlementStatus & OutValue)|Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_EntitlementStatus *|[GetStatusOrNull](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1aaaf1a94b632794d2d692e11b8dad95a6)()|Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_EntitlementStatus *|[GetStatusOrNull](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a40687660af89a86b01ec787a7185a87d)()|Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetStatus](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1ab9c910f529e6a2559087f2e2d43ee32d)(ERHAPI_EntitlementStatus NewValue)|Sets the value of Status_Optional and also sets Status_IsSet to true.|
|void|[ClearStatus](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a557a01818d6f93c0569b40045cc3553a)()|Clears the value of Status_Optional and sets Status_IsSet to false.|
|ERHAPI_EntitlementErrorCode &|[GetErrorCode](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a0b8960e457476470835cf61413d86c6a)()|Gets the value of ErrorCode_Optional, regardless of it having been set.|
|const ERHAPI_EntitlementErrorCode &|[GetErrorCode](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a0b9c276c6fb05342bc223b09d7a866f7)()|Gets the value of ErrorCode_Optional, regardless of it having been set.|
|const ERHAPI_EntitlementErrorCode &|[GetErrorCode](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1aa5d119d04de715b1228616c33d15cd21)(const ERHAPI_EntitlementErrorCode & DefaultValue)|Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetErrorCode](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a2badbfc83f26e36105d15b8e982946d1)(ERHAPI_EntitlementErrorCode & OutValue)|Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.|
|ERHAPI_EntitlementErrorCode *|[GetErrorCodeOrNull](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a00ac801ee6920efdcf72db7f9d3cc5d1)()|Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.|
|const ERHAPI_EntitlementErrorCode *|[GetErrorCodeOrNull](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a7c276c46c7f48c19b74c7cae3c3f0b03)()|Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetErrorCode](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a56d02493d37af931b3c4ee015b8b2178)(ERHAPI_EntitlementErrorCode NewValue)|Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.|
|void|[ClearErrorCode](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a51228045f457ea6ce4192f90412e9ed5)()|Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.|
|FString &|[GetOrderId](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a900cf29d0018f48bf03f0430f4f7170b)()|Gets the value of OrderId_Optional, regardless of it having been set.|
|const FString &|[GetOrderId](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a2e643832eed9c113e0f483940e3fd957)()|Gets the value of OrderId_Optional, regardless of it having been set.|
|const FString &|[GetOrderId](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a58b16ad4940cebd4fee4b39a34a6a871)(const FString & DefaultValue)|Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetOrderId](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a86aaafe683e1976797b54975c5d5239c)(FString & OutValue)|Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetOrderIdOrNull](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1accf5583e50818353ba58714c5318f9c5)()|Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetOrderIdOrNull](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1a80209701629609076c418db7a136e3dd)()|Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetOrderId](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1ac0a69f4efbf33d8204f59c809393fea8)(FString NewValue)|Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.|
|void|[ClearOrderId](/unreal-plugins/all/structfrhapi__platformentitlement/#structFRHAPI__PlatformEntitlement_1aced25565f90e25790e543b78dc85432f)()|Clears the value of OrderId_Optional and sets OrderId_IsSet to false.|
## Public Attributes



### `PlatformSku` <a id="structFRHAPI__PlatformEntitlement_1afbc894e85f0ee1a0fbcec0c9406446be"></a>

`FString FRHAPI_PlatformEntitlement::PlatformSku`

platform identifier for this purchase type




### `PlatformEntitlementId` <a id="structFRHAPI__PlatformEntitlement_1a1f0da440869af28c6c1fa699f6a203c3"></a>

`FString FRHAPI_PlatformEntitlement::PlatformEntitlementId`

unique identifier for this purchased item (instance owned by this user)




### `Quantity_Optional` <a id="structFRHAPI__PlatformEntitlement_1a2b26f0881eee1e31938f8b08dd6b8213"></a>

`int32 FRHAPI_PlatformEntitlement::Quantity_Optional`

number purchased




### `Quantity_IsSet` <a id="structFRHAPI__PlatformEntitlement_1ae90d971477356498b773361d21b0aec5"></a>

`bool FRHAPI_PlatformEntitlement::Quantity_IsSet`

true if Quantity_Optional has been set to a value




### `Status_Optional` <a id="structFRHAPI__PlatformEntitlement_1a790f0f33a52b22044781553c8dc89e9c"></a>

`ERHAPI_EntitlementStatus FRHAPI_PlatformEntitlement::Status_Optional`

status of this entitlement




### `Status_IsSet` <a id="structFRHAPI__PlatformEntitlement_1adfaea0a1a88f96e0df831b5317fb9727"></a>

`bool FRHAPI_PlatformEntitlement::Status_IsSet`

true if Status_Optional has been set to a value




### `ErrorCode_Optional` <a id="structFRHAPI__PlatformEntitlement_1abc192a6b19ae2f8d78e3ab8f2bd327ad"></a>

`ERHAPI_EntitlementErrorCode FRHAPI_PlatformEntitlement::ErrorCode_Optional`

Error code for this entitlement.




### `ErrorCode_IsSet` <a id="structFRHAPI__PlatformEntitlement_1a158a8da1519ab450f6b69a06c39125e4"></a>

`bool FRHAPI_PlatformEntitlement::ErrorCode_IsSet`

true if ErrorCode_Optional has been set to a value




### `OrderId_Optional` <a id="structFRHAPI__PlatformEntitlement_1a6ccc74894efd1734a3039280c70e2cb4"></a>

`FString FRHAPI_PlatformEntitlement::OrderId_Optional`

Order ID for this entitlement.




### `OrderId_IsSet` <a id="structFRHAPI__PlatformEntitlement_1a2f2afbbb21016ec66a725cfe7d1406a6"></a>

`bool FRHAPI_PlatformEntitlement::OrderId_IsSet`

true if OrderId_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PlatformEntitlement_1ad434bfd6f81b303cdc2dea8d8680767c"></a>

bool FromJson(const TSharedPtr< FJsonValue > & JsonValue)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|

#### Description

Fills this object with data from the passed in JSON.


#### Parameters

JsonValue
: Data from the API call.

#### Returns
true if parsing of the JSON data was successful. 



### `WriteJson` <a id="structFRHAPI__PlatformEntitlement_1ac19edbfa175263473d02d08ce522ee75"></a>

void WriteJson(TSharedRef< TJsonWriter<>> & Writer)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|

#### Description

Writes the data from this object into the specified JSON Writer stream.


#### Parameters

Writer
: JSON Writer stream to push . 



### `GetPlatformSku` <a id="structFRHAPI__PlatformEntitlement_1ae7d2f3e8ca78bf11f59cba1875d6db13"></a>

FString & GetPlatformSku()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformSku.




### `GetPlatformSku` <a id="structFRHAPI__PlatformEntitlement_1a0986b55ae5a48616adafaf6125e3c1b3"></a>

const FString & GetPlatformSku()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformSku.




### `SetPlatformSku` <a id="structFRHAPI__PlatformEntitlement_1a9b857b2419b5825b33403ac40e664b8d"></a>

void SetPlatformSku(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PlatformSku.




### `GetPlatformEntitlementId` <a id="structFRHAPI__PlatformEntitlement_1a0688e6c9bdd3ea103f5b1601740d4615"></a>

FString & GetPlatformEntitlementId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformEntitlementId.




### `GetPlatformEntitlementId` <a id="structFRHAPI__PlatformEntitlement_1a45d894828451cafffd0a2675c14e87ac"></a>

const FString & GetPlatformEntitlementId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlatformEntitlementId.




### `SetPlatformEntitlementId` <a id="structFRHAPI__PlatformEntitlement_1afba2455c3636f607230c156933f44a0e"></a>

void SetPlatformEntitlementId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of PlatformEntitlementId.




### `GetQuantity` <a id="structFRHAPI__PlatformEntitlement_1a002b3e61860cdc0f8de9e81920d21544"></a>

int32 & GetQuantity()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Quantity_Optional, regardless of it having been set.




### `GetQuantity` <a id="structFRHAPI__PlatformEntitlement_1a087fe561641b9e08cc343a0afa374104"></a>

const int32 & GetQuantity()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Quantity_Optional, regardless of it having been set.




### `GetQuantity` <a id="structFRHAPI__PlatformEntitlement_1aaebc1948b6076293d6cb123543b4b890"></a>

const int32 & GetQuantity(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of Quantity_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetQuantity` <a id="structFRHAPI__PlatformEntitlement_1adc2c8f58a43f1f99de209a3efb45f0f0"></a>

bool GetQuantity(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of Quantity_Optional and returns true if it has been set, otherwise returns false.




### `GetQuantityOrNull` <a id="structFRHAPI__PlatformEntitlement_1ac82d77308557984168a59d8c113fee90"></a>

int32 * GetQuantityOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.




### `GetQuantityOrNull` <a id="structFRHAPI__PlatformEntitlement_1a96d97b68fbcc7074a86bf4fc35351789"></a>

const int32 * GetQuantityOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Quantity_Optional, if it has been set, otherwise returns nullptr.




### `SetQuantity` <a id="structFRHAPI__PlatformEntitlement_1ae18417879b10f68f0e2395327846da1d"></a>

void SetQuantity(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of Quantity_Optional and also sets Quantity_IsSet to true.




### `ClearQuantity` <a id="structFRHAPI__PlatformEntitlement_1a0a7253e3dc98331cb4688fadb3d5ba17"></a>

void ClearQuantity()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Quantity_Optional and sets Quantity_IsSet to false.




### `IsQuantityDefaultValue` <a id="structFRHAPI__PlatformEntitlement_1a5dcfd409121d5748761dd5bc2c37ff51"></a>

bool IsQuantityDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Quantity_Optional is set and matches the default value.




### `SetQuantityToDefault` <a id="structFRHAPI__PlatformEntitlement_1a1cbce8267d138f0f12f14137240d78ac"></a>

void SetQuantityToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Quantity_Optional to its default and also sets Quantity_IsSet to true.




### `GetStatus` <a id="structFRHAPI__PlatformEntitlement_1a2e982caa2328108860765ab490dfe5b7"></a>

ERHAPI_EntitlementStatus & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status_Optional, regardless of it having been set.




### `GetStatus` <a id="structFRHAPI__PlatformEntitlement_1adb079b4db7bb40cbcd8d432813797bfe"></a>

const ERHAPI_EntitlementStatus & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status_Optional, regardless of it having been set.




### `GetStatus` <a id="structFRHAPI__PlatformEntitlement_1ae2552c0a2dcc6564a938c54e25702654"></a>

const ERHAPI_EntitlementStatus & GetStatus(const ERHAPI_EntitlementStatus & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_EntitlementStatus &|DefaultValue|

#### Description

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetStatus` <a id="structFRHAPI__PlatformEntitlement_1a20ac5c33deadc2a4890887f370090097"></a>

bool GetStatus(ERHAPI_EntitlementStatus & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_EntitlementStatus &|OutValue|

#### Description

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.




### `GetStatusOrNull` <a id="structFRHAPI__PlatformEntitlement_1aaaf1a94b632794d2d692e11b8dad95a6"></a>

ERHAPI_EntitlementStatus * GetStatusOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.




### `GetStatusOrNull` <a id="structFRHAPI__PlatformEntitlement_1a40687660af89a86b01ec787a7185a87d"></a>

const ERHAPI_EntitlementStatus * GetStatusOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.




### `SetStatus` <a id="structFRHAPI__PlatformEntitlement_1ab9c910f529e6a2559087f2e2d43ee32d"></a>

void SetStatus(ERHAPI_EntitlementStatus NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_EntitlementStatus|NewValue|

#### Description

Sets the value of Status_Optional and also sets Status_IsSet to true.




### `ClearStatus` <a id="structFRHAPI__PlatformEntitlement_1a557a01818d6f93c0569b40045cc3553a"></a>

void ClearStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Status_Optional and sets Status_IsSet to false.




### `GetErrorCode` <a id="structFRHAPI__PlatformEntitlement_1a0b8960e457476470835cf61413d86c6a"></a>

ERHAPI_EntitlementErrorCode & GetErrorCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ErrorCode_Optional, regardless of it having been set.




### `GetErrorCode` <a id="structFRHAPI__PlatformEntitlement_1a0b9c276c6fb05342bc223b09d7a866f7"></a>

const ERHAPI_EntitlementErrorCode & GetErrorCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ErrorCode_Optional, regardless of it having been set.




### `GetErrorCode` <a id="structFRHAPI__PlatformEntitlement_1aa5d119d04de715b1228616c33d15cd21"></a>

const ERHAPI_EntitlementErrorCode & GetErrorCode(const ERHAPI_EntitlementErrorCode & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const ERHAPI_EntitlementErrorCode &|DefaultValue|

#### Description

Gets the value of ErrorCode_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetErrorCode` <a id="structFRHAPI__PlatformEntitlement_1a2badbfc83f26e36105d15b8e982946d1"></a>

bool GetErrorCode(ERHAPI_EntitlementErrorCode & OutValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_EntitlementErrorCode &|OutValue|

#### Description

Fills OutValue with the value of ErrorCode_Optional and returns true if it has been set, otherwise returns false.




### `GetErrorCodeOrNull` <a id="structFRHAPI__PlatformEntitlement_1a00ac801ee6920efdcf72db7f9d3cc5d1"></a>

ERHAPI_EntitlementErrorCode * GetErrorCodeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.




### `GetErrorCodeOrNull` <a id="structFRHAPI__PlatformEntitlement_1a7c276c46c7f48c19b74c7cae3c3f0b03"></a>

const ERHAPI_EntitlementErrorCode * GetErrorCodeOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ErrorCode_Optional, if it has been set, otherwise returns nullptr.




### `SetErrorCode` <a id="structFRHAPI__PlatformEntitlement_1a56d02493d37af931b3c4ee015b8b2178"></a>

void SetErrorCode(ERHAPI_EntitlementErrorCode NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_EntitlementErrorCode|NewValue|

#### Description

Sets the value of ErrorCode_Optional and also sets ErrorCode_IsSet to true.




### `ClearErrorCode` <a id="structFRHAPI__PlatformEntitlement_1a51228045f457ea6ce4192f90412e9ed5"></a>

void ClearErrorCode()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ErrorCode_Optional and sets ErrorCode_IsSet to false.




### `GetOrderId` <a id="structFRHAPI__PlatformEntitlement_1a900cf29d0018f48bf03f0430f4f7170b"></a>

FString & GetOrderId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of OrderId_Optional, regardless of it having been set.




### `GetOrderId` <a id="structFRHAPI__PlatformEntitlement_1a2e643832eed9c113e0f483940e3fd957"></a>

const FString & GetOrderId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of OrderId_Optional, regardless of it having been set.




### `GetOrderId` <a id="structFRHAPI__PlatformEntitlement_1a58b16ad4940cebd4fee4b39a34a6a871"></a>

const FString & GetOrderId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of OrderId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetOrderId` <a id="structFRHAPI__PlatformEntitlement_1a86aaafe683e1976797b54975c5d5239c"></a>

bool GetOrderId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of OrderId_Optional and returns true if it has been set, otherwise returns false.




### `GetOrderIdOrNull` <a id="structFRHAPI__PlatformEntitlement_1accf5583e50818353ba58714c5318f9c5"></a>

FString * GetOrderIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.




### `GetOrderIdOrNull` <a id="structFRHAPI__PlatformEntitlement_1a80209701629609076c418db7a136e3dd"></a>

const FString * GetOrderIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to OrderId_Optional, if it has been set, otherwise returns nullptr.




### `SetOrderId` <a id="structFRHAPI__PlatformEntitlement_1ac0a69f4efbf33d8204f59c809393fea8"></a>

void SetOrderId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of OrderId_Optional and also sets OrderId_IsSet to true.




### `ClearOrderId` <a id="structFRHAPI__PlatformEntitlement_1aced25565f90e25790e543b78dc85432f"></a>

void ClearOrderId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of OrderId_Optional and sets OrderId_IsSet to false.





