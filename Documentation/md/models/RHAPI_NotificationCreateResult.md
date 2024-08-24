# group `RHAPI_NotificationCreateResult` <a id="group__RHAPI__NotificationCreateResult"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_NotificationCreateResult`](#structFRHAPI__NotificationCreateResult) | 

---
title: FRHAPI_NotificationCreateResult
---

```
struct FRHAPI_NotificationCreateResult
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`NotificationId`](#structFRHAPI__NotificationCreateResult_1a2470f8689b67650ca67a241f190d2cf5) | Unique Identifier for the last notification created. You cannot depend on the format of this string, and it must be considered opaque.
`public virtual bool `[`FromJson`](#structFRHAPI__NotificationCreateResult_1a6570ae3f264268b9a212a2b72fbbba78)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__NotificationCreateResult_1ade1082f8cebc1f5efbe8a1d53bebe2da)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetNotificationId`](#structFRHAPI__NotificationCreateResult_1a185596c9052bde6a9bb6a89aa9562073)`()` | Gets the value of NotificationId.
`public inline const FString & `[`GetNotificationId`](#structFRHAPI__NotificationCreateResult_1a0db393cd84c4b3a8858fcefc6eb6c04c)`() const` | Gets the value of NotificationId.
`public inline void `[`SetNotificationId`](#structFRHAPI__NotificationCreateResult_1ac59523da3146439bd8008e641c8b6257)`(const FString & NewValue)` | Sets the value of NotificationId.
`public inline void `[`SetNotificationId`](#structFRHAPI__NotificationCreateResult_1a868e130b14d88d04eb70717e9521e9f8)`(FString && NewValue)` | Sets the value of NotificationId using move semantics.

### Members

#### `public FString `[`NotificationId`](#structFRHAPI__NotificationCreateResult_1a2470f8689b67650ca67a241f190d2cf5) <a id="structFRHAPI__NotificationCreateResult_1a2470f8689b67650ca67a241f190d2cf5"></a>

Unique Identifier for the last notification created. You cannot depend on the format of this string, and it must be considered opaque.

#### `public virtual bool `[`FromJson`](#structFRHAPI__NotificationCreateResult_1a6570ae3f264268b9a212a2b72fbbba78)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__NotificationCreateResult_1a6570ae3f264268b9a212a2b72fbbba78"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__NotificationCreateResult_1ade1082f8cebc1f5efbe8a1d53bebe2da)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__NotificationCreateResult_1ade1082f8cebc1f5efbe8a1d53bebe2da"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetNotificationId`](#structFRHAPI__NotificationCreateResult_1a185596c9052bde6a9bb6a89aa9562073)`()` <a id="structFRHAPI__NotificationCreateResult_1a185596c9052bde6a9bb6a89aa9562073"></a>

Gets the value of NotificationId.

#### `public inline const FString & `[`GetNotificationId`](#structFRHAPI__NotificationCreateResult_1a0db393cd84c4b3a8858fcefc6eb6c04c)`() const` <a id="structFRHAPI__NotificationCreateResult_1a0db393cd84c4b3a8858fcefc6eb6c04c"></a>

Gets the value of NotificationId.

#### `public inline void `[`SetNotificationId`](#structFRHAPI__NotificationCreateResult_1ac59523da3146439bd8008e641c8b6257)`(const FString & NewValue)` <a id="structFRHAPI__NotificationCreateResult_1ac59523da3146439bd8008e641c8b6257"></a>

Sets the value of NotificationId.

#### `public inline void `[`SetNotificationId`](#structFRHAPI__NotificationCreateResult_1a868e130b14d88d04eb70717e9521e9f8)`(FString && NewValue)` <a id="structFRHAPI__NotificationCreateResult_1a868e130b14d88d04eb70717e9521e9f8"></a>

Sets the value of NotificationId using move semantics.

