---
title: RHAPI_PlayerInviteRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerInviteRequest`](#structFRHAPI__PlayerInviteRequest) | 

## struct `FRHAPI_PlayerInviteRequest` <a id="structFRHAPI__PlayerInviteRequest"></a>

```
struct FRHAPI_PlayerInviteRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`TeamId_Optional`](#structFRHAPI__PlayerInviteRequest_1a49366335c19cec2c38dd6ae1435a2c6f) | Which team the invited players should prioritize being put on.
`public bool `[`TeamId_IsSet`](#structFRHAPI__PlayerInviteRequest_1a54b1fc36d7cffe777759788c69b2888b) | true if TeamId_Optional has been set to a value
`public ERHAPI_TeamOverflowAction `[`OverflowAction_Optional`](#structFRHAPI__PlayerInviteRequest_1acd00317b8f93808368cee642473234dc) | How we should handle too many players being invited to the chosen team.
`public bool `[`OverflowAction_IsSet`](#structFRHAPI__PlayerInviteRequest_1a23f7fa5b60c9a23cc05b31aff6b41ce9) | true if OverflowAction_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerInviteRequest_1aa4a8183db1204767f9cdcbb02c4e603c) | Custom data for all players being invited.
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerInviteRequest_1af320c4bac14ea883a5a89fbf46cc0f50) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerInviteRequest_1ad78758c09df212bc19233d6cabe5e9b0)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerInviteRequest_1aa60677465b35779ab1f437e4f9836201)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetTeamId`](#structFRHAPI__PlayerInviteRequest_1a339cec7ae6c383cd9b4270dfd8b9f8e8)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__PlayerInviteRequest_1a1d0ab5e188fede665489e1cdef78fa69)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__PlayerInviteRequest_1a8cd818f4f0f20b99ef8a6ed840d97ed4)`(const int32 & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeamId`](#structFRHAPI__PlayerInviteRequest_1afa08ce937885049024c89ada9866fac1)`(int32 & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__PlayerInviteRequest_1a6e52bfc2b423ba656edc9019261ee5a3)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__PlayerInviteRequest_1a8a2cd5d7e9e5f778882f44273c2fe822)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeamId`](#structFRHAPI__PlayerInviteRequest_1a9b29393d1208649120ddd5ac12566270)`(const int32 & NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline void `[`SetTeamId`](#structFRHAPI__PlayerInviteRequest_1a2cdfc62b3c26aa98333935ac86b6dfd7)`(int32 && NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.
`public inline void `[`ClearTeamId`](#structFRHAPI__PlayerInviteRequest_1a4a4391b995314263b7e4a378a1997611)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline bool `[`IsTeamIdSet`](#structFRHAPI__PlayerInviteRequest_1ae3260a4dfdf82ce313cf988eb9d3e300)`() const` | Checks whether TeamId_Optional has been set.
`public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__PlayerInviteRequest_1aec2b36b9510ebc167f535eb0d0751183)`() const` | Returns true if TeamId_Optional is set and matches the default value.
`public inline void `[`SetTeamIdToDefault`](#structFRHAPI__PlayerInviteRequest_1a11aaa9709b7f44c01b150411ba624e4a)`()` | Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.
`public inline ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1a3a15ae4df5b6a837a827dd331bd1cd03)`()` | Gets the value of OverflowAction_Optional, regardless of it having been set.
`public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1aa94acc58d73044ba261a3ef4e9b435b5)`() const` | Gets the value of OverflowAction_Optional, regardless of it having been set.
`public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1a9c6b77658a6ff82ba8fb2ce68fb51608)`(const ERHAPI_TeamOverflowAction & DefaultValue) const` | Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1a60cc539d8223321cb36c17ba165b3c28)`(ERHAPI_TeamOverflowAction & OutValue) const` | Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__PlayerInviteRequest_1aded265ec30533e3ba7d8b7371fa67c6f)`()` | Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__PlayerInviteRequest_1a1d9be43d942aebaec66147d21cc343f5)`() const` | Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1ae8ba1281290c1b484d9cd172d101d1d2)`(const ERHAPI_TeamOverflowAction & NewValue)` | Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.
`public inline void `[`SetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1ac3e3f87988fb6ed5cd1deba9c553bd2c)`(ERHAPI_TeamOverflowAction && NewValue)` | Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true using move semantics.
`public inline void `[`ClearOverflowAction`](#structFRHAPI__PlayerInviteRequest_1a6939fe292845cf95020f9045b256ea8f)`()` | Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.
`public inline bool `[`IsOverflowActionSet`](#structFRHAPI__PlayerInviteRequest_1ab9cbc2a38d4b5c1ef3c872f22d575246)`() const` | Checks whether OverflowAction_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerInviteRequest_1a1ed9aa2a9724365ce95d51e40833a428)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerInviteRequest_1a1d413cb1e845cf4049c77e6d877dd572)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerInviteRequest_1a63c69d16759b6232280e4a9745db54dd)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlayerInviteRequest_1a14607cf44b4093cb334007847036c345)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerInviteRequest_1a4b8ffd9fc26b012ce6bce516aa04c713)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerInviteRequest_1a586ce52f0d964d3f02352d371b0f6eb4)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerInviteRequest_1ad82d0ccec754c235b80a2f81d6b58557)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerInviteRequest_1a039307e361e9b1ecbbf236398948883e)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerInviteRequest_1afcdc93fd4d4ca3cffb2c94fee4ce7375)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlayerInviteRequest_1aa623c7afc6e301cd8a2382811884c379)`() const` | Checks whether CustomData_Optional has been set.

### Members

#### `public int32 `[`TeamId_Optional`](#structFRHAPI__PlayerInviteRequest_1a49366335c19cec2c38dd6ae1435a2c6f) <a id="structFRHAPI__PlayerInviteRequest_1a49366335c19cec2c38dd6ae1435a2c6f"></a>

Which team the invited players should prioritize being put on.

#### `public bool `[`TeamId_IsSet`](#structFRHAPI__PlayerInviteRequest_1a54b1fc36d7cffe777759788c69b2888b) <a id="structFRHAPI__PlayerInviteRequest_1a54b1fc36d7cffe777759788c69b2888b"></a>

true if TeamId_Optional has been set to a value

#### `public ERHAPI_TeamOverflowAction `[`OverflowAction_Optional`](#structFRHAPI__PlayerInviteRequest_1acd00317b8f93808368cee642473234dc) <a id="structFRHAPI__PlayerInviteRequest_1acd00317b8f93808368cee642473234dc"></a>

How we should handle too many players being invited to the chosen team.

#### `public bool `[`OverflowAction_IsSet`](#structFRHAPI__PlayerInviteRequest_1a23f7fa5b60c9a23cc05b31aff6b41ce9) <a id="structFRHAPI__PlayerInviteRequest_1a23f7fa5b60c9a23cc05b31aff6b41ce9"></a>

true if OverflowAction_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerInviteRequest_1aa4a8183db1204767f9cdcbb02c4e603c) <a id="structFRHAPI__PlayerInviteRequest_1aa4a8183db1204767f9cdcbb02c4e603c"></a>

Custom data for all players being invited.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerInviteRequest_1af320c4bac14ea883a5a89fbf46cc0f50) <a id="structFRHAPI__PlayerInviteRequest_1af320c4bac14ea883a5a89fbf46cc0f50"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerInviteRequest_1ad78758c09df212bc19233d6cabe5e9b0)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerInviteRequest_1ad78758c09df212bc19233d6cabe5e9b0"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerInviteRequest_1aa60677465b35779ab1f437e4f9836201)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerInviteRequest_1aa60677465b35779ab1f437e4f9836201"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetTeamId`](#structFRHAPI__PlayerInviteRequest_1a339cec7ae6c383cd9b4270dfd8b9f8e8)`()` <a id="structFRHAPI__PlayerInviteRequest_1a339cec7ae6c383cd9b4270dfd8b9f8e8"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__PlayerInviteRequest_1a1d0ab5e188fede665489e1cdef78fa69)`() const` <a id="structFRHAPI__PlayerInviteRequest_1a1d0ab5e188fede665489e1cdef78fa69"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__PlayerInviteRequest_1a8cd818f4f0f20b99ef8a6ed840d97ed4)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerInviteRequest_1a8cd818f4f0f20b99ef8a6ed840d97ed4"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTeamId`](#structFRHAPI__PlayerInviteRequest_1afa08ce937885049024c89ada9866fac1)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerInviteRequest_1afa08ce937885049024c89ada9866fac1"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__PlayerInviteRequest_1a6e52bfc2b423ba656edc9019261ee5a3)`()` <a id="structFRHAPI__PlayerInviteRequest_1a6e52bfc2b423ba656edc9019261ee5a3"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__PlayerInviteRequest_1a8a2cd5d7e9e5f778882f44273c2fe822)`() const` <a id="structFRHAPI__PlayerInviteRequest_1a8a2cd5d7e9e5f778882f44273c2fe822"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTeamId`](#structFRHAPI__PlayerInviteRequest_1a9b29393d1208649120ddd5ac12566270)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerInviteRequest_1a9b29393d1208649120ddd5ac12566270"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline void `[`SetTeamId`](#structFRHAPI__PlayerInviteRequest_1a2cdfc62b3c26aa98333935ac86b6dfd7)`(int32 && NewValue)` <a id="structFRHAPI__PlayerInviteRequest_1a2cdfc62b3c26aa98333935ac86b6dfd7"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__PlayerInviteRequest_1a4a4391b995314263b7e4a378a1997611)`()` <a id="structFRHAPI__PlayerInviteRequest_1a4a4391b995314263b7e4a378a1997611"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

#### `public inline bool `[`IsTeamIdSet`](#structFRHAPI__PlayerInviteRequest_1ae3260a4dfdf82ce313cf988eb9d3e300)`() const` <a id="structFRHAPI__PlayerInviteRequest_1ae3260a4dfdf82ce313cf988eb9d3e300"></a>

Checks whether TeamId_Optional has been set.

#### `public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__PlayerInviteRequest_1aec2b36b9510ebc167f535eb0d0751183)`() const` <a id="structFRHAPI__PlayerInviteRequest_1aec2b36b9510ebc167f535eb0d0751183"></a>

Returns true if TeamId_Optional is set and matches the default value.

#### `public inline void `[`SetTeamIdToDefault`](#structFRHAPI__PlayerInviteRequest_1a11aaa9709b7f44c01b150411ba624e4a)`()` <a id="structFRHAPI__PlayerInviteRequest_1a11aaa9709b7f44c01b150411ba624e4a"></a>

Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.

#### `public inline ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1a3a15ae4df5b6a837a827dd331bd1cd03)`()` <a id="structFRHAPI__PlayerInviteRequest_1a3a15ae4df5b6a837a827dd331bd1cd03"></a>

Gets the value of OverflowAction_Optional, regardless of it having been set.

#### `public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1aa94acc58d73044ba261a3ef4e9b435b5)`() const` <a id="structFRHAPI__PlayerInviteRequest_1aa94acc58d73044ba261a3ef4e9b435b5"></a>

Gets the value of OverflowAction_Optional, regardless of it having been set.

#### `public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1a9c6b77658a6ff82ba8fb2ce68fb51608)`(const ERHAPI_TeamOverflowAction & DefaultValue) const` <a id="structFRHAPI__PlayerInviteRequest_1a9c6b77658a6ff82ba8fb2ce68fb51608"></a>

Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1a60cc539d8223321cb36c17ba165b3c28)`(ERHAPI_TeamOverflowAction & OutValue) const` <a id="structFRHAPI__PlayerInviteRequest_1a60cc539d8223321cb36c17ba165b3c28"></a>

Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__PlayerInviteRequest_1aded265ec30533e3ba7d8b7371fa67c6f)`()` <a id="structFRHAPI__PlayerInviteRequest_1aded265ec30533e3ba7d8b7371fa67c6f"></a>

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__PlayerInviteRequest_1a1d9be43d942aebaec66147d21cc343f5)`() const` <a id="structFRHAPI__PlayerInviteRequest_1a1d9be43d942aebaec66147d21cc343f5"></a>

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1ae8ba1281290c1b484d9cd172d101d1d2)`(const ERHAPI_TeamOverflowAction & NewValue)` <a id="structFRHAPI__PlayerInviteRequest_1ae8ba1281290c1b484d9cd172d101d1d2"></a>

Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.

