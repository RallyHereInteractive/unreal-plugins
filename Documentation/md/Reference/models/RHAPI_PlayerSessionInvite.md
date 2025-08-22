---
title: RHAPI_PlayerSessionInvite
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerSessionInvite`](#structFRHAPI__PlayerSessionInvite) | Information about an invite to a session that a player received.

## struct `FRHAPI_PlayerSessionInvite` <a id="structFRHAPI__PlayerSessionInvite"></a>

```
struct FRHAPI_PlayerSessionInvite
  : public FRHAPI_Model
```

Information about an invite to a session that a player received.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`SessionId`](#structFRHAPI__PlayerSessionInvite_1a5300727633e2fcef5067968f3027dc50) | Session ID for the invite.
`public FGuid `[`InvitingPlayerUuid_Optional`](#structFRHAPI__PlayerSessionInvite_1af2df5467426af28587216798cdbea9f5) | Player who sent the invite.
`public bool `[`InvitingPlayerUuid_IsSet`](#structFRHAPI__PlayerSessionInvite_1a8e042b370589e5e406711482986a5a53) | true if InvitingPlayerUuid_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerSessionInvite_1a7b0b0d6aac6074a1c8fb9dacadb08443)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerSessionInvite_1a2ca3e640e98da6b026e6d76deb7a5553)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__PlayerSessionInvite_1a1c6d8526e9c7af2d4a5492f6b17a313a)`()` | Gets the value of SessionId.
`public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__PlayerSessionInvite_1a820bd1339b698127c4aee426c4e82957)`() const` | Gets the value of SessionId.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__PlayerSessionInvite_1a3084c692f07d740cc5143b4131b21571)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__PlayerSessionInvite_1ad3c8b17c110120156ff32ac7b28a0988)`(FString && NewValue)` | Sets the value of SessionId using move semantics.
`public inline FORCEINLINE FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1a92ca6399cebdc230d45126ce89771d41)`()` | Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1a0d563b2bc0c3c3c42d77621cc7b617dd)`() const` | Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1a151bf136f11e35dc2107ed157ac0c1a9)`(const FGuid & DefaultValue) const` | Gets the value of InvitingPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1ab16d8b239c6536ba4b7a3f01eb168cb6)`(FGuid & OutValue) const` | Fills OutValue with the value of InvitingPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__PlayerSessionInvite_1af27041a2851cd4ce524b4eb633c97abc)`()` | Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__PlayerSessionInvite_1aaf6d526043ee87fdc4f23795bc344f69)`() const` | Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1a865cee925aca8a68a6bc5b4a217ebb4c)`(const FGuid & NewValue)` | Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1ac64f99c9b217e8aaf12432a835beacbe)`(FGuid && NewValue)` | Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1adb861db179ca0fe3fe9359a2f95aa1b8)`()` | Clears the value of InvitingPlayerUuid_Optional and sets InvitingPlayerUuid_IsSet to false.

### Members

#### `public FString `[`SessionId`](#structFRHAPI__PlayerSessionInvite_1a5300727633e2fcef5067968f3027dc50) <a id="structFRHAPI__PlayerSessionInvite_1a5300727633e2fcef5067968f3027dc50"></a>

Session ID for the invite.

#### `public FGuid `[`InvitingPlayerUuid_Optional`](#structFRHAPI__PlayerSessionInvite_1af2df5467426af28587216798cdbea9f5) <a id="structFRHAPI__PlayerSessionInvite_1af2df5467426af28587216798cdbea9f5"></a>

Player who sent the invite.

#### `public bool `[`InvitingPlayerUuid_IsSet`](#structFRHAPI__PlayerSessionInvite_1a8e042b370589e5e406711482986a5a53) <a id="structFRHAPI__PlayerSessionInvite_1a8e042b370589e5e406711482986a5a53"></a>

true if InvitingPlayerUuid_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerSessionInvite_1a7b0b0d6aac6074a1c8fb9dacadb08443)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerSessionInvite_1a7b0b0d6aac6074a1c8fb9dacadb08443"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerSessionInvite_1a2ca3e640e98da6b026e6d76deb7a5553)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerSessionInvite_1a2ca3e640e98da6b026e6d76deb7a5553"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetSessionId`](#structFRHAPI__PlayerSessionInvite_1a1c6d8526e9c7af2d4a5492f6b17a313a)`()` <a id="structFRHAPI__PlayerSessionInvite_1a1c6d8526e9c7af2d4a5492f6b17a313a"></a>

Gets the value of SessionId.

#### `public inline FORCEINLINE const FString & `[`GetSessionId`](#structFRHAPI__PlayerSessionInvite_1a820bd1339b698127c4aee426c4e82957)`() const` <a id="structFRHAPI__PlayerSessionInvite_1a820bd1339b698127c4aee426c4e82957"></a>

Gets the value of SessionId.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__PlayerSessionInvite_1a3084c692f07d740cc5143b4131b21571)`(const FString & NewValue)` <a id="structFRHAPI__PlayerSessionInvite_1a3084c692f07d740cc5143b4131b21571"></a>

Sets the value of SessionId.

#### `public inline FORCEINLINE void `[`SetSessionId`](#structFRHAPI__PlayerSessionInvite_1ad3c8b17c110120156ff32ac7b28a0988)`(FString && NewValue)` <a id="structFRHAPI__PlayerSessionInvite_1ad3c8b17c110120156ff32ac7b28a0988"></a>

Sets the value of SessionId using move semantics.

#### `public inline FORCEINLINE FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1a92ca6399cebdc230d45126ce89771d41)`()` <a id="structFRHAPI__PlayerSessionInvite_1a92ca6399cebdc230d45126ce89771d41"></a>

Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1a0d563b2bc0c3c3c42d77621cc7b617dd)`() const` <a id="structFRHAPI__PlayerSessionInvite_1a0d563b2bc0c3c3c42d77621cc7b617dd"></a>

Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1a151bf136f11e35dc2107ed157ac0c1a9)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerSessionInvite_1a151bf136f11e35dc2107ed157ac0c1a9"></a>

Gets the value of InvitingPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1ab16d8b239c6536ba4b7a3f01eb168cb6)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerSessionInvite_1ab16d8b239c6536ba4b7a3f01eb168cb6"></a>

Fills OutValue with the value of InvitingPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__PlayerSessionInvite_1af27041a2851cd4ce524b4eb633c97abc)`()` <a id="structFRHAPI__PlayerSessionInvite_1af27041a2851cd4ce524b4eb633c97abc"></a>

Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__PlayerSessionInvite_1aaf6d526043ee87fdc4f23795bc344f69)`() const` <a id="structFRHAPI__PlayerSessionInvite_1aaf6d526043ee87fdc4f23795bc344f69"></a>

Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1a865cee925aca8a68a6bc5b4a217ebb4c)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerSessionInvite_1a865cee925aca8a68a6bc5b4a217ebb4c"></a>

Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1ac64f99c9b217e8aaf12432a835beacbe)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerSessionInvite_1ac64f99c9b217e8aaf12432a835beacbe"></a>

Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1adb861db179ca0fe3fe9359a2f95aa1b8)`()` <a id="structFRHAPI__PlayerSessionInvite_1adb861db179ca0fe3fe9359a2f95aa1b8"></a>

Clears the value of InvitingPlayerUuid_Optional and sets InvitingPlayerUuid_IsSet to false.

