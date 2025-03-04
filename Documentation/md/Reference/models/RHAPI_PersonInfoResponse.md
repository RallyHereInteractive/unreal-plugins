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
`public inline FGuid & `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1ad9df0647d90b215c2379f650fe71f0f0)`()` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1ae2d11c75d5d82f102d70f7a272700f4e)`() const` | Gets the value of PersonId_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1ac896b40493507d3b2631a28d2f3010ce)`(const FGuid & DefaultValue) const` | Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1a1ffb7b957a1aa0f7e53a10a5f083e068)`(FGuid & OutValue) const` | Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonInfoResponse_1a6465ad91519964a500a1feae276f0158)`()` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonInfoResponse_1adbfd51976ea9831c91972f5605c5e874)`() const` | Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPersonId`](#structFRHAPI__PersonInfoResponse_1a691f60e0c9a194b3428885cbfb78d7a4)`(const FGuid & NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.
`public inline void `[`SetPersonId`](#structFRHAPI__PersonInfoResponse_1a6453980960cfeead8fd350b02e8ea5cc)`(FGuid && NewValue)` | Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.
`public inline void `[`ClearPersonId`](#structFRHAPI__PersonInfoResponse_1aee15a4d0a3e019e24aa98d3b5fb41442)`()` | Clears the value of PersonId_Optional and sets PersonId_IsSet to false.
`public inline bool `[`IsPersonIdSet`](#structFRHAPI__PersonInfoResponse_1a82a126d1bb04e114365d312311b4b15b)`() const` | Checks whether PersonId_Optional has been set.
`public inline int32 & `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a05a3792a9d2bceaa5749ac63570316f6)`()` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a45c8411fc2a2c8e4513025cc5b4607e6)`() const` | Gets the value of ActivePlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1aa012427c435c332c422b5d42635eaf58)`(const int32 & DefaultValue) const` | Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1af1e1ffaba380a3c6db46e100a715a137)`(int32 & OutValue) const` | Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PersonInfoResponse_1a5e512906081ab82e28324f1c98c22fb9)`()` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PersonInfoResponse_1a792baaf9052db67a56bae97623fe2489)`() const` | Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a971ee342a4e0f25993ca9d11dab6714a)`(const int32 & NewValue)` | Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.
`public inline void `[`SetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a3b5676b8e8f28a11eb5dce1c9d1f48b0)`(int32 && NewValue)` | Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true using move semantics.
`public inline void `[`ClearActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a558267ad55a7da0b17c9a7378646b429)`()` | Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.
`public inline bool `[`IsActivePlayerIdSet`](#structFRHAPI__PersonInfoResponse_1a6a26b51383474df381ae977935463514)`() const` | Checks whether ActivePlayerId_Optional has been set.
`public inline bool `[`IsActivePlayerIdDefaultValue`](#structFRHAPI__PersonInfoResponse_1a80e6f00658d24becf4a172719002d624)`() const` | Returns true if ActivePlayerId_Optional is set and matches the default value.
`public inline void `[`SetActivePlayerIdToDefault`](#structFRHAPI__PersonInfoResponse_1a0e6c098a669a0d819d8a0edcbb09b916)`()` | Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true.
`public inline FString & `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1abd282ee3b6bbc89ed4b474aee54d7344)`()` | Gets the value of Email_Optional, regardless of it having been set.
`public inline const FString & `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1ad9c8e8c93625064469718698932f0d69)`() const` | Gets the value of Email_Optional, regardless of it having been set.
`public inline const FString & `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1a6ddeead5d198d1d98d37d80fe7aeecac)`(const FString & DefaultValue) const` | Gets the value of Email_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1aab796fbe933c7fc5bd4186d3f9c567bd)`(FString & OutValue) const` | Fills OutValue with the value of Email_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetEmailOrNull`](#structFRHAPI__PersonInfoResponse_1ae9e676b757900460aa8f6eafb5b79110)`()` | Returns a pointer to Email_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetEmailOrNull`](#structFRHAPI__PersonInfoResponse_1acc0083319cdfe81594f47baf7965f758)`() const` | Returns a pointer to Email_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEmail`](#structFRHAPI__PersonInfoResponse_1a284dfd21ce17bd628c00680c5276a8a2)`(const FString & NewValue)` | Sets the value of Email_Optional and also sets Email_IsSet to true.
`public inline void `[`SetEmail`](#structFRHAPI__PersonInfoResponse_1ac384300786a02c301b41b06187d4aef7)`(FString && NewValue)` | Sets the value of Email_Optional and also sets Email_IsSet to true using move semantics.
`public inline void `[`ClearEmail`](#structFRHAPI__PersonInfoResponse_1ae7e95f48a6604663a002c86dd219fee6)`()` | Clears the value of Email_Optional and sets Email_IsSet to false.
`public inline bool `[`IsEmailSet`](#structFRHAPI__PersonInfoResponse_1a291973c99051d455d1eefee2326d5ca8)`() const` | Checks whether Email_Optional has been set.

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

#### `public inline FGuid & `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1ad9df0647d90b215c2379f650fe71f0f0)`()` <a id="structFRHAPI__PersonInfoResponse_1ad9df0647d90b215c2379f650fe71f0f0"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1ae2d11c75d5d82f102d70f7a272700f4e)`() const` <a id="structFRHAPI__PersonInfoResponse_1ae2d11c75d5d82f102d70f7a272700f4e"></a>

Gets the value of PersonId_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1ac896b40493507d3b2631a28d2f3010ce)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PersonInfoResponse_1ac896b40493507d3b2631a28d2f3010ce"></a>

Gets the value of PersonId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPersonId`](#structFRHAPI__PersonInfoResponse_1a1ffb7b957a1aa0f7e53a10a5f083e068)`(FGuid & OutValue) const` <a id="structFRHAPI__PersonInfoResponse_1a1ffb7b957a1aa0f7e53a10a5f083e068"></a>

Fills OutValue with the value of PersonId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonInfoResponse_1a6465ad91519964a500a1feae276f0158)`()` <a id="structFRHAPI__PersonInfoResponse_1a6465ad91519964a500a1feae276f0158"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetPersonIdOrNull`](#structFRHAPI__PersonInfoResponse_1adbfd51976ea9831c91972f5605c5e874)`() const` <a id="structFRHAPI__PersonInfoResponse_1adbfd51976ea9831c91972f5605c5e874"></a>

Returns a pointer to PersonId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPersonId`](#structFRHAPI__PersonInfoResponse_1a691f60e0c9a194b3428885cbfb78d7a4)`(const FGuid & NewValue)` <a id="structFRHAPI__PersonInfoResponse_1a691f60e0c9a194b3428885cbfb78d7a4"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true.

#### `public inline void `[`SetPersonId`](#structFRHAPI__PersonInfoResponse_1a6453980960cfeead8fd350b02e8ea5cc)`(FGuid && NewValue)` <a id="structFRHAPI__PersonInfoResponse_1a6453980960cfeead8fd350b02e8ea5cc"></a>

Sets the value of PersonId_Optional and also sets PersonId_IsSet to true using move semantics.

#### `public inline void `[`ClearPersonId`](#structFRHAPI__PersonInfoResponse_1aee15a4d0a3e019e24aa98d3b5fb41442)`()` <a id="structFRHAPI__PersonInfoResponse_1aee15a4d0a3e019e24aa98d3b5fb41442"></a>

Clears the value of PersonId_Optional and sets PersonId_IsSet to false.

#### `public inline bool `[`IsPersonIdSet`](#structFRHAPI__PersonInfoResponse_1a82a126d1bb04e114365d312311b4b15b)`() const` <a id="structFRHAPI__PersonInfoResponse_1a82a126d1bb04e114365d312311b4b15b"></a>

Checks whether PersonId_Optional has been set.

#### `public inline int32 & `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a05a3792a9d2bceaa5749ac63570316f6)`()` <a id="structFRHAPI__PersonInfoResponse_1a05a3792a9d2bceaa5749ac63570316f6"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a45c8411fc2a2c8e4513025cc5b4607e6)`() const` <a id="structFRHAPI__PersonInfoResponse_1a45c8411fc2a2c8e4513025cc5b4607e6"></a>

Gets the value of ActivePlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1aa012427c435c332c422b5d42635eaf58)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PersonInfoResponse_1aa012427c435c332c422b5d42635eaf58"></a>

Gets the value of ActivePlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1af1e1ffaba380a3c6db46e100a715a137)`(int32 & OutValue) const` <a id="structFRHAPI__PersonInfoResponse_1af1e1ffaba380a3c6db46e100a715a137"></a>

Fills OutValue with the value of ActivePlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PersonInfoResponse_1a5e512906081ab82e28324f1c98c22fb9)`()` <a id="structFRHAPI__PersonInfoResponse_1a5e512906081ab82e28324f1c98c22fb9"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetActivePlayerIdOrNull`](#structFRHAPI__PersonInfoResponse_1a792baaf9052db67a56bae97623fe2489)`() const` <a id="structFRHAPI__PersonInfoResponse_1a792baaf9052db67a56bae97623fe2489"></a>

Returns a pointer to ActivePlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a971ee342a4e0f25993ca9d11dab6714a)`(const int32 & NewValue)` <a id="structFRHAPI__PersonInfoResponse_1a971ee342a4e0f25993ca9d11dab6714a"></a>

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true.

#### `public inline void `[`SetActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a3b5676b8e8f28a11eb5dce1c9d1f48b0)`(int32 && NewValue)` <a id="structFRHAPI__PersonInfoResponse_1a3b5676b8e8f28a11eb5dce1c9d1f48b0"></a>

Sets the value of ActivePlayerId_Optional and also sets ActivePlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearActivePlayerId`](#structFRHAPI__PersonInfoResponse_1a558267ad55a7da0b17c9a7378646b429)`()` <a id="structFRHAPI__PersonInfoResponse_1a558267ad55a7da0b17c9a7378646b429"></a>

Clears the value of ActivePlayerId_Optional and sets ActivePlayerId_IsSet to false.

#### `public inline bool `[`IsActivePlayerIdSet`](#structFRHAPI__PersonInfoResponse_1a6a26b51383474df381ae977935463514)`() const` <a id="structFRHAPI__PersonInfoResponse_1a6a26b51383474df381ae977935463514"></a>

Checks whether ActivePlayerId_Optional has been set.

#### `public inline bool `[`IsActivePlayerIdDefaultValue`](#structFRHAPI__PersonInfoResponse_1a80e6f00658d24becf4a172719002d624)`() const` <a id="structFRHAPI__PersonInfoResponse_1a80e6f00658d24becf4a172719002d624"></a>

Returns true if ActivePlayerId_Optional is set and matches the default value.

#### `public inline void `[`SetActivePlayerIdToDefault`](#structFRHAPI__PersonInfoResponse_1a0e6c098a669a0d819d8a0edcbb09b916)`()` <a id="structFRHAPI__PersonInfoResponse_1a0e6c098a669a0d819d8a0edcbb09b916"></a>

Sets the value of ActivePlayerId_Optional to its default and also sets ActivePlayerId_IsSet to true.

#### `public inline FString & `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1abd282ee3b6bbc89ed4b474aee54d7344)`()` <a id="structFRHAPI__PersonInfoResponse_1abd282ee3b6bbc89ed4b474aee54d7344"></a>

Gets the value of Email_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1ad9c8e8c93625064469718698932f0d69)`() const` <a id="structFRHAPI__PersonInfoResponse_1ad9c8e8c93625064469718698932f0d69"></a>

Gets the value of Email_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1a6ddeead5d198d1d98d37d80fe7aeecac)`(const FString & DefaultValue) const` <a id="structFRHAPI__PersonInfoResponse_1a6ddeead5d198d1d98d37d80fe7aeecac"></a>

Gets the value of Email_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEmail`](#structFRHAPI__PersonInfoResponse_1aab796fbe933c7fc5bd4186d3f9c567bd)`(FString & OutValue) const` <a id="structFRHAPI__PersonInfoResponse_1aab796fbe933c7fc5bd4186d3f9c567bd"></a>

Fills OutValue with the value of Email_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetEmailOrNull`](#structFRHAPI__PersonInfoResponse_1ae9e676b757900460aa8f6eafb5b79110)`()` <a id="structFRHAPI__PersonInfoResponse_1ae9e676b757900460aa8f6eafb5b79110"></a>

Returns a pointer to Email_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetEmailOrNull`](#structFRHAPI__PersonInfoResponse_1acc0083319cdfe81594f47baf7965f758)`() const` <a id="structFRHAPI__PersonInfoResponse_1acc0083319cdfe81594f47baf7965f758"></a>

Returns a pointer to Email_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEmail`](#structFRHAPI__PersonInfoResponse_1a284dfd21ce17bd628c00680c5276a8a2)`(const FString & NewValue)` <a id="structFRHAPI__PersonInfoResponse_1a284dfd21ce17bd628c00680c5276a8a2"></a>

Sets the value of Email_Optional and also sets Email_IsSet to true.

#### `public inline void `[`SetEmail`](#structFRHAPI__PersonInfoResponse_1ac384300786a02c301b41b06187d4aef7)`(FString && NewValue)` <a id="structFRHAPI__PersonInfoResponse_1ac384300786a02c301b41b06187d4aef7"></a>

Sets the value of Email_Optional and also sets Email_IsSet to true using move semantics.

#### `public inline void `[`ClearEmail`](#structFRHAPI__PersonInfoResponse_1ae7e95f48a6604663a002c86dd219fee6)`()` <a id="structFRHAPI__PersonInfoResponse_1ae7e95f48a6604663a002c86dd219fee6"></a>

Clears the value of Email_Optional and sets Email_IsSet to false.

#### `public inline bool `[`IsEmailSet`](#structFRHAPI__PersonInfoResponse_1a291973c99051d455d1eefee2326d5ca8)`() const` <a id="structFRHAPI__PersonInfoResponse_1a291973c99051d455d1eefee2326d5ca8"></a>

Checks whether Email_Optional has been set.

