---
title: RHAPI_TicketData
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_TicketData`](#structFRHAPI__TicketData) | 

## struct `FRHAPI_TicketData` <a id="structFRHAPI__TicketData"></a>

```
struct FRHAPI_TicketData
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`TicketId`](#structFRHAPI__TicketData_1a3ed37cfc00c58530ec3dac53cbf345b5) | Unique ID for this ticket.
`public TArray< FGuid > `[`PlayerUuids_Optional`](#structFRHAPI__TicketData_1aadb9adf8f209c5e1fce974f581d61784) | List of Player UUIDS that are associated with this ticket.
`public bool `[`PlayerUuids_IsSet`](#structFRHAPI__TicketData_1a87979d4776e43d2ece7e48f98058b8e5) | true if PlayerUuids_Optional has been set to a value
`public FDateTime `[`QueueJoinDatetime`](#structFRHAPI__TicketData_1aa91ab4c3b060211c95c657cfb9b82642) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public FString `[`RegionId`](#structFRHAPI__TicketData_1a62b6168002c9be33e8bbc9de1ba910b9) | Which region this ticket was created for.
`public FString `[`QueueId`](#structFRHAPI__TicketData_1aa996c9517bda8eb803934e177a3dbf57) | Which queue was used to create this ticket.
`public TArray< FString > `[`ProfileIds`](#structFRHAPI__TicketData_1ad495189191c3863307df160562c8fdad) | List of profiles that were being considered for this ticket.
`public `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` `[`AdditionalJoinParams_Optional`](#structFRHAPI__TicketData_1afb43fc227461efe50ed520720d9a5ab1) | Additional join params specified on queue join.
`public bool `[`AdditionalJoinParams_IsSet`](#structFRHAPI__TicketData_1a5049238a1b6be89571b0a874642ec4d9) | true if AdditionalJoinParams_Optional has been set to a value
`public TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > `[`RankData_Optional`](#structFRHAPI__TicketData_1a17b160297ed976f0e281e8965e3f19b3) | List of rank data on the ticket.
`public bool `[`RankData_IsSet`](#structFRHAPI__TicketData_1af7beadc7517c92c0fe706d91e0e7432f) | true if RankData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__TicketData_1aa6543a65f2b9581b045757d92831a62a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__TicketData_1a492cce8409d30329986dbe01e1bb564a)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetTicketId`](#structFRHAPI__TicketData_1a2a8e9c89552e1ecb4cbf36227724ce7f)`()` | Gets the value of TicketId.
`public inline const FString & `[`GetTicketId`](#structFRHAPI__TicketData_1abce8734ce96c8e718726f319664d15fa)`() const` | Gets the value of TicketId.
`public inline void `[`SetTicketId`](#structFRHAPI__TicketData_1ad022952990863743fb0b10638467c51d)`(const FString & NewValue)` | Sets the value of TicketId.
`public inline void `[`SetTicketId`](#structFRHAPI__TicketData_1abc2fc4a75522c49964d4d70c03ccba4e)`(FString && NewValue)` | Sets the value of TicketId using move semantics.
`public inline TArray< FGuid > & `[`GetPlayerUuids`](#structFRHAPI__TicketData_1aa06a4258de28ce5b52d014a30802e5e5)`()` | Gets the value of PlayerUuids_Optional, regardless of it having been set.
`public inline const TArray< FGuid > & `[`GetPlayerUuids`](#structFRHAPI__TicketData_1a2c0530c78d54f078389c0a1b0592c89e)`() const` | Gets the value of PlayerUuids_Optional, regardless of it having been set.
`public inline const TArray< FGuid > & `[`GetPlayerUuids`](#structFRHAPI__TicketData_1aee698fcc9f9906977a92370703fb0a6e)`(const TArray< FGuid > & DefaultValue) const` | Gets the value of PlayerUuids_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerUuids`](#structFRHAPI__TicketData_1a5f081c485fc887c538accb47743330f7)`(TArray< FGuid > & OutValue) const` | Fills OutValue with the value of PlayerUuids_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FGuid > * `[`GetPlayerUuidsOrNull`](#structFRHAPI__TicketData_1a263619cf3d6b31732477cd17cd059f22)`()` | Returns a pointer to PlayerUuids_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FGuid > * `[`GetPlayerUuidsOrNull`](#structFRHAPI__TicketData_1a0d62cf3d481d67fee0eb9407b9304fbc)`() const` | Returns a pointer to PlayerUuids_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerUuids`](#structFRHAPI__TicketData_1ac65aa40a94dbdb877e401f43290ca5ce)`(const TArray< FGuid > & NewValue)` | Sets the value of PlayerUuids_Optional and also sets PlayerUuids_IsSet to true.
`public inline void `[`SetPlayerUuids`](#structFRHAPI__TicketData_1a92f2d97394395c91b70a4257cbf8a158)`(TArray< FGuid > && NewValue)` | Sets the value of PlayerUuids_Optional and also sets PlayerUuids_IsSet to true using move semantics.
`public inline void `[`ClearPlayerUuids`](#structFRHAPI__TicketData_1a4c8e331e0797c90da08892d8a2567a4e)`()` | Clears the value of PlayerUuids_Optional and sets PlayerUuids_IsSet to false.
`public inline bool `[`IsPlayerUuidsSet`](#structFRHAPI__TicketData_1a860027fd7dd3ea71ead538a40e7965f3)`() const` | Checks whether PlayerUuids_Optional has been set.
`public inline FDateTime & `[`GetQueueJoinDatetime`](#structFRHAPI__TicketData_1ae33cc36656e684b85a0b7b4426480535)`()` | Gets the value of QueueJoinDatetime.
`public inline const FDateTime & `[`GetQueueJoinDatetime`](#structFRHAPI__TicketData_1a148acd5f8168e03179969141236e3568)`() const` | Gets the value of QueueJoinDatetime.
`public inline void `[`SetQueueJoinDatetime`](#structFRHAPI__TicketData_1a0f052f92f2539f329fe18d1e8b7170aa)`(const FDateTime & NewValue)` | Sets the value of QueueJoinDatetime.
`public inline void `[`SetQueueJoinDatetime`](#structFRHAPI__TicketData_1affde6098253c802f13ab8bc4f44e3078)`(FDateTime && NewValue)` | Sets the value of QueueJoinDatetime using move semantics.
`public inline FString & `[`GetRegionId`](#structFRHAPI__TicketData_1a695b065c626c030cbf3134a5e996f88f)`()` | Gets the value of RegionId.
`public inline const FString & `[`GetRegionId`](#structFRHAPI__TicketData_1a93b63eea99b4acd78c185428d2349418)`() const` | Gets the value of RegionId.
`public inline void `[`SetRegionId`](#structFRHAPI__TicketData_1ac2c50d01701f5b01ec952d3bb77bbec5)`(const FString & NewValue)` | Sets the value of RegionId.
`public inline void `[`SetRegionId`](#structFRHAPI__TicketData_1a23f748965b9c6d01b09308956cb6632c)`(FString && NewValue)` | Sets the value of RegionId using move semantics.
`public inline FString & `[`GetQueueId`](#structFRHAPI__TicketData_1a0d62368775ee6aade89427fc1ef39c4f)`()` | Gets the value of QueueId.
`public inline const FString & `[`GetQueueId`](#structFRHAPI__TicketData_1a6083dc2332c1d2c5e75d9989ed7e4f8d)`() const` | Gets the value of QueueId.
`public inline void `[`SetQueueId`](#structFRHAPI__TicketData_1a4a3855f70d1edec15f2c46d1dd93fe8e)`(const FString & NewValue)` | Sets the value of QueueId.
`public inline void `[`SetQueueId`](#structFRHAPI__TicketData_1a962bfefb038f5e88e23d9b58fcaa7ccd)`(FString && NewValue)` | Sets the value of QueueId using move semantics.
`public inline TArray< FString > & `[`GetProfileIds`](#structFRHAPI__TicketData_1a680d208005b5fd251f6055e7ecbb89da)`()` | Gets the value of ProfileIds.
`public inline const TArray< FString > & `[`GetProfileIds`](#structFRHAPI__TicketData_1a95723783227c6a6d1bdf21421d0e38da)`() const` | Gets the value of ProfileIds.
`public inline void `[`SetProfileIds`](#structFRHAPI__TicketData_1a7681350c2261715ef9ecdd06eaa3fb43)`(const TArray< FString > & NewValue)` | Sets the value of ProfileIds.
`public inline void `[`SetProfileIds`](#structFRHAPI__TicketData_1af206b53fac415618ebe093579dde0d43)`(TArray< FString > && NewValue)` | Sets the value of ProfileIds using move semantics.
`public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__TicketData_1a8ad26ae504e168d853d8c5347cea535c)`()` | Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__TicketData_1a41192444dc4dfe463fc9ea9ee774e487)`() const` | Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__TicketData_1a578af0e505f3af23f2bb3e5c34854c56)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` | Gets the value of AdditionalJoinParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAdditionalJoinParams`](#structFRHAPI__TicketData_1a8071007bbfc9ae07d1295f44f1a29c8e)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` | Fills OutValue with the value of AdditionalJoinParams_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__TicketData_1a739b762c194c30c157bc51cd0019db7b)`()` | Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__TicketData_1a501a3e734c39d1d7be46a374d4ecfc0e)`() const` | Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAdditionalJoinParams`](#structFRHAPI__TicketData_1a2a3cb2694b0c3cb779df661ec870dc16)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` | Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true.
`public inline void `[`SetAdditionalJoinParams`](#structFRHAPI__TicketData_1af4b12b9638903673660952f8782b2804)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` | Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true using move semantics.
`public inline void `[`ClearAdditionalJoinParams`](#structFRHAPI__TicketData_1a3e3dea6278f363e3500fd3f7d2024c76)`()` | Clears the value of AdditionalJoinParams_Optional and sets AdditionalJoinParams_IsSet to false.
`public inline bool `[`IsAdditionalJoinParamsSet`](#structFRHAPI__TicketData_1a8988a86891722ebbefb3fd2e8f291004)`() const` | Checks whether AdditionalJoinParams_Optional has been set.
`public inline TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & `[`GetRankData`](#structFRHAPI__TicketData_1a2f37219e7214a5acf6313977df35cd32)`()` | Gets the value of RankData_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & `[`GetRankData`](#structFRHAPI__TicketData_1a945ba672d47db008b33f183ee01ca8d9)`() const` | Gets the value of RankData_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & `[`GetRankData`](#structFRHAPI__TicketData_1a7c928ce624dcf05fe46a5b0911497de9)`(const TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & DefaultValue) const` | Gets the value of RankData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRankData`](#structFRHAPI__TicketData_1a7552d9376e7e7d8d66d6be263db1830d)`(TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & OutValue) const` | Fills OutValue with the value of RankData_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > * `[`GetRankDataOrNull`](#structFRHAPI__TicketData_1a271c054efb3738bd10f980b9f40f8b19)`()` | Returns a pointer to RankData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > * `[`GetRankDataOrNull`](#structFRHAPI__TicketData_1a5740a9bed00dd2024441f0d1365e531b)`() const` | Returns a pointer to RankData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRankData`](#structFRHAPI__TicketData_1a330b558938eddbbe03230877d6e9e6c1)`(const TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & NewValue)` | Sets the value of RankData_Optional and also sets RankData_IsSet to true.
`public inline void `[`SetRankData`](#structFRHAPI__TicketData_1a8e3dd1e995dcf3256a70c19457a73be4)`(TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > && NewValue)` | Sets the value of RankData_Optional and also sets RankData_IsSet to true using move semantics.
`public inline void `[`ClearRankData`](#structFRHAPI__TicketData_1aad62250fae5049dc81df972209f53d2e)`()` | Clears the value of RankData_Optional and sets RankData_IsSet to false.
`public inline bool `[`IsRankDataSet`](#structFRHAPI__TicketData_1a4ecd64a81de014c1294365bbb7900c0f)`() const` | Checks whether RankData_Optional has been set.

### Members

#### `public FString `[`TicketId`](#structFRHAPI__TicketData_1a3ed37cfc00c58530ec3dac53cbf345b5) <a id="structFRHAPI__TicketData_1a3ed37cfc00c58530ec3dac53cbf345b5"></a>

Unique ID for this ticket.

#### `public TArray< FGuid > `[`PlayerUuids_Optional`](#structFRHAPI__TicketData_1aadb9adf8f209c5e1fce974f581d61784) <a id="structFRHAPI__TicketData_1aadb9adf8f209c5e1fce974f581d61784"></a>

List of Player UUIDS that are associated with this ticket.

#### `public bool `[`PlayerUuids_IsSet`](#structFRHAPI__TicketData_1a87979d4776e43d2ece7e48f98058b8e5) <a id="structFRHAPI__TicketData_1a87979d4776e43d2ece7e48f98058b8e5"></a>

true if PlayerUuids_Optional has been set to a value

#### `public FDateTime `[`QueueJoinDatetime`](#structFRHAPI__TicketData_1aa91ab4c3b060211c95c657cfb9b82642) <a id="structFRHAPI__TicketData_1aa91ab4c3b060211c95c657cfb9b82642"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public FString `[`RegionId`](#structFRHAPI__TicketData_1a62b6168002c9be33e8bbc9de1ba910b9) <a id="structFRHAPI__TicketData_1a62b6168002c9be33e8bbc9de1ba910b9"></a>

Which region this ticket was created for.

#### `public FString `[`QueueId`](#structFRHAPI__TicketData_1aa996c9517bda8eb803934e177a3dbf57) <a id="structFRHAPI__TicketData_1aa996c9517bda8eb803934e177a3dbf57"></a>

Which queue was used to create this ticket.

#### `public TArray< FString > `[`ProfileIds`](#structFRHAPI__TicketData_1ad495189191c3863307df160562c8fdad) <a id="structFRHAPI__TicketData_1ad495189191c3863307df160562c8fdad"></a>

List of profiles that were being considered for this ticket.

#### `public `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` `[`AdditionalJoinParams_Optional`](#structFRHAPI__TicketData_1afb43fc227461efe50ed520720d9a5ab1) <a id="structFRHAPI__TicketData_1afb43fc227461efe50ed520720d9a5ab1"></a>

Additional join params specified on queue join.

#### `public bool `[`AdditionalJoinParams_IsSet`](#structFRHAPI__TicketData_1a5049238a1b6be89571b0a874642ec4d9) <a id="structFRHAPI__TicketData_1a5049238a1b6be89571b0a874642ec4d9"></a>

true if AdditionalJoinParams_Optional has been set to a value

#### `public TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > `[`RankData_Optional`](#structFRHAPI__TicketData_1a17b160297ed976f0e281e8965e3f19b3) <a id="structFRHAPI__TicketData_1a17b160297ed976f0e281e8965e3f19b3"></a>

List of rank data on the ticket.

#### `public bool `[`RankData_IsSet`](#structFRHAPI__TicketData_1af7beadc7517c92c0fe706d91e0e7432f) <a id="structFRHAPI__TicketData_1af7beadc7517c92c0fe706d91e0e7432f"></a>

true if RankData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__TicketData_1aa6543a65f2b9581b045757d92831a62a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__TicketData_1aa6543a65f2b9581b045757d92831a62a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__TicketData_1a492cce8409d30329986dbe01e1bb564a)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__TicketData_1a492cce8409d30329986dbe01e1bb564a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetTicketId`](#structFRHAPI__TicketData_1a2a8e9c89552e1ecb4cbf36227724ce7f)`()` <a id="structFRHAPI__TicketData_1a2a8e9c89552e1ecb4cbf36227724ce7f"></a>

Gets the value of TicketId.

#### `public inline const FString & `[`GetTicketId`](#structFRHAPI__TicketData_1abce8734ce96c8e718726f319664d15fa)`() const` <a id="structFRHAPI__TicketData_1abce8734ce96c8e718726f319664d15fa"></a>

Gets the value of TicketId.

#### `public inline void `[`SetTicketId`](#structFRHAPI__TicketData_1ad022952990863743fb0b10638467c51d)`(const FString & NewValue)` <a id="structFRHAPI__TicketData_1ad022952990863743fb0b10638467c51d"></a>

Sets the value of TicketId.

#### `public inline void `[`SetTicketId`](#structFRHAPI__TicketData_1abc2fc4a75522c49964d4d70c03ccba4e)`(FString && NewValue)` <a id="structFRHAPI__TicketData_1abc2fc4a75522c49964d4d70c03ccba4e"></a>

Sets the value of TicketId using move semantics.

#### `public inline TArray< FGuid > & `[`GetPlayerUuids`](#structFRHAPI__TicketData_1aa06a4258de28ce5b52d014a30802e5e5)`()` <a id="structFRHAPI__TicketData_1aa06a4258de28ce5b52d014a30802e5e5"></a>

Gets the value of PlayerUuids_Optional, regardless of it having been set.

#### `public inline const TArray< FGuid > & `[`GetPlayerUuids`](#structFRHAPI__TicketData_1a2c0530c78d54f078389c0a1b0592c89e)`() const` <a id="structFRHAPI__TicketData_1a2c0530c78d54f078389c0a1b0592c89e"></a>

Gets the value of PlayerUuids_Optional, regardless of it having been set.

#### `public inline const TArray< FGuid > & `[`GetPlayerUuids`](#structFRHAPI__TicketData_1aee698fcc9f9906977a92370703fb0a6e)`(const TArray< FGuid > & DefaultValue) const` <a id="structFRHAPI__TicketData_1aee698fcc9f9906977a92370703fb0a6e"></a>

Gets the value of PlayerUuids_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerUuids`](#structFRHAPI__TicketData_1a5f081c485fc887c538accb47743330f7)`(TArray< FGuid > & OutValue) const` <a id="structFRHAPI__TicketData_1a5f081c485fc887c538accb47743330f7"></a>

Fills OutValue with the value of PlayerUuids_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< FGuid > * `[`GetPlayerUuidsOrNull`](#structFRHAPI__TicketData_1a263619cf3d6b31732477cd17cd059f22)`()` <a id="structFRHAPI__TicketData_1a263619cf3d6b31732477cd17cd059f22"></a>

Returns a pointer to PlayerUuids_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< FGuid > * `[`GetPlayerUuidsOrNull`](#structFRHAPI__TicketData_1a0d62cf3d481d67fee0eb9407b9304fbc)`() const` <a id="structFRHAPI__TicketData_1a0d62cf3d481d67fee0eb9407b9304fbc"></a>

Returns a pointer to PlayerUuids_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerUuids`](#structFRHAPI__TicketData_1ac65aa40a94dbdb877e401f43290ca5ce)`(const TArray< FGuid > & NewValue)` <a id="structFRHAPI__TicketData_1ac65aa40a94dbdb877e401f43290ca5ce"></a>

Sets the value of PlayerUuids_Optional and also sets PlayerUuids_IsSet to true.

#### `public inline void `[`SetPlayerUuids`](#structFRHAPI__TicketData_1a92f2d97394395c91b70a4257cbf8a158)`(TArray< FGuid > && NewValue)` <a id="structFRHAPI__TicketData_1a92f2d97394395c91b70a4257cbf8a158"></a>

Sets the value of PlayerUuids_Optional and also sets PlayerUuids_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerUuids`](#structFRHAPI__TicketData_1a4c8e331e0797c90da08892d8a2567a4e)`()` <a id="structFRHAPI__TicketData_1a4c8e331e0797c90da08892d8a2567a4e"></a>

Clears the value of PlayerUuids_Optional and sets PlayerUuids_IsSet to false.

#### `public inline bool `[`IsPlayerUuidsSet`](#structFRHAPI__TicketData_1a860027fd7dd3ea71ead538a40e7965f3)`() const` <a id="structFRHAPI__TicketData_1a860027fd7dd3ea71ead538a40e7965f3"></a>

Checks whether PlayerUuids_Optional has been set.

#### `public inline FDateTime & `[`GetQueueJoinDatetime`](#structFRHAPI__TicketData_1ae33cc36656e684b85a0b7b4426480535)`()` <a id="structFRHAPI__TicketData_1ae33cc36656e684b85a0b7b4426480535"></a>

Gets the value of QueueJoinDatetime.

#### `public inline const FDateTime & `[`GetQueueJoinDatetime`](#structFRHAPI__TicketData_1a148acd5f8168e03179969141236e3568)`() const` <a id="structFRHAPI__TicketData_1a148acd5f8168e03179969141236e3568"></a>

Gets the value of QueueJoinDatetime.

#### `public inline void `[`SetQueueJoinDatetime`](#structFRHAPI__TicketData_1a0f052f92f2539f329fe18d1e8b7170aa)`(const FDateTime & NewValue)` <a id="structFRHAPI__TicketData_1a0f052f92f2539f329fe18d1e8b7170aa"></a>

Sets the value of QueueJoinDatetime.

#### `public inline void `[`SetQueueJoinDatetime`](#structFRHAPI__TicketData_1affde6098253c802f13ab8bc4f44e3078)`(FDateTime && NewValue)` <a id="structFRHAPI__TicketData_1affde6098253c802f13ab8bc4f44e3078"></a>

Sets the value of QueueJoinDatetime using move semantics.

#### `public inline FString & `[`GetRegionId`](#structFRHAPI__TicketData_1a695b065c626c030cbf3134a5e996f88f)`()` <a id="structFRHAPI__TicketData_1a695b065c626c030cbf3134a5e996f88f"></a>

Gets the value of RegionId.

#### `public inline const FString & `[`GetRegionId`](#structFRHAPI__TicketData_1a93b63eea99b4acd78c185428d2349418)`() const` <a id="structFRHAPI__TicketData_1a93b63eea99b4acd78c185428d2349418"></a>

Gets the value of RegionId.

#### `public inline void `[`SetRegionId`](#structFRHAPI__TicketData_1ac2c50d01701f5b01ec952d3bb77bbec5)`(const FString & NewValue)` <a id="structFRHAPI__TicketData_1ac2c50d01701f5b01ec952d3bb77bbec5"></a>

Sets the value of RegionId.

#### `public inline void `[`SetRegionId`](#structFRHAPI__TicketData_1a23f748965b9c6d01b09308956cb6632c)`(FString && NewValue)` <a id="structFRHAPI__TicketData_1a23f748965b9c6d01b09308956cb6632c"></a>

Sets the value of RegionId using move semantics.

#### `public inline FString & `[`GetQueueId`](#structFRHAPI__TicketData_1a0d62368775ee6aade89427fc1ef39c4f)`()` <a id="structFRHAPI__TicketData_1a0d62368775ee6aade89427fc1ef39c4f"></a>

Gets the value of QueueId.

#### `public inline const FString & `[`GetQueueId`](#structFRHAPI__TicketData_1a6083dc2332c1d2c5e75d9989ed7e4f8d)`() const` <a id="structFRHAPI__TicketData_1a6083dc2332c1d2c5e75d9989ed7e4f8d"></a>

Gets the value of QueueId.

#### `public inline void `[`SetQueueId`](#structFRHAPI__TicketData_1a4a3855f70d1edec15f2c46d1dd93fe8e)`(const FString & NewValue)` <a id="structFRHAPI__TicketData_1a4a3855f70d1edec15f2c46d1dd93fe8e"></a>

Sets the value of QueueId.

#### `public inline void `[`SetQueueId`](#structFRHAPI__TicketData_1a962bfefb038f5e88e23d9b58fcaa7ccd)`(FString && NewValue)` <a id="structFRHAPI__TicketData_1a962bfefb038f5e88e23d9b58fcaa7ccd"></a>

Sets the value of QueueId using move semantics.

#### `public inline TArray< FString > & `[`GetProfileIds`](#structFRHAPI__TicketData_1a680d208005b5fd251f6055e7ecbb89da)`()` <a id="structFRHAPI__TicketData_1a680d208005b5fd251f6055e7ecbb89da"></a>

Gets the value of ProfileIds.

#### `public inline const TArray< FString > & `[`GetProfileIds`](#structFRHAPI__TicketData_1a95723783227c6a6d1bdf21421d0e38da)`() const` <a id="structFRHAPI__TicketData_1a95723783227c6a6d1bdf21421d0e38da"></a>

Gets the value of ProfileIds.

#### `public inline void `[`SetProfileIds`](#structFRHAPI__TicketData_1a7681350c2261715ef9ecdd06eaa3fb43)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__TicketData_1a7681350c2261715ef9ecdd06eaa3fb43"></a>

Sets the value of ProfileIds.

#### `public inline void `[`SetProfileIds`](#structFRHAPI__TicketData_1af206b53fac415618ebe093579dde0d43)`(TArray< FString > && NewValue)` <a id="structFRHAPI__TicketData_1af206b53fac415618ebe093579dde0d43"></a>

Sets the value of ProfileIds using move semantics.

#### `public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__TicketData_1a8ad26ae504e168d853d8c5347cea535c)`()` <a id="structFRHAPI__TicketData_1a8ad26ae504e168d853d8c5347cea535c"></a>

Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__TicketData_1a41192444dc4dfe463fc9ea9ee774e487)`() const` <a id="structFRHAPI__TicketData_1a41192444dc4dfe463fc9ea9ee774e487"></a>

Gets the value of AdditionalJoinParams_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & `[`GetAdditionalJoinParams`](#structFRHAPI__TicketData_1a578af0e505f3af23f2bb3e5c34854c56)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & DefaultValue) const` <a id="structFRHAPI__TicketData_1a578af0e505f3af23f2bb3e5c34854c56"></a>

Gets the value of AdditionalJoinParams_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAdditionalJoinParams`](#structFRHAPI__TicketData_1a8071007bbfc9ae07d1295f44f1a29c8e)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & OutValue) const` <a id="structFRHAPI__TicketData_1a8071007bbfc9ae07d1295f44f1a29c8e"></a>

Fills OutValue with the value of AdditionalJoinParams_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__TicketData_1a739b762c194c30c157bc51cd0019db7b)`()` <a id="structFRHAPI__TicketData_1a739b762c194c30c157bc51cd0019db7b"></a>

Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` * `[`GetAdditionalJoinParamsOrNull`](#structFRHAPI__TicketData_1a501a3e734c39d1d7be46a374d4ecfc0e)`() const` <a id="structFRHAPI__TicketData_1a501a3e734c39d1d7be46a374d4ecfc0e"></a>

Returns a pointer to AdditionalJoinParams_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAdditionalJoinParams`](#structFRHAPI__TicketData_1a2a3cb2694b0c3cb779df661ec870dc16)`(const `[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` & NewValue)` <a id="structFRHAPI__TicketData_1a2a3cb2694b0c3cb779df661ec870dc16"></a>

Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true.

#### `public inline void `[`SetAdditionalJoinParams`](#structFRHAPI__TicketData_1af4b12b9638903673660952f8782b2804)`(`[`FRHAPI_AdditionalJoinParams`](RHAPI_AdditionalJoinParams.md#structFRHAPI__AdditionalJoinParams)` && NewValue)` <a id="structFRHAPI__TicketData_1af4b12b9638903673660952f8782b2804"></a>

Sets the value of AdditionalJoinParams_Optional and also sets AdditionalJoinParams_IsSet to true using move semantics.

#### `public inline void `[`ClearAdditionalJoinParams`](#structFRHAPI__TicketData_1a3e3dea6278f363e3500fd3f7d2024c76)`()` <a id="structFRHAPI__TicketData_1a3e3dea6278f363e3500fd3f7d2024c76"></a>

Clears the value of AdditionalJoinParams_Optional and sets AdditionalJoinParams_IsSet to false.

#### `public inline bool `[`IsAdditionalJoinParamsSet`](#structFRHAPI__TicketData_1a8988a86891722ebbefb3fd2e8f291004)`() const` <a id="structFRHAPI__TicketData_1a8988a86891722ebbefb3fd2e8f291004"></a>

Checks whether AdditionalJoinParams_Optional has been set.

#### `public inline TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & `[`GetRankData`](#structFRHAPI__TicketData_1a2f37219e7214a5acf6313977df35cd32)`()` <a id="structFRHAPI__TicketData_1a2f37219e7214a5acf6313977df35cd32"></a>

Gets the value of RankData_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & `[`GetRankData`](#structFRHAPI__TicketData_1a945ba672d47db008b33f183ee01ca8d9)`() const` <a id="structFRHAPI__TicketData_1a945ba672d47db008b33f183ee01ca8d9"></a>

Gets the value of RankData_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & `[`GetRankData`](#structFRHAPI__TicketData_1a7c928ce624dcf05fe46a5b0911497de9)`(const TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & DefaultValue) const` <a id="structFRHAPI__TicketData_1a7c928ce624dcf05fe46a5b0911497de9"></a>

Gets the value of RankData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRankData`](#structFRHAPI__TicketData_1a7552d9376e7e7d8d66d6be263db1830d)`(TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & OutValue) const` <a id="structFRHAPI__TicketData_1a7552d9376e7e7d8d66d6be263db1830d"></a>

Fills OutValue with the value of RankData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > * `[`GetRankDataOrNull`](#structFRHAPI__TicketData_1a271c054efb3738bd10f980b9f40f8b19)`()` <a id="structFRHAPI__TicketData_1a271c054efb3738bd10f980b9f40f8b19"></a>

Returns a pointer to RankData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > * `[`GetRankDataOrNull`](#structFRHAPI__TicketData_1a5740a9bed00dd2024441f0d1365e531b)`() const` <a id="structFRHAPI__TicketData_1a5740a9bed00dd2024441f0d1365e531b"></a>

Returns a pointer to RankData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRankData`](#structFRHAPI__TicketData_1a330b558938eddbbe03230877d6e9e6c1)`(const TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > & NewValue)` <a id="structFRHAPI__TicketData_1a330b558938eddbbe03230877d6e9e6c1"></a>

Sets the value of RankData_Optional and also sets RankData_IsSet to true.

#### `public inline void `[`SetRankData`](#structFRHAPI__TicketData_1a8e3dd1e995dcf3256a70c19457a73be4)`(TArray< `[`FRHAPI_RankData`](RHAPI_RankData.md#structFRHAPI__RankData)` > && NewValue)` <a id="structFRHAPI__TicketData_1a8e3dd1e995dcf3256a70c19457a73be4"></a>

Sets the value of RankData_Optional and also sets RankData_IsSet to true using move semantics.

#### `public inline void `[`ClearRankData`](#structFRHAPI__TicketData_1aad62250fae5049dc81df972209f53d2e)`()` <a id="structFRHAPI__TicketData_1aad62250fae5049dc81df972209f53d2e"></a>

Clears the value of RankData_Optional and sets RankData_IsSet to false.

#### `public inline bool `[`IsRankDataSet`](#structFRHAPI__TicketData_1a4ecd64a81de014c1294365bbb7900c0f)`() const` <a id="structFRHAPI__TicketData_1a4ecd64a81de014c1294365bbb7900c0f"></a>

Checks whether RankData_Optional has been set.
