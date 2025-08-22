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
`public inline FORCEINLINE FGuid & `[`GetFriendsPlayerUuid`](#structFRHAPI__FriendRelationship_1aa10344077f8fe8c3182a72f36e45fd20)`()` | Gets the value of FriendsPlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetFriendsPlayerUuid`](#structFRHAPI__FriendRelationship_1a5a24841fe14fcdb4e3e1ad1e00153a55)`() const` | Gets the value of FriendsPlayerUuid.
`public inline FORCEINLINE void `[`SetFriendsPlayerUuid`](#structFRHAPI__FriendRelationship_1af857e686ec39ffdd3a7d09fead686524)`(const FGuid & NewValue)` | Sets the value of FriendsPlayerUuid.
`public inline FORCEINLINE void `[`SetFriendsPlayerUuid`](#structFRHAPI__FriendRelationship_1a51b590838461319cac24fcc2996e7960)`(FGuid && NewValue)` | Sets the value of FriendsPlayerUuid using move semantics.
`public inline FORCEINLINE ERHAPI_FriendshipStatus & `[`GetStatus`](#structFRHAPI__FriendRelationship_1a28343eb2f2fa9a8fed4dbcfd63d889c4)`()` | Gets the value of Status.
`public inline FORCEINLINE const ERHAPI_FriendshipStatus & `[`GetStatus`](#structFRHAPI__FriendRelationship_1a5a0d4a8930ae79d1c91cd89fe55a8b20)`() const` | Gets the value of Status.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__FriendRelationship_1affedf8f3a5e1c9dda4a4e8d38d75e05f)`(const ERHAPI_FriendshipStatus & NewValue)` | Sets the value of Status.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__FriendRelationship_1af87815cb507765533ca3a111d7e85012)`(ERHAPI_FriendshipStatus && NewValue)` | Sets the value of Status using move semantics.
`public inline FORCEINLINE FString & `[`GetNotes`](#structFRHAPI__FriendRelationship_1aa5310fc4c3626910cad4cc8b550164c5)`()` | Gets the value of Notes_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetNotes`](#structFRHAPI__FriendRelationship_1a93b0e0fa07bb2ebe8a5610d0342466d7)`() const` | Gets the value of Notes_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetNotes`](#structFRHAPI__FriendRelationship_1ac2329d5ae5764f790fc33007784d3533)`(const FString & DefaultValue) const` | Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetNotes`](#structFRHAPI__FriendRelationship_1a6c26fd7a57caff551e2a5a9b4d8c85c0)`(FString & OutValue) const` | Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetNotesOrNull`](#structFRHAPI__FriendRelationship_1ac5137effb4fbeb97d0df6f5b24293016)`()` | Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetNotesOrNull`](#structFRHAPI__FriendRelationship_1a06a53431940609f98ef706cebe9ad679)`() const` | Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetNotes`](#structFRHAPI__FriendRelationship_1abd222f92850c9ef762acb6520446a7d4)`(const FString & NewValue)` | Sets the value of Notes_Optional and also sets Notes_IsSet to true.
`public inline FORCEINLINE void `[`SetNotes`](#structFRHAPI__FriendRelationship_1a291e56c63795001021002f05deb79c88)`(FString && NewValue)` | Sets the value of Notes_Optional and also sets Notes_IsSet to true using move semantics.
`public inline void `[`ClearNotes`](#structFRHAPI__FriendRelationship_1a80279de05c50dc3699f2cbfd93ae5b1d)`()` | Clears the value of Notes_Optional and sets Notes_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__FriendRelationship_1ab1d3d24a9463cb1d99f37a876f76f497)`()` | Gets the value of LastModifiedOn.
`public inline FORCEINLINE const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__FriendRelationship_1a3bd761057003493989e04740c0ff08b7)`() const` | Gets the value of LastModifiedOn.
`public inline FORCEINLINE void `[`SetLastModifiedOn`](#structFRHAPI__FriendRelationship_1a7c9e5435ea26e56e35d31ac82c564fe8)`(const FDateTime & NewValue)` | Sets the value of LastModifiedOn.
`public inline FORCEINLINE void `[`SetLastModifiedOn`](#structFRHAPI__FriendRelationship_1a7b10349a4a8034b55156cffdb3db92ea)`(FDateTime && NewValue)` | Sets the value of LastModifiedOn using move semantics.

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

#### `public inline FORCEINLINE FGuid & `[`GetFriendsPlayerUuid`](#structFRHAPI__FriendRelationship_1aa10344077f8fe8c3182a72f36e45fd20)`()` <a id="structFRHAPI__FriendRelationship_1aa10344077f8fe8c3182a72f36e45fd20"></a>

Gets the value of FriendsPlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetFriendsPlayerUuid`](#structFRHAPI__FriendRelationship_1a5a24841fe14fcdb4e3e1ad1e00153a55)`() const` <a id="structFRHAPI__FriendRelationship_1a5a24841fe14fcdb4e3e1ad1e00153a55"></a>

Gets the value of FriendsPlayerUuid.

#### `public inline FORCEINLINE void `[`SetFriendsPlayerUuid`](#structFRHAPI__FriendRelationship_1af857e686ec39ffdd3a7d09fead686524)`(const FGuid & NewValue)` <a id="structFRHAPI__FriendRelationship_1af857e686ec39ffdd3a7d09fead686524"></a>

Sets the value of FriendsPlayerUuid.

#### `public inline FORCEINLINE void `[`SetFriendsPlayerUuid`](#structFRHAPI__FriendRelationship_1a51b590838461319cac24fcc2996e7960)`(FGuid && NewValue)` <a id="structFRHAPI__FriendRelationship_1a51b590838461319cac24fcc2996e7960"></a>

Sets the value of FriendsPlayerUuid using move semantics.

#### `public inline FORCEINLINE ERHAPI_FriendshipStatus & `[`GetStatus`](#structFRHAPI__FriendRelationship_1a28343eb2f2fa9a8fed4dbcfd63d889c4)`()` <a id="structFRHAPI__FriendRelationship_1a28343eb2f2fa9a8fed4dbcfd63d889c4"></a>

Gets the value of Status.

#### `public inline FORCEINLINE const ERHAPI_FriendshipStatus & `[`GetStatus`](#structFRHAPI__FriendRelationship_1a5a0d4a8930ae79d1c91cd89fe55a8b20)`() const` <a id="structFRHAPI__FriendRelationship_1a5a0d4a8930ae79d1c91cd89fe55a8b20"></a>

Gets the value of Status.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__FriendRelationship_1affedf8f3a5e1c9dda4a4e8d38d75e05f)`(const ERHAPI_FriendshipStatus & NewValue)` <a id="structFRHAPI__FriendRelationship_1affedf8f3a5e1c9dda4a4e8d38d75e05f"></a>

Sets the value of Status.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__FriendRelationship_1af87815cb507765533ca3a111d7e85012)`(ERHAPI_FriendshipStatus && NewValue)` <a id="structFRHAPI__FriendRelationship_1af87815cb507765533ca3a111d7e85012"></a>

Sets the value of Status using move semantics.

#### `public inline FORCEINLINE FString & `[`GetNotes`](#structFRHAPI__FriendRelationship_1aa5310fc4c3626910cad4cc8b550164c5)`()` <a id="structFRHAPI__FriendRelationship_1aa5310fc4c3626910cad4cc8b550164c5"></a>

Gets the value of Notes_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetNotes`](#structFRHAPI__FriendRelationship_1a93b0e0fa07bb2ebe8a5610d0342466d7)`() const` <a id="structFRHAPI__FriendRelationship_1a93b0e0fa07bb2ebe8a5610d0342466d7"></a>

Gets the value of Notes_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetNotes`](#structFRHAPI__FriendRelationship_1ac2329d5ae5764f790fc33007784d3533)`(const FString & DefaultValue) const` <a id="structFRHAPI__FriendRelationship_1ac2329d5ae5764f790fc33007784d3533"></a>

Gets the value of Notes_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetNotes`](#structFRHAPI__FriendRelationship_1a6c26fd7a57caff551e2a5a9b4d8c85c0)`(FString & OutValue) const` <a id="structFRHAPI__FriendRelationship_1a6c26fd7a57caff551e2a5a9b4d8c85c0"></a>

Fills OutValue with the value of Notes_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetNotesOrNull`](#structFRHAPI__FriendRelationship_1ac5137effb4fbeb97d0df6f5b24293016)`()` <a id="structFRHAPI__FriendRelationship_1ac5137effb4fbeb97d0df6f5b24293016"></a>

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetNotesOrNull`](#structFRHAPI__FriendRelationship_1a06a53431940609f98ef706cebe9ad679)`() const` <a id="structFRHAPI__FriendRelationship_1a06a53431940609f98ef706cebe9ad679"></a>

Returns a pointer to Notes_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetNotes`](#structFRHAPI__FriendRelationship_1abd222f92850c9ef762acb6520446a7d4)`(const FString & NewValue)` <a id="structFRHAPI__FriendRelationship_1abd222f92850c9ef762acb6520446a7d4"></a>

Sets the value of Notes_Optional and also sets Notes_IsSet to true.

#### `public inline FORCEINLINE void `[`SetNotes`](#structFRHAPI__FriendRelationship_1a291e56c63795001021002f05deb79c88)`(FString && NewValue)` <a id="structFRHAPI__FriendRelationship_1a291e56c63795001021002f05deb79c88"></a>

Sets the value of Notes_Optional and also sets Notes_IsSet to true using move semantics.

#### `public inline void `[`ClearNotes`](#structFRHAPI__FriendRelationship_1a80279de05c50dc3699f2cbfd93ae5b1d)`()` <a id="structFRHAPI__FriendRelationship_1a80279de05c50dc3699f2cbfd93ae5b1d"></a>

Clears the value of Notes_Optional and sets Notes_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__FriendRelationship_1ab1d3d24a9463cb1d99f37a876f76f497)`()` <a id="structFRHAPI__FriendRelationship_1ab1d3d24a9463cb1d99f37a876f76f497"></a>

Gets the value of LastModifiedOn.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastModifiedOn`](#structFRHAPI__FriendRelationship_1a3bd761057003493989e04740c0ff08b7)`() const` <a id="structFRHAPI__FriendRelationship_1a3bd761057003493989e04740c0ff08b7"></a>

Gets the value of LastModifiedOn.

#### `public inline FORCEINLINE void `[`SetLastModifiedOn`](#structFRHAPI__FriendRelationship_1a7c9e5435ea26e56e35d31ac82c564fe8)`(const FDateTime & NewValue)` <a id="structFRHAPI__FriendRelationship_1a7c9e5435ea26e56e35d31ac82c564fe8"></a>

Sets the value of LastModifiedOn.

#### `public inline FORCEINLINE void `[`SetLastModifiedOn`](#structFRHAPI__FriendRelationship_1a7b10349a4a8034b55156cffdb3db92ea)`(FDateTime && NewValue)` <a id="structFRHAPI__FriendRelationship_1a7b10349a4a8034b55156cffdb3db92ea"></a>

Sets the value of LastModifiedOn using move semantics.

