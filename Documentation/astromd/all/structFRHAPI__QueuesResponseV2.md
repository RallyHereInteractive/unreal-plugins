---
title: FRHAPI_QueuesResponseV2 Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A list of configuration about queues.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_QueueConfigV2](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2) >|[Queues](/unreal-plugins/all/structfrhapi__queuesresponsev2/#structFRHAPI__QueuesResponseV2_1aeed6d70e3ffa1037df56c9526e6b9777)|List of queues.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__queuesresponsev2/#structFRHAPI__QueuesResponseV2_1a3547f56614329b77b81c2dcf8a411570)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__queuesresponsev2/#structFRHAPI__QueuesResponseV2_1a49c9ce634a9103e83ab3aacf8393fa75)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_QueueConfigV2](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2) > &|[GetQueues](/unreal-plugins/all/structfrhapi__queuesresponsev2/#structFRHAPI__QueuesResponseV2_1abb321e52232f0bc6d94b28451e4c9550)()|Gets the value of Queues.|
|const TArray< [FRHAPI_QueueConfigV2](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2) > &|[GetQueues](/unreal-plugins/all/structfrhapi__queuesresponsev2/#structFRHAPI__QueuesResponseV2_1a3d7675d6083b26d4b9d4a728846c365a)()|Gets the value of Queues.|
|void|[SetQueues](/unreal-plugins/all/structfrhapi__queuesresponsev2/#structFRHAPI__QueuesResponseV2_1a8dfac168821c99dbf5b63a5d496b868b)(TArray< [FRHAPI_QueueConfigV2](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2) > NewValue)|Sets the value of Queues.|
## Public Attributes



### `Queues` <a id="structFRHAPI__QueuesResponseV2_1aeed6d70e3ffa1037df56c9526e6b9777"></a>

`TArray<FRHAPI_QueueConfigV2> FRHAPI_QueuesResponseV2::Queues`

List of queues.





## Public Functions



### `FromJson` <a id="structFRHAPI__QueuesResponseV2_1a3547f56614329b77b81c2dcf8a411570"></a>

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



### `WriteJson` <a id="structFRHAPI__QueuesResponseV2_1a49c9ce634a9103e83ab3aacf8393fa75"></a>

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



### `GetQueues` <a id="structFRHAPI__QueuesResponseV2_1abb321e52232f0bc6d94b28451e4c9550"></a>

TArray< [FRHAPI_QueueConfigV2](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2) > & GetQueues()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Queues.




### `GetQueues` <a id="structFRHAPI__QueuesResponseV2_1a3d7675d6083b26d4b9d4a728846c365a"></a>

const TArray< [FRHAPI_QueueConfigV2](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2) > & GetQueues()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Queues.




### `SetQueues` <a id="structFRHAPI__QueuesResponseV2_1a8dfac168821c99dbf5b63a5d496b868b"></a>

void SetQueues(TArray< [FRHAPI_QueueConfigV2](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_QueueConfigV2](/unreal-plugins/all/structfrhapi__queueconfigv2/#structFRHAPI__QueueConfigV2) >|NewValue|

#### Description

Sets the value of Queues.





