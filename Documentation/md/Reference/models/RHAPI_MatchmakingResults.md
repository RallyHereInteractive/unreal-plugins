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
`public TMap< FString, int32 > `[`TicketWaitSeconds_Optional`](#structFRHAPI__MatchmakingResults_1a37b4c4b78a7624db8052fa9b40e2e730) | The total time in seconds that each ticket waited before being assigned to a match.
`public bool `[`TicketWaitSeconds_IsSet`](#structFRHAPI__MatchmakingResults_1a1fed36ab09bdfb36a3e554e69b280f1b) | true if TicketWaitSeconds_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchmakingResults_1a26df787de6a29043c515a062e2aba6e3)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchmakingResults_1a1f262f640b6bcda9463dffbed3400c7f)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetMatchMakingId`](#structFRHAPI__MatchmakingResults_1afb1e1d79064aa470abf3050e32b2a0d3)`()` | Gets the value of MatchMakingId.
`public inline const FString & `[`GetMatchMakingId`](#structFRHAPI__MatchmakingResults_1a41e8c12d1c80aed96b99503b7325cc29)`() const` | Gets the value of MatchMakingId.
`public inline void `[`SetMatchMakingId`](#structFRHAPI__MatchmakingResults_1aedd10bd3ad6b1c515417e2ca791b6c12)`(const FString & NewValue)` | Sets the value of MatchMakingId.
`public inline void `[`SetMatchMakingId`](#structFRHAPI__MatchmakingResults_1ad068293accc4bf3b9e68ffe073b1be43)`(FString && NewValue)` | Sets the value of MatchMakingId using move semantics.
`public inline FDateTime & `[`GetCreated`](#structFRHAPI__MatchmakingResults_1a78c4fe9958640a651d61728911510473)`()` | Gets the value of Created.
`public inline const FDateTime & `[`GetCreated`](#structFRHAPI__MatchmakingResults_1af5735ecace5bb1c0d1ebf767d91347dc)`() const` | Gets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__MatchmakingResults_1a21afc5d660d3731b4c0d63e68a05b8eb)`(const FDateTime & NewValue)` | Sets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__MatchmakingResults_1a44230ebba5486d7b75643ca976d70189)`(FDateTime && NewValue)` | Sets the value of Created using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1a25aa08662d9ae98c76a66e7b429189c1)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1aef1e5086d750ad235cc6577af67eb535)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1a80b8e1f29876205b61cca727a68b0bf6)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1ada7324d7b363cc133f4b5d93ac7da168)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingResults_1a97336edebf1f6d4d14523cf059313c73)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingResults_1a016b038011943f69f7f683a062ba53da)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchmakingResults_1a1923c6f5b25c22f78e775bc52cc33533)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchmakingResults_1aead98d298dfaa92ba049e5b96356b894)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchmakingResults_1ae469afc928153d7220e9d3eddc314527)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchmakingResults_1a34dc01266e346115378a4b80e9ac111d)`() const` | Checks whether CustomData_Optional has been set.
`public inline TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1aa925f47aeaf4d83deb6be7883bdb3b21)`()` | Gets the value of TicketIds_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1af988898be830ff6f42e592f29f1950b9)`() const` | Gets the value of TicketIds_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1af41be7bf96230c02dacba80611d5c5c1)`(const TArray< FString > & DefaultValue) const` | Gets the value of TicketIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1a48b374004e48aeb12c8b39f4481cc967)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of TicketIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchmakingResults_1a9c1f8467b6c0c67753180d2653277c59)`()` | Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchmakingResults_1a43f83ab32c7485a4cef44b07432c2d12)`() const` | Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTicketIds`](#structFRHAPI__MatchmakingResults_1a9b5cec5d26a7246226b2666379a3dce4)`(const TArray< FString > & NewValue)` | Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true.
`public inline void `[`SetTicketIds`](#structFRHAPI__MatchmakingResults_1ab7ad53a7ec1fef36cc365228adda0707)`(TArray< FString > && NewValue)` | Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true using move semantics.
`public inline void `[`ClearTicketIds`](#structFRHAPI__MatchmakingResults_1a65ed513e849ce02fa71a83adc2b5e626)`()` | Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false.
`public inline bool `[`IsTicketIdsSet`](#structFRHAPI__MatchmakingResults_1a11314c160409a2dfdc87705e6d4a06f6)`() const` | Checks whether TicketIds_Optional has been set.
`public inline TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1ade9927ae42cd184f6f0f9a170d43e51f)`()` | Gets the value of TicketData_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1a44eea02d01b32783656f43eeaf1a9acd)`() const` | Gets the value of TicketData_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1a0709ffd125eb88b3a2df21f9346d0610)`(const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & DefaultValue) const` | Gets the value of TicketData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1a09022d2b5d30440d76f85fecb2f20202)`(TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & OutValue) const` | Fills OutValue with the value of TicketData_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > * `[`GetTicketDataOrNull`](#structFRHAPI__MatchmakingResults_1ab232a0ba1741d8a52b4662cc7b447945)`()` | Returns a pointer to TicketData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > * `[`GetTicketDataOrNull`](#structFRHAPI__MatchmakingResults_1a4d302018cdf440753a6fe5cf643e1f15)`() const` | Returns a pointer to TicketData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTicketData`](#structFRHAPI__MatchmakingResults_1a533782c9d6b56d32ae4c2f3727a50390)`(const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & NewValue)` | Sets the value of TicketData_Optional and also sets TicketData_IsSet to true.
`public inline void `[`SetTicketData`](#structFRHAPI__MatchmakingResults_1a4420c67cfc8256e9d4fe0d9266e7d6e9)`(TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > && NewValue)` | Sets the value of TicketData_Optional and also sets TicketData_IsSet to true using move semantics.
`public inline void `[`ClearTicketData`](#structFRHAPI__MatchmakingResults_1a0cea2c223c4bfb668d7392bc0612b480)`()` | Clears the value of TicketData_Optional and sets TicketData_IsSet to false.
`public inline bool `[`IsTicketDataSet`](#structFRHAPI__MatchmakingResults_1a2529dddb9c835ae1e0b675f334697e1d)`() const` | Checks whether TicketData_Optional has been set.
`public inline bool & `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a38c4919856129add605d8deb86e984dc)`()` | Gets the value of TicketsAssigned_Optional, regardless of it having been set.
`public inline const bool & `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1aaf863451d317130248b3560bf3253062)`() const` | Gets the value of TicketsAssigned_Optional, regardless of it having been set.
`public inline const bool & `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a528d9706c772c7454060af9683a2d6a5)`(const bool & DefaultValue) const` | Gets the value of TicketsAssigned_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a8080a07d99496bad41f51148831eb743)`(bool & OutValue) const` | Fills OutValue with the value of TicketsAssigned_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetTicketsAssignedOrNull`](#structFRHAPI__MatchmakingResults_1ae94de28e54a7011cfafff633ded1b360)`()` | Returns a pointer to TicketsAssigned_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetTicketsAssignedOrNull`](#structFRHAPI__MatchmakingResults_1a2c0e2c60ebfab49991341948f9f761fe)`() const` | Returns a pointer to TicketsAssigned_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a0dc7dfccda6d6986de987fd94d57cb03)`(const bool & NewValue)` | Sets the value of TicketsAssigned_Optional and also sets TicketsAssigned_IsSet to true.
`public inline void `[`SetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a8c3f099d477bdea81419337ab5f9e852)`(bool && NewValue)` | Sets the value of TicketsAssigned_Optional and also sets TicketsAssigned_IsSet to true using move semantics.
`public inline void `[`ClearTicketsAssigned`](#structFRHAPI__MatchmakingResults_1aa61a731c623adefbd95d6b7dec006971)`()` | Clears the value of TicketsAssigned_Optional and sets TicketsAssigned_IsSet to false.
`public inline bool `[`IsTicketsAssignedSet`](#structFRHAPI__MatchmakingResults_1ac3f0fedf829dc09f21c6563ce54e6305)`() const` | Checks whether TicketsAssigned_Optional has been set.
`public inline bool `[`IsTicketsAssignedDefaultValue`](#structFRHAPI__MatchmakingResults_1a5c8749120aa46ca1db37523cbd44a784)`() const` | Returns true if TicketsAssigned_Optional is set and matches the default value.
`public inline void `[`SetTicketsAssignedToDefault`](#structFRHAPI__MatchmakingResults_1a9d944457f3d11276df11f7ae3deba0ce)`()` | Sets the value of TicketsAssigned_Optional to its default and also sets TicketsAssigned_IsSet to true.
`public inline `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & `[`GetProfile`](#structFRHAPI__MatchmakingResults_1a418cdae7fd06b373e234321c9468ffbb)`()` | Gets the value of Profile_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & `[`GetProfile`](#structFRHAPI__MatchmakingResults_1a13a601276b64f9601a1ac222dfde52c2)`() const` | Gets the value of Profile_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & `[`GetProfile`](#structFRHAPI__MatchmakingResults_1a0f5c14dab39a563a294905bafa339c67)`(const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & DefaultValue) const` | Gets the value of Profile_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetProfile`](#structFRHAPI__MatchmakingResults_1a5bfd246a5dd021f3824009d18361468a)`(`[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & OutValue) const` | Fills OutValue with the value of Profile_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` * `[`GetProfileOrNull`](#structFRHAPI__MatchmakingResults_1aa97c3a50c82f50e552279158dcfbab0a)`()` | Returns a pointer to Profile_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` * `[`GetProfileOrNull`](#structFRHAPI__MatchmakingResults_1a7ba9135c8210ba791db980902720c95b)`() const` | Returns a pointer to Profile_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetProfile`](#structFRHAPI__MatchmakingResults_1ab6e990b135d9c91e71631bf30a95bb32)`(const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & NewValue)` | Sets the value of Profile_Optional and also sets Profile_IsSet to true.
`public inline void `[`SetProfile`](#structFRHAPI__MatchmakingResults_1ae30f1e8fe77b206f49983f550de6124b)`(`[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` && NewValue)` | Sets the value of Profile_Optional and also sets Profile_IsSet to true using move semantics.
`public inline void `[`ClearProfile`](#structFRHAPI__MatchmakingResults_1ad5e14ca03c0e29c1c7d402ff5acd13ec)`()` | Clears the value of Profile_Optional and sets Profile_IsSet to false.
`public inline bool `[`IsProfileSet`](#structFRHAPI__MatchmakingResults_1a0a0a25ecb4e5e4382f15a3810d9f7d41)`() const` | Checks whether Profile_Optional has been set.
`public inline TMap< FString, int32 > & `[`GetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1aa2ff7e1d6d2054092ec8c6a3b8ef3832)`()` | Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.
`public inline const TMap< FString, int32 > & `[`GetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1a6359961272afd273e1fba53c0f582bfe)`() const` | Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.
`public inline const TMap< FString, int32 > & `[`GetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1a2bc0204f425631eb04c7f771e350d6da)`(const TMap< FString, int32 > & DefaultValue) const` | Gets the value of TicketWaitSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1a4af88d3756e0a145eff8e36f1f69b3b4)`(TMap< FString, int32 > & OutValue) const` | Fills OutValue with the value of TicketWaitSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, int32 > * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__MatchmakingResults_1acf7a6891428f3816f1202a3a39e6b1d1)`()` | Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, int32 > * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__MatchmakingResults_1a11085c8ba7a5fada6a590f3a837b1099)`() const` | Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1a0a6db7ebedaf86f5853d377bace2c8d9)`(const TMap< FString, int32 > & NewValue)` | Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true.
`public inline void `[`SetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1a9c7b74089221148b8965c56622e6130e)`(TMap< FString, int32 > && NewValue)` | Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true using move semantics.
`public inline void `[`ClearTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1a93ffe9e5b884fdaf4676b6a87e8d0d6c)`()` | Clears the value of TicketWaitSeconds_Optional and sets TicketWaitSeconds_IsSet to false.
`public inline bool `[`IsTicketWaitSecondsSet`](#structFRHAPI__MatchmakingResults_1aef4aa6b494453e28442103d90dd07cb7)`() const` | Checks whether TicketWaitSeconds_Optional has been set.

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

#### `public TMap< FString, int32 > `[`TicketWaitSeconds_Optional`](#structFRHAPI__MatchmakingResults_1a37b4c4b78a7624db8052fa9b40e2e730) <a id="structFRHAPI__MatchmakingResults_1a37b4c4b78a7624db8052fa9b40e2e730"></a>

The total time in seconds that each ticket waited before being assigned to a match.

#### `public bool `[`TicketWaitSeconds_IsSet`](#structFRHAPI__MatchmakingResults_1a1fed36ab09bdfb36a3e554e69b280f1b) <a id="structFRHAPI__MatchmakingResults_1a1fed36ab09bdfb36a3e554e69b280f1b"></a>

true if TicketWaitSeconds_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchmakingResults_1a26df787de6a29043c515a062e2aba6e3)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchmakingResults_1a26df787de6a29043c515a062e2aba6e3"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchmakingResults_1a1f262f640b6bcda9463dffbed3400c7f)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchmakingResults_1a1f262f640b6bcda9463dffbed3400c7f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetMatchMakingId`](#structFRHAPI__MatchmakingResults_1afb1e1d79064aa470abf3050e32b2a0d3)`()` <a id="structFRHAPI__MatchmakingResults_1afb1e1d79064aa470abf3050e32b2a0d3"></a>

Gets the value of MatchMakingId.

#### `public inline const FString & `[`GetMatchMakingId`](#structFRHAPI__MatchmakingResults_1a41e8c12d1c80aed96b99503b7325cc29)`() const` <a id="structFRHAPI__MatchmakingResults_1a41e8c12d1c80aed96b99503b7325cc29"></a>

Gets the value of MatchMakingId.

#### `public inline void `[`SetMatchMakingId`](#structFRHAPI__MatchmakingResults_1aedd10bd3ad6b1c515417e2ca791b6c12)`(const FString & NewValue)` <a id="structFRHAPI__MatchmakingResults_1aedd10bd3ad6b1c515417e2ca791b6c12"></a>

Sets the value of MatchMakingId.

#### `public inline void `[`SetMatchMakingId`](#structFRHAPI__MatchmakingResults_1ad068293accc4bf3b9e68ffe073b1be43)`(FString && NewValue)` <a id="structFRHAPI__MatchmakingResults_1ad068293accc4bf3b9e68ffe073b1be43"></a>

Sets the value of MatchMakingId using move semantics.

#### `public inline FDateTime & `[`GetCreated`](#structFRHAPI__MatchmakingResults_1a78c4fe9958640a651d61728911510473)`()` <a id="structFRHAPI__MatchmakingResults_1a78c4fe9958640a651d61728911510473"></a>

Gets the value of Created.

#### `public inline const FDateTime & `[`GetCreated`](#structFRHAPI__MatchmakingResults_1af5735ecace5bb1c0d1ebf767d91347dc)`() const` <a id="structFRHAPI__MatchmakingResults_1af5735ecace5bb1c0d1ebf767d91347dc"></a>

Gets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__MatchmakingResults_1a21afc5d660d3731b4c0d63e68a05b8eb)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchmakingResults_1a21afc5d660d3731b4c0d63e68a05b8eb"></a>

Sets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__MatchmakingResults_1a44230ebba5486d7b75643ca976d70189)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchmakingResults_1a44230ebba5486d7b75643ca976d70189"></a>

Sets the value of Created using move semantics.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1a25aa08662d9ae98c76a66e7b429189c1)`()` <a id="structFRHAPI__MatchmakingResults_1a25aa08662d9ae98c76a66e7b429189c1"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1aef1e5086d750ad235cc6577af67eb535)`() const` <a id="structFRHAPI__MatchmakingResults_1aef1e5086d750ad235cc6577af67eb535"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1a80b8e1f29876205b61cca727a68b0bf6)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchmakingResults_1a80b8e1f29876205b61cca727a68b0bf6"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1ada7324d7b363cc133f4b5d93ac7da168)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchmakingResults_1ada7324d7b363cc133f4b5d93ac7da168"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingResults_1a97336edebf1f6d4d14523cf059313c73)`()` <a id="structFRHAPI__MatchmakingResults_1a97336edebf1f6d4d14523cf059313c73"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingResults_1a016b038011943f69f7f683a062ba53da)`() const` <a id="structFRHAPI__MatchmakingResults_1a016b038011943f69f7f683a062ba53da"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchmakingResults_1a1923c6f5b25c22f78e775bc52cc33533)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchmakingResults_1a1923c6f5b25c22f78e775bc52cc33533"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchmakingResults_1aead98d298dfaa92ba049e5b96356b894)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchmakingResults_1aead98d298dfaa92ba049e5b96356b894"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchmakingResults_1ae469afc928153d7220e9d3eddc314527)`()` <a id="structFRHAPI__MatchmakingResults_1ae469afc928153d7220e9d3eddc314527"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchmakingResults_1a34dc01266e346115378a4b80e9ac111d)`() const` <a id="structFRHAPI__MatchmakingResults_1a34dc01266e346115378a4b80e9ac111d"></a>

Checks whether CustomData_Optional has been set.

#### `public inline TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1aa925f47aeaf4d83deb6be7883bdb3b21)`()` <a id="structFRHAPI__MatchmakingResults_1aa925f47aeaf4d83deb6be7883bdb3b21"></a>

Gets the value of TicketIds_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1af988898be830ff6f42e592f29f1950b9)`() const` <a id="structFRHAPI__MatchmakingResults_1af988898be830ff6f42e592f29f1950b9"></a>

Gets the value of TicketIds_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1af41be7bf96230c02dacba80611d5c5c1)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__MatchmakingResults_1af41be7bf96230c02dacba80611d5c5c1"></a>

Gets the value of TicketIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1a48b374004e48aeb12c8b39f4481cc967)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__MatchmakingResults_1a48b374004e48aeb12c8b39f4481cc967"></a>

Fills OutValue with the value of TicketIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchmakingResults_1a9c1f8467b6c0c67753180d2653277c59)`()` <a id="structFRHAPI__MatchmakingResults_1a9c1f8467b6c0c67753180d2653277c59"></a>

Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchmakingResults_1a43f83ab32c7485a4cef44b07432c2d12)`() const` <a id="structFRHAPI__MatchmakingResults_1a43f83ab32c7485a4cef44b07432c2d12"></a>

Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTicketIds`](#structFRHAPI__MatchmakingResults_1a9b5cec5d26a7246226b2666379a3dce4)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__MatchmakingResults_1a9b5cec5d26a7246226b2666379a3dce4"></a>

Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true.

#### `public inline void `[`SetTicketIds`](#structFRHAPI__MatchmakingResults_1ab7ad53a7ec1fef36cc365228adda0707)`(TArray< FString > && NewValue)` <a id="structFRHAPI__MatchmakingResults_1ab7ad53a7ec1fef36cc365228adda0707"></a>

Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketIds`](#structFRHAPI__MatchmakingResults_1a65ed513e849ce02fa71a83adc2b5e626)`()` <a id="structFRHAPI__MatchmakingResults_1a65ed513e849ce02fa71a83adc2b5e626"></a>

Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false.

#### `public inline bool `[`IsTicketIdsSet`](#structFRHAPI__MatchmakingResults_1a11314c160409a2dfdc87705e6d4a06f6)`() const` <a id="structFRHAPI__MatchmakingResults_1a11314c160409a2dfdc87705e6d4a06f6"></a>

Checks whether TicketIds_Optional has been set.

#### `public inline TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1ade9927ae42cd184f6f0f9a170d43e51f)`()` <a id="structFRHAPI__MatchmakingResults_1ade9927ae42cd184f6f0f9a170d43e51f"></a>

Gets the value of TicketData_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1a44eea02d01b32783656f43eeaf1a9acd)`() const` <a id="structFRHAPI__MatchmakingResults_1a44eea02d01b32783656f43eeaf1a9acd"></a>

