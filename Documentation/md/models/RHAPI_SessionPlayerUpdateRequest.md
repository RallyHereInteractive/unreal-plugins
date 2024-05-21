# group `RHAPI_SessionPlayerUpdateRequest` <a id="group__RHAPI__SessionPlayerUpdateRequest"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionPlayerUpdateRequest`](#structFRHAPI__SessionPlayerUpdateRequest) | A request body to update information about a player in a session.

## struct `FRHAPI_SessionPlayerUpdateRequest` <a id="structFRHAPI__SessionPlayerUpdateRequest"></a>

```
struct FRHAPI_SessionPlayerUpdateRequest
  : public FRHAPI_Model
```

A request body to update information about a player in a session.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_SessionPlayerStatus `[`Status_Optional`](#structFRHAPI__SessionPlayerUpdateRequest_1acf48279847beabc2877dcbdd6cd6267c) | Status that the player would like after the request is complete. Note that some join operations may promote the player from `member` to `leader`
`public bool `[`Status_IsSet`](#structFRHAPI__SessionPlayerUpdateRequest_1ad1f3f4cc4681b79dee1b512dc42e02eb) | true if Status_Optional has been set to a value
`public int32 `[`TeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1aa56a7eab4923715500aefa8b8fbb941b) | Which team the player should be on.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionPlayerUpdateRequest_1a5413846e2f8ff07b8a34f6483807cadc) | player-defined custom data
`public bool `[`CustomData_IsSet`](#structFRHAPI__SessionPlayerUpdateRequest_1a29f9f54c835b137b0f22c711cf8229bf) | true if CustomData_Optional has been set to a value
`public ERHAPI_TeamOverflowAction `[`OverflowAction_Optional`](#structFRHAPI__SessionPlayerUpdateRequest_1a13e3e939ca8bf749c90b48164ea7b903) | How we should handle too many players being invited to the chosen team.
`public bool `[`OverflowAction_IsSet`](#structFRHAPI__SessionPlayerUpdateRequest_1a288dac5df002a17a3bddf83479515062) | true if OverflowAction_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SessionPlayerUpdateRequest_1a062c4404f35a61d1b96ab4d8c9d2608b)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionPlayerUpdateRequest_1afe7828080f27d4a6c72ac936f20ae699)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1aad26eb338b12e2665a1b14ef80a7c3fc)`()` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1a0634b3e083214595f06ac6ba03339f56)`() const` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1ac3c39822fc28947bab460264144803b6)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` | Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1ae985bb8e870e3f09268128729abd5507)`(ERHAPI_SessionPlayerStatus & OutValue) const` | Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_SessionPlayerStatus * `[`GetStatusOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a0c94c9335edd53644ff904f76602f05c)`()` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_SessionPlayerStatus * `[`GetStatusOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a710af1527fabcd4c31c3c136d2dfc4bc)`() const` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1af541180816bd2c7271e0daab51d8d5b3)`(ERHAPI_SessionPlayerStatus NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true.
`public inline void `[`ClearStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1a2905381b74dd71938e896ad9059c01ea)`()` | Clears the value of Status_Optional and sets Status_IsSet to false.
`public inline int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1af5f5ab7680382d4eb1c597f462b2ef44)`()` | Gets the value of TeamId.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1a81db9ded16d246cd9fb997809ec54ff6)`() const` | Gets the value of TeamId.
`public inline void `[`SetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1a33b9433646403e228f4afb04e4eff6ff)`(int32 NewValue)` | Sets the value of TeamId.
`public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__SessionPlayerUpdateRequest_1a00cd4d137a38bad4d7cedb426c9618ea)`() const` | Returns true if TeamId matches the default value.
`public inline void `[`SetTeamIdToDefault`](#structFRHAPI__SessionPlayerUpdateRequest_1a673d1ada9ca1f883dcee26c27c355d30)`()` | Sets the value of TeamId to its default
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a2914913c10dab532c2d5f9b2f6795e4c)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a2cde4401d015b69b2690940cea59d2a1)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1ab46455cf7cf7bac8cb0fb7dfba519588)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a56c8023c8f38a15829a7a580fb7eea29)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a8a2b6c950cbbb0c652c4696dcacf65e3)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a0ddbe103d6085af6264d144d2b378216)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a17ffb5766ae78cf4899c253af52c44cc)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a90415b775835034b0bb2f6e8e7f98426)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a60ae170f15ae710197a04360abdc3ece)`()` | Gets the value of OverflowAction_Optional, regardless of it having been set.
`public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1add074c72686cfede59af894b6c6ac96e)`() const` | Gets the value of OverflowAction_Optional, regardless of it having been set.
`public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a1e9dbdf2ad5d608fa1b382b17ef10a71)`(const ERHAPI_TeamOverflowAction & DefaultValue) const` | Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1afb021030411f4c9b1d3d3bfb65a44892)`(ERHAPI_TeamOverflowAction & OutValue) const` | Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a621e63c898c45feb3393e90d30d5e7c0)`()` | Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a51193f8bd28c91ee1abbe002f7a63841)`() const` | Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a2dd0c3ba91633a87d6dd757308b78de1)`(ERHAPI_TeamOverflowAction NewValue)` | Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.
`public inline void `[`ClearOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a99c41fad98394fd5ee4d5a01a480de16)`()` | Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.

### Members

#### `public ERHAPI_SessionPlayerStatus `[`Status_Optional`](#structFRHAPI__SessionPlayerUpdateRequest_1acf48279847beabc2877dcbdd6cd6267c) <a id="structFRHAPI__SessionPlayerUpdateRequest_1acf48279847beabc2877dcbdd6cd6267c"></a>

Status that the player would like after the request is complete. Note that some join operations may promote the player from `member` to `leader`

#### `public bool `[`Status_IsSet`](#structFRHAPI__SessionPlayerUpdateRequest_1ad1f3f4cc4681b79dee1b512dc42e02eb) <a id="structFRHAPI__SessionPlayerUpdateRequest_1ad1f3f4cc4681b79dee1b512dc42e02eb"></a>

true if Status_Optional has been set to a value

#### `public int32 `[`TeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1aa56a7eab4923715500aefa8b8fbb941b) <a id="structFRHAPI__SessionPlayerUpdateRequest_1aa56a7eab4923715500aefa8b8fbb941b"></a>

