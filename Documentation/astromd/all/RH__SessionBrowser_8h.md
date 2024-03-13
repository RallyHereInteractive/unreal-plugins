---
title: RH_SessionBrowser.h File Reference
---

## Summary
| Kind | View | Description |
|------|------|-------------|
|struct|[FRH_SessionBrowserSearchParams](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams)||
|struct|[FRH_SessionBrowserSearchResult](/unreal-plugins/all/structfrh__sessionbrowsersearchresult/#structFRH__SessionBrowserSearchResult)||
|class|[URH_SessionBrowserCache](/unreal-plugins/all/classurh__sessionbrowsercache/#classURH__SessionBrowserCache)||
||[DECLARE_DYNAMIC_DELEGATE_TwoParams](/unreal-plugins/all/rh__sessionbrowser_8h/#RH__SessionBrowser_8h_1a7d22b8e39702033ae5458ea0406efbef)(FRH_OnSessionSearchCompleteDynamicDelegate , bool , bSuccess , const [FRH_SessionBrowserSearchResult](/unreal-plugins/all/structfrh__sessionbrowsersearchresult/#structFRH__SessionBrowserSearchResult) & , SearchResult )||
||[DECLARE_DELEGATE_TwoParams](/unreal-plugins/all/rh__sessionbrowser_8h/#RH__SessionBrowser_8h_1a6703a4b7b0d9df628114b741e4c2db8a)(FRH_OnSessionSearchCompleteDelegate , bool , const [FRH_SessionBrowserSearchResult](/unreal-plugins/all/structfrh__sessionbrowsersearchresult/#structFRH__SessionBrowserSearchResult) & )||
||[DECLARE_RH_DELEGATE_BLOCK](/unreal-plugins/all/rh__sessionbrowser_8h/#RH__SessionBrowser_8h_1a21f45c7c21a1364666a3f346a03060a6)(FRH_OnSessionSearchCompleteDelegateBlock , FRH_OnSessionSearchCompleteDelegate , FRH_OnSessionSearchCompleteDynamicDelegate , bool , const [FRH_SessionBrowserSearchResult](/unreal-plugins/all/structfrh__sessionbrowsersearchresult/#structFRH__SessionBrowserSearchResult) & )||
## Functions



### `DECLARE_DYNAMIC_DELEGATE_TwoParams` <a id="RH__SessionBrowser_8h_1a7d22b8e39702033ae5458ea0406efbef"></a>

 DECLARE_DYNAMIC_DELEGATE_TwoParams(FRH_OnSessionSearchCompleteDynamicDelegate , bool , bSuccess , const [FRH_SessionBrowserSearchResult](/unreal-plugins/all/structfrh__sessionbrowsersearchresult/#structFRH__SessionBrowserSearchResult) & , SearchResult )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnSessionSearchCompleteDynamicDelegate||
|bool||
|bSuccess||
|const [FRH_SessionBrowserSearchResult](/unreal-plugins/all/structfrh__sessionbrowsersearchresult/#structFRH__SessionBrowserSearchResult) &||
|SearchResult||

#### Description






### `DECLARE_DELEGATE_TwoParams` <a id="RH__SessionBrowser_8h_1a6703a4b7b0d9df628114b741e4c2db8a"></a>

 DECLARE_DELEGATE_TwoParams(FRH_OnSessionSearchCompleteDelegate , bool , const [FRH_SessionBrowserSearchResult](/unreal-plugins/all/structfrh__sessionbrowsersearchresult/#structFRH__SessionBrowserSearchResult) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnSessionSearchCompleteDelegate||
|bool||
|const [FRH_SessionBrowserSearchResult](/unreal-plugins/all/structfrh__sessionbrowsersearchresult/#structFRH__SessionBrowserSearchResult) &||

#### Description






### `DECLARE_RH_DELEGATE_BLOCK` <a id="RH__SessionBrowser_8h_1a21f45c7c21a1364666a3f346a03060a6"></a>

 DECLARE_RH_DELEGATE_BLOCK(FRH_OnSessionSearchCompleteDelegateBlock , FRH_OnSessionSearchCompleteDelegate , FRH_OnSessionSearchCompleteDynamicDelegate , bool , const [FRH_SessionBrowserSearchResult](/unreal-plugins/all/structfrh__sessionbrowsersearchresult/#structFRH__SessionBrowserSearchResult) & )

#### Parameters

| Type | Name |
|------|------|
|FRH_OnSessionSearchCompleteDelegateBlock||
|FRH_OnSessionSearchCompleteDelegate||
|FRH_OnSessionSearchCompleteDynamicDelegate||
|bool||
|const [FRH_SessionBrowserSearchResult](/unreal-plugins/all/structfrh__sessionbrowsersearchresult/#structFRH__SessionBrowserSearchResult) &||

#### Description







