# RHAPI_PersonInfoResponse <a id="group__RHAPI__PersonInfoResponse"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PersonId_Optional`](#structFRHAPI__PersonInfoResponse_1a15fb6d340c496b10078584551091b39c) | Person ID.
`public bool `[`PersonId_IsSet`](#structFRHAPI__PersonInfoResponse_1a87e0b874455b6011cd39dcf767ea30ec) | true if PersonId_Optional has been set to a value
`public int32 `[`ActivePlayerId_Optional`](#structFRHAPI__PersonInfoResponse_1a61def40c5bab540afe269d7d85de9c66) | Active player ID, if the person has an active player.
`public bool `[`ActivePlayerId_IsSet`](#structFRHAPI__PersonInfoResponse_1af159facae488624991b49f348421998b) | true if ActivePlayerId_Optional has been set to a value
`public FString `[`Email_Optional`](#structFRHAPI__PersonInfoResponse_1ae1b5739f1b696af14a9f90a885fbaba5) | Email address.
`public bool `[`Email_IsSet`](#structFRHAPI__PersonInfoResponse_1ad1a4fb8de953a5e933e2250a6f80dd27) | true if Email_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PersonInfoResponse_1a999bd82da327328e8dc6bfc43f9e8f61)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PersonInfoResponse_1a8874b620d30ed90233111181d268b85c)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1ab35a1ca7e4b583c9514f41b034efc0af)`()` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1ae42bcf61d14d37b3ab220ff9e0fbbde1)`() const` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1a443edab7dd792e6a59f874be67889f63)`(const FGuid & DefaultValue) const` | Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1a1ffb7b957a1aa0f7e53a10a5f083e068)`(FGuid & OutValue) const` | Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonInfoResponse_1a5a55d6fc5154bf5ba092a184a73fcb38)`()` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonInfoResponse_1a17c8a2d76dbbe566904a18e5637e1db0)`() const` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPersonId`](#structFRHAPI__PersonInfoResponse_1a636fad92ade2dda2ccec5fe0f2faf9c8)`(FGuid NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.
`public inline void `[`ClearPersonId`](#structFRHAPI__PersonInfoResponse_1aee15a4d0a3e019e24aa98d3b5fb41442)`()` | Clears the value of PersonId_Optional and sets PersonId_IsSet to false.
`public inline int32 & `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1ac8837d8dcdf81a2289e6369be782df95)`()` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1ac808f70bd213157b932360926fd94601)`() const` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a9d8cb01ede43080fbe878005d8aca2b4)`(const int32 & DefaultValue) const` | Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1af1e1ffaba380a3c6db46e100a715a137)`(int32 & OutValue) const` | Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PersonInfoResponse_1a5c5295c3dcdadb5a168172cb61ff7400)`()` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PersonInfoResponse_1ab2f1f65704194c8209b251e5e92496d7)`() const` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a18dca6461596c1af7e37c4f45b0bb856)`(int32 NewValue)` | Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.
`public inline void `[`ClearActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a558267ad55a7da0b17c9a7378646b429)`()` | Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.
`public inline bool `[`IsActivePlayerIdDefaultValue`](#structFRHAPI__PersonInfoResponse_1a80e6f00658d24becf4a172719002d624)`() const` | Returns true if ActivePlayerId_Optional is set and matches the default value.
`public inline void `[`SetActivePlayerIdToDefault`](#structFRHAPI__PersonInfoResponse_1a0e6c098a669a0d819d8a0edcbb09b916)`()` | Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true.
`public inline FString & `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1a7fcd04cc2d8ccb25a7c4d1620534b9d4)`()` | Gets the value of Email_Optional, regardless of it having been set.
`public inline const FString & `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1a221f426875e39b05030b1a0f05e01884)`() const` | Gets the value of Email_Optional, regardless of it having been set.
`public inline const FString & `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1ab5de4e7165e521b36c05030ddbfb3164)`(const FString & DefaultValue) const` | Gets the value of Email_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1aab796fbe933c7fc5bd4186d3f9c567bd)`(FString & OutValue) const` | Fills OutValue with the value of Email_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetEmailOrNull`](#structFRHAPI__PersonInfoResponse_1a1f293a96bcfad12a1633e73febdadf94)`()` | Returns a pointer to Email_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetEmailOrNull`](#structFRHAPI__PersonInfoResponse_1aa5788c2920e399ccf8f5d0eb2f75130e)`() const` | Returns a pointer to Email_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEmail`](#structFRHAPI__PersonInfoResponse_1ae300cc4f31ac61b1ab1ef71795201184)`(FString NewValue)` | Sets the value of Email_Optional and also sets Email_IsSet to true.
`public inline void `[`ClearEmail`](#structFRHAPI__PersonInfoResponse_1ae7e95f48a6604663a002c86dd219fee6)`()` | Clears the value of Email_Optional and sets Email_IsSet to false.

#### Members

#### `public FGuid `[`PersonId_Optional`](#structFRHAPI__PersonInfoResponse_1a15fb6d340c496b10078584551091b39c) <a id="structFRHAPI__PersonInfoResponse_1a15fb6d340c496b10078584551091b39c"></a>

Person ID.

<br>
#### `public bool `[`PersonId_IsSet`](#structFRHAPI__PersonInfoResponse_1a87e0b874455b6011cd39dcf767ea30ec) <a id="structFRHAPI__PersonInfoResponse_1a87e0b874455b6011cd39dcf767ea30ec"></a>

true if PersonId_Optional has been set to a value

<br>
#### `public int32 `[`ActivePlayerId_Optional`](#structFRHAPI__PersonInfoResponse_1a61def40c5bab540afe269d7d85de9c66) <a id="structFRHAPI__PersonInfoResponse_1a61def40c5bab540afe269d7d85de9c66"></a>

Active player ID, if the person has an active player.

<br>
#### `public bool `[`ActivePlayerId_IsSet`](#structFRHAPI__PersonInfoResponse_1af159facae488624991b49f348421998b) <a id="structFRHAPI__PersonInfoResponse_1af159facae488624991b49f348421998b"></a>

true if ActivePlayerId_Optional has been set to a value

<br>
#### `public FString `[`Email_Optional`](#structFRHAPI__PersonInfoResponse_1ae1b5739f1b696af14a9f90a885fbaba5) <a id="structFRHAPI__PersonInfoResponse_1ae1b5739f1b696af14a9f90a885fbaba5"></a>

Email address.

<br>
#### `public bool `[`Email_IsSet`](#structFRHAPI__PersonInfoResponse_1ad1a4fb8de953a5e933e2250a6f80dd27) <a id="structFRHAPI__PersonInfoResponse_1ad1a4fb8de953a5e933e2250a6f80dd27"></a>

true if Email_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__PersonInfoResponse_1a999bd82da327328e8dc6bfc43f9e8f61)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PersonInfoResponse_1a999bd82da327328e8dc6bfc43f9e8f61"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__PersonInfoResponse_1a8874b620d30ed90233111181d268b85c)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PersonInfoResponse_1a8874b620d30ed90233111181d268b85c"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FGuid & `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1ab35a1ca7e4b583c9514f41b034efc0af)`()` <a id="structFRHAPI__PersonInfoResponse_1ab35a1ca7e4b583c9514f41b034efc0af"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1ae42bcf61d14d37b3ab220ff9e0fbbde1)`() const` <a id="structFRHAPI__PersonInfoResponse_1ae42bcf61d14d37b3ab220ff9e0fbbde1"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

<br>
#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1a443edab7dd792e6a59f874be67889f63)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PersonInfoResponse_1a443edab7dd792e6a59f874be67889f63"></a>

Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1a1ffb7b957a1aa0f7e53a10a5f083e068)`(FGuid & OutValue) const` <a id="structFRHAPI__PersonInfoResponse_1a1ffb7b957a1aa0f7e53a10a5f083e068"></a>

Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonInfoResponse_1a5a55d6fc5154bf5ba092a184a73fcb38)`()` <a id="structFRHAPI__PersonInfoResponse_1a5a55d6fc5154bf5ba092a184a73fcb38"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonInfoResponse_1a17c8a2d76dbbe566904a18e5637e1db0)`() const` <a id="structFRHAPI__PersonInfoResponse_1a17c8a2d76dbbe566904a18e5637e1db0"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPersonId`](#structFRHAPI__PersonInfoResponse_1a636fad92ade2dda2ccec5fe0f2faf9c8)`(FGuid NewValue)` <a id="structFRHAPI__PersonInfoResponse_1a636fad92ade2dda2ccec5fe0f2faf9c8"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.

<br>
#### `public inline void `[`ClearPersonId`](#structFRHAPI__PersonInfoResponse_1aee15a4d0a3e019e24aa98d3b5fb41442)`()` <a id="structFRHAPI__PersonInfoResponse_1aee15a4d0a3e019e24aa98d3b5fb41442"></a>

Clears the value of PersonId_Optional and sets PersonId_IsSet to false.

<br>
#### `public inline int32 & `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1ac8837d8dcdf81a2289e6369be782df95)`()` <a id="structFRHAPI__PersonInfoResponse_1ac8837d8dcdf81a2289e6369be782df95"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1ac808f70bd213157b932360926fd94601)`() const` <a id="structFRHAPI__PersonInfoResponse_1ac808f70bd213157b932360926fd94601"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a9d8cb01ede43080fbe878005d8aca2b4)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PersonInfoResponse_1a9d8cb01ede43080fbe878005d8aca2b4"></a>

Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1af1e1ffaba380a3c6db46e100a715a137)`(int32 & OutValue) const` <a id="structFRHAPI__PersonInfoResponse_1af1e1ffaba380a3c6db46e100a715a137"></a>

Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PersonInfoResponse_1a5c5295c3dcdadb5a168172cb61ff7400)`()` <a id="structFRHAPI__PersonInfoResponse_1a5c5295c3dcdadb5a168172cb61ff7400"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PersonInfoResponse_1ab2f1f65704194c8209b251e5e92496d7)`() const` <a id="structFRHAPI__PersonInfoResponse_1ab2f1f65704194c8209b251e5e92496d7"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a18dca6461596c1af7e37c4f45b0bb856)`(int32 NewValue)` <a id="structFRHAPI__PersonInfoResponse_1a18dca6461596c1af7e37c4f45b0bb856"></a>

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.

