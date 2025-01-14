---
title: RHAPI_UpdateBackfillRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_UpdateBackfillRequest`](#structFRHAPI__UpdateBackfillRequest) | 

## struct `FRHAPI_UpdateBackfillRequest` <a id="structFRHAPI__UpdateBackfillRequest"></a>

```
struct FRHAPI_UpdateBackfillRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`InstanceId`](#structFRHAPI__UpdateBackfillRequest_1acbaa3be50199297dc3d82ed419a938d2) | The instance ID for this backfill request.
`public `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` `[`AdditionalJoinParams_Optional`](#structFRHAPI__UpdateBackfillRequest_1a8733cb6e88822464ff00906f4343479b) | Additional fields put on the matchmaking ticket for open match to search with (see [https://openmatch.dev/site/docs/reference/api/#searchfields](https://openmatch.dev/site/docs/reference/api/#searchfields))
`public bool `[`AdditionalJoinParams_IsSet`](#structFRHAPI__UpdateBackfillRequest_1a5297552fe2ee8c2eb9f52dd6a8d4b747) | true if AdditionalJoinParams_Optional has been set to a value
`public TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > `[`Teams_Optional`](#structFRHAPI__UpdateBackfillRequest_1a0bcca01fbb64b7eb5cc8c6348f9b5a39) | The teams and number of players that need to be backfilled. Leaving this out (or supplying an empty list) is treated as no players are currently required.
`public bool `[`Teams_IsSet`](#structFRHAPI__UpdateBackfillRequest_1a868168ce21f43fa6d23f1cedf2780215) | true if Teams_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__UpdateBackfillRequest_1aa644f87e5d515dd2903e6b4c9d38c17c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__UpdateBackfillRequest_1a4c8a98146013907b9f2f3d55641be233)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1a15e3cc6ede24f6cda65e16d8e5f68320)`()` | Gets the value of InstanceId.
`public inline const FString & `[`GetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1a0d1c242309c866bff37f0b325b091ba4)`() const` | Gets the value of InstanceId.
`public inline void `[`SetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1a10a4b8eeb324c2c1f2d2b59f2c048f9f)`(const FString & NewValue)` | Sets the value of InstanceId.
`public inline void `[`SetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1a79f190409c36825e1a86413635f94a74)`(FString && NewValue)` | Sets the value of InstanceId using move semantics.
`public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a9629f62f82862773d30b30ff8dc79a32)`()` | Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a97d3a159ffde289a51637b24332ca4cf)`() const` | Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a511042203e41406ffac2961fabf35717)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` | Gets the value of AdditionalJoinParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a54d99e91ca2522129b6f447ae9e85384)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` | Fills OutValue with the value of AdditionalJoinParams_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1afc819bd4cee388a5ac9177805efefaf2)`()` | Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1abeedd446ab88f492d9ed56438c784885)`() const` | Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a0d0936734139d4b7c4a30e9aa3102338)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` | Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true.
`public inline void `[`SetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a8a3dfcbf1384443b3495817d09b058bd)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` | Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true using move semantics.
`public inline void `[`ClearAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1ada5b36edf78e65ce6bf9b9fe73d3aa6e)`()` | Clears the value of AdditionalJoinParams_Optional and sets AdditionalJoinParams_IsSet to false.
`public inline bool `[`IsAdditionalJoinParamsSet`](#structFRHAPI__UpdateBackfillRequest_1aa25ef6b8ccf069baf3953b88432e60a0)`() const` | Checks whether AdditionalJoinParams_Optional has been set.
`public inline TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1a72af8ad72ca129568607b6664fe434ab)`()` | Gets the value of Teams_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1a76b25ebf70eedb801bdb9de64622a5ce)`() const` | Gets the value of Teams_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1a0a95ca97a94d606486b9e707af32cdd6)`(const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & DefaultValue) const` | Gets the value of Teams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1af5c4a2cb761f4c69f676cf3b1ab9335a)`(TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & OutValue) const` | Fills OutValue with the value of Teams_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > * `[`GetTeamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1ae04ea2d580e150f9be94a67548359066)`()` | Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > * `[`GetTeamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1aa327b8870503a21b611dba88830b6166)`() const` | Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTeams`](#structFRHAPI__UpdateBackfillRequest_1afca9fb3673d1ace5d161e3dd6ddac67c)`(const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & NewValue)` | Sets the value of Teams_Optional and also sets Teams_IsSet to true.
`public inline void `[`SetTeams`](#structFRHAPI__UpdateBackfillRequest_1a0235e71cb6c9fdfefe20335715a61010)`(TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > && NewValue)` | Sets the value of Teams_Optional and also sets Teams_IsSet to true using move semantics.
`public inline void `[`ClearTeams`](#structFRHAPI__UpdateBackfillRequest_1ab456151a06c9adfe1258778fbadaf412)`()` | Clears the value of Teams_Optional and sets Teams_IsSet to false.
`public inline bool `[`IsTeamsSet`](#structFRHAPI__UpdateBackfillRequest_1a849a3d349cb99dd90c1268da5899e737)`() const` | Checks whether Teams_Optional has been set.

### Members

#### `public FString `[`InstanceId`](#structFRHAPI__UpdateBackfillRequest_1acbaa3be50199297dc3d82ed419a938d2) <a id="structFRHAPI__UpdateBackfillRequest_1acbaa3be50199297dc3d82ed419a938d2"></a>

The instance ID for this backfill request.

#### `public `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` `[`AdditionalJoinParams_Optional`](#structFRHAPI__UpdateBackfillRequest_1a8733cb6e88822464ff00906f4343479b) <a id="structFRHAPI__UpdateBackfillRequest_1a8733cb6e88822464ff00906f4343479b"></a>

Additional fields put on the matchmaking ticket for open match to search with (see [https://openmatch.dev/site/docs/reference/api/#searchfields](https://openmatch.dev/site/docs/reference/api/#searchfields))

#### `public bool `[`AdditionalJoinParams_IsSet`](#structFRHAPI__UpdateBackfillRequest_1a5297552fe2ee8c2eb9f52dd6a8d4b747) <a id="structFRHAPI__UpdateBackfillRequest_1a5297552fe2ee8c2eb9f52dd6a8d4b747"></a>

true if AdditionalJoinParams_Optional has been set to a value

#### `public TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > `[`Teams_Optional`](#structFRHAPI__UpdateBackfillRequest_1a0bcca01fbb64b7eb5cc8c6348f9b5a39) <a id="structFRHAPI__UpdateBackfillRequest_1a0bcca01fbb64b7eb5cc8c6348f9b5a39"></a>

The teams and number of players that need to be backfilled. Leaving this out (or supplying an empty list) is treated as no players are currently required.

#### `public bool `[`Teams_IsSet`](#structFRHAPI__UpdateBackfillRequest_1a868168ce21f43fa6d23f1cedf2780215) <a id="structFRHAPI__UpdateBackfillRequest_1a868168ce21f43fa6d23f1cedf2780215"></a>

true if Teams_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__UpdateBackfillRequest_1aa644f87e5d515dd2903e6b4c9d38c17c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__UpdateBackfillRequest_1aa644f87e5d515dd2903e6b4c9d38c17c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__UpdateBackfillRequest_1a4c8a98146013907b9f2f3d55641be233)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__UpdateBackfillRequest_1a4c8a98146013907b9f2f3d55641be233"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1a15e3cc6ede24f6cda65e16d8e5f68320)`()` <a id="structFRHAPI__UpdateBackfillRequest_1a15e3cc6ede24f6cda65e16d8e5f68320"></a>

Gets the value of InstanceId.

#### `public inline const FString & `[`GetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1a0d1c242309c866bff37f0b325b091ba4)`() const` <a id="structFRHAPI__UpdateBackfillRequest_1a0d1c242309c866bff37f0b325b091ba4"></a>

Gets the value of InstanceId.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1a10a4b8eeb324c2c1f2d2b59f2c048f9f)`(const FString & NewValue)` <a id="structFRHAPI__UpdateBackfillRequest_1a10a4b8eeb324c2c1f2d2b59f2c048f9f"></a>

Sets the value of InstanceId.

#### `public inline void `[`SetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1a79f190409c36825e1a86413635f94a74)`(FString && NewValue)` <a id="structFRHAPI__UpdateBackfillRequest_1a79f190409c36825e1a86413635f94a74"></a>

Sets the value of InstanceId using move semantics.

#### `public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a9629f62f82862773d30b30ff8dc79a32)`()` <a id="structFRHAPI__UpdateBackfillRequest_1a9629f62f82862773d30b30ff8dc79a32"></a>

Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a97d3a159ffde289a51637b24332ca4cf)`() const` <a id="structFRHAPI__UpdateBackfillRequest_1a97d3a159ffde289a51637b24332ca4cf"></a>

Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a511042203e41406ffac2961fabf35717)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` <a id="structFRHAPI__UpdateBackfillRequest_1a511042203e41406ffac2961fabf35717"></a>

Gets the value of AdditionalJoinParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a54d99e91ca2522129b6f447ae9e85384)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` <a id="structFRHAPI__UpdateBackfillRequest_1a54d99e91ca2522129b6f447ae9e85384"></a>

Fills OutValue with the value of AdditionalJoinParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1afc819bd4cee388a5ac9177805efefaf2)`()` <a id="structFRHAPI__UpdateBackfillRequest_1afc819bd4cee388a5ac9177805efefaf2"></a>

Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1abeedd446ab88f492d9ed56438c784885)`() const` <a id="structFRHAPI__UpdateBackfillRequest_1abeedd446ab88f492d9ed56438c784885"></a>

Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a0d0936734139d4b7c4a30e9aa3102338)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` <a id="structFRHAPI__UpdateBackfillRequest_1a0d0936734139d4b7c4a30e9aa3102338"></a>

Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true.

#### `public inline void `[`SetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a8a3dfcbf1384443b3495817d09b058bd)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` <a id="structFRHAPI__UpdateBackfillRequest_1a8a3dfcbf1384443b3495817d09b058bd"></a>

Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true using move semantics.

#### `public inline void `[`ClearAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1ada5b36edf78e65ce6bf9b9fe73d3aa6e)`()` <a id="structFRHAPI__UpdateBackfillRequest_1ada5b36edf78e65ce6bf9b9fe73d3aa6e"></a>

