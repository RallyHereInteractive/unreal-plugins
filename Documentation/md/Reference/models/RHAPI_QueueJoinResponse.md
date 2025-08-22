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
`public inline FORCEINLINE FString & `[`GetTicketId`](#structFRHAPI__QueueJoinResponse_1a8a6044a4a650b9361f785b50adcc5988)`()` | Gets the value of TicketId.
`public inline FORCEINLINE const FString & `[`GetTicketId`](#structFRHAPI__QueueJoinResponse_1a6ad8eb0006fa180573db06aec47d1099)`() const` | Gets the value of TicketId.
`public inline FORCEINLINE void `[`SetTicketId`](#structFRHAPI__QueueJoinResponse_1a8d37e6153937559d5f79958cfa8bf914)`(const FString & NewValue)` | Sets the value of TicketId.
`public inline FORCEINLINE void `[`SetTicketId`](#structFRHAPI__QueueJoinResponse_1a7a2418ddcbdcde853a3d56c2f17c9571)`(FString && NewValue)` | Sets the value of TicketId using move semantics.

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

#### `public inline FORCEINLINE FString & `[`GetTicketId`](#structFRHAPI__QueueJoinResponse_1a8a6044a4a650b9361f785b50adcc5988)`()` <a id="structFRHAPI__QueueJoinResponse_1a8a6044a4a650b9361f785b50adcc5988"></a>

Gets the value of TicketId.

#### `public inline FORCEINLINE const FString & `[`GetTicketId`](#structFRHAPI__QueueJoinResponse_1a6ad8eb0006fa180573db06aec47d1099)`() const` <a id="structFRHAPI__QueueJoinResponse_1a6ad8eb0006fa180573db06aec47d1099"></a>

Gets the value of TicketId.

#### `public inline FORCEINLINE void `[`SetTicketId`](#structFRHAPI__QueueJoinResponse_1a8d37e6153937559d5f79958cfa8bf914)`(const FString & NewValue)` <a id="structFRHAPI__QueueJoinResponse_1a8d37e6153937559d5f79958cfa8bf914"></a>

Sets the value of TicketId.

#### `public inline FORCEINLINE void `[`SetTicketId`](#structFRHAPI__QueueJoinResponse_1a7a2418ddcbdcde853a3d56c2f17c9571)`(FString && NewValue)` <a id="structFRHAPI__QueueJoinResponse_1a7a2418ddcbdcde853a3d56c2f17c9571"></a>

Sets the value of TicketId using move semantics.

