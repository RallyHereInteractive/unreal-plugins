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
`public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__InventorySession_1a2cbf084c0b6c9cb211e03d9018c6e65b)`()` | Gets the value of SessionId.
`public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__InventorySession_1a1117718d15fb5e97ed0a7940cfdfa2f7)`() const` | Gets the value of SessionId.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__InventorySession_1ae29fa22c57a0caed5c6d524d6fec5e02)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__InventorySession_1a7fc8c9bfd3a09dfe041ea400d0468b81)`(FString && NewValue)` | Sets the value of SessionId using move semantics.
`public inline FORCEINLINE ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1ac8cec10b2c475c59e7d1b6c32066fdeb)`()` | Gets the value of SessionPlatform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1a78991c72da6528e4de7acde4b06a8fd5)`() const` | Gets the value of SessionPlatform_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1a2cff3eb3625c733ccd6b135f09b3821a)`(const ERHAPI_InventoryPlatform & DefaultValue) const` | Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1a4a7c641f888031d996d06ea7d6dff3ff)`(ERHAPI_InventoryPlatform & OutValue) const` | Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_InventoryPlatform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySession_1a604403ccb3f3e2b731afe94dd6d9709d)`()` | Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_InventoryPlatform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySession_1a8c98ae42a7063cded50faa8e8fc607f3)`() const` | Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSessionPlatform`](#structFRHAPI__InventorySession_1a6119ddbd2ef1eb098cd02ddb21f1c03a)`(const ERHAPI_InventoryPlatform & NewValue)` | Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.
`public inline FORCEINLINE void `[`SetSessionPlatform`](#structFRHAPI__InventorySession_1a1e2d15ac791985d84057709ff0584670)`(ERHAPI_InventoryPlatform && NewValue)` | Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true using move semantics.
`public inline void `[`ClearSessionPlatform`](#structFRHAPI__InventorySession_1a6606ed602284d4255e6bfc613d7e0619)`()` | Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.
`public inline FORCEINLINE void `[`SetSessionPlatformToNull`](#structFRHAPI__InventorySession_1ad15feac84fe5cdebf75a82265142e0ac)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsSessionPlatformNull`](#structFRHAPI__InventorySession_1a96af70eaee2d06b100cc98b877d3d5bb)`() const` | Checks whether SessionPlatform_Optional is set to null.
`public inline FORCEINLINE TArray< int32 > & `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a57a9a95f934ff7f9025c89dc3d1d5a6f)`()` | Gets the value of AppliedDurableLoot_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< int32 > & `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a29d817e89cefb1974316d1a8e47382a7)`() const` | Gets the value of AppliedDurableLoot_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< int32 > & `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a736e0046cb024d7e2a8220ca9f66cb27)`(const TArray< int32 > & DefaultValue) const` | Gets the value of AppliedDurableLoot_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a02f5fd7f35a04ec27fdb91772cd1e3dd)`(TArray< int32 > & OutValue) const` | Fills OutValue with the value of AppliedDurableLoot_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< int32 > * `[`GetAppliedDurableLootOrNull`](#structFRHAPI__InventorySession_1ada0490a7258508c403992cd09e7d303e)`()` | Returns a pointer to AppliedDurableLoot_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< int32 > * `[`GetAppliedDurableLootOrNull`](#structFRHAPI__InventorySession_1aa25cedd3dbcad81759c6cdc27e0a83a2)`() const` | Returns a pointer to AppliedDurableLoot_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a251556f9494f9fff4c82791b70b6d2b8)`(const TArray< int32 > & NewValue)` | Sets the value of AppliedDurableLoot_Optional and also sets AppliedDurableLoot_IsSet to true.
`public inline FORCEINLINE void `[`SetAppliedDurableLoot`](#structFRHAPI__InventorySession_1ac1e3ec66c7b3755741c68dbe55b95d56)`(TArray< int32 > && NewValue)` | Sets the value of AppliedDurableLoot_Optional and also sets AppliedDurableLoot_IsSet to true using move semantics.
`public inline void `[`ClearAppliedDurableLoot`](#structFRHAPI__InventorySession_1a6b43aeccd15ffee5e76a5fde895610d5)`()` | Clears the value of AppliedDurableLoot_Optional and sets AppliedDurableLoot_IsSet to false.

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

#### `public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__InventorySession_1a2cbf084c0b6c9cb211e03d9018c6e65b)`()` <a id="structFRHAPI__InventorySession_1a2cbf084c0b6c9cb211e03d9018c6e65b"></a>

Gets the value of SessionId.

#### `public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__InventorySession_1a1117718d15fb5e97ed0a7940cfdfa2f7)`() const` <a id="structFRHAPI__InventorySession_1a1117718d15fb5e97ed0a7940cfdfa2f7"></a>

Gets the value of SessionId.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__InventorySession_1ae29fa22c57a0caed5c6d524d6fec5e02)`(const FString & NewValue)` <a id="structFRHAPI__InventorySession_1ae29fa22c57a0caed5c6d524d6fec5e02"></a>

Sets the value of SessionId.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__InventorySession_1a7fc8c9bfd3a09dfe041ea400d0468b81)`(FString && NewValue)` <a id="structFRHAPI__InventorySession_1a7fc8c9bfd3a09dfe041ea400d0468b81"></a>

Sets the value of SessionId using move semantics.

#### `public inline FORCEINLINE ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1ac8cec10b2c475c59e7d1b6c32066fdeb)`()` <a id="structFRHAPI__InventorySession_1ac8cec10b2c475c59e7d1b6c32066fdeb"></a>

Gets the value of SessionPlatform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1a78991c72da6528e4de7acde4b06a8fd5)`() const` <a id="structFRHAPI__InventorySession_1a78991c72da6528e4de7acde4b06a8fd5"></a>

Gets the value of SessionPlatform_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_InventoryPlatform & `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1a2cff3eb3625c733ccd6b135f09b3821a)`(const ERHAPI_InventoryPlatform & DefaultValue) const` <a id="structFRHAPI__InventorySession_1a2cff3eb3625c733ccd6b135f09b3821a"></a>

Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1a4a7c641f888031d996d06ea7d6dff3ff)`(ERHAPI_InventoryPlatform & OutValue) const` <a id="structFRHAPI__InventorySession_1a4a7c641f888031d996d06ea7d6dff3ff"></a>

Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_InventoryPlatform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySession_1a604403ccb3f3e2b731afe94dd6d9709d)`()` <a id="structFRHAPI__InventorySession_1a604403ccb3f3e2b731afe94dd6d9709d"></a>

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_InventoryPlatform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySession_1a8c98ae42a7063cded50faa8e8fc607f3)`() const` <a id="structFRHAPI__InventorySession_1a8c98ae42a7063cded50faa8e8fc607f3"></a>

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSessionPlatform`](#structFRHAPI__InventorySession_1a6119ddbd2ef1eb098cd02ddb21f1c03a)`(const ERHAPI_InventoryPlatform & NewValue)` <a id="structFRHAPI__InventorySession_1a6119ddbd2ef1eb098cd02ddb21f1c03a"></a>

Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSessionPlatform`](#structFRHAPI__InventorySession_1a1e2d15ac791985d84057709ff0584670)`(ERHAPI_InventoryPlatform && NewValue)` <a id="structFRHAPI__InventorySession_1a1e2d15ac791985d84057709ff0584670"></a>

Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionPlatform`](#structFRHAPI__InventorySession_1a6606ed602284d4255e6bfc613d7e0619)`()` <a id="structFRHAPI__InventorySession_1a6606ed602284d4255e6bfc613d7e0619"></a>

Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.

#### `public inline FORCEINLINE void `[`SetSessionPlatformToNull`](#structFRHAPI__InventorySession_1ad15feac84fe5cdebf75a82265142e0ac)`()` <a id="structFRHAPI__InventorySession_1ad15feac84fe5cdebf75a82265142e0ac"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsSessionPlatformNull`](#structFRHAPI__InventorySession_1a96af70eaee2d06b100cc98b877d3d5bb)`() const` <a id="structFRHAPI__InventorySession_1a96af70eaee2d06b100cc98b877d3d5bb"></a>

Checks whether SessionPlatform_Optional is set to null.

#### `public inline FORCEINLINE TArray< int32 > & `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a57a9a95f934ff7f9025c89dc3d1d5a6f)`()` <a id="structFRHAPI__InventorySession_1a57a9a95f934ff7f9025c89dc3d1d5a6f"></a>

Gets the value of AppliedDurableLoot_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< int32 > & `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a29d817e89cefb1974316d1a8e47382a7)`() const` <a id="structFRHAPI__InventorySession_1a29d817e89cefb1974316d1a8e47382a7"></a>

Gets the value of AppliedDurableLoot_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< int32 > & `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a736e0046cb024d7e2a8220ca9f66cb27)`(const TArray< int32 > & DefaultValue) const` <a id="structFRHAPI__InventorySession_1a736e0046cb024d7e2a8220ca9f66cb27"></a>

