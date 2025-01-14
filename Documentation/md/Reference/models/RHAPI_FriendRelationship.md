---
title: RHAPI_FriendRelationship
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_FriendRelationship`](#structFRHAPI__FriendRelationship) | Represents the relationship with a potential friend.

## struct `FRHAPI_FriendRelationship` <a id="structFRHAPI__FriendRelationship"></a>

```
struct FRHAPI_FriendRelationship
  : public FRHAPI_Model
```

Represents the relationship with a potential friend.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`FriendsPlayerUuid`](#structFRHAPI__FriendRelationship_1a961b5be56ed676a68023c50909ccc61a) | 
`public ERHAPI_FriendshipStatus `[`Status`](#structFRHAPI__FriendRelationship_1ada33400fa075474a9311b95c1c691686) | 
`public FString `[`Notes_Optional`](#structFRHAPI__FriendRelationship_1a64f787e21add9b85b4cd7c45cfd5d678) | 
`public bool `[`Notes_IsSet`](#structFRHAPI__FriendRelationship_1a0045e135ce9d4acd6734b217462072b4) | true if Notes_Optional has been set to a value
`public FDateTime `[`LastModifiedOn`](#structFRHAPI__FriendRelationship_1afa70cca868e2e54b587fc6db2874ea49) | 
`public virtual bool `[`FromJson`](#structFRHAPI__FriendRelationship_1a28d977f96fa03d5d44ebea347890d82f)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__FriendRelationship_1a49f4e2a4c59c955cffb1e688be11bd2e)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetFriendsPlayerUuid`](#structFRHAPI__FriendRelationship_1ad179220eb0c6df2bf739d755ac54a867)`()` | Gets the value of FriendsPlayerUuid.
`public inline const FGuid & `[`GetFriendsPlayerUuid`](#structFRHAPI__FriendRelationship_1a12ffc4513beb4e19139d5bf22640b64c)`() const` | Gets the value of FriendsPlayerUuid.
`public inline void `[`SetFriendsPlayerUuid`](#structFRHAPI__FriendRelationship_1a3c529848bb14f29c67559b02dd089927)`(const FGuid & NewValue)` | Sets the value of FriendsPlayerUuid.
`public inline void `[`SetFriendsPlayerUuid`](#structFRHAPI__FriendRelationship_1a0914440a86e5a18ff323cffa0f7431b8)`(FGuid && NewValue)` | Sets the value of FriendsPlayerUuid using move semantics.
`public inline ERHAPI_FriendshipStatus & `[`GetStatus`](#structFRHAPI__FriendRelationship_1a7e1f104859b368c29a5e0545501d2c4f)`()` | Gets the value of Status.
`public inline const ERHAPI_FriendshipStatus & `[`GetStatus`](#structFRHAPI__FriendRelationship_1a9ff18a1cd776b901ebb7dd22e364bc8f)`() const` | Gets the value of Status.
`public inline void `[`SetStatus`](#structFRHAPI__FriendRelationship_1ac3ddb416ba71d71897f8077e17d70bae)`(const ERHAPI_FriendshipStatus & NewValue)` | Sets the value of Status.
`public inline void `[`SetStatus`](#structFRHAPI__FriendRelationship_1a0b0c24bea889c978b64595a23e4c3db8)`(ERHAPI_FriendshipStatus && NewValue)` | Sets the value of Status using move semantics.
`public inline FString & `[`GetNotes`](#structFRHAPI__FriendRelationship_1a2a40b8a18282b539763ad7cf57a2df46)`()` | Gets the value of Notes_Optional, regardless of it having been set.
`public inline const FString & `[`GetNotes`](#structFRHAPI__FriendRelationship_1a4df572319c68e455e0fa4b7ab50e6e40)`() const` | Gets the value of Notes_Optional, regardless of it having been set.
`public inline const FString & `[`GetNotes`](#structFRHAPI__FriendRelationship_1ae249ead28f14ebad1f8c9e5823f3a138)`(const FString & DefaultValue) const` | Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNotes`](#structFRHAPI__FriendRelationship_1ada53f67cf3954122cc28792378702f87)`(FString & OutValue) const` | Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetNotesOrNull`](#structFRHAPI__FriendRelationship_1a9771fc7468da4d38f4c628a09d22eff4)`()` | Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetNotesOrNull`](#structFRHAPI__FriendRelationship_1ae990237fb3a9ba8b8d2743eb5da6c2fc)`() const` | Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNotes`](#structFRHAPI__FriendRelationship_1a61ae76ea7e83030e1229e17f79e4b897)`(const FString & NewValue)` | Sets the value of Notes_Optional and also sets Notes_IsSet to true.
`public inline void `[`SetNotes`](#structFRHAPI__FriendRelationship_1a397c90df264ccad6e4c79ece44effdd8)`(FString && NewValue)` | Sets the value of Notes_Optional and also sets Notes_IsSet to true using move semantics.
`public inline void `[`ClearNotes`](#structFRHAPI__FriendRelationship_1a80279de05c50dc3699f2cbfd93ae5b1d)`()` | Clears the value of Notes_Optional and sets Notes_IsSet to false.
`public inline bool `[`IsNotesSet`](#structFRHAPI__FriendRelationship_1ad535203b1d8f8ba3db7d885e197ba31a)`() const` | Checks whether Notes_Optional has been set.
`public inline FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__FriendRelationship_1a096ae21db5a26a76ff8de2236417f5ee)`()` | Gets the value of LastModifiedOn.
`public inline const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__FriendRelationship_1a6a37ad82d6cb6d0660eecf9abf5a951e)`() const` | Gets the value of LastModifiedOn.
`public inline void `[`SetLastModifiedOn`](#structFRHAPI__FriendRelationship_1a86c6d102c1ecf589b54064ca0e171ab2)`(const FDateTime & NewValue)` | Sets the value of LastModifiedOn.
`public inline void `[`SetLastModifiedOn`](#structFRHAPI__FriendRelationship_1a6c41b55523a01c4cbbc08cc09697d7c7)`(FDateTime && NewValue)` | Sets the value of LastModifiedOn using move semantics.

### Members

#### `public FGuid `[`FriendsPlayerUuid`](#structFRHAPI__FriendRelationship_1a961b5be56ed676a68023c50909ccc61a) <a id="structFRHAPI__FriendRelationship_1a961b5be56ed676a68023c50909ccc61a"></a>

#### `public ERHAPI_FriendshipStatus `[`Status`](#structFRHAPI__FriendRelationship_1ada33400fa075474a9311b95c1c691686) <a id="structFRHAPI__FriendRelationship_1ada33400fa075474a9311b95c1c691686"></a>

#### `public FString `[`Notes_Optional`](#structFRHAPI__FriendRelationship_1a64f787e21add9b85b4cd7c45cfd5d678) <a id="structFRHAPI__FriendRelationship_1a64f787e21add9b85b4cd7c45cfd5d678"></a>

#### `public bool `[`Notes_IsSet`](#structFRHAPI__FriendRelationship_1a0045e135ce9d4acd6734b217462072b4) <a id="structFRHAPI__FriendRelationship_1a0045e135ce9d4acd6734b217462072b4"></a>

true if Notes_Optional has been set to a value

#### `public FDateTime `[`LastModifiedOn`](#structFRHAPI__FriendRelationship_1afa70cca868e2e54b587fc6db2874ea49) <a id="structFRHAPI__FriendRelationship_1afa70cca868e2e54b587fc6db2874ea49"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__FriendRelationship_1a28d977f96fa03d5d44ebea347890d82f)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__FriendRelationship_1a28d977f96fa03d5d44ebea347890d82f"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__FriendRelationship_1a49f4e2a4c59c955cffb1e688be11bd2e)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__FriendRelationship_1a49f4e2a4c59c955cffb1e688be11bd2e"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetFriendsPlayerUuid`](#structFRHAPI__FriendRelationship_1ad179220eb0c6df2bf739d755ac54a867)`()` <a id="structFRHAPI__FriendRelationship_1ad179220eb0c6df2bf739d755ac54a867"></a>

Gets the value of FriendsPlayerUuid.

#### `public inline const FGuid & `[`GetFriendsPlayerUuid`](#structFRHAPI__FriendRelationship_1a12ffc4513beb4e19139d5bf22640b64c)`() const` <a id="structFRHAPI__FriendRelationship_1a12ffc4513beb4e19139d5bf22640b64c"></a>

Gets the value of FriendsPlayerUuid.

#### `public inline void `[`SetFriendsPlayerUuid`](#structFRHAPI__FriendRelationship_1a3c529848bb14f29c67559b02dd089927)`(const FGuid & NewValue)` <a id="structFRHAPI__FriendRelationship_1a3c529848bb14f29c67559b02dd089927"></a>

Sets the value of FriendsPlayerUuid.

#### `public inline void `[`SetFriendsPlayerUuid`](#structFRHAPI__FriendRelationship_1a0914440a86e5a18ff323cffa0f7431b8)`(FGuid && NewValue)` <a id="structFRHAPI__FriendRelationship_1a0914440a86e5a18ff323cffa0f7431b8"></a>

Sets the value of FriendsPlayerUuid using move semantics.

#### `public inline ERHAPI_FriendshipStatus & `[`GetStatus`](#structFRHAPI__FriendRelationship_1a7e1f104859b368c29a5e0545501d2c4f)`()` <a id="structFRHAPI__FriendRelationship_1a7e1f104859b368c29a5e0545501d2c4f"></a>

Gets the value of Status.

#### `public inline const ERHAPI_FriendshipStatus & `[`GetStatus`](#structFRHAPI__FriendRelationship_1a9ff18a1cd776b901ebb7dd22e364bc8f)`() const` <a id="structFRHAPI__FriendRelationship_1a9ff18a1cd776b901ebb7dd22e364bc8f"></a>

Gets the value of Status.

#### `public inline void `[`SetStatus`](#structFRHAPI__FriendRelationship_1ac3ddb416ba71d71897f8077e17d70bae)`(const ERHAPI_FriendshipStatus & NewValue)` <a id="structFRHAPI__FriendRelationship_1ac3ddb416ba71d71897f8077e17d70bae"></a>

Sets the value of Status.

#### `public inline void `[`SetStatus`](#structFRHAPI__FriendRelationship_1a0b0c24bea889c978b64595a23e4c3db8)`(ERHAPI_FriendshipStatus && NewValue)` <a id="structFRHAPI__FriendRelationship_1a0b0c24bea889c978b64595a23e4c3db8"></a>

Sets the value of Status using move semantics.

#### `public inline FString & `[`GetNotes`](#structFRHAPI__FriendRelationship_1a2a40b8a18282b539763ad7cf57a2df46)`()` <a id="structFRHAPI__FriendRelationship_1a2a40b8a18282b539763ad7cf57a2df46"></a>

Gets the value of Notes_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetNotes`](#structFRHAPI__FriendRelationship_1a4df572319c68e455e0fa4b7ab50e6e40)`() const` <a id="structFRHAPI__FriendRelationship_1a4df572319c68e455e0fa4b7ab50e6e40"></a>

Gets the value of Notes_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetNotes`](#structFRHAPI__FriendRelationship_1ae249ead28f14ebad1f8c9e5823f3a138)`(const FString & DefaultValue) const` <a id="structFRHAPI__FriendRelationship_1ae249ead28f14ebad1f8c9e5823f3a138"></a>

Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetNotes`](#structFRHAPI__FriendRelationship_1ada53f67cf3954122cc28792378702f87)`(FString & OutValue) const` <a id="structFRHAPI__FriendRelationship_1ada53f67cf3954122cc28792378702f87"></a>

Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetNotesOrNull`](#structFRHAPI__FriendRelationship_1a9771fc7468da4d38f4c628a09d22eff4)`()` <a id="structFRHAPI__FriendRelationship_1a9771fc7468da4d38f4c628a09d22eff4"></a>

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetNotesOrNull`](#structFRHAPI__FriendRelationship_1ae990237fb3a9ba8b8d2743eb5da6c2fc)`() const` <a id="structFRHAPI__FriendRelationship_1ae990237fb3a9ba8b8d2743eb5da6c2fc"></a>

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetNotes`](#structFRHAPI__FriendRelationship_1a61ae76ea7e83030e1229e17f79e4b897)`(const FString & NewValue)` <a id="structFRHAPI__FriendRelationship_1a61ae76ea7e83030e1229e17f79e4b897"></a>

Sets the value of Notes_Optional and also sets Notes_IsSet to true.

#### `public inline void `[`SetNotes`](#structFRHAPI__FriendRelationship_1a397c90df264ccad6e4c79ece44effdd8)`(FString && NewValue)` <a id="structFRHAPI__FriendRelationship_1a397c90df264ccad6e4c79ece44effdd8"></a>

Sets the value of Notes_Optional and also sets Notes_IsSet to true using move semantics.

#### `public inline void `[`ClearNotes`](#structFRHAPI__FriendRelationship_1a80279de05c50dc3699f2cbfd93ae5b1d)`()` <a id="structFRHAPI__FriendRelationship_1a80279de05c50dc3699f2cbfd93ae5b1d"></a>

Clears the value of Notes_Optional and sets Notes_IsSet to false.

#### `public inline bool `[`IsNotesSet`](#structFRHAPI__FriendRelationship_1ad535203b1d8f8ba3db7d885e197ba31a)`() const` <a id="structFRHAPI__FriendRelationship_1ad535203b1d8f8ba3db7d885e197ba31a"></a>

Checks whether Notes_Optional has been set.

#### `public inline FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__FriendRelationship_1a096ae21db5a26a76ff8de2236417f5ee)`()` <a id="structFRHAPI__FriendRelationship_1a096ae21db5a26a76ff8de2236417f5ee"></a>

Gets the value of LastModifiedOn.

#### `public inline const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__FriendRelationship_1a6a37ad82d6cb6d0660eecf9abf5a951e)`() const` <a id="structFRHAPI__FriendRelationship_1a6a37ad82d6cb6d0660eecf9abf5a951e"></a>

Gets the value of LastModifiedOn.

#### `public inline void `[`SetLastModifiedOn`](#structFRHAPI__FriendRelationship_1a86c6d102c1ecf589b54064ca0e171ab2)`(const FDateTime & NewValue)` <a id="structFRHAPI__FriendRelationship_1a86c6d102c1ecf589b54064ca0e171ab2"></a>

Sets the value of LastModifiedOn.

#### `public inline void `[`SetLastModifiedOn`](#structFRHAPI__FriendRelationship_1a6c41b55523a01c4cbbc08cc09697d7c7)`(FDateTime && NewValue)` <a id="structFRHAPI__FriendRelationship_1a6c41b55523a01c4cbbc08cc09697d7c7"></a>

Sets the value of LastModifiedOn using move semantics.

