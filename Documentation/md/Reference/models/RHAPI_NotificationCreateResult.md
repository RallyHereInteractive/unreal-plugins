---
title: RHAPI_NotificationCreateResult
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_NotificationCreateResult`](#structFRHAPI__NotificationCreateResult) | 

## struct `FRHAPI_NotificationCreateResult` <a id="structFRHAPI__NotificationCreateResult"></a>

```
struct FRHAPI_NotificationCreateResult
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`NotificationId`](#structFRHAPI__NotificationCreateResult_1a2470f8689b67650ca67a241f190d2cf5) | Unique Identifier for the last notification created. You cannot depend on the format of this string, and it must be considered opaque.
`public virtual bool `[`FromJson`](#structFRHAPI__NotificationCreateResult_1a6570ae3f264268b9a212a2b72fbbba78)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__NotificationCreateResult_1a5deeeddb932c83334fcf67b4552e3aba)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetNotificationId`](#structFRHAPI__NotificationCreateResult_1a2ccc91eb2bfe67916ea7fc599c48e5fc)`()` | Gets the value of NotificationId.
`public inline FORCEINLINE const FString & `[`GetNotificationId`](#structFRHAPI__NotificationCreateResult_1a5d4191fea4e8e775eef0cd93f025c6e7)`() const` | Gets the value of NotificationId.
`public inline FORCEINLINE void `[`SetNotificationId`](#structFRHAPI__NotificationCreateResult_1a3b72b5baf1b98d7e91e61d9c2b6a0953)`(const FString & NewValue)` | Sets the value of NotificationId.
`public inline FORCEINLINE void `[`SetNotificationId`](#structFRHAPI__NotificationCreateResult_1a4a76f9c49b739d112bd2a9680885510c)`(FString && NewValue)` | Sets the value of NotificationId using move semantics.

### Members

#### `public FString `[`NotificationId`](#structFRHAPI__NotificationCreateResult_1a2470f8689b67650ca67a241f190d2cf5) <a id="structFRHAPI__NotificationCreateResult_1a2470f8689b67650ca67a241f190d2cf5"></a>

Unique Identifier for the last notification created. You cannot depend on the format of this string, and it must be considered opaque.

#### `public virtual bool `[`FromJson`](#structFRHAPI__NotificationCreateResult_1a6570ae3f264268b9a212a2b72fbbba78)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__NotificationCreateResult_1a6570ae3f264268b9a212a2b72fbbba78"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__NotificationCreateResult_1a5deeeddb932c83334fcf67b4552e3aba)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__NotificationCreateResult_1a5deeeddb932c83334fcf67b4552e3aba"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetNotificationId`](#structFRHAPI__NotificationCreateResult_1a2ccc91eb2bfe67916ea7fc599c48e5fc)`()` <a id="structFRHAPI__NotificationCreateResult_1a2ccc91eb2bfe67916ea7fc599c48e5fc"></a>

Gets the value of NotificationId.

#### `public inline FORCEINLINE const FString & `[`GetNotificationId`](#structFRHAPI__NotificationCreateResult_1a5d4191fea4e8e775eef0cd93f025c6e7)`() const` <a id="structFRHAPI__NotificationCreateResult_1a5d4191fea4e8e775eef0cd93f025c6e7"></a>

Gets the value of NotificationId.

#### `public inline FORCEINLINE void `[`SetNotificationId`](#structFRHAPI__NotificationCreateResult_1a3b72b5baf1b98d7e91e61d9c2b6a0953)`(const FString & NewValue)` <a id="structFRHAPI__NotificationCreateResult_1a3b72b5baf1b98d7e91e61d9c2b6a0953"></a>

Sets the value of NotificationId.

#### `public inline FORCEINLINE void `[`SetNotificationId`](#structFRHAPI__NotificationCreateResult_1a4a76f9c49b739d112bd2a9680885510c)`(FString && NewValue)` <a id="structFRHAPI__NotificationCreateResult_1a4a76f9c49b739d112bd2a9680885510c"></a>

Sets the value of NotificationId using move semantics.

