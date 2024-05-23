# group `RHAPI_BackfillTeam` <a id="group__RHAPI__BackfillTeam"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__BackfillTeam_1abe15095b8b814cfcb566ac1dbe8632e6)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BackfillTeam_1a1ec758b6cbab7517c5d34015a65c08ec)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetPlayersRequired`](#structFRHAPI__BackfillTeam_1a253eeecedf2f345cc05cbbfc75b6f9b1)`()` | Gets the value of PlayersRequired.
`public inline const int32 & `[`GetPlayersRequired`](#structFRHAPI__BackfillTeam_1a57c08eca078b8af22a2f17efda5a35c8)`() const` | Gets the value of PlayersRequired.
`public inline void `[`SetPlayersRequired`](#structFRHAPI__BackfillTeam_1aed64aa333297dcaa4240a81c2ab76b99)`(const int32 & NewValue)` | Sets the value of PlayersRequired.
`public inline void `[`SetPlayersRequired`](#structFRHAPI__BackfillTeam_1a0ab0406925dab6f5ca45cd962417d85a)`(int32 && NewValue)` | Sets the value of PlayersRequired using move semantics.
`public inline bool `[`IsPlayersRequiredDefaultValue`](#structFRHAPI__BackfillTeam_1a64293b1e09f0ca637ffba8fae0a371d2)`() const` | Returns true if PlayersRequired matches the default value.
`public inline void `[`SetPlayersRequiredToDefault`](#structFRHAPI__BackfillTeam_1a85eed60c7d5390558f0d38df6dce2eaf)`()` | Sets the value of PlayersRequired to its default
`public inline int32 & `[`GetTeamId`](#structFRHAPI__BackfillTeam_1aa4d27f9fa4149a32be552632ca2d0972)`()` | Gets the value of TeamId.
`public inline const int32 & `[`GetTeamId`](#structFRHAPI__BackfillTeam_1a7eed8d80b3b8a21939eeae5abc99cb17)`() const` | Gets the value of TeamId.
`public inline void `[`SetTeamId`](#structFRHAPI__BackfillTeam_1aeea5f2ea122602b3bfe1fe4a53ea6647)`(const int32 & NewValue)` | Sets the value of TeamId.
`public inline void `[`SetTeamId`](#structFRHAPI__BackfillTeam_1ab7bad2a71d7d52bb89b3f108cee52474)`(int32 && NewValue)` | Sets the value of TeamId using move semantics.
`public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__BackfillTeam_1ae4f0e6536aac48c49b9bf2a40c24aaff)`() const` | Returns true if TeamId matches the default value.
`public inline void `[`SetTeamIdToDefault`](#structFRHAPI__BackfillTeam_1ae37f74276a05d9144c1de4d367b1dc89)`()` | Sets the value of TeamId to its default

### Members

#### `public int32 `[`PlayersRequired`](#structFRHAPI__BackfillTeam_1a72823c33bcf556c5082c0b332f17fc78) <a id="structFRHAPI__BackfillTeam_1a72823c33bcf556c5082c0b332f17fc78"></a>

The number of players we want to backfill.

#### `public int32 `[`TeamId`](#structFRHAPI__BackfillTeam_1afcd2c20abecc7b477e720e5acd45a714) <a id="structFRHAPI__BackfillTeam_1afcd2c20abecc7b477e720e5acd45a714"></a>

Id for the team that requires backfilled players.

#### `public virtual bool `[`FromJson`](#structFRHAPI__BackfillTeam_1abe15095b8b814cfcb566ac1dbe8632e6)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BackfillTeam_1abe15095b8b814cfcb566ac1dbe8632e6"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BackfillTeam_1a1ec758b6cbab7517c5d34015a65c08ec)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__BackfillTeam_1a1ec758b6cbab7517c5d34015a65c08ec"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetPlayersRequired`](#structFRHAPI__BackfillTeam_1a253eeecedf2f345cc05cbbfc75b6f9b1)`()` <a id="structFRHAPI__BackfillTeam_1a253eeecedf2f345cc05cbbfc75b6f9b1"></a>

Gets the value of PlayersRequired.

#### `public inline const int32 & `[`GetPlayersRequired`](#structFRHAPI__BackfillTeam_1a57c08eca078b8af22a2f17efda5a35c8)`() const` <a id="structFRHAPI__BackfillTeam_1a57c08eca078b8af22a2f17efda5a35c8"></a>

Gets the value of PlayersRequired.

#### `public inline void `[`SetPlayersRequired`](#structFRHAPI__BackfillTeam_1aed64aa333297dcaa4240a81c2ab76b99)`(const int32 & NewValue)` <a id="structFRHAPI__BackfillTeam_1aed64aa333297dcaa4240a81c2ab76b99"></a>

Sets the value of PlayersRequired.

#### `public inline void `[`SetPlayersRequired`](#structFRHAPI__BackfillTeam_1a0ab0406925dab6f5ca45cd962417d85a)`(int32 && NewValue)` <a id="structFRHAPI__BackfillTeam_1a0ab0406925dab6f5ca45cd962417d85a"></a>

Sets the value of PlayersRequired using move semantics.

#### `public inline bool `[`IsPlayersRequiredDefaultValue`](#structFRHAPI__BackfillTeam_1a64293b1e09f0ca637ffba8fae0a371d2)`() const` <a id="structFRHAPI__BackfillTeam_1a64293b1e09f0ca637ffba8fae0a371d2"></a>

Returns true if PlayersRequired matches the default value.

#### `public inline void `[`SetPlayersRequiredToDefault`](#structFRHAPI__BackfillTeam_1a85eed60c7d5390558f0d38df6dce2eaf)`()` <a id="structFRHAPI__BackfillTeam_1a85eed60c7d5390558f0d38df6dce2eaf"></a>

Sets the value of PlayersRequired to its default

#### `public inline int32 & `[`GetTeamId`](#structFRHAPI__BackfillTeam_1aa4d27f9fa4149a32be552632ca2d0972)`()` <a id="structFRHAPI__BackfillTeam_1aa4d27f9fa4149a32be552632ca2d0972"></a>

Gets the value of TeamId.

#### `public inline const int32 & `[`GetTeamId`](#structFRHAPI__BackfillTeam_1a7eed8d80b3b8a21939eeae5abc99cb17)`() const` <a id="structFRHAPI__BackfillTeam_1a7eed8d80b3b8a21939eeae5abc99cb17"></a>

Gets the value of TeamId.

#### `public inline void `[`SetTeamId`](#structFRHAPI__BackfillTeam_1aeea5f2ea122602b3bfe1fe4a53ea6647)`(const int32 & NewValue)` <a id="structFRHAPI__BackfillTeam_1aeea5f2ea122602b3bfe1fe4a53ea6647"></a>

Sets the value of TeamId.

#### `public inline void `[`SetTeamId`](#structFRHAPI__BackfillTeam_1ab7bad2a71d7d52bb89b3f108cee52474)`(int32 && NewValue)` <a id="structFRHAPI__BackfillTeam_1ab7bad2a71d7d52bb89b3f108cee52474"></a>

Sets the value of TeamId using move semantics.

#### `public inline bool `[`IsTeamIdDefaultValue`](#structFRHAPI__BackfillTeam_1ae4f0e6536aac48c49b9bf2a40c24aaff)`() const` <a id="structFRHAPI__BackfillTeam_1ae4f0e6536aac48c49b9bf2a40c24aaff"></a>

Returns true if TeamId matches the default value.

#### `public inline void `[`SetTeamIdToDefault`](#structFRHAPI__BackfillTeam_1ae37f74276a05d9144c1de4d367b1dc89)`()` <a id="structFRHAPI__BackfillTeam_1ae37f74276a05d9144c1de4d367b1dc89"></a>

Sets the value of TeamId to its default

