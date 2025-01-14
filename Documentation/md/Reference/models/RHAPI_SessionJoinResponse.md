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
`public inline FString & `[`GetSessionId`](#structFRHAPI__SessionJoinResponse_1a95d8d7bd494a9e46bc2392695cb5c9b0)`()` | Gets the value of SessionId.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__SessionJoinResponse_1aa5ac7dc919e0f6449f02644e97410fc5)`() const` | Gets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__SessionJoinResponse_1ac73376a9211c0d65dc15ccaf5f96da42)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__SessionJoinResponse_1ad2a7741d51fb07f0766bab8a202c97a1)`(FString && NewValue)` | Sets the value of SessionId using move semantics.

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

#### `public inline FString & `[`GetSessionId`](#structFRHAPI__SessionJoinResponse_1a95d8d7bd494a9e46bc2392695cb5c9b0)`()` <a id="structFRHAPI__SessionJoinResponse_1a95d8d7bd494a9e46bc2392695cb5c9b0"></a>

Gets the value of SessionId.

#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__SessionJoinResponse_1aa5ac7dc919e0f6449f02644e97410fc5)`() const` <a id="structFRHAPI__SessionJoinResponse_1aa5ac7dc919e0f6449f02644e97410fc5"></a>

Gets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__SessionJoinResponse_1ac73376a9211c0d65dc15ccaf5f96da42)`(const FString & NewValue)` <a id="structFRHAPI__SessionJoinResponse_1ac73376a9211c0d65dc15ccaf5f96da42"></a>

Sets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__SessionJoinResponse_1ad2a7741d51fb07f0766bab8a202c97a1)`(FString && NewValue)` <a id="structFRHAPI__SessionJoinResponse_1ad2a7741d51fb07f0766bab8a202c97a1"></a>

Sets the value of SessionId using move semantics.

