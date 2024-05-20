# group `RHAPI_MatchInfo` <a id="group__RHAPI__MatchInfo"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchInfo`](#structFRHAPI__MatchInfo) | DEPRECATED Information about a match.

## struct `FRHAPI_MatchInfo` <a id="structFRHAPI__MatchInfo"></a>

```
struct FRHAPI_MatchInfo
  : public FRHAPI_Model
```

DEPRECATED Information about a match.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`MatchId`](#structFRHAPI__MatchInfo_1a7accea9f13f833a68b7a89a86de907b2) | Unique ID.
`public FDateTime `[`Created`](#structFRHAPI__MatchInfo_1a4904d006b5ed11e234e9e4b5a407cc54) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchInfo_1a02d38c6dbc7c9e212d97892ca7807792) | instance-defined custom data
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchInfo_1a1429b2bd18c520ce2ba22a39710c5765) | true if CustomData_Optional has been set to a value
`public TArray< FString > `[`TicketIds_Optional`](#structFRHAPI__MatchInfo_1a38789aaa46dde5136ed9a8a3626bdc0f) | List of tickets that were assigned to this match if created by matchmaking.
`public bool `[`TicketIds_IsSet`](#structFRHAPI__MatchInfo_1a91574dfaac67cedbc94f7bf58ed53df9) | true if TicketIds_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchInfo_1afd6eb58532faf8990f254b715dda7481)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchInfo_1ad759073eaa762a9f28560aa65bddb3a4)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetMatchId`](#structFRHAPI__MatchInfo_1a66a52762273bf0a0cf00646d2cf9af8d)`()` | Gets the value of MatchId.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchInfo_1a9e9c91e87e3631e67364b3980fe54969)`() const` | Gets the value of MatchId.
`public inline void `[`SetMatchId`](#structFRHAPI__MatchInfo_1a7fa8c3fb93df4717f75bce8b5a5dcb28)`(FString NewValue)` | Sets the value of MatchId.
`public inline FDateTime & `[`GetCreated`](#structFRHAPI__MatchInfo_1ac8a05141162dd24ca4b5dc133febca82)`()` | Gets the value of Created.
`public inline const FDateTime & `[`GetCreated`](#structFRHAPI__MatchInfo_1a66461beaa2aa9191f410da3e0c64ef4e)`() const` | Gets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__MatchInfo_1acaaa92ca3e828447393c7e3d54c190eb)`(FDateTime NewValue)` | Sets the value of Created.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchInfo_1a6e2954b026f341c70bdb5163c5b3df0e)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchInfo_1a394a37854dd0c65b9a8f3edd5c911e65)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchInfo_1adc2c79614b27420ca402f7340c9dd3b4)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchInfo_1aadb7b3626c5833f981e3d1897212b85e)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchInfo_1a64464356d87f77088e729a3fccccf672)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchInfo_1a1f9c80fc49c3149c3354cf9dd804be5c)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchInfo_1af52f26531a5d2c64fdaa809ab946ce93)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchInfo_1a7272b7c7f05e68f044146691c6a444b7)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchInfo_1abb678240c130a0a257c19d966d4738ee)`()` | Gets the value of TicketIds_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchInfo_1a5dd9ca468dc97f8dd8cfe14d9348a3be)`() const` | Gets the value of TicketIds_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchInfo_1a3963850ecad78bc34a5ffde423630df7)`(const TArray< FString > & DefaultValue) const` | Gets the value of TicketIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTicketIds`](#structFRHAPI__MatchInfo_1aa25cb0d6646abad91133a83b1ea782e0)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of TicketIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchInfo_1a0ee3ee5d21c2228e687100fa57a3c176)`()` | Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchInfo_1aff9e347941364eb85196ad3a7d0634c9)`() const` | Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTicketIds`](#structFRHAPI__MatchInfo_1adf0731f95e38d4c13d0b981a88a91249)`(TArray< FString > NewValue)` | Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true.
`public inline void `[`ClearTicketIds`](#structFRHAPI__MatchInfo_1a0222662660481f1f5beeb18231b94b39)`()` | Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false.

### Members

#### `public FString `[`MatchId`](#structFRHAPI__MatchInfo_1a7accea9f13f833a68b7a89a86de907b2) <a id="structFRHAPI__MatchInfo_1a7accea9f13f833a68b7a89a86de907b2"></a>

Unique ID.

#### `public FDateTime `[`Created`](#structFRHAPI__MatchInfo_1a4904d006b5ed11e234e9e4b5a407cc54) <a id="structFRHAPI__MatchInfo_1a4904d006b5ed11e234e9e4b5a407cc54"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchInfo_1a02d38c6dbc7c9e212d97892ca7807792) <a id="structFRHAPI__MatchInfo_1a02d38c6dbc7c9e212d97892ca7807792"></a>

instance-defined custom data

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchInfo_1a1429b2bd18c520ce2ba22a39710c5765) <a id="structFRHAPI__MatchInfo_1a1429b2bd18c520ce2ba22a39710c5765"></a>

true if CustomData_Optional has been set to a value

#### `public TArray< FString > `[`TicketIds_Optional`](#structFRHAPI__MatchInfo_1a38789aaa46dde5136ed9a8a3626bdc0f) <a id="structFRHAPI__MatchInfo_1a38789aaa46dde5136ed9a8a3626bdc0f"></a>

List of tickets that were assigned to this match if created by matchmaking.

#### `public bool `[`TicketIds_IsSet`](#structFRHAPI__MatchInfo_1a91574dfaac67cedbc94f7bf58ed53df9) <a id="structFRHAPI__MatchInfo_1a91574dfaac67cedbc94f7bf58ed53df9"></a>

true if TicketIds_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchInfo_1afd6eb58532faf8990f254b715dda7481)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchInfo_1afd6eb58532faf8990f254b715dda7481"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchInfo_1ad759073eaa762a9f28560aa65bddb3a4)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MatchInfo_1ad759073eaa762a9f28560aa65bddb3a4"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__MatchInfo_1a66a52762273bf0a0cf00646d2cf9af8d)`()` <a id="structFRHAPI__MatchInfo_1a66a52762273bf0a0cf00646d2cf9af8d"></a>

Gets the value of MatchId.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchInfo_1a9e9c91e87e3631e67364b3980fe54969)`() const` <a id="structFRHAPI__MatchInfo_1a9e9c91e87e3631e67364b3980fe54969"></a>

Gets the value of MatchId.

#### `public inline void `[`SetMatchId`](#structFRHAPI__MatchInfo_1a7fa8c3fb93df4717f75bce8b5a5dcb28)`(FString NewValue)` <a id="structFRHAPI__MatchInfo_1a7fa8c3fb93df4717f75bce8b5a5dcb28"></a>

Sets the value of MatchId.

#### `public inline FDateTime & `[`GetCreated`](#structFRHAPI__MatchInfo_1ac8a05141162dd24ca4b5dc133febca82)`()` <a id="structFRHAPI__MatchInfo_1ac8a05141162dd24ca4b5dc133febca82"></a>

Gets the value of Created.

#### `public inline const FDateTime & `[`GetCreated`](#structFRHAPI__MatchInfo_1a66461beaa2aa9191f410da3e0c64ef4e)`() const` <a id="structFRHAPI__MatchInfo_1a66461beaa2aa9191f410da3e0c64ef4e"></a>

Gets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__MatchInfo_1acaaa92ca3e828447393c7e3d54c190eb)`(FDateTime NewValue)` <a id="structFRHAPI__MatchInfo_1acaaa92ca3e828447393c7e3d54c190eb"></a>

Sets the value of Created.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchInfo_1a6e2954b026f341c70bdb5163c5b3df0e)`()` <a id="structFRHAPI__MatchInfo_1a6e2954b026f341c70bdb5163c5b3df0e"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchInfo_1a394a37854dd0c65b9a8f3edd5c911e65)`() const` <a id="structFRHAPI__MatchInfo_1a394a37854dd0c65b9a8f3edd5c911e65"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchInfo_1adc2c79614b27420ca402f7340c9dd3b4)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchInfo_1adc2c79614b27420ca402f7340c9dd3b4"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchInfo_1aadb7b3626c5833f981e3d1897212b85e)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchInfo_1aadb7b3626c5833f981e3d1897212b85e"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchInfo_1a64464356d87f77088e729a3fccccf672)`()` <a id="structFRHAPI__MatchInfo_1a64464356d87f77088e729a3fccccf672"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchInfo_1a1f9c80fc49c3149c3354cf9dd804be5c)`() const` <a id="structFRHAPI__MatchInfo_1a1f9c80fc49c3149c3354cf9dd804be5c"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchInfo_1af52f26531a5d2c64fdaa809ab946ce93)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__MatchInfo_1af52f26531a5d2c64fdaa809ab946ce93"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchInfo_1a7272b7c7f05e68f044146691c6a444b7)`()` <a id="structFRHAPI__MatchInfo_1a7272b7c7f05e68f044146691c6a444b7"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchInfo_1abb678240c130a0a257c19d966d4738ee)`()` <a id="structFRHAPI__MatchInfo_1abb678240c130a0a257c19d966d4738ee"></a>

