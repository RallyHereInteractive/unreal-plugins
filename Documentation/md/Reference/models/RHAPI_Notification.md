---
title: RHAPI_Notification
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Notification`](#structFRHAPI__Notification) | 

## struct `FRHAPI_Notification` <a id="structFRHAPI__Notification"></a>

```
struct FRHAPI_Notification
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Message`](#structFRHAPI__Notification_1ae4087f5fac717be76bd871f5d1eae466) | Base Message for the notification.
`public FString `[`RhUrl_Optional`](#structFRHAPI__Notification_1ac50019b604d4120f297b471f59e54b36) | Path to get additional data about this notification.
`public bool `[`RhUrl_IsSet`](#structFRHAPI__Notification_1a90d058a7605a66d00476278add49a8e5) | true if RhUrl_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__Notification_1a2ed2e4d61f837740f5c6c7845e6ab8e9) | Custom values for the notification.
`public bool `[`CustomData_IsSet`](#structFRHAPI__Notification_1abcde3f0d6857b25bc22e6e9ebc356a1b) | true if CustomData_Optional has been set to a value
`public FString `[`Etag_Optional`](#structFRHAPI__Notification_1ae8660f0a8480f5407e67755d9d4dbd44) | ETag for the resource at rh_url at the time of this notification.
`public bool `[`Etag_IsSet`](#structFRHAPI__Notification_1a6b05614b7b3914a0d9ee31f2eac7eaab) | true if Etag_Optional has been set to a value
`public FString `[`NotificationId`](#structFRHAPI__Notification_1ab7fc8b3ac00ad8a3655c045b7f7b6bed) | Unique Identifier for the notification. You cannot depend on the format of this string, and it must be considered opaque.
`public FDateTime `[`Created`](#structFRHAPI__Notification_1a8af4c0587e0e1ea8402658f2797c848e) | When this notification was added.
`public virtual bool `[`FromJson`](#structFRHAPI__Notification_1a9bfade40a76c5d37cefda2ec62355e25)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Notification_1a706e816fd8489fb7f44916423a2d87f4)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetMessage`](#structFRHAPI__Notification_1aeae05376f3d0d9b78f8066c26ae15bc6)`()` | Gets the value of Message.
`public inline const FString & `[`GetMessage`](#structFRHAPI__Notification_1af55f6f96914bac3d3665290cc5bc6d80)`() const` | Gets the value of Message.
`public inline void `[`SetMessage`](#structFRHAPI__Notification_1af784e497683ed1f0e63bcf0ecbb16756)`(const FString & NewValue)` | Sets the value of Message.
`public inline void `[`SetMessage`](#structFRHAPI__Notification_1a5e919cdd4f250d4666e2f7b7caac8aec)`(FString && NewValue)` | Sets the value of Message using move semantics.
`public inline FString & `[`GetRhUrl`](#structFRHAPI__Notification_1a2ebc45d44459d9be01f48e03eadf43d0)`()` | Gets the value of RhUrl_Optional, regardless of it having been set.
`public inline const FString & `[`GetRhUrl`](#structFRHAPI__Notification_1a53cb3b025b38099dc900161498894398)`() const` | Gets the value of RhUrl_Optional, regardless of it having been set.
`public inline const FString & `[`GetRhUrl`](#structFRHAPI__Notification_1aa7f46a7859d4790b81ae9d15a37854e1)`(const FString & DefaultValue) const` | Gets the value of RhUrl_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRhUrl`](#structFRHAPI__Notification_1a4792a5d1eb1f4edd47474f17bac7f073)`(FString & OutValue) const` | Fills OutValue with the value of RhUrl_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRhUrlOrNull`](#structFRHAPI__Notification_1ad97636adf1daedef604a9b5bdb513e38)`()` | Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRhUrlOrNull`](#structFRHAPI__Notification_1ac1e393d84c6b2215df8d574d5a1b19de)`() const` | Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRhUrl`](#structFRHAPI__Notification_1a0f04efbc37b00a9d57bba137652d367e)`(const FString & NewValue)` | Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true.
`public inline void `[`SetRhUrl`](#structFRHAPI__Notification_1af97af8af1dfa08d0104fb62375b47f2a)`(FString && NewValue)` | Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true using move semantics.
`public inline void `[`ClearRhUrl`](#structFRHAPI__Notification_1abec18e1a52fdb6a0f2f863bd9a2b8c0f)`()` | Clears the value of RhUrl_Optional and sets RhUrl_IsSet to false.
`public inline bool `[`IsRhUrlSet`](#structFRHAPI__Notification_1a38d9f57dbdbb29cc2b8f5e95b5ba8a40)`() const` | Checks whether RhUrl_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Notification_1a02cf7e6f33ada172c1ba348860a23865)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Notification_1ac8cc9b5c98dc872b35a40c2b53b3b0af)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Notification_1a8836f71e973d8667f5d3234ce8d9220f)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__Notification_1a5bf362e8c77d4ef66ad1002a1384c442)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Notification_1afb2f5002f416306cdec8572f66426a2b)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Notification_1ad9a40b3766425dfda4103ce2010b96f9)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__Notification_1aab23cc68c61dabae1439e4ef3de85bb3)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__Notification_1ab01e3bf3707e524b4372cd7726b0c44f)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__Notification_1a595377476c3814e5d2d628cf20ac2d1d)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__Notification_1a455680c2a548cc2d6ba7c62fcbae422c)`() const` | Checks whether CustomData_Optional has been set.
`public inline FString & `[`GetEtag`](#structFRHAPI__Notification_1a7464862ce438ed186459b7263276b799)`()` | Gets the value of Etag_Optional, regardless of it having been set.
`public inline const FString & `[`GetEtag`](#structFRHAPI__Notification_1adab8f1fd89278ce76b02114829b98824)`() const` | Gets the value of Etag_Optional, regardless of it having been set.
`public inline const FString & `[`GetEtag`](#structFRHAPI__Notification_1a18fec996e3e2cd7c3e22cf3421158c72)`(const FString & DefaultValue) const` | Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEtag`](#structFRHAPI__Notification_1a9e49f93b9c00111bc2226d61cdbe80bc)`(FString & OutValue) const` | Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetEtagOrNull`](#structFRHAPI__Notification_1a7c26061b30f4373efdd88aa53a58d22f)`()` | Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetEtagOrNull`](#structFRHAPI__Notification_1ae97cb7a345cb19dec8249a6c9c2e7874)`() const` | Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEtag`](#structFRHAPI__Notification_1a927763eedd49af16ab7472ae825a6121)`(const FString & NewValue)` | Sets the value of Etag_Optional and also sets Etag_IsSet to true.
`public inline void `[`SetEtag`](#structFRHAPI__Notification_1abdf91f9fd7636d1561fe77d4ec2cbefa)`(FString && NewValue)` | Sets the value of Etag_Optional and also sets Etag_IsSet to true using move semantics.
`public inline void `[`ClearEtag`](#structFRHAPI__Notification_1a270365c81e422b9cf7497f5ac8db21b7)`()` | Clears the value of Etag_Optional and sets Etag_IsSet to false.
`public inline bool `[`IsEtagSet`](#structFRHAPI__Notification_1a1fcc4d00b3e231184cdb0f03cd041d7d)`() const` | Checks whether Etag_Optional has been set.
`public inline FString & `[`GetNotificationId`](#structFRHAPI__Notification_1abe1e7577fd60439c9ce9e10c7a1be3b4)`()` | Gets the value of NotificationId.
`public inline const FString & `[`GetNotificationId`](#structFRHAPI__Notification_1a0fe291869d3e81f04d9aa5eea5edb6c6)`() const` | Gets the value of NotificationId.
`public inline void `[`SetNotificationId`](#structFRHAPI__Notification_1a5c118723c634fafbddc710f247e4d9a0)`(const FString & NewValue)` | Sets the value of NotificationId.
`public inline void `[`SetNotificationId`](#structFRHAPI__Notification_1a7bf9c145d5e811aa86251d65aadbae25)`(FString && NewValue)` | Sets the value of NotificationId using move semantics.
`public inline FDateTime & `[`GetCreated`](#structFRHAPI__Notification_1a553db4b577f209b37df47db5bb51fe09)`()` | Gets the value of Created.
`public inline const FDateTime & `[`GetCreated`](#structFRHAPI__Notification_1a4eec26a280f183d7f55819c63344e0c3)`() const` | Gets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__Notification_1acee20f9f1cbfe843e8faecb953788ae1)`(const FDateTime & NewValue)` | Sets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__Notification_1a0cdbe0e2aaa95c595c7c66ed7b07c7b3)`(FDateTime && NewValue)` | Sets the value of Created using move semantics.

### Members

#### `public FString `[`Message`](#structFRHAPI__Notification_1ae4087f5fac717be76bd871f5d1eae466) <a id="structFRHAPI__Notification_1ae4087f5fac717be76bd871f5d1eae466"></a>

Base Message for the notification.

#### `public FString `[`RhUrl_Optional`](#structFRHAPI__Notification_1ac50019b604d4120f297b471f59e54b36) <a id="structFRHAPI__Notification_1ac50019b604d4120f297b471f59e54b36"></a>

Path to get additional data about this notification.

#### `public bool `[`RhUrl_IsSet`](#structFRHAPI__Notification_1a90d058a7605a66d00476278add49a8e5) <a id="structFRHAPI__Notification_1a90d058a7605a66d00476278add49a8e5"></a>

true if RhUrl_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__Notification_1a2ed2e4d61f837740f5c6c7845e6ab8e9) <a id="structFRHAPI__Notification_1a2ed2e4d61f837740f5c6c7845e6ab8e9"></a>

Custom values for the notification.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__Notification_1abcde3f0d6857b25bc22e6e9ebc356a1b) <a id="structFRHAPI__Notification_1abcde3f0d6857b25bc22e6e9ebc356a1b"></a>

true if CustomData_Optional has been set to a value

#### `public FString `[`Etag_Optional`](#structFRHAPI__Notification_1ae8660f0a8480f5407e67755d9d4dbd44) <a id="structFRHAPI__Notification_1ae8660f0a8480f5407e67755d9d4dbd44"></a>

ETag for the resource at rh_url at the time of this notification.

#### `public bool `[`Etag_IsSet`](#structFRHAPI__Notification_1a6b05614b7b3914a0d9ee31f2eac7eaab) <a id="structFRHAPI__Notification_1a6b05614b7b3914a0d9ee31f2eac7eaab"></a>

true if Etag_Optional has been set to a value

#### `public FString `[`NotificationId`](#structFRHAPI__Notification_1ab7fc8b3ac00ad8a3655c045b7f7b6bed) <a id="structFRHAPI__Notification_1ab7fc8b3ac00ad8a3655c045b7f7b6bed"></a>

Unique Identifier for the notification. You cannot depend on the format of this string, and it must be considered opaque.

#### `public FDateTime `[`Created`](#structFRHAPI__Notification_1a8af4c0587e0e1ea8402658f2797c848e) <a id="structFRHAPI__Notification_1a8af4c0587e0e1ea8402658f2797c848e"></a>

When this notification was added.

#### `public virtual bool `[`FromJson`](#structFRHAPI__Notification_1a9bfade40a76c5d37cefda2ec62355e25)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Notification_1a9bfade40a76c5d37cefda2ec62355e25"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Notification_1a706e816fd8489fb7f44916423a2d87f4)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__Notification_1a706e816fd8489fb7f44916423a2d87f4"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetMessage`](#structFRHAPI__Notification_1aeae05376f3d0d9b78f8066c26ae15bc6)`()` <a id="structFRHAPI__Notification_1aeae05376f3d0d9b78f8066c26ae15bc6"></a>

Gets the value of Message.

#### `public inline const FString & `[`GetMessage`](#structFRHAPI__Notification_1af55f6f96914bac3d3665290cc5bc6d80)`() const` <a id="structFRHAPI__Notification_1af55f6f96914bac3d3665290cc5bc6d80"></a>

Gets the value of Message.

#### `public inline void `[`SetMessage`](#structFRHAPI__Notification_1af784e497683ed1f0e63bcf0ecbb16756)`(const FString & NewValue)` <a id="structFRHAPI__Notification_1af784e497683ed1f0e63bcf0ecbb16756"></a>

Sets the value of Message.

#### `public inline void `[`SetMessage`](#structFRHAPI__Notification_1a5e919cdd4f250d4666e2f7b7caac8aec)`(FString && NewValue)` <a id="structFRHAPI__Notification_1a5e919cdd4f250d4666e2f7b7caac8aec"></a>

Sets the value of Message using move semantics.

#### `public inline FString & `[`GetRhUrl`](#structFRHAPI__Notification_1a2ebc45d44459d9be01f48e03eadf43d0)`()` <a id="structFRHAPI__Notification_1a2ebc45d44459d9be01f48e03eadf43d0"></a>

Gets the value of RhUrl_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRhUrl`](#structFRHAPI__Notification_1a53cb3b025b38099dc900161498894398)`() const` <a id="structFRHAPI__Notification_1a53cb3b025b38099dc900161498894398"></a>

Gets the value of RhUrl_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRhUrl`](#structFRHAPI__Notification_1aa7f46a7859d4790b81ae9d15a37854e1)`(const FString & DefaultValue) const` <a id="structFRHAPI__Notification_1aa7f46a7859d4790b81ae9d15a37854e1"></a>

Gets the value of RhUrl_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRhUrl`](#structFRHAPI__Notification_1a4792a5d1eb1f4edd47474f17bac7f073)`(FString & OutValue) const` <a id="structFRHAPI__Notification_1a4792a5d1eb1f4edd47474f17bac7f073"></a>

Fills OutValue with the value of RhUrl_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRhUrlOrNull`](#structFRHAPI__Notification_1ad97636adf1daedef604a9b5bdb513e38)`()` <a id="structFRHAPI__Notification_1ad97636adf1daedef604a9b5bdb513e38"></a>

Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRhUrlOrNull`](#structFRHAPI__Notification_1ac1e393d84c6b2215df8d574d5a1b19de)`() const` <a id="structFRHAPI__Notification_1ac1e393d84c6b2215df8d574d5a1b19de"></a>

Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRhUrl`](#structFRHAPI__Notification_1a0f04efbc37b00a9d57bba137652d367e)`(const FString & NewValue)` <a id="structFRHAPI__Notification_1a0f04efbc37b00a9d57bba137652d367e"></a>

Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true.

#### `public inline void `[`SetRhUrl`](#structFRHAPI__Notification_1af97af8af1dfa08d0104fb62375b47f2a)`(FString && NewValue)` <a id="structFRHAPI__Notification_1af97af8af1dfa08d0104fb62375b47f2a"></a>

Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true using move semantics.

#### `public inline void `[`ClearRhUrl`](#structFRHAPI__Notification_1abec18e1a52fdb6a0f2f863bd9a2b8c0f)`()` <a id="structFRHAPI__Notification_1abec18e1a52fdb6a0f2f863bd9a2b8c0f"></a>

Clears the value of RhUrl_Optional and sets RhUrl_IsSet to false.

#### `public inline bool `[`IsRhUrlSet`](#structFRHAPI__Notification_1a38d9f57dbdbb29cc2b8f5e95b5ba8a40)`() const` <a id="structFRHAPI__Notification_1a38d9f57dbdbb29cc2b8f5e95b5ba8a40"></a>

Checks whether RhUrl_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Notification_1a02cf7e6f33ada172c1ba348860a23865)`()` <a id="structFRHAPI__Notification_1a02cf7e6f33ada172c1ba348860a23865"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Notification_1ac8cc9b5c98dc872b35a40c2b53b3b0af)`() const` <a id="structFRHAPI__Notification_1ac8cc9b5c98dc872b35a40c2b53b3b0af"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Notification_1a8836f71e973d8667f5d3234ce8d9220f)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__Notification_1a8836f71e973d8667f5d3234ce8d9220f"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__Notification_1a5bf362e8c77d4ef66ad1002a1384c442)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__Notification_1a5bf362e8c77d4ef66ad1002a1384c442"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Notification_1afb2f5002f416306cdec8572f66426a2b)`()` <a id="structFRHAPI__Notification_1afb2f5002f416306cdec8572f66426a2b"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Notification_1ad9a40b3766425dfda4103ce2010b96f9)`() const` <a id="structFRHAPI__Notification_1ad9a40b3766425dfda4103ce2010b96f9"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__Notification_1aab23cc68c61dabae1439e4ef3de85bb3)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__Notification_1aab23cc68c61dabae1439e4ef3de85bb3"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__Notification_1ab01e3bf3707e524b4372cd7726b0c44f)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__Notification_1ab01e3bf3707e524b4372cd7726b0c44f"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__Notification_1a595377476c3814e5d2d628cf20ac2d1d)`()` <a id="structFRHAPI__Notification_1a595377476c3814e5d2d628cf20ac2d1d"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__Notification_1a455680c2a548cc2d6ba7c62fcbae422c)`() const` <a id="structFRHAPI__Notification_1a455680c2a548cc2d6ba7c62fcbae422c"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FString & `[`GetEtag`](#structFRHAPI__Notification_1a7464862ce438ed186459b7263276b799)`()` <a id="structFRHAPI__Notification_1a7464862ce438ed186459b7263276b799"></a>

Gets the value of Etag_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEtag`](#structFRHAPI__Notification_1adab8f1fd89278ce76b02114829b98824)`() const` <a id="structFRHAPI__Notification_1adab8f1fd89278ce76b02114829b98824"></a>

Gets the value of Etag_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEtag`](#structFRHAPI__Notification_1a18fec996e3e2cd7c3e22cf3421158c72)`(const FString & DefaultValue) const` <a id="structFRHAPI__Notification_1a18fec996e3e2cd7c3e22cf3421158c72"></a>

Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEtag`](#structFRHAPI__Notification_1a9e49f93b9c00111bc2226d61cdbe80bc)`(FString & OutValue) const` <a id="structFRHAPI__Notification_1a9e49f93b9c00111bc2226d61cdbe80bc"></a>

Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetEtagOrNull`](#structFRHAPI__Notification_1a7c26061b30f4373efdd88aa53a58d22f)`()` <a id="structFRHAPI__Notification_1a7c26061b30f4373efdd88aa53a58d22f"></a>

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetEtagOrNull`](#structFRHAPI__Notification_1ae97cb7a345cb19dec8249a6c9c2e7874)`() const` <a id="structFRHAPI__Notification_1ae97cb7a345cb19dec8249a6c9c2e7874"></a>

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEtag`](#structFRHAPI__Notification_1a927763eedd49af16ab7472ae825a6121)`(const FString & NewValue)` <a id="structFRHAPI__Notification_1a927763eedd49af16ab7472ae825a6121"></a>

Sets the value of Etag_Optional and also sets Etag_IsSet to true.

#### `public inline void `[`SetEtag`](#structFRHAPI__Notification_1abdf91f9fd7636d1561fe77d4ec2cbefa)`(FString && NewValue)` <a id="structFRHAPI__Notification_1abdf91f9fd7636d1561fe77d4ec2cbefa"></a>

Sets the value of Etag_Optional and also sets Etag_IsSet to true using move semantics.

#### `public inline void `[`ClearEtag`](#structFRHAPI__Notification_1a270365c81e422b9cf7497f5ac8db21b7)`()` <a id="structFRHAPI__Notification_1a270365c81e422b9cf7497f5ac8db21b7"></a>

Clears the value of Etag_Optional and sets Etag_IsSet to false.

#### `public inline bool `[`IsEtagSet`](#structFRHAPI__Notification_1a1fcc4d00b3e231184cdb0f03cd041d7d)`() const` <a id="structFRHAPI__Notification_1a1fcc4d00b3e231184cdb0f03cd041d7d"></a>

Checks whether Etag_Optional has been set.

#### `public inline FString & `[`GetNotificationId`](#structFRHAPI__Notification_1abe1e7577fd60439c9ce9e10c7a1be3b4)`()` <a id="structFRHAPI__Notification_1abe1e7577fd60439c9ce9e10c7a1be3b4"></a>

Gets the value of NotificationId.

#### `public inline const FString & `[`GetNotificationId`](#structFRHAPI__Notification_1a0fe291869d3e81f04d9aa5eea5edb6c6)`() const` <a id="structFRHAPI__Notification_1a0fe291869d3e81f04d9aa5eea5edb6c6"></a>

Gets the value of NotificationId.

#### `public inline void `[`SetNotificationId`](#structFRHAPI__Notification_1a5c118723c634fafbddc710f247e4d9a0)`(const FString & NewValue)` <a id="structFRHAPI__Notification_1a5c118723c634fafbddc710f247e4d9a0"></a>

Sets the value of NotificationId.

#### `public inline void `[`SetNotificationId`](#structFRHAPI__Notification_1a7bf9c145d5e811aa86251d65aadbae25)`(FString && NewValue)` <a id="structFRHAPI__Notification_1a7bf9c145d5e811aa86251d65aadbae25"></a>

Sets the value of NotificationId using move semantics.

#### `public inline FDateTime & `[`GetCreated`](#structFRHAPI__Notification_1a553db4b577f209b37df47db5bb51fe09)`()` <a id="structFRHAPI__Notification_1a553db4b577f209b37df47db5bb51fe09"></a>

Gets the value of Created.

#### `public inline const FDateTime & `[`GetCreated`](#structFRHAPI__Notification_1a4eec26a280f183d7f55819c63344e0c3)`() const` <a id="structFRHAPI__Notification_1a4eec26a280f183d7f55819c63344e0c3"></a>

Gets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__Notification_1acee20f9f1cbfe843e8faecb953788ae1)`(const FDateTime & NewValue)` <a id="structFRHAPI__Notification_1acee20f9f1cbfe843e8faecb953788ae1"></a>

Sets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__Notification_1a0cdbe0e2aaa95c595c7c66ed7b07c7b3)`(FDateTime && NewValue)` <a id="structFRHAPI__Notification_1a0cdbe0e2aaa95c595c7c66ed7b07c7b3"></a>

Sets the value of Created using move semantics.

