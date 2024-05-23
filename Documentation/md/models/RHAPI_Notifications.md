# group `RHAPI_Notifications` <a id="group__RHAPI__Notifications"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Notifications`](#structFRHAPI__Notifications) | 

## struct `FRHAPI_Notifications` <a id="structFRHAPI__Notifications"></a>

```
struct FRHAPI_Notifications
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > `[`Notifications_Optional`](#structFRHAPI__Notifications_1a0bf3aa9ba6d2b3e4edb9fe9349833122) | List of notifications.
`public bool `[`Notifications_IsSet`](#structFRHAPI__Notifications_1a23b554d64f425834a6ba28ac850a66a0) | true if Notifications_Optional has been set to a value
`public FString `[`Cursor`](#structFRHAPI__Notifications_1ac9e923901b178bd1c257c48368b7dc00) | Cursor to use for the next request.
`public virtual bool `[`FromJson`](#structFRHAPI__Notifications_1a8e6f88ce785d00b5a08e5f628548d40f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Notifications_1ad9d21610b3fc82034c570e4724adb55f)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & `[`GetNotifications`](#structFRHAPI__Notifications_1ad71dc5b11bc4a8bf5dfedd76389ae9ce)`()` | Gets the value of Notifications_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & `[`GetNotifications`](#structFRHAPI__Notifications_1afd69056610fe73ad8158d15a3e12452a)`() const` | Gets the value of Notifications_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & `[`GetNotifications`](#structFRHAPI__Notifications_1a598ffd3e7077b3fc61cb56b89801b759)`(const TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & DefaultValue) const` | Gets the value of Notifications_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNotifications`](#structFRHAPI__Notifications_1a7f1ba68ab77910889f7eed1408a90a6d)`(TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & OutValue) const` | Fills OutValue with the value of Notifications_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > * `[`GetNotificationsOrNull`](#structFRHAPI__Notifications_1ad665102ee0c88831a48ed45797ab4186)`()` | Returns a pointer to Notifications_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > * `[`GetNotificationsOrNull`](#structFRHAPI__Notifications_1a6aaef183ae54e0157e1d902edad7bdea)`() const` | Returns a pointer to Notifications_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNotifications`](#structFRHAPI__Notifications_1a4eb945b50dcc4faca7571723eb2e91d5)`(const TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & NewValue)` | Sets the value of Notifications_Optional and also sets Notifications_IsSet to true.
`public inline void `[`SetNotifications`](#structFRHAPI__Notifications_1ae9db3383c9f48e586cc62d4264404f21)`(TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > && NewValue)` | Sets the value of Notifications_Optional and also sets Notifications_IsSet to true using move semantics.
`public inline void `[`ClearNotifications`](#structFRHAPI__Notifications_1ab07527aa1d7b633c781fd47dae70826d)`()` | Clears the value of Notifications_Optional and sets Notifications_IsSet to false.
`public inline FString & `[`GetCursor`](#structFRHAPI__Notifications_1afd9b7aa38d363efdbc1c5faa0d991062)`()` | Gets the value of Cursor.
`public inline const FString & `[`GetCursor`](#structFRHAPI__Notifications_1a35aceb22cd3df426a3b5f6b0bef10636)`() const` | Gets the value of Cursor.
`public inline void `[`SetCursor`](#structFRHAPI__Notifications_1acce0e608d250eb18342aae92248637d8)`(const FString & NewValue)` | Sets the value of Cursor.
`public inline void `[`SetCursor`](#structFRHAPI__Notifications_1ab6277b46626d1ec14ad9524235eaa863)`(FString && NewValue)` | Sets the value of Cursor using move semantics.

### Members

#### `public TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > `[`Notifications_Optional`](#structFRHAPI__Notifications_1a0bf3aa9ba6d2b3e4edb9fe9349833122) <a id="structFRHAPI__Notifications_1a0bf3aa9ba6d2b3e4edb9fe9349833122"></a>

List of notifications.

#### `public bool `[`Notifications_IsSet`](#structFRHAPI__Notifications_1a23b554d64f425834a6ba28ac850a66a0) <a id="structFRHAPI__Notifications_1a23b554d64f425834a6ba28ac850a66a0"></a>

true if Notifications_Optional has been set to a value

#### `public FString `[`Cursor`](#structFRHAPI__Notifications_1ac9e923901b178bd1c257c48368b7dc00) <a id="structFRHAPI__Notifications_1ac9e923901b178bd1c257c48368b7dc00"></a>

Cursor to use for the next request.

#### `public virtual bool `[`FromJson`](#structFRHAPI__Notifications_1a8e6f88ce785d00b5a08e5f628548d40f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Notifications_1a8e6f88ce785d00b5a08e5f628548d40f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Notifications_1ad9d21610b3fc82034c570e4724adb55f)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Notifications_1ad9d21610b3fc82034c570e4724adb55f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & `[`GetNotifications`](#structFRHAPI__Notifications_1ad71dc5b11bc4a8bf5dfedd76389ae9ce)`()` <a id="structFRHAPI__Notifications_1ad71dc5b11bc4a8bf5dfedd76389ae9ce"></a>

Gets the value of Notifications_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & `[`GetNotifications`](#structFRHAPI__Notifications_1afd69056610fe73ad8158d15a3e12452a)`() const` <a id="structFRHAPI__Notifications_1afd69056610fe73ad8158d15a3e12452a"></a>

Gets the value of Notifications_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & `[`GetNotifications`](#structFRHAPI__Notifications_1a598ffd3e7077b3fc61cb56b89801b759)`(const TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & DefaultValue) const` <a id="structFRHAPI__Notifications_1a598ffd3e7077b3fc61cb56b89801b759"></a>

Gets the value of Notifications_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNotifications`](#structFRHAPI__Notifications_1a7f1ba68ab77910889f7eed1408a90a6d)`(TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & OutValue) const` <a id="structFRHAPI__Notifications_1a7f1ba68ab77910889f7eed1408a90a6d"></a>

Fills OutValue with the value of Notifications_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > * `[`GetNotificationsOrNull`](#structFRHAPI__Notifications_1ad665102ee0c88831a48ed45797ab4186)`()` <a id="structFRHAPI__Notifications_1ad665102ee0c88831a48ed45797ab4186"></a>

Returns a pointer to Notifications_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > * `[`GetNotificationsOrNull`](#structFRHAPI__Notifications_1a6aaef183ae54e0157e1d902edad7bdea)`() const` <a id="structFRHAPI__Notifications_1a6aaef183ae54e0157e1d902edad7bdea"></a>

Returns a pointer to Notifications_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNotifications`](#structFRHAPI__Notifications_1a4eb945b50dcc4faca7571723eb2e91d5)`(const TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & NewValue)` <a id="structFRHAPI__Notifications_1a4eb945b50dcc4faca7571723eb2e91d5"></a>

Sets the value of Notifications_Optional and also sets Notifications_IsSet to true.

#### `public inline void `[`SetNotifications`](#structFRHAPI__Notifications_1ae9db3383c9f48e586cc62d4264404f21)`(TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > && NewValue)` <a id="structFRHAPI__Notifications_1ae9db3383c9f48e586cc62d4264404f21"></a>

Sets the value of Notifications_Optional and also sets Notifications_IsSet to true using move semantics.

#### `public inline void `[`ClearNotifications`](#structFRHAPI__Notifications_1ab07527aa1d7b633c781fd47dae70826d)`()` <a id="structFRHAPI__Notifications_1ab07527aa1d7b633c781fd47dae70826d"></a>

Clears the value of Notifications_Optional and sets Notifications_IsSet to false.

#### `public inline FString & `[`GetCursor`](#structFRHAPI__Notifications_1afd9b7aa38d363efdbc1c5faa0d991062)`()` <a id="structFRHAPI__Notifications_1afd9b7aa38d363efdbc1c5faa0d991062"></a>

Gets the value of Cursor.

#### `public inline const FString & `[`GetCursor`](#structFRHAPI__Notifications_1a35aceb22cd3df426a3b5f6b0bef10636)`() const` <a id="structFRHAPI__Notifications_1a35aceb22cd3df426a3b5f6b0bef10636"></a>

Gets the value of Cursor.

#### `public inline void `[`SetCursor`](#structFRHAPI__Notifications_1acce0e608d250eb18342aae92248637d8)`(const FString & NewValue)` <a id="structFRHAPI__Notifications_1acce0e608d250eb18342aae92248637d8"></a>

Sets the value of Cursor.

#### `public inline void `[`SetCursor`](#structFRHAPI__Notifications_1ab6277b46626d1ec14ad9524235eaa863)`(FString && NewValue)` <a id="structFRHAPI__Notifications_1ab6277b46626d1ec14ad9524235eaa863"></a>

Sets the value of Cursor using move semantics.

