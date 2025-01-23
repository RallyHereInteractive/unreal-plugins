---
title: RHAPI_InventorySession
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_InventorySession`](#structFRHAPI__InventorySession) | Inventory Session for a Player.

## struct `FRHAPI_InventorySession` <a id="structFRHAPI__InventorySession"></a>

```
struct FRHAPI_InventorySession
  : public FRHAPI_Model
```

Inventory Session for a Player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`SessionId`](#structFRHAPI__InventorySession_1ac32000025fb5fd4d9f376126e1819fd3) | Unique ID for this Inventory Session.
`public ERHAPI_InventoryPlatform `[`SessionPlatform_Optional`](#structFRHAPI__InventorySession_1a63e079f661749b72b5d983ab4363ce94) | 
`public bool `[`SessionPlatform_IsSet`](#structFRHAPI__InventorySession_1a243f2da591a0898aecb05f911c3c8ad1) | true if SessionPlatform_Optional has been set to a value
`public bool `[`SessionPlatform_IsNull`](#structFRHAPI__InventorySession_1a375f1f6f9cb6f19e4da580e72e509d8a) | true if SessionPlatform_Optional has been explicitly set to null
`public TArray< int32 > `[`AppliedDurableLoot_Optional`](#structFRHAPI__InventorySession_1a030b2590e3b6f227f40108949604cfcf) | Durable Loot that has been applied when this Inventory Session was created.
`public bool `[`AppliedDurableLoot_IsSet`](#structFRHAPI__InventorySession_1a7b4edec20f92776ba5f623561cd07b5e) | true if AppliedDurableLoot_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InventorySession_1a7591201a9617ed63b8ad4d09dfd1669e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventorySession_1a9fb8cd44da21f9edb04d2177ab792381)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetSessionId`](#structFRHAPI__InventorySession_1a204b0a63c486799abf9d46c7fae3b788)`()` | Gets the value of SessionId.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__InventorySession_1aea9666f1302fb37dcb6783a4db4f127b)`() const` | Gets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__InventorySession_1a8ed146adebc1ae3d31284f5e880ae93f)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__InventorySession_1aa4bd09bdb7cf73d635d15e10652542dd)`(FString && NewValue)` | Sets the value of SessionId using move semantics.
`public inline ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1a4a56519081a4f0ec1e6b18b107752c87)`()` | Gets the value of SessionPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1a17e1fb6c03ddc2877fff572dc0f44817)`() const` | Gets the value of SessionPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1adb4abb482c3eb44361709a9506b91d91)`(const ERHAPI_InventoryPlatform & DefaultValue) const` | Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1a314d32758be04d8f875335b4e658bf59)`(ERHAPI_InventoryPlatform & OutValue) const` | Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_InventoryPlatform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySession_1a0fa620e374f1e60f0fdcde488f747369)`()` | Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_InventoryPlatform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySession_1a2dffa983fae1c89cbe1cafdbcb37c14f)`() const` | Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySession_1ade481bf396b0a1b59fbaf97ef573f3b6)`(const ERHAPI_InventoryPlatform & NewValue)` | Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.
`public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySession_1a451ac04f5d9063afce4c4914d2f1cd44)`(ERHAPI_InventoryPlatform && NewValue)` | Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true using move semantics.
`public inline void `[`ClearSessionPlatform`](#structFRHAPI__InventorySession_1a6606ed602284d4255e6bfc613d7e0619)`()` | Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.
`public inline bool `[`IsSessionPlatformSet`](#structFRHAPI__InventorySession_1a9e3c423febc4598d064a3382b664c867)`() const` | Checks whether SessionPlatform_Optional has been set.
`public inline void `[`SetSessionPlatformToNull`](#structFRHAPI__InventorySession_1a361d54db4a0449bc378430d539f65aef)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsSessionPlatformNull`](#structFRHAPI__InventorySession_1a02b6d7de3b92206ad4ecb86c76a3611d)`() const` | Checks whether SessionPlatform_Optional is set to null.
`public inline TArray< int32 > & `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1ac3fcc5d768a066962acf15759ed09010)`()` | Gets the value of AppliedDurableLoot_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1ad2d6bb793233653c0e52fc2cff437f70)`() const` | Gets the value of AppliedDurableLoot_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a186373fc0ba4cae1e012c6068788c7b4)`(const TArray< int32 > & DefaultValue) const` | Gets the value of AppliedDurableLoot_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a19b3b9f32380d4a9e1dd821fec1b0f4a)`(TArray< int32 > & OutValue) const` | Fills OutValue with the value of AppliedDurableLoot_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< int32 > * `[`GetAppliedDurableLootOrNull`](#structFRHAPI__InventorySession_1abd2f0a572de5de70661a3ff2dbfa9677)`()` | Returns a pointer to AppliedDurableLoot_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< int32 > * `[`GetAppliedDurableLootOrNull`](#structFRHAPI__InventorySession_1ae41f08d4bd5b69987e626f1f496ec107)`() const` | Returns a pointer to AppliedDurableLoot_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a13007475fc84667192dba28835f7afc7)`(const TArray< int32 > & NewValue)` | Sets the value of AppliedDurableLoot_Optional and also sets AppliedDurableLoot_IsSet to true.
`public inline void `[`SetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a49da841d9ac91436d0f25415bbc62f84)`(TArray< int32 > && NewValue)` | Sets the value of AppliedDurableLoot_Optional and also sets AppliedDurableLoot_IsSet to true using move semantics.
`public inline void `[`ClearAppliedDurableLoot`](#structFRHAPI__InventorySession_1a6b43aeccd15ffee5e76a5fde895610d5)`()` | Clears the value of AppliedDurableLoot_Optional and sets AppliedDurableLoot_IsSet to false.
`public inline bool `[`IsAppliedDurableLootSet`](#structFRHAPI__InventorySession_1aac09187e9daaa1f03059c606bf69e642)`() const` | Checks whether AppliedDurableLoot_Optional has been set.

### Members

#### `public FString `[`SessionId`](#structFRHAPI__InventorySession_1ac32000025fb5fd4d9f376126e1819fd3) <a id="structFRHAPI__InventorySession_1ac32000025fb5fd4d9f376126e1819fd3"></a>

Unique ID for this Inventory Session.

#### `public ERHAPI_InventoryPlatform `[`SessionPlatform_Optional`](#structFRHAPI__InventorySession_1a63e079f661749b72b5d983ab4363ce94) <a id="structFRHAPI__InventorySession_1a63e079f661749b72b5d983ab4363ce94"></a>

#### `public bool `[`SessionPlatform_IsSet`](#structFRHAPI__InventorySession_1a243f2da591a0898aecb05f911c3c8ad1) <a id="structFRHAPI__InventorySession_1a243f2da591a0898aecb05f911c3c8ad1"></a>

true if SessionPlatform_Optional has been set to a value

#### `public bool `[`SessionPlatform_IsNull`](#structFRHAPI__InventorySession_1a375f1f6f9cb6f19e4da580e72e509d8a) <a id="structFRHAPI__InventorySession_1a375f1f6f9cb6f19e4da580e72e509d8a"></a>

true if SessionPlatform_Optional has been explicitly set to null

#### `public TArray< int32 > `[`AppliedDurableLoot_Optional`](#structFRHAPI__InventorySession_1a030b2590e3b6f227f40108949604cfcf) <a id="structFRHAPI__InventorySession_1a030b2590e3b6f227f40108949604cfcf"></a>

Durable Loot that has been applied when this Inventory Session was created.

#### `public bool `[`AppliedDurableLoot_IsSet`](#structFRHAPI__InventorySession_1a7b4edec20f92776ba5f623561cd07b5e) <a id="structFRHAPI__InventorySession_1a7b4edec20f92776ba5f623561cd07b5e"></a>

true if AppliedDurableLoot_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__InventorySession_1a7591201a9617ed63b8ad4d09dfd1669e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InventorySession_1a7591201a9617ed63b8ad4d09dfd1669e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__InventorySession_1a9fb8cd44da21f9edb04d2177ab792381)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__InventorySession_1a9fb8cd44da21f9edb04d2177ab792381"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetSessionId`](#structFRHAPI__InventorySession_1a204b0a63c486799abf9d46c7fae3b788)`()` <a id="structFRHAPI__InventorySession_1a204b0a63c486799abf9d46c7fae3b788"></a>

Gets the value of SessionId.

#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__InventorySession_1aea9666f1302fb37dcb6783a4db4f127b)`() const` <a id="structFRHAPI__InventorySession_1aea9666f1302fb37dcb6783a4db4f127b"></a>

Gets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__InventorySession_1a8ed146adebc1ae3d31284f5e880ae93f)`(const FString & NewValue)` <a id="structFRHAPI__InventorySession_1a8ed146adebc1ae3d31284f5e880ae93f"></a>

Sets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__InventorySession_1aa4bd09bdb7cf73d635d15e10652542dd)`(FString && NewValue)` <a id="structFRHAPI__InventorySession_1aa4bd09bdb7cf73d635d15e10652542dd"></a>

