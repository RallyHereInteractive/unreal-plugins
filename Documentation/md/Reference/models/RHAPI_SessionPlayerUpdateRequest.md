---
title: RHAPI_SessionPlayerUpdateRequest
---

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
`public int32 `[`TeamId_Optional`](#structFRHAPI__SessionPlayerUpdateRequest_1a4cc23b7c854bf2d8d89d069fc4d84084) | Which team the player should be on.
`public bool `[`TeamId_IsSet`](#structFRHAPI__SessionPlayerUpdateRequest_1ac60fd2908cb81150a0698947627b98be) | true if TeamId_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionPlayerUpdateRequest_1a5413846e2f8ff07b8a34f6483807cadc) | player-defined custom data
`public bool `[`CustomData_IsSet`](#structFRHAPI__SessionPlayerUpdateRequest_1a29f9f54c835b137b0f22c711cf8229bf) | true if CustomData_Optional has been set to a value
`public ERHAPI_TeamOverflowAction `[`OverflowAction_Optional`](#structFRHAPI__SessionPlayerUpdateRequest_1a13e3e939ca8bf749c90b48164ea7b903) | How we should handle too many players being invited to the chosen team.
`public bool `[`OverflowAction_IsSet`](#structFRHAPI__SessionPlayerUpdateRequest_1a288dac5df002a17a3bddf83479515062) | true if OverflowAction_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SessionPlayerUpdateRequest_1ab34afd303325f232e120a827ec45b393)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionPlayerUpdateRequest_1a7ff1064f01313a33034fc2e9de440975)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1aa8cffa407a1f24e7c2587c988312239d)`()` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1a89921757c31534e136d1e08416ac2f3e)`() const` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1adae6d546628f882bd7b2d5bc57a8086f)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` | Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1ae985bb8e870e3f09268128729abd5507)`(ERHAPI_SessionPlayerStatus & OutValue) const` | Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_SessionPlayerStatus * `[`GetStatusOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a83c0ce2544b40041d0ebbfcc05451e7a)`()` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_SessionPlayerStatus * `[`GetStatusOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1ae98fb62a267bc9cf823109f8cc6d15d9)`() const` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1a6fd100a81bc4cd7c3f83abe5364edefe)`(const ERHAPI_SessionPlayerStatus & NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true.
`public inline void `[`SetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1a816b87e015243da632ef61eec6ffc31a)`(ERHAPI_SessionPlayerStatus && NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.
`public inline void `[`ClearStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1a2905381b74dd71938e896ad9059c01ea)`()` | Clears the value of Status_Optional and sets Status_IsSet to false.
`public inline bool `[`IsStatusSet`](#structFRHAPI__SessionPlayerUpdateRequest_1a5375deb528cb6b995d5cabb3510a85a9)`() const` | Checks whether Status_Optional has been set.
`public inline int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1a6833951c1c984fa3f987b42028cbcb1e)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1a74d36814025ef42da8527c1eafec61c6)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1af79b408f84995de804cfb2bb297a5001)`(const int32 & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1a21322d4662a54ce0a4b2bfb153e22ca5)`(int32 & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a412bb16879dd0259f25789924ce8fe7a)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a2c942ca4b89f8cff67058dae38631fc8)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1adc7b42f6fe4b84ecf34f130f15bd2b5e)`(const int32 & NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline void `[`SetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1af06239eaf8d674ba7a6e6a5c388740a8)`(int32 && NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.
`public inline void `[`ClearTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1a815eee4ffa231b16035bed481f283922)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline bool `[`IsTeamIdSet`](#structFRHAPI__SessionPlayerUpdateRequest_1a536ecca62663bfdcb8912572423bd30e)`() const` | Checks whether TeamId_Optional has been set.
`public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__SessionPlayerUpdateRequest_1a00cd4d137a38bad4d7cedb426c9618ea)`() const` | Returns true if TeamId_Optional is set and matches the default value.
`public inline void `[`SetTeamIdToDefault`](#structFRHAPI__SessionPlayerUpdateRequest_1a673d1ada9ca1f883dcee26c27c355d30)`()` | Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a586317f14c4ed1320d3ffe9baf79581a)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a3e8b07562e0e47a1110b1960e1cf7ce6)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1ac33af9f4417bfdd39bff87d68d1806c8)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a56c8023c8f38a15829a7a580fb7eea29)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1ae2081968d6269e2d015dd14faebf2e71)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1ad1ede28599e7b607abc6ff674c59cd2b)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a7a8633b9557cf02cdc6fd70d9ccb09b1)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a8bbcecb05fcb7c07bc51080f5bbd6624)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a90415b775835034b0bb2f6e8e7f98426)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__SessionPlayerUpdateRequest_1aef530bc75ed743627af01d120a983a4a)`() const` | Checks whether CustomData_Optional has been set.
`public inline ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a92951b01b4c8813cf413b92a2fbac8a5)`()` | Gets the value of OverflowAction_Optional, regardless of it having been set.
`public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a0bed2c7ea17319594d111939f25ab540)`() const` | Gets the value of OverflowAction_Optional, regardless of it having been set.
`public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1afaf5e0587825dee2982541c348357f1b)`(const ERHAPI_TeamOverflowAction & DefaultValue) const` | Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1afb021030411f4c9b1d3d3bfb65a44892)`(ERHAPI_TeamOverflowAction & OutValue) const` | Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a185c74a20c1481d82d544e5353fd7df8)`()` | Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a3247a8d36f473b92bb82f102f655b845)`() const` | Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1ab3970b7e11accab5816b652190cf712f)`(const ERHAPI_TeamOverflowAction & NewValue)` | Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.
`public inline void `[`SetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1ad39b069c4f8598ffd1bcd06c344e2cee)`(ERHAPI_TeamOverflowAction && NewValue)` | Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true using move semantics.
`public inline void `[`ClearOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a99c41fad98394fd5ee4d5a01a480de16)`()` | Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.
`public inline bool `[`IsOverflowActionSet`](#structFRHAPI__SessionPlayerUpdateRequest_1ad7e4bf5b041123c8fe200fb85b7670b4)`() const` | Checks whether OverflowAction_Optional has been set.

### Members

#### `public ERHAPI_SessionPlayerStatus `[`Status_Optional`](#structFRHAPI__SessionPlayerUpdateRequest_1acf48279847beabc2877dcbdd6cd6267c) <a id="structFRHAPI__SessionPlayerUpdateRequest_1acf48279847beabc2877dcbdd6cd6267c"></a>

Status that the player would like after the request is complete. Note that some join operations may promote the player from `member` to `leader`

#### `public bool `[`Status_IsSet`](#structFRHAPI__SessionPlayerUpdateRequest_1ad1f3f4cc4681b79dee1b512dc42e02eb) <a id="structFRHAPI__SessionPlayerUpdateRequest_1ad1f3f4cc4681b79dee1b512dc42e02eb"></a>

true if Status_Optional has been set to a value

#### `public int32 `[`TeamId_Optional`](#structFRHAPI__SessionPlayerUpdateRequest_1a4cc23b7c854bf2d8d89d069fc4d84084) <a id="structFRHAPI__SessionPlayerUpdateRequest_1a4cc23b7c854bf2d8d89d069fc4d84084"></a>

Which team the player should be on.

#### `public bool `[`TeamId_IsSet`](#structFRHAPI__SessionPlayerUpdateRequest_1ac60fd2908cb81150a0698947627b98be) <a id="structFRHAPI__SessionPlayerUpdateRequest_1ac60fd2908cb81150a0698947627b98be"></a>

true if TeamId_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionPlayerUpdateRequest_1a5413846e2f8ff07b8a34f6483807cadc) <a id="structFRHAPI__SessionPlayerUpdateRequest_1a5413846e2f8ff07b8a34f6483807cadc"></a>

player-defined custom data

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__SessionPlayerUpdateRequest_1a29f9f54c835b137b0f22c711cf8229bf) <a id="structFRHAPI__SessionPlayerUpdateRequest_1a29f9f54c835b137b0f22c711cf8229bf"></a>

