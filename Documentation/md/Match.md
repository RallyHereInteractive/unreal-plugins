# Match <a id="group__Match"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public inline  `[`FRH_MatchSearchParams`](#group__Match_1ga703357c85c089fd0675e83eaa69ca12c)`()`            | 
`public inline FString `[`GetDescription`](#group__Match_1ga682aada2005d21246404e340217c4229)`() const`            | Returns summary of params for tooling/logging.
`public inline RallyHereAPI::FRequest_GetMatches `[`ToAPIRequest`](#group__Match_1gad113cf34700d56985d289eebde6e4218)`(FAuthContextPtr AuthContext) const`            | Converts the search params to an API request.
`public inline FString `[`GetDescription`](#group__Match_1ga3f3d4d70bda7f129f5d84ed5a695a309)`() const`            | Returns summary of search results for tooling/logging.
`public inline  `[`FRH_MatchSearchResult`](#group__Match_1ga44c964332575fef90c49b48a0cb0b6d1)`()`            | 
`public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__Match_1ga39c5346e67dc64f77f725e773521d2e0)`(FRH_OnMatchSearchCompleteDynamicDelegate,bool,bSuccess,const `[`FRH_MatchSearchResult`](Match.md#structFRH__MatchSearchResult)` &,SearchResult,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo)`            | 
`public  `[`DECLARE_DELEGATE_ThreeParams`](#group__Match_1ga6fd6c31d59a50b0d39595e30e05f9789)`(FRH_OnMatchSearchCompleteDelegate,bool,const `[`FRH_MatchSearchResult`](Match.md#structFRH__MatchSearchResult)` &,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)`            | 
`public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__Match_1ga74bde125a6bf4f1e30c1f5b702d59b66)`(FRH_OnMatchSearchCompleteDelegateBlock,FRH_OnMatchSearchCompleteDelegate,FRH_OnMatchSearchCompleteDynamicDelegate,bool,const `[`FRH_MatchSearchResult`](Match.md#structFRH__MatchSearchResult)` &,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)`            | 
`public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__Match_1ga1bdb816b0b7b2597a3d809eae26d2ea9)`(FRH_OnMatchLookupCompleteDynamicDelegate,bool,bSuccess,const `[`FRHAPI_MatchWithPlayers`](models/RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` &,SearchResult,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo)`            | 
`public  `[`DECLARE_DELEGATE_ThreeParams`](#group__Match_1ga625c8f54a89a75a827bd53929f755916)`(FRH_OnMatchLookupCompleteDelegate,bool,const `[`FRHAPI_MatchWithPlayers`](models/RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` &,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)`            | 
`public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__Match_1ga41c61e68b8aea8a3888a4e0b7955083e)`(FRH_OnMatchLookupCompleteDelegateBlock,FRH_OnMatchLookupCompleteDelegate,FRH_OnMatchLookupCompleteDynamicDelegate,bool,const `[`FRHAPI_MatchWithPlayers`](models/RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` &,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)`            | 
`public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__Match_1ga04222e2f5e0094b165c983178aa17d3b)`(FRH_OnMatchUpdateCompleteDynamicDelegate,bool,bSuccess,const `[`FRHAPI_MatchWithPlayers`](models/RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` &,Match,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo)`            | 
`public  `[`DECLARE_DELEGATE_ThreeParams`](#group__Match_1gae314bbb1202b6b6a42fd341cefadfbb2)`(FRH_OnMatchUpdateCompleteDelegate,bool,const `[`FRHAPI_MatchWithPlayers`](models/RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` &,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)`            | 
`public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__Match_1ga63ed9ffaca386e22a01a9be89bd7454c)`(FRH_OnMatchUpdateCompleteDelegateBlock,FRH_OnMatchUpdateCompleteDelegate,FRH_OnMatchUpdateCompleteDynamicDelegate,bool,const `[`FRHAPI_MatchWithPlayers`](models/RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` &,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)`            | 
`public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__Match_1ga92b4d9fb42e1e8fed8edf6794eefd15f)`(FRH_OnMatchPlayerUpdatedCompleteDynamicDelegate,bool,bSuccess,const `[`FRHAPI_MatchPlayerWithMatch`](models/RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` &,Match,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo)`            | 
`public  `[`DECLARE_DELEGATE_ThreeParams`](#group__Match_1ga15de38ee827d4b11f3b5f121c40ce77f)`(FRH_OnMatchPlayerUpdateCompleteDelegate,bool,const `[`FRHAPI_MatchPlayerWithMatch`](models/RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` &,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)`            | 
`public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__Match_1gadb89201c5ff064ef71a8fddb770c9343)`(FRH_OnMatchPlayerUpdateCompleteDelegateBlock,FRH_OnMatchPlayerUpdateCompleteDelegate,FRH_OnMatchPlayerUpdatedCompleteDynamicDelegate,bool,const `[`FRHAPI_MatchPlayerWithMatch`](models/RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` &,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)`            | 
`public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__Match_1ga34b65961f4ba99a862853c7ff7184e19)`(FRH_OnMatchSegmentUpdateCompleteDynamicDelegate,bool,bSuccess,const `[`FRHAPI_MatchSegmentWithPlayers`](models/RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` &,MatchSegment,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo)`            | 
`public  `[`DECLARE_DELEGATE_ThreeParams`](#group__Match_1ga93bfb68700d34f3ed69f6d15e9beadd0)`(FRH_OnMatchSegmentUpdateCompleteDelegate,bool,const `[`FRHAPI_MatchSegmentWithPlayers`](models/RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` &,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)`            | 
`public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__Match_1ga29313d5c3a4e7d99162d33ac3e7a692d)`(FRH_OnMatchSegmentUpdateCompleteDelegateBlock,FRH_OnMatchSegmentUpdateCompleteDelegate,FRH_OnMatchSegmentUpdateCompleteDynamicDelegate,bool,const `[`FRHAPI_MatchSegmentWithPlayers`](models/RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` &,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)`            | 
`struct `[`FRH_MatchSearchParams`](#structFRH__MatchSearchParams) | 
`struct `[`FRH_MatchSearchResult`](#structFRH__MatchSearchResult) | Struct containint the results of a Session Browser search.

## Members

#### `public inline  `[`FRH_MatchSearchParams`](#group__Match_1ga703357c85c089fd0675e83eaa69ca12c)`()` <a id="group__Match_1ga703357c85c089fd0675e83eaa69ca12c"></a>

#### `public inline FString `[`GetDescription`](#group__Match_1ga682aada2005d21246404e340217c4229)`() const` <a id="group__Match_1ga682aada2005d21246404e340217c4229"></a>

Returns summary of params for tooling/logging.

#### `public inline RallyHereAPI::FRequest_GetMatches `[`ToAPIRequest`](#group__Match_1gad113cf34700d56985d289eebde6e4218)`(FAuthContextPtr AuthContext) const` <a id="group__Match_1gad113cf34700d56985d289eebde6e4218"></a>

Converts the search params to an API request.

#### `public inline FString `[`GetDescription`](#group__Match_1ga3f3d4d70bda7f129f5d84ed5a695a309)`() const` <a id="group__Match_1ga3f3d4d70bda7f129f5d84ed5a695a309"></a>

Returns summary of search results for tooling/logging.

#### `public inline  `[`FRH_MatchSearchResult`](#group__Match_1ga44c964332575fef90c49b48a0cb0b6d1)`()` <a id="group__Match_1ga44c964332575fef90c49b48a0cb0b6d1"></a>

#### `public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__Match_1ga39c5346e67dc64f77f725e773521d2e0)`(FRH_OnMatchSearchCompleteDynamicDelegate,bool,bSuccess,const `[`FRH_MatchSearchResult`](Match.md#structFRH__MatchSearchResult)` &,SearchResult,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo)` <a id="group__Match_1ga39c5346e67dc64f77f725e773521d2e0"></a>

#### `public  `[`DECLARE_DELEGATE_ThreeParams`](#group__Match_1ga6fd6c31d59a50b0d39595e30e05f9789)`(FRH_OnMatchSearchCompleteDelegate,bool,const `[`FRH_MatchSearchResult`](Match.md#structFRH__MatchSearchResult)` &,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)` <a id="group__Match_1ga6fd6c31d59a50b0d39595e30e05f9789"></a>

#### `public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__Match_1ga74bde125a6bf4f1e30c1f5b702d59b66)`(FRH_OnMatchSearchCompleteDelegateBlock,FRH_OnMatchSearchCompleteDelegate,FRH_OnMatchSearchCompleteDynamicDelegate,bool,const `[`FRH_MatchSearchResult`](Match.md#structFRH__MatchSearchResult)` &,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)` <a id="group__Match_1ga74bde125a6bf4f1e30c1f5b702d59b66"></a>

#### `public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__Match_1ga1bdb816b0b7b2597a3d809eae26d2ea9)`(FRH_OnMatchLookupCompleteDynamicDelegate,bool,bSuccess,const `[`FRHAPI_MatchWithPlayers`](models/RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` &,SearchResult,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo)` <a id="group__Match_1ga1bdb816b0b7b2597a3d809eae26d2ea9"></a>

#### `public  `[`DECLARE_DELEGATE_ThreeParams`](#group__Match_1ga625c8f54a89a75a827bd53929f755916)`(FRH_OnMatchLookupCompleteDelegate,bool,const `[`FRHAPI_MatchWithPlayers`](models/RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` &,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)` <a id="group__Match_1ga625c8f54a89a75a827bd53929f755916"></a>

#### `public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__Match_1ga41c61e68b8aea8a3888a4e0b7955083e)`(FRH_OnMatchLookupCompleteDelegateBlock,FRH_OnMatchLookupCompleteDelegate,FRH_OnMatchLookupCompleteDynamicDelegate,bool,const `[`FRHAPI_MatchWithPlayers`](models/RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` &,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)` <a id="group__Match_1ga41c61e68b8aea8a3888a4e0b7955083e"></a>

#### `public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__Match_1ga04222e2f5e0094b165c983178aa17d3b)`(FRH_OnMatchUpdateCompleteDynamicDelegate,bool,bSuccess,const `[`FRHAPI_MatchWithPlayers`](models/RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` &,Match,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo)` <a id="group__Match_1ga04222e2f5e0094b165c983178aa17d3b"></a>

#### `public  `[`DECLARE_DELEGATE_ThreeParams`](#group__Match_1gae314bbb1202b6b6a42fd341cefadfbb2)`(FRH_OnMatchUpdateCompleteDelegate,bool,const `[`FRHAPI_MatchWithPlayers`](models/RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` &,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)` <a id="group__Match_1gae314bbb1202b6b6a42fd341cefadfbb2"></a>

#### `public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__Match_1ga63ed9ffaca386e22a01a9be89bd7454c)`(FRH_OnMatchUpdateCompleteDelegateBlock,FRH_OnMatchUpdateCompleteDelegate,FRH_OnMatchUpdateCompleteDynamicDelegate,bool,const `[`FRHAPI_MatchWithPlayers`](models/RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` &,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)` <a id="group__Match_1ga63ed9ffaca386e22a01a9be89bd7454c"></a>

#### `public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__Match_1ga92b4d9fb42e1e8fed8edf6794eefd15f)`(FRH_OnMatchPlayerUpdatedCompleteDynamicDelegate,bool,bSuccess,const `[`FRHAPI_MatchPlayerWithMatch`](models/RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` &,Match,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo)` <a id="group__Match_1ga92b4d9fb42e1e8fed8edf6794eefd15f"></a>

#### `public  `[`DECLARE_DELEGATE_ThreeParams`](#group__Match_1ga15de38ee827d4b11f3b5f121c40ce77f)`(FRH_OnMatchPlayerUpdateCompleteDelegate,bool,const `[`FRHAPI_MatchPlayerWithMatch`](models/RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` &,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)` <a id="group__Match_1ga15de38ee827d4b11f3b5f121c40ce77f"></a>

#### `public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__Match_1gadb89201c5ff064ef71a8fddb770c9343)`(FRH_OnMatchPlayerUpdateCompleteDelegateBlock,FRH_OnMatchPlayerUpdateCompleteDelegate,FRH_OnMatchPlayerUpdatedCompleteDynamicDelegate,bool,const `[`FRHAPI_MatchPlayerWithMatch`](models/RHAPI_MatchPlayerWithMatch.md#structFRHAPI__MatchPlayerWithMatch)` &,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)` <a id="group__Match_1gadb89201c5ff064ef71a8fddb770c9343"></a>

#### `public  `[`DECLARE_DYNAMIC_DELEGATE_ThreeParams`](#group__Match_1ga34b65961f4ba99a862853c7ff7184e19)`(FRH_OnMatchSegmentUpdateCompleteDynamicDelegate,bool,bSuccess,const `[`FRHAPI_MatchSegmentWithPlayers`](models/RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` &,MatchSegment,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &,ErrorInfo)` <a id="group__Match_1ga34b65961f4ba99a862853c7ff7184e19"></a>

#### `public  `[`DECLARE_DELEGATE_ThreeParams`](#group__Match_1ga93bfb68700d34f3ed69f6d15e9beadd0)`(FRH_OnMatchSegmentUpdateCompleteDelegate,bool,const `[`FRHAPI_MatchSegmentWithPlayers`](models/RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` &,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)` <a id="group__Match_1ga93bfb68700d34f3ed69f6d15e9beadd0"></a>

#### `public  `[`DECLARE_RH_DELEGATE_BLOCK`](#group__Match_1ga29313d5c3a4e7d99162d33ac3e7a692d)`(FRH_OnMatchSegmentUpdateCompleteDelegateBlock,FRH_OnMatchSegmentUpdateCompleteDelegate,FRH_OnMatchSegmentUpdateCompleteDynamicDelegate,bool,const `[`FRHAPI_MatchSegmentWithPlayers`](models/RHAPI_MatchSegmentWithPlayers.md#structFRHAPI__MatchSegmentWithPlayers)` &,const `[`FRH_ErrorInfo`](Common.md#structFRH__ErrorInfo)` &)` <a id="group__Match_1ga29313d5c3a4e7d99162d33ac3e7a692d"></a>

## struct `FRH_MatchSearchParams` <a id="structFRH__MatchSearchParams"></a>

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------

#### Members

## struct `FRH_MatchSearchResult` <a id="structFRH__MatchSearchResult"></a>

Struct containint the results of a Session Browser search.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------

#### Members

