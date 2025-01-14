---
title: RHAPI_QueueConfig
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_QueueConfig`](#structFRHAPI__QueueConfig) | DEPRECATED - V1 Configuration about a specific queue.

## struct `FRHAPI_QueueConfig` <a id="structFRHAPI__QueueConfig"></a>

```
struct FRHAPI_QueueConfig
  : public FRHAPI_Model
```

DEPRECATED - V1 Configuration about a specific queue.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`QueueId`](#structFRHAPI__QueueConfig_1a4b833d47c6113c72995546e724ae2b3d) | ID to uniquely identify this queue.
`public bool `[`Active`](#structFRHAPI__QueueConfig_1aee82d6e680e6bf1dfefc37cd1f11859e) | Flag for whether or not the queue is active, and can be joined or sessions created from it.
`public int32 `[`RankingType`](#structFRHAPI__QueueConfig_1aacef7831b79c1f836a1e8ca2d7828e4c) | Which rank this queue should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example)
`public int32 `[`NumSides`](#structFRHAPI__QueueConfig_1a23995dba128a09c4fd3fd5a5f938eab1) | The number of sides a game in this queue will have (2 in a 1v1 and 3 in a 1v1v1 for example.
`public int32 `[`MaxPlayersPerSide`](#structFRHAPI__QueueConfig_1a9adb4270b953ff71083bce03f44859f9) | The maximum number of players that can be on each team.
`public int32 `[`MinPlayersPerSide`](#structFRHAPI__QueueConfig_1a14bbcf2815246b9cdd65bca56301fb86) | The minimum number of players that can be on each team.
`public int32 `[`MaxQueueGroupSize`](#structFRHAPI__QueueConfig_1aaa59215391fb9cc4e64f60de6a63bfe4) | The maximum size of a group that can join this queue.
`public FGuid `[`MatchMakingTemplateGroupId`](#structFRHAPI__QueueConfig_1accaccf9098ad83a60810fd4579e6c9ad) | ID for which group of matchmaking templates/rules will be used when joining this queue.
`public virtual bool `[`FromJson`](#structFRHAPI__QueueConfig_1a1754821bb89c570ece1ca50c70a65ce5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__QueueConfig_1a2690fde5039eeeccdee405c4c0264e32)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetQueueId`](#structFRHAPI__QueueConfig_1af6c27e6a83008340bc84ed6ce134e27a)`()` | Gets the value of QueueId.
`public inline const FString & `[`GetQueueId`](#structFRHAPI__QueueConfig_1ad744c92fb6c372b2cdd763b4b673c2d2)`() const` | Gets the value of QueueId.
`public inline void `[`SetQueueId`](#structFRHAPI__QueueConfig_1ad7653c035d7fb59ea0c279b8672ec190)`(const FString & NewValue)` | Sets the value of QueueId.
`public inline void `[`SetQueueId`](#structFRHAPI__QueueConfig_1a0d5c4d264594191b5648570e8e2ff4b6)`(FString && NewValue)` | Sets the value of QueueId using move semantics.
`public inline bool & `[`GetActive`](#structFRHAPI__QueueConfig_1a400b01ccca01525bb2aef7ddaef87810)`()` | Gets the value of Active.
`public inline const bool & `[`GetActive`](#structFRHAPI__QueueConfig_1add82810f13dbafd9dcf58e61b0753e8f)`() const` | Gets the value of Active.
`public inline void `[`SetActive`](#structFRHAPI__QueueConfig_1ac1c81c1a87d5ccc7a200cce1cdd45e1b)`(const bool & NewValue)` | Sets the value of Active.
`public inline void `[`SetActive`](#structFRHAPI__QueueConfig_1ad16f6d26ffc5262bf49f0c9557d9629f)`(bool && NewValue)` | Sets the value of Active using move semantics.
`public inline bool `[`IsActiveDefaultValue`](#structFRHAPI__QueueConfig_1a1cf37082fbdcae269056c583c43ac884)`() const` | Returns true if Active matches the default value.
`public inline void `[`SetActiveToDefault`](#structFRHAPI__QueueConfig_1a10f6ccf4def627103f7f6805f4af2c1b)`()` | Sets the value of Active to its default
`public inline int32 & `[`GetRankingType`](#structFRHAPI__QueueConfig_1a549ebcbf272748d18711b5feae5a0015)`()` | Gets the value of RankingType.
`public inline const int32 & `[`GetRankingType`](#structFRHAPI__QueueConfig_1a09fa6601ba9f8c6cda80a4e9e6371de7)`() const` | Gets the value of RankingType.
`public inline void `[`SetRankingType`](#structFRHAPI__QueueConfig_1a5fafe5305422978f034ebb74398680d5)`(const int32 & NewValue)` | Sets the value of RankingType.
`public inline void `[`SetRankingType`](#structFRHAPI__QueueConfig_1a06c22bdb8685786cb160bbefc603c1df)`(int32 && NewValue)` | Sets the value of RankingType using move semantics.
`public inline bool `[`IsRankingTypeDefaultValue`](#structFRHAPI__QueueConfig_1a3ccc8262e40ba2f0e5704a71399304aa)`() const` | Returns true if RankingType matches the default value.
`public inline void `[`SetRankingTypeToDefault`](#structFRHAPI__QueueConfig_1a7b090f5d4ac4e8a648c77fde033751d1)`()` | Sets the value of RankingType to its default
`public inline int32 & `[`GetNumSides`](#structFRHAPI__QueueConfig_1acb5f8fab02abf204fa0e2d97890e6b8d)`()` | Gets the value of NumSides.
`public inline const int32 & `[`GetNumSides`](#structFRHAPI__QueueConfig_1ac99f7be6f3e72ba36c306c3503572271)`() const` | Gets the value of NumSides.
`public inline void `[`SetNumSides`](#structFRHAPI__QueueConfig_1acb407f5ea6fa4241e3ecb846dc64c3b5)`(const int32 & NewValue)` | Sets the value of NumSides.
`public inline void `[`SetNumSides`](#structFRHAPI__QueueConfig_1a83957a415128a2b1065b7c02f2a63f8c)`(int32 && NewValue)` | Sets the value of NumSides using move semantics.
`public inline bool `[`IsNumSidesDefaultValue`](#structFRHAPI__QueueConfig_1aede076c88291f8381088e21b0b80f229)`() const` | Returns true if NumSides matches the default value.
`public inline void `[`SetNumSidesToDefault`](#structFRHAPI__QueueConfig_1a6572ad59ee9f3952109271c675fb11b0)`()` | Sets the value of NumSides to its default
`public inline int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__QueueConfig_1aecc75e4a3f608a09095c2c30415ac0e6)`()` | Gets the value of MaxPlayersPerSide.
`public inline const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__QueueConfig_1a1559e4992100d8f2fa08ef851d16f788)`() const` | Gets the value of MaxPlayersPerSide.
`public inline void `[`SetMaxPlayersPerSide`](#structFRHAPI__QueueConfig_1a8ddfd8dfb44493743a97e05095e42563)`(const int32 & NewValue)` | Sets the value of MaxPlayersPerSide.
`public inline void `[`SetMaxPlayersPerSide`](#structFRHAPI__QueueConfig_1a367fd591b8e14768b8493d3100dabb60)`(int32 && NewValue)` | Sets the value of MaxPlayersPerSide using move semantics.
`public inline bool `[`IsMaxPlayersPerSideDefaultValue`](#structFRHAPI__QueueConfig_1a09d2693ff64135cdb7e1123ecf4d091d)`() const` | Returns true if MaxPlayersPerSide matches the default value.
`public inline void `[`SetMaxPlayersPerSideToDefault`](#structFRHAPI__QueueConfig_1a4a883842fa1e6aef71553d510cc0a787)`()` | Sets the value of MaxPlayersPerSide to its default
`public inline int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__QueueConfig_1aec97766ca176d9b50a9663ecc1c347a9)`()` | Gets the value of MinPlayersPerSide.
`public inline const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__QueueConfig_1a61824933eb549e1a4d81f6254ce75fb2)`() const` | Gets the value of MinPlayersPerSide.
`public inline void `[`SetMinPlayersPerSide`](#structFRHAPI__QueueConfig_1a00a1592bacc8294728f7db967afe9443)`(const int32 & NewValue)` | Sets the value of MinPlayersPerSide.
`public inline void `[`SetMinPlayersPerSide`](#structFRHAPI__QueueConfig_1a032cfc622342b32ca8bc58b122e5f840)`(int32 && NewValue)` | Sets the value of MinPlayersPerSide using move semantics.
`public inline bool `[`IsMinPlayersPerSideDefaultValue`](#structFRHAPI__QueueConfig_1a47b44d176fa5abb7489d797adb8efd65)`() const` | Returns true if MinPlayersPerSide matches the default value.
`public inline void `[`SetMinPlayersPerSideToDefault`](#structFRHAPI__QueueConfig_1a6237a800c6262bb4ed9a7701efadd93c)`()` | Sets the value of MinPlayersPerSide to its default
`public inline int32 & `[`GetMaxQueueGroupSize`](#structFRHAPI__QueueConfig_1ae12e9fce1c7c29a633ed33c03ddd3395)`()` | Gets the value of MaxQueueGroupSize.
`public inline const int32 & `[`GetMaxQueueGroupSize`](#structFRHAPI__QueueConfig_1a20b8917df86fb346fda596f31e497549)`() const` | Gets the value of MaxQueueGroupSize.
`public inline void `[`SetMaxQueueGroupSize`](#structFRHAPI__QueueConfig_1a50b802b29c38e23285cea46364ac1604)`(const int32 & NewValue)` | Sets the value of MaxQueueGroupSize.
`public inline void `[`SetMaxQueueGroupSize`](#structFRHAPI__QueueConfig_1aa0cae51d9191bc3100dac22a124c4d00)`(int32 && NewValue)` | Sets the value of MaxQueueGroupSize using move semantics.
`public inline bool `[`IsMaxQueueGroupSizeDefaultValue`](#structFRHAPI__QueueConfig_1a250bed73ccc2af55989c363cb355a1c1)`() const` | Returns true if MaxQueueGroupSize matches the default value.
`public inline void `[`SetMaxQueueGroupSizeToDefault`](#structFRHAPI__QueueConfig_1a2fbb47f7fe5ff059458787e1e907153e)`()` | Sets the value of MaxQueueGroupSize to its default
`public inline FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfig_1a79033fffd550aaa4c631dadadf34b70c)`()` | Gets the value of MatchMakingTemplateGroupId.
`public inline const FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfig_1a332e924bac0b730425f99cd336644c99)`() const` | Gets the value of MatchMakingTemplateGroupId.
`public inline void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfig_1ac9f0ab0589fbf653742577fbfd492c2f)`(const FGuid & NewValue)` | Sets the value of MatchMakingTemplateGroupId.
`public inline void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfig_1adef5de30ac391f8ae7e5175b891011da)`(FGuid && NewValue)` | Sets the value of MatchMakingTemplateGroupId using move semantics.

### Members

#### `public FString `[`QueueId`](#structFRHAPI__QueueConfig_1a4b833d47c6113c72995546e724ae2b3d) <a id="structFRHAPI__QueueConfig_1a4b833d47c6113c72995546e724ae2b3d"></a>

ID to uniquely identify this queue.

#### `public bool `[`Active`](#structFRHAPI__QueueConfig_1aee82d6e680e6bf1dfefc37cd1f11859e) <a id="structFRHAPI__QueueConfig_1aee82d6e680e6bf1dfefc37cd1f11859e"></a>

Flag for whether or not the queue is active, and can be joined or sessions created from it.

#### `public int32 `[`RankingType`](#structFRHAPI__QueueConfig_1aacef7831b79c1f836a1e8ca2d7828e4c) <a id="structFRHAPI__QueueConfig_1aacef7831b79c1f836a1e8ca2d7828e4c"></a>

Which rank this queue should use MMR from to make matches from, and update at the end of match (1v1 MMR or 2v2 MMR for example)

#### `public int32 `[`NumSides`](#structFRHAPI__QueueConfig_1a23995dba128a09c4fd3fd5a5f938eab1) <a id="structFRHAPI__QueueConfig_1a23995dba128a09c4fd3fd5a5f938eab1"></a>

The number of sides a game in this queue will have (2 in a 1v1 and 3 in a 1v1v1 for example.

#### `public int32 `[`MaxPlayersPerSide`](#structFRHAPI__QueueConfig_1a9adb4270b953ff71083bce03f44859f9) <a id="structFRHAPI__QueueConfig_1a9adb4270b953ff71083bce03f44859f9"></a>

The maximum number of players that can be on each team.

#### `public int32 `[`MinPlayersPerSide`](#structFRHAPI__QueueConfig_1a14bbcf2815246b9cdd65bca56301fb86) <a id="structFRHAPI__QueueConfig_1a14bbcf2815246b9cdd65bca56301fb86"></a>

The minimum number of players that can be on each team.

#### `public int32 `[`MaxQueueGroupSize`](#structFRHAPI__QueueConfig_1aaa59215391fb9cc4e64f60de6a63bfe4) <a id="structFRHAPI__QueueConfig_1aaa59215391fb9cc4e64f60de6a63bfe4"></a>

The maximum size of a group that can join this queue.

#### `public FGuid `[`MatchMakingTemplateGroupId`](#structFRHAPI__QueueConfig_1accaccf9098ad83a60810fd4579e6c9ad) <a id="structFRHAPI__QueueConfig_1accaccf9098ad83a60810fd4579e6c9ad"></a>

ID for which group of matchmaking templates/rules will be used when joining this queue.

#### `public virtual bool `[`FromJson`](#structFRHAPI__QueueConfig_1a1754821bb89c570ece1ca50c70a65ce5)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__QueueConfig_1a1754821bb89c570ece1ca50c70a65ce5"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__QueueConfig_1a2690fde5039eeeccdee405c4c0264e32)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__QueueConfig_1a2690fde5039eeeccdee405c4c0264e32"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetQueueId`](#structFRHAPI__QueueConfig_1af6c27e6a83008340bc84ed6ce134e27a)`()` <a id="structFRHAPI__QueueConfig_1af6c27e6a83008340bc84ed6ce134e27a"></a>

Gets the value of QueueId.

#### `public inline const FString & `[`GetQueueId`](#structFRHAPI__QueueConfig_1ad744c92fb6c372b2cdd763b4b673c2d2)`() const` <a id="structFRHAPI__QueueConfig_1ad744c92fb6c372b2cdd763b4b673c2d2"></a>

Gets the value of QueueId.

#### `public inline void `[`SetQueueId`](#structFRHAPI__QueueConfig_1ad7653c035d7fb59ea0c279b8672ec190)`(const FString & NewValue)` <a id="structFRHAPI__QueueConfig_1ad7653c035d7fb59ea0c279b8672ec190"></a>

Sets the value of QueueId.

#### `public inline void `[`SetQueueId`](#structFRHAPI__QueueConfig_1a0d5c4d264594191b5648570e8e2ff4b6)`(FString && NewValue)` <a id="structFRHAPI__QueueConfig_1a0d5c4d264594191b5648570e8e2ff4b6"></a>

Sets the value of QueueId using move semantics.

#### `public inline bool & `[`GetActive`](#structFRHAPI__QueueConfig_1a400b01ccca01525bb2aef7ddaef87810)`()` <a id="structFRHAPI__QueueConfig_1a400b01ccca01525bb2aef7ddaef87810"></a>

Gets the value of Active.

#### `public inline const bool & `[`GetActive`](#structFRHAPI__QueueConfig_1add82810f13dbafd9dcf58e61b0753e8f)`() const` <a id="structFRHAPI__QueueConfig_1add82810f13dbafd9dcf58e61b0753e8f"></a>

Gets the value of Active.

#### `public inline void `[`SetActive`](#structFRHAPI__QueueConfig_1ac1c81c1a87d5ccc7a200cce1cdd45e1b)`(const bool & NewValue)` <a id="structFRHAPI__QueueConfig_1ac1c81c1a87d5ccc7a200cce1cdd45e1b"></a>

Sets the value of Active.

#### `public inline void `[`SetActive`](#structFRHAPI__QueueConfig_1ad16f6d26ffc5262bf49f0c9557d9629f)`(bool && NewValue)` <a id="structFRHAPI__QueueConfig_1ad16f6d26ffc5262bf49f0c9557d9629f"></a>

Sets the value of Active using move semantics.

#### `public inline bool `[`IsActiveDefaultValue`](#structFRHAPI__QueueConfig_1a1cf37082fbdcae269056c583c43ac884)`() const` <a id="structFRHAPI__QueueConfig_1a1cf37082fbdcae269056c583c43ac884"></a>

Returns true if Active matches the default value.

#### `public inline void `[`SetActiveToDefault`](#structFRHAPI__QueueConfig_1a10f6ccf4def627103f7f6805f4af2c1b)`()` <a id="structFRHAPI__QueueConfig_1a10f6ccf4def627103f7f6805f4af2c1b"></a>

Sets the value of Active to its default

#### `public inline int32 & `[`GetRankingType`](#structFRHAPI__QueueConfig_1a549ebcbf272748d18711b5feae5a0015)`()` <a id="structFRHAPI__QueueConfig_1a549ebcbf272748d18711b5feae5a0015"></a>

Gets the value of RankingType.

#### `public inline const int32 & `[`GetRankingType`](#structFRHAPI__QueueConfig_1a09fa6601ba9f8c6cda80a4e9e6371de7)`() const` <a id="structFRHAPI__QueueConfig_1a09fa6601ba9f8c6cda80a4e9e6371de7"></a>

Gets the value of RankingType.

#### `public inline void `[`SetRankingType`](#structFRHAPI__QueueConfig_1a5fafe5305422978f034ebb74398680d5)`(const int32 & NewValue)` <a id="structFRHAPI__QueueConfig_1a5fafe5305422978f034ebb74398680d5"></a>

Sets the value of RankingType.

#### `public inline void `[`SetRankingType`](#structFRHAPI__QueueConfig_1a06c22bdb8685786cb160bbefc603c1df)`(int32 && NewValue)` <a id="structFRHAPI__QueueConfig_1a06c22bdb8685786cb160bbefc603c1df"></a>

Sets the value of RankingType using move semantics.

#### `public inline bool `[`IsRankingTypeDefaultValue`](#structFRHAPI__QueueConfig_1a3ccc8262e40ba2f0e5704a71399304aa)`() const` <a id="structFRHAPI__QueueConfig_1a3ccc8262e40ba2f0e5704a71399304aa"></a>

Returns true if RankingType matches the default value.

#### `public inline void `[`SetRankingTypeToDefault`](#structFRHAPI__QueueConfig_1a7b090f5d4ac4e8a648c77fde033751d1)`()` <a id="structFRHAPI__QueueConfig_1a7b090f5d4ac4e8a648c77fde033751d1"></a>

Sets the value of RankingType to its default

#### `public inline int32 & `[`GetNumSides`](#structFRHAPI__QueueConfig_1acb5f8fab02abf204fa0e2d97890e6b8d)`()` <a id="structFRHAPI__QueueConfig_1acb5f8fab02abf204fa0e2d97890e6b8d"></a>

Gets the value of NumSides.

#### `public inline const int32 & `[`GetNumSides`](#structFRHAPI__QueueConfig_1ac99f7be6f3e72ba36c306c3503572271)`() const` <a id="structFRHAPI__QueueConfig_1ac99f7be6f3e72ba36c306c3503572271"></a>

Gets the value of NumSides.

#### `public inline void `[`SetNumSides`](#structFRHAPI__QueueConfig_1acb407f5ea6fa4241e3ecb846dc64c3b5)`(const int32 & NewValue)` <a id="structFRHAPI__QueueConfig_1acb407f5ea6fa4241e3ecb846dc64c3b5"></a>

Sets the value of NumSides.

#### `public inline void `[`SetNumSides`](#structFRHAPI__QueueConfig_1a83957a415128a2b1065b7c02f2a63f8c)`(int32 && NewValue)` <a id="structFRHAPI__QueueConfig_1a83957a415128a2b1065b7c02f2a63f8c"></a>

Sets the value of NumSides using move semantics.

#### `public inline bool `[`IsNumSidesDefaultValue`](#structFRHAPI__QueueConfig_1aede076c88291f8381088e21b0b80f229)`() const` <a id="structFRHAPI__QueueConfig_1aede076c88291f8381088e21b0b80f229"></a>

Returns true if NumSides matches the default value.

#### `public inline void `[`SetNumSidesToDefault`](#structFRHAPI__QueueConfig_1a6572ad59ee9f3952109271c675fb11b0)`()` <a id="structFRHAPI__QueueConfig_1a6572ad59ee9f3952109271c675fb11b0"></a>

Sets the value of NumSides to its default

#### `public inline int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__QueueConfig_1aecc75e4a3f608a09095c2c30415ac0e6)`()` <a id="structFRHAPI__QueueConfig_1aecc75e4a3f608a09095c2c30415ac0e6"></a>

Gets the value of MaxPlayersPerSide.

#### `public inline const int32 & `[`GetMaxPlayersPerSide`](#structFRHAPI__QueueConfig_1a1559e4992100d8f2fa08ef851d16f788)`() const` <a id="structFRHAPI__QueueConfig_1a1559e4992100d8f2fa08ef851d16f788"></a>

Gets the value of MaxPlayersPerSide.

#### `public inline void `[`SetMaxPlayersPerSide`](#structFRHAPI__QueueConfig_1a8ddfd8dfb44493743a97e05095e42563)`(const int32 & NewValue)` <a id="structFRHAPI__QueueConfig_1a8ddfd8dfb44493743a97e05095e42563"></a>

Sets the value of MaxPlayersPerSide.

#### `public inline void `[`SetMaxPlayersPerSide`](#structFRHAPI__QueueConfig_1a367fd591b8e14768b8493d3100dabb60)`(int32 && NewValue)` <a id="structFRHAPI__QueueConfig_1a367fd591b8e14768b8493d3100dabb60"></a>

Sets the value of MaxPlayersPerSide using move semantics.

#### `public inline bool `[`IsMaxPlayersPerSideDefaultValue`](#structFRHAPI__QueueConfig_1a09d2693ff64135cdb7e1123ecf4d091d)`() const` <a id="structFRHAPI__QueueConfig_1a09d2693ff64135cdb7e1123ecf4d091d"></a>

Returns true if MaxPlayersPerSide matches the default value.

#### `public inline void `[`SetMaxPlayersPerSideToDefault`](#structFRHAPI__QueueConfig_1a4a883842fa1e6aef71553d510cc0a787)`()` <a id="structFRHAPI__QueueConfig_1a4a883842fa1e6aef71553d510cc0a787"></a>

Sets the value of MaxPlayersPerSide to its default

#### `public inline int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__QueueConfig_1aec97766ca176d9b50a9663ecc1c347a9)`()` <a id="structFRHAPI__QueueConfig_1aec97766ca176d9b50a9663ecc1c347a9"></a>

Gets the value of MinPlayersPerSide.

#### `public inline const int32 & `[`GetMinPlayersPerSide`](#structFRHAPI__QueueConfig_1a61824933eb549e1a4d81f6254ce75fb2)`() const` <a id="structFRHAPI__QueueConfig_1a61824933eb549e1a4d81f6254ce75fb2"></a>

Gets the value of MinPlayersPerSide.

#### `public inline void `[`SetMinPlayersPerSide`](#structFRHAPI__QueueConfig_1a00a1592bacc8294728f7db967afe9443)`(const int32 & NewValue)` <a id="structFRHAPI__QueueConfig_1a00a1592bacc8294728f7db967afe9443"></a>

Sets the value of MinPlayersPerSide.

#### `public inline void `[`SetMinPlayersPerSide`](#structFRHAPI__QueueConfig_1a032cfc622342b32ca8bc58b122e5f840)`(int32 && NewValue)` <a id="structFRHAPI__QueueConfig_1a032cfc622342b32ca8bc58b122e5f840"></a>

Sets the value of MinPlayersPerSide using move semantics.

#### `public inline bool `[`IsMinPlayersPerSideDefaultValue`](#structFRHAPI__QueueConfig_1a47b44d176fa5abb7489d797adb8efd65)`() const` <a id="structFRHAPI__QueueConfig_1a47b44d176fa5abb7489d797adb8efd65"></a>

Returns true if MinPlayersPerSide matches the default value.

#### `public inline void `[`SetMinPlayersPerSideToDefault`](#structFRHAPI__QueueConfig_1a6237a800c6262bb4ed9a7701efadd93c)`()` <a id="structFRHAPI__QueueConfig_1a6237a800c6262bb4ed9a7701efadd93c"></a>

Sets the value of MinPlayersPerSide to its default

#### `public inline int32 & `[`GetMaxQueueGroupSize`](#structFRHAPI__QueueConfig_1ae12e9fce1c7c29a633ed33c03ddd3395)`()` <a id="structFRHAPI__QueueConfig_1ae12e9fce1c7c29a633ed33c03ddd3395"></a>

Gets the value of MaxQueueGroupSize.

#### `public inline const int32 & `[`GetMaxQueueGroupSize`](#structFRHAPI__QueueConfig_1a20b8917df86fb346fda596f31e497549)`() const` <a id="structFRHAPI__QueueConfig_1a20b8917df86fb346fda596f31e497549"></a>

Gets the value of MaxQueueGroupSize.

#### `public inline void `[`SetMaxQueueGroupSize`](#structFRHAPI__QueueConfig_1a50b802b29c38e23285cea46364ac1604)`(const int32 & NewValue)` <a id="structFRHAPI__QueueConfig_1a50b802b29c38e23285cea46364ac1604"></a>

Sets the value of MaxQueueGroupSize.

#### `public inline void `[`SetMaxQueueGroupSize`](#structFRHAPI__QueueConfig_1aa0cae51d9191bc3100dac22a124c4d00)`(int32 && NewValue)` <a id="structFRHAPI__QueueConfig_1aa0cae51d9191bc3100dac22a124c4d00"></a>

Sets the value of MaxQueueGroupSize using move semantics.

#### `public inline bool `[`IsMaxQueueGroupSizeDefaultValue`](#structFRHAPI__QueueConfig_1a250bed73ccc2af55989c363cb355a1c1)`() const` <a id="structFRHAPI__QueueConfig_1a250bed73ccc2af55989c363cb355a1c1"></a>

Returns true if MaxQueueGroupSize matches the default value.

#### `public inline void `[`SetMaxQueueGroupSizeToDefault`](#structFRHAPI__QueueConfig_1a2fbb47f7fe5ff059458787e1e907153e)`()` <a id="structFRHAPI__QueueConfig_1a2fbb47f7fe5ff059458787e1e907153e"></a>

Sets the value of MaxQueueGroupSize to its default

#### `public inline FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfig_1a79033fffd550aaa4c631dadadf34b70c)`()` <a id="structFRHAPI__QueueConfig_1a79033fffd550aaa4c631dadadf34b70c"></a>

Gets the value of MatchMakingTemplateGroupId.

#### `public inline const FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfig_1a332e924bac0b730425f99cd336644c99)`() const` <a id="structFRHAPI__QueueConfig_1a332e924bac0b730425f99cd336644c99"></a>

Gets the value of MatchMakingTemplateGroupId.

#### `public inline void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfig_1ac9f0ab0589fbf653742577fbfd492c2f)`(const FGuid & NewValue)` <a id="structFRHAPI__QueueConfig_1ac9f0ab0589fbf653742577fbfd492c2f"></a>

Sets the value of MatchMakingTemplateGroupId.

#### `public inline void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfig_1adef5de30ac391f8ae7e5175b891011da)`(FGuid && NewValue)` <a id="structFRHAPI__QueueConfig_1adef5de30ac391f8ae7e5175b891011da"></a>

Sets the value of MatchMakingTemplateGroupId using move semantics.