Gets the value of TicketData_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1a0709ffd125eb88b3a2df21f9346d0610)`(const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & DefaultValue) const` <a id="structFRHAPI__MatchmakingResults_1a0709ffd125eb88b3a2df21f9346d0610"></a>

Gets the value of TicketData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1a09022d2b5d30440d76f85fecb2f20202)`(TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & OutValue) const` <a id="structFRHAPI__MatchmakingResults_1a09022d2b5d30440d76f85fecb2f20202"></a>

Fills OutValue with the value of TicketData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > * `[`GetTicketDataOrNull`](#structFRHAPI__MatchmakingResults_1ab232a0ba1741d8a52b4662cc7b447945)`()` <a id="structFRHAPI__MatchmakingResults_1ab232a0ba1741d8a52b4662cc7b447945"></a>

Returns a pointer to TicketData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > * `[`GetTicketDataOrNull`](#structFRHAPI__MatchmakingResults_1a4d302018cdf440753a6fe5cf643e1f15)`() const` <a id="structFRHAPI__MatchmakingResults_1a4d302018cdf440753a6fe5cf643e1f15"></a>

Returns a pointer to TicketData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTicketData`](#structFRHAPI__MatchmakingResults_1a533782c9d6b56d32ae4c2f3727a50390)`(const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & NewValue)` <a id="structFRHAPI__MatchmakingResults_1a533782c9d6b56d32ae4c2f3727a50390"></a>

Sets the value of TicketData_Optional and also sets TicketData_IsSet to true.

#### `public inline void `[`SetTicketData`](#structFRHAPI__MatchmakingResults_1a4420c67cfc8256e9d4fe0d9266e7d6e9)`(TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > && NewValue)` <a id="structFRHAPI__MatchmakingResults_1a4420c67cfc8256e9d4fe0d9266e7d6e9"></a>

Sets the value of TicketData_Optional and also sets TicketData_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketData`](#structFRHAPI__MatchmakingResults_1a0cea2c223c4bfb668d7392bc0612b480)`()` <a id="structFRHAPI__MatchmakingResults_1a0cea2c223c4bfb668d7392bc0612b480"></a>

Clears the value of TicketData_Optional and sets TicketData_IsSet to false.

#### `public inline bool `[`IsTicketDataSet`](#structFRHAPI__MatchmakingResults_1a2529dddb9c835ae1e0b675f334697e1d)`() const` <a id="structFRHAPI__MatchmakingResults_1a2529dddb9c835ae1e0b675f334697e1d"></a>

Checks whether TicketData_Optional has been set.

#### `public inline bool & `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a38c4919856129add605d8deb86e984dc)`()` <a id="structFRHAPI__MatchmakingResults_1a38c4919856129add605d8deb86e984dc"></a>

Gets the value of TicketsAssigned_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1aaf863451d317130248b3560bf3253062)`() const` <a id="structFRHAPI__MatchmakingResults_1aaf863451d317130248b3560bf3253062"></a>