Clears the value of AdditionalJoinParams_Optional and sets AdditionalJoinParams_IsSet to false.

#### `public inline bool `[`IsAdditionalJoinParamsSet`](#structFRHAPI__UpdateBackfillRequest_1aa25ef6b8ccf069baf3953b88432e60a0)`() const` <a id="structFRHAPI__UpdateBackfillRequest_1aa25ef6b8ccf069baf3953b88432e60a0"></a>

Checks whether AdditionalJoinParams_Optional has been set.

#### `public inline TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1a72af8ad72ca129568607b6664fe434ab)`()` <a id="structFRHAPI__UpdateBackfillRequest_1a72af8ad72ca129568607b6664fe434ab"></a>

Gets the value of Teams_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1a76b25ebf70eedb801bdb9de64622a5ce)`() const` <a id="structFRHAPI__UpdateBackfillRequest_1a76b25ebf70eedb801bdb9de64622a5ce"></a>

Gets the value of Teams_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1a0a95ca97a94d606486b9e707af32cdd6)`(const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & DefaultValue) const` <a id="structFRHAPI__UpdateBackfillRequest_1a0a95ca97a94d606486b9e707af32cdd6"></a>

Gets the value of Teams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1af5c4a2cb761f4c69f676cf3b1ab9335a)`(TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & OutValue) const` <a id="structFRHAPI__UpdateBackfillRequest_1af5c4a2cb761f4c69f676cf3b1ab9335a"></a>

