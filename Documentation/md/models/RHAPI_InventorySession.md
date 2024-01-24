# RHAPI_InventorySession <a id="group__RHAPI__InventorySession"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`SessionId`](#structFRHAPI__InventorySession_1ac32000025fb5fd4d9f376126e1819fd3) | Unique ID for this Inventory Session.
`public ERHAPI_Platform `[`SessionPlatform_Optional`](#structFRHAPI__InventorySession_1a4ecfb1a090ef3ecaee13168cdefd26cf) | Platform for this Inventory Session.
`public bool `[`SessionPlatform_IsSet`](#structFRHAPI__InventorySession_1a243f2da591a0898aecb05f911c3c8ad1) | true if SessionPlatform_Optional has been set to a value
`public TArray< int32 > `[`AppliedDurableLoot_Optional`](#structFRHAPI__InventorySession_1a030b2590e3b6f227f40108949604cfcf) | Durable Loot that has been applied when this Inventory Session was created.
`public bool `[`AppliedDurableLoot_IsSet`](#structFRHAPI__InventorySession_1a7b4edec20f92776ba5f623561cd07b5e) | true if AppliedDurableLoot_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__InventorySession_1a82dfe9a883929188d8e1992dbe621c33)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__InventorySession_1aaf67e592061638455c03f23e9b6e6af0)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetSessionId`](#structFRHAPI__InventorySession_1a10cb51533bbbc8244080e85e17c09a76)`()` | Gets the value of SessionId.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__InventorySession_1a202175283db4a05dd154c881b985eff4)`() const` | Gets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__InventorySession_1a25f0ed07ef974fe3bb288b0fd36e3e01)`(FString NewValue)` | Sets the value of SessionId.
`public inline ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1a20a6232c95b09797a1510a1a2ac1fc7d)`()` | Gets the value of SessionPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1a5f3d3d0b80da74d07ee84faf95ee5431)`() const` | Gets the value of SessionPlatform_Optional, regardless of it having been set.
`public inline const ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1ad1311408a74721f8317b0ac9826d75df)`(const ERHAPI_Platform & DefaultValue) const` | Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1a6eac73db464ca0efa6942e7b247992f3)`(ERHAPI_Platform & OutValue) const` | Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_Platform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySession_1a45eb5a36fa089ca350d0738ac1342e86)`()` | Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_Platform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySession_1a775b96b8deafb53540f45fb6e7e1d029)`() const` | Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySession_1a32e0d1d6d90a177a8cd0d7d3bbc46d50)`(ERHAPI_Platform NewValue)` | Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.
`public inline void `[`ClearSessionPlatform`](#structFRHAPI__InventorySession_1a6606ed602284d4255e6bfc613d7e0619)`()` | Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.
`public inline TArray< int32 > & `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1aaa3a59128de3317f5d52ecaee8e89914)`()` | Gets the value of AppliedDurableLoot_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1ae08db78edf3f9de2bd870863608f01be)`() const` | Gets the value of AppliedDurableLoot_Optional, regardless of it having been set.
`public inline const TArray< int32 > & `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1ac5f83cdf5324dd27e3157bcf4ecae4e0)`(const TArray< int32 > & DefaultValue) const` | Gets the value of AppliedDurableLoot_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a19b3b9f32380d4a9e1dd821fec1b0f4a)`(TArray< int32 > & OutValue) const` | Fills OutValue with the value of AppliedDurableLoot_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< int32 > * `[`GetAppliedDurableLootOrNull`](#structFRHAPI__InventorySession_1aec8ec744eab2b5905327d176125b57e1)`()` | Returns a pointer to AppliedDurableLoot_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< int32 > * `[`GetAppliedDurableLootOrNull`](#structFRHAPI__InventorySession_1ab3d2bd70b737c587bff6d5060f528657)`() const` | Returns a pointer to AppliedDurableLoot_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a41c013be7c6b2d5d17464c1acd20d72d)`(TArray< int32 > NewValue)` | Sets the value of AppliedDurableLoot_Optional and also sets AppliedDurableLoot_IsSet to true.
`public inline void `[`ClearAppliedDurableLoot`](#structFRHAPI__InventorySession_1a6b43aeccd15ffee5e76a5fde895610d5)`()` | Clears the value of AppliedDurableLoot_Optional and sets AppliedDurableLoot_IsSet to false.

#### Members

#### `public FString `[`SessionId`](#structFRHAPI__InventorySession_1ac32000025fb5fd4d9f376126e1819fd3) <a id="structFRHAPI__InventorySession_1ac32000025fb5fd4d9f376126e1819fd3"></a>

Unique ID for this Inventory Session.

<br>
#### `public ERHAPI_Platform `[`SessionPlatform_Optional`](#structFRHAPI__InventorySession_1a4ecfb1a090ef3ecaee13168cdefd26cf) <a id="structFRHAPI__InventorySession_1a4ecfb1a090ef3ecaee13168cdefd26cf"></a>

Platform for this Inventory Session.

<br>
#### `public bool `[`SessionPlatform_IsSet`](#structFRHAPI__InventorySession_1a243f2da591a0898aecb05f911c3c8ad1) <a id="structFRHAPI__InventorySession_1a243f2da591a0898aecb05f911c3c8ad1"></a>

true if SessionPlatform_Optional has been set to a value

<br>
#### `public TArray< int32 > `[`AppliedDurableLoot_Optional`](#structFRHAPI__InventorySession_1a030b2590e3b6f227f40108949604cfcf) <a id="structFRHAPI__InventorySession_1a030b2590e3b6f227f40108949604cfcf"></a>

Durable Loot that has been applied when this Inventory Session was created.

<br>
#### `public bool `[`AppliedDurableLoot_IsSet`](#structFRHAPI__InventorySession_1a7b4edec20f92776ba5f623561cd07b5e) <a id="structFRHAPI__InventorySession_1a7b4edec20f92776ba5f623561cd07b5e"></a>

true if AppliedDurableLoot_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__InventorySession_1a82dfe9a883929188d8e1992dbe621c33)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__InventorySession_1a82dfe9a883929188d8e1992dbe621c33"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__InventorySession_1aaf67e592061638455c03f23e9b6e6af0)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__InventorySession_1aaf67e592061638455c03f23e9b6e6af0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetSessionId`](#structFRHAPI__InventorySession_1a10cb51533bbbc8244080e85e17c09a76)`()` <a id="structFRHAPI__InventorySession_1a10cb51533bbbc8244080e85e17c09a76"></a>

Gets the value of SessionId.

<br>
#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__InventorySession_1a202175283db4a05dd154c881b985eff4)`() const` <a id="structFRHAPI__InventorySession_1a202175283db4a05dd154c881b985eff4"></a>

Gets the value of SessionId.

<br>
#### `public inline void `[`SetSessionId`](#structFRHAPI__InventorySession_1a25f0ed07ef974fe3bb288b0fd36e3e01)`(FString NewValue)` <a id="structFRHAPI__InventorySession_1a25f0ed07ef974fe3bb288b0fd36e3e01"></a>

Sets the value of SessionId.

<br>
#### `public inline ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1a20a6232c95b09797a1510a1a2ac1fc7d)`()` <a id="structFRHAPI__InventorySession_1a20a6232c95b09797a1510a1a2ac1fc7d"></a>

Gets the value of SessionPlatform_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1a5f3d3d0b80da74d07ee84faf95ee5431)`() const` <a id="structFRHAPI__InventorySession_1a5f3d3d0b80da74d07ee84faf95ee5431"></a>

