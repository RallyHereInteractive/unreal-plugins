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
`public inline FORCEINLINE int32 & `[`GetTeamId`](#structFRHAPI__PlayerInviteRequest_1a347ff92d3e8b44a8dcae2c85f43eb5e9)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__PlayerInviteRequest_1a9f20865899865d74281e23c427c95e50)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__PlayerInviteRequest_1a9ad0ef658b43b2ac788394b3efcff04e)`(const int32 & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTeamId`](#structFRHAPI__PlayerInviteRequest_1af7c2bd221fce116e9ceac7bf7864d2c9)`(int32 & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetTeamIdOrNull`](#structFRHAPI__PlayerInviteRequest_1a6d2293decbf57db32b28bcd88cf96e9b)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__PlayerInviteRequest_1adfd62eda91bf7fd1255d1e553e1e3c90)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__PlayerInviteRequest_1ad991a40f0a65f6c65d789cd1806e57ed)`(const int32 & NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__PlayerInviteRequest_1aa7db54a137d11fe72c2f13c973284fa6)`(int32 && NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.
`public inline void `[`ClearTeamId`](#structFRHAPI__PlayerInviteRequest_1a4a4391b995314263b7e4a378a1997611)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TeamId`](#structFRHAPI__PlayerInviteRequest_1afb30cb18657549cd7f2353ac241f4197)`()` | Returns the default value of TeamId.
`public inline FORCEINLINE ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1a4921ed24c2e1a7395eefb37116398ae9)`()` | Gets the value of OverflowAction_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1a70d3d0b1dcf16b7d31967a91aff73b25)`() const` | Gets the value of OverflowAction_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1ac4064a02314ff4e618225014db3bebb6)`(const ERHAPI_TeamOverflowAction & DefaultValue) const` | Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1a24973f7b7f84d2d43de3e26adb180afa)`(ERHAPI_TeamOverflowAction & OutValue) const` | Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__PlayerInviteRequest_1a96b4a28183b654f85693b8881f5e8855)`()` | Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__PlayerInviteRequest_1a53362299a91c360f172c502c534e0749)`() const` | Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1a3d7d67cabd8853364c4701c14e381c4f)`(const ERHAPI_TeamOverflowAction & NewValue)` | Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.
`public inline FORCEINLINE void `[`SetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1ab0f50a8820b5a4239d88c0d9c1e4d0f2)`(ERHAPI_TeamOverflowAction && NewValue)` | Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true using move semantics.
`public inline void `[`ClearOverflowAction`](#structFRHAPI__PlayerInviteRequest_1a6939fe292845cf95020f9045b256ea8f)`()` | Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerInviteRequest_1a9ec03cff737d0eab056bbadc705430c6)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerInviteRequest_1a831b7e8c2be316f5922de16f6c86857b)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerInviteRequest_1a99341b594fe0973f75466753f5b65fed)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlayerInviteRequest_1a186a5eb96a930dfa18bad62a41a25708)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerInviteRequest_1af8ec5adf80d0cea57bb1dcfac05f290b)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerInviteRequest_1a8a6eba6508cf9d2015d23eebd2cb076d)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerInviteRequest_1aeffe9e6f07715bd0ed3a0c8c96896ed5)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerInviteRequest_1aea7d38d7fa0c8bdc452eccb22b8ef5cb)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerInviteRequest_1afcdc93fd4d4ca3cffb2c94fee4ce7375)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

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

#### `public inline FORCEINLINE int32 & `[`GetTeamId`](#structFRHAPI__PlayerInviteRequest_1a347ff92d3e8b44a8dcae2c85f43eb5e9)`()` <a id="structFRHAPI__PlayerInviteRequest_1a347ff92d3e8b44a8dcae2c85f43eb5e9"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__PlayerInviteRequest_1a9f20865899865d74281e23c427c95e50)`() const` <a id="structFRHAPI__PlayerInviteRequest_1a9f20865899865d74281e23c427c95e50"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__PlayerInviteRequest_1a9ad0ef658b43b2ac788394b3efcff04e)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerInviteRequest_1a9ad0ef658b43b2ac788394b3efcff04e"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTeamId`](#structFRHAPI__PlayerInviteRequest_1af7c2bd221fce116e9ceac7bf7864d2c9)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerInviteRequest_1af7c2bd221fce116e9ceac7bf7864d2c9"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetTeamIdOrNull`](#structFRHAPI__PlayerInviteRequest_1a6d2293decbf57db32b28bcd88cf96e9b)`()` <a id="structFRHAPI__PlayerInviteRequest_1a6d2293decbf57db32b28bcd88cf96e9b"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__PlayerInviteRequest_1adfd62eda91bf7fd1255d1e553e1e3c90)`() const` <a id="structFRHAPI__PlayerInviteRequest_1adfd62eda91bf7fd1255d1e553e1e3c90"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__PlayerInviteRequest_1ad991a40f0a65f6c65d789cd1806e57ed)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerInviteRequest_1ad991a40f0a65f6c65d789cd1806e57ed"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__PlayerInviteRequest_1aa7db54a137d11fe72c2f13c973284fa6)`(int32 && NewValue)` <a id="structFRHAPI__PlayerInviteRequest_1aa7db54a137d11fe72c2f13c973284fa6"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__PlayerInviteRequest_1a4a4391b995314263b7e4a378a1997611)`()` <a id="structFRHAPI__PlayerInviteRequest_1a4a4391b995314263b7e4a378a1997611"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TeamId`](#structFRHAPI__PlayerInviteRequest_1afb30cb18657549cd7f2353ac241f4197)`()` <a id="structFRHAPI__PlayerInviteRequest_1afb30cb18657549cd7f2353ac241f4197"></a>

Returns the default value of TeamId.

#### `public inline FORCEINLINE ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1a4921ed24c2e1a7395eefb37116398ae9)`()` <a id="structFRHAPI__PlayerInviteRequest_1a4921ed24c2e1a7395eefb37116398ae9"></a>

Gets the value of OverflowAction_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1a70d3d0b1dcf16b7d31967a91aff73b25)`() const` <a id="structFRHAPI__PlayerInviteRequest_1a70d3d0b1dcf16b7d31967a91aff73b25"></a>

Gets the value of OverflowAction_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1ac4064a02314ff4e618225014db3bebb6)`(const ERHAPI_TeamOverflowAction & DefaultValue) const` <a id="structFRHAPI__PlayerInviteRequest_1ac4064a02314ff4e618225014db3bebb6"></a>

Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1a24973f7b7f84d2d43de3e26adb180afa)`(ERHAPI_TeamOverflowAction & OutValue) const` <a id="structFRHAPI__PlayerInviteRequest_1a24973f7b7f84d2d43de3e26adb180afa"></a>

Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__PlayerInviteRequest_1a96b4a28183b654f85693b8881f5e8855)`()` <a id="structFRHAPI__PlayerInviteRequest_1a96b4a28183b654f85693b8881f5e8855"></a>

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__PlayerInviteRequest_1a53362299a91c360f172c502c534e0749)`() const` <a id="structFRHAPI__PlayerInviteRequest_1a53362299a91c360f172c502c534e0749"></a>

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1a3d7d67cabd8853364c4701c14e381c4f)`(const ERHAPI_TeamOverflowAction & NewValue)` <a id="structFRHAPI__PlayerInviteRequest_1a3d7d67cabd8853364c4701c14e381c4f"></a>

Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.

