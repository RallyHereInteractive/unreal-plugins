---
title: RHAPI_PlayerSession
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerSession`](#structFRHAPI__PlayerSession) | Information about the sessions of a specific type that a player is currently a member of, or invited to.

## struct `FRHAPI_PlayerSession` <a id="structFRHAPI__PlayerSession"></a>

```
struct FRHAPI_PlayerSession
  : public FRHAPI_Model
```

Information about the sessions of a specific type that a player is currently a member of, or invited to.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Type`](#structFRHAPI__PlayerSession_1ae6117a4b5a3ebc5b1185186eba5eaf25) | template type
`public TSet< FString > `[`SessionIds_Optional`](#structFRHAPI__PlayerSession_1a9c4102590c56db484a6c03297468bdc1) | Sessions the player is currently a part of for this session type, if any.
`public bool `[`SessionIds_IsSet`](#structFRHAPI__PlayerSession_1a029af7107f40207074d7006a2d9ce0ce) | true if SessionIds_Optional has been set to a value
`public TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > `[`PendingInvites_Optional`](#structFRHAPI__PlayerSession_1a6b9bb557a6e0a39b226c15bd02700ad0) | Pending invites, if any, for the current player in this session type.
`public bool `[`PendingInvites_IsSet`](#structFRHAPI__PlayerSession_1aba663c2e6b24e60538396ac8a3de5af2) | true if PendingInvites_Optional has been set to a value
`public TSet< FString > `[`ReservedSessions_Optional`](#structFRHAPI__PlayerSession_1a36aacad4f1ddb069672c659abd92f5fc) | Sessions that the player has a reserved place in, but has not yet been invited.
`public bool `[`ReservedSessions_IsSet`](#structFRHAPI__PlayerSession_1ac6c94d6b012b91a945e9031c684a9c31) | true if ReservedSessions_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerSession_1a677f3d5abbd7a98ae0a3e22ea01b458d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerSession_1afe366d65cfb4edc5d12d2acd2069f3ed)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetType`](#structFRHAPI__PlayerSession_1a4aad7f9fe844ad4177a4a208d9892905)`()` | Gets the value of Type.
`public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__PlayerSession_1a2652493d632e9fcace5bd9228383528c)`() const` | Gets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__PlayerSession_1a378df148e89a742e22c9fc964eeebb09)`(const FString & NewValue)` | Sets the value of Type.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__PlayerSession_1a0a428ad705ffd2c526d3a2e2d313fa03)`(FString && NewValue)` | Sets the value of Type using move semantics.
`public inline FORCEINLINE TSet< FString > & `[`GetSessionIds`](#structFRHAPI__PlayerSession_1a06c8b8137f0fbd8708298191c8b3db3f)`()` | Gets the value of SessionIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TSet< FString > & `[`GetSessionIds`](#structFRHAPI__PlayerSession_1a3c4c06d0b6b5261b2bbc8b9e459a7ddb)`() const` | Gets the value of SessionIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TSet< FString > & `[`GetSessionIds`](#structFRHAPI__PlayerSession_1a79a56d38678d32274802ca193a2695d2)`(const TSet< FString > & DefaultValue) const` | Gets the value of SessionIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetSessionIds`](#structFRHAPI__PlayerSession_1a2f2d6f69d6190f4efdcf9bfe1718cd27)`(TSet< FString > & OutValue) const` | Fills OutValue with the value of SessionIds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TSet< FString > * `[`GetSessionIdsOrNull`](#structFRHAPI__PlayerSession_1a51c9c8a7456592d965c8244959cdad17)`()` | Returns a pointer to SessionIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TSet< FString > * `[`GetSessionIdsOrNull`](#structFRHAPI__PlayerSession_1ae8da99989f41799aebd4bcb347fda689)`() const` | Returns a pointer to SessionIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetSessionIds`](#structFRHAPI__PlayerSession_1a8dcc484dfd4dc9fd93591038d51d6a06)`(const TSet< FString > & NewValue)` | Sets the value of SessionIds_Optional and also sets SessionIds_IsSet to true.
`public inline FORCEINLINE void `[`SetSessionIds`](#structFRHAPI__PlayerSession_1ad3641550ab108cedbf5d3168b14ad8d8)`(TSet< FString > && NewValue)` | Sets the value of SessionIds_Optional and also sets SessionIds_IsSet to true using move semantics.
`public inline void `[`ClearSessionIds`](#structFRHAPI__PlayerSession_1a394fa3d1911935ba6e4a2ce6c46ecac7)`()` | Clears the value of SessionIds_Optional and sets SessionIds_IsSet to false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1ab5e22c92a61d5ef19f53c7486a63ac27)`()` | Gets the value of PendingInvites_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1a5e2546f05c746715fe11a51e00fb2b2b)`() const` | Gets the value of PendingInvites_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1ad2339e04ba64f1ad9016a32e38e0af74)`(const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & DefaultValue) const` | Gets the value of PendingInvites_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1afaeddd04a37b84731cff035ac2b5659b)`(TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & OutValue) const` | Fills OutValue with the value of PendingInvites_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > * `[`GetPendingInvitesOrNull`](#structFRHAPI__PlayerSession_1acaa0c7bbceb1acdef2ca19023b71ebd1)`()` | Returns a pointer to PendingInvites_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > * `[`GetPendingInvitesOrNull`](#structFRHAPI__PlayerSession_1a8e2a83ea052eb244d470c796f166c295)`() const` | Returns a pointer to PendingInvites_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPendingInvites`](#structFRHAPI__PlayerSession_1aa50e156fb8431f984fda95770b0c4a85)`(const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & NewValue)` | Sets the value of PendingInvites_Optional and also sets PendingInvites_IsSet to true.
`public inline FORCEINLINE void `[`SetPendingInvites`](#structFRHAPI__PlayerSession_1a5d28a06eeece0c1985199b667e536487)`(TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > && NewValue)` | Sets the value of PendingInvites_Optional and also sets PendingInvites_IsSet to true using move semantics.
`public inline void `[`ClearPendingInvites`](#structFRHAPI__PlayerSession_1a00bfb8f183bf0c2da022701f403bc692)`()` | Clears the value of PendingInvites_Optional and sets PendingInvites_IsSet to false.
`public inline FORCEINLINE TSet< FString > & `[`GetReservedSessions`](#structFRHAPI__PlayerSession_1a67b8ca5e6f8a131d0519fb9e16ceec2b)`()` | Gets the value of ReservedSessions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TSet< FString > & `[`GetReservedSessions`](#structFRHAPI__PlayerSession_1a83174e538c10bc9dd99051a679ba2030)`() const` | Gets the value of ReservedSessions_Optional, regardless of it having been set.
`public inline FORCEINLINE const TSet< FString > & `[`GetReservedSessions`](#structFRHAPI__PlayerSession_1a2c1c6574eaa16a270ca759dee7b4db36)`(const TSet< FString > & DefaultValue) const` | Gets the value of ReservedSessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetReservedSessions`](#structFRHAPI__PlayerSession_1afe57770c8119ad6d64c5a6435fe869f0)`(TSet< FString > & OutValue) const` | Fills OutValue with the value of ReservedSessions_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TSet< FString > * `[`GetReservedSessionsOrNull`](#structFRHAPI__PlayerSession_1ac37df8a71114b9c4d7d035d5a5552b37)`()` | Returns a pointer to ReservedSessions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TSet< FString > * `[`GetReservedSessionsOrNull`](#structFRHAPI__PlayerSession_1a333bcddb2c16b538b24213d0cba05680)`() const` | Returns a pointer to ReservedSessions_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetReservedSessions`](#structFRHAPI__PlayerSession_1af6ceca0fe62584a1f10fc1845de5069f)`(const TSet< FString > & NewValue)` | Sets the value of ReservedSessions_Optional and also sets ReservedSessions_IsSet to true.
`public inline FORCEINLINE void `[`SetReservedSessions`](#structFRHAPI__PlayerSession_1a1cf98f660cf4642ccb019bbb187e4515)`(TSet< FString > && NewValue)` | Sets the value of ReservedSessions_Optional and also sets ReservedSessions_IsSet to true using move semantics.
`public inline void `[`ClearReservedSessions`](#structFRHAPI__PlayerSession_1a5b6d166ad566b26e591a928c5bf4f74b)`()` | Clears the value of ReservedSessions_Optional and sets ReservedSessions_IsSet to false.

### Members

#### `public FString `[`Type`](#structFRHAPI__PlayerSession_1ae6117a4b5a3ebc5b1185186eba5eaf25) <a id="structFRHAPI__PlayerSession_1ae6117a4b5a3ebc5b1185186eba5eaf25"></a>

template type

#### `public TSet< FString > `[`SessionIds_Optional`](#structFRHAPI__PlayerSession_1a9c4102590c56db484a6c03297468bdc1) <a id="structFRHAPI__PlayerSession_1a9c4102590c56db484a6c03297468bdc1"></a>

Sessions the player is currently a part of for this session type, if any.

#### `public bool `[`SessionIds_IsSet`](#structFRHAPI__PlayerSession_1a029af7107f40207074d7006a2d9ce0ce) <a id="structFRHAPI__PlayerSession_1a029af7107f40207074d7006a2d9ce0ce"></a>

true if SessionIds_Optional has been set to a value

#### `public TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > `[`PendingInvites_Optional`](#structFRHAPI__PlayerSession_1a6b9bb557a6e0a39b226c15bd02700ad0) <a id="structFRHAPI__PlayerSession_1a6b9bb557a6e0a39b226c15bd02700ad0"></a>

Pending invites, if any, for the current player in this session type.

#### `public bool `[`PendingInvites_IsSet`](#structFRHAPI__PlayerSession_1aba663c2e6b24e60538396ac8a3de5af2) <a id="structFRHAPI__PlayerSession_1aba663c2e6b24e60538396ac8a3de5af2"></a>

true if PendingInvites_Optional has been set to a value

#### `public TSet< FString > `[`ReservedSessions_Optional`](#structFRHAPI__PlayerSession_1a36aacad4f1ddb069672c659abd92f5fc) <a id="structFRHAPI__PlayerSession_1a36aacad4f1ddb069672c659abd92f5fc"></a>

Sessions that the player has a reserved place in, but has not yet been invited.

#### `public bool `[`ReservedSessions_IsSet`](#structFRHAPI__PlayerSession_1ac6c94d6b012b91a945e9031c684a9c31) <a id="structFRHAPI__PlayerSession_1ac6c94d6b012b91a945e9031c684a9c31"></a>

true if ReservedSessions_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerSession_1a677f3d5abbd7a98ae0a3e22ea01b458d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerSession_1a677f3d5abbd7a98ae0a3e22ea01b458d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerSession_1afe366d65cfb4edc5d12d2acd2069f3ed)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerSession_1afe366d65cfb4edc5d12d2acd2069f3ed"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetType`](#structFRHAPI__PlayerSession_1a4aad7f9fe844ad4177a4a208d9892905)`()` <a id="structFRHAPI__PlayerSession_1a4aad7f9fe844ad4177a4a208d9892905"></a>

Gets the value of Type.

#### `public inline FORCEINLINE const FString & `[`GetType`](#structFRHAPI__PlayerSession_1a2652493d632e9fcace5bd9228383528c)`() const` <a id="structFRHAPI__PlayerSession_1a2652493d632e9fcace5bd9228383528c"></a>

Gets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__PlayerSession_1a378df148e89a742e22c9fc964eeebb09)`(const FString & NewValue)` <a id="structFRHAPI__PlayerSession_1a378df148e89a742e22c9fc964eeebb09"></a>

Sets the value of Type.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__PlayerSession_1a0a428ad705ffd2c526d3a2e2d313fa03)`(FString && NewValue)` <a id="structFRHAPI__PlayerSession_1a0a428ad705ffd2c526d3a2e2d313fa03"></a>

Sets the value of Type using move semantics.

#### `public inline FORCEINLINE TSet< FString > & `[`GetSessionIds`](#structFRHAPI__PlayerSession_1a06c8b8137f0fbd8708298191c8b3db3f)`()` <a id="structFRHAPI__PlayerSession_1a06c8b8137f0fbd8708298191c8b3db3f"></a>

Gets the value of SessionIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TSet< FString > & `[`GetSessionIds`](#structFRHAPI__PlayerSession_1a3c4c06d0b6b5261b2bbc8b9e459a7ddb)`() const` <a id="structFRHAPI__PlayerSession_1a3c4c06d0b6b5261b2bbc8b9e459a7ddb"></a>

Gets the value of SessionIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TSet< FString > & `[`GetSessionIds`](#structFRHAPI__PlayerSession_1a79a56d38678d32274802ca193a2695d2)`(const TSet< FString > & DefaultValue) const` <a id="structFRHAPI__PlayerSession_1a79a56d38678d32274802ca193a2695d2"></a>

Gets the value of SessionIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetSessionIds`](#structFRHAPI__PlayerSession_1a2f2d6f69d6190f4efdcf9bfe1718cd27)`(TSet< FString > & OutValue) const` <a id="structFRHAPI__PlayerSession_1a2f2d6f69d6190f4efdcf9bfe1718cd27"></a>

Fills OutValue with the value of SessionIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TSet< FString > * `[`GetSessionIdsOrNull`](#structFRHAPI__PlayerSession_1a51c9c8a7456592d965c8244959cdad17)`()` <a id="structFRHAPI__PlayerSession_1a51c9c8a7456592d965c8244959cdad17"></a>

Returns a pointer to SessionIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TSet< FString > * `[`GetSessionIdsOrNull`](#structFRHAPI__PlayerSession_1ae8da99989f41799aebd4bcb347fda689)`() const` <a id="structFRHAPI__PlayerSession_1ae8da99989f41799aebd4bcb347fda689"></a>

Returns a pointer to SessionIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetSessionIds`](#structFRHAPI__PlayerSession_1a8dcc484dfd4dc9fd93591038d51d6a06)`(const TSet< FString > & NewValue)` <a id="structFRHAPI__PlayerSession_1a8dcc484dfd4dc9fd93591038d51d6a06"></a>

Sets the value of SessionIds_Optional and also sets SessionIds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetSessionIds`](#structFRHAPI__PlayerSession_1ad3641550ab108cedbf5d3168b14ad8d8)`(TSet< FString > && NewValue)` <a id="structFRHAPI__PlayerSession_1ad3641550ab108cedbf5d3168b14ad8d8"></a>

Sets the value of SessionIds_Optional and also sets SessionIds_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionIds`](#structFRHAPI__PlayerSession_1a394fa3d1911935ba6e4a2ce6c46ecac7)`()` <a id="structFRHAPI__PlayerSession_1a394fa3d1911935ba6e4a2ce6c46ecac7"></a>

Clears the value of SessionIds_Optional and sets SessionIds_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1ab5e22c92a61d5ef19f53c7486a63ac27)`()` <a id="structFRHAPI__PlayerSession_1ab5e22c92a61d5ef19f53c7486a63ac27"></a>

Gets the value of PendingInvites_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1a5e2546f05c746715fe11a51e00fb2b2b)`() const` <a id="structFRHAPI__PlayerSession_1a5e2546f05c746715fe11a51e00fb2b2b"></a>

Gets the value of PendingInvites_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1ad2339e04ba64f1ad9016a32e38e0af74)`(const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & DefaultValue) const` <a id="structFRHAPI__PlayerSession_1ad2339e04ba64f1ad9016a32e38e0af74"></a>

Gets the value of PendingInvites_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1afaeddd04a37b84731cff035ac2b5659b)`(TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & OutValue) const` <a id="structFRHAPI__PlayerSession_1afaeddd04a37b84731cff035ac2b5659b"></a>

Fills OutValue with the value of PendingInvites_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > * `[`GetPendingInvitesOrNull`](#structFRHAPI__PlayerSession_1acaa0c7bbceb1acdef2ca19023b71ebd1)`()` <a id="structFRHAPI__PlayerSession_1acaa0c7bbceb1acdef2ca19023b71ebd1"></a>

Returns a pointer to PendingInvites_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > * `[`GetPendingInvitesOrNull`](#structFRHAPI__PlayerSession_1a8e2a83ea052eb244d470c796f166c295)`() const` <a id="structFRHAPI__PlayerSession_1a8e2a83ea052eb244d470c796f166c295"></a>

Returns a pointer to PendingInvites_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPendingInvites`](#structFRHAPI__PlayerSession_1aa50e156fb8431f984fda95770b0c4a85)`(const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & NewValue)` <a id="structFRHAPI__PlayerSession_1aa50e156fb8431f984fda95770b0c4a85"></a>

Sets the value of PendingInvites_Optional and also sets PendingInvites_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPendingInvites`](#structFRHAPI__PlayerSession_1a5d28a06eeece0c1985199b667e536487)`(TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > && NewValue)` <a id="structFRHAPI__PlayerSession_1a5d28a06eeece0c1985199b667e536487"></a>

Sets the value of PendingInvites_Optional and also sets PendingInvites_IsSet to true using move semantics.

#### `public inline void `[`ClearPendingInvites`](#structFRHAPI__PlayerSession_1a00bfb8f183bf0c2da022701f403bc692)`()` <a id="structFRHAPI__PlayerSession_1a00bfb8f183bf0c2da022701f403bc692"></a>

Clears the value of PendingInvites_Optional and sets PendingInvites_IsSet to false.

#### `public inline FORCEINLINE TSet< FString > & `[`GetReservedSessions`](#structFRHAPI__PlayerSession_1a67b8ca5e6f8a131d0519fb9e16ceec2b)`()` <a id="structFRHAPI__PlayerSession_1a67b8ca5e6f8a131d0519fb9e16ceec2b"></a>

Gets the value of ReservedSessions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TSet< FString > & `[`GetReservedSessions`](#structFRHAPI__PlayerSession_1a83174e538c10bc9dd99051a679ba2030)`() const` <a id="structFRHAPI__PlayerSession_1a83174e538c10bc9dd99051a679ba2030"></a>

Gets the value of ReservedSessions_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TSet< FString > & `[`GetReservedSessions`](#structFRHAPI__PlayerSession_1a2c1c6574eaa16a270ca759dee7b4db36)`(const TSet< FString > & DefaultValue) const` <a id="structFRHAPI__PlayerSession_1a2c1c6574eaa16a270ca759dee7b4db36"></a>

Gets the value of ReservedSessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetReservedSessions`](#structFRHAPI__PlayerSession_1afe57770c8119ad6d64c5a6435fe869f0)`(TSet< FString > & OutValue) const` <a id="structFRHAPI__PlayerSession_1afe57770c8119ad6d64c5a6435fe869f0"></a>

Fills OutValue with the value of ReservedSessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TSet< FString > * `[`GetReservedSessionsOrNull`](#structFRHAPI__PlayerSession_1ac37df8a71114b9c4d7d035d5a5552b37)`()` <a id="structFRHAPI__PlayerSession_1ac37df8a71114b9c4d7d035d5a5552b37"></a>

Returns a pointer to ReservedSessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TSet< FString > * `[`GetReservedSessionsOrNull`](#structFRHAPI__PlayerSession_1a333bcddb2c16b538b24213d0cba05680)`() const` <a id="structFRHAPI__PlayerSession_1a333bcddb2c16b538b24213d0cba05680"></a>

Returns a pointer to ReservedSessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetReservedSessions`](#structFRHAPI__PlayerSession_1af6ceca0fe62584a1f10fc1845de5069f)`(const TSet< FString > & NewValue)` <a id="structFRHAPI__PlayerSession_1af6ceca0fe62584a1f10fc1845de5069f"></a>

Sets the value of ReservedSessions_Optional and also sets ReservedSessions_IsSet to true.

#### `public inline FORCEINLINE void `[`SetReservedSessions`](#structFRHAPI__PlayerSession_1a1cf98f660cf4642ccb019bbb187e4515)`(TSet< FString > && NewValue)` <a id="structFRHAPI__PlayerSession_1a1cf98f660cf4642ccb019bbb187e4515"></a>

Sets the value of ReservedSessions_Optional and also sets ReservedSessions_IsSet to true using move semantics.

#### `public inline void `[`ClearReservedSessions`](#structFRHAPI__PlayerSession_1a5b6d166ad566b26e591a928c5bf4f74b)`()` <a id="structFRHAPI__PlayerSession_1a5b6d166ad566b26e591a928c5bf4f74b"></a>

Clears the value of ReservedSessions_Optional and sets ReservedSessions_IsSet to false.