true if CustomData_Optional has been set to a value

#### `public ERHAPI_TeamOverflowAction `[`OverflowAction_Optional`](#structFRHAPI__SessionPlayerUpdateRequest_1a13e3e939ca8bf749c90b48164ea7b903) <a id="structFRHAPI__SessionPlayerUpdateRequest_1a13e3e939ca8bf749c90b48164ea7b903"></a>

How we should handle too many players being invited to the chosen team.

#### `public bool `[`OverflowAction_IsSet`](#structFRHAPI__SessionPlayerUpdateRequest_1a288dac5df002a17a3bddf83479515062) <a id="structFRHAPI__SessionPlayerUpdateRequest_1a288dac5df002a17a3bddf83479515062"></a>

true if OverflowAction_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionPlayerUpdateRequest_1ab34afd303325f232e120a827ec45b393)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ab34afd303325f232e120a827ec45b393"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionPlayerUpdateRequest_1a7ff1064f01313a33034fc2e9de440975)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a7ff1064f01313a33034fc2e9de440975"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1aa8cffa407a1f24e7c2587c988312239d)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1aa8cffa407a1f24e7c2587c988312239d"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1a89921757c31534e136d1e08416ac2f3e)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a89921757c31534e136d1e08416ac2f3e"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1adae6d546628f882bd7b2d5bc57a8086f)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1adae6d546628f882bd7b2d5bc57a8086f"></a>

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1ae985bb8e870e3f09268128729abd5507)`(ERHAPI_SessionPlayerStatus & OutValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ae985bb8e870e3f09268128729abd5507"></a>

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_SessionPlayerStatus * `[`GetStatusOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a83c0ce2544b40041d0ebbfcc05451e7a)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a83c0ce2544b40041d0ebbfcc05451e7a"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_SessionPlayerStatus * `[`GetStatusOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1ae98fb62a267bc9cf823109f8cc6d15d9)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ae98fb62a267bc9cf823109f8cc6d15d9"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1a6fd100a81bc4cd7c3f83abe5364edefe)`(const ERHAPI_SessionPlayerStatus & NewValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a6fd100a81bc4cd7c3f83abe5364edefe"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true.

#### `public inline void `[`SetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1a816b87e015243da632ef61eec6ffc31a)`(ERHAPI_SessionPlayerStatus && NewValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a816b87e015243da632ef61eec6ffc31a"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.

#### `public inline void `[`ClearStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1a2905381b74dd71938e896ad9059c01ea)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a2905381b74dd71938e896ad9059c01ea"></a>

Clears the value of Status_Optional and sets Status_IsSet to false.

#### `public inline bool `[`IsStatusSet`](#structFRHAPI__SessionPlayerUpdateRequest_1a5375deb528cb6b995d5cabb3510a85a9)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a5375deb528cb6b995d5cabb3510a85a9"></a>

Checks whether Status_Optional has been set.

#### `public inline int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1a6833951c1c984fa3f987b42028cbcb1e)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a6833951c1c984fa3f987b42028cbcb1e"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1a74d36814025ef42da8527c1eafec61c6)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a74d36814025ef42da8527c1eafec61c6"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1af79b408f84995de804cfb2bb297a5001)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1af79b408f84995de804cfb2bb297a5001"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1a21322d4662a54ce0a4b2bfb153e22ca5)`(int32 & OutValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a21322d4662a54ce0a4b2bfb153e22ca5"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a412bb16879dd0259f25789924ce8fe7a)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a412bb16879dd0259f25789924ce8fe7a"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a2c942ca4b89f8cff67058dae38631fc8)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a2c942ca4b89f8cff67058dae38631fc8"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1adc7b42f6fe4b84ecf34f130f15bd2b5e)`(const int32 & NewValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1adc7b42f6fe4b84ecf34f130f15bd2b5e"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline void `[`SetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1af06239eaf8d674ba7a6e6a5c388740a8)`(int32 && NewValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1af06239eaf8d674ba7a6e6a5c388740a8"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1a815eee4ffa231b16035bed481f283922)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a815eee4ffa231b16035bed481f283922"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

#### `public inline bool `[`IsTeamIdSet`](#structFRHAPI__SessionPlayerUpdateRequest_1a536ecca62663bfdcb8912572423bd30e)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a536ecca62663bfdcb8912572423bd30e"></a>

Checks whether TeamId_Optional has been set.

#### `public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__SessionPlayerUpdateRequest_1a00cd4d137a38bad4d7cedb426c9618ea)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a00cd4d137a38bad4d7cedb426c9618ea"></a>

Returns true if TeamId_Optional is set and matches the default value.

#### `public inline void `[`SetTeamIdToDefault`](#structFRHAPI__SessionPlayerUpdateRequest_1a673d1ada9ca1f883dcee26c27c355d30)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a673d1ada9ca1f883dcee26c27c355d30"></a>

Sets the value of TeamId_Optional to its default and also sets TeamId_IsSet to true.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a586317f14c4ed1320d3ffe9baf79581a)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a586317f14c4ed1320d3ffe9baf79581a"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a3e8b07562e0e47a1110b1960e1cf7ce6)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a3e8b07562e0e47a1110b1960e1cf7ce6"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1ac33af9f4417bfdd39bff87d68d1806c8)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ac33af9f4417bfdd39bff87d68d1806c8"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a56c8023c8f38a15829a7a580fb7eea29)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a56c8023c8f38a15829a7a580fb7eea29"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1ae2081968d6269e2d015dd14faebf2e71)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ae2081968d6269e2d015dd14faebf2e71"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1ad1ede28599e7b607abc6ff674c59cd2b)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ad1ede28599e7b607abc6ff674c59cd2b"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a7a8633b9557cf02cdc6fd70d9ccb09b1)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a7a8633b9557cf02cdc6fd70d9ccb09b1"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a8bbcecb05fcb7c07bc51080f5bbd6624)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a8bbcecb05fcb7c07bc51080f5bbd6624"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a90415b775835034b0bb2f6e8e7f98426)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a90415b775835034b0bb2f6e8e7f98426"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__SessionPlayerUpdateRequest_1aef530bc75ed743627af01d120a983a4a)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1aef530bc75ed743627af01d120a983a4a"></a>

