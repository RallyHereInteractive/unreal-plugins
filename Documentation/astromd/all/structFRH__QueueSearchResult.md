---
title: FRH_QueueSearchResult Struct
---
Struct to define queue search results.

## Summary
| Kind | View | Description |
|------|------|-------------|
|[FRH_QueueSearchParams](/unreal-plugins/all/structfrh__queuesearchparams/#structFRH__QueueSearchParams)|[SearchParams](/unreal-plugins/all/structfrh__queuesearchresult/#structFRH__QueueSearchResult_1a690d7d697549e4bd88c191e32919f2e8)|The params used to make the search request.|
|TArray< TWeakObjectPtr< [URH_MatchmakingQueueInfo](/unreal-plugins/all/classurh__matchmakingqueueinfo/#classURH__MatchmakingQueueInfo) > >|[Queues](/unreal-plugins/all/structfrh__queuesearchresult/#structFRH__QueueSearchResult_1a243723e5fdb3745da96443fd62daf81f)|The queues returned by the search request.|
|FString|[GetDescription](/unreal-plugins/all/structfrh__queuesearchresult/#structFRH__QueueSearchResult_1ad218a7fbea6c2538e743d78b29084aba)()|Gets a description of the search result for debugging.|
## Public Attributes



### `SearchParams` <a id="structFRH__QueueSearchResult_1a690d7d697549e4bd88c191e32919f2e8"></a>

`FRH_QueueSearchParams FRH_QueueSearchResult::SearchParams`

The params used to make the search request.




### `Queues` <a id="structFRH__QueueSearchResult_1a243723e5fdb3745da96443fd62daf81f"></a>

`TArray<TWeakObjectPtr<URH_MatchmakingQueueInfo> > FRH_QueueSearchResult::Queues`

The queues returned by the search request.





## Public Functions



### `GetDescription` <a id="structFRH__QueueSearchResult_1ad218a7fbea6c2538e743d78b29084aba"></a>

FString GetDescription()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets a description of the search result for debugging.





