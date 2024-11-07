---
title: RHAPI_MatchmakingResults
---

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
`public TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > `[`TicketData_Optional`](#structFRHAPI__MatchmakingResults_1aadc585110557b26000d9ddcc7f85c212) | List of all the ticket data that was used when generating this match.
`public bool `[`TicketData_IsSet`](#structFRHAPI__MatchmakingResults_1a2f5b68051fa49767ed93375f2142cc08) | true if TicketData_Optional has been set to a value
`public bool `[`TicketsAssigned_Optional`](#structFRHAPI__MatchmakingResults_1a5d7305f61c2b585c05d45f82217a4205) | Whether or not the tickets from these results have been assigned.
`public bool `[`TicketsAssigned_IsSet`](#structFRHAPI__MatchmakingResults_1ab4f3027f46dce15e66c0768271866b4d) | true if TicketsAssigned_Optional has been set to a value
`public `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` `[`Profile_Optional`](#structFRHAPI__MatchmakingResults_1adbc0997e7831f29ac0822a7b23236308) | The profile used to create this match.
`public bool `[`Profile_IsSet`](#structFRHAPI__MatchmakingResults_1ad08c04e9a461a5845f7539dfb5a397c5) | true if Profile_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchmakingResults_1a26df787de6a29043c515a062e2aba6e3)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchmakingResults_1a9515f4d751b5e663c5ebbf5a361f34b3)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetMatchMakingId`](#structFRHAPI__MatchmakingResults_1a3eec9da01abb85f14e2852770df849af)`()` | Gets the value of MatchMakingId.
`public inline const FString & `[`GetMatchMakingId`](#structFRHAPI__MatchmakingResults_1a96808910d8dc9a9c2a57c8b22de9e5a4)`() const` | Gets the value of MatchMakingId.
`public inline void `[`SetMatchMakingId`](#structFRHAPI__MatchmakingResults_1aedd10bd3ad6b1c515417e2ca791b6c12)`(const FString & NewValue)` | Sets the value of MatchMakingId.
`public inline void `[`SetMatchMakingId`](#structFRHAPI__MatchmakingResults_1ad068293accc4bf3b9e68ffe073b1be43)`(FString && NewValue)` | Sets the value of MatchMakingId using move semantics.
`public inline FDateTime & `[`GetCreated`](#structFRHAPI__MatchmakingResults_1a2fb8620470daf2cba9b6a80acbe5647d)`()` | Gets the value of Created.
`public inline const FDateTime & `[`GetCreated`](#structFRHAPI__MatchmakingResults_1a9dc547452a88f623f6d9f5286bbc8580)`() const` | Gets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__MatchmakingResults_1a21afc5d660d3731b4c0d63e68a05b8eb)`(const FDateTime & NewValue)` | Sets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__MatchmakingResults_1a44230ebba5486d7b75643ca976d70189)`(FDateTime && NewValue)` | Sets the value of Created using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1a1e55e716d190d23769c1f8739391cd9a)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1a01117496cdeb5820fa36738dced25ad1)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1a5a8b871bd725140fb3b5611b36df7763)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1ada7324d7b363cc133f4b5d93ac7da168)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingResults_1ac49979aae65167105a1aa96560d9c0e4)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingResults_1aab743d1e41d1d239c7d6137ff87ac905)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchmakingResults_1a1923c6f5b25c22f78e775bc52cc33533)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchmakingResults_1aead98d298dfaa92ba049e5b96356b894)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchmakingResults_1ae469afc928153d7220e9d3eddc314527)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchmakingResults_1a34dc01266e346115378a4b80e9ac111d)`() const` | Checks whether CustomData_Optional has been set.
`public inline TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1abeb503f0a839ff3719e0280b5e4e23a7)`()` | Gets the value of TicketIds_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1ab3217ee869176976d9b2072f83295d2b)`() const` | Gets the value of TicketIds_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1ad83677daf14010a3507022e211ade10e)`(const TArray< FString > & DefaultValue) const` | Gets the value of TicketIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1a48b374004e48aeb12c8b39f4481cc967)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of TicketIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchmakingResults_1aeeebf6ffd67a77e5f2c8702d2f14a3d1)`()` | Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchmakingResults_1a13406c13b9df008591e546ee9ab79325)`() const` | Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTicketIds`](#structFRHAPI__MatchmakingResults_1a9b5cec5d26a7246226b2666379a3dce4)`(const TArray< FString > & NewValue)` | Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true.
`public inline void `[`SetTicketIds`](#structFRHAPI__MatchmakingResults_1ab7ad53a7ec1fef36cc365228adda0707)`(TArray< FString > && NewValue)` | Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true using move semantics.
`public inline void `[`ClearTicketIds`](#structFRHAPI__MatchmakingResults_1a65ed513e849ce02fa71a83adc2b5e626)`()` | Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false.
`public inline bool `[`IsTicketIdsSet`](#structFRHAPI__MatchmakingResults_1a11314c160409a2dfdc87705e6d4a06f6)`() const` | Checks whether TicketIds_Optional has been set.
`public inline TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1a05161d33c04da8e71fdc9b28532540d9)`()` | Gets the value of TicketData_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1ae4cb58c0e490e61f447823eb188d4dec)`() const` | Gets the value of TicketData_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1af561a5dcdb4c0a92f4a7f1f41a1af79e)`(const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & DefaultValue) const` | Gets the value of TicketData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1a09022d2b5d30440d76f85fecb2f20202)`(TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & OutValue) const` | Fills OutValue with the value of TicketData_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > * `[`GetTicketDataOrNull`](#structFRHAPI__MatchmakingResults_1a55d24d148b35a810615ef85c365d8f1a)`()` | Returns a pointer to TicketData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > * `[`GetTicketDataOrNull`](#structFRHAPI__MatchmakingResults_1a78582eef985d741537d37cb4e82a6bea)`() const` | Returns a pointer to TicketData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTicketData`](#structFRHAPI__MatchmakingResults_1a533782c9d6b56d32ae4c2f3727a50390)`(const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & NewValue)` | Sets the value of TicketData_Optional and also sets TicketData_IsSet to true.
`public inline void `[`SetTicketData`](#structFRHAPI__MatchmakingResults_1a4420c67cfc8256e9d4fe0d9266e7d6e9)`(TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > && NewValue)` | Sets the value of TicketData_Optional and also sets TicketData_IsSet to true using move semantics.
`public inline void `[`ClearTicketData`](#structFRHAPI__MatchmakingResults_1a0cea2c223c4bfb668d7392bc0612b480)`()` | Clears the value of TicketData_Optional and sets TicketData_IsSet to false.
`public inline bool `[`IsTicketDataSet`](#structFRHAPI__MatchmakingResults_1a2529dddb9c835ae1e0b675f334697e1d)`() const` | Checks whether TicketData_Optional has been set.
`public inline bool & `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a1e366bfdac0e3504b24c541a69eb9001)`()` | Gets the value of TicketsAssigned_Optional, regardless of it having been set.
`public inline const bool & `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a3c6c69815d2813502e1b2277e086d2ad)`() const` | Gets the value of TicketsAssigned_Optional, regardless of it having been set.
`public inline const bool & `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a3185667bb7a5f19b5f565b98f0e29c9c)`(const bool & DefaultValue) const` | Gets the value of TicketsAssigned_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a8080a07d99496bad41f51148831eb743)`(bool & OutValue) const` | Fills OutValue with the value of TicketsAssigned_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetTicketsAssignedOrNull`](#structFRHAPI__MatchmakingResults_1a3a09f799a93b1877eb05391827aac77f)`()` | Returns a pointer to TicketsAssigned_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetTicketsAssignedOrNull`](#structFRHAPI__MatchmakingResults_1a8aab0b5e579155f1e309b12ea31db0ce)`() const` | Returns a pointer to TicketsAssigned_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a0dc7dfccda6d6986de987fd94d57cb03)`(const bool & NewValue)` | Sets the value of TicketsAssigned_Optional and also sets TicketsAssigned_IsSet to true.
`public inline void `[`SetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a8c3f099d477bdea81419337ab5f9e852)`(bool && NewValue)` | Sets the value of TicketsAssigned_Optional and also sets TicketsAssigned_IsSet to true using move semantics.
`public inline void `[`ClearTicketsAssigned`](#structFRHAPI__MatchmakingResults_1aa61a731c623adefbd95d6b7dec006971)`()` | Clears the value of TicketsAssigned_Optional and sets TicketsAssigned_IsSet to false.
`public inline bool `[`IsTicketsAssignedSet`](#structFRHAPI__MatchmakingResults_1ac3f0fedf829dc09f21c6563ce54e6305)`() const` | Checks whether TicketsAssigned_Optional has been set.
`public inline bool `[`IsTicketsAssignedDefaultValue`](#structFRHAPI__MatchmakingResults_1a5c8749120aa46ca1db37523cbd44a784)`() const` | Returns true if TicketsAssigned_Optional is set and matches the default value.
`public inline void `[`SetTicketsAssignedToDefault`](#structFRHAPI__MatchmakingResults_1a9d944457f3d11276df11f7ae3deba0ce)`()` | Sets the value of TicketsAssigned_Optional to its default and also sets TicketsAssigned_IsSet to true.
`public inline `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & `[`GetProfile`](#structFRHAPI__MatchmakingResults_1ab688180c0ea9e3a5461f9edea2ceccc0)`()` | Gets the value of Profile_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & `[`GetProfile`](#structFRHAPI__MatchmakingResults_1adc0296d5c3ba34fe201500f8cd947a01)`() const` | Gets the value of Profile_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & `[`GetProfile`](#structFRHAPI__MatchmakingResults_1ac70f0a314d4d5d503ab00404eea50c00)`(const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & DefaultValue) const` | Gets the value of Profile_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetProfile`](#structFRHAPI__MatchmakingResults_1a5bfd246a5dd021f3824009d18361468a)`(`[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & OutValue) const` | Fills OutValue with the value of Profile_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` * `[`GetProfileOrNull`](#structFRHAPI__MatchmakingResults_1ab5de64566b4d07a46b6f17e59bd4d19e)`()` | Returns a pointer to Profile_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` * `[`GetProfileOrNull`](#structFRHAPI__MatchmakingResults_1a4abfd6f883b525fdba61e55b10a9213a)`() const` | Returns a pointer to Profile_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetProfile`](#structFRHAPI__MatchmakingResults_1ab6e990b135d9c91e71631bf30a95bb32)`(const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & NewValue)` | Sets the value of Profile_Optional and also sets Profile_IsSet to true.
`public inline void `[`SetProfile`](#structFRHAPI__MatchmakingResults_1ae30f1e8fe77b206f49983f550de6124b)`(`[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` && NewValue)` | Sets the value of Profile_Optional and also sets Profile_IsSet to true using move semantics.
`public inline void `[`ClearProfile`](#structFRHAPI__MatchmakingResults_1ad5e14ca03c0e29c1c7d402ff5acd13ec)`()` | Clears the value of Profile_Optional and sets Profile_IsSet to false.
`public inline bool `[`IsProfileSet`](#structFRHAPI__MatchmakingResults_1a0a0a25ecb4e5e4382f15a3810d9f7d41)`() const` | Checks whether Profile_Optional has been set.

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

#### `public TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > `[`TicketData_Optional`](#structFRHAPI__MatchmakingResults_1aadc585110557b26000d9ddcc7f85c212) <a id="structFRHAPI__MatchmakingResults_1aadc585110557b26000d9ddcc7f85c212"></a>

List of all the ticket data that was used when generating this match.

#### `public bool `[`TicketData_IsSet`](#structFRHAPI__MatchmakingResults_1a2f5b68051fa49767ed93375f2142cc08) <a id="structFRHAPI__MatchmakingResults_1a2f5b68051fa49767ed93375f2142cc08"></a>

true if TicketData_Optional has been set to a value

#### `public bool `[`TicketsAssigned_Optional`](#structFRHAPI__MatchmakingResults_1a5d7305f61c2b585c05d45f82217a4205) <a id="structFRHAPI__MatchmakingResults_1a5d7305f61c2b585c05d45f82217a4205"></a>

Whether or not the tickets from these results have been assigned.

#### `public bool `[`TicketsAssigned_IsSet`](#structFRHAPI__MatchmakingResults_1ab4f3027f46dce15e66c0768271866b4d) <a id="structFRHAPI__MatchmakingResults_1ab4f3027f46dce15e66c0768271866b4d"></a>

true if TicketsAssigned_Optional has been set to a value

#### `public `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` `[`Profile_Optional`](#structFRHAPI__MatchmakingResults_1adbc0997e7831f29ac0822a7b23236308) <a id="structFRHAPI__MatchmakingResults_1adbc0997e7831f29ac0822a7b23236308"></a>

The profile used to create this match.

#### `public bool `[`Profile_IsSet`](#structFRHAPI__MatchmakingResults_1ad08c04e9a461a5845f7539dfb5a397c5) <a id="structFRHAPI__MatchmakingResults_1ad08c04e9a461a5845f7539dfb5a397c5"></a>

true if Profile_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchmakingResults_1a26df787de6a29043c515a062e2aba6e3)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchmakingResults_1a26df787de6a29043c515a062e2aba6e3"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchmakingResults_1a9515f4d751b5e663c5ebbf5a361f34b3)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchmakingResults_1a9515f4d751b5e663c5ebbf5a361f34b3"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetMatchMakingId`](#structFRHAPI__MatchmakingResults_1a3eec9da01abb85f14e2852770df849af)`()` <a id="structFRHAPI__MatchmakingResults_1a3eec9da01abb85f14e2852770df849af"></a>

Gets the value of MatchMakingId.

#### `public inline const FString & `[`GetMatchMakingId`](#structFRHAPI__MatchmakingResults_1a96808910d8dc9a9c2a57c8b22de9e5a4)`() const` <a id="structFRHAPI__MatchmakingResults_1a96808910d8dc9a9c2a57c8b22de9e5a4"></a>

Gets the value of MatchMakingId.

#### `public inline void `[`SetMatchMakingId`](#structFRHAPI__MatchmakingResults_1aedd10bd3ad6b1c515417e2ca791b6c12)`(const FString & NewValue)` <a id="structFRHAPI__MatchmakingResults_1aedd10bd3ad6b1c515417e2ca791b6c12"></a>

Sets the value of MatchMakingId.

#### `public inline void `[`SetMatchMakingId`](#structFRHAPI__MatchmakingResults_1ad068293accc4bf3b9e68ffe073b1be43)`(FString && NewValue)` <a id="structFRHAPI__MatchmakingResults_1ad068293accc4bf3b9e68ffe073b1be43"></a>

Sets the value of MatchMakingId using move semantics.

#### `public inline FDateTime & `[`GetCreated`](#structFRHAPI__MatchmakingResults_1a2fb8620470daf2cba9b6a80acbe5647d)`()` <a id="structFRHAPI__MatchmakingResults_1a2fb8620470daf2cba9b6a80acbe5647d"></a>

Gets the value of Created.

#### `public inline const FDateTime & `[`GetCreated`](#structFRHAPI__MatchmakingResults_1a9dc547452a88f623f6d9f5286bbc8580)`() const` <a id="structFRHAPI__MatchmakingResults_1a9dc547452a88f623f6d9f5286bbc8580"></a>

Gets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__MatchmakingResults_1a21afc5d660d3731b4c0d63e68a05b8eb)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchmakingResults_1a21afc5d660d3731b4c0d63e68a05b8eb"></a>

Sets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__MatchmakingResults_1a44230ebba5486d7b75643ca976d70189)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchmakingResults_1a44230ebba5486d7b75643ca976d70189"></a>

Sets the value of Created using move semantics.

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

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchmakingResults_1a1923c6f5b25c22f78e775bc52cc33533)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchmakingResults_1a1923c6f5b25c22f78e775bc52cc33533"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchmakingResults_1aead98d298dfaa92ba049e5b96356b894)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchmakingResults_1aead98d298dfaa92ba049e5b96356b894"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchmakingResults_1ae469afc928153d7220e9d3eddc314527)`()` <a id="structFRHAPI__MatchmakingResults_1ae469afc928153d7220e9d3eddc314527"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchmakingResults_1a34dc01266e346115378a4b80e9ac111d)`() const` <a id="structFRHAPI__MatchmakingResults_1a34dc01266e346115378a4b80e9ac111d"></a>

Checks whether CustomData_Optional has been set.

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

#### `public inline void `[`SetTicketIds`](#structFRHAPI__MatchmakingResults_1a9b5cec5d26a7246226b2666379a3dce4)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__MatchmakingResults_1a9b5cec5d26a7246226b2666379a3dce4"></a>

Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true.

#### `public inline void `[`SetTicketIds`](#structFRHAPI__MatchmakingResults_1ab7ad53a7ec1fef36cc365228adda0707)`(TArray< FString > && NewValue)` <a id="structFRHAPI__MatchmakingResults_1ab7ad53a7ec1fef36cc365228adda0707"></a>

Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketIds`](#structFRHAPI__MatchmakingResults_1a65ed513e849ce02fa71a83adc2b5e626)`()` <a id="structFRHAPI__MatchmakingResults_1a65ed513e849ce02fa71a83adc2b5e626"></a>

Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false.

#### `public inline bool `[`IsTicketIdsSet`](#structFRHAPI__MatchmakingResults_1a11314c160409a2dfdc87705e6d4a06f6)`() const` <a id="structFRHAPI__MatchmakingResults_1a11314c160409a2dfdc87705e6d4a06f6"></a>

Checks whether TicketIds_Optional has been set.

#### `public inline TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1a05161d33c04da8e71fdc9b28532540d9)`()` <a id="structFRHAPI__MatchmakingResults_1a05161d33c04da8e71fdc9b28532540d9"></a>

Gets the value of TicketData_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1ae4cb58c0e490e61f447823eb188d4dec)`() const` <a id="structFRHAPI__MatchmakingResults_1ae4cb58c0e490e61f447823eb188d4dec"></a>

Gets the value of TicketData_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1af561a5dcdb4c0a92f4a7f1f41a1af79e)`(const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & DefaultValue) const` <a id="structFRHAPI__MatchmakingResults_1af561a5dcdb4c0a92f4a7f1f41a1af79e"></a>

Gets the value of TicketData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1a09022d2b5d30440d76f85fecb2f20202)`(TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & OutValue) const` <a id="structFRHAPI__MatchmakingResults_1a09022d2b5d30440d76f85fecb2f20202"></a>

Fills OutValue with the value of TicketData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > * `[`GetTicketDataOrNull`](#structFRHAPI__MatchmakingResults_1a55d24d148b35a810615ef85c365d8f1a)`()` <a id="structFRHAPI__MatchmakingResults_1a55d24d148b35a810615ef85c365d8f1a"></a>

Returns a pointer to TicketData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > * `[`GetTicketDataOrNull`](#structFRHAPI__MatchmakingResults_1a78582eef985d741537d37cb4e82a6bea)`() const` <a id="structFRHAPI__MatchmakingResults_1a78582eef985d741537d37cb4e82a6bea"></a>

Returns a pointer to TicketData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTicketData`](#structFRHAPI__MatchmakingResults_1a533782c9d6b56d32ae4c2f3727a50390)`(const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & NewValue)` <a id="structFRHAPI__MatchmakingResults_1a533782c9d6b56d32ae4c2f3727a50390"></a>

Sets the value of TicketData_Optional and also sets TicketData_IsSet to true.

#### `public inline void `[`SetTicketData`](#structFRHAPI__MatchmakingResults_1a4420c67cfc8256e9d4fe0d9266e7d6e9)`(TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > && NewValue)` <a id="structFRHAPI__MatchmakingResults_1a4420c67cfc8256e9d4fe0d9266e7d6e9"></a>

Sets the value of TicketData_Optional and also sets TicketData_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketData`](#structFRHAPI__MatchmakingResults_1a0cea2c223c4bfb668d7392bc0612b480)`()` <a id="structFRHAPI__MatchmakingResults_1a0cea2c223c4bfb668d7392bc0612b480"></a>

Clears the value of TicketData_Optional and sets TicketData_IsSet to false.

#### `public inline bool `[`IsTicketDataSet`](#structFRHAPI__MatchmakingResults_1a2529dddb9c835ae1e0b675f334697e1d)`() const` <a id="structFRHAPI__MatchmakingResults_1a2529dddb9c835ae1e0b675f334697e1d"></a>

Checks whether TicketData_Optional has been set.

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

#### `public inline void `[`SetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a0dc7dfccda6d6986de987fd94d57cb03)`(const bool & NewValue)` <a id="structFRHAPI__MatchmakingResults_1a0dc7dfccda6d6986de987fd94d57cb03"></a>

Sets the value of TicketsAssigned_Optional and also sets TicketsAssigned_IsSet to true.

#### `public inline void `[`SetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a8c3f099d477bdea81419337ab5f9e852)`(bool && NewValue)` <a id="structFRHAPI__MatchmakingResults_1a8c3f099d477bdea81419337ab5f9e852"></a>

Sets the value of TicketsAssigned_Optional and also sets TicketsAssigned_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketsAssigned`](#structFRHAPI__MatchmakingResults_1aa61a731c623adefbd95d6b7dec006971)`()` <a id="structFRHAPI__MatchmakingResults_1aa61a731c623adefbd95d6b7dec006971"></a>

Clears the value of TicketsAssigned_Optional and sets TicketsAssigned_IsSet to false.

#### `public inline bool `[`IsTicketsAssignedSet`](#structFRHAPI__MatchmakingResults_1ac3f0fedf829dc09f21c6563ce54e6305)`() const` <a id="structFRHAPI__MatchmakingResults_1ac3f0fedf829dc09f21c6563ce54e6305"></a>

Checks whether TicketsAssigned_Optional has been set.

#### `public inline bool `[`IsTicketsAssignedDefaultValue`](#structFRHAPI__MatchmakingResults_1a5c8749120aa46ca1db37523cbd44a784)`() const` <a id="structFRHAPI__MatchmakingResults_1a5c8749120aa46ca1db37523cbd44a784"></a>

Returns true if TicketsAssigned_Optional is set and matches the default value.

#### `public inline void `[`SetTicketsAssignedToDefault`](#structFRHAPI__MatchmakingResults_1a9d944457f3d11276df11f7ae3deba0ce)`()` <a id="structFRHAPI__MatchmakingResults_1a9d944457f3d11276df11f7ae3deba0ce"></a>

Sets the value of TicketsAssigned_Optional to its default and also sets TicketsAssigned_IsSet to true.

#### `public inline `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & `[`GetProfile`](#structFRHAPI__MatchmakingResults_1ab688180c0ea9e3a5461f9edea2ceccc0)`()` <a id="structFRHAPI__MatchmakingResults_1ab688180c0ea9e3a5461f9edea2ceccc0"></a>

Gets the value of Profile_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & `[`GetProfile`](#structFRHAPI__MatchmakingResults_1adc0296d5c3ba34fe201500f8cd947a01)`() const` <a id="structFRHAPI__MatchmakingResults_1adc0296d5c3ba34fe201500f8cd947a01"></a>

Gets the value of Profile_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & `[`GetProfile`](#structFRHAPI__MatchmakingResults_1ac70f0a314d4d5d503ab00404eea50c00)`(const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & DefaultValue) const` <a id="structFRHAPI__MatchmakingResults_1ac70f0a314d4d5d503ab00404eea50c00"></a>

Gets the value of Profile_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetProfile`](#structFRHAPI__MatchmakingResults_1a5bfd246a5dd021f3824009d18361468a)`(`[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & OutValue) const` <a id="structFRHAPI__MatchmakingResults_1a5bfd246a5dd021f3824009d18361468a"></a>

Fills OutValue with the value of Profile_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` * `[`GetProfileOrNull`](#structFRHAPI__MatchmakingResults_1ab5de64566b4d07a46b6f17e59bd4d19e)`()` <a id="structFRHAPI__MatchmakingResults_1ab5de64566b4d07a46b6f17e59bd4d19e"></a>

Returns a pointer to Profile_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` * `[`GetProfileOrNull`](#structFRHAPI__MatchmakingResults_1a4abfd6f883b525fdba61e55b10a9213a)`() const` <a id="structFRHAPI__MatchmakingResults_1a4abfd6f883b525fdba61e55b10a9213a"></a>

Returns a pointer to Profile_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetProfile`](#structFRHAPI__MatchmakingResults_1ab6e990b135d9c91e71631bf30a95bb32)`(const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & NewValue)` <a id="structFRHAPI__MatchmakingResults_1ab6e990b135d9c91e71631bf30a95bb32"></a>

Sets the value of Profile_Optional and also sets Profile_IsSet to true.

#### `public inline void `[`SetProfile`](#structFRHAPI__MatchmakingResults_1ae30f1e8fe77b206f49983f550de6124b)`(`[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` && NewValue)` <a id="structFRHAPI__MatchmakingResults_1ae30f1e8fe77b206f49983f550de6124b"></a>

Sets the value of Profile_Optional and also sets Profile_IsSet to true using move semantics.

#### `public inline void `[`ClearProfile`](#structFRHAPI__MatchmakingResults_1ad5e14ca03c0e29c1c7d402ff5acd13ec)`()` <a id="structFRHAPI__MatchmakingResults_1ad5e14ca03c0e29c1c7d402ff5acd13ec"></a>

Clears the value of Profile_Optional and sets Profile_IsSet to false.

#### `public inline bool `[`IsProfileSet`](#structFRHAPI__MatchmakingResults_1a0a0a25ecb4e5e4382f15a3810d9f7d41)`() const` <a id="structFRHAPI__MatchmakingResults_1a0a0a25ecb4e5e4382f15a3810d9f7d41"></a>

Checks whether Profile_Optional has been set.

