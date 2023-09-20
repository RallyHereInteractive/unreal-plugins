# RHAPI_QueueConfigV2 <a id="group__RHAPI__QueueConfigV2"></a>

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

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`QueueId`](#structFRHAPI__QueueConfigV2_1a8b7df88e8e7e78f9829f996390f23c0c) | ID to uniquely identify this queue.
`public bool `[`Active`](#structFRHAPI__QueueConfigV2_1ac1f81b437fcc3cde8dee5c8e2493d592) | Flag for whether or not the queue is active, and can be joined or sessions created from it.
`public int32 `[`MaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1ab9652b284e9f5428cbbb2ea1a908224d) | The maximum size of a group that can join this queue.
`public FGuid `[`MatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a0be73f8340379fb7cad237a4cf682a2b) | ID for which group of matchmaking templates/rules will be used when joining this queue.
`public TMap< FString, FString > `[`LegacyConfig_Optional`](#structFRHAPI__QueueConfigV2_1a68defea48ff0db94ca1a0d1c28250829) | Legacy config to help migrate clients.
`public bool `[`LegacyConfig_IsSet`](#structFRHAPI__QueueConfigV2_1aac347be9c34c03117f2c1344f07ca866) | true if LegacyConfig_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__QueueConfigV2_1a90b446ffa432578bc73a8248875e6010)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__QueueConfigV2_1a34acb7a643e2e343eacf912ea28cc299)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetQueueId`](#structFRHAPI__QueueConfigV2_1a66ed08c8e5871935d948f10cacd0e092)`()` | Gets the value of QueueId.
`public inline const FString & `[`GetQueueId`](#structFRHAPI__QueueConfigV2_1afc533f57a12dc6a1cdfd1076c0ca1552)`() const` | Gets the value of QueueId.
`public inline void `[`SetQueueId`](#structFRHAPI__QueueConfigV2_1a770a5be3e3a29ce6526f41b728449b4b)`(FString NewValue)` | Sets the value of QueueId.
`public inline bool & `[`GetActive`](#structFRHAPI__QueueConfigV2_1acef0a66bd9a7a9ad2c436030bf698c97)`()` | Gets the value of Active.
`public inline const bool & `[`GetActive`](#structFRHAPI__QueueConfigV2_1a23adb73da6785558ef52f1c12ed0b990)`() const` | Gets the value of Active.
`public inline void `[`SetActive`](#structFRHAPI__QueueConfigV2_1a8a757e6b480d7f508b5cd9ae2ca3c973)`(bool NewValue)` | Sets the value of Active.
`public inline bool `[`IsActiveDefaultValue`](#structFRHAPI__QueueConfigV2_1ad1505f8a82af3ca1e78b9c8f9a9808f7)`() const` | Returns true if Active matches the default value.
`public inline void `[`SetActiveToDefault`](#structFRHAPI__QueueConfigV2_1afc8df59addb91e29a9f9f21e5f84c622)`()` | Sets the value of Active to its default
`public inline int32 & `[`GetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1a57fb19b4db73b65db613b35bf3f0a6b8)`()` | Gets the value of MaxQueueGroupSize.
`public inline const int32 & `[`GetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1ab29a330844c3db8cabe0d19cf6b80f2f)`() const` | Gets the value of MaxQueueGroupSize.
`public inline void `[`SetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1a89f036294b3f75b8454224187d192fa8)`(int32 NewValue)` | Sets the value of MaxQueueGroupSize.
`public inline bool `[`IsMaxQueueGroupSizeDefaultValue`](#structFRHAPI__QueueConfigV2_1afb1913203d4e56acec07a73e80bfee1b)`() const` | Returns true if MaxQueueGroupSize matches the default value.
`public inline void `[`SetMaxQueueGroupSizeToDefault`](#structFRHAPI__QueueConfigV2_1a96fe278b7a631da8c2cfef3a7e210429)`()` | Sets the value of MaxQueueGroupSize to its default
`public inline FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a32d5584d855ac42043e46812ff1992cd)`()` | Gets the value of MatchMakingTemplateGroupId.
`public inline const FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a6ec1b9f5c903114dd3b8613a7eb57777)`() const` | Gets the value of MatchMakingTemplateGroupId.
`public inline void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1affcb2eb1bc675c907b509ce9e499366b)`(FGuid NewValue)` | Sets the value of MatchMakingTemplateGroupId.
`public inline TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1af66c525d8db6c403a4f8a1af5b712d1c)`()` | Gets the value of LegacyConfig_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1af765aa0a081f198ae0880e52fcb9a04b)`() const` | Gets the value of LegacyConfig_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1a13c7b8c96a7b247a0810c404744dea56)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1aec1c4b98d29ae9984b29fa4c37b785a2)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__QueueConfigV2_1aac6b5e86780317e9dff3b294ba0f825c)`()` | Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__QueueConfigV2_1abf731448f02c7b0aa22fbfd9a12ac841)`() const` | Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLegacyConfig`](#structFRHAPI__QueueConfigV2_1a65ea9aee6bf74c93a8733fed52f62670)`(TMap< FString, FString > NewValue)` | Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.
`public inline void `[`ClearLegacyConfig`](#structFRHAPI__QueueConfigV2_1a704de45777e119ee8c297892b3bfdc32)`()` | Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.

#### Members

#### `public FString `[`QueueId`](#structFRHAPI__QueueConfigV2_1a8b7df88e8e7e78f9829f996390f23c0c) <a id="structFRHAPI__QueueConfigV2_1a8b7df88e8e7e78f9829f996390f23c0c"></a>

ID to uniquely identify this queue.

<br>
#### `public bool `[`Active`](#structFRHAPI__QueueConfigV2_1ac1f81b437fcc3cde8dee5c8e2493d592) <a id="structFRHAPI__QueueConfigV2_1ac1f81b437fcc3cde8dee5c8e2493d592"></a>

Flag for whether or not the queue is active, and can be joined or sessions created from it.

<br>
#### `public int32 `[`MaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1ab9652b284e9f5428cbbb2ea1a908224d) <a id="structFRHAPI__QueueConfigV2_1ab9652b284e9f5428cbbb2ea1a908224d"></a>

The maximum size of a group that can join this queue.

<br>
#### `public FGuid `[`MatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a0be73f8340379fb7cad237a4cf682a2b) <a id="structFRHAPI__QueueConfigV2_1a0be73f8340379fb7cad237a4cf682a2b"></a>

ID for which group of matchmaking templates/rules will be used when joining this queue.

<br>
#### `public TMap< FString, FString > `[`LegacyConfig_Optional`](#structFRHAPI__QueueConfigV2_1a68defea48ff0db94ca1a0d1c28250829) <a id="structFRHAPI__QueueConfigV2_1a68defea48ff0db94ca1a0d1c28250829"></a>

Legacy config to help migrate clients.

<br>
#### `public bool `[`LegacyConfig_IsSet`](#structFRHAPI__QueueConfigV2_1aac347be9c34c03117f2c1344f07ca866) <a id="structFRHAPI__QueueConfigV2_1aac347be9c34c03117f2c1344f07ca866"></a>

true if LegacyConfig_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__QueueConfigV2_1a90b446ffa432578bc73a8248875e6010)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__QueueConfigV2_1a90b446ffa432578bc73a8248875e6010"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__QueueConfigV2_1a34acb7a643e2e343eacf912ea28cc299)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__QueueConfigV2_1a34acb7a643e2e343eacf912ea28cc299"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetQueueId`](#structFRHAPI__QueueConfigV2_1a66ed08c8e5871935d948f10cacd0e092)`()` <a id="structFRHAPI__QueueConfigV2_1a66ed08c8e5871935d948f10cacd0e092"></a>

Gets the value of QueueId.

<br>
#### `public inline const FString & `[`GetQueueId`](#structFRHAPI__QueueConfigV2_1afc533f57a12dc6a1cdfd1076c0ca1552)`() const` <a id="structFRHAPI__QueueConfigV2_1afc533f57a12dc6a1cdfd1076c0ca1552"></a>

Gets the value of QueueId.

<br>
#### `public inline void `[`SetQueueId`](#structFRHAPI__QueueConfigV2_1a770a5be3e3a29ce6526f41b728449b4b)`(FString NewValue)` <a id="structFRHAPI__QueueConfigV2_1a770a5be3e3a29ce6526f41b728449b4b"></a>

Sets the value of QueueId.

<br>
#### `public inline bool & `[`GetActive`](#structFRHAPI__QueueConfigV2_1acef0a66bd9a7a9ad2c436030bf698c97)`()` <a id="structFRHAPI__QueueConfigV2_1acef0a66bd9a7a9ad2c436030bf698c97"></a>

Gets the value of Active.

<br>
#### `public inline const bool & `[`GetActive`](#structFRHAPI__QueueConfigV2_1a23adb73da6785558ef52f1c12ed0b990)`() const` <a id="structFRHAPI__QueueConfigV2_1a23adb73da6785558ef52f1c12ed0b990"></a>

Gets the value of Active.

<br>
#### `public inline void `[`SetActive`](#structFRHAPI__QueueConfigV2_1a8a757e6b480d7f508b5cd9ae2ca3c973)`(bool NewValue)` <a id="structFRHAPI__QueueConfigV2_1a8a757e6b480d7f508b5cd9ae2ca3c973"></a>

Sets the value of Active.

<br>
#### `public inline bool `[`IsActiveDefaultValue`](#structFRHAPI__QueueConfigV2_1ad1505f8a82af3ca1e78b9c8f9a9808f7)`() const` <a id="structFRHAPI__QueueConfigV2_1ad1505f8a82af3ca1e78b9c8f9a9808f7"></a>

Returns true if Active matches the default value.

<br>
#### `public inline void `[`SetActiveToDefault`](#structFRHAPI__QueueConfigV2_1afc8df59addb91e29a9f9f21e5f84c622)`()` <a id="structFRHAPI__QueueConfigV2_1afc8df59addb91e29a9f9f21e5f84c622"></a>

Sets the value of Active to its default

<br>
#### `public inline int32 & `[`GetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1a57fb19b4db73b65db613b35bf3f0a6b8)`()` <a id="structFRHAPI__QueueConfigV2_1a57fb19b4db73b65db613b35bf3f0a6b8"></a>

Gets the value of MaxQueueGroupSize.

<br>
#### `public inline const int32 & `[`GetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1ab29a330844c3db8cabe0d19cf6b80f2f)`() const` <a id="structFRHAPI__QueueConfigV2_1ab29a330844c3db8cabe0d19cf6b80f2f"></a>

Gets the value of MaxQueueGroupSize.

<br>
#### `public inline void `[`SetMaxQueueGroupSize`](#structFRHAPI__QueueConfigV2_1a89f036294b3f75b8454224187d192fa8)`(int32 NewValue)` <a id="structFRHAPI__QueueConfigV2_1a89f036294b3f75b8454224187d192fa8"></a>

Sets the value of MaxQueueGroupSize.

<br>
#### `public inline bool `[`IsMaxQueueGroupSizeDefaultValue`](#structFRHAPI__QueueConfigV2_1afb1913203d4e56acec07a73e80bfee1b)`() const` <a id="structFRHAPI__QueueConfigV2_1afb1913203d4e56acec07a73e80bfee1b"></a>

Returns true if MaxQueueGroupSize matches the default value.

<br>
#### `public inline void `[`SetMaxQueueGroupSizeToDefault`](#structFRHAPI__QueueConfigV2_1a96fe278b7a631da8c2cfef3a7e210429)`()` <a id="structFRHAPI__QueueConfigV2_1a96fe278b7a631da8c2cfef3a7e210429"></a>

Sets the value of MaxQueueGroupSize to its default

<br>
#### `public inline FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a32d5584d855ac42043e46812ff1992cd)`()` <a id="structFRHAPI__QueueConfigV2_1a32d5584d855ac42043e46812ff1992cd"></a>

Gets the value of MatchMakingTemplateGroupId.

<br>
#### `public inline const FGuid & `[`GetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1a6ec1b9f5c903114dd3b8613a7eb57777)`() const` <a id="structFRHAPI__QueueConfigV2_1a6ec1b9f5c903114dd3b8613a7eb57777"></a>

Gets the value of MatchMakingTemplateGroupId.

<br>
#### `public inline void `[`SetMatchMakingTemplateGroupId`](#structFRHAPI__QueueConfigV2_1affcb2eb1bc675c907b509ce9e499366b)`(FGuid NewValue)` <a id="structFRHAPI__QueueConfigV2_1affcb2eb1bc675c907b509ce9e499366b"></a>

Sets the value of MatchMakingTemplateGroupId.

<br>
#### `public inline TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1af66c525d8db6c403a4f8a1af5b712d1c)`()` <a id="structFRHAPI__QueueConfigV2_1af66c525d8db6c403a4f8a1af5b712d1c"></a>

Gets the value of LegacyConfig_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1af765aa0a081f198ae0880e52fcb9a04b)`() const` <a id="structFRHAPI__QueueConfigV2_1af765aa0a081f198ae0880e52fcb9a04b"></a>

Gets the value of LegacyConfig_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1a13c7b8c96a7b247a0810c404744dea56)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__QueueConfigV2_1a13c7b8c96a7b247a0810c404744dea56"></a>

Gets the value of LegacyConfig_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetLegacyConfig`](#structFRHAPI__QueueConfigV2_1aec1c4b98d29ae9984b29fa4c37b785a2)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__QueueConfigV2_1aec1c4b98d29ae9984b29fa4c37b785a2"></a>

Fills OutValue with the value of LegacyConfig_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__QueueConfigV2_1aac6b5e86780317e9dff3b294ba0f825c)`()` <a id="structFRHAPI__QueueConfigV2_1aac6b5e86780317e9dff3b294ba0f825c"></a>

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetLegacyConfigOrNull`](#structFRHAPI__QueueConfigV2_1abf731448f02c7b0aa22fbfd9a12ac841)`() const` <a id="structFRHAPI__QueueConfigV2_1abf731448f02c7b0aa22fbfd9a12ac841"></a>

Returns a pointer to LegacyConfig_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetLegacyConfig`](#structFRHAPI__QueueConfigV2_1a65ea9aee6bf74c93a8733fed52f62670)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__QueueConfigV2_1a65ea9aee6bf74c93a8733fed52f62670"></a>

Sets the value of LegacyConfig_Optional and also sets LegacyConfig_IsSet to true.

<br>
#### `public inline void `[`ClearLegacyConfig`](#structFRHAPI__QueueConfigV2_1a704de45777e119ee8c297892b3bfdc32)`()` <a id="structFRHAPI__QueueConfigV2_1a704de45777e119ee8c297892b3bfdc32"></a>

Clears the value of LegacyConfig_Optional and sets LegacyConfig_IsSet to false.

<br>
