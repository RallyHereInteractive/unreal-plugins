# group `RHAPI_Notification` <a id="group__RHAPI__Notification"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__Notification_1a290fa10324e33b33c0931c1d4ba92762)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Notification_1a20876b56542c2a7f1fefa60733e924a2)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetMessage`](#structFRHAPI__Notification_1ae013fad90cd40a95d2d627550491bcd3)`()` | Gets the value of Message.
`public inline const FString & `[`GetMessage`](#structFRHAPI__Notification_1a483f507d7236fe1a937539bda11cb667)`() const` | Gets the value of Message.
`public inline void `[`SetMessage`](#structFRHAPI__Notification_1ae5f6d7e3aa0bb4cec66f3ef684736fd2)`(FString NewValue)` | Sets the value of Message.
`public inline FString & `[`GetRhUrl`](#structFRHAPI__Notification_1a62380cae8a2adacaa8e2e44255fd2bf2)`()` | Gets the value of RhUrl_Optional, regardless of it having been set.
`public inline const FString & `[`GetRhUrl`](#structFRHAPI__Notification_1a9edca49ded3ed83fc5e2d3ceb0dc45c0)`() const` | Gets the value of RhUrl_Optional, regardless of it having been set.
`public inline const FString & `[`GetRhUrl`](#structFRHAPI__Notification_1acabebc814d377a928882aa3b30cc034e)`(const FString & DefaultValue) const` | Gets the value of RhUrl_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRhUrl`](#structFRHAPI__Notification_1a4792a5d1eb1f4edd47474f17bac7f073)`(FString & OutValue) const` | Fills OutValue with the value of RhUrl_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRhUrlOrNull`](#structFRHAPI__Notification_1aca1731a511c71e33a9df6ef9b9f6efb0)`()` | Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRhUrlOrNull`](#structFRHAPI__Notification_1ae925e7bd30d42446b9a9a3a55ab9a303)`() const` | Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRhUrl`](#structFRHAPI__Notification_1a6686c952f35b6680510fbd4c5c6d1f65)`(FString NewValue)` | Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true.
`public inline void `[`ClearRhUrl`](#structFRHAPI__Notification_1abec18e1a52fdb6a0f2f863bd9a2b8c0f)`()` | Clears the value of RhUrl_Optional and sets RhUrl_IsSet to false.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Notification_1abacdd5bbf93f5f9a0792bf6aaa29f5b3)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Notification_1a96bd2509a4af4a0ed91aa51fac49ed54)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Notification_1a5e25c0358dfcc7cb39a1218cf9a1b229)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__Notification_1a5bf362e8c77d4ef66ad1002a1384c442)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Notification_1a5548ad4106f6569427dc5977b5a457f0)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Notification_1ad2abe39a4b2fe07310c385bdd11a5615)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__Notification_1a565c080927068eb56d2fc78646def077)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__Notification_1a595377476c3814e5d2d628cf20ac2d1d)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FString & `[`GetEtag`](#structFRHAPI__Notification_1a7bf6b0f58e0516336ed67b998e38c413)`()` | Gets the value of Etag_Optional, regardless of it having been set.
`public inline const FString & `[`GetEtag`](#structFRHAPI__Notification_1a2c240194d3e9f6af9e99b9c3d77a8030)`() const` | Gets the value of Etag_Optional, regardless of it having been set.
`public inline const FString & `[`GetEtag`](#structFRHAPI__Notification_1a37096664cfc81ad28df2bae12580b7be)`(const FString & DefaultValue) const` | Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEtag`](#structFRHAPI__Notification_1a9e49f93b9c00111bc2226d61cdbe80bc)`(FString & OutValue) const` | Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetEtagOrNull`](#structFRHAPI__Notification_1a93c8855312f1903103f1d49cfe3e7a38)`()` | Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetEtagOrNull`](#structFRHAPI__Notification_1a267e03b817886cb7ace4dade429990fd)`() const` | Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEtag`](#structFRHAPI__Notification_1a3d3dbfc798fb63f70b3c40db66d0b10a)`(FString NewValue)` | Sets the value of Etag_Optional and also sets Etag_IsSet to true.
`public inline void `[`ClearEtag`](#structFRHAPI__Notification_1a270365c81e422b9cf7497f5ac8db21b7)`()` | Clears the value of Etag_Optional and sets Etag_IsSet to false.
`public inline FString & `[`GetNotificationId`](#structFRHAPI__Notification_1a8f80a8b8678957cbc77cfb355c6fddd3)`()` | Gets the value of NotificationId.
`public inline const FString & `[`GetNotificationId`](#structFRHAPI__Notification_1a07bb182df03aae6a51e9ebc236c250f8)`() const` | Gets the value of NotificationId.
`public inline void `[`SetNotificationId`](#structFRHAPI__Notification_1ac4e47b528f78cfaab3ccdd477f459dda)`(FString NewValue)` | Sets the value of NotificationId.
`public inline FDateTime & `[`GetCreated`](#structFRHAPI__Notification_1afcad8a6c121f2425dd66d425d5910d15)`()` | Gets the value of Created.
`public inline const FDateTime & `[`GetCreated`](#structFRHAPI__Notification_1a42ced56616701691473283c0ae354585)`() const` | Gets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__Notification_1ab4cc335883a8d39233891217087575d7)`(FDateTime NewValue)` | Sets the value of Created.

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

#### `public virtual bool `[`FromJson`](#structFRHAPI__Notification_1a290fa10324e33b33c0931c1d4ba92762)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Notification_1a290fa10324e33b33c0931c1d4ba92762"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Notification_1a20876b56542c2a7f1fefa60733e924a2)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Notification_1a20876b56542c2a7f1fefa60733e924a2"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetMessage`](#structFRHAPI__Notification_1ae013fad90cd40a95d2d627550491bcd3)`()` <a id="structFRHAPI__Notification_1ae013fad90cd40a95d2d627550491bcd3"></a>

Gets the value of Message.

#### `public inline const FString & `[`GetMessage`](#structFRHAPI__Notification_1a483f507d7236fe1a937539bda11cb667)`() const` <a id="structFRHAPI__Notification_1a483f507d7236fe1a937539bda11cb667"></a>

Gets the value of Message.

#### `public inline void `[`SetMessage`](#structFRHAPI__Notification_1ae5f6d7e3aa0bb4cec66f3ef684736fd2)`(FString NewValue)` <a id="structFRHAPI__Notification_1ae5f6d7e3aa0bb4cec66f3ef684736fd2"></a>

Sets the value of Message.

#### `public inline FString & `[`GetRhUrl`](#structFRHAPI__Notification_1a62380cae8a2adacaa8e2e44255fd2bf2)`()` <a id="structFRHAPI__Notification_1a62380cae8a2adacaa8e2e44255fd2bf2"></a>

Gets the value of RhUrl_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRhUrl`](#structFRHAPI__Notification_1a9edca49ded3ed83fc5e2d3ceb0dc45c0)`() const` <a id="structFRHAPI__Notification_1a9edca49ded3ed83fc5e2d3ceb0dc45c0"></a>

Gets the value of RhUrl_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRhUrl`](#structFRHAPI__Notification_1acabebc814d377a928882aa3b30cc034e)`(const FString & DefaultValue) const` <a id="structFRHAPI__Notification_1acabebc814d377a928882aa3b30cc034e"></a>

Gets the value of RhUrl_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRhUrl`](#structFRHAPI__Notification_1a4792a5d1eb1f4edd47474f17bac7f073)`(FString & OutValue) const` <a id="structFRHAPI__Notification_1a4792a5d1eb1f4edd47474f17bac7f073"></a>

Fills OutValue with the value of RhUrl_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRhUrlOrNull`](#structFRHAPI__Notification_1aca1731a511c71e33a9df6ef9b9f6efb0)`()` <a id="structFRHAPI__Notification_1aca1731a511c71e33a9df6ef9b9f6efb0"></a>

Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRhUrlOrNull`](#structFRHAPI__Notification_1ae925e7bd30d42446b9a9a3a55ab9a303)`() const` <a id="structFRHAPI__Notification_1ae925e7bd30d42446b9a9a3a55ab9a303"></a>

Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRhUrl`](#structFRHAPI__Notification_1a6686c952f35b6680510fbd4c5c6d1f65)`(FString NewValue)` <a id="structFRHAPI__Notification_1a6686c952f35b6680510fbd4c5c6d1f65"></a>

Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true.

#### `public inline void `[`ClearRhUrl`](#structFRHAPI__Notification_1abec18e1a52fdb6a0f2f863bd9a2b8c0f)`()` <a id="structFRHAPI__Notification_1abec18e1a52fdb6a0f2f863bd9a2b8c0f"></a>

Clears the value of RhUrl_Optional and sets RhUrl_IsSet to false.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Notification_1abacdd5bbf93f5f9a0792bf6aaa29f5b3)`()` <a id="structFRHAPI__Notification_1abacdd5bbf93f5f9a0792bf6aaa29f5b3"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Notification_1a96bd2509a4af4a0ed91aa51fac49ed54)`() const` <a id="structFRHAPI__Notification_1a96bd2509a4af4a0ed91aa51fac49ed54"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__Notification_1a5e25c0358dfcc7cb39a1218cf9a1b229)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__Notification_1a5e25c0358dfcc7cb39a1218cf9a1b229"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__Notification_1a5bf362e8c77d4ef66ad1002a1384c442)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__Notification_1a5bf362e8c77d4ef66ad1002a1384c442"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Notification_1a5548ad4106f6569427dc5977b5a457f0)`()` <a id="structFRHAPI__Notification_1a5548ad4106f6569427dc5977b5a457f0"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__Notification_1ad2abe39a4b2fe07310c385bdd11a5615)`() const` <a id="structFRHAPI__Notification_1ad2abe39a4b2fe07310c385bdd11a5615"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__Notification_1a565c080927068eb56d2fc78646def077)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__Notification_1a565c080927068eb56d2fc78646def077"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__Notification_1a595377476c3814e5d2d628cf20ac2d1d)`()` <a id="structFRHAPI__Notification_1a595377476c3814e5d2d628cf20ac2d1d"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FString & `[`GetEtag`](#structFRHAPI__Notification_1a7bf6b0f58e0516336ed67b998e38c413)`()` <a id="structFRHAPI__Notification_1a7bf6b0f58e0516336ed67b998e38c413"></a>

Gets the value of Etag_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEtag`](#structFRHAPI__Notification_1a2c240194d3e9f6af9e99b9c3d77a8030)`() const` <a id="structFRHAPI__Notification_1a2c240194d3e9f6af9e99b9c3d77a8030"></a>

Gets the value of Etag_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEtag`](#structFRHAPI__Notification_1a37096664cfc81ad28df2bae12580b7be)`(const FString & DefaultValue) const` <a id="structFRHAPI__Notification_1a37096664cfc81ad28df2bae12580b7be"></a>

Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEtag`](#structFRHAPI__Notification_1a9e49f93b9c00111bc2226d61cdbe80bc)`(FString & OutValue) const` <a id="structFRHAPI__Notification_1a9e49f93b9c00111bc2226d61cdbe80bc"></a>

Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetEtagOrNull`](#structFRHAPI__Notification_1a93c8855312f1903103f1d49cfe3e7a38)`()` <a id="structFRHAPI__Notification_1a93c8855312f1903103f1d49cfe3e7a38"></a>

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetEtagOrNull`](#structFRHAPI__Notification_1a267e03b817886cb7ace4dade429990fd)`() const` <a id="structFRHAPI__Notification_1a267e03b817886cb7ace4dade429990fd"></a>

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEtag`](#structFRHAPI__Notification_1a3d3dbfc798fb63f70b3c40db66d0b10a)`(FString NewValue)` <a id="structFRHAPI__Notification_1a3d3dbfc798fb63f70b3c40db66d0b10a"></a>

Sets the value of Etag_Optional and also sets Etag_IsSet to true.

#### `public inline void `[`ClearEtag`](#structFRHAPI__Notification_1a270365c81e422b9cf7497f5ac8db21b7)`()` <a id="structFRHAPI__Notification_1a270365c81e422b9cf7497f5ac8db21b7"></a>

Clears the value of Etag_Optional and sets Etag_IsSet to false.

#### `public inline FString & `[`GetNotificationId`](#structFRHAPI__Notification_1a8f80a8b8678957cbc77cfb355c6fddd3)`()` <a id="structFRHAPI__Notification_1a8f80a8b8678957cbc77cfb355c6fddd3"></a>

Gets the value of NotificationId.

#### `public inline const FString & `[`GetNotificationId`](#structFRHAPI__Notification_1a07bb182df03aae6a51e9ebc236c250f8)`() const` <a id="structFRHAPI__Notification_1a07bb182df03aae6a51e9ebc236c250f8"></a>

Gets the value of NotificationId.

#### `public inline void `[`SetNotificationId`](#structFRHAPI__Notification_1ac4e47b528f78cfaab3ccdd477f459dda)`(FString NewValue)` <a id="structFRHAPI__Notification_1ac4e47b528f78cfaab3ccdd477f459dda"></a>

Sets the value of NotificationId.

#### `public inline FDateTime & `[`GetCreated`](#structFRHAPI__Notification_1afcad8a6c121f2425dd66d425d5910d15)`()` <a id="structFRHAPI__Notification_1afcad8a6c121f2425dd66d425d5910d15"></a>

Gets the value of Created.

#### `public inline const FDateTime & `[`GetCreated`](#structFRHAPI__Notification_1a42ced56616701691473283c0ae354585)`() const` <a id="structFRHAPI__Notification_1a42ced56616701691473283c0ae354585"></a>

Gets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__Notification_1ab4cc335883a8d39233891217087575d7)`(FDateTime NewValue)` <a id="structFRHAPI__Notification_1ab4cc335883a8d39233891217087575d7"></a>

Sets the value of Created.

