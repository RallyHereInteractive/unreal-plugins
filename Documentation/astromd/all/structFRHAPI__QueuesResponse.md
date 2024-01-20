---
title: FRHAPI_QueuesResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

DEPRECATED - A list of configuration about queues.

## Summary
| Kind | View | Description |
|------|------|-------------|
|TArray< [FRHAPI_QueueConfig](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig) >|[Queues](/unreal-plugins/all/structfrhapi__queuesresponse/#structFRHAPI__QueuesResponse_1a53242423e1b15a69a599d22a44d5278b)|List of queues.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__queuesresponse/#structFRHAPI__QueuesResponse_1a98ca32e4913ca7eb9f1ccb5e4857ff8c)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__queuesresponse/#structFRHAPI__QueuesResponse_1a289b372fa0e1ddbd7d273cd30e49cfeb)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|TArray< [FRHAPI_QueueConfig](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig) > &|[GetQueues](/unreal-plugins/all/structfrhapi__queuesresponse/#structFRHAPI__QueuesResponse_1ad64eb9a9701424f3d57c6345f22936d2)()|Gets the value of Queues.|
|const TArray< [FRHAPI_QueueConfig](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig) > &|[GetQueues](/unreal-plugins/all/structfrhapi__queuesresponse/#structFRHAPI__QueuesResponse_1abbf9ad5940f96346c4b7d96441f6550a)()|Gets the value of Queues.|
|void|[SetQueues](/unreal-plugins/all/structfrhapi__queuesresponse/#structFRHAPI__QueuesResponse_1a405af745b536fbbd0005a21b77d8ede3)(TArray< [FRHAPI_QueueConfig](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig) > NewValue)|Sets the value of Queues.|
## Public Attributes



### `Queues` <a id="structFRHAPI__QueuesResponse_1a53242423e1b15a69a599d22a44d5278b"></a>

`TArray<FRHAPI_QueueConfig> FRHAPI_QueuesResponse::Queues`

List of queues.





## Public Functions



### `FromJson` <a id="structFRHAPI__QueuesResponse_1a98ca32e4913ca7eb9f1ccb5e4857ff8c"></a>

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



### `WriteJson` <a id="structFRHAPI__QueuesResponse_1a289b372fa0e1ddbd7d273cd30e49cfeb"></a>

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



### `GetQueues` <a id="structFRHAPI__QueuesResponse_1ad64eb9a9701424f3d57c6345f22936d2"></a>

TArray< [FRHAPI_QueueConfig](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig) > & GetQueues()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Queues.




### `GetQueues` <a id="structFRHAPI__QueuesResponse_1abbf9ad5940f96346c4b7d96441f6550a"></a>

const TArray< [FRHAPI_QueueConfig](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig) > & GetQueues()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Queues.




### `SetQueues` <a id="structFRHAPI__QueuesResponse_1a405af745b536fbbd0005a21b77d8ede3"></a>

void SetQueues(TArray< [FRHAPI_QueueConfig](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig) > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TArray< [FRHAPI_QueueConfig](/unreal-plugins/all/structfrhapi__queueconfig/#structFRHAPI__QueueConfig) >|NewValue|

#### Description

Sets the value of Queues.





