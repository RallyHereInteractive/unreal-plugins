---
title: URH_MatchmakingQueueInfo Class
---Inherits from UObject

Class to define a matchmaking queue.

## Summary
| Kind | View | Description |
|------|------|-------------|
|[FRHAPI_QueueConfigV2](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2)|[QueueInfo](/unreal-plugins/all/classurh__matchmakingqueueinfo/#classURH__MatchmakingQueueInfo_1adc8b5c8a32a40da9087c6815347a4ae9)|The configuration of the queue.|
|FString|[ETag](/unreal-plugins/all/classurh__matchmakingqueueinfo/#classURH__MatchmakingQueueInfo_1a19ee968b480b4c4fcd397d161040203d)|ETag of last queue info update.|
|const [FRHAPI_QueueConfigV2](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2) &|[GetQueueInfo](/unreal-plugins/all/classurh__matchmakingqueueinfo/#classURH__MatchmakingQueueInfo_1ad82fa170d34736f8d053802b6460bf9e)()|Gets the queue info.|
|const FString &|[GetETag](/unreal-plugins/all/classurh__matchmakingqueueinfo/#classURH__MatchmakingQueueInfo_1a443e3173f86a4cfac34d80133ec9cf82)()|Gets the Etag for the queue info.|
|const FString &|[GetQueueId](/unreal-plugins/all/classurh__matchmakingqueueinfo/#classURH__MatchmakingQueueInfo_1a9574234af5b1efe6b08f1a5a97ddb103)()|The ID for the queue, should not be used for display purposes.|
|bool|[IsActive](/unreal-plugins/all/classurh__matchmakingqueueinfo/#classURH__MatchmakingQueueInfo_1aeadf35b8cc5df0658a86aef82094f5aa)()|Flag for whether or not the queue is active, and can be joined or sessions created from it.|
|void|[ImportAPIQueue](/unreal-plugins/all/classurh__matchmakingqueueinfo/#classURH__MatchmakingQueueInfo_1af33b1de1236961da0b910ee1710e3bc5)(const [FRHAPI_QueueConfigV2](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2) & APIQueue, const FString & InETag)|Imports queue info from an API call.|
|FString|[GetDescription](/unreal-plugins/all/classurh__matchmakingqueueinfo/#classURH__MatchmakingQueueInfo_1ae7a5d3dd461eaa68dec8dada2e9ad3df)()|Gets a description of the queue, display its id for debugging.|
## Private Attributes



### `QueueInfo` <a id="classURH__MatchmakingQueueInfo_1adc8b5c8a32a40da9087c6815347a4ae9"></a>

`FRHAPI_QueueConfigV2 URH_MatchmakingQueueInfo::QueueInfo`

The configuration of the queue.




### `ETag` <a id="classURH__MatchmakingQueueInfo_1a19ee968b480b4c4fcd397d161040203d"></a>

`FString URH_MatchmakingQueueInfo::ETag`

ETag of last queue info update.





## Public Functions



### `GetQueueInfo` <a id="classURH__MatchmakingQueueInfo_1ad82fa170d34736f8d053802b6460bf9e"></a>

const [FRHAPI_QueueConfigV2](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2) & GetQueueInfo()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the queue info.




### `GetETag` <a id="classURH__MatchmakingQueueInfo_1a443e3173f86a4cfac34d80133ec9cf82"></a>

const FString & GetETag()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Etag for the queue info.




### `GetQueueId` <a id="classURH__MatchmakingQueueInfo_1a9574234af5b1efe6b08f1a5a97ddb103"></a>

const FString & GetQueueId()

#### Parameters

| Type | Name |
|------|------|

#### Description

The ID for the queue, should not be used for display purposes.




### `IsActive` <a id="classURH__MatchmakingQueueInfo_1aeadf35b8cc5df0658a86aef82094f5aa"></a>

bool IsActive()

#### Parameters

| Type | Name |
|------|------|

#### Description

Flag for whether or not the queue is active, and can be joined or sessions created from it.




### `ImportAPIQueue` <a id="classURH__MatchmakingQueueInfo_1af33b1de1236961da0b910ee1710e3bc5"></a>

void ImportAPIQueue(const [FRHAPI_QueueConfigV2](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2) & APIQueue, const FString & InETag)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_QueueConfigV2](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2) &|APIQueue|
|const FString &|InETag|

#### Description

Imports queue info from an API call.


#### Parameters

APIQueue
: Queue info from API call. 
InETag
: ETag from API call. 



### `GetDescription` <a id="classURH__MatchmakingQueueInfo_1ae7a5d3dd461eaa68dec8dada2e9ad3df"></a>

FString GetDescription()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets a description of the queue, display its id for debugging.





