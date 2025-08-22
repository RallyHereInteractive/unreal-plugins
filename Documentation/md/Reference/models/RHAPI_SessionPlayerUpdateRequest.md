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
`public inline FORCEINLINE ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1ac8d7f670419717399649a33d4ad9dbb5)`()` | Gets the value of Status_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1aa0e7c9c4609601ca20b1d089903a57e4)`() const` | Gets the value of Status_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1af75fe9fc175e00b7872ed2242f571815)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` | Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1ab2d3b063053e217072a41cf63347e05c)`(ERHAPI_SessionPlayerStatus & OutValue) const` | Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_SessionPlayerStatus * `[`GetStatusOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1af44682db67a6dc6112a86912a4d081c9)`()` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_SessionPlayerStatus * `[`GetStatusOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a6af9db182d762c44facabc3e2cb3abbd)`() const` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1ad560e7741f6f324cec1340177a72384a)`(const ERHAPI_SessionPlayerStatus & NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1ae38d0fba73f77d4c97b94c08652820b0)`(ERHAPI_SessionPlayerStatus && NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.
`public inline void `[`ClearStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1a2905381b74dd71938e896ad9059c01ea)`()` | Clears the value of Status_Optional and sets Status_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1adfb9f204f1894c335856637cd0ca709c)`()` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1af9ea2b0385c21c8dada86525d0892f93)`() const` | Gets the value of TeamId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1ad999489800650fffe65eb67fc7eda6d9)`(const int32 & DefaultValue) const` | Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1a5bf28cef4a239387f9d10899b195261c)`(int32 & OutValue) const` | Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a7026244a108ee722b363f28a358fd043)`()` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a9994121336076eb0b6edaa140fad1918)`() const` | Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1a3c9a932cc7c14042d5e4735467c9be0e)`(const int32 & NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1a8f51c65c5081a9dfeaf9e4918185084c)`(int32 && NewValue)` | Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.
`public inline void `[`ClearTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1a815eee4ffa231b16035bed481f283922)`()` | Clears the value of TeamId_Optional and sets TeamId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1aacb353ec1fa46535fbe3040fbc815387)`()` | Returns the default value of TeamId.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a217eea524cb65b498ab8c1ffdac130b9)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a2e75025bbe05b8b84a0fd2a836a33247)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a7d4458e4a3bb6f03d9e5d03f8c542713)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1ae3e2e05b2883067d30fac1a68b8a9ccf)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1ae7685450f57d7c319308babdf74be62a)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1ac2b51f53c6c175908d366f4711ac02eb)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a35a3f2bec5adf3df151beaba1276a0b1)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1aed02f97649748787497f2a0b78c2c676)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a90415b775835034b0bb2f6e8e7f98426)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a847f392d8048fb6d1fb93b6f2e518498)`()` | Gets the value of OverflowAction_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a8d6b9d85992e6659f69869b218fd7d7e)`() const` | Gets the value of OverflowAction_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1ad6824cef985f1db4f829d08ab22aeb55)`(const ERHAPI_TeamOverflowAction & DefaultValue) const` | Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a068fb5e8315747af8dd234a9512359e1)`(ERHAPI_TeamOverflowAction & OutValue) const` | Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1aee4b881a46263ff6ed5e8b561d6d4258)`()` | Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a303c5f9205807b818f474414112d43a6)`() const` | Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a692b37fa5d35286757c70e212dfd941c)`(const ERHAPI_TeamOverflowAction & NewValue)` | Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.
`public inline FORCEINLINE void `[`SetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1af644eb1ea9aa1f4027674184d61b5502)`(ERHAPI_TeamOverflowAction && NewValue)` | Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true using move semantics.
`public inline void `[`ClearOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a99c41fad98394fd5ee4d5a01a480de16)`()` | Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.

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

#### `public inline FORCEINLINE ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1ac8d7f670419717399649a33d4ad9dbb5)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ac8d7f670419717399649a33d4ad9dbb5"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1aa0e7c9c4609601ca20b1d089903a57e4)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1aa0e7c9c4609601ca20b1d089903a57e4"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_SessionPlayerStatus & `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1af75fe9fc175e00b7872ed2242f571815)`(const ERHAPI_SessionPlayerStatus & DefaultValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1af75fe9fc175e00b7872ed2242f571815"></a>

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1ab2d3b063053e217072a41cf63347e05c)`(ERHAPI_SessionPlayerStatus & OutValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ab2d3b063053e217072a41cf63347e05c"></a>

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_SessionPlayerStatus * `[`GetStatusOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1af44682db67a6dc6112a86912a4d081c9)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1af44682db67a6dc6112a86912a4d081c9"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_SessionPlayerStatus * `[`GetStatusOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a6af9db182d762c44facabc3e2cb3abbd)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a6af9db182d762c44facabc3e2cb3abbd"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1ad560e7741f6f324cec1340177a72384a)`(const ERHAPI_SessionPlayerStatus & NewValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ad560e7741f6f324cec1340177a72384a"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1ae38d0fba73f77d4c97b94c08652820b0)`(ERHAPI_SessionPlayerStatus && NewValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ae38d0fba73f77d4c97b94c08652820b0"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.

#### `public inline void `[`ClearStatus`](#structFRHAPI__SessionPlayerUpdateRequest_1a2905381b74dd71938e896ad9059c01ea)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a2905381b74dd71938e896ad9059c01ea"></a>

Clears the value of Status_Optional and sets Status_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1adfb9f204f1894c335856637cd0ca709c)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1adfb9f204f1894c335856637cd0ca709c"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1af9ea2b0385c21c8dada86525d0892f93)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1af9ea2b0385c21c8dada86525d0892f93"></a>

Gets the value of TeamId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1ad999489800650fffe65eb67fc7eda6d9)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ad999489800650fffe65eb67fc7eda6d9"></a>

Gets the value of TeamId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1a5bf28cef4a239387f9d10899b195261c)`(int32 & OutValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a5bf28cef4a239387f9d10899b195261c"></a>

Fills OutValue with the value of TeamId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a7026244a108ee722b363f28a358fd043)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a7026244a108ee722b363f28a358fd043"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetTeamIdOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a9994121336076eb0b6edaa140fad1918)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a9994121336076eb0b6edaa140fad1918"></a>

Returns a pointer to TeamId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1a3c9a932cc7c14042d5e4735467c9be0e)`(const int32 & NewValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a3c9a932cc7c14042d5e4735467c9be0e"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1a8f51c65c5081a9dfeaf9e4918185084c)`(int32 && NewValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a8f51c65c5081a9dfeaf9e4918185084c"></a>

Sets the value of TeamId_Optional and also sets TeamId_IsSet to true using move semantics.

#### `public inline void `[`ClearTeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1a815eee4ffa231b16035bed481f283922)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a815eee4ffa231b16035bed481f283922"></a>

Clears the value of TeamId_Optional and sets TeamId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TeamId`](#structFRHAPI__SessionPlayerUpdateRequest_1aacb353ec1fa46535fbe3040fbc815387)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1aacb353ec1fa46535fbe3040fbc815387"></a>

Returns the default value of TeamId.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a217eea524cb65b498ab8c1ffdac130b9)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a217eea524cb65b498ab8c1ffdac130b9"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a2e75025bbe05b8b84a0fd2a836a33247)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a2e75025bbe05b8b84a0fd2a836a33247"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a7d4458e4a3bb6f03d9e5d03f8c542713)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a7d4458e4a3bb6f03d9e5d03f8c542713"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1ae3e2e05b2883067d30fac1a68b8a9ccf)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ae3e2e05b2883067d30fac1a68b8a9ccf"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1ae7685450f57d7c319308babdf74be62a)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ae7685450f57d7c319308babdf74be62a"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1ac2b51f53c6c175908d366f4711ac02eb)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ac2b51f53c6c175908d366f4711ac02eb"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a35a3f2bec5adf3df151beaba1276a0b1)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a35a3f2bec5adf3df151beaba1276a0b1"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1aed02f97649748787497f2a0b78c2c676)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1aed02f97649748787497f2a0b78c2c676"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionPlayerUpdateRequest_1a90415b775835034b0bb2f6e8e7f98426)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a90415b775835034b0bb2f6e8e7f98426"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a847f392d8048fb6d1fb93b6f2e518498)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a847f392d8048fb6d1fb93b6f2e518498"></a>

Gets the value of OverflowAction_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a8d6b9d85992e6659f69869b218fd7d7e)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a8d6b9d85992e6659f69869b218fd7d7e"></a>

Gets the value of OverflowAction_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_TeamOverflowAction & `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1ad6824cef985f1db4f829d08ab22aeb55)`(const ERHAPI_TeamOverflowAction & DefaultValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1ad6824cef985f1db4f829d08ab22aeb55"></a>

Gets the value of OverflowAction_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a068fb5e8315747af8dd234a9512359e1)`(ERHAPI_TeamOverflowAction & OutValue) const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a068fb5e8315747af8dd234a9512359e1"></a>

Fills OutValue with the value of OverflowAction_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1aee4b881a46263ff6ed5e8b561d6d4258)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1aee4b881a46263ff6ed5e8b561d6d4258"></a>

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_TeamOverflowAction * `[`GetOverflowActionOrNull`](#structFRHAPI__SessionPlayerUpdateRequest_1a303c5f9205807b818f474414112d43a6)`() const` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a303c5f9205807b818f474414112d43a6"></a>

Returns a pointer to OverflowAction_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a692b37fa5d35286757c70e212dfd941c)`(const ERHAPI_TeamOverflowAction & NewValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a692b37fa5d35286757c70e212dfd941c"></a>

Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true.

#### `public inline FORCEINLINE void `[`SetOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1af644eb1ea9aa1f4027674184d61b5502)`(ERHAPI_TeamOverflowAction && NewValue)` <a id="structFRHAPI__SessionPlayerUpdateRequest_1af644eb1ea9aa1f4027674184d61b5502"></a>

Sets the value of OverflowAction_Optional and also sets OverflowAction_IsSet to true using move semantics.

#### `public inline void `[`ClearOverflowAction`](#structFRHAPI__SessionPlayerUpdateRequest_1a99c41fad98394fd5ee4d5a01a480de16)`()` <a id="structFRHAPI__SessionPlayerUpdateRequest_1a99c41fad98394fd5ee4d5a01a480de16"></a>

Clears the value of OverflowAction_Optional and sets OverflowAction_IsSet to false.

