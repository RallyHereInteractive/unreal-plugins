---
title: RHAPI_NotificationCreates
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_NotificationCreates`](#structFRHAPI__NotificationCreates) | 

## struct `FRHAPI_NotificationCreates` <a id="structFRHAPI__NotificationCreates"></a>

```
struct FRHAPI_NotificationCreates
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > `[`Notifications`](#structFRHAPI__NotificationCreates_1ae5e68d62abaf22a7f915837ea078699b) | List of notifications creation requests.
`public virtual bool `[`FromJson`](#structFRHAPI__NotificationCreates_1a70edb4b051108ea4c5758b5fae3940b1)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__NotificationCreates_1a2fa02cb313ec137760873278c0cca082)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > & `[`GetNotifications`](#structFRHAPI__NotificationCreates_1a4bd973acfcfa83b8b44025f8dc6f0481)`()` | Gets the value of Notifications.
`public inline FORCEINLINE const TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > & `[`GetNotifications`](#structFRHAPI__NotificationCreates_1a4d888bb75ee48b378ca998e861749de7)`() const` | Gets the value of Notifications.
`public inline FORCEINLINE void `[`SetNotifications`](#structFRHAPI__NotificationCreates_1ab06d44fd3c3db0bca17dbab56f9fee36)`(const TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > & NewValue)` | Sets the value of Notifications.
`public inline FORCEINLINE void `[`SetNotifications`](#structFRHAPI__NotificationCreates_1a5fa99b493c95adef01b6c9ce2255521d)`(TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > && NewValue)` | Sets the value of Notifications using move semantics.

### Members

#### `public TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > `[`Notifications`](#structFRHAPI__NotificationCreates_1ae5e68d62abaf22a7f915837ea078699b) <a id="structFRHAPI__NotificationCreates_1ae5e68d62abaf22a7f915837ea078699b"></a>

List of notifications creation requests.

#### `public virtual bool `[`FromJson`](#structFRHAPI__NotificationCreates_1a70edb4b051108ea4c5758b5fae3940b1)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__NotificationCreates_1a70edb4b051108ea4c5758b5fae3940b1"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__NotificationCreates_1a2fa02cb313ec137760873278c0cca082)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__NotificationCreates_1a2fa02cb313ec137760873278c0cca082"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > & `[`GetNotifications`](#structFRHAPI__NotificationCreates_1a4bd973acfcfa83b8b44025f8dc6f0481)`()` <a id="structFRHAPI__NotificationCreates_1a4bd973acfcfa83b8b44025f8dc6f0481"></a>

Gets the value of Notifications.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > & `[`GetNotifications`](#structFRHAPI__NotificationCreates_1a4d888bb75ee48b378ca998e861749de7)`() const` <a id="structFRHAPI__NotificationCreates_1a4d888bb75ee48b378ca998e861749de7"></a>

Gets the value of Notifications.

#### `public inline FORCEINLINE void `[`SetNotifications`](#structFRHAPI__NotificationCreates_1ab06d44fd3c3db0bca17dbab56f9fee36)`(const TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > & NewValue)` <a id="structFRHAPI__NotificationCreates_1ab06d44fd3c3db0bca17dbab56f9fee36"></a>

Sets the value of Notifications.

#### `public inline FORCEINLINE void `[`SetNotifications`](#structFRHAPI__NotificationCreates_1a5fa99b493c95adef01b6c9ce2255521d)`(TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > && NewValue)` <a id="structFRHAPI__NotificationCreates_1a5fa99b493c95adef01b6c9ce2255521d"></a>

Sets the value of Notifications using move semantics.

