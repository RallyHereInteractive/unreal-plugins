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
`public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1af9a9b4032381c239ef13b3fdba55d613)`()` | Gets the value of InstanceId.
`public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1a70ee641b9251e1df63919fa5aac5b332)`() const` | Gets the value of InstanceId.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1a821254450fc64567cb39b4e68adf3c90)`(const FString & NewValue)` | Sets the value of InstanceId.
`public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1a86c3cb13fcc31f9d15319d88998fbc31)`(FString && NewValue)` | Sets the value of InstanceId using move semantics.
`public inline FORCEINLINE `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a5323cadf47ba2f785917dd120856cb92)`()` | Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a3c77e160d581d30f460c7e14a0d90300)`() const` | Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a0d3bd14a707b3b16ab516220cfdedcb4)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` | Gets the value of AdditionalJoinParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a3e4c656c566760efec41bfe3d8d6dc5c)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` | Fills OutValue with the value of AdditionalJoinParams_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1af1dc40722b77d6321f536fbda1d445d4)`()` | Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1aad955fdb012f112832e6c53a6b2acc91)`() const` | Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a35e838384122d45f0c48bf98544ec708)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` | Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true.
`public inline FORCEINLINE void `[`SetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a97c9568699b059922c8362fad33336b1)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` | Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true using move semantics.
`public inline void `[`ClearAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1ada5b36edf78e65ce6bf9b9fe73d3aa6e)`()` | Clears the value of AdditionalJoinParams_Optional and sets AdditionalJoinParams_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1abcb1d263b4df6a0afd2c6f848289f4e3)`()` | Gets the value of Teams_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1a56f96e08216cd74a95b8d5bfd682d0a6)`() const` | Gets the value of Teams_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1a583f294f61048f78ab94597f00f22d52)`(const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & DefaultValue) const` | Gets the value of Teams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1a92efd5201a56fa793441c89bc669884c)`(TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & OutValue) const` | Fills OutValue with the value of Teams_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > * `[`GetTeamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1a2b64504712cdcb7f9606edb6ed0b8b3a)`()` | Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > * `[`GetTeamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1aa60b848ae38cf19ecf502dbf2c31bd6e)`() const` | Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__UpdateBackfillRequest_1aded648256887a561366e71018bda5495)`(const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & NewValue)` | Sets the value of Teams_Optional and also sets Teams_IsSet to true.
`public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__UpdateBackfillRequest_1a2c521797418cd4cd1cc40f756b19e674)`(TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > && NewValue)` | Sets the value of Teams_Optional and also sets Teams_IsSet to true using move semantics.
`public inline void `[`ClearTeams`](#structFRHAPI__UpdateBackfillRequest_1ab456151a06c9adfe1258778fbadaf412)`()` | Clears the value of Teams_Optional and sets Teams_IsSet to false.

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

#### `public inline FORCEINLINE FString & `[`GetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1af9a9b4032381c239ef13b3fdba55d613)`()` <a id="structFRHAPI__UpdateBackfillRequest_1af9a9b4032381c239ef13b3fdba55d613"></a>

Gets the value of InstanceId.

#### `public inline FORCEINLINE const FString & `[`GetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1a70ee641b9251e1df63919fa5aac5b332)`() const` <a id="structFRHAPI__UpdateBackfillRequest_1a70ee641b9251e1df63919fa5aac5b332"></a>

Gets the value of InstanceId.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1a821254450fc64567cb39b4e68adf3c90)`(const FString & NewValue)` <a id="structFRHAPI__UpdateBackfillRequest_1a821254450fc64567cb39b4e68adf3c90"></a>

Sets the value of InstanceId.

#### `public inline FORCEINLINE void `[`SetInstanceId`](#structFRHAPI__UpdateBackfillRequest_1a86c3cb13fcc31f9d15319d88998fbc31)`(FString && NewValue)` <a id="structFRHAPI__UpdateBackfillRequest_1a86c3cb13fcc31f9d15319d88998fbc31"></a>

Sets the value of InstanceId using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a5323cadf47ba2f785917dd120856cb92)`()` <a id="structFRHAPI__UpdateBackfillRequest_1a5323cadf47ba2f785917dd120856cb92"></a>

Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a3c77e160d581d30f460c7e14a0d90300)`() const` <a id="structFRHAPI__UpdateBackfillRequest_1a3c77e160d581d30f460c7e14a0d90300"></a>

Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a0d3bd14a707b3b16ab516220cfdedcb4)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` <a id="structFRHAPI__UpdateBackfillRequest_1a0d3bd14a707b3b16ab516220cfdedcb4"></a>

Gets the value of AdditionalJoinParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a3e4c656c566760efec41bfe3d8d6dc5c)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` <a id="structFRHAPI__UpdateBackfillRequest_1a3e4c656c566760efec41bfe3d8d6dc5c"></a>

