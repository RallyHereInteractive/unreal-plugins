---
title: FRH_SessionBrowserSearchResult Struct
---
Struct containint the results of a Session Browser search.

## Summary
| Kind | View | Description |
|------|------|-------------|
|[FRH_SessionBrowserSearchParams](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams)|[SearchParams](/unreal-plugins/all/structfrh__sessionbrowsersearchresult/#structFRH__SessionBrowserSearchResult_1aeb72fb7152805cc22dc79f48a220d97c)|The paramaters used to make the search.|
|TArray< [FRHAPI_BrowserSessionInfo](/unreal-plugins/all/structfrhapi__browsersessioninfo/#structFRHAPI__BrowserSessionInfo) >|[SessionInfos](/unreal-plugins/all/structfrh__sessionbrowsersearchresult/#structFRH__SessionBrowserSearchResult_1a182c14c8722afa17ef4bfeadfa010027)|Array of session infos found by the search.|
|TArray< TWeakObjectPtr< [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) > >|[Sessions](/unreal-plugins/all/structfrh__sessionbrowsersearchresult/#structFRH__SessionBrowserSearchResult_1acaa0997455e5bf4b19c5612d5924b229)|Array of sessions found by the search if bCacheSessionDetails was true.|
|int32|[NextPageCursor](/unreal-plugins/all/structfrh__sessionbrowsersearchresult/#structFRH__SessionBrowserSearchResult_1a688696d4ce5b7c6abb3ccd2e582798dd)|Cursor to use to request the next page of data.|
|FString|[GetDescription](/unreal-plugins/all/structfrh__sessionbrowsersearchresult/#structFRH__SessionBrowserSearchResult_1a1a68a39a6b7a426d5e012d87e8c0dc92)()|Returns summary of search results for tooling/logging.|
||[FRH_SessionBrowserSearchResult](/unreal-plugins/all/structfrh__sessionbrowsersearchresult/#structFRH__SessionBrowserSearchResult_1a4cd4776b9ae3e0ae1051d3a59b5436d4)()||
## Public Attributes



### `SearchParams` <a id="structFRH__SessionBrowserSearchResult_1aeb72fb7152805cc22dc79f48a220d97c"></a>

`FRH_SessionBrowserSearchParams FRH_SessionBrowserSearchResult::SearchParams`

The paramaters used to make the search.




### `SessionInfos` <a id="structFRH__SessionBrowserSearchResult_1a182c14c8722afa17ef4bfeadfa010027"></a>

`TArray<FRHAPI_BrowserSessionInfo> FRH_SessionBrowserSearchResult::SessionInfos`

Array of session infos found by the search.




### `Sessions` <a id="structFRH__SessionBrowserSearchResult_1acaa0997455e5bf4b19c5612d5924b229"></a>

`TArray<TWeakObjectPtr<URH_SessionView> > FRH_SessionBrowserSearchResult::Sessions`

Array of sessions found by the search if bCacheSessionDetails was true.




### `NextPageCursor` <a id="structFRH__SessionBrowserSearchResult_1a688696d4ce5b7c6abb3ccd2e582798dd"></a>

`int32 FRH_SessionBrowserSearchResult::NextPageCursor`

Cursor to use to request the next page of data.





## Public Functions



### `GetDescription` <a id="structFRH__SessionBrowserSearchResult_1a1a68a39a6b7a426d5e012d87e8c0dc92"></a>

FString GetDescription()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns summary of search results for tooling/logging.




### `FRH_SessionBrowserSearchResult` <a id="structFRH__SessionBrowserSearchResult_1a4cd4776b9ae3e0ae1051d3a59b5436d4"></a>

 FRH_SessionBrowserSearchResult()

#### Parameters

| Type | Name |
|------|------|

#### Description







