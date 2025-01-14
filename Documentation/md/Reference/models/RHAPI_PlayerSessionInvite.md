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
`public inline FString & `[`GetSessionId`](#structFRHAPI__PlayerSessionInvite_1a1f3116cd6e8a4d6581d5231915091f6b)`()` | Gets the value of SessionId.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__PlayerSessionInvite_1a74d160fdd5b1af1ffd04de1cdd287200)`() const` | Gets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__PlayerSessionInvite_1ae700cfcfd7698da99159f8bc38e5d12b)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__PlayerSessionInvite_1a0314e2c43e517feef84074ed343ccc07)`(FString && NewValue)` | Sets the value of SessionId using move semantics.
`public inline FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1a75e9a9d820de7c7eb65f8f6a9cd5798f)`()` | Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1a507e3ae243eab217ac943b65fb5eff8f)`() const` | Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1abcce08256e80dc0ee6be30942518ef62)`(const FGuid & DefaultValue) const` | Gets the value of InvitingPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1a23a1e66ba7ed697efe527ecd9f157a6b)`(FGuid & OutValue) const` | Fills OutValue with the value of InvitingPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__PlayerSessionInvite_1a256a74009052d62ae6ce81ec2c9c6bd7)`()` | Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__PlayerSessionInvite_1a260f0ca861030d781a8acedcd66d2e7f)`() const` | Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1abc19c4432bcc425a944b2ca956018cf2)`(const FGuid & NewValue)` | Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true.
`public inline void `[`SetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1aa85bf89be8f6ea2c3a9d14d42087489e)`(FGuid && NewValue)` | Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1adb861db179ca0fe3fe9359a2f95aa1b8)`()` | Clears the value of InvitingPlayerUuid_Optional and sets InvitingPlayerUuid_IsSet to false.
`public inline bool `[`IsInvitingPlayerUuidSet`](#structFRHAPI__PlayerSessionInvite_1a9e36f67ac0452e0884ad2309148942dd)`() const` | Checks whether InvitingPlayerUuid_Optional has been set.

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

#### `public inline FString & `[`GetSessionId`](#structFRHAPI__PlayerSessionInvite_1a1f3116cd6e8a4d6581d5231915091f6b)`()` <a id="structFRHAPI__PlayerSessionInvite_1a1f3116cd6e8a4d6581d5231915091f6b"></a>

Gets the value of SessionId.

#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__PlayerSessionInvite_1a74d160fdd5b1af1ffd04de1cdd287200)`() const` <a id="structFRHAPI__PlayerSessionInvite_1a74d160fdd5b1af1ffd04de1cdd287200"></a>

Gets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__PlayerSessionInvite_1ae700cfcfd7698da99159f8bc38e5d12b)`(const FString & NewValue)` <a id="structFRHAPI__PlayerSessionInvite_1ae700cfcfd7698da99159f8bc38e5d12b"></a>

Sets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__PlayerSessionInvite_1a0314e2c43e517feef84074ed343ccc07)`(FString && NewValue)` <a id="structFRHAPI__PlayerSessionInvite_1a0314e2c43e517feef84074ed343ccc07"></a>

Sets the value of SessionId using move semantics.

#### `public inline FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1a75e9a9d820de7c7eb65f8f6a9cd5798f)`()` <a id="structFRHAPI__PlayerSessionInvite_1a75e9a9d820de7c7eb65f8f6a9cd5798f"></a>

Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1a507e3ae243eab217ac943b65fb5eff8f)`() const` <a id="structFRHAPI__PlayerSessionInvite_1a507e3ae243eab217ac943b65fb5eff8f"></a>

Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1abcce08256e80dc0ee6be30942518ef62)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerSessionInvite_1abcce08256e80dc0ee6be30942518ef62"></a>

Gets the value of InvitingPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1a23a1e66ba7ed697efe527ecd9f157a6b)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerSessionInvite_1a23a1e66ba7ed697efe527ecd9f157a6b"></a>

Fills OutValue with the value of InvitingPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__PlayerSessionInvite_1a256a74009052d62ae6ce81ec2c9c6bd7)`()` <a id="structFRHAPI__PlayerSessionInvite_1a256a74009052d62ae6ce81ec2c9c6bd7"></a>

Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__PlayerSessionInvite_1a260f0ca861030d781a8acedcd66d2e7f)`() const` <a id="structFRHAPI__PlayerSessionInvite_1a260f0ca861030d781a8acedcd66d2e7f"></a>

Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1abc19c4432bcc425a944b2ca956018cf2)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerSessionInvite_1abc19c4432bcc425a944b2ca956018cf2"></a>

Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true.

#### `public inline void `[`SetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1aa85bf89be8f6ea2c3a9d14d42087489e)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerSessionInvite_1aa85bf89be8f6ea2c3a9d14d42087489e"></a>

Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1adb861db179ca0fe3fe9359a2f95aa1b8)`()` <a id="structFRHAPI__PlayerSessionInvite_1adb861db179ca0fe3fe9359a2f95aa1b8"></a>

Clears the value of InvitingPlayerUuid_Optional and sets InvitingPlayerUuid_IsSet to false.

#### `public inline bool `[`IsInvitingPlayerUuidSet`](#structFRHAPI__PlayerSessionInvite_1a9e36f67ac0452e0884ad2309148942dd)`() const` <a id="structFRHAPI__PlayerSessionInvite_1a9e36f67ac0452e0884ad2309148942dd"></a>

Checks whether InvitingPlayerUuid_Optional has been set.

