---
title: RHAPI_BaseBackfillRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BaseBackfillRequest`](#structFRHAPI__BaseBackfillRequest) | 

## struct `FRHAPI_BaseBackfillRequest` <a id="structFRHAPI__BaseBackfillRequest"></a>

```
struct FRHAPI_BaseBackfillRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`InstanceId`](#structFRHAPI__BaseBackfillRequest_1adee922d59de20684afd702734bd49d34) | The instance ID for this backfill request.
`public virtual bool `[`FromJson`](#structFRHAPI__BaseBackfillRequest_1ae65b5a518beebf34a2b398621c5804ae)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BaseBackfillRequest_1aeb672106356025b94d30c6b4bfc09cef)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__BaseBackfillRequest_1aff0e20b2a7c35470e01c3edd2aef8466)`()` | Gets the value of InstanceId.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__BaseBackfillRequest_1a1d9eadaa9c9f801da7f6bdf8e325535a)`() const` | Gets the value of InstanceId.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__BaseBackfillRequest_1a57fc7bc887813271ceb43170e259e93e)`(const FString & NewValue)` | Sets the value of InstanceId.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__BaseBackfillRequest_1a0a6b9b742859a80c428117314502eb19)`(FString && NewValue)` | Sets the value of InstanceId using move semantics.

### Members

#### `public FString `[`InstanceId`](#structFRHAPI__BaseBackfillRequest_1adee922d59de20684afd702734bd49d34) <a id="structFRHAPI__BaseBackfillRequest_1adee922d59de20684afd702734bd49d34"></a>

The instance ID for this backfill request.

#### `public virtual bool `[`FromJson`](#structFRHAPI__BaseBackfillRequest_1ae65b5a518beebf34a2b398621c5804ae)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BaseBackfillRequest_1ae65b5a518beebf34a2b398621c5804ae"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BaseBackfillRequest_1aeb672106356025b94d30c6b4bfc09cef)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__BaseBackfillRequest_1aeb672106356025b94d30c6b4bfc09cef"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__BaseBackfillRequest_1aff0e20b2a7c35470e01c3edd2aef8466)`()` <a id="structFRHAPI__BaseBackfillRequest_1aff0e20b2a7c35470e01c3edd2aef8466"></a>

Gets the value of InstanceId.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__BaseBackfillRequest_1a1d9eadaa9c9f801da7f6bdf8e325535a)`() const` <a id="structFRHAPI__BaseBackfillRequest_1a1d9eadaa9c9f801da7f6bdf8e325535a"></a>

Gets the value of InstanceId.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__BaseBackfillRequest_1a57fc7bc887813271ceb43170e259e93e)`(const FString & NewValue)` <a id="structFRHAPI__BaseBackfillRequest_1a57fc7bc887813271ceb43170e259e93e"></a>

Sets the value of InstanceId.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__BaseBackfillRequest_1a0a6b9b742859a80c428117314502eb19)`(FString && NewValue)` <a id="structFRHAPI__BaseBackfillRequest_1a0a6b9b742859a80c428117314502eb19"></a>

Sets the value of InstanceId using move semantics.

