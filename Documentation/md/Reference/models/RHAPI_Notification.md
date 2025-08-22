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
`public inline FORCEINLINE FString & `[`GetMessage`](#structFRHAPI__Notification_1a38e35c6d2e18dc54f8e2b10e79983745)`()` | Gets the value of Message.
`public inline FORCEINLINE const FString & `[`GetMessage`](#structFRHAPI__Notification_1a4a585b80474e96f1c8cc0ee6f9dff315)`() const` | Gets the value of Message.
`public inline FORCEINLINE void `[`SetMessage`](#structFRHAPI__Notification_1a68c150776099cc2c93c3c357c187b31e)`(const FString & NewValue)` | Sets the value of Message.
`public inline FORCEINLINE void `[`SetMessage`](#structFRHAPI__Notification_1ad74f5b984058562c372deb6022f718ee)`(FString && NewValue)` | Sets the value of Message using move semantics.
`public inline FORCEINLINE FString & `[`GetRhUrl`](#structFRHAPI__Notification_1a95548b0620bbd74f252e50fde45a4bc7)`()` | Gets the value of RhUrl_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRhUrl`](#structFRHAPI__Notification_1a6d26349142cd31790c6c4bd496b9559b)`() const` | Gets the value of RhUrl_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRhUrl`](#structFRHAPI__Notification_1a4905bb66da3a4b66d40f8e44385b11d2)`(const FString & DefaultValue) const` | Gets the value of RhUrl_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRhUrl`](#structFRHAPI__Notification_1a383f4e2a2a1594a578b09e49a5203e6c)`(FString & OutValue) const` | Fills OutValue with the value of RhUrl_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRhUrlOrNull`](#structFRHAPI__Notification_1a52b314a49f6c573da6d11ca254636e4f)`()` | Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRhUrlOrNull`](#structFRHAPI__Notification_1a7838ac87c7a24df2d932f98530704285)`() const` | Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRhUrl`](#structFRHAPI__Notification_1a60e15d4f407fbadb0f822dc4c6a0663d)`(const FString & NewValue)` | Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true.
`public inline FORCEINLINE void `[`SetRhUrl`](#structFRHAPI__Notification_1ac18c7302aaa29004b59d82814c81fac9)`(FString && NewValue)` | Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true using move semantics.
`public inline void `[`ClearRhUrl`](#structFRHAPI__Notification_1abec18e1a52fdb6a0f2f863bd9a2b8c0f)`()` | Clears the value of RhUrl_Optional and sets RhUrl_IsSet to false.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Notification_1a0b0009eb70590fef113de0bf3388d03a)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Notification_1ae38cc061e1ce8dc6cfce69d3bb73d8ae)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Notification_1ab3791f386ce64cfbe7720d6cecf09d75)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__Notification_1aa69a95b08d61cd06705b61067a5cc6e1)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Notification_1a9bb22b93a219c301d9a576fada30c237)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Notification_1acbadc620f5de5e9c31657aac6c282af6)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Notification_1a3518e8822c13624f9051acdd01fb9a5f)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Notification_1abb9f30f076e91fb548d9aa6f32b267b8)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__Notification_1a595377476c3814e5d2d628cf20ac2d1d)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE FString & `[`GetEtag`](#structFRHAPI__Notification_1a1a8290e18d5962b106efb36cd428b3d8)`()` | Gets the value of Etag_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetEtag`](#structFRHAPI__Notification_1a25ec1e8cd16e19961763e7d114aac71d)`() const` | Gets the value of Etag_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetEtag`](#structFRHAPI__Notification_1ab7855f0bc50a5b2c0b0302aa2e27c078)`(const FString & DefaultValue) const` | Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEtag`](#structFRHAPI__Notification_1a739f12240abc5db42a510e1cb52595ae)`(FString & OutValue) const` | Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetEtagOrNull`](#structFRHAPI__Notification_1a2b7f0c138f876ef2c1b6e81cb47cbba2)`()` | Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetEtagOrNull`](#structFRHAPI__Notification_1adda1102e4f447043283591c0191a7e8a)`() const` | Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEtag`](#structFRHAPI__Notification_1ad3cb4417e322b0a46e6f6e167e678489)`(const FString & NewValue)` | Sets the value of Etag_Optional and also sets Etag_IsSet to true.
`public inline FORCEINLINE void `[`SetEtag`](#structFRHAPI__Notification_1a05f8d101786ff287f7022f872f5de3d0)`(FString && NewValue)` | Sets the value of Etag_Optional and also sets Etag_IsSet to true using move semantics.
`public inline void `[`ClearEtag`](#structFRHAPI__Notification_1a270365c81e422b9cf7497f5ac8db21b7)`()` | Clears the value of Etag_Optional and sets Etag_IsSet to false.
`public inline FORCEINLINE FString & `[`GetNotificationId`](#structFRHAPI__Notification_1ad5fd750157d33d99a21442f943ea0c4b)`()` | Gets the value of NotificationId.
`public inline FORCEINLINE const FString & `[`GetNotificationId`](#structFRHAPI__Notification_1a87719b006db1c43203ba738e01c4db2f)`() const` | Gets the value of NotificationId.
`public inline FORCEINLINE void `[`SetNotificationId`](#structFRHAPI__Notification_1a36312ea471785b91e70db6fe5786ac26)`(const FString & NewValue)` | Sets the value of NotificationId.
`public inline FORCEINLINE void `[`SetNotificationId`](#structFRHAPI__Notification_1abc4ebde55ffd56bfc6259c5ecc97e208)`(FString && NewValue)` | Sets the value of NotificationId using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetCreated`](#structFRHAPI__Notification_1a25190bf43911d7a89b389ec1a0a63bbb)`()` | Gets the value of Created.
`public inline FORCEINLINE const FDateTime & `[`GetCreated`](#structFRHAPI__Notification_1af8c50fe6584139d6a7581e4da8816fd1)`() const` | Gets the value of Created.
`public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__Notification_1a56177cb39daa875888598d1bfed64187)`(const FDateTime & NewValue)` | Sets the value of Created.
`public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__Notification_1a614948ec894078dc22afdf7bcc96da77)`(FDateTime && NewValue)` | Sets the value of Created using move semantics.

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

#### `public inline FORCEINLINE FString & `[`GetMessage`](#structFRHAPI__Notification_1a38e35c6d2e18dc54f8e2b10e79983745)`()` <a id="structFRHAPI__Notification_1a38e35c6d2e18dc54f8e2b10e79983745"></a>

Gets the value of Message.

#### `public inline FORCEINLINE const FString & `[`GetMessage`](#structFRHAPI__Notification_1a4a585b80474e96f1c8cc0ee6f9dff315)`() const` <a id="structFRHAPI__Notification_1a4a585b80474e96f1c8cc0ee6f9dff315"></a>

Gets the value of Message.

#### `public inline FORCEINLINE void `[`SetMessage`](#structFRHAPI__Notification_1a68c150776099cc2c93c3c357c187b31e)`(const FString & NewValue)` <a id="structFRHAPI__Notification_1a68c150776099cc2c93c3c357c187b31e"></a>

Sets the value of Message.

#### `public inline FORCEINLINE void `[`SetMessage`](#structFRHAPI__Notification_1ad74f5b984058562c372deb6022f718ee)`(FString && NewValue)` <a id="structFRHAPI__Notification_1ad74f5b984058562c372deb6022f718ee"></a>

Sets the value of Message using move semantics.

#### `public inline FORCEINLINE FString & `[`GetRhUrl`](#structFRHAPI__Notification_1a95548b0620bbd74f252e50fde45a4bc7)`()` <a id="structFRHAPI__Notification_1a95548b0620bbd74f252e50fde45a4bc7"></a>

Gets the value of RhUrl_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRhUrl`](#structFRHAPI__Notification_1a6d26349142cd31790c6c4bd496b9559b)`() const` <a id="structFRHAPI__Notification_1a6d26349142cd31790c6c4bd496b9559b"></a>

Gets the value of RhUrl_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRhUrl`](#structFRHAPI__Notification_1a4905bb66da3a4b66d40f8e44385b11d2)`(const FString & DefaultValue) const` <a id="structFRHAPI__Notification_1a4905bb66da3a4b66d40f8e44385b11d2"></a>

Gets the value of RhUrl_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRhUrl`](#structFRHAPI__Notification_1a383f4e2a2a1594a578b09e49a5203e6c)`(FString & OutValue) const` <a id="structFRHAPI__Notification_1a383f4e2a2a1594a578b09e49a5203e6c"></a>

Fills OutValue with the value of RhUrl_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRhUrlOrNull`](#structFRHAPI__Notification_1a52b314a49f6c573da6d11ca254636e4f)`()` <a id="structFRHAPI__Notification_1a52b314a49f6c573da6d11ca254636e4f"></a>

Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRhUrlOrNull`](#structFRHAPI__Notification_1a7838ac87c7a24df2d932f98530704285)`() const` <a id="structFRHAPI__Notification_1a7838ac87c7a24df2d932f98530704285"></a>

Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRhUrl`](#structFRHAPI__Notification_1a60e15d4f407fbadb0f822dc4c6a0663d)`(const FString & NewValue)` <a id="structFRHAPI__Notification_1a60e15d4f407fbadb0f822dc4c6a0663d"></a>

Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRhUrl`](#structFRHAPI__Notification_1ac18c7302aaa29004b59d82814c81fac9)`(FString && NewValue)` <a id="structFRHAPI__Notification_1ac18c7302aaa29004b59d82814c81fac9"></a>

Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true using move semantics.

#### `public inline void `[`ClearRhUrl`](#structFRHAPI__Notification_1abec18e1a52fdb6a0f2f863bd9a2b8c0f)`()` <a id="structFRHAPI__Notification_1abec18e1a52fdb6a0f2f863bd9a2b8c0f"></a>

Clears the value of RhUrl_Optional and sets RhUrl_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Notification_1a0b0009eb70590fef113de0bf3388d03a)`()` <a id="structFRHAPI__Notification_1a0b0009eb70590fef113de0bf3388d03a"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Notification_1ae38cc061e1ce8dc6cfce69d3bb73d8ae)`() const` <a id="structFRHAPI__Notification_1ae38cc061e1ce8dc6cfce69d3bb73d8ae"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Notification_1ab3791f386ce64cfbe7720d6cecf09d75)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__Notification_1ab3791f386ce64cfbe7720d6cecf09d75"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__Notification_1aa69a95b08d61cd06705b61067a5cc6e1)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__Notification_1aa69a95b08d61cd06705b61067a5cc6e1"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Notification_1a9bb22b93a219c301d9a576fada30c237)`()` <a id="structFRHAPI__Notification_1a9bb22b93a219c301d9a576fada30c237"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Notification_1acbadc620f5de5e9c31657aac6c282af6)`() const` <a id="structFRHAPI__Notification_1acbadc620f5de5e9c31657aac6c282af6"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Notification_1a3518e8822c13624f9051acdd01fb9a5f)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__Notification_1a3518e8822c13624f9051acdd01fb9a5f"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__Notification_1abb9f30f076e91fb548d9aa6f32b267b8)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__Notification_1abb9f30f076e91fb548d9aa6f32b267b8"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__Notification_1a595377476c3814e5d2d628cf20ac2d1d)`()` <a id="structFRHAPI__Notification_1a595377476c3814e5d2d628cf20ac2d1d"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetEtag`](#structFRHAPI__Notification_1a1a8290e18d5962b106efb36cd428b3d8)`()` <a id="structFRHAPI__Notification_1a1a8290e18d5962b106efb36cd428b3d8"></a>

Gets the value of Etag_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetEtag`](#structFRHAPI__Notification_1a25ec1e8cd16e19961763e7d114aac71d)`() const` <a id="structFRHAPI__Notification_1a25ec1e8cd16e19961763e7d114aac71d"></a>

Gets the value of Etag_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetEtag`](#structFRHAPI__Notification_1ab7855f0bc50a5b2c0b0302aa2e27c078)`(const FString & DefaultValue) const` <a id="structFRHAPI__Notification_1ab7855f0bc50a5b2c0b0302aa2e27c078"></a>

Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEtag`](#structFRHAPI__Notification_1a739f12240abc5db42a510e1cb52595ae)`(FString & OutValue) const` <a id="structFRHAPI__Notification_1a739f12240abc5db42a510e1cb52595ae"></a>

Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetEtagOrNull`](#structFRHAPI__Notification_1a2b7f0c138f876ef2c1b6e81cb47cbba2)`()` <a id="structFRHAPI__Notification_1a2b7f0c138f876ef2c1b6e81cb47cbba2"></a>

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetEtagOrNull`](#structFRHAPI__Notification_1adda1102e4f447043283591c0191a7e8a)`() const` <a id="structFRHAPI__Notification_1adda1102e4f447043283591c0191a7e8a"></a>

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEtag`](#structFRHAPI__Notification_1ad3cb4417e322b0a46e6f6e167e678489)`(const FString & NewValue)` <a id="structFRHAPI__Notification_1ad3cb4417e322b0a46e6f6e167e678489"></a>

Sets the value of Etag_Optional and also sets Etag_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEtag`](#structFRHAPI__Notification_1a05f8d101786ff287f7022f872f5de3d0)`(FString && NewValue)` <a id="structFRHAPI__Notification_1a05f8d101786ff287f7022f872f5de3d0"></a>

Sets the value of Etag_Optional and also sets Etag_IsSet to true using move semantics.

#### `public inline void `[`ClearEtag`](#structFRHAPI__Notification_1a270365c81e422b9cf7497f5ac8db21b7)`()` <a id="structFRHAPI__Notification_1a270365c81e422b9cf7497f5ac8db21b7"></a>

Clears the value of Etag_Optional and sets Etag_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetNotificationId`](#structFRHAPI__Notification_1ad5fd750157d33d99a21442f943ea0c4b)`()` <a id="structFRHAPI__Notification_1ad5fd750157d33d99a21442f943ea0c4b"></a>

Gets the value of NotificationId.

#### `public inline FORCEINLINE const FString & `[`GetNotificationId`](#structFRHAPI__Notification_1a87719b006db1c43203ba738e01c4db2f)`() const` <a id="structFRHAPI__Notification_1a87719b006db1c43203ba738e01c4db2f"></a>

Gets the value of NotificationId.

#### `public inline FORCEINLINE void `[`SetNotificationId`](#structFRHAPI__Notification_1a36312ea471785b91e70db6fe5786ac26)`(const FString & NewValue)` <a id="structFRHAPI__Notification_1a36312ea471785b91e70db6fe5786ac26"></a>

Sets the value of NotificationId.

#### `public inline FORCEINLINE void `[`SetNotificationId`](#structFRHAPI__Notification_1abc4ebde55ffd56bfc6259c5ecc97e208)`(FString && NewValue)` <a id="structFRHAPI__Notification_1abc4ebde55ffd56bfc6259c5ecc97e208"></a>

Sets the value of NotificationId using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetCreated`](#structFRHAPI__Notification_1a25190bf43911d7a89b389ec1a0a63bbb)`()` <a id="structFRHAPI__Notification_1a25190bf43911d7a89b389ec1a0a63bbb"></a>

Gets the value of Created.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreated`](#structFRHAPI__Notification_1af8c50fe6584139d6a7581e4da8816fd1)`() const` <a id="structFRHAPI__Notification_1af8c50fe6584139d6a7581e4da8816fd1"></a>

Gets the value of Created.

#### `public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__Notification_1a56177cb39daa875888598d1bfed64187)`(const FDateTime & NewValue)` <a id="structFRHAPI__Notification_1a56177cb39daa875888598d1bfed64187"></a>

Sets the value of Created.

#### `public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__Notification_1a614948ec894078dc22afdf7bcc96da77)`(FDateTime && NewValue)` <a id="structFRHAPI__Notification_1a614948ec894078dc22afdf7bcc96da77"></a>

Sets the value of Created using move semantics.

