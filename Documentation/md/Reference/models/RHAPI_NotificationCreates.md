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
`public inline TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > & `[`GetNotifications`](#structFRHAPI__NotificationCreates_1a131d17e4083ab96ea949545302607d8f)`()` | Gets the value of Notifications.
`public inline const TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > & `[`GetNotifications`](#structFRHAPI__NotificationCreates_1acf7ea30cc4a23b3f2d139644e2f48a67)`() const` | Gets the value of Notifications.
`public inline void `[`SetNotifications`](#structFRHAPI__NotificationCreates_1ad2006a7562d302b85d3055a3869df4d0)`(const TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > & NewValue)` | Sets the value of Notifications.
`public inline void `[`SetNotifications`](#structFRHAPI__NotificationCreates_1a7d44433bc5ce5b70e9d256f2175c9fc7)`(TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > && NewValue)` | Sets the value of Notifications using move semantics.

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

#### `public inline TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > & `[`GetNotifications`](#structFRHAPI__NotificationCreates_1a131d17e4083ab96ea949545302607d8f)`()` <a id="structFRHAPI__NotificationCreates_1a131d17e4083ab96ea949545302607d8f"></a>

Gets the value of Notifications.

#### `public inline const TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > & `[`GetNotifications`](#structFRHAPI__NotificationCreates_1acf7ea30cc4a23b3f2d139644e2f48a67)`() const` <a id="structFRHAPI__NotificationCreates_1acf7ea30cc4a23b3f2d139644e2f48a67"></a>

Gets the value of Notifications.

#### `public inline void `[`SetNotifications`](#structFRHAPI__NotificationCreates_1ad2006a7562d302b85d3055a3869df4d0)`(const TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > & NewValue)` <a id="structFRHAPI__NotificationCreates_1ad2006a7562d302b85d3055a3869df4d0"></a>

Sets the value of Notifications.

#### `public inline void `[`SetNotifications`](#structFRHAPI__NotificationCreates_1a7d44433bc5ce5b70e9d256f2175c9fc7)`(TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > && NewValue)` <a id="structFRHAPI__NotificationCreates_1a7d44433bc5ce5b70e9d256f2175c9fc7"></a>

Sets the value of Notifications using move semantics.