Gets the value of TicketsAssigned_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a528d9706c772c7454060af9683a2d6a5)`(const bool & DefaultValue) const` <a id="structFRHAPI__MatchmakingResults_1a528d9706c772c7454060af9683a2d6a5"></a>

Gets the value of TicketsAssigned_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a8080a07d99496bad41f51148831eb743)`(bool & OutValue) const` <a id="structFRHAPI__MatchmakingResults_1a8080a07d99496bad41f51148831eb743"></a>

Fills OutValue with the value of TicketsAssigned_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetTicketsAssignedOrNull`](#structFRHAPI__MatchmakingResults_1ae94de28e54a7011cfafff633ded1b360)`()` <a id="structFRHAPI__MatchmakingResults_1ae94de28e54a7011cfafff633ded1b360"></a>

Returns a pointer to TicketsAssigned_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetTicketsAssignedOrNull`](#structFRHAPI__MatchmakingResults_1a2c0e2c60ebfab49991341948f9f761fe)`() const` <a id="structFRHAPI__MatchmakingResults_1a2c0e2c60ebfab49991341948f9f761fe"></a>

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

#### `public inline `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & `[`GetProfile`](#structFRHAPI__MatchmakingResults_1a418cdae7fd06b373e234321c9468ffbb)`()` <a id="structFRHAPI__MatchmakingResults_1a418cdae7fd06b373e234321c9468ffbb"></a>

Gets the value of Profile_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & `[`GetProfile`](#structFRHAPI__MatchmakingResults_1a13a601276b64f9601a1ac222dfde52c2)`() const` <a id="structFRHAPI__MatchmakingResults_1a13a601276b64f9601a1ac222dfde52c2"></a>

Gets the value of Profile_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & `[`GetProfile`](#structFRHAPI__MatchmakingResults_1a0f5c14dab39a563a294905bafa339c67)`(const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & DefaultValue) const` <a id="structFRHAPI__MatchmakingResults_1a0f5c14dab39a563a294905bafa339c67"></a>

Gets the value of Profile_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetProfile`](#structFRHAPI__MatchmakingResults_1a5bfd246a5dd021f3824009d18361468a)`(`[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & OutValue) const` <a id="structFRHAPI__MatchmakingResults_1a5bfd246a5dd021f3824009d18361468a"></a>

Fills OutValue with the value of Profile_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` * `[`GetProfileOrNull`](#structFRHAPI__MatchmakingResults_1aa97c3a50c82f50e552279158dcfbab0a)`()` <a id="structFRHAPI__MatchmakingResults_1aa97c3a50c82f50e552279158dcfbab0a"></a>

Returns a pointer to Profile_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` * `[`GetProfileOrNull`](#structFRHAPI__MatchmakingResults_1a7ba9135c8210ba791db980902720c95b)`() const` <a id="structFRHAPI__MatchmakingResults_1a7ba9135c8210ba791db980902720c95b"></a>

Returns a pointer to Profile_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetProfile`](#structFRHAPI__MatchmakingResults_1ab6e990b135d9c91e71631bf30a95bb32)`(const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & NewValue)` <a id="structFRHAPI__MatchmakingResults_1ab6e990b135d9c91e71631bf30a95bb32"></a>

Sets the value of Profile_Optional and also sets Profile_IsSet to true.

#### `public inline void `[`SetProfile`](#structFRHAPI__MatchmakingResults_1ae30f1e8fe77b206f49983f550de6124b)`(`[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` && NewValue)` <a id="structFRHAPI__MatchmakingResults_1ae30f1e8fe77b206f49983f550de6124b"></a>

Sets the value of Profile_Optional and also sets Profile_IsSet to true using move semantics.

#### `public inline void `[`ClearProfile`](#structFRHAPI__MatchmakingResults_1ad5e14ca03c0e29c1c7d402ff5acd13ec)`()` <a id="structFRHAPI__MatchmakingResults_1ad5e14ca03c0e29c1c7d402ff5acd13ec"></a>

Clears the value of Profile_Optional and sets Profile_IsSet to false.

#### `public inline bool `[`IsProfileSet`](#structFRHAPI__MatchmakingResults_1a0a0a25ecb4e5e4382f15a3810d9f7d41)`() const` <a id="structFRHAPI__MatchmakingResults_1a0a0a25ecb4e5e4382f15a3810d9f7d41"></a>

Checks whether Profile_Optional has been set.

#### `public inline TMap< FString, int32 > & `[`GetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1aa2ff7e1d6d2054092ec8c6a3b8ef3832)`()` <a id="structFRHAPI__MatchmakingResults_1aa2ff7e1d6d2054092ec8c6a3b8ef3832"></a>

Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.

#### `public inline const TMap< FString, int32 > & `[`GetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1a6359961272afd273e1fba53c0f582bfe)`() const` <a id="structFRHAPI__MatchmakingResults_1a6359961272afd273e1fba53c0f582bfe"></a>

Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.

#### `public inline const TMap< FString, int32 > & `[`GetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1a2bc0204f425631eb04c7f771e350d6da)`(const TMap< FString, int32 > & DefaultValue) const` <a id="structFRHAPI__MatchmakingResults_1a2bc0204f425631eb04c7f771e350d6da"></a>

Gets the value of TicketWaitSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1a4af88d3756e0a145eff8e36f1f69b3b4)`(TMap< FString, int32 > & OutValue) const` <a id="structFRHAPI__MatchmakingResults_1a4af88d3756e0a145eff8e36f1f69b3b4"></a>

Fills OutValue with the value of TicketWaitSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, int32 > * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__MatchmakingResults_1acf7a6891428f3816f1202a3a39e6b1d1)`()` <a id="structFRHAPI__MatchmakingResults_1acf7a6891428f3816f1202a3a39e6b1d1"></a>

Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, int32 > * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__MatchmakingResults_1a11085c8ba7a5fada6a590f3a837b1099)`() const` <a id="structFRHAPI__MatchmakingResults_1a11085c8ba7a5fada6a590f3a837b1099"></a>

Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1a0a6db7ebedaf86f5853d377bace2c8d9)`(const TMap< FString, int32 > & NewValue)` <a id="structFRHAPI__MatchmakingResults_1a0a6db7ebedaf86f5853d377bace2c8d9"></a>

Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true.

#### `public inline void `[`SetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1a9c7b74089221148b8965c56622e6130e)`(TMap< FString, int32 > && NewValue)` <a id="structFRHAPI__MatchmakingResults_1a9c7b74089221148b8965c56622e6130e"></a>

Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1a93ffe9e5b884fdaf4676b6a87e8d0d6c)`()` <a id="structFRHAPI__MatchmakingResults_1a93ffe9e5b884fdaf4676b6a87e8d0d6c"></a>

Clears the value of TicketWaitSeconds_Optional and sets TicketWaitSeconds_IsSet to false.

#### `public inline bool `[`IsTicketWaitSecondsSet`](#structFRHAPI__MatchmakingResults_1aef4aa6b494453e28442103d90dd07cb7)`() const` <a id="structFRHAPI__MatchmakingResults_1aef4aa6b494453e28442103d90dd07cb7"></a>

Checks whether TicketWaitSeconds_Optional has been set.