Gets the value of AppliedDurableLoot_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a02f5fd7f35a04ec27fdb91772cd1e3dd)`(TArray< int32 > & OutValue) const` <a id="structFRHAPI__InventorySession_1a02f5fd7f35a04ec27fdb91772cd1e3dd"></a>

Fills OutValue with the value of AppliedDurableLoot_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< int32 > * `[`GetAppliedDurableLootOrNull`](#structFRHAPI__InventorySession_1ada0490a7258508c403992cd09e7d303e)`()` <a id="structFRHAPI__InventorySession_1ada0490a7258508c403992cd09e7d303e"></a>

Returns a pointer to AppliedDurableLoot_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< int32 > * `[`GetAppliedDurableLootOrNull`](#structFRHAPI__InventorySession_1aa25cedd3dbcad81759c6cdc27e0a83a2)`() const` <a id="structFRHAPI__InventorySession_1aa25cedd3dbcad81759c6cdc27e0a83a2"></a>

Returns a pointer to AppliedDurableLoot_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a251556f9494f9fff4c82791b70b6d2b8)`(const TArray< int32 > & NewValue)` <a id="structFRHAPI__InventorySession_1a251556f9494f9fff4c82791b70b6d2b8"></a>

Sets the value of AppliedDurableLoot_Optional and also sets AppliedDurableLoot_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAppliedDurableLoot`](#structFRHAPI__InventorySession_1ac1e3ec66c7b3755741c68dbe55b95d56)`(TArray< int32 > && NewValue)` <a id="structFRHAPI__InventorySession_1ac1e3ec66c7b3755741c68dbe55b95d56"></a>

Sets the value of AppliedDurableLoot_Optional and also sets AppliedDurableLoot_IsSet to true using move semantics.

#### `public inline void `[`ClearAppliedDurableLoot`](#structFRHAPI__InventorySession_1a6b43aeccd15ffee5e76a5fde895610d5)`()` <a id="structFRHAPI__InventorySession_1a6b43aeccd15ffee5e76a5fde895610d5"></a>

Clears the value of AppliedDurableLoot_Optional and sets AppliedDurableLoot_IsSet to false.