Gets the value of SessionPlatform_Optional, regardless of it having been set.

<br>
#### `public inline const ERHAPI_Platform & `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1ad1311408a74721f8317b0ac9826d75df)`(const ERHAPI_Platform & DefaultValue) const` <a id="structFRHAPI__InventorySession_1ad1311408a74721f8317b0ac9826d75df"></a>

Gets the value of SessionPlatform_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSessionPlatform`](#structFRHAPI__InventorySession_1a6eac73db464ca0efa6942e7b247992f3)`(ERHAPI_Platform & OutValue) const` <a id="structFRHAPI__InventorySession_1a6eac73db464ca0efa6942e7b247992f3"></a>

Fills OutValue with the value of SessionPlatform_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline ERHAPI_Platform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySession_1a45eb5a36fa089ca350d0738ac1342e86)`()` <a id="structFRHAPI__InventorySession_1a45eb5a36fa089ca350d0738ac1342e86"></a>

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const ERHAPI_Platform * `[`GetSessionPlatformOrNull`](#structFRHAPI__InventorySession_1a775b96b8deafb53540f45fb6e7e1d029)`() const` <a id="structFRHAPI__InventorySession_1a775b96b8deafb53540f45fb6e7e1d029"></a>

Returns a pointer to SessionPlatform_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSessionPlatform`](#structFRHAPI__InventorySession_1a32e0d1d6d90a177a8cd0d7d3bbc46d50)`(ERHAPI_Platform NewValue)` <a id="structFRHAPI__InventorySession_1a32e0d1d6d90a177a8cd0d7d3bbc46d50"></a>

Sets the value of SessionPlatform_Optional and also sets SessionPlatform_IsSet to true.

<br>
#### `public inline void `[`ClearSessionPlatform`](#structFRHAPI__InventorySession_1a6606ed602284d4255e6bfc613d7e0619)`()` <a id="structFRHAPI__InventorySession_1a6606ed602284d4255e6bfc613d7e0619"></a>

Clears the value of SessionPlatform_Optional and sets SessionPlatform_IsSet to false.

<br>
#### `public inline TArray< int32 > & `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1aaa3a59128de3317f5d52ecaee8e89914)`()` <a id="structFRHAPI__InventorySession_1aaa3a59128de3317f5d52ecaee8e89914"></a>

Gets the value of AppliedDurableLoot_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< int32 > & `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1ae08db78edf3f9de2bd870863608f01be)`() const` <a id="structFRHAPI__InventorySession_1ae08db78edf3f9de2bd870863608f01be"></a>

