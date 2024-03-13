---
title: FRHAPI_PurchasePrice Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

The purchase price of an Item.

## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[PriceItemId](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1a263df4cc3585b8910e465aad7d2610c9)|The Item used as the currency for the purchase.|
|int32|[Price](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1a5025132ab0bf6aba04cbe0eb95bb3e1c)|The price of the Item.|
|int32|[PriceCouponItemId_Optional](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1a8113310e2761e767ab0240dcbb2915d7)|The Item used as the coupon for the purchase.|
|bool|[PriceCouponItemId_IsSet](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1a3ff973a4b6ef22cc422f4b51e1c553c0)|true if PriceCouponItemId_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1a99422b3908bc70c26347ff7f933b03ab)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1a009d08c7d6af6016eb6fd5f0e1610e1c)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetPriceItemId](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1ae5374995f8e978a32729fef362f8f02c)()|Gets the value of PriceItemId.|
|const int32 &|[GetPriceItemId](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1a05a1cae4dc95e3aeebd373cfc056f811)()|Gets the value of PriceItemId.|
|void|[SetPriceItemId](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1aea4f4d5a196936ee62dfd21193553b0f)(int32 NewValue)|Sets the value of PriceItemId.|
|bool|[IsPriceItemIdDefaultValue](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1a75bb8c52ba21bf3defe631a5df761e8f)()|Returns true if PriceItemId matches the default value.|
|void|[SetPriceItemIdToDefault](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1a1850ddc2111274968198f63c0d63e6d7)()|Sets the value of PriceItemId to its default|
|int32 &|[GetPrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1a60e8662eac4257c10b221a5ab8124d38)()|Gets the value of Price.|
|const int32 &|[GetPrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1a8dbd6d20ad8a4c1882971c8164d23210)()|Gets the value of Price.|
|void|[SetPrice](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1a99a953cb8b2693f0ef6e7ddfefd79d23)(int32 NewValue)|Sets the value of Price.|
|bool|[IsPriceDefaultValue](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1a224a5979e95142cd68db59f9f8075899)()|Returns true if Price matches the default value.|
|void|[SetPriceToDefault](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1ab939845ed712db2c72b5ba0077ecd812)()|Sets the value of Price to its default|
|int32 &|[GetPriceCouponItemId](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1aff5cc86f3bcd4f86c87d3b3ab62a0afb)()|Gets the value of PriceCouponItemId_Optional, regardless of it having been set.|
|const int32 &|[GetPriceCouponItemId](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1a2262c072b691a01253e75a910ea65cfd)()|Gets the value of PriceCouponItemId_Optional, regardless of it having been set.|
|const int32 &|[GetPriceCouponItemId](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1a84367abb0e3f553b1915b0ae08866685)(const int32 & DefaultValue)|Gets the value of PriceCouponItemId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPriceCouponItemId](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1a85051adee9d0cd3757805c0950498091)(int32 & OutValue)|Fills OutValue with the value of PriceCouponItemId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetPriceCouponItemIdOrNull](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1ad1ff3ce1ddb45d7644e460284ae11e09)()|Returns a pointer to PriceCouponItemId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetPriceCouponItemIdOrNull](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1a3dfa20abc1216340dae08006f5ef3235)()|Returns a pointer to PriceCouponItemId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPriceCouponItemId](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1a92487fae3a1a99ee1b2967dbd9a206cc)(int32 NewValue)|Sets the value of PriceCouponItemId_Optional and also sets PriceCouponItemId_IsSet to true.|
|void|[ClearPriceCouponItemId](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1a00e220ca6dbbe2a39c393dcb93afa873)()|Clears the value of PriceCouponItemId_Optional and sets PriceCouponItemId_IsSet to false.|
|bool|[IsPriceCouponItemIdDefaultValue](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1a96c915426f89bd6a468c80e9d6c79440)()|Returns true if PriceCouponItemId_Optional is set and matches the default value.|
|void|[SetPriceCouponItemIdToDefault](/unreal-plugins/all/structfrhapi__purchaseprice/#structFRHAPI__PurchasePrice_1a8a7053cacb8105cd2efc15a153c3ba78)()|Sets the value of PriceCouponItemId_Optional to its default and also sets PriceCouponItemId_IsSet to true.|
## Public Attributes



### `PriceItemId` <a id="structFRHAPI__PurchasePrice_1a263df4cc3585b8910e465aad7d2610c9"></a>

`int32 FRHAPI_PurchasePrice::PriceItemId`

The Item used as the currency for the purchase.




### `Price` <a id="structFRHAPI__PurchasePrice_1a5025132ab0bf6aba04cbe0eb95bb3e1c"></a>

`int32 FRHAPI_PurchasePrice::Price`

The price of the Item.




### `PriceCouponItemId_Optional` <a id="structFRHAPI__PurchasePrice_1a8113310e2761e767ab0240dcbb2915d7"></a>

`int32 FRHAPI_PurchasePrice::PriceCouponItemId_Optional`

The Item used as the coupon for the purchase.




### `PriceCouponItemId_IsSet` <a id="structFRHAPI__PurchasePrice_1a3ff973a4b6ef22cc422f4b51e1c553c0"></a>

`bool FRHAPI_PurchasePrice::PriceCouponItemId_IsSet`

true if PriceCouponItemId_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__PurchasePrice_1a99422b3908bc70c26347ff7f933b03ab"></a>

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



### `WriteJson` <a id="structFRHAPI__PurchasePrice_1a009d08c7d6af6016eb6fd5f0e1610e1c"></a>

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



### `GetPriceItemId` <a id="structFRHAPI__PurchasePrice_1ae5374995f8e978a32729fef362f8f02c"></a>

int32 & GetPriceItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PriceItemId.




### `GetPriceItemId` <a id="structFRHAPI__PurchasePrice_1a05a1cae4dc95e3aeebd373cfc056f811"></a>

const int32 & GetPriceItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PriceItemId.




### `SetPriceItemId` <a id="structFRHAPI__PurchasePrice_1aea4f4d5a196936ee62dfd21193553b0f"></a>

void SetPriceItemId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of PriceItemId.




### `IsPriceItemIdDefaultValue` <a id="structFRHAPI__PurchasePrice_1a75bb8c52ba21bf3defe631a5df761e8f"></a>

bool IsPriceItemIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PriceItemId matches the default value.




### `SetPriceItemIdToDefault` <a id="structFRHAPI__PurchasePrice_1a1850ddc2111274968198f63c0d63e6d7"></a>

void SetPriceItemIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PriceItemId to its default




### `GetPrice` <a id="structFRHAPI__PurchasePrice_1a60e8662eac4257c10b221a5ab8124d38"></a>

int32 & GetPrice()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Price.




### `GetPrice` <a id="structFRHAPI__PurchasePrice_1a8dbd6d20ad8a4c1882971c8164d23210"></a>

const int32 & GetPrice()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Price.




### `SetPrice` <a id="structFRHAPI__PurchasePrice_1a99a953cb8b2693f0ef6e7ddfefd79d23"></a>

void SetPrice(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of Price.




### `IsPriceDefaultValue` <a id="structFRHAPI__PurchasePrice_1a224a5979e95142cd68db59f9f8075899"></a>

bool IsPriceDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if Price matches the default value.




### `SetPriceToDefault` <a id="structFRHAPI__PurchasePrice_1ab939845ed712db2c72b5ba0077ecd812"></a>

void SetPriceToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of Price to its default




### `GetPriceCouponItemId` <a id="structFRHAPI__PurchasePrice_1aff5cc86f3bcd4f86c87d3b3ab62a0afb"></a>

int32 & GetPriceCouponItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PriceCouponItemId_Optional, regardless of it having been set.




### `GetPriceCouponItemId` <a id="structFRHAPI__PurchasePrice_1a2262c072b691a01253e75a910ea65cfd"></a>

const int32 & GetPriceCouponItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PriceCouponItemId_Optional, regardless of it having been set.




### `GetPriceCouponItemId` <a id="structFRHAPI__PurchasePrice_1a84367abb0e3f553b1915b0ae08866685"></a>

const int32 & GetPriceCouponItemId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of PriceCouponItemId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPriceCouponItemId` <a id="structFRHAPI__PurchasePrice_1a85051adee9d0cd3757805c0950498091"></a>

bool GetPriceCouponItemId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of PriceCouponItemId_Optional and returns true if it has been set, otherwise returns false.




### `GetPriceCouponItemIdOrNull` <a id="structFRHAPI__PurchasePrice_1ad1ff3ce1ddb45d7644e460284ae11e09"></a>

int32 * GetPriceCouponItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PriceCouponItemId_Optional, if it has been set, otherwise returns nullptr.




### `GetPriceCouponItemIdOrNull` <a id="structFRHAPI__PurchasePrice_1a3dfa20abc1216340dae08006f5ef3235"></a>

const int32 * GetPriceCouponItemIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PriceCouponItemId_Optional, if it has been set, otherwise returns nullptr.




### `SetPriceCouponItemId` <a id="structFRHAPI__PurchasePrice_1a92487fae3a1a99ee1b2967dbd9a206cc"></a>

void SetPriceCouponItemId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of PriceCouponItemId_Optional and also sets PriceCouponItemId_IsSet to true.




### `ClearPriceCouponItemId` <a id="structFRHAPI__PurchasePrice_1a00e220ca6dbbe2a39c393dcb93afa873"></a>

void ClearPriceCouponItemId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PriceCouponItemId_Optional and sets PriceCouponItemId_IsSet to false.




### `IsPriceCouponItemIdDefaultValue` <a id="structFRHAPI__PurchasePrice_1a96c915426f89bd6a468c80e9d6c79440"></a>

bool IsPriceCouponItemIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PriceCouponItemId_Optional is set and matches the default value.




### `SetPriceCouponItemIdToDefault` <a id="structFRHAPI__PurchasePrice_1a8a7053cacb8105cd2efc15a153c3ba78"></a>

void SetPriceCouponItemIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PriceCouponItemId_Optional to its default and also sets PriceCouponItemId_IsSet to true.





