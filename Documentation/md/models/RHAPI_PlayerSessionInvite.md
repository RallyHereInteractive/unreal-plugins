# group `RHAPI_PlayerSessionInvite` <a id="group__RHAPI__PlayerSessionInvite"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerSessionInvite_1aa9067401a0bd3f08ba514703a336f90b)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerSessionInvite_1a1917150994e9e3c2f21e7787ce66a704)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetSessionId`](#structFRHAPI__PlayerSessionInvite_1ab4f322194e0846ffae453790aab9c632)`()` | Gets the value of SessionId.
`public inline const FString & `[`GetSessionId`](#structFRHAPI__PlayerSessionInvite_1a6942c9405b4f6833913b0c6f78f54255)`() const` | Gets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__PlayerSessionInvite_1ae700cfcfd7698da99159f8bc38e5d12b)`(const FString & NewValue)` | Sets the value of SessionId.
`public inline void `[`SetSessionId`](#structFRHAPI__PlayerSessionInvite_1a0314e2c43e517feef84074ed343ccc07)`(FString && NewValue)` | Sets the value of SessionId using move semantics.
`public inline FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1a09ba2839f057d3fefb9aadf4280033d6)`()` | Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1ac6d73c9af405b60b9ec0212722b1da2e)`() const` | Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1a87a38b45131948df65ed5cac8ee9aff8)`(const FGuid & DefaultValue) const` | Gets the value of InvitingPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1a23a1e66ba7ed697efe527ecd9f157a6b)`(FGuid & OutValue) const` | Fills OutValue with the value of InvitingPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__PlayerSessionInvite_1adb9649b04507d7924c1b42fc15661922)`()` | Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__PlayerSessionInvite_1a87df4f36cb3854b5b5de479e724bcada)`() const` | Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1abc19c4432bcc425a944b2ca956018cf2)`(const FGuid & NewValue)` | Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true.
`public inline void `[`SetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1aa85bf89be8f6ea2c3a9d14d42087489e)`(FGuid && NewValue)` | Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1adb861db179ca0fe3fe9359a2f95aa1b8)`()` | Clears the value of InvitingPlayerUuid_Optional and sets InvitingPlayerUuid_IsSet to false.

### Members

#### `public FString `[`SessionId`](#structFRHAPI__PlayerSessionInvite_1a5300727633e2fcef5067968f3027dc50) <a id="structFRHAPI__PlayerSessionInvite_1a5300727633e2fcef5067968f3027dc50"></a>

Session ID for the invite.

#### `public FGuid `[`InvitingPlayerUuid_Optional`](#structFRHAPI__PlayerSessionInvite_1af2df5467426af28587216798cdbea9f5) <a id="structFRHAPI__PlayerSessionInvite_1af2df5467426af28587216798cdbea9f5"></a>

Player who sent the invite.

#### `public bool `[`InvitingPlayerUuid_IsSet`](#structFRHAPI__PlayerSessionInvite_1a8e042b370589e5e406711482986a5a53) <a id="structFRHAPI__PlayerSessionInvite_1a8e042b370589e5e406711482986a5a53"></a>

true if InvitingPlayerUuid_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerSessionInvite_1aa9067401a0bd3f08ba514703a336f90b)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerSessionInvite_1aa9067401a0bd3f08ba514703a336f90b"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerSessionInvite_1a1917150994e9e3c2f21e7787ce66a704)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerSessionInvite_1a1917150994e9e3c2f21e7787ce66a704"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetSessionId`](#structFRHAPI__PlayerSessionInvite_1ab4f322194e0846ffae453790aab9c632)`()` <a id="structFRHAPI__PlayerSessionInvite_1ab4f322194e0846ffae453790aab9c632"></a>

Gets the value of SessionId.

#### `public inline const FString & `[`GetSessionId`](#structFRHAPI__PlayerSessionInvite_1a6942c9405b4f6833913b0c6f78f54255)`() const` <a id="structFRHAPI__PlayerSessionInvite_1a6942c9405b4f6833913b0c6f78f54255"></a>

Gets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__PlayerSessionInvite_1ae700cfcfd7698da99159f8bc38e5d12b)`(const FString & NewValue)` <a id="structFRHAPI__PlayerSessionInvite_1ae700cfcfd7698da99159f8bc38e5d12b"></a>

Sets the value of SessionId.

#### `public inline void `[`SetSessionId`](#structFRHAPI__PlayerSessionInvite_1a0314e2c43e517feef84074ed343ccc07)`(FString && NewValue)` <a id="structFRHAPI__PlayerSessionInvite_1a0314e2c43e517feef84074ed343ccc07"></a>

Sets the value of SessionId using move semantics.

#### `public inline FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1a09ba2839f057d3fefb9aadf4280033d6)`()` <a id="structFRHAPI__PlayerSessionInvite_1a09ba2839f057d3fefb9aadf4280033d6"></a>

Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1ac6d73c9af405b60b9ec0212722b1da2e)`() const` <a id="structFRHAPI__PlayerSessionInvite_1ac6d73c9af405b60b9ec0212722b1da2e"></a>

Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1a87a38b45131948df65ed5cac8ee9aff8)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerSessionInvite_1a87a38b45131948df65ed5cac8ee9aff8"></a>

Gets the value of InvitingPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1a23a1e66ba7ed697efe527ecd9f157a6b)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerSessionInvite_1a23a1e66ba7ed697efe527ecd9f157a6b"></a>

Fills OutValue with the value of InvitingPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__PlayerSessionInvite_1adb9649b04507d7924c1b42fc15661922)`()` <a id="structFRHAPI__PlayerSessionInvite_1adb9649b04507d7924c1b42fc15661922"></a>

Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetInvitingPlayerUuidOrNull`](#structFRHAPI__PlayerSessionInvite_1a87df4f36cb3854b5b5de479e724bcada)`() const` <a id="structFRHAPI__PlayerSessionInvite_1a87df4f36cb3854b5b5de479e724bcada"></a>

Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1abc19c4432bcc425a944b2ca956018cf2)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerSessionInvite_1abc19c4432bcc425a944b2ca956018cf2"></a>

Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true.

#### `public inline void `[`SetInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1aa85bf89be8f6ea2c3a9d14d42087489e)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerSessionInvite_1aa85bf89be8f6ea2c3a9d14d42087489e"></a>

Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearInvitingPlayerUuid`](#structFRHAPI__PlayerSessionInvite_1adb861db179ca0fe3fe9359a2f95aa1b8)`()` <a id="structFRHAPI__PlayerSessionInvite_1adb861db179ca0fe3fe9359a2f95aa1b8"></a>

Clears the value of InvitingPlayerUuid_Optional and sets InvitingPlayerUuid_IsSet to false.