#### `public inline FORCEINLINE void `[`SetOverflowAction`](#structFRHAPI__PlayerInviteRequest_1ab0f50a8820b5a4239d88c0d9c1e4d0f2)`(ERHAPI_TeamOverflowAction && NewValue)` <a id="structFRHAPI__PlayerInviteRequest_1ab0f50a8820b5a4239d88c0d9c1e4d0f2"></a>

Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true using move semantics.

#### `public inline void `[`ClearOverflowAction`](#structFRHAPI__PlayerInviteRequest_1a6939fe292845cf95020f9045b256ea8f)`()` <a id="structFRHAPI__PlayerInviteRequest_1a6939fe292845cf95020f9045b256ea8f"></a>

Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerInviteRequest_1a9ec03cff737d0eab056bbadc705430c6)`()` <a id="structFRHAPI__PlayerInviteRequest_1a9ec03cff737d0eab056bbadc705430c6"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerInviteRequest_1a831b7e8c2be316f5922de16f6c86857b)`() const` <a id="structFRHAPI__PlayerInviteRequest_1a831b7e8c2be316f5922de16f6c86857b"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerInviteRequest_1a99341b594fe0973f75466753f5b65fed)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerInviteRequest_1a99341b594fe0973f75466753f5b65fed"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlayerInviteRequest_1a186a5eb96a930dfa18bad62a41a25708)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerInviteRequest_1a186a5eb96a930dfa18bad62a41a25708"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerInviteRequest_1af8ec5adf80d0cea57bb1dcfac05f290b)`()` <a id="structFRHAPI__PlayerInviteRequest_1af8ec5adf80d0cea57bb1dcfac05f290b"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerInviteRequest_1a8a6eba6508cf9d2015d23eebd2cb076d)`() const` <a id="structFRHAPI__PlayerInviteRequest_1a8a6eba6508cf9d2015d23eebd2cb076d"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerInviteRequest_1aeffe9e6f07715bd0ed3a0c8c96896ed5)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlayerInviteRequest_1aeffe9e6f07715bd0ed3a0c8c96896ed5"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerInviteRequest_1aea7d38d7fa0c8bdc452eccb22b8ef5cb)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlayerInviteRequest_1aea7d38d7fa0c8bdc452eccb22b8ef5cb"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerInviteRequest_1afcdc93fd4d4ca3cffb2c94fee4ce7375)`()` <a id="structFRHAPI__PlayerInviteRequest_1afcdc93fd4d4ca3cffb2c94fee4ce7375"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

