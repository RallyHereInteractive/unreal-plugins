---
title: FRHAPI_Region Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

Information about a specific region.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[RegionId](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1a7fd253066a8d41958055f8655b7ad0a5)|ID for this region.|
|int32|[SortOrder](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1abfeb2f9bfea64356c17c226f7503882c)|The sorting priority order for this region.|
|bool|[CustomOnly](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1a773a40307613584027889ce3053cdbfa)|Indicates if the region is for custom games only.|
|FString|[Description_Optional](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1a25baef84a12c2319c89fadd82aed7f5d)|Text description of the region.|
|bool|[Description_IsSet](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1a33484d8aa6a83a063577ce58b71375e9)|true if Description_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1a844e25dd395ab4cc20d6909938b48994)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1a3a0dcfc462e78f2b31008333918e0b08)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetRegionId](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1a419a7d9e9b92188982ca861d534590fb)()|Gets the value of RegionId.|
|const FString &|[GetRegionId](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1a0813644e30e617ef463b8e52f44d8eb8)()|Gets the value of RegionId.|
|void|[SetRegionId](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1a481c38e352a997da4bf2e9345844827b)(FString NewValue)|Sets the value of RegionId.|
|int32 &|[GetSortOrder](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1aa7dc4cb8092b22bcc4baa15f7bec2fd2)()|Gets the value of SortOrder.|
|const int32 &|[GetSortOrder](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1a6651d5bca086b245a4e949fb116731ad)()|Gets the value of SortOrder.|
|void|[SetSortOrder](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1ad7752eba9aae5a0c44a18c065a2c6991)(int32 NewValue)|Sets the value of SortOrder.|
|bool|[IsSortOrderDefaultValue](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1a76cb7dee0e2d25fa2fd934379853f924)()|Returns true if SortOrder matches the default value.|
|void|[SetSortOrderToDefault](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1a7c81022a194db12326150423521a3698)()|Sets the value of SortOrder to its default|
|bool &|[GetCustomOnly](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1a98a2d5f05eb448de6a9f41eee1cd1c96)()|Gets the value of CustomOnly.|
|const bool &|[GetCustomOnly](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1ad887eb788b8f721214b97d0d243416be)()|Gets the value of CustomOnly.|
|void|[SetCustomOnly](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1a2e64c31a8fd39218cebc02a6d34913cb)(bool NewValue)|Sets the value of CustomOnly.|
|bool|[IsCustomOnlyDefaultValue](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1a0129e268f3e6b69ebcc0b783aef20e17)()|Returns true if CustomOnly matches the default value.|
|void|[SetCustomOnlyToDefault](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1a2d17441ecb1b6cd9be1bff13c862d66e)()|Sets the value of CustomOnly to its default|
|FString &|[GetDescription](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1a71afda28fd541a90cc8933f4259af66b)()|Gets the value of Description_Optional, regardless of it having been set.|
|const FString &|[GetDescription](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1a7c9ed9b0a580c819228c61f521d88164)()|Gets the value of Description_Optional, regardless of it having been set.|
|const FString &|[GetDescription](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1a3ac7838aeece58ff512722ed94406db5)(const FString & DefaultValue)|Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetDescription](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1ac306846e54d708f9aa16dcd09f8175d9)(FString & OutValue)|Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetDescriptionOrNull](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1adcb53a10f76cc1cdf30c3f25a5eba3f5)()|Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetDescriptionOrNull](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1a946f5745b8fa3527ea5fcc071a796fab)()|Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetDescription](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1ae3ca8eb54748b345e2ba34811834ce7b)(FString NewValue)|Sets the value of Description_Optional and also sets Description_IsSet to true.|
|void|[ClearDescription](/unreal-plugins/all/structfrhapi__region/#structFRHAPI__Region_1abc95d39d9739c796eb3a63017be045af)()|Clears the value of Description_Optional and sets Description_IsSet to false.|
## Public Attributes



### `RegionId` <a id="structFRHAPI__Region_1a7fd253066a8d41958055f8655b7ad0a5"></a>

`FString FRHAPI_Region::RegionId`

ID for this region.




### `SortOrder` <a id="structFRHAPI__Region_1abfeb2f9bfea64356c17c226f7503882c"></a>

`int32 FRHAPI_Region::SortOrder`

The sorting priority order for this region.




### `CustomOnly` <a id="structFRHAPI__Region_1a773a40307613584027889ce3053cdbfa"></a>

`bool FRHAPI_Region::CustomOnly`

Indicates if the region is for custom games only.




### `Description_Optional` <a id="structFRHAPI__Region_1a25baef84a12c2319c89fadd82aed7f5d"></a>

`FString FRHAPI_Region::Description_Optional`

Text description of the region.




### `Description_IsSet` <a id="structFRHAPI__Region_1a33484d8aa6a83a063577ce58b71375e9"></a>

`bool FRHAPI_Region::Description_IsSet`

true if Description_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__Region_1a844e25dd395ab4cc20d6909938b48994"></a>

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



### `WriteJson` <a id="structFRHAPI__Region_1a3a0dcfc462e78f2b31008333918e0b08"></a>

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



### `GetRegionId` <a id="structFRHAPI__Region_1a419a7d9e9b92188982ca861d534590fb"></a>

FString & GetRegionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RegionId.




### `GetRegionId` <a id="structFRHAPI__Region_1a0813644e30e617ef463b8e52f44d8eb8"></a>

const FString & GetRegionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of RegionId.




### `SetRegionId` <a id="structFRHAPI__Region_1a481c38e352a997da4bf2e9345844827b"></a>

void SetRegionId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of RegionId.




### `GetSortOrder` <a id="structFRHAPI__Region_1aa7dc4cb8092b22bcc4baa15f7bec2fd2"></a>

int32 & GetSortOrder()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SortOrder.




### `GetSortOrder` <a id="structFRHAPI__Region_1a6651d5bca086b245a4e949fb116731ad"></a>

const int32 & GetSortOrder()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SortOrder.




### `SetSortOrder` <a id="structFRHAPI__Region_1ad7752eba9aae5a0c44a18c065a2c6991"></a>

void SetSortOrder(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of SortOrder.




### `IsSortOrderDefaultValue` <a id="structFRHAPI__Region_1a76cb7dee0e2d25fa2fd934379853f924"></a>

bool IsSortOrderDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if SortOrder matches the default value.




### `SetSortOrderToDefault` <a id="structFRHAPI__Region_1a7c81022a194db12326150423521a3698"></a>

void SetSortOrderToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of SortOrder to its default




### `GetCustomOnly` <a id="structFRHAPI__Region_1a98a2d5f05eb448de6a9f41eee1cd1c96"></a>

bool & GetCustomOnly()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomOnly.




### `GetCustomOnly` <a id="structFRHAPI__Region_1ad887eb788b8f721214b97d0d243416be"></a>

const bool & GetCustomOnly()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomOnly.




### `SetCustomOnly` <a id="structFRHAPI__Region_1a2e64c31a8fd39218cebc02a6d34913cb"></a>

void SetCustomOnly(bool NewValue)

#### Parameters

| Type | Name |
|------|------|
|bool|NewValue|

#### Description

Sets the value of CustomOnly.




### `IsCustomOnlyDefaultValue` <a id="structFRHAPI__Region_1a0129e268f3e6b69ebcc0b783aef20e17"></a>

bool IsCustomOnlyDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if CustomOnly matches the default value.




### `SetCustomOnlyToDefault` <a id="structFRHAPI__Region_1a2d17441ecb1b6cd9be1bff13c862d66e"></a>

void SetCustomOnlyToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of CustomOnly to its default




### `GetDescription` <a id="structFRHAPI__Region_1a71afda28fd541a90cc8933f4259af66b"></a>

FString & GetDescription()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Description_Optional, regardless of it having been set.




### `GetDescription` <a id="structFRHAPI__Region_1a7c9ed9b0a580c819228c61f521d88164"></a>

const FString & GetDescription()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Description_Optional, regardless of it having been set.




### `GetDescription` <a id="structFRHAPI__Region_1a3ac7838aeece58ff512722ed94406db5"></a>

const FString & GetDescription(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Description_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetDescription` <a id="structFRHAPI__Region_1ac306846e54d708f9aa16dcd09f8175d9"></a>

bool GetDescription(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Description_Optional and returns true if it has been set, otherwise returns false.




### `GetDescriptionOrNull` <a id="structFRHAPI__Region_1adcb53a10f76cc1cdf30c3f25a5eba3f5"></a>

FString * GetDescriptionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.




### `GetDescriptionOrNull` <a id="structFRHAPI__Region_1a946f5745b8fa3527ea5fcc071a796fab"></a>

const FString * GetDescriptionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Description_Optional, if it has been set, otherwise returns nullptr.




### `SetDescription` <a id="structFRHAPI__Region_1ae3ca8eb54748b345e2ba34811834ce7b"></a>

void SetDescription(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Description_Optional and also sets Description_IsSet to true.




### `ClearDescription` <a id="structFRHAPI__Region_1abc95d39d9739c796eb3a63017be045af"></a>

void ClearDescription()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Description_Optional and sets Description_IsSet to false.





