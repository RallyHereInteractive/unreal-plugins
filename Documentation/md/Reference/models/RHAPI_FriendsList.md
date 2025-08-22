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
`public virtual void `[`WriteJson`](#structFRHAPI__FriendsList_1a9ab4700e9d00cea5c28efb0c06447b0a)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__FriendsList_1a6f1be75707ea29e7a8b30093de2d358b)`()` | Gets the value of PlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__FriendsList_1aa01598d4411348c0d6de29998ca869de)`() const` | Gets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__FriendsList_1a1683403b82f579c146229278141f2af1)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__FriendsList_1a1a544259e6a8388c85b0212fbea70d23)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FORCEINLINE TArray< `[`FRHAPI_FriendRelationship`](RHAPI_FriendRelationship.md#structFRHAPI__FriendRelationship)` > & `[`GetFriends`](#structFRHAPI__FriendsList_1a765526184d3fe314c1eb7c601a38f3a3)`()` | Gets the value of Friends.
`public inline FORCEINLINE const TArray< `[`FRHAPI_FriendRelationship`](RHAPI_FriendRelationship.md#structFRHAPI__FriendRelationship)` > & `[`GetFriends`](#structFRHAPI__FriendsList_1a0ab37a716be490e02d272fb50929eb64)`() const` | Gets the value of Friends.
`public inline FORCEINLINE void `[`SetFriends`](#structFRHAPI__FriendsList_1a2d222d89342a18f88c29c3e9e3fcee4c)`(const TArray< `[`FRHAPI_FriendRelationship`](RHAPI_FriendRelationship.md#structFRHAPI__FriendRelationship)` > & NewValue)` | Sets the value of Friends.
`public inline FORCEINLINE void `[`SetFriends`](#structFRHAPI__FriendsList_1adf58828ebbcd98ad5daeb5dd702c00ae)`(TArray< `[`FRHAPI_FriendRelationship`](RHAPI_FriendRelationship.md#structFRHAPI__FriendRelationship)` > && NewValue)` | Sets the value of Friends using move semantics.
`public inline FORCEINLINE `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__FriendsList_1ae53831410153603dc7cad3ea4856fce0)`()` | Gets the value of Page.
`public inline FORCEINLINE const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__FriendsList_1aeeacec65a583bb8fe2bbe24a3b9f1e41)`() const` | Gets the value of Page.
`public inline FORCEINLINE void `[`SetPage`](#structFRHAPI__FriendsList_1a39bf715240c536dd359459f80237ec35)`(const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & NewValue)` | Sets the value of Page.
`public inline FORCEINLINE void `[`SetPage`](#structFRHAPI__FriendsList_1aa707ea5a3fd727f7d81414c5abe02a00)`(`[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` && NewValue)` | Sets the value of Page using move semantics.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__FriendsList_1a9ab4700e9d00cea5c28efb0c06447b0a)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__FriendsList_1a9ab4700e9d00cea5c28efb0c06447b0a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__FriendsList_1a6f1be75707ea29e7a8b30093de2d358b)`()` <a id="structFRHAPI__FriendsList_1a6f1be75707ea29e7a8b30093de2d358b"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__FriendsList_1aa01598d4411348c0d6de29998ca869de)`() const` <a id="structFRHAPI__FriendsList_1aa01598d4411348c0d6de29998ca869de"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__FriendsList_1a1683403b82f579c146229278141f2af1)`(const FGuid & NewValue)` <a id="structFRHAPI__FriendsList_1a1683403b82f579c146229278141f2af1"></a>

Sets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__FriendsList_1a1a544259e6a8388c85b0212fbea70d23)`(FGuid && NewValue)` <a id="structFRHAPI__FriendsList_1a1a544259e6a8388c85b0212fbea70d23"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_FriendRelationship`](RHAPI_FriendRelationship.md#structFRHAPI__FriendRelationship)` > & `[`GetFriends`](#structFRHAPI__FriendsList_1a765526184d3fe314c1eb7c601a38f3a3)`()` <a id="structFRHAPI__FriendsList_1a765526184d3fe314c1eb7c601a38f3a3"></a>

Gets the value of Friends.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_FriendRelationship`](RHAPI_FriendRelationship.md#structFRHAPI__FriendRelationship)` > & `[`GetFriends`](#structFRHAPI__FriendsList_1a0ab37a716be490e02d272fb50929eb64)`() const` <a id="structFRHAPI__FriendsList_1a0ab37a716be490e02d272fb50929eb64"></a>

Gets the value of Friends.

#### `public inline FORCEINLINE void `[`SetFriends`](#structFRHAPI__FriendsList_1a2d222d89342a18f88c29c3e9e3fcee4c)`(const TArray< `[`FRHAPI_FriendRelationship`](RHAPI_FriendRelationship.md#structFRHAPI__FriendRelationship)` > & NewValue)` <a id="structFRHAPI__FriendsList_1a2d222d89342a18f88c29c3e9e3fcee4c"></a>

Sets the value of Friends.

#### `public inline FORCEINLINE void `[`SetFriends`](#structFRHAPI__FriendsList_1adf58828ebbcd98ad5daeb5dd702c00ae)`(TArray< `[`FRHAPI_FriendRelationship`](RHAPI_FriendRelationship.md#structFRHAPI__FriendRelationship)` > && NewValue)` <a id="structFRHAPI__FriendsList_1adf58828ebbcd98ad5daeb5dd702c00ae"></a>

Sets the value of Friends using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__FriendsList_1ae53831410153603dc7cad3ea4856fce0)`()` <a id="structFRHAPI__FriendsList_1ae53831410153603dc7cad3ea4856fce0"></a>

Gets the value of Page.

#### `public inline FORCEINLINE const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__FriendsList_1aeeacec65a583bb8fe2bbe24a3b9f1e41)`() const` <a id="structFRHAPI__FriendsList_1aeeacec65a583bb8fe2bbe24a3b9f1e41"></a>

Gets the value of Page.

#### `public inline FORCEINLINE void `[`SetPage`](#structFRHAPI__FriendsList_1a39bf715240c536dd359459f80237ec35)`(const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & NewValue)` <a id="structFRHAPI__FriendsList_1a39bf715240c536dd359459f80237ec35"></a>

Sets the value of Page.

#### `public inline FORCEINLINE void `[`SetPage`](#structFRHAPI__FriendsList_1aa707ea5a3fd727f7d81414c5abe02a00)`(`[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` && NewValue)` <a id="structFRHAPI__FriendsList_1aa707ea5a3fd727f7d81414c5abe02a00"></a>

Sets the value of Page using move semantics.

