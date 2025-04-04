---
title: RHAPI_BrowserInfo
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BrowserInfo`](#structFRHAPI__BrowserInfo) | Information about the browser resource in a session.

## struct `FRHAPI_BrowserInfo` <a id="structFRHAPI__BrowserInfo"></a>

```
struct FRHAPI_BrowserInfo
  : public FRHAPI_Model
```

Information about the browser resource in a session.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__BrowserInfo_1a1ad770cf3fe97c92dab9795e64b4a8ed) | Custom data with the listing of the instance in the Session browser.
`public bool `[`CustomData_IsSet`](#structFRHAPI__BrowserInfo_1a27eb9d0cd09c5d0f93d0631e19b0e604) | true if CustomData_Optional has been set to a value
`public FDateTime `[`CreatedTimestamp_Optional`](#structFRHAPI__BrowserInfo_1a757dde22918ff8ddffba918fb659933c) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`CreatedTimestamp_IsSet`](#structFRHAPI__BrowserInfo_1ac83f0ff5d82f29c733344ade1638d9d8) | true if CreatedTimestamp_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__BrowserInfo_1a20ee84c7ebab04ef64b22cdc8cae6629)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BrowserInfo_1a1991b225ba4f722eb4b561105e1111a8)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserInfo_1ad241934ab82d4649a4c8e38a33961a75)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserInfo_1a5a9ae952fdb694f27be6644d178ecd1c)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserInfo_1ab3453f9fcd93538daa7db61a9df3c485)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__BrowserInfo_1a2d8cf64f67c2ebc5e50b928cc557acea)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserInfo_1a087016f0bcabf902bf9e8d4fc1ad4984)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserInfo_1ac59fd5f656558a6e3cc1f924e733c10c)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__BrowserInfo_1a0cecadce5a53f4e9c468dabbc318be3f)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__BrowserInfo_1ae3ce69fb981a8c1dc00cefb7bf0c8835)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__BrowserInfo_1ae8f8398bbf009d658cf121b7734c9ba0)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__BrowserInfo_1a1e3a5cc62766cda65d2c8e355e7df98d)`() const` | Checks whether CustomData_Optional has been set.
`public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1a5e5e4f31a1faa5f2c28bdd7583802b63)`()` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1a285c36b3ef85b2c99d9b6080ec2b55fa)`() const` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1af2dea97a2263fbc6903c908c806b57b6)`(const FDateTime & DefaultValue) const` | Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1a4d2b2d40f88ca2d7abbed130033ba527)`(FDateTime & OutValue) const` | Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__BrowserInfo_1a8fa9ff9bad9600e6674bf6e5d9522a55)`()` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__BrowserInfo_1ab2fcdd46fddd106335e1eeb8c82e06e3)`() const` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1ac16d895b1f063bda150dad1bb0b3e191)`(const FDateTime & NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.
`public inline void `[`SetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1adf5e721d40d6cf23ea01a02c80fe609e)`(FDateTime && NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__BrowserInfo_1a6a8974f574242c1a62b34278b6b38e32)`()` | Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.
`public inline bool `[`IsCreatedTimestampSet`](#structFRHAPI__BrowserInfo_1accf186030dfeee30de0d0b2da9149085)`() const` | Checks whether CreatedTimestamp_Optional has been set.

### Members

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__BrowserInfo_1a1ad770cf3fe97c92dab9795e64b4a8ed) <a id="structFRHAPI__BrowserInfo_1a1ad770cf3fe97c92dab9795e64b4a8ed"></a>

Custom data with the listing of the instance in the Session browser.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__BrowserInfo_1a27eb9d0cd09c5d0f93d0631e19b0e604) <a id="structFRHAPI__BrowserInfo_1a27eb9d0cd09c5d0f93d0631e19b0e604"></a>

true if CustomData_Optional has been set to a value

#### `public FDateTime `[`CreatedTimestamp_Optional`](#structFRHAPI__BrowserInfo_1a757dde22918ff8ddffba918fb659933c) <a id="structFRHAPI__BrowserInfo_1a757dde22918ff8ddffba918fb659933c"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`CreatedTimestamp_IsSet`](#structFRHAPI__BrowserInfo_1ac83f0ff5d82f29c733344ade1638d9d8) <a id="structFRHAPI__BrowserInfo_1ac83f0ff5d82f29c733344ade1638d9d8"></a>

true if CreatedTimestamp_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__BrowserInfo_1a20ee84c7ebab04ef64b22cdc8cae6629)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BrowserInfo_1a20ee84c7ebab04ef64b22cdc8cae6629"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BrowserInfo_1a1991b225ba4f722eb4b561105e1111a8)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__BrowserInfo_1a1991b225ba4f722eb4b561105e1111a8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserInfo_1ad241934ab82d4649a4c8e38a33961a75)`()` <a id="structFRHAPI__BrowserInfo_1ad241934ab82d4649a4c8e38a33961a75"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserInfo_1a5a9ae952fdb694f27be6644d178ecd1c)`() const` <a id="structFRHAPI__BrowserInfo_1a5a9ae952fdb694f27be6644d178ecd1c"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserInfo_1ab3453f9fcd93538daa7db61a9df3c485)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__BrowserInfo_1ab3453f9fcd93538daa7db61a9df3c485"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__BrowserInfo_1a2d8cf64f67c2ebc5e50b928cc557acea)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__BrowserInfo_1a2d8cf64f67c2ebc5e50b928cc557acea"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserInfo_1a087016f0bcabf902bf9e8d4fc1ad4984)`()` <a id="structFRHAPI__BrowserInfo_1a087016f0bcabf902bf9e8d4fc1ad4984"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserInfo_1ac59fd5f656558a6e3cc1f924e733c10c)`() const` <a id="structFRHAPI__BrowserInfo_1ac59fd5f656558a6e3cc1f924e733c10c"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__BrowserInfo_1a0cecadce5a53f4e9c468dabbc318be3f)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__BrowserInfo_1a0cecadce5a53f4e9c468dabbc318be3f"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__BrowserInfo_1ae3ce69fb981a8c1dc00cefb7bf0c8835)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__BrowserInfo_1ae3ce69fb981a8c1dc00cefb7bf0c8835"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__BrowserInfo_1ae8f8398bbf009d658cf121b7734c9ba0)`()` <a id="structFRHAPI__BrowserInfo_1ae8f8398bbf009d658cf121b7734c9ba0"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__BrowserInfo_1a1e3a5cc62766cda65d2c8e355e7df98d)`() const` <a id="structFRHAPI__BrowserInfo_1a1e3a5cc62766cda65d2c8e355e7df98d"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1a5e5e4f31a1faa5f2c28bdd7583802b63)`()` <a id="structFRHAPI__BrowserInfo_1a5e5e4f31a1faa5f2c28bdd7583802b63"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1a285c36b3ef85b2c99d9b6080ec2b55fa)`() const` <a id="structFRHAPI__BrowserInfo_1a285c36b3ef85b2c99d9b6080ec2b55fa"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1af2dea97a2263fbc6903c908c806b57b6)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__BrowserInfo_1af2dea97a2263fbc6903c908c806b57b6"></a>

Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1a4d2b2d40f88ca2d7abbed130033ba527)`(FDateTime & OutValue) const` <a id="structFRHAPI__BrowserInfo_1a4d2b2d40f88ca2d7abbed130033ba527"></a>

Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__BrowserInfo_1a8fa9ff9bad9600e6674bf6e5d9522a55)`()` <a id="structFRHAPI__BrowserInfo_1a8fa9ff9bad9600e6674bf6e5d9522a55"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__BrowserInfo_1ab2fcdd46fddd106335e1eeb8c82e06e3)`() const` <a id="structFRHAPI__BrowserInfo_1ab2fcdd46fddd106335e1eeb8c82e06e3"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1ac16d895b1f063bda150dad1bb0b3e191)`(const FDateTime & NewValue)` <a id="structFRHAPI__BrowserInfo_1ac16d895b1f063bda150dad1bb0b3e191"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.

#### `public inline void `[`SetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1adf5e721d40d6cf23ea01a02c80fe609e)`(FDateTime && NewValue)` <a id="structFRHAPI__BrowserInfo_1adf5e721d40d6cf23ea01a02c80fe609e"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__BrowserInfo_1a6a8974f574242c1a62b34278b6b38e32)`()` <a id="structFRHAPI__BrowserInfo_1a6a8974f574242c1a62b34278b6b38e32"></a>

Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.

#### `public inline bool `[`IsCreatedTimestampSet`](#structFRHAPI__BrowserInfo_1accf186030dfeee30de0d0b2da9149085)`() const` <a id="structFRHAPI__BrowserInfo_1accf186030dfeee30de0d0b2da9149085"></a>

Checks whether CreatedTimestamp_Optional has been set.

