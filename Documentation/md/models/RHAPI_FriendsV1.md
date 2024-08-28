---
title: RHAPI_FriendsV1
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_FriendsV1`](#structFRHAPI__FriendsV1) | List of player_ids to operate on.

## struct `FRHAPI_FriendsV1` <a id="structFRHAPI__FriendsV1"></a>

```
struct FRHAPI_FriendsV1
  : public FRHAPI_Model
```

List of player_ids to operate on.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< int32 > `[`Friends`](#structFRHAPI__FriendsV1_1aaec651841127d8d894369562ef07845f) | 
`public virtual bool `[`FromJson`](#structFRHAPI__FriendsV1_1a821bf1f3bd525a659567d3ecec0c1701)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__FriendsV1_1a30dbcdf3e6249656fa0a7248a610f427)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< int32 > & `[`GetFriends`](#structFRHAPI__FriendsV1_1a3c23848f4395c361cde091e1bc56d7f6)`()` | Gets the value of Friends.
`public inline const TArray< int32 > & `[`GetFriends`](#structFRHAPI__FriendsV1_1a0ec1becb88da49d89a122b5d91c3a172)`() const` | Gets the value of Friends.
`public inline void `[`SetFriends`](#structFRHAPI__FriendsV1_1a45cf64ae52a38bcbd6f82e8ea7bdd6fb)`(const TArray< int32 > & NewValue)` | Sets the value of Friends.
`public inline void `[`SetFriends`](#structFRHAPI__FriendsV1_1abb875f9a2f6d21c8132525edf9ab64b7)`(TArray< int32 > && NewValue)` | Sets the value of Friends using move semantics.

### Members

#### `public TArray< int32 > `[`Friends`](#structFRHAPI__FriendsV1_1aaec651841127d8d894369562ef07845f) <a id="structFRHAPI__FriendsV1_1aaec651841127d8d894369562ef07845f"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__FriendsV1_1a821bf1f3bd525a659567d3ecec0c1701)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__FriendsV1_1a821bf1f3bd525a659567d3ecec0c1701"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__FriendsV1_1a30dbcdf3e6249656fa0a7248a610f427)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__FriendsV1_1a30dbcdf3e6249656fa0a7248a610f427"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< int32 > & `[`GetFriends`](#structFRHAPI__FriendsV1_1a3c23848f4395c361cde091e1bc56d7f6)`()` <a id="structFRHAPI__FriendsV1_1a3c23848f4395c361cde091e1bc56d7f6"></a>

Gets the value of Friends.

#### `public inline const TArray< int32 > & `[`GetFriends`](#structFRHAPI__FriendsV1_1a0ec1becb88da49d89a122b5d91c3a172)`() const` <a id="structFRHAPI__FriendsV1_1a0ec1becb88da49d89a122b5d91c3a172"></a>

Gets the value of Friends.

#### `public inline void `[`SetFriends`](#structFRHAPI__FriendsV1_1a45cf64ae52a38bcbd6f82e8ea7bdd6fb)`(const TArray< int32 > & NewValue)` <a id="structFRHAPI__FriendsV1_1a45cf64ae52a38bcbd6f82e8ea7bdd6fb"></a>

Sets the value of Friends.

#### `public inline void `[`SetFriends`](#structFRHAPI__FriendsV1_1abb875f9a2f6d21c8132525edf9ab64b7)`(TArray< int32 > && NewValue)` <a id="structFRHAPI__FriendsV1_1abb875f9a2f6d21c8132525edf9ab64b7"></a>

Sets the value of Friends using move semantics.

