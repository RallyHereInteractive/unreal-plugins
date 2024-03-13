---
title: FRH_DeferredSessionPoll Struct
---
Poll for deferred sessions.

## Summary
| Kind | View | Description |
|------|------|-------------|
|enum|[Type](/unreal-plugins/all/structfrh__deferredsessionpoll/#structFRH__DeferredSessionPoll_1aea2383ee336ab25c2f43466ea767a4b1)||
|Type|[PollType](/unreal-plugins/all/structfrh__deferredsessionpoll/#structFRH__DeferredSessionPoll_1a1b6e4728b244a5a51a57a24f9b7980f7)||
|FRH_PollCompleteFunc|[Delegate](/unreal-plugins/all/structfrh__deferredsessionpoll/#structFRH__DeferredSessionPoll_1a27e856ce05ca57fb9cf98762fd5ee931)||
|TOptional< FString >|[ETag](/unreal-plugins/all/structfrh__deferredsessionpoll/#structFRH__DeferredSessionPoll_1a1cf5a6766199ca4c859b30dff02f99e9)||
||[FRH_DeferredSessionPoll](/unreal-plugins/all/structfrh__deferredsessionpoll/#structFRH__DeferredSessionPoll_1af7f09aea5ebde9c12e52431272c8470b)(Type InPollType, const FRH_PollCompleteFunc & InDelegate, const TOptional< FString > & InETag)||
## Public Types




### `Type` <a id="structFRH__DeferredSessionPoll_1aea2383ee336ab25c2f43466ea767a4b1"></a>




| Enumerator | Initializer|
|------------|------------|
|`Forced`|``|
|`Modification`|``|
|`Notification`|``|



## Public Attributes



### `PollType` <a id="structFRH__DeferredSessionPoll_1a1b6e4728b244a5a51a57a24f9b7980f7"></a>

`Type FRH_DeferredSessionPoll::PollType`






### `Delegate` <a id="structFRH__DeferredSessionPoll_1a27e856ce05ca57fb9cf98762fd5ee931"></a>

`FRH_PollCompleteFunc FRH_DeferredSessionPoll::Delegate`






### `ETag` <a id="structFRH__DeferredSessionPoll_1a1cf5a6766199ca4c859b30dff02f99e9"></a>

`TOptional<FString> FRH_DeferredSessionPoll::ETag`







## Public Functions



### `FRH_DeferredSessionPoll` <a id="structFRH__DeferredSessionPoll_1af7f09aea5ebde9c12e52431272c8470b"></a>

 FRH_DeferredSessionPoll(Type InPollType, const FRH_PollCompleteFunc & InDelegate, const TOptional< FString > & InETag)

#### Parameters

| Type | Name |
|------|------|
|Type|InPollType|
|const FRH_PollCompleteFunc &|InDelegate|
|const TOptional< FString > &|InETag|

#### Description