Sets the value of SessionId using move semantics.

#### `public inline ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1a4a56519081a4f0ec1e6b18b107752c87)`()` <a id="structFRHAPI__InventorySession_1a4a56519081a4f0ec1e6b18b107752c87"></a>

Gets the value of SessionPlatform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1a17e1fb6c03ddc2877fff572dc0f44817)`() const` <a id="structFRHAPI__InventorySession_1a17e1fb6c03ddc2877fff572dc0f44817"></a>

Gets the value of SessionPlatform_Optional, regardless of it having been set.

#### `public inline const ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1adb4abb482c3eb44361709a9506b91d91)`(const ERHAPI_InventoryPlatform & DefaultValue) const` <a id="structFRHAPI__InventorySession_1adb4abb482c3eb44361709a9506b91d91"></a>

Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1a314d32758be04d8f875335b4e658bf59)`(ERHAPI_InventoryPlatform & OutValue) const` <a id="structFRHAPI__InventorySession_1a314d32758be04d8f875335b4e658bf59"></a>

Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_InventoryPlatform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySession_1a0fa620e374f1e60f0fdcde488f747369)`()` <a id="structFRHAPI__InventorySession_1a0fa620e374f1e60f0fdcde488f747369"></a>

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_InventoryPlatform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySession_1a2dffa983fae1c89cbe1cafdbcb37c14f)`() const` <a id="structFRHAPI__InventorySession_1a2dffa983fae1c89cbe1cafdbcb37c14f"></a>

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySession_1ade481bf396b0a1b59fbaf97ef573f3b6)`(const ERHAPI_InventoryPlatform & NewValue)` <a id="structFRHAPI__InventorySession_1ade481bf396b0a1b59fbaf97ef573f3b6"></a>

Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.

