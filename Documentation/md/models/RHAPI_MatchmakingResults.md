# group `RHAPI_MatchmakingResults` <a id="group__RHAPI__MatchmakingResults"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchmakingResults`](#structFRHAPI__MatchmakingResults) | 

## struct `FRHAPI_MatchmakingResults` <a id="structFRHAPI__MatchmakingResults"></a>

```
struct FRHAPI_MatchmakingResults
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`MatchMakingId`](#structFRHAPI__MatchmakingResults_1a2d42bc189e932217b41b963cac3062fd) | Unique ID.
`public FDateTime `[`Created`](#structFRHAPI__MatchmakingResults_1a609594c6a987fee6dfef097a3834c2c7) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchmakingResults_1a5a11952125ceae887402479b919a915f) | MMF defined custom data.
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchmakingResults_1a457e1e4690a6a4b34e1b12ac76312733) | true if CustomData_Optional has been set to a value
`public TArray< FString > `[`TicketIds_Optional`](#structFRHAPI__MatchmakingResults_1aaf32e071732f9c81ada7c0ed265993e7) | List of tickets that were assigned to this match if created by matchmaking.
`public bool `[`TicketIds_IsSet`](#structFRHAPI__MatchmakingResults_1aa41fe3fd301f36e2524791a3fc68edec) | true if TicketIds_Optional has been set to a value
`public bool `[`TicketsAssigned_Optional`](#structFRHAPI__MatchmakingResults_1a5d7305f61c2b585c05d45f82217a4205) | Whether or not the tickets from these results have been assigned.
`public bool `[`TicketsAssigned_IsSet`](#structFRHAPI__MatchmakingResults_1ab4f3027f46dce15e66c0768271866b4d) | true if TicketsAssigned_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchmakingResults_1a84b8a82a8084cb9258c1a5e1ccad4258)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchmakingResults_1aaa25743c46903ecac25d19361c982d82)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetMatchMakingId`](#structFRHAPI__MatchmakingResults_1a3eec9da01abb85f14e2852770df849af)`()` | Gets the value of MatchMakingId.
`public inline const FString & `[`GetMatchMakingId`](#structFRHAPI__MatchmakingResults_1a96808910d8dc9a9c2a57c8b22de9e5a4)`() const` | Gets the value of MatchMakingId.
`public inline void `[`SetMatchMakingId`](#structFRHAPI__MatchmakingResults_1a0bbee72f60f388d1f37ce90f1eaf1fe3)`(FString NewValue)` | Sets the value of MatchMakingId.
`public inline FDateTime & `[`GetCreated`](#structFRHAPI__MatchmakingResults_1a2fb8620470daf2cba9b6a80acbe5647d)`()` | Gets the value of Created.
`public inline const FDateTime & `[`GetCreated`](#structFRHAPI__MatchmakingResults_1a9dc547452a88f623f6d9f5286bbc8580)`() const` | Gets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__MatchmakingResults_1a65a062ef9c309fe8b92167295b9ef01e)`(FDateTime NewValue)` | Sets the value of Created.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1a1e55e716d190d23769c1f8739391cd9a)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1a01117496cdeb5820fa36738dced25ad1)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1a5a8b871bd725140fb3b5611b36df7763)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1ada7324d7b363cc133f4b5d93ac7da168)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingResults_1ac49979aae65167105a1aa96560d9c0e4)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingResults_1aab743d1e41d1d239c7d6137ff87ac905)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchmakingResults_1a42d42ca4236818b9c6f728e2ccf89df8)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchmakingResults_1ae469afc928153d7220e9d3eddc314527)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1abeb503f0a839ff3719e0280b5e4e23a7)`()` | Gets the value of TicketIds_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1ab3217ee869176976d9b2072f83295d2b)`() const` | Gets the value of TicketIds_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1ad83677daf14010a3507022e211ade10e)`(const TArray< FString > & DefaultValue) const` | Gets the value of TicketIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1a48b374004e48aeb12c8b39f4481cc967)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of TicketIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchmakingResults_1aeeebf6ffd67a77e5f2c8702d2f14a3d1)`()` | Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchmakingResults_1a13406c13b9df008591e546ee9ab79325)`() const` | Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTicketIds`](#structFRHAPI__MatchmakingResults_1ac24e7953c0388b90f4c45aad7f312b40)`(TArray< FString > NewValue)` | Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true.
`public inline void `[`ClearTicketIds`](#structFRHAPI__MatchmakingResults_1a65ed513e849ce02fa71a83adc2b5e626)`()` | Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false.
`public inline bool & `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a1e366bfdac0e3504b24c541a69eb9001)`()` | Gets the value of TicketsAssigned_Optional, regardless of it having been set.
`public inline const bool & `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a3c6c69815d2813502e1b2277e086d2ad)`() const` | Gets the value of TicketsAssigned_Optional, regardless of it having been set.
`public inline const bool & `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a3185667bb7a5f19b5f565b98f0e29c9c)`(const bool & DefaultValue) const` | Gets the value of TicketsAssigned_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a8080a07d99496bad41f51148831eb743)`(bool & OutValue) const` | Fills OutValue with the value of TicketsAssigned_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetTicketsAssignedOrNull`](#structFRHAPI__MatchmakingResults_1a3a09f799a93b1877eb05391827aac77f)`()` | Returns a pointer to TicketsAssigned_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetTicketsAssignedOrNull`](#structFRHAPI__MatchmakingResults_1a8aab0b5e579155f1e309b12ea31db0ce)`() const` | Returns a pointer to TicketsAssigned_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1af59657d445561e425c137d4f71530da6)`(bool NewValue)` | Sets the value of TicketsAssigned_Optional and also sets TicketsAssigned_IsSet to true.
`public inline void `[`ClearTicketsAssigned`](#structFRHAPI__MatchmakingResults_1aa61a731c623adefbd95d6b7dec006971)`()` | Clears the value of TicketsAssigned_Optional and sets TicketsAssigned_IsSet to false.
`public inline bool `[`IsTicketsAssignedDefaultValue`](#structFRHAPI__MatchmakingResults_1a5c8749120aa46ca1db37523cbd44a784)`() const` | Returns true if TicketsAssigned_Optional is set and matches the default value.
`public inline void `[`SetTicketsAssignedToDefault`](#structFRHAPI__MatchmakingResults_1a9d944457f3d11276df11f7ae3deba0ce)`()` | Sets the value of TicketsAssigned_Optional to its default and also sets TicketsAssigned_IsSet to true.

### Members

#### `public FString `[`MatchMakingId`](#structFRHAPI__MatchmakingResults_1a2d42bc189e932217b41b963cac3062fd) <a id="structFRHAPI__MatchmakingResults_1a2d42bc189e932217b41b963cac3062fd"></a>

Unique ID.

#### `public FDateTime `[`Created`](#structFRHAPI__MatchmakingResults_1a609594c6a987fee6dfef097a3834c2c7) <a id="structFRHAPI__MatchmakingResults_1a609594c6a987fee6dfef097a3834c2c7"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchmakingResults_1a5a11952125ceae887402479b919a915f) <a id="structFRHAPI__MatchmakingResults_1a5a11952125ceae887402479b919a915f"></a>

MMF defined custom data.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchmakingResults_1a457e1e4690a6a4b34e1b12ac76312733) <a id="structFRHAPI__MatchmakingResults_1a457e1e4690a6a4b34e1b12ac76312733"></a>

true if CustomData_Optional has been set to a value

#### `public TArray< FString > `[`TicketIds_Optional`](#structFRHAPI__MatchmakingResults_1aaf32e071732f9c81ada7c0ed265993e7) <a id="structFRHAPI__MatchmakingResults_1aaf32e071732f9c81ada7c0ed265993e7"></a>

List of tickets that were assigned to this match if created by matchmaking.

#### `public bool `[`TicketIds_IsSet`](#structFRHAPI__MatchmakingResults_1aa41fe3fd301f36e2524791a3fc68edec) <a id="structFRHAPI__MatchmakingResults_1aa41fe3fd301f36e2524791a3fc68edec"></a>

true if TicketIds_Optional has been set to a value

#### `public bool `[`TicketsAssigned_Optional`](#structFRHAPI__MatchmakingResults_1a5d7305f61c2b585c05d45f82217a4205) <a id="structFRHAPI__MatchmakingResults_1a5d7305f61c2b585c05d45f82217a4205"></a>

Whether or not the tickets from these results have been assigned.

#### `public bool `[`TicketsAssigned_IsSet`](#structFRHAPI__MatchmakingResults_1ab4f3027f46dce15e66c0768271866b4d) <a id="structFRHAPI__MatchmakingResults_1ab4f3027f46dce15e66c0768271866b4d"></a>

true if TicketsAssigned_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchmakingResults_1a84b8a82a8084cb9258c1a5e1ccad4258)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchmakingResults_1a84b8a82a8084cb9258c1a5e1ccad4258"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchmakingResults_1aaa25743c46903ecac25d19361c982d82)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchmakingResults_1aaa25743c46903ecac25d19361c982d82"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetMatchMakingId`](#structFRHAPI__MatchmakingResults_1a3eec9da01abb85f14e2852770df849af)`()` <a id="structFRHAPI__MatchmakingResults_1a3eec9da01abb85f14e2852770df849af"></a>

Gets the value of MatchMakingId.

#### `public inline const FString & `[`GetMatchMakingId`](#structFRHAPI__MatchmakingResults_1a96808910d8dc9a9c2a57c8b22de9e5a4)`() const` <a id="structFRHAPI__MatchmakingResults_1a96808910d8dc9a9c2a57c8b22de9e5a4"></a>

Gets the value of MatchMakingId.

#### `public inline void `[`SetMatchMakingId`](#structFRHAPI__MatchmakingResults_1a0bbee72f60f388d1f37ce90f1eaf1fe3)`(FString NewValue)` <a id="structFRHAPI__MatchmakingResults_1a0bbee72f60f388d1f37ce90f1eaf1fe3"></a>

Sets the value of MatchMakingId.

#### `public inline FDateTime & `[`GetCreated`](#structFRHAPI__MatchmakingResults_1a2fb8620470daf2cba9b6a80acbe5647d)`()` <a id="structFRHAPI__MatchmakingResults_1a2fb8620470daf2cba9b6a80acbe5647d"></a>

Gets the value of Created.

#### `public inline const FDateTime & `[`GetCreated`](#structFRHAPI__MatchmakingResults_1a9dc547452a88f623f6d9f5286bbc8580)`() const` <a id="structFRHAPI__MatchmakingResults_1a9dc547452a88f623f6d9f5286bbc8580"></a>

Gets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__MatchmakingResults_1a65a062ef9c309fe8b92167295b9ef01e)`(FDateTime NewValue)` <a id="structFRHAPI__MatchmakingResults_1a65a062ef9c309fe8b92167295b9ef01e"></a>

Sets the value of Created.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1a1e55e716d190d23769c1f8739391cd9a)`()` <a id="structFRHAPI__MatchmakingResults_1a1e55e716d190d23769c1f8739391cd9a"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1a01117496cdeb5820fa36738dced25ad1)`() const` <a id="structFRHAPI__MatchmakingResults_1a01117496cdeb5820fa36738dced25ad1"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1a5a8b871bd725140fb3b5611b36df7763)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchmakingResults_1a5a8b871bd725140fb3b5611b36df7763"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1ada7324d7b363cc133f4b5d93ac7da168)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchmakingResults_1ada7324d7b363cc133f4b5d93ac7da168"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingResults_1ac49979aae65167105a1aa96560d9c0e4)`()` <a id="structFRHAPI__MatchmakingResults_1ac49979aae65167105a1aa96560d9c0e4"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingResults_1aab743d1e41d1d239c7d6137ff87ac905)`() const` <a id="structFRHAPI__MatchmakingResults_1aab743d1e41d1d239c7d6137ff87ac905"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchmakingResults_1a42d42ca4236818b9c6f728e2ccf89df8)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__MatchmakingResults_1a42d42ca4236818b9c6f728e2ccf89df8"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchmakingResults_1ae469afc928153d7220e9d3eddc314527)`()` <a id="structFRHAPI__MatchmakingResults_1ae469afc928153d7220e9d3eddc314527"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1abeb503f0a839ff3719e0280b5e4e23a7)`()` <a id="structFRHAPI__MatchmakingResults_1abeb503f0a839ff3719e0280b5e4e23a7"></a>

Gets the value of TicketIds_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1ab3217ee869176976d9b2072f83295d2b)`() const` <a id="structFRHAPI__MatchmakingResults_1ab3217ee869176976d9b2072f83295d2b"></a>

Gets the value of TicketIds_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1ad83677daf14010a3507022e211ade10e)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__MatchmakingResults_1ad83677daf14010a3507022e211ade10e"></a>

Gets the value of TicketIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1a48b374004e48aeb12c8b39f4481cc967)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__MatchmakingResults_1a48b374004e48aeb12c8b39f4481cc967"></a>

Fills OutValue with the value of TicketIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchmakingResults_1aeeebf6ffd67a77e5f2c8702d2f14a3d1)`()` <a id="structFRHAPI__MatchmakingResults_1aeeebf6ffd67a77e5f2c8702d2f14a3d1"></a>

Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchmakingResults_1a13406c13b9df008591e546ee9ab79325)`() const` <a id="structFRHAPI__MatchmakingResults_1a13406c13b9df008591e546ee9ab79325"></a>

Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTicketIds`](#structFRHAPI__MatchmakingResults_1ac24e7953c0388b90f4c45aad7f312b40)`(TArray< FString > NewValue)` <a id="structFRHAPI__MatchmakingResults_1ac24e7953c0388b90f4c45aad7f312b40"></a>

Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true.

#### `public inline void `[`ClearTicketIds`](#structFRHAPI__MatchmakingResults_1a65ed513e849ce02fa71a83adc2b5e626)`()` <a id="structFRHAPI__MatchmakingResults_1a65ed513e849ce02fa71a83adc2b5e626"></a>

Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false.

#### `public inline bool & `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a1e366bfdac0e3504b24c541a69eb9001)`()` <a id="structFRHAPI__MatchmakingResults_1a1e366bfdac0e3504b24c541a69eb9001"></a>

Gets the value of TicketsAssigned_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a3c6c69815d2813502e1b2277e086d2ad)`() const` <a id="structFRHAPI__MatchmakingResults_1a3c6c69815d2813502e1b2277e086d2ad"></a>

Gets the value of TicketsAssigned_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a3185667bb7a5f19b5f565b98f0e29c9c)`(const bool & DefaultValue) const` <a id="structFRHAPI__MatchmakingResults_1a3185667bb7a5f19b5f565b98f0e29c9c"></a>

Gets the value of TicketsAssigned_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a8080a07d99496bad41f51148831eb743)`(bool & OutValue) const` <a id="structFRHAPI__MatchmakingResults_1a8080a07d99496bad41f51148831eb743"></a>

