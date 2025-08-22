---
title: RHAPI_BackfillTeam
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BackfillTeam`](#structFRHAPI__BackfillTeam) | 

## struct `FRHAPI_BackfillTeam` <a id="structFRHAPI__BackfillTeam"></a>

```
struct FRHAPI_BackfillTeam
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`PlayersRequired`](#structFRHAPI__BackfillTeam_1a72823c33bcf556c5082c0b332f17fc78) | The number of players we want to backfill.
`public int32 `[`TeamId`](#structFRHAPI__BackfillTeam_1afcd2c20abecc7b477e720e5acd45a714) | Id for the team that requires backfilled players.
`public virtual bool `[`FromJson`](#structFRHAPI__BackfillTeam_1ad85782569b80df848b47ce7b407ee409)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BackfillTeam_1accf1e9cfbadfa4061aedf8984c8be2cb)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE int32 & `[`GetPlayersRequired`](#structFRHAPI__BackfillTeam_1af7ddff8c96e8ff226a255b62facee1d6)`()` | Gets the value of PlayersRequired.
`public inline FORCEINLINE const int32 & `[`GetPlayersRequired`](#structFRHAPI__BackfillTeam_1a016a226783954b02640e8b7e1d63b912)`() const` | Gets the value of PlayersRequired.
`public inline FORCEINLINE void `[`SetPlayersRequired`](#structFRHAPI__BackfillTeam_1a225f03e9905b1e5b114a2a9724b4d8b1)`(const int32 & NewValue)` | Sets the value of PlayersRequired.
`public inline FORCEINLINE void `[`SetPlayersRequired`](#structFRHAPI__BackfillTeam_1a8d36cb8539213ba6901b029cceb94ddc)`(int32 && NewValue)` | Sets the value of PlayersRequired using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PlayersRequired`](#structFRHAPI__BackfillTeam_1a08b929457b6b3557ececcf1a93deb882)`()` | Returns the default value of PlayersRequired.
`public inline FORCEINLINE int32 & `[`GetTeamId`](#structFRHAPI__BackfillTeam_1ac468f9eaf3eba6e57f09e68a7d6f3b46)`()` | Gets the value of TeamId.
`public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__BackfillTeam_1a82ab526169b040d70396cb9a3c19b492)`() const` | Gets the value of TeamId.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__BackfillTeam_1ae54282805eeb5b3addd1b7f999dd7f53)`(const int32 & NewValue)` | Sets the value of TeamId.
`public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__BackfillTeam_1a94f8d46cc7e3226517785938f23dddaf)`(int32 && NewValue)` | Sets the value of TeamId using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_TeamId`](#structFRHAPI__BackfillTeam_1a5a4e36d996cbe8d8a3eb774d4d167b6c)`()` | Returns the default value of TeamId.

### Members

#### `public int32 `[`PlayersRequired`](#structFRHAPI__BackfillTeam_1a72823c33bcf556c5082c0b332f17fc78) <a id="structFRHAPI__BackfillTeam_1a72823c33bcf556c5082c0b332f17fc78"></a>

The number of players we want to backfill.

#### `public int32 `[`TeamId`](#structFRHAPI__BackfillTeam_1afcd2c20abecc7b477e720e5acd45a714) <a id="structFRHAPI__BackfillTeam_1afcd2c20abecc7b477e720e5acd45a714"></a>

Id for the team that requires backfilled players.

#### `public virtual bool `[`FromJson`](#structFRHAPI__BackfillTeam_1ad85782569b80df848b47ce7b407ee409)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BackfillTeam_1ad85782569b80df848b47ce7b407ee409"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BackfillTeam_1accf1e9cfbadfa4061aedf8984c8be2cb)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__BackfillTeam_1accf1e9cfbadfa4061aedf8984c8be2cb"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE int32 & `[`GetPlayersRequired`](#structFRHAPI__BackfillTeam_1af7ddff8c96e8ff226a255b62facee1d6)`()` <a id="structFRHAPI__BackfillTeam_1af7ddff8c96e8ff226a255b62facee1d6"></a>

Gets the value of PlayersRequired.

#### `public inline FORCEINLINE const int32 & `[`GetPlayersRequired`](#structFRHAPI__BackfillTeam_1a016a226783954b02640e8b7e1d63b912)`() const` <a id="structFRHAPI__BackfillTeam_1a016a226783954b02640e8b7e1d63b912"></a>

Gets the value of PlayersRequired.

#### `public inline FORCEINLINE void `[`SetPlayersRequired`](#structFRHAPI__BackfillTeam_1a225f03e9905b1e5b114a2a9724b4d8b1)`(const int32 & NewValue)` <a id="structFRHAPI__BackfillTeam_1a225f03e9905b1e5b114a2a9724b4d8b1"></a>

Sets the value of PlayersRequired.

#### `public inline FORCEINLINE void `[`SetPlayersRequired`](#structFRHAPI__BackfillTeam_1a8d36cb8539213ba6901b029cceb94ddc)`(int32 && NewValue)` <a id="structFRHAPI__BackfillTeam_1a8d36cb8539213ba6901b029cceb94ddc"></a>

Sets the value of PlayersRequired using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PlayersRequired`](#structFRHAPI__BackfillTeam_1a08b929457b6b3557ececcf1a93deb882)`()` <a id="structFRHAPI__BackfillTeam_1a08b929457b6b3557ececcf1a93deb882"></a>

Returns the default value of PlayersRequired.

#### `public inline FORCEINLINE int32 & `[`GetTeamId`](#structFRHAPI__BackfillTeam_1ac468f9eaf3eba6e57f09e68a7d6f3b46)`()` <a id="structFRHAPI__BackfillTeam_1ac468f9eaf3eba6e57f09e68a7d6f3b46"></a>

Gets the value of TeamId.

#### `public inline FORCEINLINE const int32 & `[`GetTeamId`](#structFRHAPI__BackfillTeam_1a82ab526169b040d70396cb9a3c19b492)`() const` <a id="structFRHAPI__BackfillTeam_1a82ab526169b040d70396cb9a3c19b492"></a>

Gets the value of TeamId.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__BackfillTeam_1ae54282805eeb5b3addd1b7f999dd7f53)`(const int32 & NewValue)` <a id="structFRHAPI__BackfillTeam_1ae54282805eeb5b3addd1b7f999dd7f53"></a>

Sets the value of TeamId.

#### `public inline FORCEINLINE void `[`SetTeamId`](#structFRHAPI__BackfillTeam_1a94f8d46cc7e3226517785938f23dddaf)`(int32 && NewValue)` <a id="structFRHAPI__BackfillTeam_1a94f8d46cc7e3226517785938f23dddaf"></a>

Sets the value of TeamId using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_TeamId`](#structFRHAPI__BackfillTeam_1a5a4e36d996cbe8d8a3eb774d4d167b6c)`()` <a id="structFRHAPI__BackfillTeam_1a5a4e36d996cbe8d8a3eb774d4d167b6c"></a>

Returns the default value of TeamId.