#### `public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySession_1a451ac04f5d9063afce4c4914d2f1cd44)`(ERHAPI_InventoryPlatform && NewValue)` <a id="structFRHAPI__InventorySession_1a451ac04f5d9063afce4c4914d2f1cd44"></a>

Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionPlatform`](#structFRHAPI__InventorySession_1a6606ed602284d4255e6bfc613d7e0619)`()` <a id="structFRHAPI__InventorySession_1a6606ed602284d4255e6bfc613d7e0619"></a>

Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.

#### `public inline bool `[`IsSessionPlatformSet`](#structFRHAPI__InventorySession_1a9e3c423febc4598d064a3382b664c867)`() const` <a id="structFRHAPI__InventorySession_1a9e3c423febc4598d064a3382b664c867"></a>

Checks whether SessionPlatform_Optional has been set.

#### `public inline void `[`SetSessionPlatformToNull`](#structFRHAPI__InventorySession_1a361d54db4a0449bc378430d539f65aef)`()` <a id="structFRHAPI__InventorySession_1a361d54db4a0449bc378430d539f65aef"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsSessionPlatformNull`](#structFRHAPI__InventorySession_1a02b6d7de3b92206ad4ecb86c76a3611d)`() const` <a id="structFRHAPI__InventorySession_1a02b6d7de3b92206ad4ecb86c76a3611d"></a>

Checks whether SessionPlatform_Optional is set to null.

#### `public inline TArray< int32 > & `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1ac3fcc5d768a066962acf15759ed09010)`()` <a id="structFRHAPI__InventorySession_1ac3fcc5d768a066962acf15759ed09010"></a>

Gets the value of AppliedDurableLoot_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1ad2d6bb793233653c0e52fc2cff437f70)`() const` <a id="structFRHAPI__InventorySession_1ad2d6bb793233653c0e52fc2cff437f70"></a>

