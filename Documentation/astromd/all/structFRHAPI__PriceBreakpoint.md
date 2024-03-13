---
title: FRHAPI_PriceBreakpoint Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Price based on quantity and the Item ID of the currency used.

## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[PriceItemId](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint_1aea8d374cdca8847dad17d68ca00567c4)||
|int32|[Quantity](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint_1a401fd3800a0d4d0700922958c887cb3f)||
|int32|[Price](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint_1a68ff2ebaf89ce930b46863d891021bf7)||
|bool|[FromJson](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint_1a064dec90e8b5f050ae7648f08d2b2bc6)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint_1a990548c6c5b1c4bc400f136236b5ae48)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetPriceItemId](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint_1a6b13611738a078d0c65c7b54a06ff407)()|Gets the value of PriceItemId.|
|const int32 &|[GetPriceItemId](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint_1af54e7868d8cab16e798d938f8a0ed102)()|Gets the value of PriceItemId.|
|void|[SetPriceItemId](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint_1ab84fdb3594e5664ff0e7d9ae6ef8294a)(int32 NewValue)|Sets the value of PriceItemId.|
|bool|[IsPriceItemIdDefaultValue](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint_1a4893eaa292e86d652ea87f2738abc986)()|Returns true if PriceItemId matches the default value.|
|void|[SetPriceItemIdToDefault](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint_1a4ba3a4c1f6e83c5be2b6e9331c79b010)()|Sets the value of PriceItemId to its default|
|int32 &|[GetQuantity](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint_1af05d9fe1f283434b76882e5a6d698b77)()|Gets the value of Quantity.|
|const int32 &|[GetQuantity](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint_1a5f75a5a6b0236a678de1e8927018cbf9)()|Gets the value of Quantity.|
|void|[SetQuantity](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint_1a44a00ca3861e26114270338f7833c141)(int32 NewValue)|Sets the value of Quantity.|
|bool|[IsQuantityDefaultValue](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint_1a57818dc09bb7bc0f55ce8f86d300ae1d)()|Returns true if Quantity matches the default value.|
|void|[SetQuantityToDefault](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint_1a751e1d23ac5fa893abe0b89e52ae18bd)()|Sets the value of Quantity to its default|
|int32 &|[GetPrice](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint_1aa5a67208d3a0e33523dd92cefd8562e0)()|Gets the value of Price.|
|const int32 &|[GetPrice](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint_1a9b8b223c98c38cd680a24c72652b1a43)()|Gets the value of Price.|
|void|[SetPrice](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint_1ae1d835d2cc095e9ed7fb918b8c0a2091)(int32 NewValue)|Sets the value of Price.|
|bool|[IsPriceDefaultValue](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint_1acba31cb60495ec62df014196748c0bc2)()|Returns true if Price matches the default value.|
|void|[SetPriceToDefault](/unreal-plugins/all/structfrhapi__pricebreakpoint/#structFRHAPI__PriceBreakpoint_1a8d69abade8883a96954226982fb02162)()|Sets the value of Price to its default|
## Public Attributes



### `PriceItemId` <a id="structFRHAPI__PriceBreakpoint_1aea8d374cdca8847dad17d68ca00567c4"></a>

`int32 FRHAPI_PriceBreakpoint::PriceItemId`






### `Quantity` <a id="structFRHAPI__PriceBreakpoint_1a401fd3800a0d4d0700922958c887cb3f"></a>

`int32 FRHAPI_PriceBreakpoint::Quantity`






### `Price` <a id="structFRHAPI__PriceBreakpoint_1a68ff2ebaf89ce930b46863d891021bf7"></a>

`int32 FRHAPI_PriceBreakpoint::Price`







## Public Functions



### `FromJson` <a id="structFRHAPI__PriceBreakpoint_1a064dec90e8b5f050ae7648f08d2b2bc6"></a>

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



### `WriteJson` <a id="structFRHAPI__PriceBreakpoint_1a990548c6c5b1c4bc400f136236b5ae48"></a>

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



### `GetPriceItemId` <a id="structFRHAPI__PriceBreakpoint_1a6b13611738a078d0c65c7b54a06ff407"></a>

int32 & GetPriceItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PriceItemId.




### `GetPriceItemId` <a id="structFRHAPI__PriceBreakpoint_1af54e7868d8cab16e798d938f8a0ed102"></a>

const int32 & GetPriceItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PriceItemId.




### `SetPriceItemId` <a id="structFRHAPI__PriceBreakpoint_1ab84fdb3594e5664ff0e7d9ae6ef8294a"></a>

void SetPriceItemId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of PriceItemId.




### `IsPriceItemIdDefaultValue` <a id="structFRHAPI__PriceBreakpoint_1a4893eaa292e86d652ea87f2738abc986"></a>

bool IsPriceItemIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PriceItemId matches the default value.




### `SetPriceItemIdToDefault` <a id="structFRHAPI__PriceBreakpoint_1a4ba3a4c1f6e83c5be2b6e9331c79b010"></a>

void SetPriceItemIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PriceItemId to its default




### `GetQuantity` <a id="structFRHAPI__PriceBreakpoint_1af05d9fe1f283434b76882e5a6d698b77"></a>

int32 & GetQuantity()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Quantity.




### `GetQuantity` <a id="structFRHAPI__PriceBreakpoint_1a5f75a5a6b0236a678de1e8927018cbf9"></a>

const int32 & GetQuantity()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Quantity.




### `SetQuantity` <a id="structFRHAPI__PriceBreakpoint_1a44a00ca3861e26114270338f7833c141"></a>

void SetQuantity(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of Quantity.




### `IsQuantityDefaultValue` <a id="structFRHAPI__PriceBreakpoint_1a57818dc09bb7bc0f55ce8f86d300ae1d"></a>

bool IsQuantityDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Quantity matches the default value.




### `SetQuantityToDefault` <a id="structFRHAPI__PriceBreakpoint_1a751e1d23ac5fa893abe0b89e52ae18bd"></a>

void SetQuantityToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Quantity to its default




### `GetPrice` <a id="structFRHAPI__PriceBreakpoint_1aa5a67208d3a0e33523dd92cefd8562e0"></a>

int32 & GetPrice()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Price.




### `GetPrice` <a id="structFRHAPI__PriceBreakpoint_1a9b8b223c98c38cd680a24c72652b1a43"></a>

const int32 & GetPrice()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Price.




### `SetPrice` <a id="structFRHAPI__PriceBreakpoint_1ae1d835d2cc095e9ed7fb918b8c0a2091"></a>

void SetPrice(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of Price.




### `IsPriceDefaultValue` <a id="structFRHAPI__PriceBreakpoint_1acba31cb60495ec62df014196748c0bc2"></a>

bool IsPriceDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Price matches the default value.




### `SetPriceToDefault` <a id="structFRHAPI__PriceBreakpoint_1a8d69abade8883a96954226982fb02162"></a>

void SetPriceToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Price to its default