#### `public inline void `[`SetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1ac3e3f87988fb6ed5cd1deba9c553bd2c)`(ERHAPI_TeamOverflowAction && NewValue)` <a id="structFRHAPI__PlayerInviteRequest_1ac3e3f87988fb6ed5cd1deba9c553bd2c"></a>

Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true using move semantics.

#### `public inline void `[`ClearOverflowAction`](#structFRHAPI__PlayerInviteRequest_1a6939fe292845cf95020f9045b256ea8f)`()` <a id="structFRHAPI__PlayerInviteRequest_1a6939fe292845cf95020f9045b256ea8f"></a>

Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.

#### `public inline bool `[`IsOverflowActionSet`](#structFRHAPI__PlayerInviteRequest_1ab9cbc2a38d4b5c1ef3c872f22d575246)`() const` <a id="structFRHAPI__PlayerInviteRequest_1ab9cbc2a38d4b5c1ef3c872f22d575246"></a>

Checks whether OverflowAction_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerInviteRequest_1a1ed9aa2a9724365ce95d51e40833a428)`()` <a id="structFRHAPI__PlayerInviteRequest_1a1ed9aa2a9724365ce95d51e40833a428"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerInviteRequest_1a1d413cb1e845cf4049c77e6d877dd572)`() const` <a id="structFRHAPI__PlayerInviteRequest_1a1d413cb1e845cf4049c77e6d877dd572"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerInviteRequest_1a63c69d16759b6232280e4a9745db54dd)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerInviteRequest_1a63c69d16759b6232280e4a9745db54dd"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlayerInviteRequest_1a14607cf44b4093cb334007847036c345)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerInviteRequest_1a14607cf44b4093cb334007847036c345"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerInviteRequest_1a4b8ffd9fc26b012ce6bce516aa04c713)`()` <a id="structFRHAPI__PlayerInviteRequest_1a4b8ffd9fc26b012ce6bce516aa04c713"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerInviteRequest_1a586ce52f0d964d3f02352d371b0f6eb4)`() const` <a id="structFRHAPI__PlayerInviteRequest_1a586ce52f0d964d3f02352d371b0f6eb4"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerInviteRequest_1ad82d0ccec754c235b80a2f81d6b58557)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlayerInviteRequest_1ad82d0ccec754c235b80a2f81d6b58557"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerInviteRequest_1a039307e361e9b1ecbbf236398948883e)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlayerInviteRequest_1a039307e361e9b1ecbbf236398948883e"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerInviteRequest_1afcdc93fd4d4ca3cffb2c94fee4ce7375)`()` <a id="structFRHAPI__PlayerInviteRequest_1afcdc93fd4d4ca3cffb2c94fee4ce7375"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlayerInviteRequest_1aa623c7afc6e301cd8a2382811884c379)`() const` <a id="structFRHAPI__PlayerInviteRequest_1aa623c7afc6e301cd8a2382811884c379"></a>

Checks whether CustomData_Optional has been set.