Which team the player should be on.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionPlayerUpdateRequest_1a5413846e2f8ff07b8a34f6483807cadc) <a id="structFRHAPI__SessionPlayerUpdateRequest_1a5413846e2f8ff07b8a34f6483807cadc"></a>

player-defined custom data

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__SessionPlayerUpdateRequest_1a29f9f54c835b137b0f22c711cf8229bf) <a id="structFRHAPI__SessionPlayerUpdateRequest_1a29f9f54c835b137b0f22c711cf8229bf"></a>

true if CustomData_Optional has been set to a value

#### `public ERHAPI_TeamOverflowAction `[`OverflowAction_Optional`](#structFRHAPI__SessionPlayerUpdateRequest_1a13e3e939ca8bf749c90b48164ea7b903) <a id="structFRHAPI__SessionPlayerUpdateRequest_1a13e3e939ca8bf749c90b48164ea7b903"></a>

How we should handle too many players being invited to the chosen team.

#### `public bool `[`OverflowAction_IsSet`](#structFRHAPI__SessionPlayerUpdateRequest_1a288dac5df002a17a3bddf83479515062) <a id="structFRHAPI__SessionPlayerUpdateRequest_1a288dac5df002a17a3bddf83479515062"></a>

true if OverflowAction_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionPlayerUpdateRequest_1a062c4404f35a61d1b96ab4d8c9d2608b)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a062c4404f35a61d1b96ab4d8c9d2608b"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionPlayerUpdateRequest_1afe7828080f27d4a6c72ac936f20ae699)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1afe7828080f27d4a6c72ac936f20ae699"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1aad26eb338b12e2665a1b14ef80a7c3fc)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1aad26eb338b12e2665a1b14ef80a7c3fc"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1a0634b3e083214595f06ac6ba03339f56)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a0634b3e083214595f06ac6ba03339f56"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1ac3c39822fc28947bab460264144803b6)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ac3c39822fc28947bab460264144803b6"></a>

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1ae985bb8e870e3f09268128729abd5507)`(ERHAPI_SessionPlayerStatus & OutValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ae985bb8e870e3f09268128729abd5507"></a>

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_SessionPlayerStatus * `[`GetStatusOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a0c94c9335edd53644ff904f76602f05c)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a0c94c9335edd53644ff904f76602f05c"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_SessionPlayerStatus * `[`GetStatusOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a710af1527fabcd4c31c3c136d2dfc4bc)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a710af1527fabcd4c31c3c136d2dfc4bc"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1af541180816bd2c7271e0daab51d8d5b3)`(ERHAPI_SessionPlayerStatus NewValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1af541180816bd2c7271e0daab51d8d5b3"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true.

#### `public inline void `[`ClearStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1a2905381b74dd71938e896ad9059c01ea)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a2905381b74dd71938e896ad9059c01ea"></a>

Clears the value of Status_Optional and sets Status_IsSet to false.

#### `public inline int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1af5f5ab7680382d4eb1c597f462b2ef44)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1af5f5ab7680382d4eb1c597f462b2ef44"></a>

Gets the value of TeamId.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1a81db9ded16d246cd9fb997809ec54ff6)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a81db9ded16d246cd9fb997809ec54ff6"></a>

Gets the value of TeamId.

#### `public inline void `[`SetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1a33b9433646403e228f4afb04e4eff6ff)`(int32 NewValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a33b9433646403e228f4afb04e4eff6ff"></a>

Sets the value of TeamId.

#### `public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__SessionPlayerUpdateRequest_1a00cd4d137a38bad4d7cedb426c9618ea)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a00cd4d137a38bad4d7cedb426c9618ea"></a>

Returns true if TeamId matches the default value.

#### `public inline void `[`SetTeamIdToDefault`](#structFRHAPI__SessionPlayerUpdateRequest_1a673d1ada9ca1f883dcee26c27c355d30)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a673d1ada9ca1f883dcee26c27c355d30"></a>

Sets the value of TeamId to its default

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a2914913c10dab532c2d5f9b2f6795e4c)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a2914913c10dab532c2d5f9b2f6795e4c"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a2cde4401d015b69b2690940cea59d2a1)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a2cde4401d015b69b2690940cea59d2a1"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1ab46455cf7cf7bac8cb0fb7dfba519588)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ab46455cf7cf7bac8cb0fb7dfba519588"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a56c8023c8f38a15829a7a580fb7eea29)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a56c8023c8f38a15829a7a580fb7eea29"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a8a2b6c950cbbb0c652c4696dcacf65e3)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a8a2b6c950cbbb0c652c4696dcacf65e3"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a0ddbe103d6085af6264d144d2b378216)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a0ddbe103d6085af6264d144d2b378216"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a17ffb5766ae78cf4899c253af52c44cc)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a17ffb5766ae78cf4899c253af52c44cc"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a90415b775835034b0bb2f6e8e7f98426)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a90415b775835034b0bb2f6e8e7f98426"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a60ae170f15ae710197a04360abdc3ece)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a60ae170f15ae710197a04360abdc3ece"></a>

