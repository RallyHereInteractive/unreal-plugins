# group `Match` <a id="group__Match"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
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
`class `[`URH_MatchSubsystem`](#classURH__MatchSubsystem) | Match Subsystem used for match API calls.
`struct `[`FRH_MatchSearchParams`](#structFRH__MatchSearchParams) | 
`struct `[`FRH_MatchSearchResult`](#structFRH__MatchSearchResult) | Struct containint the results of a Session Browser search.

## Members

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

## class `URH_MatchSubsystem` <a id="classURH__MatchSubsystem"></a>

```
class URH_MatchSubsystem
  : public URH_GameInstanceSubsystemPlugin
```

Match Subsystem used for match API calls.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`bIgnoreCache`](#classURH__MatchSubsystem_1acb0a1a94ae35e70fbec6f43cae7aca82) | 
`public bool const FRH_OnMatchLookupCompleteDynamicDelegate & `[`Delegate`](#classURH__MatchSubsystem_1ad5da2a0291b9d3a8c6213f724938c587) | 
`public virtual void `[`Initialize`](#classURH__MatchSubsystem_1a6537937c7ca640348c2a564c1e17f3dc)`()` | Initialize the subsystem.
`public virtual void `[`Deinitialize`](#classURH__MatchSubsystem_1ab7136837d1d9bf468d9be59cc33463b7)`()` | Safely tears down the subsystem.
`public virtual void `[`SearchMatches`](#classURH__MatchSubsystem_1a23248c4305bc3aa2a6dfc4ef3aa93573)`(const `[`FRH_MatchSearchParams`](Match.md#structFRH__MatchSearchParams)` & params,const FRH_OnMatchSearchCompleteDelegateBlock & Delegate)` | Search for Matches.
`public virtual void `[`GetMatchAsync`](#classURH__MatchSubsystem_1ac5d211f2d31af98c42373828fad8d86b)`(const FString & MatchId,bool bIgnoreCache,const FRH_OnMatchLookupCompleteDelegateBlock & Delegate)` | Lookup a specific match.
`public inline bool `[`GetMatch`](#classURH__MatchSubsystem_1a893610997366c15dd53fa65e311ce1b8)`(const FString & MatchId,`[`FRHAPI_MatchWithPlayers`](models/RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` & OutMatch)` | Lookup a specific match from the cache.
`public inline const TMap< FString, `[`FRHAPI_MatchWithPlayers`](models/RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & `[`GetAllMatches`](#classURH__MatchSubsystem_1a051681ea68418192d99aaffe1264b258)`() const` | Get all matches from the cache.
`public inline void `[`ClearMatchesCache`](#classURH__MatchSubsystem_1abad303e288ec2208c57861a2c449b17b)`()` | Clear the match cache.
`public inline virtual const FString `[`GetActiveMatchId`](#classURH__MatchSubsystem_1ae1c52d179cfaab95d435d7e4c05b756c)`() const` | Get the active match ID.
`public inline virtual void `[`SetActiveMatchId`](#classURH__MatchSubsystem_1a763cfebaad6b8e6e884e8beda81b862e)`(const FString & MatchId)` | Set the active match.
`public inline virtual bool `[`HasActiveMatchId`](#classURH__MatchSubsystem_1ae991c30b43b4dec38b4ed4fd5421928a)`() const` | Gets whether the active match exists.
`public inline virtual void `[`ClearActiveMatchId`](#classURH__MatchSubsystem_1ae32c11a820e23c6048777b0c06435920)`()` | Clears the active match.
`public virtual void `[`CreateMatch`](#classURH__MatchSubsystem_1a88ae0bc379ecc672dff718686ca8887b)`(const `[`FRHAPI_MatchRequest`](models/RHAPI_MatchRequest.md#structFRHAPI__MatchRequest)` & Match,bool bSetActive,const FRH_OnMatchUpdateCompleteDelegateBlock & Delegate)` | Create a match (POST)
`public virtual void `[`UpdateMatch`](#classURH__MatchSubsystem_1a3300d745ccd6c04a28a76895dfd7a6fd)`(const FString & MatchId,const `[`FRHAPI_MatchRequest`](models/RHAPI_MatchRequest.md#structFRHAPI__MatchRequest)` & Match,const FRH_OnMatchUpdateCompleteDelegateBlock & Delegate)` | Update a match (PATCH)
`public virtual void `[`UpdateMatchPlayer`](#classURH__MatchSubsystem_1a920e474a59dcdd94bc07bf58fc71f710)`(const FString & MatchId,const FGuid & PlayerId,const `[`FRHAPI_MatchPlayerRequest`](models/RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` & Player,const FRH_OnMatchPlayerUpdateCompleteDelegateBlock & Delegate)` | Update a player in a match (PATCH w/ UPSERT)
`protected TMap< FString, `[`FRHAPI_MatchWithPlayers`](models/RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > `[`MatchesCache`](#classURH__MatchSubsystem_1af6ae949b60bac5983489fe295a5b914a) | 
`protected TOptional< FString > `[`ActiveMatchId`](#classURH__MatchSubsystem_1aa6948be8c609b94e612435f7b0767e7b) | The last match created with bSetActive = true, for ease of use.

### Members

#### `public bool `[`bIgnoreCache`](#classURH__MatchSubsystem_1acb0a1a94ae35e70fbec6f43cae7aca82) <a id="classURH__MatchSubsystem_1acb0a1a94ae35e70fbec6f43cae7aca82"></a>

#### `public bool const FRH_OnMatchLookupCompleteDynamicDelegate & `[`Delegate`](#classURH__MatchSubsystem_1ad5da2a0291b9d3a8c6213f724938c587) <a id="classURH__MatchSubsystem_1ad5da2a0291b9d3a8c6213f724938c587"></a>

#### `public virtual void `[`Initialize`](#classURH__MatchSubsystem_1a6537937c7ca640348c2a564c1e17f3dc)`()` <a id="classURH__MatchSubsystem_1a6537937c7ca640348c2a564c1e17f3dc"></a>

Initialize the subsystem.

#### `public virtual void `[`Deinitialize`](#classURH__MatchSubsystem_1ab7136837d1d9bf468d9be59cc33463b7)`()` <a id="classURH__MatchSubsystem_1ab7136837d1d9bf468d9be59cc33463b7"></a>

Safely tears down the subsystem.

#### `public virtual void `[`SearchMatches`](#classURH__MatchSubsystem_1a23248c4305bc3aa2a6dfc4ef3aa93573)`(const `[`FRH_MatchSearchParams`](Match.md#structFRH__MatchSearchParams)` & params,const FRH_OnMatchSearchCompleteDelegateBlock & Delegate)` <a id="classURH__MatchSubsystem_1a23248c4305bc3aa2a6dfc4ef3aa93573"></a>

Search for Matches.

#### Parameters
* `params` The search params to use for the given search. 

* `Delegate` Callback with the results of the search.

#### `public virtual void `[`GetMatchAsync`](#classURH__MatchSubsystem_1ac5d211f2d31af98c42373828fad8d86b)`(const FString & MatchId,bool bIgnoreCache,const FRH_OnMatchLookupCompleteDelegateBlock & Delegate)` <a id="classURH__MatchSubsystem_1ac5d211f2d31af98c42373828fad8d86b"></a>

Lookup a specific match.

#### `public inline bool `[`GetMatch`](#classURH__MatchSubsystem_1a893610997366c15dd53fa65e311ce1b8)`(const FString & MatchId,`[`FRHAPI_MatchWithPlayers`](models/RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` & OutMatch)` <a id="classURH__MatchSubsystem_1a893610997366c15dd53fa65e311ce1b8"></a>

Lookup a specific match from the cache.

#### `public inline const TMap< FString, `[`FRHAPI_MatchWithPlayers`](models/RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > & `[`GetAllMatches`](#classURH__MatchSubsystem_1a051681ea68418192d99aaffe1264b258)`() const` <a id="classURH__MatchSubsystem_1a051681ea68418192d99aaffe1264b258"></a>

Get all matches from the cache.

#### `public inline void `[`ClearMatchesCache`](#classURH__MatchSubsystem_1abad303e288ec2208c57861a2c449b17b)`()` <a id="classURH__MatchSubsystem_1abad303e288ec2208c57861a2c449b17b"></a>

Clear the match cache.

#### `public inline virtual const FString `[`GetActiveMatchId`](#classURH__MatchSubsystem_1ae1c52d179cfaab95d435d7e4c05b756c)`() const` <a id="classURH__MatchSubsystem_1ae1c52d179cfaab95d435d7e4c05b756c"></a>

Get the active match ID.

#### `public inline virtual void `[`SetActiveMatchId`](#classURH__MatchSubsystem_1a763cfebaad6b8e6e884e8beda81b862e)`(const FString & MatchId)` <a id="classURH__MatchSubsystem_1a763cfebaad6b8e6e884e8beda81b862e"></a>

Set the active match.

#### `public inline virtual bool `[`HasActiveMatchId`](#classURH__MatchSubsystem_1ae991c30b43b4dec38b4ed4fd5421928a)`() const` <a id="classURH__MatchSubsystem_1ae991c30b43b4dec38b4ed4fd5421928a"></a>

Gets whether the active match exists.

#### `public inline virtual void `[`ClearActiveMatchId`](#classURH__MatchSubsystem_1ae32c11a820e23c6048777b0c06435920)`()` <a id="classURH__MatchSubsystem_1ae32c11a820e23c6048777b0c06435920"></a>

Clears the active match.

#### `public virtual void `[`CreateMatch`](#classURH__MatchSubsystem_1a88ae0bc379ecc672dff718686ca8887b)`(const `[`FRHAPI_MatchRequest`](models/RHAPI_MatchRequest.md#structFRHAPI__MatchRequest)` & Match,bool bSetActive,const FRH_OnMatchUpdateCompleteDelegateBlock & Delegate)` <a id="classURH__MatchSubsystem_1a88ae0bc379ecc672dff718686ca8887b"></a>

Create a match (POST)

#### Parameters
* `Match` The match to create 

* `Players` The players to add to the match 

* `bSetActiveMatchId` Whether to set the match as the active match 

* `Delegate` Callback with the results of the match creation

#### `public virtual void `[`UpdateMatch`](#classURH__MatchSubsystem_1a3300d745ccd6c04a28a76895dfd7a6fd)`(const FString & MatchId,const `[`FRHAPI_MatchRequest`](models/RHAPI_MatchRequest.md#structFRHAPI__MatchRequest)` & Match,const FRH_OnMatchUpdateCompleteDelegateBlock & Delegate)` <a id="classURH__MatchSubsystem_1a3300d745ccd6c04a28a76895dfd7a6fd"></a>

Update a match (PATCH)

#### Parameters
* `MatchId` The match to update 

* `Match` The match to update 

* `Delegate` Callback with the results of the match update

#### `public virtual void `[`UpdateMatchPlayer`](#classURH__MatchSubsystem_1a920e474a59dcdd94bc07bf58fc71f710)`(const FString & MatchId,const FGuid & PlayerId,const `[`FRHAPI_MatchPlayerRequest`](models/RHAPI_MatchPlayerRequest.md#structFRHAPI__MatchPlayerRequest)` & Player,const FRH_OnMatchPlayerUpdateCompleteDelegateBlock & Delegate)` <a id="classURH__MatchSubsystem_1a920e474a59dcdd94bc07bf58fc71f710"></a>

Update a player in a match (PATCH w/ UPSERT)

#### Parameters
* `MatchId` The match to update 

* `PlayerId` The player id to update 

* `Player` The player data request to update 

* `Delegate` Callback with the results of the player update

#### `protected TMap< FString, `[`FRHAPI_MatchWithPlayers`](models/RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > `[`MatchesCache`](#classURH__MatchSubsystem_1af6ae949b60bac5983489fe295a5b914a) <a id="classURH__MatchSubsystem_1af6ae949b60bac5983489fe295a5b914a"></a>

#### `protected TOptional< FString > `[`ActiveMatchId`](#classURH__MatchSubsystem_1aa6948be8c609b94e612435f7b0767e7b) <a id="classURH__MatchSubsystem_1aa6948be8c609b94e612435f7b0767e7b"></a>

The last match created with bSetActive = true, for ease of use.

## struct `FRH_MatchSearchParams` <a id="structFRH__MatchSearchParams"></a>

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`PageSize`](#structFRH__MatchSearchParams_1a8787383b63243d3a16b363172f116059) | The maximum number of elements to be returned per call, ignored if 0.
`public FString `[`InstanceId`](#structFRH__MatchSearchParams_1a3b8290d856ba2e6a36a18803b17fa3d4) | The instance id to search on, ignored if empty.
`public FString `[`AllocationId`](#structFRH__MatchSearchParams_1afab9d86f6410284ea4ba2e83d58d1b6b) | The allocation id to search on, ignored if empty.
`public FString `[`SessionId`](#structFRH__MatchSearchParams_1a42a4fd664ccf349ebb36eaec862c9133) | The session id to search on, ignored if empty.
`public FString `[`HostPlayerUuid`](#structFRH__MatchSearchParams_1a067924a1c1a542270163b0ba5b9ca541) | The host player id to search on, ignored if empty.
`public FString `[`RegionId`](#structFRH__MatchSearchParams_1a8874651d0cadc4ed51898c0987be697a) | The region id to search on, ignored if empty.
`public FString `[`PlayerUuid`](#structFRH__MatchSearchParams_1a08a9351cd2ac8f2483e0e49c44b286f1) | The participant player id to search on, ignored if empty.
`public bool `[`bIncludeSegments`](#structFRH__MatchSearchParams_1aa71b2ea4e11d1a945dbcd4e96498d3a0) | Whether to include segments in the search results.
`public bool `[`bIncludePlayers`](#structFRH__MatchSearchParams_1aaab82b65d09567a6bbc4cb9a622b4a42) | Whether to include players in the search results.
`public FString `[`Cursor`](#structFRH__MatchSearchParams_1a2b3af805c98580faddaa3495131c2eb6) | Cursor to designate where you are in iterating through values. Start with '0', and pass this on subsequent calls to continue iteration.
`public inline  `[`FRH_MatchSearchParams`](#structFRH__MatchSearchParams_1a703357c85c089fd0675e83eaa69ca12c)`()` | 
`public inline FString `[`GetDescription`](#structFRH__MatchSearchParams_1a682aada2005d21246404e340217c4229)`() const` | Returns summary of params for tooling/logging.
`public inline bool `[`CanCacheResults`](#structFRH__MatchSearchParams_1ac35b105d1aeafb1c9adfceeeb3e018bb)`() const` | 
`public inline RallyHereAPI::FRequest_GetMatches `[`ToAPIRequest`](#structFRH__MatchSearchParams_1ad113cf34700d56985d289eebde6e4218)`(FAuthContextPtr AuthContext) const` | Converts the search params to an API request.

### Members

#### `public int32 `[`PageSize`](#structFRH__MatchSearchParams_1a8787383b63243d3a16b363172f116059) <a id="structFRH__MatchSearchParams_1a8787383b63243d3a16b363172f116059"></a>

The maximum number of elements to be returned per call, ignored if 0.

#### `public FString `[`InstanceId`](#structFRH__MatchSearchParams_1a3b8290d856ba2e6a36a18803b17fa3d4) <a id="structFRH__MatchSearchParams_1a3b8290d856ba2e6a36a18803b17fa3d4"></a>

The instance id to search on, ignored if empty.

#### `public FString `[`AllocationId`](#structFRH__MatchSearchParams_1afab9d86f6410284ea4ba2e83d58d1b6b) <a id="structFRH__MatchSearchParams_1afab9d86f6410284ea4ba2e83d58d1b6b"></a>

The allocation id to search on, ignored if empty.

#### `public FString `[`SessionId`](#structFRH__MatchSearchParams_1a42a4fd664ccf349ebb36eaec862c9133) <a id="structFRH__MatchSearchParams_1a42a4fd664ccf349ebb36eaec862c9133"></a>

The session id to search on, ignored if empty.

#### `public FString `[`HostPlayerUuid`](#structFRH__MatchSearchParams_1a067924a1c1a542270163b0ba5b9ca541) <a id="structFRH__MatchSearchParams_1a067924a1c1a542270163b0ba5b9ca541"></a>

The host player id to search on, ignored if empty.

#### `public FString `[`RegionId`](#structFRH__MatchSearchParams_1a8874651d0cadc4ed51898c0987be697a) <a id="structFRH__MatchSearchParams_1a8874651d0cadc4ed51898c0987be697a"></a>

The region id to search on, ignored if empty.

#### `public FString `[`PlayerUuid`](#structFRH__MatchSearchParams_1a08a9351cd2ac8f2483e0e49c44b286f1) <a id="structFRH__MatchSearchParams_1a08a9351cd2ac8f2483e0e49c44b286f1"></a>

The participant player id to search on, ignored if empty.

#### `public bool `[`bIncludeSegments`](#structFRH__MatchSearchParams_1aa71b2ea4e11d1a945dbcd4e96498d3a0) <a id="structFRH__MatchSearchParams_1aa71b2ea4e11d1a945dbcd4e96498d3a0"></a>

Whether to include segments in the search results.

#### `public bool `[`bIncludePlayers`](#structFRH__MatchSearchParams_1aaab82b65d09567a6bbc4cb9a622b4a42) <a id="structFRH__MatchSearchParams_1aaab82b65d09567a6bbc4cb9a622b4a42"></a>

Whether to include players in the search results.

#### `public FString `[`Cursor`](#structFRH__MatchSearchParams_1a2b3af805c98580faddaa3495131c2eb6) <a id="structFRH__MatchSearchParams_1a2b3af805c98580faddaa3495131c2eb6"></a>

Cursor to designate where you are in iterating through values. Start with '0', and pass this on subsequent calls to continue iteration.

#### `public inline  `[`FRH_MatchSearchParams`](#structFRH__MatchSearchParams_1a703357c85c089fd0675e83eaa69ca12c)`()` <a id="structFRH__MatchSearchParams_1a703357c85c089fd0675e83eaa69ca12c"></a>

#### `public inline FString `[`GetDescription`](#structFRH__MatchSearchParams_1a682aada2005d21246404e340217c4229)`() const` <a id="structFRH__MatchSearchParams_1a682aada2005d21246404e340217c4229"></a>

Returns summary of params for tooling/logging.

#### `public inline bool `[`CanCacheResults`](#structFRH__MatchSearchParams_1ac35b105d1aeafb1c9adfceeeb3e018bb)`() const` <a id="structFRH__MatchSearchParams_1ac35b105d1aeafb1c9adfceeeb3e018bb"></a>

#### `public inline RallyHereAPI::FRequest_GetMatches `[`ToAPIRequest`](#structFRH__MatchSearchParams_1ad113cf34700d56985d289eebde6e4218)`(FAuthContextPtr AuthContext) const` <a id="structFRH__MatchSearchParams_1ad113cf34700d56985d289eebde6e4218"></a>

Converts the search params to an API request.

## struct `FRH_MatchSearchResult` <a id="structFRH__MatchSearchResult"></a>

Struct containint the results of a Session Browser search.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`FRH_MatchSearchParams`](Match.md#structFRH__MatchSearchParams)` `[`SearchParams`](#structFRH__MatchSearchResult_1adf2167b41ab7c4f438765469795bf37f) | The paramaters used to make the search.
`public TArray< `[`FRHAPI_MatchWithPlayers`](models/RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > `[`Matches`](#structFRH__MatchSearchResult_1a65d812c0001cff68673e346aa6a92668) | Array of match results found by the search.
`public FString `[`NextPageCursor`](#structFRH__MatchSearchResult_1a9af3fac4e20d12feb4851116cbfbc8f2) | Cursor to use to request the next page of data.
`public inline FString `[`GetDescription`](#structFRH__MatchSearchResult_1a3f3d4d70bda7f129f5d84ed5a695a309)`() const` | Returns summary of search results for tooling/logging.
`public inline  `[`FRH_MatchSearchResult`](#structFRH__MatchSearchResult_1a44c964332575fef90c49b48a0cb0b6d1)`()` | 

### Members

#### `public `[`FRH_MatchSearchParams`](Match.md#structFRH__MatchSearchParams)` `[`SearchParams`](#structFRH__MatchSearchResult_1adf2167b41ab7c4f438765469795bf37f) <a id="structFRH__MatchSearchResult_1adf2167b41ab7c4f438765469795bf37f"></a>

The paramaters used to make the search.

#### `public TArray< `[`FRHAPI_MatchWithPlayers`](models/RHAPI_MatchWithPlayers.md#structFRHAPI__MatchWithPlayers)` > `[`Matches`](#structFRH__MatchSearchResult_1a65d812c0001cff68673e346aa6a92668) <a id="structFRH__MatchSearchResult_1a65d812c0001cff68673e346aa6a92668"></a>

Array of match results found by the search.

#### `public FString `[`NextPageCursor`](#structFRH__MatchSearchResult_1a9af3fac4e20d12feb4851116cbfbc8f2) <a id="structFRH__MatchSearchResult_1a9af3fac4e20d12feb4851116cbfbc8f2"></a>

Cursor to use to request the next page of data.

#### `public inline FString `[`GetDescription`](#structFRH__MatchSearchResult_1a3f3d4d70bda7f129f5d84ed5a695a309)`() const` <a id="structFRH__MatchSearchResult_1a3f3d4d70bda7f129f5d84ed5a695a309"></a>

Returns summary of search results for tooling/logging.

#### `public inline  `[`FRH_MatchSearchResult`](#structFRH__MatchSearchResult_1a44c964332575fef90c49b48a0cb0b6d1)`()` <a id="structFRH__MatchSearchResult_1a44c964332575fef90c49b48a0cb0b6d1"></a>

