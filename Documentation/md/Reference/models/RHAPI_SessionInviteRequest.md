---
title: RHAPI_SessionInviteRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionInviteRequest`](#structFRHAPI__SessionInviteRequest) | 

## struct `FRHAPI_SessionInviteRequest` <a id="structFRHAPI__SessionInviteRequest"></a>

```
struct FRHAPI_SessionInviteRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`TeamId_Optional`](#structFRHAPI__SessionInviteRequest_1a6960c5dd86375d9d05584b631333667c) | Which team the players in the source session should be on.
`public bool `[`TeamId_IsSet`](#structFRHAPI__SessionInviteRequest_1af5c8de1e202716ef678f1a91c04baf97) | true if TeamId_Optional has been set to a value
`public ERHAPI_TeamOverflowAction `[`OverflowAction_Optional`](#structFRHAPI__SessionInviteRequest_1a97ede86a0907650eeeae1bb82644483b) | How we should handle too many players being invited to the chosen team.
`public bool `[`OverflowAction_IsSet`](#structFRHAPI__SessionInviteRequest_1a405e07aa929faceca244105a7ec8a25c) | true if OverflowAction_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionInviteRequest_1a1e95e3a93a9e51f73f44f15a01368a4c) | Custom data for all players being invited.
`public bool `[`CustomData_IsSet`](#structFRHAPI__SessionInviteRequest_1a333f9fd32c73b595cc4014c836295424) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SessionInviteRequest_1a7aa90f95eae6d9efb74558d8eb249ade)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionInviteRequest_1acf5f1782a3a2cfbe4f736581d4defd63)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetTeamId`](#structFRHAPI__SessionInviteRequest_1a60223d1bd1fb52324bddbe9c0ba7a5b3)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionInviteRequest_1a7128638d336a49fdbb7ae1acd77833cf)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionInviteRequest_1a221970f607774106f909a8a338551ee3)`(const int32 & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeamId`](#structFRHAPI__SessionInviteRequest_1a8a1b425932dd231662d45969601d838b)`(int32 & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionInviteRequest_1a95a7a4594e28f92d5231465b0b97e1f6)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionInviteRequest_1af7896f36598feb240139ce0a65fc1187)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeamId`](#structFRHAPI__SessionInviteRequest_1a69dfb3b819ccf485f8f03c58a348ace0)`(const int32 & NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline void `[`SetTeamId`](#structFRHAPI__SessionInviteRequest_1a845c17036818ec6550954c6aad145beb)`(int32 && NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.
`public inline void `[`ClearTeamId`](#structFRHAPI__SessionInviteRequest_1ab803fd40b4e56bf7305e95e52b042adc)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline bool `[`IsTeamIdSet`](#structFRHAPI__SessionInviteRequest_1aa094f7b8c8df8f13d02e62ae8fa49280)`() const` | Checks whether TeamId_Optional has been set.
`public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__SessionInviteRequest_1a9aadde9c1d4c9214e23659a7c68bebbf)`() const` | Returns true if TeamId_Optional is set and matches the default value.
`public inline void `[`SetTeamIdToDefault`](#structFRHAPI__SessionInviteRequest_1a85d4fe630db7f98e9bf2a11dc22a6729)`()` | Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.
`public inline ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionInviteRequest_1a553f50290d709518e6727940b648e461)`()` | Gets the value of OverflowAction_Optional, regardless of it having been set.
`public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionInviteRequest_1aa892ff4c48aa85041dc4579bd3b55132)`() const` | Gets the value of OverflowAction_Optional, regardless of it having been set.
`public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionInviteRequest_1a58b4d60845f2a7d80e594f10d9eed54f)`(const ERHAPI_TeamOverflowAction & DefaultValue) const` | Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOverflowAction`](#structFRHAPI__SessionInviteRequest_1a54a9e060da58850d510b20afae8a78c8)`(ERHAPI_TeamOverflowAction & OutValue) const` | Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__SessionInviteRequest_1a120c8a3ddea77a63cba3aa40ea7da9c9)`()` | Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__SessionInviteRequest_1abbe2db4988ff4d6fd596227035e4f636)`() const` | Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOverflowAction`](#structFRHAPI__SessionInviteRequest_1a8869f71ece1d360f688d3b06f4de57a4)`(const ERHAPI_TeamOverflowAction & NewValue)` | Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.
`public inline void `[`SetOverflowAction`](#structFRHAPI__SessionInviteRequest_1a999124db6f8d8b37aa6a02367ebdbeeb)`(ERHAPI_TeamOverflowAction && NewValue)` | Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true using move semantics.
`public inline void `[`ClearOverflowAction`](#structFRHAPI__SessionInviteRequest_1a028d16832907411195a4c18f65f485a5)`()` | Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.
`public inline bool `[`IsOverflowActionSet`](#structFRHAPI__SessionInviteRequest_1aed55a99410abbcdc8773930791e0c0b6)`() const` | Checks whether OverflowAction_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionInviteRequest_1adc153733a764932eec794e8e8fc93198)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionInviteRequest_1a40370a3b53bb12edf870c3ef592e0c51)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionInviteRequest_1abe83ce3ebc7a7174ac01146bafadbb16)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__SessionInviteRequest_1a86d2b56c097198a5a15921b6f97601f3)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionInviteRequest_1a7fb35f14af60219931c2cd71163e09fe)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionInviteRequest_1a90d78478a36df03e712c78ca16c8b4cd)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionInviteRequest_1a024f088908644c46842748d6fb5ba272)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionInviteRequest_1a2efdf342aec88aeb9e9a30ea98996276)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionInviteRequest_1abf043838cd5ee967422e9bac37825728)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__SessionInviteRequest_1a392475fb068fb14d472765b54ddf1d77)`() const` | Checks whether CustomData_Optional has been set.

### Members

#### `public int32 `[`TeamId_Optional`](#structFRHAPI__SessionInviteRequest_1a6960c5dd86375d9d05584b631333667c) <a id="structFRHAPI__SessionInviteRequest_1a6960c5dd86375d9d05584b631333667c"></a>

Which team the players in the source session should be on.

#### `public bool `[`TeamId_IsSet`](#structFRHAPI__SessionInviteRequest_1af5c8de1e202716ef678f1a91c04baf97) <a id="structFRHAPI__SessionInviteRequest_1af5c8de1e202716ef678f1a91c04baf97"></a>

true if TeamId_Optional has been set to a value

#### `public ERHAPI_TeamOverflowAction `[`OverflowAction_Optional`](#structFRHAPI__SessionInviteRequest_1a97ede86a0907650eeeae1bb82644483b) <a id="structFRHAPI__SessionInviteRequest_1a97ede86a0907650eeeae1bb82644483b"></a>

How we should handle too many players being invited to the chosen team.

#### `public bool `[`OverflowAction_IsSet`](#structFRHAPI__SessionInviteRequest_1a405e07aa929faceca244105a7ec8a25c) <a id="structFRHAPI__SessionInviteRequest_1a405e07aa929faceca244105a7ec8a25c"></a>

true if OverflowAction_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionInviteRequest_1a1e95e3a93a9e51f73f44f15a01368a4c) <a id="structFRHAPI__SessionInviteRequest_1a1e95e3a93a9e51f73f44f15a01368a4c"></a>

Custom data for all players being invited.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__SessionInviteRequest_1a333f9fd32c73b595cc4014c836295424) <a id="structFRHAPI__SessionInviteRequest_1a333f9fd32c73b595cc4014c836295424"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionInviteRequest_1a7aa90f95eae6d9efb74558d8eb249ade)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionInviteRequest_1a7aa90f95eae6d9efb74558d8eb249ade"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionInviteRequest_1acf5f1782a3a2cfbe4f736581d4defd63)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SessionInviteRequest_1acf5f1782a3a2cfbe4f736581d4defd63"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetTeamId`](#structFRHAPI__SessionInviteRequest_1a60223d1bd1fb52324bddbe9c0ba7a5b3)`()` <a id="structFRHAPI__SessionInviteRequest_1a60223d1bd1fb52324bddbe9c0ba7a5b3"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionInviteRequest_1a7128638d336a49fdbb7ae1acd77833cf)`() const` <a id="structFRHAPI__SessionInviteRequest_1a7128638d336a49fdbb7ae1acd77833cf"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionInviteRequest_1a221970f607774106f909a8a338551ee3)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionInviteRequest_1a221970f607774106f909a8a338551ee3"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTeamId`](#structFRHAPI__SessionInviteRequest_1a8a1b425932dd231662d45969601d838b)`(int32 & OutValue) const` <a id="structFRHAPI__SessionInviteRequest_1a8a1b425932dd231662d45969601d838b"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionInviteRequest_1a95a7a4594e28f92d5231465b0b97e1f6)`()` <a id="structFRHAPI__SessionInviteRequest_1a95a7a4594e28f92d5231465b0b97e1f6"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionInviteRequest_1af7896f36598feb240139ce0a65fc1187)`() const` <a id="structFRHAPI__SessionInviteRequest_1af7896f36598feb240139ce0a65fc1187"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTeamId`](#structFRHAPI__SessionInviteRequest_1a69dfb3b819ccf485f8f03c58a348ace0)`(const int32 & NewValue)` <a id="structFRHAPI__SessionInviteRequest_1a69dfb3b819ccf485f8f03c58a348ace0"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline void `[`SetTeamId`](#structFRHAPI__SessionInviteRequest_1a845c17036818ec6550954c6aad145beb)`(int32 && NewValue)` <a id="structFRHAPI__SessionInviteRequest_1a845c17036818ec6550954c6aad145beb"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__SessionInviteRequest_1ab803fd40b4e56bf7305e95e52b042adc)`()` <a id="structFRHAPI__SessionInviteRequest_1ab803fd40b4e56bf7305e95e52b042adc"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

#### `public inline bool `[`IsTeamIdSet`](#structFRHAPI__SessionInviteRequest_1aa094f7b8c8df8f13d02e62ae8fa49280)`() const` <a id="structFRHAPI__SessionInviteRequest_1aa094f7b8c8df8f13d02e62ae8fa49280"></a>

Checks whether TeamId_Optional has been set.

#### `public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__SessionInviteRequest_1a9aadde9c1d4c9214e23659a7c68bebbf)`() const` <a id="structFRHAPI__SessionInviteRequest_1a9aadde9c1d4c9214e23659a7c68bebbf"></a>

Returns true if TeamId_Optional is set and matches the default value.

#### `public inline void `[`SetTeamIdToDefault`](#structFRHAPI__SessionInviteRequest_1a85d4fe630db7f98e9bf2a11dc22a6729)`()` <a id="structFRHAPI__SessionInviteRequest_1a85d4fe630db7f98e9bf2a11dc22a6729"></a>

Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.

#### `public inline ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionInviteRequest_1a553f50290d709518e6727940b648e461)`()` <a id="structFRHAPI__SessionInviteRequest_1a553f50290d709518e6727940b648e461"></a>

Gets the value of OverflowAction_Optional, regardless of it having been set.

#### `public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionInviteRequest_1aa892ff4c48aa85041dc4579bd3b55132)`() const` <a id="structFRHAPI__SessionInviteRequest_1aa892ff4c48aa85041dc4579bd3b55132"></a>

Gets the value of OverflowAction_Optional, regardless of it having been set.

#### `public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionInviteRequest_1a58b4d60845f2a7d80e594f10d9eed54f)`(const ERHAPI_TeamOverflowAction & DefaultValue) const` <a id="structFRHAPI__SessionInviteRequest_1a58b4d60845f2a7d80e594f10d9eed54f"></a>

Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOverflowAction`](#structFRHAPI__SessionInviteRequest_1a54a9e060da58850d510b20afae8a78c8)`(ERHAPI_TeamOverflowAction & OutValue) const` <a id="structFRHAPI__SessionInviteRequest_1a54a9e060da58850d510b20afae8a78c8"></a>

Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__SessionInviteRequest_1a120c8a3ddea77a63cba3aa40ea7da9c9)`()` <a id="structFRHAPI__SessionInviteRequest_1a120c8a3ddea77a63cba3aa40ea7da9c9"></a>

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__SessionInviteRequest_1abbe2db4988ff4d6fd596227035e4f636)`() const` <a id="structFRHAPI__SessionInviteRequest_1abbe2db4988ff4d6fd596227035e4f636"></a>

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOverflowAction`](#structFRHAPI__SessionInviteRequest_1a8869f71ece1d360f688d3b06f4de57a4)`(const ERHAPI_TeamOverflowAction & NewValue)` <a id="structFRHAPI__SessionInviteRequest_1a8869f71ece1d360f688d3b06f4de57a4"></a>

Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.

#### `public inline void `[`SetOverflowAction`](#structFRHAPI__SessionInviteRequest_1a999124db6f8d8b37aa6a02367ebdbeeb)`(ERHAPI_TeamOverflowAction && NewValue)` <a id="structFRHAPI__SessionInviteRequest_1a999124db6f8d8b37aa6a02367ebdbeeb"></a>

Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true using move semantics.

#### `public inline void `[`ClearOverflowAction`](#structFRHAPI__SessionInviteRequest_1a028d16832907411195a4c18f65f485a5)`()` <a id="structFRHAPI__SessionInviteRequest_1a028d16832907411195a4c18f65f485a5"></a>

Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.

#### `public inline bool `[`IsOverflowActionSet`](#structFRHAPI__SessionInviteRequest_1aed55a99410abbcdc8773930791e0c0b6)`() const` <a id="structFRHAPI__SessionInviteRequest_1aed55a99410abbcdc8773930791e0c0b6"></a>

Checks whether OverflowAction_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionInviteRequest_1adc153733a764932eec794e8e8fc93198)`()` <a id="structFRHAPI__SessionInviteRequest_1adc153733a764932eec794e8e8fc93198"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionInviteRequest_1a40370a3b53bb12edf870c3ef592e0c51)`() const` <a id="structFRHAPI__SessionInviteRequest_1a40370a3b53bb12edf870c3ef592e0c51"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionInviteRequest_1abe83ce3ebc7a7174ac01146bafadbb16)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionInviteRequest_1abe83ce3ebc7a7174ac01146bafadbb16"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__SessionInviteRequest_1a86d2b56c097198a5a15921b6f97601f3)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionInviteRequest_1a86d2b56c097198a5a15921b6f97601f3"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionInviteRequest_1a7fb35f14af60219931c2cd71163e09fe)`()` <a id="structFRHAPI__SessionInviteRequest_1a7fb35f14af60219931c2cd71163e09fe"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionInviteRequest_1a90d78478a36df03e712c78ca16c8b4cd)`() const` <a id="structFRHAPI__SessionInviteRequest_1a90d78478a36df03e712c78ca16c8b4cd"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionInviteRequest_1a024f088908644c46842748d6fb5ba272)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__SessionInviteRequest_1a024f088908644c46842748d6fb5ba272"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionInviteRequest_1a2efdf342aec88aeb9e9a30ea98996276)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__SessionInviteRequest_1a2efdf342aec88aeb9e9a30ea98996276"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionInviteRequest_1abf043838cd5ee967422e9bac37825728)`()` <a id="structFRHAPI__SessionInviteRequest_1abf043838cd5ee967422e9bac37825728"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__SessionInviteRequest_1a392475fb068fb14d472765b54ddf1d77)`() const` <a id="structFRHAPI__SessionInviteRequest_1a392475fb068fb14d472765b54ddf1d77"></a>

Checks whether CustomData_Optional has been set.