Fills OutValue with the value of TicketsAssigned_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetTicketsAssignedOrNull`](#structFRHAPI__MatchmakingResults_1a3a09f799a93b1877eb05391827aac77f)`()` <a id="structFRHAPI__MatchmakingResults_1a3a09f799a93b1877eb05391827aac77f"></a>

Returns a pointer to TicketsAssigned_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetTicketsAssignedOrNull`](#structFRHAPI__MatchmakingResults_1a8aab0b5e579155f1e309b12ea31db0ce)`() const` <a id="structFRHAPI__MatchmakingResults_1a8aab0b5e579155f1e309b12ea31db0ce"></a>

Returns a pointer to TicketsAssigned_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1af59657d445561e425c137d4f71530da6)`(bool NewValue)` <a id="structFRHAPI__MatchmakingResults_1af59657d445561e425c137d4f71530da6"></a>

Sets the value of TicketsAssigned_Optional and also sets TicketsAssigned_IsSet to true.

#### `public inline void `[`ClearTicketsAssigned`](#structFRHAPI__MatchmakingResults_1aa61a731c623adefbd95d6b7dec006971)`()` <a id="structFRHAPI__MatchmakingResults_1aa61a731c623adefbd95d6b7dec006971"></a>

Clears the value of TicketsAssigned_Optional and sets TicketsAssigned_IsSet to false.

#### `public inline bool `[`IsTicketsAssignedDefaultValue`](#structFRHAPI__MatchmakingResults_1a5c8749120aa46ca1db37523cbd44a784)`() const` <a id="structFRHAPI__MatchmakingResults_1a5c8749120aa46ca1db37523cbd44a784"></a>

Returns true if TicketsAssigned_Optional is set and matches the default value.

#### `public inline void `[`SetTicketsAssignedToDefault`](#structFRHAPI__MatchmakingResults_1a9d944457f3d11276df11f7ae3deba0ce)`()` <a id="structFRHAPI__MatchmakingResults_1a9d944457f3d11276df11f7ae3deba0ce"></a>

Sets the value of TicketsAssigned_Optional to its default and also sets TicketsAssigned_IsSet to true.