Gets the value of AppliedDurableLoot_Optional, regardless of it having been set.

#### `public inline const TArray< int32 > & `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a186373fc0ba4cae1e012c6068788c7b4)`(const TArray< int32 > & DefaultValue) const` <a id="structFRHAPI__InventorySession_1a186373fc0ba4cae1e012c6068788c7b4"></a>

Gets the value of AppliedDurableLoot_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a19b3b9f32380d4a9e1dd821fec1b0f4a)`(TArray< int32 > & OutValue) const` <a id="structFRHAPI__InventorySession_1a19b3b9f32380d4a9e1dd821fec1b0f4a"></a>

Fills OutValue with the value of AppliedDurableLoot_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< int32 > * `[`GetAppliedDurableLootOrNull`](#structFRHAPI__InventorySession_1abd2f0a572de5de70661a3ff2dbfa9677)`()` <a id="structFRHAPI__InventorySession_1abd2f0a572de5de70661a3ff2dbfa9677"></a>

Returns a pointer to AppliedDurableLoot_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< int32 > * `[`GetAppliedDurableLootOrNull`](#structFRHAPI__InventorySession_1ae41f08d4bd5b69987e626f1f496ec107)`() const` <a id="structFRHAPI__InventorySession_1ae41f08d4bd5b69987e626f1f496ec107"></a>

Returns a pointer to AppliedDurableLoot_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a13007475fc84667192dba28835f7afc7)`(const TArray< int32 > & NewValue)` <a id="structFRHAPI__InventorySession_1a13007475fc84667192dba28835f7afc7"></a>

Sets the value of AppliedDurableLoot_Optional and also sets AppliedDurableLoot_IsSet to true.

#### `public inline void `[`SetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a49da841d9ac91436d0f25415bbc62f84)`(TArray< int32 > && NewValue)` <a id="structFRHAPI__InventorySession_1a49da841d9ac91436d0f25415bbc62f84"></a>

Sets the value of AppliedDurableLoot_Optional and also sets AppliedDurableLoot_IsSet to true using move semantics.

#### `public inline void `[`ClearAppliedDurableLoot`](#structFRHAPI__InventorySession_1a6b43aeccd15ffee5e76a5fde895610d5)`()` <a id="structFRHAPI__InventorySession_1a6b43aeccd15ffee5e76a5fde895610d5"></a>

Clears the value of AppliedDurableLoot_Optional and sets AppliedDurableLoot_IsSet to false.

#### `public inline bool `[`IsAppliedDurableLootSet`](#structFRHAPI__InventorySession_1aac09187e9daaa1f03059c606bf69e642)`() const` <a id="structFRHAPI__InventorySession_1aac09187e9daaa1f03059c606bf69e642"></a>

Checks whether AppliedDurableLoot_Optional has been set.

