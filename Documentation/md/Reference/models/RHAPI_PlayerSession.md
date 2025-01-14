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
`public inline FString & `[`GetType`](#structFRHAPI__PlayerSession_1a2d434cbf29198f24f67c8309f5883aed)`()` | Gets the value of Type.
`public inline const FString & `[`GetType`](#structFRHAPI__PlayerSession_1ae47949cdfa13b88db58e04778f19889a)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__PlayerSession_1af86f050a33d387d66adf46ec6fe36934)`(const FString & NewValue)` | Sets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__PlayerSession_1a809a8b32c7ea8c53135d537644fa1981)`(FString && NewValue)` | Sets the value of Type using move semantics.
`public inline TSet< FString > & `[`GetSessionIds`](#structFRHAPI__PlayerSession_1a3e820852c17ccd5567ea3d1edff61981)`()` | Gets the value of SessionIds_Optional, regardless of it having been set.
`public inline const TSet< FString > & `[`GetSessionIds`](#structFRHAPI__PlayerSession_1abb94e31fa7af8560bf2f3ba5a9cb9696)`() const` | Gets the value of SessionIds_Optional, regardless of it having been set.
`public inline const TSet< FString > & `[`GetSessionIds`](#structFRHAPI__PlayerSession_1af6e67a85e826e6ec24892732fedccf70)`(const TSet< FString > & DefaultValue) const` | Gets the value of SessionIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionIds`](#structFRHAPI__PlayerSession_1afd9fed983cb7f712f928cefaf942cb83)`(TSet< FString > & OutValue) const` | Fills OutValue with the value of SessionIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TSet< FString > * `[`GetSessionIdsOrNull`](#structFRHAPI__PlayerSession_1a9d56f2e0c6994324b1a819abb18ee399)`()` | Returns a pointer to SessionIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TSet< FString > * `[`GetSessionIdsOrNull`](#structFRHAPI__PlayerSession_1a064aceb671ed4191b452e8205df5950b)`() const` | Returns a pointer to SessionIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionIds`](#structFRHAPI__PlayerSession_1a9d41ade2657356be4797805e52c898a6)`(const TSet< FString > & NewValue)` | Sets the value of SessionIds_Optional and also sets SessionIds_IsSet to true.
`public inline void `[`SetSessionIds`](#structFRHAPI__PlayerSession_1aa1130c036555be1331947d3a69d940cf)`(TSet< FString > && NewValue)` | Sets the value of SessionIds_Optional and also sets SessionIds_IsSet to true using move semantics.
`public inline void `[`ClearSessionIds`](#structFRHAPI__PlayerSession_1a394fa3d1911935ba6e4a2ce6c46ecac7)`()` | Clears the value of SessionIds_Optional and sets SessionIds_IsSet to false.
`public inline bool `[`IsSessionIdsSet`](#structFRHAPI__PlayerSession_1abb6bb160ee41d118863a0adc6e7bcec4)`() const` | Checks whether SessionIds_Optional has been set.
`public inline TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1ac780141c0239990f6bbce1c47417d618)`()` | Gets the value of PendingInvites_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1a41b89d5a4339cdd2cc2b247277053080)`() const` | Gets the value of PendingInvites_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1ac54c6210049f497cb17a5823ca167f95)`(const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & DefaultValue) const` | Gets the value of PendingInvites_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1a971f0a81aeea3d6f7fc501e0ce11b76e)`(TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & OutValue) const` | Fills OutValue with the value of PendingInvites_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > * `[`GetPendingInvitesOrNull`](#structFRHAPI__PlayerSession_1a04f0219b2d83ad4c2f63605c82519079)`()` | Returns a pointer to PendingInvites_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > * `[`GetPendingInvitesOrNull`](#structFRHAPI__PlayerSession_1a46b0837b39fb01b807a5b7fdb882d7a1)`() const` | Returns a pointer to PendingInvites_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPendingInvites`](#structFRHAPI__PlayerSession_1a4fd4a8a71532eb7dc2088b7837c1ae44)`(const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & NewValue)` | Sets the value of PendingInvites_Optional and also sets PendingInvites_IsSet to true.
`public inline void `[`SetPendingInvites`](#structFRHAPI__PlayerSession_1a01f8ad57514ec6faa8f348f03937e4ba)`(TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > && NewValue)` | Sets the value of PendingInvites_Optional and also sets PendingInvites_IsSet to true using move semantics.
`public inline void `[`ClearPendingInvites`](#structFRHAPI__PlayerSession_1a00bfb8f183bf0c2da022701f403bc692)`()` | Clears the value of PendingInvites_Optional and sets PendingInvites_IsSet to false.
`public inline bool `[`IsPendingInvitesSet`](#structFRHAPI__PlayerSession_1a9284256bd736105e6b03e962e8800eb6)`() const` | Checks whether PendingInvites_Optional has been set.
`public inline TSet< FString > & `[`GetReservedSessions`](#structFRHAPI__PlayerSession_1ab4916ca7d51867458ad1a21149ea8f42)`()` | Gets the value of ReservedSessions_Optional, regardless of it having been set.
`public inline const TSet< FString > & `[`GetReservedSessions`](#structFRHAPI__PlayerSession_1a22c2c4cc66a4dede7bf2b8d421855790)`() const` | Gets the value of ReservedSessions_Optional, regardless of it having been set.
`public inline const TSet< FString > & `[`GetReservedSessions`](#structFRHAPI__PlayerSession_1a8c389daaf98b42f71351a78042f25621)`(const TSet< FString > & DefaultValue) const` | Gets the value of ReservedSessions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetReservedSessions`](#structFRHAPI__PlayerSession_1ad2da624b373fa6b190b7ca037754c7e9)`(TSet< FString > & OutValue) const` | Fills OutValue with the value of ReservedSessions_Optional and returns true if it has been set, otherwise returns false.
`public inline TSet< FString > * `[`GetReservedSessionsOrNull`](#structFRHAPI__PlayerSession_1a5b698ed1970d0ca393e8c288afdb7fb0)`()` | Returns a pointer to ReservedSessions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TSet< FString > * `[`GetReservedSessionsOrNull`](#structFRHAPI__PlayerSession_1a8794e6a90a1b4414a34661a475af9bd0)`() const` | Returns a pointer to ReservedSessions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetReservedSessions`](#structFRHAPI__PlayerSession_1a54b45270b6511ce851702da842561e9e)`(const TSet< FString > & NewValue)` | Sets the value of ReservedSessions_Optional and also sets ReservedSessions_IsSet to true.
`public inline void `[`SetReservedSessions`](#structFRHAPI__PlayerSession_1a432207491da947ca843a94ce76d17ae9)`(TSet< FString > && NewValue)` | Sets the value of ReservedSessions_Optional and also sets ReservedSessions_IsSet to true using move semantics.
`public inline void `[`ClearReservedSessions`](#structFRHAPI__PlayerSession_1a5b6d166ad566b26e591a928c5bf4f74b)`()` | Clears the value of ReservedSessions_Optional and sets ReservedSessions_IsSet to false.
`public inline bool `[`IsReservedSessionsSet`](#structFRHAPI__PlayerSession_1a40872b186cd04121e67440e6cf04d9bb)`() const` | Checks whether ReservedSessions_Optional has been set.

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

#### `public inline FString & `[`GetType`](#structFRHAPI__PlayerSession_1a2d434cbf29198f24f67c8309f5883aed)`()` <a id="structFRHAPI__PlayerSession_1a2d434cbf29198f24f67c8309f5883aed"></a>

Gets the value of Type.

#### `public inline const FString & `[`GetType`](#structFRHAPI__PlayerSession_1ae47949cdfa13b88db58e04778f19889a)`() const` <a id="structFRHAPI__PlayerSession_1ae47949cdfa13b88db58e04778f19889a"></a>

Gets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__PlayerSession_1af86f050a33d387d66adf46ec6fe36934)`(const FString & NewValue)` <a id="structFRHAPI__PlayerSession_1af86f050a33d387d66adf46ec6fe36934"></a>

Sets the value of Type.

#### `public inline void `[`SetType`](#structFRHAPI__PlayerSession_1a809a8b32c7ea8c53135d537644fa1981)`(FString && NewValue)` <a id="structFRHAPI__PlayerSession_1a809a8b32c7ea8c53135d537644fa1981"></a>

Sets the value of Type using move semantics.

#### `public inline TSet< FString > & `[`GetSessionIds`](#structFRHAPI__PlayerSession_1a3e820852c17ccd5567ea3d1edff61981)`()` <a id="structFRHAPI__PlayerSession_1a3e820852c17ccd5567ea3d1edff61981"></a>

Gets the value of SessionIds_Optional, regardless of it having been set.

#### `public inline const TSet< FString > & `[`GetSessionIds`](#structFRHAPI__PlayerSession_1abb94e31fa7af8560bf2f3ba5a9cb9696)`() const` <a id="structFRHAPI__PlayerSession_1abb94e31fa7af8560bf2f3ba5a9cb9696"></a>

Gets the value of SessionIds_Optional, regardless of it having been set.

#### `public inline const TSet< FString > & `[`GetSessionIds`](#structFRHAPI__PlayerSession_1af6e67a85e826e6ec24892732fedccf70)`(const TSet< FString > & DefaultValue) const` <a id="structFRHAPI__PlayerSession_1af6e67a85e826e6ec24892732fedccf70"></a>

Gets the value of SessionIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetSessionIds`](#structFRHAPI__PlayerSession_1afd9fed983cb7f712f928cefaf942cb83)`(TSet< FString > & OutValue) const` <a id="structFRHAPI__PlayerSession_1afd9fed983cb7f712f928cefaf942cb83"></a>

Fills OutValue with the value of SessionIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TSet< FString > * `[`GetSessionIdsOrNull`](#structFRHAPI__PlayerSession_1a9d56f2e0c6994324b1a819abb18ee399)`()` <a id="structFRHAPI__PlayerSession_1a9d56f2e0c6994324b1a819abb18ee399"></a>

Returns a pointer to SessionIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TSet< FString > * `[`GetSessionIdsOrNull`](#structFRHAPI__PlayerSession_1a064aceb671ed4191b452e8205df5950b)`() const` <a id="structFRHAPI__PlayerSession_1a064aceb671ed4191b452e8205df5950b"></a>

Returns a pointer to SessionIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetSessionIds`](#structFRHAPI__PlayerSession_1a9d41ade2657356be4797805e52c898a6)`(const TSet< FString > & NewValue)` <a id="structFRHAPI__PlayerSession_1a9d41ade2657356be4797805e52c898a6"></a>

Sets the value of SessionIds_Optional and also sets SessionIds_IsSet to true.

#### `public inline void `[`SetSessionIds`](#structFRHAPI__PlayerSession_1aa1130c036555be1331947d3a69d940cf)`(TSet< FString > && NewValue)` <a id="structFRHAPI__PlayerSession_1aa1130c036555be1331947d3a69d940cf"></a>

Sets the value of SessionIds_Optional and also sets SessionIds_IsSet to true using move semantics.

#### `public inline void `[`ClearSessionIds`](#structFRHAPI__PlayerSession_1a394fa3d1911935ba6e4a2ce6c46ecac7)`()` <a id="structFRHAPI__PlayerSession_1a394fa3d1911935ba6e4a2ce6c46ecac7"></a>

Clears the value of SessionIds_Optional and sets SessionIds_IsSet to false.

#### `public inline bool `[`IsSessionIdsSet`](#structFRHAPI__PlayerSession_1abb6bb160ee41d118863a0adc6e7bcec4)`() const` <a id="structFRHAPI__PlayerSession_1abb6bb160ee41d118863a0adc6e7bcec4"></a>

Checks whether SessionIds_Optional has been set.

#### `public inline TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1ac780141c0239990f6bbce1c47417d618)`()` <a id="structFRHAPI__PlayerSession_1ac780141c0239990f6bbce1c47417d618"></a>

Gets the value of PendingInvites_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1a41b89d5a4339cdd2cc2b247277053080)`() const` <a id="structFRHAPI__PlayerSession_1a41b89d5a4339cdd2cc2b247277053080"></a>

Gets the value of PendingInvites_Optional, regardless of it having been set.

#### `public inline const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1ac54c6210049f497cb17a5823ca167f95)`(const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & DefaultValue) const` <a id="structFRHAPI__PlayerSession_1ac54c6210049f497cb17a5823ca167f95"></a>

Gets the value of PendingInvites_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1a971f0a81aeea3d6f7fc501e0ce11b76e)`(TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & OutValue) const` <a id="structFRHAPI__PlayerSession_1a971f0a81aeea3d6f7fc501e0ce11b76e"></a>

Fills OutValue with the value of PendingInvites_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > * `[`GetPendingInvitesOrNull`](#structFRHAPI__PlayerSession_1a04f0219b2d83ad4c2f63605c82519079)`()` <a id="structFRHAPI__PlayerSession_1a04f0219b2d83ad4c2f63605c82519079"></a>

Returns a pointer to PendingInvites_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > * `[`GetPendingInvitesOrNull`](#structFRHAPI__PlayerSession_1a46b0837b39fb01b807a5b7fdb882d7a1)`() const` <a id="structFRHAPI__PlayerSession_1a46b0837b39fb01b807a5b7fdb882d7a1"></a>

Returns a pointer to PendingInvites_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPendingInvites`](#structFRHAPI__PlayerSession_1a4fd4a8a71532eb7dc2088b7837c1ae44)`(const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & NewValue)` <a id="structFRHAPI__PlayerSession_1a4fd4a8a71532eb7dc2088b7837c1ae44"></a>

Sets the value of PendingInvites_Optional and also sets PendingInvites_IsSet to true.

#### `public inline void `[`SetPendingInvites`](#structFRHAPI__PlayerSession_1a01f8ad57514ec6faa8f348f03937e4ba)`(TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > && NewValue)` <a id="structFRHAPI__PlayerSession_1a01f8ad57514ec6faa8f348f03937e4ba"></a>

Sets the value of PendingInvites_Optional and also sets PendingInvites_IsSet to true using move semantics.

#### `public inline void `[`ClearPendingInvites`](#structFRHAPI__PlayerSession_1a00bfb8f183bf0c2da022701f403bc692)`()` <a id="structFRHAPI__PlayerSession_1a00bfb8f183bf0c2da022701f403bc692"></a>

Clears the value of PendingInvites_Optional and sets PendingInvites_IsSet to false.

#### `public inline bool `[`IsPendingInvitesSet`](#structFRHAPI__PlayerSession_1a9284256bd736105e6b03e962e8800eb6)`() const` <a id="structFRHAPI__PlayerSession_1a9284256bd736105e6b03e962e8800eb6"></a>

Checks whether PendingInvites_Optional has been set.

#### `public inline TSet< FString > & `[`GetReservedSessions`](#structFRHAPI__PlayerSession_1ab4916ca7d51867458ad1a21149ea8f42)`()` <a id="structFRHAPI__PlayerSession_1ab4916ca7d51867458ad1a21149ea8f42"></a>

Gets the value of ReservedSessions_Optional, regardless of it having been set.

#### `public inline const TSet< FString > & `[`GetReservedSessions`](#structFRHAPI__PlayerSession_1a22c2c4cc66a4dede7bf2b8d421855790)`() const` <a id="structFRHAPI__PlayerSession_1a22c2c4cc66a4dede7bf2b8d421855790"></a>

Gets the value of ReservedSessions_Optional, regardless of it having been set.

#### `public inline const TSet< FString > & `[`GetReservedSessions`](#structFRHAPI__PlayerSession_1a8c389daaf98b42f71351a78042f25621)`(const TSet< FString > & DefaultValue) const` <a id="structFRHAPI__PlayerSession_1a8c389daaf98b42f71351a78042f25621"></a>

Gets the value of ReservedSessions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetReservedSessions`](#structFRHAPI__PlayerSession_1ad2da624b373fa6b190b7ca037754c7e9)`(TSet< FString > & OutValue) const` <a id="structFRHAPI__PlayerSession_1ad2da624b373fa6b190b7ca037754c7e9"></a>

Fills OutValue with the value of ReservedSessions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TSet< FString > * `[`GetReservedSessionsOrNull`](#structFRHAPI__PlayerSession_1a5b698ed1970d0ca393e8c288afdb7fb0)`()` <a id="structFRHAPI__PlayerSession_1a5b698ed1970d0ca393e8c288afdb7fb0"></a>

Returns a pointer to ReservedSessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TSet< FString > * `[`GetReservedSessionsOrNull`](#structFRHAPI__PlayerSession_1a8794e6a90a1b4414a34661a475af9bd0)`() const` <a id="structFRHAPI__PlayerSession_1a8794e6a90a1b4414a34661a475af9bd0"></a>

Returns a pointer to ReservedSessions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetReservedSessions`](#structFRHAPI__PlayerSession_1a54b45270b6511ce851702da842561e9e)`(const TSet< FString > & NewValue)` <a id="structFRHAPI__PlayerSession_1a54b45270b6511ce851702da842561e9e"></a>

Sets the value of ReservedSessions_Optional and also sets ReservedSessions_IsSet to true.

#### `public inline void `[`SetReservedSessions`](#structFRHAPI__PlayerSession_1a432207491da947ca843a94ce76d17ae9)`(TSet< FString > && NewValue)` <a id="structFRHAPI__PlayerSession_1a432207491da947ca843a94ce76d17ae9"></a>

Sets the value of ReservedSessions_Optional and also sets ReservedSessions_IsSet to true using move semantics.

#### `public inline void `[`ClearReservedSessions`](#structFRHAPI__PlayerSession_1a5b6d166ad566b26e591a928c5bf4f74b)`()` <a id="structFRHAPI__PlayerSession_1a5b6d166ad566b26e591a928c5bf4f74b"></a>

Clears the value of ReservedSessions_Optional and sets ReservedSessions_IsSet to false.

#### `public inline bool `[`IsReservedSessionsSet`](#structFRHAPI__PlayerSession_1a40872b186cd04121e67440e6cf04d9bb)`() const` <a id="structFRHAPI__PlayerSession_1a40872b186cd04121e67440e6cf04d9bb"></a>

Checks whether ReservedSessions_Optional has been set.