Gets the value of TicketIds_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchInfo_1a5dd9ca468dc97f8dd8cfe14d9348a3be)`() const` <a id="structFRHAPI__MatchInfo_1a5dd9ca468dc97f8dd8cfe14d9348a3be"></a>

Gets the value of TicketIds_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchInfo_1a3963850ecad78bc34a5ffde423630df7)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__MatchInfo_1a3963850ecad78bc34a5ffde423630df7"></a>

Gets the value of TicketIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTicketIds`](#structFRHAPI__MatchInfo_1aa25cb0d6646abad91133a83b1ea782e0)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__MatchInfo_1aa25cb0d6646abad91133a83b1ea782e0"></a>

Fills OutValue with the value of TicketIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchInfo_1a0ee3ee5d21c2228e687100fa57a3c176)`()` <a id="structFRHAPI__MatchInfo_1a0ee3ee5d21c2228e687100fa57a3c176"></a>

Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchInfo_1aff9e347941364eb85196ad3a7d0634c9)`() const` <a id="structFRHAPI__MatchInfo_1aff9e347941364eb85196ad3a7d0634c9"></a>

Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTicketIds`](#structFRHAPI__MatchInfo_1adf0731f95e38d4c13d0b981a88a91249)`(TArray< FString > NewValue)` <a id="structFRHAPI__MatchInfo_1adf0731f95e38d4c13d0b981a88a91249"></a>

Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true.

#### `public inline void `[`ClearTicketIds`](#structFRHAPI__MatchInfo_1a0222662660481f1f5beeb18231b94b39)`()` <a id="structFRHAPI__MatchInfo_1a0222662660481f1f5beeb18231b94b39"></a>

Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false.

