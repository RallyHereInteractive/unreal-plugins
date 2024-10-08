---
title: RHAPI_FriendsList
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_FriendsList`](#structFRHAPI__FriendsList) | List of the player&#39;s friends. Includes sent friend requests and received friends requests.

## struct `FRHAPI_FriendsList` <a id="structFRHAPI__FriendsList"></a>

```
struct FRHAPI_FriendsList
  : public FRHAPI_Model
```

List of the player&#39;s friends. Includes sent friend requests and received friends requests.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRHAPI__FriendsList_1a00993f4b19d7fda1904312a3eb2a721b) | 
`public TArray< `[`FRHAPI_FriendRelationship`](RHAPI_FriendRelationship.md#structFRHAPI__FriendRelationship)` > `[`Friends`](#structFRHAPI__FriendsList_1ab0a6ee5eb6e5ebeaaa99474ef95b5af2) | 
`public `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` `[`Page`](#structFRHAPI__FriendsList_1a6b5c622ef326cc1ecf38070ec82ba6ef) | 
`public virtual bool `[`FromJson`](#structFRHAPI__FriendsList_1a4fa987a488b777087c6a5babb387321f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__FriendsList_1a8bf5e6ea4da5af8c400652b6a88892b7)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__FriendsList_1a77a2a4ab921922160437b22c8198fbc1)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__FriendsList_1a8eabd6c72d7710f20eaadba1085ab064)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__FriendsList_1ac846a842d64a2297ef77339daba6b6e0)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__FriendsList_1aaeba4c5ef95ab1e0d2c8238a0d8583de)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline TArray< `[`FRHAPI_FriendRelationship`](RHAPI_FriendRelationship.md#structFRHAPI__FriendRelationship)` > & `[`GetFriends`](#structFRHAPI__FriendsList_1af808143843707a5b8bb1decb82ed8fe0)`()` | Gets the value of Friends.
`public inline const TArray< `[`FRHAPI_FriendRelationship`](RHAPI_FriendRelationship.md#structFRHAPI__FriendRelationship)` > & `[`GetFriends`](#structFRHAPI__FriendsList_1a96a0abf9001329b31c2fbc765bb7eb7a)`() const` | Gets the value of Friends.
`public inline void `[`SetFriends`](#structFRHAPI__FriendsList_1a1a782c725bc5a3e7a67769b7b637375b)`(const TArray< `[`FRHAPI_FriendRelationship`](RHAPI_FriendRelationship.md#structFRHAPI__FriendRelationship)` > & NewValue)` | Sets the value of Friends.
`public inline void `[`SetFriends`](#structFRHAPI__FriendsList_1a0aa3576297ab9110810e1008f8479171)`(TArray< `[`FRHAPI_FriendRelationship`](RHAPI_FriendRelationship.md#structFRHAPI__FriendRelationship)` > && NewValue)` | Sets the value of Friends using move semantics.
`public inline `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__FriendsList_1ab1f06c56d1df9372a91ab0ca777ff95b)`()` | Gets the value of Page.
`public inline const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__FriendsList_1a3455d176b11020fba24c22f1dc29b674)`() const` | Gets the value of Page.
`public inline void `[`SetPage`](#structFRHAPI__FriendsList_1aefeaaab68d0e631aa4423c256b31dc1e)`(const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & NewValue)` | Sets the value of Page.
`public inline void `[`SetPage`](#structFRHAPI__FriendsList_1a8afae802144c271fe20b1595c4b19490)`(`[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` && NewValue)` | Sets the value of Page using move semantics.

### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__FriendsList_1a00993f4b19d7fda1904312a3eb2a721b) <a id="structFRHAPI__FriendsList_1a00993f4b19d7fda1904312a3eb2a721b"></a>

#### `public TArray< `[`FRHAPI_FriendRelationship`](RHAPI_FriendRelationship.md#structFRHAPI__FriendRelationship)` > `[`Friends`](#structFRHAPI__FriendsList_1ab0a6ee5eb6e5ebeaaa99474ef95b5af2) <a id="structFRHAPI__FriendsList_1ab0a6ee5eb6e5ebeaaa99474ef95b5af2"></a>

#### `public `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` `[`Page`](#structFRHAPI__FriendsList_1a6b5c622ef326cc1ecf38070ec82ba6ef) <a id="structFRHAPI__FriendsList_1a6b5c622ef326cc1ecf38070ec82ba6ef"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__FriendsList_1a4fa987a488b777087c6a5babb387321f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__FriendsList_1a4fa987a488b777087c6a5babb387321f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__FriendsList_1a8bf5e6ea4da5af8c400652b6a88892b7)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__FriendsList_1a8bf5e6ea4da5af8c400652b6a88892b7"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__FriendsList_1a77a2a4ab921922160437b22c8198fbc1)`()` <a id="structFRHAPI__FriendsList_1a77a2a4ab921922160437b22c8198fbc1"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__FriendsList_1a8eabd6c72d7710f20eaadba1085ab064)`() const` <a id="structFRHAPI__FriendsList_1a8eabd6c72d7710f20eaadba1085ab064"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__FriendsList_1ac846a842d64a2297ef77339daba6b6e0)`(const FGuid & NewValue)` <a id="structFRHAPI__FriendsList_1ac846a842d64a2297ef77339daba6b6e0"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__FriendsList_1aaeba4c5ef95ab1e0d2c8238a0d8583de)`(FGuid && NewValue)` <a id="structFRHAPI__FriendsList_1aaeba4c5ef95ab1e0d2c8238a0d8583de"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline TArray< `[`FRHAPI_FriendRelationship`](RHAPI_FriendRelationship.md#structFRHAPI__FriendRelationship)` > & `[`GetFriends`](#structFRHAPI__FriendsList_1af808143843707a5b8bb1decb82ed8fe0)`()` <a id="structFRHAPI__FriendsList_1af808143843707a5b8bb1decb82ed8fe0"></a>

Gets the value of Friends.

#### `public inline const TArray< `[`FRHAPI_FriendRelationship`](RHAPI_FriendRelationship.md#structFRHAPI__FriendRelationship)` > & `[`GetFriends`](#structFRHAPI__FriendsList_1a96a0abf9001329b31c2fbc765bb7eb7a)`() const` <a id="structFRHAPI__FriendsList_1a96a0abf9001329b31c2fbc765bb7eb7a"></a>

Gets the value of Friends.

#### `public inline void `[`SetFriends`](#structFRHAPI__FriendsList_1a1a782c725bc5a3e7a67769b7b637375b)`(const TArray< `[`FRHAPI_FriendRelationship`](RHAPI_FriendRelationship.md#structFRHAPI__FriendRelationship)` > & NewValue)` <a id="structFRHAPI__FriendsList_1a1a782c725bc5a3e7a67769b7b637375b"></a>

Sets the value of Friends.

#### `public inline void `[`SetFriends`](#structFRHAPI__FriendsList_1a0aa3576297ab9110810e1008f8479171)`(TArray< `[`FRHAPI_FriendRelationship`](RHAPI_FriendRelationship.md#structFRHAPI__FriendRelationship)` > && NewValue)` <a id="structFRHAPI__FriendsList_1a0aa3576297ab9110810e1008f8479171"></a>

Sets the value of Friends using move semantics.

#### `public inline `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__FriendsList_1ab1f06c56d1df9372a91ab0ca777ff95b)`()` <a id="structFRHAPI__FriendsList_1ab1f06c56d1df9372a91ab0ca777ff95b"></a>

Gets the value of Page.

#### `public inline const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__FriendsList_1a3455d176b11020fba24c22f1dc29b674)`() const` <a id="structFRHAPI__FriendsList_1a3455d176b11020fba24c22f1dc29b674"></a>

Gets the value of Page.

#### `public inline void `[`SetPage`](#structFRHAPI__FriendsList_1aefeaaab68d0e631aa4423c256b31dc1e)`(const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & NewValue)` <a id="structFRHAPI__FriendsList_1aefeaaab68d0e631aa4423c256b31dc1e"></a>

Sets the value of Page.

#### `public inline void `[`SetPage`](#structFRHAPI__FriendsList_1a8afae802144c271fe20b1595c4b19490)`(`[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` && NewValue)` <a id="structFRHAPI__FriendsList_1a8afae802144c271fe20b1595c4b19490"></a>

Sets the value of Page using move semantics.