Gets the value of OverflowAction_Optional, regardless of it having been set.

#### `public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1add074c72686cfede59af894b6c6ac96e)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1add074c72686cfede59af894b6c6ac96e"></a>

Gets the value of OverflowAction_Optional, regardless of it having been set.

#### `public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a1e9dbdf2ad5d608fa1b382b17ef10a71)`(const ERHAPI_TeamOverflowAction & DefaultValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a1e9dbdf2ad5d608fa1b382b17ef10a71"></a>

Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1afb021030411f4c9b1d3d3bfb65a44892)`(ERHAPI_TeamOverflowAction & OutValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1afb021030411f4c9b1d3d3bfb65a44892"></a>

Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a621e63c898c45feb3393e90d30d5e7c0)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a621e63c898c45feb3393e90d30d5e7c0"></a>

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a51193f8bd28c91ee1abbe002f7a63841)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a51193f8bd28c91ee1abbe002f7a63841"></a>

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a2dd0c3ba91633a87d6dd757308b78de1)`(ERHAPI_TeamOverflowAction NewValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a2dd0c3ba91633a87d6dd757308b78de1"></a>

Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.

#### `public inline void `[`ClearOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a99c41fad98394fd5ee4d5a01a480de16)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a99c41fad98394fd5ee4d5a01a480de16"></a>

Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.

