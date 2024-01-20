---
title: FRH_SessionBrowserSearchParams Struct
---
Struct containing the search paramaters for Session Browsers.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[SessionType](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams_1a25ef289d60be155f1caeaddd19c5cc0a)|The Type of Session to search for.|
|FString|[RegionId](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams_1ae4ca9ef983382c2eb381ed4f0ad521c8)|The Region ID of Session to search for.|
|TArray< FString >|[SessionIds](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams_1a323e62b2ff94b8be30c0fb7b92914568)|If specified, skip search lookup and instead query these specific session ids.|
|int32|[Cursor](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams_1a987cdfb2a54b641a8724c578d4900bfc)|The indicator of what page to request of results.|
|int32|[PageSize](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams_1a8de9c480f8dedf19d415e564fe201e96)|The size of each page of results.|
|bool|[bCacheSessionDetails](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams_1ac0749ac4e9ddb43e11b231fe31b08758)|Whether to query and cache the session data from the search result.|
||[FRH_SessionBrowserSearchParams](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams_1ac8b5657a750ea3b355f344334f9048c0)()|Default constructor.|
|FString|[GetDescription](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams_1af1c20cb69cc90ba84f385b67489bae24)()|Returns display of search params for toolings/logging.|
## Public Attributes



### `SessionType` <a id="structFRH__SessionBrowserSearchParams_1a25ef289d60be155f1caeaddd19c5cc0a"></a>

`FString FRH_SessionBrowserSearchParams::SessionType`

The Type of Session to search for.




### `RegionId` <a id="structFRH__SessionBrowserSearchParams_1ae4ca9ef983382c2eb381ed4f0ad521c8"></a>

`FString FRH_SessionBrowserSearchParams::RegionId`

The Region ID of Session to search for.




### `SessionIds` <a id="structFRH__SessionBrowserSearchParams_1a323e62b2ff94b8be30c0fb7b92914568"></a>

`TArray<FString> FRH_SessionBrowserSearchParams::SessionIds`

If specified, skip search lookup and instead query these specific session ids.




### `Cursor` <a id="structFRH__SessionBrowserSearchParams_1a987cdfb2a54b641a8724c578d4900bfc"></a>

`int32 FRH_SessionBrowserSearchParams::Cursor`

The indicator of what page to request of results.




### `PageSize` <a id="structFRH__SessionBrowserSearchParams_1a8de9c480f8dedf19d415e564fe201e96"></a>

`int32 FRH_SessionBrowserSearchParams::PageSize`

The size of each page of results.




### `bCacheSessionDetails` <a id="structFRH__SessionBrowserSearchParams_1ac0749ac4e9ddb43e11b231fe31b08758"></a>

`bool FRH_SessionBrowserSearchParams::bCacheSessionDetails`

Whether to query and cache the session data from the search result.





## Public Functions



### `FRH_SessionBrowserSearchParams` <a id="structFRH__SessionBrowserSearchParams_1ac8b5657a750ea3b355f344334f9048c0"></a>

 FRH_SessionBrowserSearchParams()

#### Parameters

| Type | Name |
|------|------|

#### Description

Default constructor.




### `GetDescription` <a id="structFRH__SessionBrowserSearchParams_1af1c20cb69cc90ba84f385b67489bae24"></a>

FString GetDescription()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns display of search params for toolings/logging.





