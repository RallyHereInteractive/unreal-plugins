# RHAPI_FriendsListV1 <a id="group__RHAPI__FriendsListV1"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_FriendsListV1`](#structFRHAPI__FriendsListV1) | List of the player&#39;s friends. Includes sent friend requests and received friends requests.

## struct `FRHAPI_FriendsListV1` <a id="structFRHAPI__FriendsListV1"></a>

```
struct FRHAPI_FriendsListV1
  : public FRHAPI_Model
```

List of the player&#39;s friends. Includes sent friend requests and received friends requests.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRHAPI__FriendsListV1_1a1ae064e536bbc06887a7d980c6ff05fd) | 
`public int32 `[`PlayerId`](#structFRHAPI__FriendsListV1_1a888cda0f1399a44f0102b753000da38a) | 
`public TArray< `[`FRHAPI_FriendRelationshipV1`](RHAPI_FriendRelationshipV1.md#structFRHAPI__FriendRelationshipV1)` > `[`Friends`](#structFRHAPI__FriendsListV1_1a72b02064df97a58ed9a8597105914037) | 
`public `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` `[`Page`](#structFRHAPI__FriendsListV1_1a62ae7b423bc44e1df2b3396ee104ac4d) | 
`public virtual bool `[`FromJson`](#structFRHAPI__FriendsListV1_1a05be4b233d4ce36e7dad369628e55d69)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__FriendsListV1_1acb7cbed9846f10171b989619086a769e)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__FriendsListV1_1a5f7796f0b61994ae71393f8ec6101d86)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__FriendsListV1_1a4ffa53937f68363a1e96ce0f2cb7be85)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__FriendsListV1_1a7ab7696e9baa27a137419b7d4a8a7dd9)`(FGuid NewValue)` | Sets the value of PlayerUuid.
`public inline int32 & `[`GetPlayerId`](#structFRHAPI__FriendsListV1_1a402e7cf34b752b335d312f904f2d8f2e)`()` | Gets the value of PlayerId.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__FriendsListV1_1a91b2af4c18e9ab9f9c8c5c1a6679d292)`() const` | Gets the value of PlayerId.
`public inline void `[`SetPlayerId`](#structFRHAPI__FriendsListV1_1a4382fa4a609d7d0c0402a0257eef40cb)`(int32 NewValue)` | Sets the value of PlayerId.
`public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__FriendsListV1_1aafea53a89c4b5766d526b913c41ee543)`() const` | Returns true if PlayerId matches the default value.
`public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__FriendsListV1_1a06892fea936dbec54161498bdb8a90ae)`()` | Sets the value of PlayerId to its default
`public inline TArray< `[`FRHAPI_FriendRelationshipV1`](RHAPI_FriendRelationshipV1.md#structFRHAPI__FriendRelationshipV1)` > & `[`GetFriends`](#structFRHAPI__FriendsListV1_1a77ecb24de44970c92a16bf238a542fc7)`()` | Gets the value of Friends.
`public inline const TArray< `[`FRHAPI_FriendRelationshipV1`](RHAPI_FriendRelationshipV1.md#structFRHAPI__FriendRelationshipV1)` > & `[`GetFriends`](#structFRHAPI__FriendsListV1_1a0341d564ceed3e4075a69581e10aa257)`() const` | Gets the value of Friends.
`public inline void `[`SetFriends`](#structFRHAPI__FriendsListV1_1af97016f516552cad4261deda850db56a)`(TArray< `[`FRHAPI_FriendRelationshipV1`](RHAPI_FriendRelationshipV1.md#structFRHAPI__FriendRelationshipV1)` > NewValue)` | Sets the value of Friends.
`public inline `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__FriendsListV1_1a644b85484d368f28a31a885aa47d6008)`()` | Gets the value of Page.
`public inline const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__FriendsListV1_1a3db91f511ebae8a145e619b0057e2692)`() const` | Gets the value of Page.
`public inline void `[`SetPage`](#structFRHAPI__FriendsListV1_1a97a749a8ef5ec437d006a5488ab1ca4c)`(`[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` NewValue)` | Sets the value of Page.

#### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__FriendsListV1_1a1ae064e536bbc06887a7d980c6ff05fd) <a id="structFRHAPI__FriendsListV1_1a1ae064e536bbc06887a7d980c6ff05fd"></a>

#### `public int32 `[`PlayerId`](#structFRHAPI__FriendsListV1_1a888cda0f1399a44f0102b753000da38a) <a id="structFRHAPI__FriendsListV1_1a888cda0f1399a44f0102b753000da38a"></a>

#### `public TArray< `[`FRHAPI_FriendRelationshipV1`](RHAPI_FriendRelationshipV1.md#structFRHAPI__FriendRelationshipV1)` > `[`Friends`](#structFRHAPI__FriendsListV1_1a72b02064df97a58ed9a8597105914037) <a id="structFRHAPI__FriendsListV1_1a72b02064df97a58ed9a8597105914037"></a>

#### `public `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` `[`Page`](#structFRHAPI__FriendsListV1_1a62ae7b423bc44e1df2b3396ee104ac4d) <a id="structFRHAPI__FriendsListV1_1a62ae7b423bc44e1df2b3396ee104ac4d"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__FriendsListV1_1a05be4b233d4ce36e7dad369628e55d69)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__FriendsListV1_1a05be4b233d4ce36e7dad369628e55d69"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__FriendsListV1_1acb7cbed9846f10171b989619086a769e)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__FriendsListV1_1acb7cbed9846f10171b989619086a769e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__FriendsListV1_1a5f7796f0b61994ae71393f8ec6101d86)`()` <a id="structFRHAPI__FriendsListV1_1a5f7796f0b61994ae71393f8ec6101d86"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__FriendsListV1_1a4ffa53937f68363a1e96ce0f2cb7be85)`() const` <a id="structFRHAPI__FriendsListV1_1a4ffa53937f68363a1e96ce0f2cb7be85"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__FriendsListV1_1a7ab7696e9baa27a137419b7d4a8a7dd9)`(FGuid NewValue)` <a id="structFRHAPI__FriendsListV1_1a7ab7696e9baa27a137419b7d4a8a7dd9"></a>

Sets the value of PlayerUuid.

#### `public inline int32 & `[`GetPlayerId`](#structFRHAPI__FriendsListV1_1a402e7cf34b752b335d312f904f2d8f2e)`()` <a id="structFRHAPI__FriendsListV1_1a402e7cf34b752b335d312f904f2d8f2e"></a>

Gets the value of PlayerId.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__FriendsListV1_1a91b2af4c18e9ab9f9c8c5c1a6679d292)`() const` <a id="structFRHAPI__FriendsListV1_1a91b2af4c18e9ab9f9c8c5c1a6679d292"></a>

Gets the value of PlayerId.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__FriendsListV1_1a4382fa4a609d7d0c0402a0257eef40cb)`(int32 NewValue)` <a id="structFRHAPI__FriendsListV1_1a4382fa4a609d7d0c0402a0257eef40cb"></a>

Sets the value of PlayerId.

#### `public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__FriendsListV1_1aafea53a89c4b5766d526b913c41ee543)`() const` <a id="structFRHAPI__FriendsListV1_1aafea53a89c4b5766d526b913c41ee543"></a>

Returns true if PlayerId matches the default value.

#### `public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__FriendsListV1_1a06892fea936dbec54161498bdb8a90ae)`()` <a id="structFRHAPI__FriendsListV1_1a06892fea936dbec54161498bdb8a90ae"></a>

Sets the value of PlayerId to its default

#### `public inline TArray< `[`FRHAPI_FriendRelationshipV1`](RHAPI_FriendRelationshipV1.md#structFRHAPI__FriendRelationshipV1)` > & `[`GetFriends`](#structFRHAPI__FriendsListV1_1a77ecb24de44970c92a16bf238a542fc7)`()` <a id="structFRHAPI__FriendsListV1_1a77ecb24de44970c92a16bf238a542fc7"></a>

Gets the value of Friends.

#### `public inline const TArray< `[`FRHAPI_FriendRelationshipV1`](RHAPI_FriendRelationshipV1.md#structFRHAPI__FriendRelationshipV1)` > & `[`GetFriends`](#structFRHAPI__FriendsListV1_1a0341d564ceed3e4075a69581e10aa257)`() const` <a id="structFRHAPI__FriendsListV1_1a0341d564ceed3e4075a69581e10aa257"></a>

Gets the value of Friends.

#### `public inline void `[`SetFriends`](#structFRHAPI__FriendsListV1_1af97016f516552cad4261deda850db56a)`(TArray< `[`FRHAPI_FriendRelationshipV1`](RHAPI_FriendRelationshipV1.md#structFRHAPI__FriendRelationshipV1)` > NewValue)` <a id="structFRHAPI__FriendsListV1_1af97016f516552cad4261deda850db56a"></a>

Sets the value of Friends.

#### `public inline `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__FriendsListV1_1a644b85484d368f28a31a885aa47d6008)`()` <a id="structFRHAPI__FriendsListV1_1a644b85484d368f28a31a885aa47d6008"></a>

Gets the value of Page.

#### `public inline const `[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` & `[`GetPage`](#structFRHAPI__FriendsListV1_1a3db91f511ebae8a145e619b0057e2692)`() const` <a id="structFRHAPI__FriendsListV1_1a3db91f511ebae8a145e619b0057e2692"></a>

Gets the value of Page.

#### `public inline void `[`SetPage`](#structFRHAPI__FriendsListV1_1a97a749a8ef5ec437d006a5488ab1ca4c)`(`[`FRHAPI_PageMeta`](RHAPI_PageMeta.md#structFRHAPI__PageMeta)` NewValue)` <a id="structFRHAPI__FriendsListV1_1a97a749a8ef5ec437d006a5488ab1ca4c"></a>

Sets the value of Page.

