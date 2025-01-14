---
title: RHAPI_QueueJoinResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_QueueJoinResponse`](#structFRHAPI__QueueJoinResponse) | A response for successfully joining a matchmaking queue.

## struct `FRHAPI_QueueJoinResponse` <a id="structFRHAPI__QueueJoinResponse"></a>

```
struct FRHAPI_QueueJoinResponse
  : public FRHAPI_Model
```

A response for successfully joining a matchmaking queue.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`TicketId`](#structFRHAPI__QueueJoinResponse_1af954b4ff6c24fb605858abbbe004cd09) | ID for the newly created match making ticket.
`public virtual bool `[`FromJson`](#structFRHAPI__QueueJoinResponse_1a5ee6f61f890b644faa949764fecd5839)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__QueueJoinResponse_1abd6c37919b79f1b7be0a12bf36415313)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetTicketId`](#structFRHAPI__QueueJoinResponse_1a752de0e1b5c80d5aa4ad3fc5bb1b77ac)`()` | Gets the value of TicketId.
`public inline const FString & `[`GetTicketId`](#structFRHAPI__QueueJoinResponse_1a64520e48dd16f64e83f06f6f3aec9639)`() const` | Gets the value of TicketId.
`public inline void `[`SetTicketId`](#structFRHAPI__QueueJoinResponse_1ab6782823d19d4a0613d9521013c1f0ff)`(const FString & NewValue)` | Sets the value of TicketId.
`public inline void `[`SetTicketId`](#structFRHAPI__QueueJoinResponse_1a05dedf5638833d9fe9ce533c69504b17)`(FString && NewValue)` | Sets the value of TicketId using move semantics.

### Members

#### `public FString `[`TicketId`](#structFRHAPI__QueueJoinResponse_1af954b4ff6c24fb605858abbbe004cd09) <a id="structFRHAPI__QueueJoinResponse_1af954b4ff6c24fb605858abbbe004cd09"></a>

ID for the newly created match making ticket.

#### `public virtual bool `[`FromJson`](#structFRHAPI__QueueJoinResponse_1a5ee6f61f890b644faa949764fecd5839)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__QueueJoinResponse_1a5ee6f61f890b644faa949764fecd5839"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__QueueJoinResponse_1abd6c37919b79f1b7be0a12bf36415313)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__QueueJoinResponse_1abd6c37919b79f1b7be0a12bf36415313"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetTicketId`](#structFRHAPI__QueueJoinResponse_1a752de0e1b5c80d5aa4ad3fc5bb1b77ac)`()` <a id="structFRHAPI__QueueJoinResponse_1a752de0e1b5c80d5aa4ad3fc5bb1b77ac"></a>

Gets the value of TicketId.

#### `public inline const FString & `[`GetTicketId`](#structFRHAPI__QueueJoinResponse_1a64520e48dd16f64e83f06f6f3aec9639)`() const` <a id="structFRHAPI__QueueJoinResponse_1a64520e48dd16f64e83f06f6f3aec9639"></a>

Gets the value of TicketId.

#### `public inline void `[`SetTicketId`](#structFRHAPI__QueueJoinResponse_1ab6782823d19d4a0613d9521013c1f0ff)`(const FString & NewValue)` <a id="structFRHAPI__QueueJoinResponse_1ab6782823d19d4a0613d9521013c1f0ff"></a>

Sets the value of TicketId.

#### `public inline void `[`SetTicketId`](#structFRHAPI__QueueJoinResponse_1a05dedf5638833d9fe9ce533c69504b17)`(FString && NewValue)` <a id="structFRHAPI__QueueJoinResponse_1a05dedf5638833d9fe9ce533c69504b17"></a>

Sets the value of TicketId using move semantics.