Gets the value of AppliedDurableLoot_Optional, regardless of it having been set.

<br>
#### `public inline const TArray< int32 > & `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1ac5f83cdf5324dd27e3157bcf4ecae4e0)`(const TArray< int32 > & DefaultValue) const` <a id="structFRHAPI__InventorySession_1ac5f83cdf5324dd27e3157bcf4ecae4e0"></a>

Gets the value of AppliedDurableLoot_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a19b3b9f32380d4a9e1dd821fec1b0f4a)`(TArray< int32 > & OutValue) const` <a id="structFRHAPI__InventorySession_1a19b3b9f32380d4a9e1dd821fec1b0f4a"></a>

Fills OutValue with the value of AppliedDurableLoot_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TArray< int32 > * `[`GetAppliedDurableLootOrNull`](#structFRHAPI__InventorySession_1aec8ec744eab2b5905327d176125b57e1)`()` <a id="structFRHAPI__InventorySession_1aec8ec744eab2b5905327d176125b57e1"></a>

Returns a pointer to AppliedDurableLoot_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TArray< int32 > * `[`GetAppliedDurableLootOrNull`](#structFRHAPI__InventorySession_1ab3d2bd70b737c587bff6d5060f528657)`() const` <a id="structFRHAPI__InventorySession_1ab3d2bd70b737c587bff6d5060f528657"></a>

Returns a pointer to AppliedDurableLoot_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetAppliedDurableLoot`](#structFRHAPI__InventorySession_1a41c013be7c6b2d5d17464c1acd20d72d)`(TArray< int32 > NewValue)` <a id="structFRHAPI__InventorySession_1a41c013be7c6b2d5d17464c1acd20d72d"></a>

Sets the value of AppliedDurableLoot_Optional and also sets AppliedDurableLoot_IsSet to true.

<br>
#### `public inline void `[`ClearAppliedDurableLoot`](#structFRHAPI__InventorySession_1a6b43aeccd15ffee5e76a5fde895610d5)`()` <a id="structFRHAPI__InventorySession_1a6b43aeccd15ffee5e76a5fde895610d5"></a>

Clears the value of AppliedDurableLoot_Optional and sets AppliedDurableLoot_IsSet to false.

<br>