Fills OutValue with the value of Teams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > * `[`GetTeamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1ae04ea2d580e150f9be94a67548359066)`()` <a id="structFRHAPI__UpdateBackfillRequest_1ae04ea2d580e150f9be94a67548359066"></a>

Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > * `[`GetTeamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1aa327b8870503a21b611dba88830b6166)`() const` <a id="structFRHAPI__UpdateBackfillRequest_1aa327b8870503a21b611dba88830b6166"></a>

Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTeams`](#structFRHAPI__UpdateBackfillRequest_1afca9fb3673d1ace5d161e3dd6ddac67c)`(const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & NewValue)` <a id="structFRHAPI__UpdateBackfillRequest_1afca9fb3673d1ace5d161e3dd6ddac67c"></a>

Sets the value of Teams_Optional and also sets Teams_IsSet to true.

#### `public inline void `[`SetTeams`](#structFRHAPI__UpdateBackfillRequest_1a0235e71cb6c9fdfefe20335715a61010)`(TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > && NewValue)` <a id="structFRHAPI__UpdateBackfillRequest_1a0235e71cb6c9fdfefe20335715a61010"></a>

Sets the value of Teams_Optional and also sets Teams_IsSet to true using move semantics.

#### `public inline void `[`ClearTeams`](#structFRHAPI__UpdateBackfillRequest_1ab456151a06c9adfe1258778fbadaf412)`()` <a id="structFRHAPI__UpdateBackfillRequest_1ab456151a06c9adfe1258778fbadaf412"></a>

Clears the value of Teams_Optional and sets Teams_IsSet to false.

#### `public inline bool `[`IsTeamsSet`](#structFRHAPI__UpdateBackfillRequest_1a849a3d349cb99dd90c1268da5899e737)`() const` <a id="structFRHAPI__UpdateBackfillRequest_1a849a3d349cb99dd90c1268da5899e737"></a>

Checks whether Teams_Optional has been set.

