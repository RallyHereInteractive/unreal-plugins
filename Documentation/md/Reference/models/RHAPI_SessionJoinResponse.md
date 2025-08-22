---
title: RHAPI_SessionJoinResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionJoinResponse`](#structFRHAPI__SessionJoinResponse) | Response when a player successfully joins a session.

## struct `FRHAPI_SessionJoinResponse` <a id="structFRHAPI__SessionJoinResponse"></a>

```
struct FRHAPI_SessionJoinResponse
  : public FRHAPI_Model
```

Response when a player successfully joins a session.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`SessionId`](#structFRHAPI__SessionJoinResponse_1a78b2bc9860f7b5620c9968d290884257) | Session ID the player is now a part of.
`public virtual bool `[`FromJson`](#structFRHAPI__SessionJoinResponse_1a95422a5c1f3c09a209899074243cd6d8)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionJoinResponse_1a94405750f03af6e12c8d3247d876a669)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__SessionJoinResponse_1a03bdc0def03318065468ed30ec7c5c49)`()` | Gets the value of SessionId.
`public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__SessionJoinResponse_1a8d3e779ef07ac232df7fe58ba965828b)`() const` | Gets the value of SessionId.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__SessionJoinResponse_1a6a34fb29e588ae9692b1e1ed97f3f854)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__SessionJoinResponse_1a0c0841a7bf4b07af43015b6b09ef4d97)`(FString && NewValue)` | Sets the value of SessionId using move semantics.

### Members

#### `public FString `[`SessionId`](#structFRHAPI__SessionJoinResponse_1a78b2bc9860f7b5620c9968d290884257) <a id="structFRHAPI__SessionJoinResponse_1a78b2bc9860f7b5620c9968d290884257"></a>

Session ID the player is now a part of.

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionJoinResponse_1a95422a5c1f3c09a209899074243cd6d8)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionJoinResponse_1a95422a5c1f3c09a209899074243cd6d8"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionJoinResponse_1a94405750f03af6e12c8d3247d876a669)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SessionJoinResponse_1a94405750f03af6e12c8d3247d876a669"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__SessionJoinResponse_1a03bdc0def03318065468ed30ec7c5c49)`()` <a id="structFRHAPI__SessionJoinResponse_1a03bdc0def03318065468ed30ec7c5c49"></a>

Gets the value of SessionId.

#### `public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__SessionJoinResponse_1a8d3e779ef07ac232df7fe58ba965828b)`() const` <a id="structFRHAPI__SessionJoinResponse_1a8d3e779ef07ac232df7fe58ba965828b"></a>

Gets the value of SessionId.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__SessionJoinResponse_1a6a34fb29e588ae9692b1e1ed97f3f854)`(const FString & NewValue)` <a id="structFRHAPI__SessionJoinResponse_1a6a34fb29e588ae9692b1e1ed97f3f854"></a>

Sets the value of SessionId.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__SessionJoinResponse_1a0c0841a7bf4b07af43015b6b09ef4d97)`(FString && NewValue)` <a id="structFRHAPI__SessionJoinResponse_1a0c0841a7bf4b07af43015b6b09ef4d97"></a>

Sets the value of SessionId using move semantics.

