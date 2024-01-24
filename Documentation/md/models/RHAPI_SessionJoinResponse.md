# RHAPI_SessionJoinResponse <a id="group__RHAPI__SessionJoinResponse"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`SessionId`](#structFRHAPI__SessionJoinResponse_1a78b2bc9860f7b5620c9968d290884257) | Session ID the player is now a part of.
`public virtual bool `[`FromJson`](#structFRHAPI__SessionJoinResponse_1a499044f9b28f5d1619397094f5b777b9)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionJoinResponse_1a29e24fca444e7af72874cce8b76a27a6)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetSessionId`](#structFRHAPI__SessionJoinResponse_1aec0fea30126379f82c3b0b92b40ee9c2)`()` | Gets the value of SessionId.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__SessionJoinResponse_1a5864fade9558dad663e8f6cccf769468)`() const` | Gets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__SessionJoinResponse_1ae84390873c78919f4076dbe7834e197c)`(FString NewValue)` | Sets the value of SessionId.

#### Members

#### `public FString `[`SessionId`](#structFRHAPI__SessionJoinResponse_1a78b2bc9860f7b5620c9968d290884257) <a id="structFRHAPI__SessionJoinResponse_1a78b2bc9860f7b5620c9968d290884257"></a>

Session ID the player is now a part of.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionJoinResponse_1a499044f9b28f5d1619397094f5b777b9)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionJoinResponse_1a499044f9b28f5d1619397094f5b777b9"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionJoinResponse_1a29e24fca444e7af72874cce8b76a27a6)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SessionJoinResponse_1a29e24fca444e7af72874cce8b76a27a6"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetSessionId`](#structFRHAPI__SessionJoinResponse_1aec0fea30126379f82c3b0b92b40ee9c2)`()` <a id="structFRHAPI__SessionJoinResponse_1aec0fea30126379f82c3b0b92b40ee9c2"></a>

Gets the value of SessionId.

<br>
#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__SessionJoinResponse_1a5864fade9558dad663e8f6cccf769468)`() const` <a id="structFRHAPI__SessionJoinResponse_1a5864fade9558dad663e8f6cccf769468"></a>

Gets the value of SessionId.

<br>
#### `public inline void `[`SetSessionId`](#structFRHAPI__SessionJoinResponse_1ae84390873c78919f4076dbe7834e197c)`(FString NewValue)` <a id="structFRHAPI__SessionJoinResponse_1ae84390873c78919f4076dbe7834e197c"></a>

Sets the value of SessionId.

<br>