Fills OutValue with the value of AdditionalJoinParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1af1dc40722b77d6321f536fbda1d445d4)`()` <a id="structFRHAPI__UpdateBackfillRequest_1af1dc40722b77d6321f536fbda1d445d4"></a>

Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1aad955fdb012f112832e6c53a6b2acc91)`() const` <a id="structFRHAPI__UpdateBackfillRequest_1aad955fdb012f112832e6c53a6b2acc91"></a>

Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a35e838384122d45f0c48bf98544ec708)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` <a id="structFRHAPI__UpdateBackfillRequest_1a35e838384122d45f0c48bf98544ec708"></a>

Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1a97c9568699b059922c8362fad33336b1)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` <a id="structFRHAPI__UpdateBackfillRequest_1a97c9568699b059922c8362fad33336b1"></a>

Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true using move semantics.

#### `public inline void `[`ClearAdditionalJoinParams`](#structFRHAPI__UpdateBackfillRequest_1ada5b36edf78e65ce6bf9b9fe73d3aa6e)`()` <a id="structFRHAPI__UpdateBackfillRequest_1ada5b36edf78e65ce6bf9b9fe73d3aa6e"></a>

Clears the value of AdditionalJoinParams_Optional and sets AdditionalJoinParams_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1abcb1d263b4df6a0afd2c6f848289f4e3)`()` <a id="structFRHAPI__UpdateBackfillRequest_1abcb1d263b4df6a0afd2c6f848289f4e3"></a>

Gets the value of Teams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1a56f96e08216cd74a95b8d5bfd682d0a6)`() const` <a id="structFRHAPI__UpdateBackfillRequest_1a56f96e08216cd74a95b8d5bfd682d0a6"></a>

Gets the value of Teams_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1a583f294f61048f78ab94597f00f22d52)`(const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & DefaultValue) const` <a id="structFRHAPI__UpdateBackfillRequest_1a583f294f61048f78ab94597f00f22d52"></a>

Gets the value of Teams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTeams`](#structFRHAPI__UpdateBackfillRequest_1a92efd5201a56fa793441c89bc669884c)`(TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & OutValue) const` <a id="structFRHAPI__UpdateBackfillRequest_1a92efd5201a56fa793441c89bc669884c"></a>

Fills OutValue with the value of Teams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > * `[`GetTeamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1a2b64504712cdcb7f9606edb6ed0b8b3a)`()` <a id="structFRHAPI__UpdateBackfillRequest_1a2b64504712cdcb7f9606edb6ed0b8b3a"></a>

Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > * `[`GetTeamsOrNull`](#structFRHAPI__UpdateBackfillRequest_1aa60b848ae38cf19ecf502dbf2c31bd6e)`() const` <a id="structFRHAPI__UpdateBackfillRequest_1aa60b848ae38cf19ecf502dbf2c31bd6e"></a>

Returns a pointer to Teams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__UpdateBackfillRequest_1aded648256887a561366e71018bda5495)`(const TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > & NewValue)` <a id="structFRHAPI__UpdateBackfillRequest_1aded648256887a561366e71018bda5495"></a>

Sets the value of Teams_Optional and also sets Teams_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTeams`](#structFRHAPI__UpdateBackfillRequest_1a2c521797418cd4cd1cc40f756b19e674)`(TArray< `[`FRHAPI_BackfillTeam`](RHAPI_BackfillTeam.md#structFRHAPI__BackfillTeam)` > && NewValue)` <a id="structFRHAPI__UpdateBackfillRequest_1a2c521797418cd4cd1cc40f756b19e674"></a>

Sets the value of Teams_Optional and also sets Teams_IsSet to true using move semantics.

#### `public inline void `[`ClearTeams`](#structFRHAPI__UpdateBackfillRequest_1ab456151a06c9adfe1258778fbadaf412)`()` <a id="structFRHAPI__UpdateBackfillRequest_1ab456151a06c9adfe1258778fbadaf412"></a>

Clears the value of Teams_Optional and sets Teams_IsSet to false.

