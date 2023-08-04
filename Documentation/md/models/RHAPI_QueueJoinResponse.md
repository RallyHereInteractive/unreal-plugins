# RHAPI_QueueJoinResponse <a id="group__RHAPI__QueueJoinResponse"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_QueueJoinResponse`](#structFRHAPI__QueueJoinResponse) | 

## struct `FRHAPI_QueueJoinResponse` <a id="structFRHAPI__QueueJoinResponse"></a>

```
struct FRHAPI_QueueJoinResponse
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`TicketId`](#structFRHAPI__QueueJoinResponse_1af954b4ff6c24fb605858abbbe004cd09) | ID for the newly created match making ticket.
`public virtual bool `[`FromJson`](#structFRHAPI__QueueJoinResponse_1ac69bae370529d22ff9c45e2820ca3192)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__QueueJoinResponse_1a573b18b3ab3a3820c0f6b84091c5db02)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetTicketId`](#structFRHAPI__QueueJoinResponse_1ab0e3d2d5d43f96c58aa1f1e49d1be733)`()` | Gets the value of TicketId.
`public inline const FString & `[`GetTicketId`](#structFRHAPI__QueueJoinResponse_1a8a65bbb1fee3afbadcc529088774aabe)`() const` | Gets the value of TicketId.
`public inline void `[`SetTicketId`](#structFRHAPI__QueueJoinResponse_1a4efeb4ee24a01173a12baaa33d358cdd)`(FString NewValue)` | Sets the value of TicketId.

#### Members

#### `public FString `[`TicketId`](#structFRHAPI__QueueJoinResponse_1af954b4ff6c24fb605858abbbe004cd09) <a id="structFRHAPI__QueueJoinResponse_1af954b4ff6c24fb605858abbbe004cd09"></a>

ID for the newly created match making ticket.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__QueueJoinResponse_1ac69bae370529d22ff9c45e2820ca3192)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__QueueJoinResponse_1ac69bae370529d22ff9c45e2820ca3192"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__QueueJoinResponse_1a573b18b3ab3a3820c0f6b84091c5db02)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__QueueJoinResponse_1a573b18b3ab3a3820c0f6b84091c5db02"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetTicketId`](#structFRHAPI__QueueJoinResponse_1ab0e3d2d5d43f96c58aa1f1e49d1be733)`()` <a id="structFRHAPI__QueueJoinResponse_1ab0e3d2d5d43f96c58aa1f1e49d1be733"></a>

Gets the value of TicketId.

<br>
#### `public inline const FString & `[`GetTicketId`](#structFRHAPI__QueueJoinResponse_1a8a65bbb1fee3afbadcc529088774aabe)`() const` <a id="structFRHAPI__QueueJoinResponse_1a8a65bbb1fee3afbadcc529088774aabe"></a>

Gets the value of TicketId.

<br>
#### `public inline void `[`SetTicketId`](#structFRHAPI__QueueJoinResponse_1a4efeb4ee24a01173a12baaa33d358cdd)`(FString NewValue)` <a id="structFRHAPI__QueueJoinResponse_1a4efeb4ee24a01173a12baaa33d358cdd"></a>

Sets the value of TicketId.

<br>
