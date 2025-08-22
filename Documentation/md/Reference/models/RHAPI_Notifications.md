---
title: RHAPI_Notifications
---

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
`public virtual bool `[`FromJson`](#structFRHAPI__Notifications_1ababd294af1a75b09c55cb5bc312164bc)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Notifications_1aaab999066e4ccdb2ff22fac68c23ecd4)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & `[`GetNotifications`](#structFRHAPI__Notifications_1af0b0c186ed9fbf80103f8474b275074a)`()` | Gets the value of Notifications_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & `[`GetNotifications`](#structFRHAPI__Notifications_1a8a870fb690d4a97f9851ff4c763d86b4)`() const` | Gets the value of Notifications_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & `[`GetNotifications`](#structFRHAPI__Notifications_1accc5c452abe193251284c342dd2ea689)`(const TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & DefaultValue) const` | Gets the value of Notifications_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetNotifications`](#structFRHAPI__Notifications_1a831d8247bc9a2fa8f67617295e9b594d)`(TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & OutValue) const` | Fills OutValue with the value of Notifications_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > * `[`GetNotificationsOrNull`](#structFRHAPI__Notifications_1a866db1847d589e0616fac6fbaa6ea40a)`()` | Returns a pointer to Notifications_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > * `[`GetNotificationsOrNull`](#structFRHAPI__Notifications_1ada833db7b3f1f1cf904bd872abfac598)`() const` | Returns a pointer to Notifications_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetNotifications`](#structFRHAPI__Notifications_1a51781b333165a13e763228be3e3ab7af)`(const TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & NewValue)` | Sets the value of Notifications_Optional and also sets Notifications_IsSet to true.
`public inline FORCEINLINE void `[`SetNotifications`](#structFRHAPI__Notifications_1a9e23a20f47f9187ce22bf36a42aed640)`(TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > && NewValue)` | Sets the value of Notifications_Optional and also sets Notifications_IsSet to true using move semantics.
`public inline void `[`ClearNotifications`](#structFRHAPI__Notifications_1ab07527aa1d7b633c781fd47dae70826d)`()` | Clears the value of Notifications_Optional and sets Notifications_IsSet to false.
`public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__Notifications_1a4933aeb4d0fcabedf9263f20e9c286b0)`()` | Gets the value of Cursor.
`public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__Notifications_1aaab3be8070cc32ef418ef8cca2464f2e)`() const` | Gets the value of Cursor.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__Notifications_1a38298cb47660f7bf39e09c5486009df4)`(const FString & NewValue)` | Sets the value of Cursor.
`public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__Notifications_1a345b482761ab17de33ec340dd003e41b)`(FString && NewValue)` | Sets the value of Cursor using move semantics.

### Members

#### `public TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > `[`Notifications_Optional`](#structFRHAPI__Notifications_1a0bf3aa9ba6d2b3e4edb9fe9349833122) <a id="structFRHAPI__Notifications_1a0bf3aa9ba6d2b3e4edb9fe9349833122"></a>

List of notifications.

#### `public bool `[`Notifications_IsSet`](#structFRHAPI__Notifications_1a23b554d64f425834a6ba28ac850a66a0) <a id="structFRHAPI__Notifications_1a23b554d64f425834a6ba28ac850a66a0"></a>

true if Notifications_Optional has been set to a value

#### `public FString `[`Cursor`](#structFRHAPI__Notifications_1ac9e923901b178bd1c257c48368b7dc00) <a id="structFRHAPI__Notifications_1ac9e923901b178bd1c257c48368b7dc00"></a>

Cursor to use for the next request.

#### `public virtual bool `[`FromJson`](#structFRHAPI__Notifications_1ababd294af1a75b09c55cb5bc312164bc)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Notifications_1ababd294af1a75b09c55cb5bc312164bc"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Notifications_1aaab999066e4ccdb2ff22fac68c23ecd4)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__Notifications_1aaab999066e4ccdb2ff22fac68c23ecd4"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & `[`GetNotifications`](#structFRHAPI__Notifications_1af0b0c186ed9fbf80103f8474b275074a)`()` <a id="structFRHAPI__Notifications_1af0b0c186ed9fbf80103f8474b275074a"></a>

Gets the value of Notifications_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & `[`GetNotifications`](#structFRHAPI__Notifications_1a8a870fb690d4a97f9851ff4c763d86b4)`() const` <a id="structFRHAPI__Notifications_1a8a870fb690d4a97f9851ff4c763d86b4"></a>

Gets the value of Notifications_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & `[`GetNotifications`](#structFRHAPI__Notifications_1accc5c452abe193251284c342dd2ea689)`(const TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & DefaultValue) const` <a id="structFRHAPI__Notifications_1accc5c452abe193251284c342dd2ea689"></a>

Gets the value of Notifications_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetNotifications`](#structFRHAPI__Notifications_1a831d8247bc9a2fa8f67617295e9b594d)`(TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & OutValue) const` <a id="structFRHAPI__Notifications_1a831d8247bc9a2fa8f67617295e9b594d"></a>

Fills OutValue with the value of Notifications_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > * `[`GetNotificationsOrNull`](#structFRHAPI__Notifications_1a866db1847d589e0616fac6fbaa6ea40a)`()` <a id="structFRHAPI__Notifications_1a866db1847d589e0616fac6fbaa6ea40a"></a>

Returns a pointer to Notifications_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > * `[`GetNotificationsOrNull`](#structFRHAPI__Notifications_1ada833db7b3f1f1cf904bd872abfac598)`() const` <a id="structFRHAPI__Notifications_1ada833db7b3f1f1cf904bd872abfac598"></a>

Returns a pointer to Notifications_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetNotifications`](#structFRHAPI__Notifications_1a51781b333165a13e763228be3e3ab7af)`(const TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > & NewValue)` <a id="structFRHAPI__Notifications_1a51781b333165a13e763228be3e3ab7af"></a>

Sets the value of Notifications_Optional and also sets Notifications_IsSet to true.

#### `public inline FORCEINLINE void `[`SetNotifications`](#structFRHAPI__Notifications_1a9e23a20f47f9187ce22bf36a42aed640)`(TArray< `[`FRHAPI_Notification`](RHAPI_Notification.md#structFRHAPI__Notification)` > && NewValue)` <a id="structFRHAPI__Notifications_1a9e23a20f47f9187ce22bf36a42aed640"></a>

Sets the value of Notifications_Optional and also sets Notifications_IsSet to true using move semantics.

#### `public inline void `[`ClearNotifications`](#structFRHAPI__Notifications_1ab07527aa1d7b633c781fd47dae70826d)`()` <a id="structFRHAPI__Notifications_1ab07527aa1d7b633c781fd47dae70826d"></a>

Clears the value of Notifications_Optional and sets Notifications_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetCursor`](#structFRHAPI__Notifications_1a4933aeb4d0fcabedf9263f20e9c286b0)`()` <a id="structFRHAPI__Notifications_1a4933aeb4d0fcabedf9263f20e9c286b0"></a>

Gets the value of Cursor.

#### `public inline FORCEINLINE const FString & `[`GetCursor`](#structFRHAPI__Notifications_1aaab3be8070cc32ef418ef8cca2464f2e)`() const` <a id="structFRHAPI__Notifications_1aaab3be8070cc32ef418ef8cca2464f2e"></a>

Gets the value of Cursor.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__Notifications_1a38298cb47660f7bf39e09c5486009df4)`(const FString & NewValue)` <a id="structFRHAPI__Notifications_1a38298cb47660f7bf39e09c5486009df4"></a>

Sets the value of Cursor.

#### `public inline FORCEINLINE void `[`SetCursor`](#structFRHAPI__Notifications_1a345b482761ab17de33ec340dd003e41b)`(FString && NewValue)` <a id="structFRHAPI__Notifications_1a345b482761ab17de33ec340dd003e41b"></a>

Sets the value of Cursor using move semantics.

