---
title: FRHVendorGetRequest Struct
---
Vendor Request struct used to encapsulate a request to get a vendors and the callback delegate.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FRH_CatalogCallBlock|[Delegate](/unreal-plugins/all/structfrhvendorgetrequest/#structFRHVendorGetRequest_1ac3903422f9becf0ec9efbf01336b2e34)|Delegate callback when all vendors have been fetched.|
|TArray< int32 >|[VendorIds](/unreal-plugins/all/structfrhvendorgetrequest/#structFRHVendorGetRequest_1ab2be5bbe02318acf5d90f7c90d4002d4)|Array of outstanding vendor requests to complete this vendor get.|
||[FRHVendorGetRequest](/unreal-plugins/all/structfrhvendorgetrequest/#structFRHVendorGetRequest_1a0a8a4ff4b74254933725968cb46869cb)()|Default Constructor.|
||[FRHVendorGetRequest](/unreal-plugins/all/structfrhvendorgetrequest/#structFRHVendorGetRequest_1a3ae63c4382710be88bac03888a0a1471)(const TArray< int32 > & InVendorIds)|Constructor with vendor Id List.|
||[FRHVendorGetRequest](/unreal-plugins/all/structfrhvendorgetrequest/#structFRHVendorGetRequest_1a3db335a857c4d1ead61bb82410e2b0a6)(const FRH_CatalogCallBlock & InDelegate, const TArray< int32 > & InVendorIds)|Constructor with vendor Id List and callback delegate.|
## Public Attributes



### `Delegate` <a id="structFRHVendorGetRequest_1ac3903422f9becf0ec9efbf01336b2e34"></a>

`FRH_CatalogCallBlock FRHVendorGetRequest::Delegate`

Delegate callback when all vendors have been fetched.




### `VendorIds` <a id="structFRHVendorGetRequest_1ab2be5bbe02318acf5d90f7c90d4002d4"></a>

`TArray<int32> FRHVendorGetRequest::VendorIds`

Array of outstanding vendor requests to complete this vendor get.





## Public Functions



### `FRHVendorGetRequest` <a id="structFRHVendorGetRequest_1a0a8a4ff4b74254933725968cb46869cb"></a>

 FRHVendorGetRequest()

#### Parameters

| Type | Name |
|------|------|

#### Description

Default Constructor.




### `FRHVendorGetRequest` <a id="structFRHVendorGetRequest_1a3ae63c4382710be88bac03888a0a1471"></a>

 FRHVendorGetRequest(const TArray< int32 > & InVendorIds)

#### Parameters

| Type | Name |
|------|------|
|const TArray< int32 > &|InVendorIds|

#### Description

Constructor with vendor Id List.


#### Parameters

InVendorIds
: List of vendor Ids to get. 



### `FRHVendorGetRequest` <a id="structFRHVendorGetRequest_1a3db335a857c4d1ead61bb82410e2b0a6"></a>

 FRHVendorGetRequest(const FRH_CatalogCallBlock & InDelegate, const TArray< int32 > & InVendorIds)

#### Parameters

| Type | Name |
|------|------|
|const FRH_CatalogCallBlock &|InDelegate|
|const TArray< int32 > &|InVendorIds|

#### Description

Constructor with vendor Id List and callback delegate.


#### Parameters

InDelegate
: Delegate to call when vendor fetch completes. 
InVendorIds
: List of vendor Ids to get. 