<br>
#### `public inline void `[`ClearActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a558267ad55a7da0b17c9a7378646b429)`()` <a id="structFRHAPI__PersonInfoResponse_1a558267ad55a7da0b17c9a7378646b429"></a>

Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.

<br>
#### `public inline bool `[`IsActivePlayerIdDefaultValue`](#structFRHAPI__PersonInfoResponse_1a80e6f00658d24becf4a172719002d624)`() const` <a id="structFRHAPI__PersonInfoResponse_1a80e6f00658d24becf4a172719002d624"></a>

Returns true if ActivePlayerId_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetActivePlayerIdToDefault`](#structFRHAPI__PersonInfoResponse_1a0e6c098a669a0d819d8a0edcbb09b916)`()` <a id="structFRHAPI__PersonInfoResponse_1a0e6c098a669a0d819d8a0edcbb09b916"></a>

Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true.

<br>
#### `public inline FString & `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1a7fcd04cc2d8ccb25a7c4d1620534b9d4)`()` <a id="structFRHAPI__PersonInfoResponse_1a7fcd04cc2d8ccb25a7c4d1620534b9d4"></a>

Gets the value of Email_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1a221f426875e39b05030b1a0f05e01884)`() const` <a id="structFRHAPI__PersonInfoResponse_1a221f426875e39b05030b1a0f05e01884"></a>

Gets the value of Email_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1ab5de4e7165e521b36c05030ddbfb3164)`(const FString & DefaultValue) const` <a id="structFRHAPI__PersonInfoResponse_1ab5de4e7165e521b36c05030ddbfb3164"></a>

Gets the value of Email_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1aab796fbe933c7fc5bd4186d3f9c567bd)`(FString & OutValue) const` <a id="structFRHAPI__PersonInfoResponse_1aab796fbe933c7fc5bd4186d3f9c567bd"></a>

Fills OutValue with the value of Email_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetEmailOrNull`](#structFRHAPI__PersonInfoResponse_1a1f293a96bcfad12a1633e73febdadf94)`()` <a id="structFRHAPI__PersonInfoResponse_1a1f293a96bcfad12a1633e73febdadf94"></a>

Returns a pointer to Email_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetEmailOrNull`](#structFRHAPI__PersonInfoResponse_1aa5788c2920e399ccf8f5d0eb2f75130e)`() const` <a id="structFRHAPI__PersonInfoResponse_1aa5788c2920e399ccf8f5d0eb2f75130e"></a>

Returns a pointer to Email_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetEmail`](#structFRHAPI__PersonInfoResponse_1ae300cc4f31ac61b1ab1ef71795201184)`(FString NewValue)` <a id="structFRHAPI__PersonInfoResponse_1ae300cc4f31ac61b1ab1ef71795201184"></a>

Sets the value of Email_Optional and also sets Email_IsSet to true.

<br>
#### `public inline void `[`ClearEmail`](#structFRHAPI__PersonInfoResponse_1ae7e95f48a6604663a002c86dd219fee6)`()` <a id="structFRHAPI__PersonInfoResponse_1ae7e95f48a6604663a002c86dd219fee6"></a>

Clears the value of Email_Optional and sets Email_IsSet to false.

<br>
