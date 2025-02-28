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
`public inline int32 & `[`GetPlayersRequired`](#structFRHAPI__BackfillTeam_1a20fbccd6ac563b6cf5c096ed9bac097b)`()` | Gets the value of PlayersRequired.
`public inline const int32 & `[`GetPlayersRequired`](#structFRHAPI__BackfillTeam_1acd62c818112d8f47ffc7439c29fa2c87)`() const` | Gets the value of PlayersRequired.
`public inline void `[`SetPlayersRequired`](#structFRHAPI__BackfillTeam_1aed64aa333297dcaa4240a81c2ab76b99)`(const int32 & NewValue)` | Sets the value of PlayersRequired.
`public inline void `[`SetPlayersRequired`](#structFRHAPI__BackfillTeam_1a0ab0406925dab6f5ca45cd962417d85a)`(int32 && NewValue)` | Sets the value of PlayersRequired using move semantics.
`public inline bool `[`IsPlayersRequiredDefaultValue`](#structFRHAPI__BackfillTeam_1a64293b1e09f0ca637ffba8fae0a371d2)`() const` | Returns true if PlayersRequired matches the default value.
`public inline void `[`SetPlayersRequiredToDefault`](#structFRHAPI__BackfillTeam_1a85eed60c7d5390558f0d38df6dce2eaf)`()` | Sets the value of PlayersRequired to its default
`public inline int32 & `[`GetTeamId`](#structFRHAPI__BackfillTeam_1a013f6105df32df4e2c1d81cd89b3ded3)`()` | Gets the value of TeamId.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__BackfillTeam_1a1ef59cd7bef7254fb8aa149f086c2178)`() const` | Gets the value of TeamId.
`public inline void `[`SetTeamId`](#structFRHAPI__BackfillTeam_1aeea5f2ea122602b3bfe1fe4a53ea6647)`(const int32 & NewValue)` | Sets the value of TeamId.
`public inline void `[`SetTeamId`](#structFRHAPI__BackfillTeam_1ab7bad2a71d7d52bb89b3f108cee52474)`(int32 && NewValue)` | Sets the value of TeamId using move semantics.
`public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__BackfillTeam_1ae4f0e6536aac48c49b9bf2a40c24aaff)`() const` | Returns true if TeamId matches the default value.
`public inline void `[`SetTeamIdToDefault`](#structFRHAPI__BackfillTeam_1ae37f74276a05d9144c1de4d367b1dc89)`()` | Sets the value of TeamId to its default

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

#### `public inline int32 & `[`GetPlayersRequired`](#structFRHAPI__BackfillTeam_1a20fbccd6ac563b6cf5c096ed9bac097b)`()` <a id="structFRHAPI__BackfillTeam_1a20fbccd6ac563b6cf5c096ed9bac097b"></a>

Gets the value of PlayersRequired.

#### `public inline const int32 & `[`GetPlayersRequired`](#structFRHAPI__BackfillTeam_1acd62c818112d8f47ffc7439c29fa2c87)`() const` <a id="structFRHAPI__BackfillTeam_1acd62c818112d8f47ffc7439c29fa2c87"></a>

Gets the value of PlayersRequired.

#### `public inline void `[`SetPlayersRequired`](#structFRHAPI__BackfillTeam_1aed64aa333297dcaa4240a81c2ab76b99)`(const int32 & NewValue)` <a id="structFRHAPI__BackfillTeam_1aed64aa333297dcaa4240a81c2ab76b99"></a>

Sets the value of PlayersRequired.

#### `public inline void `[`SetPlayersRequired`](#structFRHAPI__BackfillTeam_1a0ab0406925dab6f5ca45cd962417d85a)`(int32 && NewValue)` <a id="structFRHAPI__BackfillTeam_1a0ab0406925dab6f5ca45cd962417d85a"></a>

Sets the value of PlayersRequired using move semantics.

#### `public inline bool `[`IsPlayersRequiredDefaultValue`](#structFRHAPI__BackfillTeam_1a64293b1e09f0ca637ffba8fae0a371d2)`() const` <a id="structFRHAPI__BackfillTeam_1a64293b1e09f0ca637ffba8fae0a371d2"></a>

Returns true if PlayersRequired matches the default value.

#### `public inline void `[`SetPlayersRequiredToDefault`](#structFRHAPI__BackfillTeam_1a85eed60c7d5390558f0d38df6dce2eaf)`()` <a id="structFRHAPI__BackfillTeam_1a85eed60c7d5390558f0d38df6dce2eaf"></a>

Sets the value of PlayersRequired to its default

#### `public inline int32 & `[`GetTeamId`](#structFRHAPI__BackfillTeam_1a013f6105df32df4e2c1d81cd89b3ded3)`()` <a id="structFRHAPI__BackfillTeam_1a013f6105df32df4e2c1d81cd89b3ded3"></a>

Gets the value of TeamId.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__BackfillTeam_1a1ef59cd7bef7254fb8aa149f086c2178)`() const` <a id="structFRHAPI__BackfillTeam_1a1ef59cd7bef7254fb8aa149f086c2178"></a>

Gets the value of TeamId.

#### `public inline void `[`SetTeamId`](#structFRHAPI__BackfillTeam_1aeea5f2ea122602b3bfe1fe4a53ea6647)`(const int32 & NewValue)` <a id="structFRHAPI__BackfillTeam_1aeea5f2ea122602b3bfe1fe4a53ea6647"></a>

Sets the value of TeamId.

#### `public inline void `[`SetTeamId`](#structFRHAPI__BackfillTeam_1ab7bad2a71d7d52bb89b3f108cee52474)`(int32 && NewValue)` <a id="structFRHAPI__BackfillTeam_1ab7bad2a71d7d52bb89b3f108cee52474"></a>

Sets the value of TeamId using move semantics.

#### `public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__BackfillTeam_1ae4f0e6536aac48c49b9bf2a40c24aaff)`() const` <a id="structFRHAPI__BackfillTeam_1ae4f0e6536aac48c49b9bf2a40c24aaff"></a>

Returns true if TeamId matches the default value.

#### `public inline void `[`SetTeamIdToDefault`](#structFRHAPI__BackfillTeam_1ae37f74276a05d9144c1de4d367b1dc89)`()` <a id="structFRHAPI__BackfillTeam_1ae37f74276a05d9144c1de4d367b1dc89"></a>

Sets the value of TeamId to its default

