---
title: FRHAPI_QueueJoinResponse Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A response for successfully joining a matchmaking queue.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FString|[TicketId](/unreal-plugins/all/structfrhapi__queuejoinresponse/#structFRHAPI__QueueJoinResponse_1af954b4ff6c24fb605858abbbe004cd09)|ID for the newly created match making ticket.|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__queuejoinresponse/#structFRHAPI__QueueJoinResponse_1ac69bae370529d22ff9c45e2820ca3192)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__queuejoinresponse/#structFRHAPI__QueueJoinResponse_1a573b18b3ab3a3820c0f6b84091c5db02)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|FString &|[GetTicketId](/unreal-plugins/all/structfrhapi__queuejoinresponse/#structFRHAPI__QueueJoinResponse_1ab0e3d2d5d43f96c58aa1f1e49d1be733)()|Gets the value of TicketId.|
|const FString &|[GetTicketId](/unreal-plugins/all/structfrhapi__queuejoinresponse/#structFRHAPI__QueueJoinResponse_1a8a65bbb1fee3afbadcc529088774aabe)()|Gets the value of TicketId.|
|void|[SetTicketId](/unreal-plugins/all/structfrhapi__queuejoinresponse/#structFRHAPI__QueueJoinResponse_1a4efeb4ee24a01173a12baaa33d358cdd)(FString NewValue)|Sets the value of TicketId.|
## Public Attributes



### `TicketId` <a id="structFRHAPI__QueueJoinResponse_1af954b4ff6c24fb605858abbbe004cd09"></a>

`FString FRHAPI_QueueJoinResponse::TicketId`

ID for the newly created match making ticket.





## Public Functions



### `FromJson` <a id="structFRHAPI__QueueJoinResponse_1ac69bae370529d22ff9c45e2820ca3192"></a>

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



### `WriteJson` <a id="structFRHAPI__QueueJoinResponse_1a573b18b3ab3a3820c0f6b84091c5db02"></a>

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



### `GetTicketId` <a id="structFRHAPI__QueueJoinResponse_1ab0e3d2d5d43f96c58aa1f1e49d1be733"></a>

FString & GetTicketId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TicketId.




### `GetTicketId` <a id="structFRHAPI__QueueJoinResponse_1a8a65bbb1fee3afbadcc529088774aabe"></a>

const FString & GetTicketId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of TicketId.




### `SetTicketId` <a id="structFRHAPI__QueueJoinResponse_1a4efeb4ee24a01173a12baaa33d358cdd"></a>

void SetTicketId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of TicketId.





