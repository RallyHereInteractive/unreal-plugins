---
title: RHAPI_AuditResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_AuditResponse`](#structFRHAPI__AuditResponse) | 

## struct `FRHAPI_AuditResponse` <a id="structFRHAPI__AuditResponse"></a>

```
struct FRHAPI_AuditResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > `[`Events_Optional`](#structFRHAPI__AuditResponse_1a02de7d3d634e988f405364ecf4d469b6) | List of audit events.
`public bool `[`Events_IsSet`](#structFRHAPI__AuditResponse_1a834f04fc0bfc79f0a5403a2bdb5343e4) | true if Events_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__AuditResponse_1ad76010365c1ab0e3983a6377ede80c0c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AuditResponse_1a66483ba95638540b11b76a01523a791e)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1a6c01e579e460d99f4a88352f61dafb99)`()` | Gets the value of Events_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1a151f18da1a7e36ad6947629f08d7717e)`() const` | Gets the value of Events_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1a9df9afecb7f05b2e2001632a72ca8de9)`(const TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & DefaultValue) const` | Gets the value of Events_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEvents`](#structFRHAPI__AuditResponse_1aaf9b8c1bf606458d28b4d99ee287fca7)`(TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & OutValue) const` | Fills OutValue with the value of Events_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > * `[`GetEventsOrNull`](#structFRHAPI__AuditResponse_1aae17be280ddf9212f92b2e8cbbf35df6)`()` | Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > * `[`GetEventsOrNull`](#structFRHAPI__AuditResponse_1a83d0152dcd7589bc8b8d4637daad9784)`() const` | Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEvents`](#structFRHAPI__AuditResponse_1a3e5ad9ec12d864c9e2acf06cef16ca36)`(const TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & NewValue)` | Sets the value of Events_Optional and also sets Events_IsSet to true.
`public inline FORCEINLINE void `[`SetEvents`](#structFRHAPI__AuditResponse_1ababf4606533b1b99b452a5cce4d4bfb8)`(TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > && NewValue)` | Sets the value of Events_Optional and also sets Events_IsSet to true using move semantics.
`public inline void `[`ClearEvents`](#structFRHAPI__AuditResponse_1a528133fb879ffc3d42ea118bd82c83c2)`()` | Clears the value of Events_Optional and sets Events_IsSet to false.

### Members

#### `public TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > `[`Events_Optional`](#structFRHAPI__AuditResponse_1a02de7d3d634e988f405364ecf4d469b6) <a id="structFRHAPI__AuditResponse_1a02de7d3d634e988f405364ecf4d469b6"></a>

List of audit events.

#### `public bool `[`Events_IsSet`](#structFRHAPI__AuditResponse_1a834f04fc0bfc79f0a5403a2bdb5343e4) <a id="structFRHAPI__AuditResponse_1a834f04fc0bfc79f0a5403a2bdb5343e4"></a>

true if Events_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__AuditResponse_1ad76010365c1ab0e3983a6377ede80c0c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__AuditResponse_1ad76010365c1ab0e3983a6377ede80c0c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__AuditResponse_1a66483ba95638540b11b76a01523a791e)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__AuditResponse_1a66483ba95638540b11b76a01523a791e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1a6c01e579e460d99f4a88352f61dafb99)`()` <a id="structFRHAPI__AuditResponse_1a6c01e579e460d99f4a88352f61dafb99"></a>

Gets the value of Events_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1a151f18da1a7e36ad6947629f08d7717e)`() const` <a id="structFRHAPI__AuditResponse_1a151f18da1a7e36ad6947629f08d7717e"></a>

Gets the value of Events_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & `[`GetEvents`](#structFRHAPI__AuditResponse_1a9df9afecb7f05b2e2001632a72ca8de9)`(const TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & DefaultValue) const` <a id="structFRHAPI__AuditResponse_1a9df9afecb7f05b2e2001632a72ca8de9"></a>

Gets the value of Events_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEvents`](#structFRHAPI__AuditResponse_1aaf9b8c1bf606458d28b4d99ee287fca7)`(TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & OutValue) const` <a id="structFRHAPI__AuditResponse_1aaf9b8c1bf606458d28b4d99ee287fca7"></a>

Fills OutValue with the value of Events_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > * `[`GetEventsOrNull`](#structFRHAPI__AuditResponse_1aae17be280ddf9212f92b2e8cbbf35df6)`()` <a id="structFRHAPI__AuditResponse_1aae17be280ddf9212f92b2e8cbbf35df6"></a>

Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > * `[`GetEventsOrNull`](#structFRHAPI__AuditResponse_1a83d0152dcd7589bc8b8d4637daad9784)`() const` <a id="structFRHAPI__AuditResponse_1a83d0152dcd7589bc8b8d4637daad9784"></a>

Returns a pointer to Events_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEvents`](#structFRHAPI__AuditResponse_1a3e5ad9ec12d864c9e2acf06cef16ca36)`(const TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > & NewValue)` <a id="structFRHAPI__AuditResponse_1a3e5ad9ec12d864c9e2acf06cef16ca36"></a>

Sets the value of Events_Optional and also sets Events_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEvents`](#structFRHAPI__AuditResponse_1ababf4606533b1b99b452a5cce4d4bfb8)`(TArray< `[`FRHAPI_AuditEvent`](RHAPI_AuditEvent.md#structFRHAPI__AuditEvent)` > && NewValue)` <a id="structFRHAPI__AuditResponse_1ababf4606533b1b99b452a5cce4d4bfb8"></a>

Sets the value of Events_Optional and also sets Events_IsSet to true using move semantics.

#### `public inline void `[`ClearEvents`](#structFRHAPI__AuditResponse_1a528133fb879ffc3d42ea118bd82c83c2)`()` <a id="structFRHAPI__AuditResponse_1a528133fb879ffc3d42ea118bd82c83c2"></a>

Clears the value of Events_Optional and sets Events_IsSet to false.

