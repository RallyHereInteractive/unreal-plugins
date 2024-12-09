---
title: RHAPI_QueueConfigV2
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_QueueConfigV2`](#structFRHAPI__QueueConfigV2) | V2 Configuration about a specific queue.

## struct `FRHAPI_QueueConfigV2` <a id="structFRHAPI__QueueConfigV2"></a>

```
struct FRHAPI_QueueConfigV2
  : public FRHAPI_Model
```

V2 Configuration about a specific queue.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`QueueId`](#structFRHAPI__QueueConfigV2_1a8b7df88e8e7e78f9829f996390f23c0c) | ID to uniquely identify this queue.
`public bool `[`Active`](#structFRHAPI__QueueConfigV2_1ac1f81b437fcc3cde8dee5c8e2493d592) | Flag for whether or not the queue is active, and can be joined or sessions created from it.
`public int32 `[`MaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1ab9652b284e9f5428cbbb2ea1a908224d) | The maximum size of a group that can join this queue.
`public FGuid `[`MatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a0be73f8340379fb7cad237a4cf682a2b) | ID for which group of matchmaking templates/rules will be used when joining this queue.
`public TMap< FString, FString > `[`LegacyConfig_Optional`](#structFRHAPI__QueueConfigV2_1a68defea48ff0db94ca1a0d1c28250829) | Legacy config to help migrate clients.
`public bool `[`LegacyConfig_IsSet`](#structFRHAPI__QueueConfigV2_1aac347be9c34c03117f2c1344f07ca866) | true if LegacyConfig_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__QueueConfigV2_1a5420042c67c41721cc92042d7f677b04)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__QueueConfigV2_1a265b7e4da114702a487f492c6eb5e581)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetQueueId`](#structFRHAPI__QueueConfigV2_1a66ed08c8e5871935d948f10cacd0e092)`()` | Gets the value of QueueId.
`public inline const FString & `[`GetQueueId`](#structFRHAPI__QueueConfigV2_1afc533f57a12dc6a1cdfd1076c0ca1552)`() const` | Gets the value of QueueId.
`public inline void `[`SetQueueId`](#structFRHAPI__QueueConfigV2_1ae97179fc618c3476d0d5346e36e3258f)`(const FString & NewValue)` | Sets the value of QueueId.
`public inline void `[`SetQueueId`](#structFRHAPI__QueueConfigV2_1acac5d6cd186aaa26c629f5ec9b230d12)`(FString && NewValue)` | Sets the value of QueueId using move semantics.
`public inline bool & `[`GetActive`](#structFRHAPI__QueueConfigV2_1acef0a66bd9a7a9ad2c436030bf698c97)`()` | Gets the value of Active.
`public inline const bool & `[`GetActive`](#structFRHAPI__QueueConfigV2_1a23adb73da6785558ef52f1c12ed0b990)`() const` | Gets the value of Active.
`public inline void `[`SetActive`](#structFRHAPI__QueueConfigV2_1acbd74b93b7a9c2a1d79ec67d09ade0fb)`(const bool & NewValue)` | Sets the value of Active.
`public inline void `[`SetActive`](#structFRHAPI__QueueConfigV2_1a9305d3f0b9806f4f3ad9b24792ce33f7)`(bool && NewValue)` | Sets the value of Active using move semantics.
`public inline bool `[`IsActiveDefaultValue`](#structFRHAPI__QueueConfigV2_1ad1505f8a82af3ca1e78b9c8f9a9808f7)`() const` | Returns true if Active matches the default value.
`public inline void `[`SetActiveToDefault`](#structFRHAPI__QueueConfigV2_1afc8df59addb91e29a9f9f21e5f84c622)`()` | Sets the value of Active to its default
`public inline int32 & `[`GetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1a57fb19b4db73b65db613b35bf3f0a6b8)`()` | Gets the value of MaxQueueGroupSize.
`public inline const int32 & `[`GetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1ab29a330844c3db8cabe0d19cf6b80f2f)`() const` | Gets the value of MaxQueueGroupSize.
`public inline void `[`SetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1aaa2e08bf82aeb7dfaf680dcf62531928)`(const int32 & NewValue)` | Sets the value of MaxQueueGroupSize.
`public inline void `[`SetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1ab752cd7d72fdddf03ed6d1b64260521b)`(int32 && NewValue)` | Sets the value of MaxQueueGroupSize using move semantics.
`public inline bool `[`IsMaxQueueGroupSizeDefaultValue`](#structFRHAPI__QueueConfigV2_1afb1913203d4e56acec07a73e80bfee1b)`() const` | Returns true if MaxQueueGroupSize matches the default value.
`public inline void `[`SetMaxQueueGroupSizeToDefault`](#structFRHAPI__QueueConfigV2_1a96fe278b7a631da8c2cfef3a7e210429)`()` | Sets the value of MaxQueueGroupSize to its default
`public inline FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a32d5584d855ac42043e46812ff1992cd)`()` | Gets the value of MatchMakingTemplateGroupId.
`public inline const FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a6ec1b9f5c903114dd3b8613a7eb57777)`() const` | Gets the value of MatchMakingTemplateGroupId.
`public inline void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1ad1ec86eed3db61f00428dff17117b700)`(const FGuid & NewValue)` | Sets the value of MatchMakingTemplateGroupId.
`public inline void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a025e367866ad00450c17672957b9e460)`(FGuid && NewValue)` | Sets the value of MatchMakingTemplateGroupId using move semantics.
`public inline TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1af66c525d8db6c403a4f8a1af5b712d1c)`()` | Gets the value of LegacyConfig_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1af765aa0a081f198ae0880e52fcb9a04b)`() const` | Gets the value of LegacyConfig_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1a13c7b8c96a7b247a0810c404744dea56)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1aec1c4b98d29ae9984b29fa4c37b785a2)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__QueueConfigV2_1aac6b5e86780317e9dff3b294ba0f825c)`()` | Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__QueueConfigV2_1abf731448f02c7b0aa22fbfd9a12ac841)`() const` | Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacyConfig`](#structFRHAPI__QueueConfigV2_1ab60ea5313b3877ca0a9b067a617f45dd)`(const TMap< FString, FString > & NewValue)` | Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.
`public inline void `[`SetLegacyConfig`](#structFRHAPI__QueueConfigV2_1a8ff81e03ee4a70c10509402364678d46)`(TMap< FString, FString > && NewValue)` | Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true using move semantics.
`public inline void `[`ClearLegacyConfig`](#structFRHAPI__QueueConfigV2_1a704de45777e119ee8c297892b3bfdc32)`()` | Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.
`public inline bool `[`IsLegacyConfigSet`](#structFRHAPI__QueueConfigV2_1aed383114ec58ea75db7648a9d68e0e57)`() const` | Checks whether LegacyConfig_Optional has been set.

### Members

#### `public FString `[`QueueId`](#structFRHAPI__QueueConfigV2_1a8b7df88e8e7e78f9829f996390f23c0c) <a id="structFRHAPI__QueueConfigV2_1a8b7df88e8e7e78f9829f996390f23c0c"></a>

ID to uniquely identify this queue.

#### `public bool `[`Active`](#structFRHAPI__QueueConfigV2_1ac1f81b437fcc3cde8dee5c8e2493d592) <a id="structFRHAPI__QueueConfigV2_1ac1f81b437fcc3cde8dee5c8e2493d592"></a>

Flag for whether or not the queue is active, and can be joined or sessions created from it.

#### `public int32 `[`MaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1ab9652b284e9f5428cbbb2ea1a908224d) <a id="structFRHAPI__QueueConfigV2_1ab9652b284e9f5428cbbb2ea1a908224d"></a>

The maximum size of a group that can join this queue.

#### `public FGuid `[`MatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a0be73f8340379fb7cad237a4cf682a2b) <a id="structFRHAPI__QueueConfigV2_1a0be73f8340379fb7cad237a4cf682a2b"></a>

ID for which group of matchmaking templates/rules will be used when joining this queue.

#### `public TMap< FString, FString > `[`LegacyConfig_Optional`](#structFRHAPI__QueueConfigV2_1a68defea48ff0db94ca1a0d1c28250829) <a id="structFRHAPI__QueueConfigV2_1a68defea48ff0db94ca1a0d1c28250829"></a>

Legacy config to help migrate clients.

#### `public bool `[`LegacyConfig_IsSet`](#structFRHAPI__QueueConfigV2_1aac347be9c34c03117f2c1344f07ca866) <a id="structFRHAPI__QueueConfigV2_1aac347be9c34c03117f2c1344f07ca866"></a>

true if LegacyConfig_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__QueueConfigV2_1a5420042c67c41721cc92042d7f677b04)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__QueueConfigV2_1a5420042c67c41721cc92042d7f677b04"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__QueueConfigV2_1a265b7e4da114702a487f492c6eb5e581)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__QueueConfigV2_1a265b7e4da114702a487f492c6eb5e581"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetQueueId`](#structFRHAPI__QueueConfigV2_1a66ed08c8e5871935d948f10cacd0e092)`()` <a id="structFRHAPI__QueueConfigV2_1a66ed08c8e5871935d948f10cacd0e092"></a>

Gets the value of QueueId.

#### `public inline const FString & `[`GetQueueId`](#structFRHAPI__QueueConfigV2_1afc533f57a12dc6a1cdfd1076c0ca1552)`() const` <a id="structFRHAPI__QueueConfigV2_1afc533f57a12dc6a1cdfd1076c0ca1552"></a>

Gets the value of QueueId.

#### `public inline void `[`SetQueueId`](#structFRHAPI__QueueConfigV2_1ae97179fc618c3476d0d5346e36e3258f)`(const FString & NewValue)` <a id="structFRHAPI__QueueConfigV2_1ae97179fc618c3476d0d5346e36e3258f"></a>

Sets the value of QueueId.

#### `public inline void `[`SetQueueId`](#structFRHAPI__QueueConfigV2_1acac5d6cd186aaa26c629f5ec9b230d12)`(FString && NewValue)` <a id="structFRHAPI__QueueConfigV2_1acac5d6cd186aaa26c629f5ec9b230d12"></a>

Sets the value of QueueId using move semantics.

#### `public inline bool & `[`GetActive`](#structFRHAPI__QueueConfigV2_1acef0a66bd9a7a9ad2c436030bf698c97)`()` <a id="structFRHAPI__QueueConfigV2_1acef0a66bd9a7a9ad2c436030bf698c97"></a>

Gets the value of Active.

#### `public inline const bool & `[`GetActive`](#structFRHAPI__QueueConfigV2_1a23adb73da6785558ef52f1c12ed0b990)`() const` <a id="structFRHAPI__QueueConfigV2_1a23adb73da6785558ef52f1c12ed0b990"></a>

Gets the value of Active.

#### `public inline void `[`SetActive`](#structFRHAPI__QueueConfigV2_1acbd74b93b7a9c2a1d79ec67d09ade0fb)`(const bool & NewValue)` <a id="structFRHAPI__QueueConfigV2_1acbd74b93b7a9c2a1d79ec67d09ade0fb"></a>

Sets the value of Active.

#### `public inline void `[`SetActive`](#structFRHAPI__QueueConfigV2_1a9305d3f0b9806f4f3ad9b24792ce33f7)`(bool && NewValue)` <a id="structFRHAPI__QueueConfigV2_1a9305d3f0b9806f4f3ad9b24792ce33f7"></a>

Sets the value of Active using move semantics.

#### `public inline bool `[`IsActiveDefaultValue`](#structFRHAPI__QueueConfigV2_1ad1505f8a82af3ca1e78b9c8f9a9808f7)`() const` <a id="structFRHAPI__QueueConfigV2_1ad1505f8a82af3ca1e78b9c8f9a9808f7"></a>

Returns true if Active matches the default value.

#### `public inline void `[`SetActiveToDefault`](#structFRHAPI__QueueConfigV2_1afc8df59addb91e29a9f9f21e5f84c622)`()` <a id="structFRHAPI__QueueConfigV2_1afc8df59addb91e29a9f9f21e5f84c622"></a>

Sets the value of Active to its default

#### `public inline int32 & `[`GetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1a57fb19b4db73b65db613b35bf3f0a6b8)`()` <a id="structFRHAPI__QueueConfigV2_1a57fb19b4db73b65db613b35bf3f0a6b8"></a>

Gets the value of MaxQueueGroupSize.

#### `public inline const int32 & `[`GetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1ab29a330844c3db8cabe0d19cf6b80f2f)`() const` <a id="structFRHAPI__QueueConfigV2_1ab29a330844c3db8cabe0d19cf6b80f2f"></a>

Gets the value of MaxQueueGroupSize.

#### `public inline void `[`SetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1aaa2e08bf82aeb7dfaf680dcf62531928)`(const int32 & NewValue)` <a id="structFRHAPI__QueueConfigV2_1aaa2e08bf82aeb7dfaf680dcf62531928"></a>

Sets the value of MaxQueueGroupSize.

#### `public inline void `[`SetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1ab752cd7d72fdddf03ed6d1b64260521b)`(int32 && NewValue)` <a id="structFRHAPI__QueueConfigV2_1ab752cd7d72fdddf03ed6d1b64260521b"></a>

Sets the value of MaxQueueGroupSize using move semantics.

#### `public inline bool `[`IsMaxQueueGroupSizeDefaultValue`](#structFRHAPI__QueueConfigV2_1afb1913203d4e56acec07a73e80bfee1b)`() const` <a id="structFRHAPI__QueueConfigV2_1afb1913203d4e56acec07a73e80bfee1b"></a>

Returns true if MaxQueueGroupSize matches the default value.

#### `public inline void `[`SetMaxQueueGroupSizeToDefault`](#structFRHAPI__QueueConfigV2_1a96fe278b7a631da8c2cfef3a7e210429)`()` <a id="structFRHAPI__QueueConfigV2_1a96fe278b7a631da8c2cfef3a7e210429"></a>

Sets the value of MaxQueueGroupSize to its default

#### `public inline FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a32d5584d855ac42043e46812ff1992cd)`()` <a id="structFRHAPI__QueueConfigV2_1a32d5584d855ac42043e46812ff1992cd"></a>

Gets the value of MatchMakingTemplateGroupId.

#### `public inline const FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a6ec1b9f5c903114dd3b8613a7eb57777)`() const` <a id="structFRHAPI__QueueConfigV2_1a6ec1b9f5c903114dd3b8613a7eb57777"></a>

Gets the value of MatchMakingTemplateGroupId.

#### `public inline void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1ad1ec86eed3db61f00428dff17117b700)`(const FGuid & NewValue)` <a id="structFRHAPI__QueueConfigV2_1ad1ec86eed3db61f00428dff17117b700"></a>

Sets the value of MatchMakingTemplateGroupId.

#### `public inline void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a025e367866ad00450c17672957b9e460)`(FGuid && NewValue)` <a id="structFRHAPI__QueueConfigV2_1a025e367866ad00450c17672957b9e460"></a>

Sets the value of MatchMakingTemplateGroupId using move semantics.

#### `public inline TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1af66c525d8db6c403a4f8a1af5b712d1c)`()` <a id="structFRHAPI__QueueConfigV2_1af66c525d8db6c403a4f8a1af5b712d1c"></a>

Gets the value of LegacyConfig_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1af765aa0a081f198ae0880e52fcb9a04b)`() const` <a id="structFRHAPI__QueueConfigV2_1af765aa0a081f198ae0880e52fcb9a04b"></a>

Gets the value of LegacyConfig_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1a13c7b8c96a7b247a0810c404744dea56)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__QueueConfigV2_1a13c7b8c96a7b247a0810c404744dea56"></a>

Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1aec1c4b98d29ae9984b29fa4c37b785a2)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__QueueConfigV2_1aec1c4b98d29ae9984b29fa4c37b785a2"></a>

Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__QueueConfigV2_1aac6b5e86780317e9dff3b294ba0f825c)`()` <a id="structFRHAPI__QueueConfigV2_1aac6b5e86780317e9dff3b294ba0f825c"></a>

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__QueueConfigV2_1abf731448f02c7b0aa22fbfd9a12ac841)`() const` <a id="structFRHAPI__QueueConfigV2_1abf731448f02c7b0aa22fbfd9a12ac841"></a>

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLegacyConfig`](#structFRHAPI__QueueConfigV2_1ab60ea5313b3877ca0a9b067a617f45dd)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__QueueConfigV2_1ab60ea5313b3877ca0a9b067a617f45dd"></a>

Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.

#### `public inline void `[`SetLegacyConfig`](#structFRHAPI__QueueConfigV2_1a8ff81e03ee4a70c10509402364678d46)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__QueueConfigV2_1a8ff81e03ee4a70c10509402364678d46"></a>

Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true using move semantics.

#### `public inline void `[`ClearLegacyConfig`](#structFRHAPI__QueueConfigV2_1a704de45777e119ee8c297892b3bfdc32)`()` <a id="structFRHAPI__QueueConfigV2_1a704de45777e119ee8c297892b3bfdc32"></a>

Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.

#### `public inline bool `[`IsLegacyConfigSet`](#structFRHAPI__QueueConfigV2_1aed383114ec58ea75db7648a9d68e0e57)`() const` <a id="structFRHAPI__QueueConfigV2_1aed383114ec58ea75db7648a9d68e0e57"></a>

Checks whether LegacyConfig_Optional has been set.