Checks whether CustomData_Optional has been set.

#### `public inline ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a92951b01b4c8813cf413b92a2fbac8a5)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a92951b01b4c8813cf413b92a2fbac8a5"></a>

Gets the value of OverflowAction_Optional, regardless of it having been set.

#### `public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a0bed2c7ea17319594d111939f25ab540)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a0bed2c7ea17319594d111939f25ab540"></a>

Gets the value of OverflowAction_Optional, regardless of it having been set.

#### `public inline const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1afaf5e0587825dee2982541c348357f1b)`(const ERHAPI_TeamOverflowAction & DefaultValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1afaf5e0587825dee2982541c348357f1b"></a>

Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1afb021030411f4c9b1d3d3bfb65a44892)`(ERHAPI_TeamOverflowAction & OutValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1afb021030411f4c9b1d3d3bfb65a44892"></a>

Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a185c74a20c1481d82d544e5353fd7df8)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a185c74a20c1481d82d544e5353fd7df8"></a>

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a3247a8d36f473b92bb82f102f655b845)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a3247a8d36f473b92bb82f102f655b845"></a>

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1ab3970b7e11accab5816b652190cf712f)`(const ERHAPI_TeamOverflowAction & NewValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ab3970b7e11accab5816b652190cf712f"></a>

Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.

#### `public inline void `[`SetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1ad39b069c4f8598ffd1bcd06c344e2cee)`(ERHAPI_TeamOverflowAction && NewValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ad39b069c4f8598ffd1bcd06c344e2cee"></a>

Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true using move semantics.

#### `public inline void `[`ClearOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a99c41fad98394fd5ee4d5a01a480de16)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a99c41fad98394fd5ee4d5a01a480de16"></a>

Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.

#### `public inline bool `[`IsOverflowActionSet`](#structFRHAPI__SessionPlayerUpdateRequest_1ad7e4bf5b041123c8fe200fb85b7670b4)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ad7e4bf5b041123c8fe200fb85b7670b4"></a>

Checks whether OverflowAction_Optional has been set.

