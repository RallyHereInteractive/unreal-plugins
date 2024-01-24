# RHAPI_NotificationCreates <a id="group__RHAPI__NotificationCreates"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_NotificationCreates`](#structFRHAPI__NotificationCreates) | 

## struct `FRHAPI_NotificationCreates` <a id="structFRHAPI__NotificationCreates"></a>

```
struct FRHAPI_NotificationCreates
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > `[`Notifications`](#structFRHAPI__NotificationCreates_1ae5e68d62abaf22a7f915837ea078699b) | List of notifications creation requests.
`public virtual bool `[`FromJson`](#structFRHAPI__NotificationCreates_1a40c089cdce8ec2e20b67ac987dd8c508)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__NotificationCreates_1a6e1fc671101a6fb9cc5cfcb96ff067ae)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > & `[`GetNotifications`](#structFRHAPI__NotificationCreates_1a9c4940dd27a70f36a6eddc2f3fc99578)`()` | Gets the value of Notifications.
`public inline const TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > & `[`GetNotifications`](#structFRHAPI__NotificationCreates_1a0c864431bbd3d55c5ac1d0c3000d6f8d)`() const` | Gets the value of Notifications.
`public inline void `[`SetNotifications`](#structFRHAPI__NotificationCreates_1a82108e9b74ec61cb3d11b686ce1d91c8)`(TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > NewValue)` | Sets the value of Notifications.

#### Members

#### `public TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > `[`Notifications`](#structFRHAPI__NotificationCreates_1ae5e68d62abaf22a7f915837ea078699b) <a id="structFRHAPI__NotificationCreates_1ae5e68d62abaf22a7f915837ea078699b"></a>

List of notifications creation requests.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__NotificationCreates_1a40c089cdce8ec2e20b67ac987dd8c508)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__NotificationCreates_1a40c089cdce8ec2e20b67ac987dd8c508"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__NotificationCreates_1a6e1fc671101a6fb9cc5cfcb96ff067ae)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__NotificationCreates_1a6e1fc671101a6fb9cc5cfcb96ff067ae"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > & `[`GetNotifications`](#structFRHAPI__NotificationCreates_1a9c4940dd27a70f36a6eddc2f3fc99578)`()` <a id="structFRHAPI__NotificationCreates_1a9c4940dd27a70f36a6eddc2f3fc99578"></a>

Gets the value of Notifications.

<br>
#### `public inline const TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > & `[`GetNotifications`](#structFRHAPI__NotificationCreates_1a0c864431bbd3d55c5ac1d0c3000d6f8d)`() const` <a id="structFRHAPI__NotificationCreates_1a0c864431bbd3d55c5ac1d0c3000d6f8d"></a>

Gets the value of Notifications.

<br>
#### `public inline void `[`SetNotifications`](#structFRHAPI__NotificationCreates_1a82108e9b74ec61cb3d11b686ce1d91c8)`(TArray< `[`FRHAPI_NotificationCreate`](RHAPI_NotificationCreate.md#structFRHAPI__NotificationCreate)` > NewValue)` <a id="structFRHAPI__NotificationCreates_1a82108e9b74ec61cb3d11b686ce1d91c8"></a>

Sets the value of Notifications.

<br>
