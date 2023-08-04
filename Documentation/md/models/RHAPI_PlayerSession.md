# RHAPI_PlayerSession <a id="group__RHAPI__PlayerSession"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerSession`](#structFRHAPI__PlayerSession) | 

## struct `FRHAPI_PlayerSession` <a id="structFRHAPI__PlayerSession"></a>

```
struct FRHAPI_PlayerSession
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Type`](#structFRHAPI__PlayerSession_1ae6117a4b5a3ebc5b1185186eba5eaf25) | template type
`public TSet< FString > `[`SessionIds_Optional`](#structFRHAPI__PlayerSession_1a9c4102590c56db484a6c03297468bdc1) | Sessions the player is currently a part of for this session type, if any.
`public bool `[`SessionIds_IsSet`](#structFRHAPI__PlayerSession_1a029af7107f40207074d7006a2d9ce0ce) | true if SessionIds_Optional has been set to a value
`public TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > `[`PendingInvites_Optional`](#structFRHAPI__PlayerSession_1a6b9bb557a6e0a39b226c15bd02700ad0) | Pending invites, if any, for the current player in this session type.
`public bool `[`PendingInvites_IsSet`](#structFRHAPI__PlayerSession_1aba663c2e6b24e60538396ac8a3de5af2) | true if PendingInvites_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerSession_1a8b06f282829c1099c858758efac216dd)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerSession_1a49a41127e076ba0e320cf7307dc44c6b)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetType`](#structFRHAPI__PlayerSession_1a7ff94c4a2229b98fed3c43e0374cb306)`()` | Gets the value of Type.
`public inline const FString & `[`GetType`](#structFRHAPI__PlayerSession_1af43796b74a5b4e504393de65bbc87e08)`() const` | Gets the value of Type.
`public inline void `[`SetType`](#structFRHAPI__PlayerSession_1ac6cac54fcd54ff70ad8baab8a2702812)`(FString NewValue)` | Sets the value of Type.
`public inline TSet< FString > & `[`GetSessionIds`](#structFRHAPI__PlayerSession_1a3492dac1e3143a75d71904b7fe0270b4)`()` | Gets the value of SessionIds_Optional, regardless of it having been set.
`public inline const TSet< FString > & `[`GetSessionIds`](#structFRHAPI__PlayerSession_1af7a7654f4962a561c033213a3aef3014)`() const` | Gets the value of SessionIds_Optional, regardless of it having been set.
`public inline const TSet< FString > & `[`GetSessionIds`](#structFRHAPI__PlayerSession_1a506de0cb93d4d38cfa8e0c1298d2a0c8)`(const TSet< FString > & DefaultValue) const` | Gets the value of SessionIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetSessionIds`](#structFRHAPI__PlayerSession_1afd9fed983cb7f712f928cefaf942cb83)`(TSet< FString > & OutValue) const` | Fills OutValue with the value of SessionIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TSet< FString > * `[`GetSessionIdsOrNull`](#structFRHAPI__PlayerSession_1a2714e18100166776d2ffd8042130c212)`()` | Returns a pointer to SessionIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TSet< FString > * `[`GetSessionIdsOrNull`](#structFRHAPI__PlayerSession_1a29a9311b33aaeef061c148f6b2656e09)`() const` | Returns a pointer to SessionIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetSessionIds`](#structFRHAPI__PlayerSession_1ae9ac31312fff18ddc97c4472819b3d32)`(TSet< FString > NewValue)` | Sets the value of SessionIds_Optional and also sets SessionIds_IsSet to true.
`public inline void `[`ClearSessionIds`](#structFRHAPI__PlayerSession_1a394fa3d1911935ba6e4a2ce6c46ecac7)`()` | Clears the value of SessionIds_Optional and sets SessionIds_IsSet to false.
`public inline TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1a0883615754858962e6e6b8fce19eac66)`()` | Gets the value of PendingInvites_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1a16a9e22d7bbd01a609bcf1bc10a4abf0)`() const` | Gets the value of PendingInvites_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1a8d1c57d9d0813cf2d8ae6649be140c0b)`(const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & DefaultValue) const` | Gets the value of PendingInvites_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1a971f0a81aeea3d6f7fc501e0ce11b76e)`(TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & OutValue) const` | Fills OutValue with the value of PendingInvites_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > * `[`GetPendingInvitesOrNull`](#structFRHAPI__PlayerSession_1a2a4ddbcedea8f15335c9c7351ce3c0d8)`()` | Returns a pointer to PendingInvites_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > * `[`GetPendingInvitesOrNull`](#structFRHAPI__PlayerSession_1a906a1eb7cdc4ef0f3af1db441b2b6465)`() const` | Returns a pointer to PendingInvites_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPendingInvites`](#structFRHAPI__PlayerSession_1ace21c7105d0a173a71bebac0af8e4434)`(TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > NewValue)` | Sets the value of PendingInvites_Optional and also sets PendingInvites_IsSet to true.
`public inline void `[`ClearPendingInvites`](#structFRHAPI__PlayerSession_1a00bfb8f183bf0c2da022701f403bc692)`()` | Clears the value of PendingInvites_Optional and sets PendingInvites_IsSet to false.

#### Members

#### `public FString `[`Type`](#structFRHAPI__PlayerSession_1ae6117a4b5a3ebc5b1185186eba5eaf25) <a id="structFRHAPI__PlayerSession_1ae6117a4b5a3ebc5b1185186eba5eaf25"></a>

template type

<br>
#### `public TSet< FString > `[`SessionIds_Optional`](#structFRHAPI__PlayerSession_1a9c4102590c56db484a6c03297468bdc1) <a id="structFRHAPI__PlayerSession_1a9c4102590c56db484a6c03297468bdc1"></a>

Sessions the player is currently a part of for this session type, if any.

<br>
#### `public bool `[`SessionIds_IsSet`](#structFRHAPI__PlayerSession_1a029af7107f40207074d7006a2d9ce0ce) <a id="structFRHAPI__PlayerSession_1a029af7107f40207074d7006a2d9ce0ce"></a>

true if SessionIds_Optional has been set to a value

<br>
#### `public TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > `[`PendingInvites_Optional`](#structFRHAPI__PlayerSession_1a6b9bb557a6e0a39b226c15bd02700ad0) <a id="structFRHAPI__PlayerSession_1a6b9bb557a6e0a39b226c15bd02700ad0"></a>

Pending invites, if any, for the current player in this session type.

<br>
#### `public bool `[`PendingInvites_IsSet`](#structFRHAPI__PlayerSession_1aba663c2e6b24e60538396ac8a3de5af2) <a id="structFRHAPI__PlayerSession_1aba663c2e6b24e60538396ac8a3de5af2"></a>

true if PendingInvites_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerSession_1a8b06f282829c1099c858758efac216dd)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerSession_1a8b06f282829c1099c858758efac216dd"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerSession_1a49a41127e076ba0e320cf7307dc44c6b)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerSession_1a49a41127e076ba0e320cf7307dc44c6b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetType`](#structFRHAPI__PlayerSession_1a7ff94c4a2229b98fed3c43e0374cb306)`()` <a id="structFRHAPI__PlayerSession_1a7ff94c4a2229b98fed3c43e0374cb306"></a>

Gets the value of Type.

<br>
#### `public inline const FString & `[`GetType`](#structFRHAPI__PlayerSession_1af43796b74a5b4e504393de65bbc87e08)`() const` <a id="structFRHAPI__PlayerSession_1af43796b74a5b4e504393de65bbc87e08"></a>

Gets the value of Type.

<br>
#### `public inline void `[`SetType`](#structFRHAPI__PlayerSession_1ac6cac54fcd54ff70ad8baab8a2702812)`(FString NewValue)` <a id="structFRHAPI__PlayerSession_1ac6cac54fcd54ff70ad8baab8a2702812"></a>

Sets the value of Type.

<br>
#### `public inline TSet< FString > & `[`GetSessionIds`](#structFRHAPI__PlayerSession_1a3492dac1e3143a75d71904b7fe0270b4)`()` <a id="structFRHAPI__PlayerSession_1a3492dac1e3143a75d71904b7fe0270b4"></a>

Gets the value of SessionIds_Optional, regardless of it having been set.

<br>
#### `public inline const TSet< FString > & `[`GetSessionIds`](#structFRHAPI__PlayerSession_1af7a7654f4962a561c033213a3aef3014)`() const` <a id="structFRHAPI__PlayerSession_1af7a7654f4962a561c033213a3aef3014"></a>

Gets the value of SessionIds_Optional, regardless of it having been set.

<br>
#### `public inline const TSet< FString > & `[`GetSessionIds`](#structFRHAPI__PlayerSession_1a506de0cb93d4d38cfa8e0c1298d2a0c8)`(const TSet< FString > & DefaultValue) const` <a id="structFRHAPI__PlayerSession_1a506de0cb93d4d38cfa8e0c1298d2a0c8"></a>

Gets the value of SessionIds_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetSessionIds`](#structFRHAPI__PlayerSession_1afd9fed983cb7f712f928cefaf942cb83)`(TSet< FString > & OutValue) const` <a id="structFRHAPI__PlayerSession_1afd9fed983cb7f712f928cefaf942cb83"></a>

Fills OutValue with the value of SessionIds_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TSet< FString > * `[`GetSessionIdsOrNull`](#structFRHAPI__PlayerSession_1a2714e18100166776d2ffd8042130c212)`()` <a id="structFRHAPI__PlayerSession_1a2714e18100166776d2ffd8042130c212"></a>

Returns a pointer to SessionIds_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TSet< FString > * `[`GetSessionIdsOrNull`](#structFRHAPI__PlayerSession_1a29a9311b33aaeef061c148f6b2656e09)`() const` <a id="structFRHAPI__PlayerSession_1a29a9311b33aaeef061c148f6b2656e09"></a>

Returns a pointer to SessionIds_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetSessionIds`](#structFRHAPI__PlayerSession_1ae9ac31312fff18ddc97c4472819b3d32)`(TSet< FString > NewValue)` <a id="structFRHAPI__PlayerSession_1ae9ac31312fff18ddc97c4472819b3d32"></a>

Sets the value of SessionIds_Optional and also sets SessionIds_IsSet to true.

<br>
#### `public inline void `[`ClearSessionIds`](#structFRHAPI__PlayerSession_1a394fa3d1911935ba6e4a2ce6c46ecac7)`()` <a id="structFRHAPI__PlayerSession_1a394fa3d1911935ba6e4a2ce6c46ecac7"></a>

Clears the value of SessionIds_Optional and sets SessionIds_IsSet to false.

<br>
#### `public inline TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1a0883615754858962e6e6b8fce19eac66)`()` <a id="structFRHAPI__PlayerSession_1a0883615754858962e6e6b8fce19eac66"></a>

Gets the value of PendingInvites_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1a16a9e22d7bbd01a609bcf1bc10a4abf0)`() const` <a id="structFRHAPI__PlayerSession_1a16a9e22d7bbd01a609bcf1bc10a4abf0"></a>

Gets the value of PendingInvites_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1a8d1c57d9d0813cf2d8ae6649be140c0b)`(const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & DefaultValue) const` <a id="structFRHAPI__PlayerSession_1a8d1c57d9d0813cf2d8ae6649be140c0b"></a>

Gets the value of PendingInvites_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPendingInvites`](#structFRHAPI__PlayerSession_1a971f0a81aeea3d6f7fc501e0ce11b76e)`(TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > & OutValue) const` <a id="structFRHAPI__PlayerSession_1a971f0a81aeea3d6f7fc501e0ce11b76e"></a>

Fills OutValue with the value of PendingInvites_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > * `[`GetPendingInvitesOrNull`](#structFRHAPI__PlayerSession_1a2a4ddbcedea8f15335c9c7351ce3c0d8)`()` <a id="structFRHAPI__PlayerSession_1a2a4ddbcedea8f15335c9c7351ce3c0d8"></a>

Returns a pointer to PendingInvites_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > * `[`GetPendingInvitesOrNull`](#structFRHAPI__PlayerSession_1a906a1eb7cdc4ef0f3af1db441b2b6465)`() const` <a id="structFRHAPI__PlayerSession_1a906a1eb7cdc4ef0f3af1db441b2b6465"></a>

Returns a pointer to PendingInvites_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPendingInvites`](#structFRHAPI__PlayerSession_1ace21c7105d0a173a71bebac0af8e4434)`(TMap< FString, `[`FRHAPI_PlayerSessionInvite`](RHAPI_PlayerSessionInvite.md#structFRHAPI__PlayerSessionInvite)` > NewValue)` <a id="structFRHAPI__PlayerSession_1ace21c7105d0a173a71bebac0af8e4434"></a>

Sets the value of PendingInvites_Optional and also sets PendingInvites_IsSet to true.

<br>
#### `public inline void `[`ClearPendingInvites`](#structFRHAPI__PlayerSession_1a00bfb8f183bf0c2da022701f403bc692)`()` <a id="structFRHAPI__PlayerSession_1a00bfb8f183bf0c2da022701f403bc692"></a>

Clears the value of PendingInvites_Optional and sets PendingInvites_IsSet to false.

<br>
