# RHAPI_MatchmakingInfo <a id="group__RHAPI__MatchmakingInfo"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchmakingInfo`](#structFRHAPI__MatchmakingInfo) | 

## struct `FRHAPI_MatchmakingInfo` <a id="structFRHAPI__MatchmakingInfo"></a>

```
struct FRHAPI_MatchmakingInfo
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`TicketId`](#structFRHAPI__MatchmakingInfo_1a18cee065a4d780d93d1cd2a9bfde1886) | Unique ID for this attempt at matchmaking.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchmakingInfo_1a800627839cbce5194f89db4579d5d14c) | session-defined custom data
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchmakingInfo_1a0aa90688b46adb96245d4b9960649e7a) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchmakingInfo_1ac42b8b638994aa4afa39c062c7ca8ca0)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchmakingInfo_1a5caf4c240571f435a14cef04fdfb37ae)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetTicketId`](#structFRHAPI__MatchmakingInfo_1a9cf459b92d8b3628d076579e339b9b84)`()` | Gets the value of TicketId.
`public inline const FString & `[`GetTicketId`](#structFRHAPI__MatchmakingInfo_1a11c0e0ef0b753761420d761d85bc7f27)`() const` | Gets the value of TicketId.
`public inline void `[`SetTicketId`](#structFRHAPI__MatchmakingInfo_1ac79e24ca3917259b076f28af6af3d187)`(FString NewValue)` | Sets the value of TicketId.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a8e9a6e7143b93b2ba742203077505998)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a3b59a2ff99e941c029cb4e6e222d2d68)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a98a2b2b116f635394928749c83b7936a)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a4047fab0d1d749ea20956a659778cb2a)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingInfo_1a5756aab5970cf6e2c3ccb84085d79758)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingInfo_1aace731bdf5e36da712c3419d502f98d0)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchmakingInfo_1ae2a4e3aad5d613c1b88688ccf0eabcc5)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchmakingInfo_1a1f532bfd3ea96a7ea315d0981e7842a2)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### Members

#### `public FString `[`TicketId`](#structFRHAPI__MatchmakingInfo_1a18cee065a4d780d93d1cd2a9bfde1886) <a id="structFRHAPI__MatchmakingInfo_1a18cee065a4d780d93d1cd2a9bfde1886"></a>

Unique ID for this attempt at matchmaking.

<br>
#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchmakingInfo_1a800627839cbce5194f89db4579d5d14c) <a id="structFRHAPI__MatchmakingInfo_1a800627839cbce5194f89db4579d5d14c"></a>

session-defined custom data

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchmakingInfo_1a0aa90688b46adb96245d4b9960649e7a) <a id="structFRHAPI__MatchmakingInfo_1a0aa90688b46adb96245d4b9960649e7a"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchmakingInfo_1ac42b8b638994aa4afa39c062c7ca8ca0)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchmakingInfo_1ac42b8b638994aa4afa39c062c7ca8ca0"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchmakingInfo_1a5caf4c240571f435a14cef04fdfb37ae)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchmakingInfo_1a5caf4c240571f435a14cef04fdfb37ae"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetTicketId`](#structFRHAPI__MatchmakingInfo_1a9cf459b92d8b3628d076579e339b9b84)`()` <a id="structFRHAPI__MatchmakingInfo_1a9cf459b92d8b3628d076579e339b9b84"></a>

Gets the value of TicketId.

<br>
#### `public inline const FString & `[`GetTicketId`](#structFRHAPI__MatchmakingInfo_1a11c0e0ef0b753761420d761d85bc7f27)`() const` <a id="structFRHAPI__MatchmakingInfo_1a11c0e0ef0b753761420d761d85bc7f27"></a>

Gets the value of TicketId.

<br>
#### `public inline void `[`SetTicketId`](#structFRHAPI__MatchmakingInfo_1ac79e24ca3917259b076f28af6af3d187)`(FString NewValue)` <a id="structFRHAPI__MatchmakingInfo_1ac79e24ca3917259b076f28af6af3d187"></a>

Sets the value of TicketId.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a8e9a6e7143b93b2ba742203077505998)`()` <a id="structFRHAPI__MatchmakingInfo_1a8e9a6e7143b93b2ba742203077505998"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a3b59a2ff99e941c029cb4e6e222d2d68)`() const` <a id="structFRHAPI__MatchmakingInfo_1a3b59a2ff99e941c029cb4e6e222d2d68"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a98a2b2b116f635394928749c83b7936a)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchmakingInfo_1a98a2b2b116f635394928749c83b7936a"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchmakingInfo_1a4047fab0d1d749ea20956a659778cb2a)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchmakingInfo_1a4047fab0d1d749ea20956a659778cb2a"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingInfo_1a5756aab5970cf6e2c3ccb84085d79758)`()` <a id="structFRHAPI__MatchmakingInfo_1a5756aab5970cf6e2c3ccb84085d79758"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingInfo_1aace731bdf5e36da712c3419d502f98d0)`() const` <a id="structFRHAPI__MatchmakingInfo_1aace731bdf5e36da712c3419d502f98d0"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchmakingInfo_1ae2a4e3aad5d613c1b88688ccf0eabcc5)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__MatchmakingInfo_1ae2a4e3aad5d613c1b88688ccf0eabcc5"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchmakingInfo_1a1f532bfd3ea96a7ea315d0981e7842a2)`()` <a id="structFRHAPI__MatchmakingInfo_1a1f532bfd3ea96a7ea315d0981e7842a2"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
