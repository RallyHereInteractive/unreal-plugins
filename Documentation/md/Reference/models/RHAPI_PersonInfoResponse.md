---
title: RHAPI_PersonInfoResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PersonInfoResponse`](#structFRHAPI__PersonInfoResponse) | Response for getting a person&#39;s info.

## struct `FRHAPI_PersonInfoResponse` <a id="structFRHAPI__PersonInfoResponse"></a>

```
struct FRHAPI_PersonInfoResponse
  : public FRHAPI_Model
```

Response for getting a person&#39;s info.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PersonId_Optional`](#structFRHAPI__PersonInfoResponse_1a15fb6d340c496b10078584551091b39c) | Person ID.
`public bool `[`PersonId_IsSet`](#structFRHAPI__PersonInfoResponse_1a87e0b874455b6011cd39dcf767ea30ec) | true if PersonId_Optional has been set to a value
`public int32 `[`ActivePlayerId_Optional`](#structFRHAPI__PersonInfoResponse_1a61def40c5bab540afe269d7d85de9c66) | Active player ID, if the person has an active player.
`public bool `[`ActivePlayerId_IsSet`](#structFRHAPI__PersonInfoResponse_1af159facae488624991b49f348421998b) | true if ActivePlayerId_Optional has been set to a value
`public FString `[`Email_Optional`](#structFRHAPI__PersonInfoResponse_1ae1b5739f1b696af14a9f90a885fbaba5) | Email address.
`public bool `[`Email_IsSet`](#structFRHAPI__PersonInfoResponse_1ad1a4fb8de953a5e933e2250a6f80dd27) | true if Email_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PersonInfoResponse_1a820332fa349c58367a38f925a6bbe81e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PersonInfoResponse_1ae20b35e48e0030f1a317307034ca0669)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1a3954a8a2b4bb974082c654be35abfbfe)`()` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1afd1689aa6e88d1d811207fd68b958d45)`() const` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1a70e534bf7a49e626e9f14aa11f3415fa)`(const FGuid & DefaultValue) const` | Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1a9ee3be894f7b267f6dd2fa93070747e7)`(FGuid & OutValue) const` | Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonInfoResponse_1a5fb1fbed701ab90392366644d1a18f52)`()` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonInfoResponse_1a7067171018a49c4e6ed507ce3628ba95)`() const` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__PersonInfoResponse_1a9c9d7aef53735884faaa45f09a7fb2cb)`(const FGuid & NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__PersonInfoResponse_1ab4df612cc4a2aaf94cca59bcbe1b7f95)`(FGuid && NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.
`public inline void `[`ClearPersonId`](#structFRHAPI__PersonInfoResponse_1aee15a4d0a3e019e24aa98d3b5fb41442)`()` | Clears the value of PersonId_Optional and sets PersonId_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a2db1521f625cf8baba6e2c7b6e82221a)`()` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a745c39cfe4341a2f43f2220175e82b7a)`() const` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a42b4bff70161e9f5d9dea10e4b2d0d73)`(const int32 & DefaultValue) const` | Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1aa50270efe14a9e03ad37f0172dba1da8)`(int32 & OutValue) const` | Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PersonInfoResponse_1aad00d90ee57e792ce4c6967ca8176e74)`()` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PersonInfoResponse_1a224bb0723ebcecaa828c28ea6b0a502d)`() const` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a295a07ccf777b45deb3333abbe5f1498)`(const int32 & NewValue)` | Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.
`public inline FORCEINLINE void `[`SetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a381d57b884fb192f0daae66f951cd16f)`(int32 && NewValue)` | Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true using move semantics.
`public inline void `[`ClearActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a558267ad55a7da0b17c9a7378646b429)`()` | Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_ActivePlayerId`](#structFRHAPI__PersonInfoResponse_1ad09fa2ebc157131ed4c8e90093ec5a3b)`()` | Returns the default value of ActivePlayerId.
`public inline FORCEINLINE FString & `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1a77c2bc726fb1f74dd16a8b20ec5e398f)`()` | Gets the value of Email_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1aba1496d5e1688c4c8cecd3ddd3e0deaf)`() const` | Gets the value of Email_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1ada9bc24b72edd8414c6e5ba4854e26df)`(const FString & DefaultValue) const` | Gets the value of Email_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1adc9b623516570c12c38e4743a382c3e4)`(FString & OutValue) const` | Fills OutValue with the value of Email_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetEmailOrNull`](#structFRHAPI__PersonInfoResponse_1ade8bdd595c563537483479bfeb20f29e)`()` | Returns a pointer to Email_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetEmailOrNull`](#structFRHAPI__PersonInfoResponse_1ab670df69b9e24200323daa9ecf410c86)`() const` | Returns a pointer to Email_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEmail`](#structFRHAPI__PersonInfoResponse_1aaae233851aadafe9044dab3331449a96)`(const FString & NewValue)` | Sets the value of Email_Optional and also sets Email_IsSet to true.
`public inline FORCEINLINE void `[`SetEmail`](#structFRHAPI__PersonInfoResponse_1a5bf1ef3c34d43da384c5d11b09ff2e93)`(FString && NewValue)` | Sets the value of Email_Optional and also sets Email_IsSet to true using move semantics.
`public inline void `[`ClearEmail`](#structFRHAPI__PersonInfoResponse_1ae7e95f48a6604663a002c86dd219fee6)`()` | Clears the value of Email_Optional and sets Email_IsSet to false.

### Members

#### `public FGuid `[`PersonId_Optional`](#structFRHAPI__PersonInfoResponse_1a15fb6d340c496b10078584551091b39c) <a id="structFRHAPI__PersonInfoResponse_1a15fb6d340c496b10078584551091b39c"></a>

Person ID.

#### `public bool `[`PersonId_IsSet`](#structFRHAPI__PersonInfoResponse_1a87e0b874455b6011cd39dcf767ea30ec) <a id="structFRHAPI__PersonInfoResponse_1a87e0b874455b6011cd39dcf767ea30ec"></a>

true if PersonId_Optional has been set to a value

#### `public int32 `[`ActivePlayerId_Optional`](#structFRHAPI__PersonInfoResponse_1a61def40c5bab540afe269d7d85de9c66) <a id="structFRHAPI__PersonInfoResponse_1a61def40c5bab540afe269d7d85de9c66"></a>

Active player ID, if the person has an active player.

#### `public bool `[`ActivePlayerId_IsSet`](#structFRHAPI__PersonInfoResponse_1af159facae488624991b49f348421998b) <a id="structFRHAPI__PersonInfoResponse_1af159facae488624991b49f348421998b"></a>

true if ActivePlayerId_Optional has been set to a value

#### `public FString `[`Email_Optional`](#structFRHAPI__PersonInfoResponse_1ae1b5739f1b696af14a9f90a885fbaba5) <a id="structFRHAPI__PersonInfoResponse_1ae1b5739f1b696af14a9f90a885fbaba5"></a>

Email address.

#### `public bool `[`Email_IsSet`](#structFRHAPI__PersonInfoResponse_1ad1a4fb8de953a5e933e2250a6f80dd27) <a id="structFRHAPI__PersonInfoResponse_1ad1a4fb8de953a5e933e2250a6f80dd27"></a>

true if Email_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PersonInfoResponse_1a820332fa349c58367a38f925a6bbe81e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PersonInfoResponse_1a820332fa349c58367a38f925a6bbe81e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PersonInfoResponse_1ae20b35e48e0030f1a317307034ca0669)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PersonInfoResponse_1ae20b35e48e0030f1a317307034ca0669"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1a3954a8a2b4bb974082c654be35abfbfe)`()` <a id="structFRHAPI__PersonInfoResponse_1a3954a8a2b4bb974082c654be35abfbfe"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1afd1689aa6e88d1d811207fd68b958d45)`() const` <a id="structFRHAPI__PersonInfoResponse_1afd1689aa6e88d1d811207fd68b958d45"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1a70e534bf7a49e626e9f14aa11f3415fa)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PersonInfoResponse_1a70e534bf7a49e626e9f14aa11f3415fa"></a>

Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1a9ee3be894f7b267f6dd2fa93070747e7)`(FGuid & OutValue) const` <a id="structFRHAPI__PersonInfoResponse_1a9ee3be894f7b267f6dd2fa93070747e7"></a>

Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonInfoResponse_1a5fb1fbed701ab90392366644d1a18f52)`()` <a id="structFRHAPI__PersonInfoResponse_1a5fb1fbed701ab90392366644d1a18f52"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonInfoResponse_1a7067171018a49c4e6ed507ce3628ba95)`() const` <a id="structFRHAPI__PersonInfoResponse_1a7067171018a49c4e6ed507ce3628ba95"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__PersonInfoResponse_1a9c9d7aef53735884faaa45f09a7fb2cb)`(const FGuid & NewValue)` <a id="structFRHAPI__PersonInfoResponse_1a9c9d7aef53735884faaa45f09a7fb2cb"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__PersonInfoResponse_1ab4df612cc4a2aaf94cca59bcbe1b7f95)`(FGuid && NewValue)` <a id="structFRHAPI__PersonInfoResponse_1ab4df612cc4a2aaf94cca59bcbe1b7f95"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.

#### `public inline void `[`ClearPersonId`](#structFRHAPI__PersonInfoResponse_1aee15a4d0a3e019e24aa98d3b5fb41442)`()` <a id="structFRHAPI__PersonInfoResponse_1aee15a4d0a3e019e24aa98d3b5fb41442"></a>

Clears the value of PersonId_Optional and sets PersonId_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a2db1521f625cf8baba6e2c7b6e82221a)`()` <a id="structFRHAPI__PersonInfoResponse_1a2db1521f625cf8baba6e2c7b6e82221a"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a745c39cfe4341a2f43f2220175e82b7a)`() const` <a id="structFRHAPI__PersonInfoResponse_1a745c39cfe4341a2f43f2220175e82b7a"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a42b4bff70161e9f5d9dea10e4b2d0d73)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PersonInfoResponse_1a42b4bff70161e9f5d9dea10e4b2d0d73"></a>

Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1aa50270efe14a9e03ad37f0172dba1da8)`(int32 & OutValue) const` <a id="structFRHAPI__PersonInfoResponse_1aa50270efe14a9e03ad37f0172dba1da8"></a>

Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PersonInfoResponse_1aad00d90ee57e792ce4c6967ca8176e74)`()` <a id="structFRHAPI__PersonInfoResponse_1aad00d90ee57e792ce4c6967ca8176e74"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PersonInfoResponse_1a224bb0723ebcecaa828c28ea6b0a502d)`() const` <a id="structFRHAPI__PersonInfoResponse_1a224bb0723ebcecaa828c28ea6b0a502d"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a295a07ccf777b45deb3333abbe5f1498)`(const int32 & NewValue)` <a id="structFRHAPI__PersonInfoResponse_1a295a07ccf777b45deb3333abbe5f1498"></a>

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a381d57b884fb192f0daae66f951cd16f)`(int32 && NewValue)` <a id="structFRHAPI__PersonInfoResponse_1a381d57b884fb192f0daae66f951cd16f"></a>

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a558267ad55a7da0b17c9a7378646b429)`()` <a id="structFRHAPI__PersonInfoResponse_1a558267ad55a7da0b17c9a7378646b429"></a>

Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_ActivePlayerId`](#structFRHAPI__PersonInfoResponse_1ad09fa2ebc157131ed4c8e90093ec5a3b)`()` <a id="structFRHAPI__PersonInfoResponse_1ad09fa2ebc157131ed4c8e90093ec5a3b"></a>

Returns the default value of ActivePlayerId.

#### `public inline FORCEINLINE FString & `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1a77c2bc726fb1f74dd16a8b20ec5e398f)`()` <a id="structFRHAPI__PersonInfoResponse_1a77c2bc726fb1f74dd16a8b20ec5e398f"></a>

Gets the value of Email_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1aba1496d5e1688c4c8cecd3ddd3e0deaf)`() const` <a id="structFRHAPI__PersonInfoResponse_1aba1496d5e1688c4c8cecd3ddd3e0deaf"></a>

Gets the value of Email_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1ada9bc24b72edd8414c6e5ba4854e26df)`(const FString & DefaultValue) const` <a id="structFRHAPI__PersonInfoResponse_1ada9bc24b72edd8414c6e5ba4854e26df"></a>

Gets the value of Email_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1adc9b623516570c12c38e4743a382c3e4)`(FString & OutValue) const` <a id="structFRHAPI__PersonInfoResponse_1adc9b623516570c12c38e4743a382c3e4"></a>

Fills OutValue with the value of Email_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetEmailOrNull`](#structFRHAPI__PersonInfoResponse_1ade8bdd595c563537483479bfeb20f29e)`()` <a id="structFRHAPI__PersonInfoResponse_1ade8bdd595c563537483479bfeb20f29e"></a>

Returns a pointer to Email_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetEmailOrNull`](#structFRHAPI__PersonInfoResponse_1ab670df69b9e24200323daa9ecf410c86)`() const` <a id="structFRHAPI__PersonInfoResponse_1ab670df69b9e24200323daa9ecf410c86"></a>

Returns a pointer to Email_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEmail`](#structFRHAPI__PersonInfoResponse_1aaae233851aadafe9044dab3331449a96)`(const FString & NewValue)` <a id="structFRHAPI__PersonInfoResponse_1aaae233851aadafe9044dab3331449a96"></a>

Sets the value of Email_Optional and also sets Email_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEmail`](#structFRHAPI__PersonInfoResponse_1a5bf1ef3c34d43da384c5d11b09ff2e93)`(FString && NewValue)` <a id="structFRHAPI__PersonInfoResponse_1a5bf1ef3c34d43da384c5d11b09ff2e93"></a>

Sets the value of Email_Optional and also sets Email_IsSet to true using move semantics.

#### `public inline void `[`ClearEmail`](#structFRHAPI__PersonInfoResponse_1ae7e95f48a6604663a002c86dd219fee6)`()` <a id="structFRHAPI__PersonInfoResponse_1ae7e95f48a6604663a002c86dd219fee6"></a>

Clears the value of Email_Optional and sets Email_IsSet to false.

