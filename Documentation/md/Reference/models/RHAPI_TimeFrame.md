---
title: RHAPI_TimeFrame
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_TimeFrame`](#structFRHAPI__TimeFrame) | Time Frames are used to calculate the expiration of Inventory.

## struct `FRHAPI_TimeFrame` <a id="structFRHAPI__TimeFrame"></a>

```
struct FRHAPI_TimeFrame
  : public FRHAPI_Model
```

Time Frames are used to calculate the expiration of Inventory.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Name_Optional`](#structFRHAPI__TimeFrame_1a9f98d9b63bc7ed584b19f122871a6fce) | The name of the Time Frame.
`public bool `[`Name_IsSet`](#structFRHAPI__TimeFrame_1a59a4d8fb084ba9df3aa0f8846cfec44f) | true if Name_Optional has been set to a value
`public bool `[`Active_Optional`](#structFRHAPI__TimeFrame_1a977575282d88a38f08c66cab4b0bb1b1) | Whether or not the Time Frame is active.
`public bool `[`Active_IsSet`](#structFRHAPI__TimeFrame_1a9331dfcec5f120169f0a6d9ab933964c) | true if Active_Optional has been set to a value
`public int32 `[`Episode_Optional`](#structFRHAPI__TimeFrame_1a6f13c5bba3d4736c37c8dd34db523907) | 
`public bool `[`Episode_IsSet`](#structFRHAPI__TimeFrame_1a22d729d0fc761e3ca8aecd4b9bf1e00b) | true if Episode_Optional has been set to a value
`public int32 `[`EpisodeType_Optional`](#structFRHAPI__TimeFrame_1aa86fb2d7d68e0d1d545c6dfb1fbc5229) | 
`public bool `[`EpisodeType_IsSet`](#structFRHAPI__TimeFrame_1a09b0cf40f95f9b13341f8cd0fdbc8d0b) | true if EpisodeType_Optional has been set to a value
`public int32 `[`HourInterval_Optional`](#structFRHAPI__TimeFrame_1adcbfa15f184a815d088751cc18df818e) | Number of hours that this time frame lasts until restarting.0 interval means no repeating.
`public bool `[`HourInterval_IsSet`](#structFRHAPI__TimeFrame_1a2bdacd12b2f852433aab7d081195de09) | true if HourInterval_Optional has been set to a value
`public FDateTime `[`Start`](#structFRHAPI__TimeFrame_1a73cb11a548bd25c9db92a9aa4730ea7a) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public FDateTime `[`End`](#structFRHAPI__TimeFrame_1ad3022631cc8ca9e042b21e579e1c7056) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__TimeFrame_1a147c3051181706c6bdf0c078e9f8d44b) | Cache info for the Time Frame.
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__TimeFrame_1a35e7451323d4130ffdf6f1768334514e) | true if CacheInfo_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__TimeFrame_1a8c5ba6096db5b29dd96e0eb9087defc9)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__TimeFrame_1a50919440f291883fb76d28b5e40a06fd)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetName`](#structFRHAPI__TimeFrame_1a952a4802a4d8042126e199ff7513d9d7)`()` | Gets the value of Name_Optional, regardless of it having been set.
`public inline const FString & `[`GetName`](#structFRHAPI__TimeFrame_1a9a44cc71ebf878a36272f72fb3b3d2d8)`() const` | Gets the value of Name_Optional, regardless of it having been set.
`public inline const FString & `[`GetName`](#structFRHAPI__TimeFrame_1a0352f713fbd745447ae5241597029623)`(const FString & DefaultValue) const` | Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetName`](#structFRHAPI__TimeFrame_1a758329c3ea43e1f46586235a6f1f6c1d)`(FString & OutValue) const` | Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetNameOrNull`](#structFRHAPI__TimeFrame_1a97ee4aff65616b54499fbb532deae955)`()` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetNameOrNull`](#structFRHAPI__TimeFrame_1ab3e57f94a22b6a8778536f39af31527c)`() const` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetName`](#structFRHAPI__TimeFrame_1a2b6aa3730d162fe1d537f122483136a6)`(const FString & NewValue)` | Sets the value of Name_Optional and also sets Name_IsSet to true.
`public inline void `[`SetName`](#structFRHAPI__TimeFrame_1af76700d9c576a7d16b5b8d9db1c577a5)`(FString && NewValue)` | Sets the value of Name_Optional and also sets Name_IsSet to true using move semantics.
`public inline void `[`ClearName`](#structFRHAPI__TimeFrame_1a581126a53e4cb04c4151c1454e79aded)`()` | Clears the value of Name_Optional and sets Name_IsSet to false.
`public inline bool `[`IsNameSet`](#structFRHAPI__TimeFrame_1a94d84d4feee4fd1c4749b56d34286a49)`() const` | Checks whether Name_Optional has been set.
`public inline bool & `[`GetActive`](#structFRHAPI__TimeFrame_1af833108f0d23810c755bf177389bbbcb)`()` | Gets the value of Active_Optional, regardless of it having been set.
`public inline const bool & `[`GetActive`](#structFRHAPI__TimeFrame_1acc573477da397b8f53686c2a6edff9fd)`() const` | Gets the value of Active_Optional, regardless of it having been set.
`public inline const bool & `[`GetActive`](#structFRHAPI__TimeFrame_1a090b519f7d31de0bf3e93b56a279d84d)`(const bool & DefaultValue) const` | Gets the value of Active_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetActive`](#structFRHAPI__TimeFrame_1a2270c07de39e64c8c2a99d8dbd72070c)`(bool & OutValue) const` | Fills OutValue with the value of Active_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetActiveOrNull`](#structFRHAPI__TimeFrame_1a508e17ea1189d60f3850168d7675b947)`()` | Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetActiveOrNull`](#structFRHAPI__TimeFrame_1a0f80c7e77a12b462051be7af9c4b3ceb)`() const` | Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetActive`](#structFRHAPI__TimeFrame_1adf8e0210edf162531c1cc33dc3200945)`(const bool & NewValue)` | Sets the value of Active_Optional and also sets Active_IsSet to true.
`public inline void `[`SetActive`](#structFRHAPI__TimeFrame_1a4a51c8ebfef2e6a7a780e4f024f02a67)`(bool && NewValue)` | Sets the value of Active_Optional and also sets Active_IsSet to true using move semantics.
`public inline void `[`ClearActive`](#structFRHAPI__TimeFrame_1ad0aca5c772290bd9b2c69b0e95cac039)`()` | Clears the value of Active_Optional and sets Active_IsSet to false.
`public inline bool `[`IsActiveSet`](#structFRHAPI__TimeFrame_1aa05d94f6f8a14f013a55b823c9801670)`() const` | Checks whether Active_Optional has been set.
`public inline bool `[`IsActiveDefaultValue`](#structFRHAPI__TimeFrame_1a868ac1cf044aba574f8b71380cd5c84e)`() const` | Returns true if Active_Optional is set and matches the default value.
`public inline void `[`SetActiveToDefault`](#structFRHAPI__TimeFrame_1ac3e33f300357adaafe87c2d29e058a31)`()` | Sets the value of Active_Optional to its default and also sets Active_IsSet to true.
`public inline int32 & `[`GetEpisode`](#structFRHAPI__TimeFrame_1a595fd652865bb009c365d9016b77ef3c)`()` | Gets the value of Episode_Optional, regardless of it having been set.
`public inline const int32 & `[`GetEpisode`](#structFRHAPI__TimeFrame_1a7a35b228bdcdd97007132bd655821a6b)`() const` | Gets the value of Episode_Optional, regardless of it having been set.
`public inline const int32 & `[`GetEpisode`](#structFRHAPI__TimeFrame_1ad49908c4cd0897bf366d279a93b36461)`(const int32 & DefaultValue) const` | Gets the value of Episode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEpisode`](#structFRHAPI__TimeFrame_1afdb8b52fa67192b5b84ea28055e6933d)`(int32 & OutValue) const` | Fills OutValue with the value of Episode_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetEpisodeOrNull`](#structFRHAPI__TimeFrame_1a2d5b08ebfb161ebcd13e96b28693fbaa)`()` | Returns a pointer to Episode_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetEpisodeOrNull`](#structFRHAPI__TimeFrame_1a641e4d6f74277fc91e8b0d157373d4f2)`() const` | Returns a pointer to Episode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEpisode`](#structFRHAPI__TimeFrame_1a85fc0ed2b27cc005ce9f9e375ee02e55)`(const int32 & NewValue)` | Sets the value of Episode_Optional and also sets Episode_IsSet to true.
`public inline void `[`SetEpisode`](#structFRHAPI__TimeFrame_1af31f55a5df19d62398ca8ad582f92c59)`(int32 && NewValue)` | Sets the value of Episode_Optional and also sets Episode_IsSet to true using move semantics.
`public inline void `[`ClearEpisode`](#structFRHAPI__TimeFrame_1a2f88f072cc4379db7a5e9355178dedcd)`()` | Clears the value of Episode_Optional and sets Episode_IsSet to false.
`public inline bool `[`IsEpisodeSet`](#structFRHAPI__TimeFrame_1acd56fc53175186fa2a084040ff72040c)`() const` | Checks whether Episode_Optional has been set.
`public inline bool `[`IsEpisodeDefaultValue`](#structFRHAPI__TimeFrame_1a3c1c4726e257599575433177bab44d2f)`() const` | Returns true if Episode_Optional is set and matches the default value.
`public inline void `[`SetEpisodeToDefault`](#structFRHAPI__TimeFrame_1a7dd090778af7205fb0076af77f84e4d5)`()` | Sets the value of Episode_Optional to its default and also sets Episode_IsSet to true.
`public inline int32 & `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1ab6fdd77056f3f10bd0910127c3c34d35)`()` | Gets the value of EpisodeType_Optional, regardless of it having been set.
`public inline const int32 & `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1ae6d77598d88af9560ff06c8e110c5d63)`() const` | Gets the value of EpisodeType_Optional, regardless of it having been set.
`public inline const int32 & `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1a9554a22c44a650bb3159b302ec711050)`(const int32 & DefaultValue) const` | Gets the value of EpisodeType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1a6ec55307d4f45826becb235276a81bc0)`(int32 & OutValue) const` | Fills OutValue with the value of EpisodeType_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetEpisodeTypeOrNull`](#structFRHAPI__TimeFrame_1a3d7571c7300e81d24b925c8d1326aab1)`()` | Returns a pointer to EpisodeType_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetEpisodeTypeOrNull`](#structFRHAPI__TimeFrame_1aede2a2cebce84328224ecdd80d7fffd1)`() const` | Returns a pointer to EpisodeType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEpisodeType`](#structFRHAPI__TimeFrame_1aa1f0fe9acc79f543ae69717f82bc7f07)`(const int32 & NewValue)` | Sets the value of EpisodeType_Optional and also sets EpisodeType_IsSet to true.
`public inline void `[`SetEpisodeType`](#structFRHAPI__TimeFrame_1a0d039f254312db0611d5ae4b4698201b)`(int32 && NewValue)` | Sets the value of EpisodeType_Optional and also sets EpisodeType_IsSet to true using move semantics.
`public inline void `[`ClearEpisodeType`](#structFRHAPI__TimeFrame_1ac593875efb4429774428eb2de7ff4eb9)`()` | Clears the value of EpisodeType_Optional and sets EpisodeType_IsSet to false.
`public inline bool `[`IsEpisodeTypeSet`](#structFRHAPI__TimeFrame_1aa3948c743870c0fca05f0692c4992c78)`() const` | Checks whether EpisodeType_Optional has been set.
`public inline bool `[`IsEpisodeTypeDefaultValue`](#structFRHAPI__TimeFrame_1ab1cc20719aabc912a5fb97d99ee0e211)`() const` | Returns true if EpisodeType_Optional is set and matches the default value.
`public inline void `[`SetEpisodeTypeToDefault`](#structFRHAPI__TimeFrame_1a211e7b5d08b87886daddaf325358ee15)`()` | Sets the value of EpisodeType_Optional to its default and also sets EpisodeType_IsSet to true.
`public inline int32 & `[`GetHourInterval`](#structFRHAPI__TimeFrame_1afdf55d495afd2146764b2d292ebefd81)`()` | Gets the value of HourInterval_Optional, regardless of it having been set.
`public inline const int32 & `[`GetHourInterval`](#structFRHAPI__TimeFrame_1a31a4e601ae5d906edf13b2257f0da4b8)`() const` | Gets the value of HourInterval_Optional, regardless of it having been set.
`public inline const int32 & `[`GetHourInterval`](#structFRHAPI__TimeFrame_1ab9779705ff0e13b32fe9bb35ca8c1cd2)`(const int32 & DefaultValue) const` | Gets the value of HourInterval_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHourInterval`](#structFRHAPI__TimeFrame_1ace7da4e14654b9de551fcedf243ef83a)`(int32 & OutValue) const` | Fills OutValue with the value of HourInterval_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetHourIntervalOrNull`](#structFRHAPI__TimeFrame_1a338a89f292121df2c718e8e8efd4d670)`()` | Returns a pointer to HourInterval_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetHourIntervalOrNull`](#structFRHAPI__TimeFrame_1a4d5c7d754d28b41842d03e34598d6ddb)`() const` | Returns a pointer to HourInterval_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHourInterval`](#structFRHAPI__TimeFrame_1a096e26c1f4005b9c491f45d21fd87823)`(const int32 & NewValue)` | Sets the value of HourInterval_Optional and also sets HourInterval_IsSet to true.
`public inline void `[`SetHourInterval`](#structFRHAPI__TimeFrame_1ae05fd793a0ef5aa5cf1e08435e41f18e)`(int32 && NewValue)` | Sets the value of HourInterval_Optional and also sets HourInterval_IsSet to true using move semantics.
`public inline void `[`ClearHourInterval`](#structFRHAPI__TimeFrame_1a7488c51a0f1ecd54b148cc00009ef711)`()` | Clears the value of HourInterval_Optional and sets HourInterval_IsSet to false.
`public inline bool `[`IsHourIntervalSet`](#structFRHAPI__TimeFrame_1a1dd1f6d9ef520cc44f685e2b6c69e776)`() const` | Checks whether HourInterval_Optional has been set.
`public inline bool `[`IsHourIntervalDefaultValue`](#structFRHAPI__TimeFrame_1adaaf6dfb8a78bdd20d76260a45d65d95)`() const` | Returns true if HourInterval_Optional is set and matches the default value.
`public inline void `[`SetHourIntervalToDefault`](#structFRHAPI__TimeFrame_1a1b3affee895187185d25a80d848097c6)`()` | Sets the value of HourInterval_Optional to its default and also sets HourInterval_IsSet to true.
`public inline FDateTime & `[`GetStart`](#structFRHAPI__TimeFrame_1a0b50db032a062ef7f3d27c729af5543a)`()` | Gets the value of Start.
`public inline const FDateTime & `[`GetStart`](#structFRHAPI__TimeFrame_1a5d8ea739dd79c97e3092f5827556d0c2)`() const` | Gets the value of Start.
`public inline void `[`SetStart`](#structFRHAPI__TimeFrame_1ae5a23a1c98943888751086a83317e905)`(const FDateTime & NewValue)` | Sets the value of Start.
`public inline void `[`SetStart`](#structFRHAPI__TimeFrame_1a248f33e2b9da67385abd5370682d0928)`(FDateTime && NewValue)` | Sets the value of Start using move semantics.
`public inline FDateTime & `[`GetEnd`](#structFRHAPI__TimeFrame_1acbb16dd1b600de5573eb8fe53df57721)`()` | Gets the value of End.
`public inline const FDateTime & `[`GetEnd`](#structFRHAPI__TimeFrame_1a100050feb98b46e1e216baa430592346)`() const` | Gets the value of End.
`public inline void `[`SetEnd`](#structFRHAPI__TimeFrame_1a2aa68b170888ecc63b811855dab2b514)`(const FDateTime & NewValue)` | Sets the value of End.
`public inline void `[`SetEnd`](#structFRHAPI__TimeFrame_1a20980b33dd83900c6ec5c10e25b697cd)`(FDateTime && NewValue)` | Sets the value of End using move semantics.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1a177f557db6c8b54ad83811826e0ac574)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1a46e3d8e9853e1f3ce7957edd2369d59c)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1ae3a77dab2c8a72a70a2413ba0a25f737)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1ab2d06ff4c1f1c9d37c6fcae1e33878b8)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrame_1a0a068af28667855f0c6892d6261d17c8)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrame_1a34fcde157131467fdd239fb210fc7135)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__TimeFrame_1a16eb4bafb287d3a668539440b25c376d)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`SetCacheInfo`](#structFRHAPI__TimeFrame_1a35c2ab3e943bf2e56280c6209c3d273d)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__TimeFrame_1a38a9e13c08ae05b91dd35621c129a2d1)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline bool `[`IsCacheInfoSet`](#structFRHAPI__TimeFrame_1af36cdcffec95df40a6502886271f1091)`() const` | Checks whether CacheInfo_Optional has been set.

### Members

#### `public FString `[`Name_Optional`](#structFRHAPI__TimeFrame_1a9f98d9b63bc7ed584b19f122871a6fce) <a id="structFRHAPI__TimeFrame_1a9f98d9b63bc7ed584b19f122871a6fce"></a>

The name of the Time Frame.

#### `public bool `[`Name_IsSet`](#structFRHAPI__TimeFrame_1a59a4d8fb084ba9df3aa0f8846cfec44f) <a id="structFRHAPI__TimeFrame_1a59a4d8fb084ba9df3aa0f8846cfec44f"></a>

true if Name_Optional has been set to a value

#### `public bool `[`Active_Optional`](#structFRHAPI__TimeFrame_1a977575282d88a38f08c66cab4b0bb1b1) <a id="structFRHAPI__TimeFrame_1a977575282d88a38f08c66cab4b0bb1b1"></a>

Whether or not the Time Frame is active.

#### `public bool `[`Active_IsSet`](#structFRHAPI__TimeFrame_1a9331dfcec5f120169f0a6d9ab933964c) <a id="structFRHAPI__TimeFrame_1a9331dfcec5f120169f0a6d9ab933964c"></a>

true if Active_Optional has been set to a value

#### `public int32 `[`Episode_Optional`](#structFRHAPI__TimeFrame_1a6f13c5bba3d4736c37c8dd34db523907) <a id="structFRHAPI__TimeFrame_1a6f13c5bba3d4736c37c8dd34db523907"></a>

#### `public bool `[`Episode_IsSet`](#structFRHAPI__TimeFrame_1a22d729d0fc761e3ca8aecd4b9bf1e00b) <a id="structFRHAPI__TimeFrame_1a22d729d0fc761e3ca8aecd4b9bf1e00b"></a>

true if Episode_Optional has been set to a value

#### `public int32 `[`EpisodeType_Optional`](#structFRHAPI__TimeFrame_1aa86fb2d7d68e0d1d545c6dfb1fbc5229) <a id="structFRHAPI__TimeFrame_1aa86fb2d7d68e0d1d545c6dfb1fbc5229"></a>

#### `public bool `[`EpisodeType_IsSet`](#structFRHAPI__TimeFrame_1a09b0cf40f95f9b13341f8cd0fdbc8d0b) <a id="structFRHAPI__TimeFrame_1a09b0cf40f95f9b13341f8cd0fdbc8d0b"></a>

true if EpisodeType_Optional has been set to a value

#### `public int32 `[`HourInterval_Optional`](#structFRHAPI__TimeFrame_1adcbfa15f184a815d088751cc18df818e) <a id="structFRHAPI__TimeFrame_1adcbfa15f184a815d088751cc18df818e"></a>

Number of hours that this time frame lasts until restarting.0 interval means no repeating.

#### `public bool `[`HourInterval_IsSet`](#structFRHAPI__TimeFrame_1a2bdacd12b2f852433aab7d081195de09) <a id="structFRHAPI__TimeFrame_1a2bdacd12b2f852433aab7d081195de09"></a>

true if HourInterval_Optional has been set to a value

#### `public FDateTime `[`Start`](#structFRHAPI__TimeFrame_1a73cb11a548bd25c9db92a9aa4730ea7a) <a id="structFRHAPI__TimeFrame_1a73cb11a548bd25c9db92a9aa4730ea7a"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public FDateTime `[`End`](#structFRHAPI__TimeFrame_1ad3022631cc8ca9e042b21e579e1c7056) <a id="structFRHAPI__TimeFrame_1ad3022631cc8ca9e042b21e579e1c7056"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__TimeFrame_1a147c3051181706c6bdf0c078e9f8d44b) <a id="structFRHAPI__TimeFrame_1a147c3051181706c6bdf0c078e9f8d44b"></a>

Cache info for the Time Frame.

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__TimeFrame_1a35e7451323d4130ffdf6f1768334514e) <a id="structFRHAPI__TimeFrame_1a35e7451323d4130ffdf6f1768334514e"></a>

true if CacheInfo_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__TimeFrame_1a8c5ba6096db5b29dd96e0eb9087defc9)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__TimeFrame_1a8c5ba6096db5b29dd96e0eb9087defc9"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__TimeFrame_1a50919440f291883fb76d28b5e40a06fd)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__TimeFrame_1a50919440f291883fb76d28b5e40a06fd"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetName`](#structFRHAPI__TimeFrame_1a952a4802a4d8042126e199ff7513d9d7)`()` <a id="structFRHAPI__TimeFrame_1a952a4802a4d8042126e199ff7513d9d7"></a>

Gets the value of Name_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetName`](#structFRHAPI__TimeFrame_1a9a44cc71ebf878a36272f72fb3b3d2d8)`() const` <a id="structFRHAPI__TimeFrame_1a9a44cc71ebf878a36272f72fb3b3d2d8"></a>

Gets the value of Name_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetName`](#structFRHAPI__TimeFrame_1a0352f713fbd745447ae5241597029623)`(const FString & DefaultValue) const` <a id="structFRHAPI__TimeFrame_1a0352f713fbd745447ae5241597029623"></a>

Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetName`](#structFRHAPI__TimeFrame_1a758329c3ea43e1f46586235a6f1f6c1d)`(FString & OutValue) const` <a id="structFRHAPI__TimeFrame_1a758329c3ea43e1f46586235a6f1f6c1d"></a>

Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetNameOrNull`](#structFRHAPI__TimeFrame_1a97ee4aff65616b54499fbb532deae955)`()` <a id="structFRHAPI__TimeFrame_1a97ee4aff65616b54499fbb532deae955"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetNameOrNull`](#structFRHAPI__TimeFrame_1ab3e57f94a22b6a8778536f39af31527c)`() const` <a id="structFRHAPI__TimeFrame_1ab3e57f94a22b6a8778536f39af31527c"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetName`](#structFRHAPI__TimeFrame_1a2b6aa3730d162fe1d537f122483136a6)`(const FString & NewValue)` <a id="structFRHAPI__TimeFrame_1a2b6aa3730d162fe1d537f122483136a6"></a>

Sets the value of Name_Optional and also sets Name_IsSet to true.

#### `public inline void `[`SetName`](#structFRHAPI__TimeFrame_1af76700d9c576a7d16b5b8d9db1c577a5)`(FString && NewValue)` <a id="structFRHAPI__TimeFrame_1af76700d9c576a7d16b5b8d9db1c577a5"></a>

Sets the value of Name_Optional and also sets Name_IsSet to true using move semantics.

#### `public inline void `[`ClearName`](#structFRHAPI__TimeFrame_1a581126a53e4cb04c4151c1454e79aded)`()` <a id="structFRHAPI__TimeFrame_1a581126a53e4cb04c4151c1454e79aded"></a>

Clears the value of Name_Optional and sets Name_IsSet to false.

#### `public inline bool `[`IsNameSet`](#structFRHAPI__TimeFrame_1a94d84d4feee4fd1c4749b56d34286a49)`() const` <a id="structFRHAPI__TimeFrame_1a94d84d4feee4fd1c4749b56d34286a49"></a>

Checks whether Name_Optional has been set.

#### `public inline bool & `[`GetActive`](#structFRHAPI__TimeFrame_1af833108f0d23810c755bf177389bbbcb)`()` <a id="structFRHAPI__TimeFrame_1af833108f0d23810c755bf177389bbbcb"></a>

Gets the value of Active_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetActive`](#structFRHAPI__TimeFrame_1acc573477da397b8f53686c2a6edff9fd)`() const` <a id="structFRHAPI__TimeFrame_1acc573477da397b8f53686c2a6edff9fd"></a>

Gets the value of Active_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetActive`](#structFRHAPI__TimeFrame_1a090b519f7d31de0bf3e93b56a279d84d)`(const bool & DefaultValue) const` <a id="structFRHAPI__TimeFrame_1a090b519f7d31de0bf3e93b56a279d84d"></a>

Gets the value of Active_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetActive`](#structFRHAPI__TimeFrame_1a2270c07de39e64c8c2a99d8dbd72070c)`(bool & OutValue) const` <a id="structFRHAPI__TimeFrame_1a2270c07de39e64c8c2a99d8dbd72070c"></a>

Fills OutValue with the value of Active_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetActiveOrNull`](#structFRHAPI__TimeFrame_1a508e17ea1189d60f3850168d7675b947)`()` <a id="structFRHAPI__TimeFrame_1a508e17ea1189d60f3850168d7675b947"></a>

Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetActiveOrNull`](#structFRHAPI__TimeFrame_1a0f80c7e77a12b462051be7af9c4b3ceb)`() const` <a id="structFRHAPI__TimeFrame_1a0f80c7e77a12b462051be7af9c4b3ceb"></a>

Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetActive`](#structFRHAPI__TimeFrame_1adf8e0210edf162531c1cc33dc3200945)`(const bool & NewValue)` <a id="structFRHAPI__TimeFrame_1adf8e0210edf162531c1cc33dc3200945"></a>

Sets the value of Active_Optional and also sets Active_IsSet to true.

#### `public inline void `[`SetActive`](#structFRHAPI__TimeFrame_1a4a51c8ebfef2e6a7a780e4f024f02a67)`(bool && NewValue)` <a id="structFRHAPI__TimeFrame_1a4a51c8ebfef2e6a7a780e4f024f02a67"></a>

Sets the value of Active_Optional and also sets Active_IsSet to true using move semantics.

#### `public inline void `[`ClearActive`](#structFRHAPI__TimeFrame_1ad0aca5c772290bd9b2c69b0e95cac039)`()` <a id="structFRHAPI__TimeFrame_1ad0aca5c772290bd9b2c69b0e95cac039"></a>

Clears the value of Active_Optional and sets Active_IsSet to false.

#### `public inline bool `[`IsActiveSet`](#structFRHAPI__TimeFrame_1aa05d94f6f8a14f013a55b823c9801670)`() const` <a id="structFRHAPI__TimeFrame_1aa05d94f6f8a14f013a55b823c9801670"></a>

Checks whether Active_Optional has been set.

#### `public inline bool `[`IsActiveDefaultValue`](#structFRHAPI__TimeFrame_1a868ac1cf044aba574f8b71380cd5c84e)`() const` <a id="structFRHAPI__TimeFrame_1a868ac1cf044aba574f8b71380cd5c84e"></a>

Returns true if Active_Optional is set and matches the default value.

#### `public inline void `[`SetActiveToDefault`](#structFRHAPI__TimeFrame_1ac3e33f300357adaafe87c2d29e058a31)`()` <a id="structFRHAPI__TimeFrame_1ac3e33f300357adaafe87c2d29e058a31"></a>

Sets the value of Active_Optional to its default and also sets Active_IsSet to true.

#### `public inline int32 & `[`GetEpisode`](#structFRHAPI__TimeFrame_1a595fd652865bb009c365d9016b77ef3c)`()` <a id="structFRHAPI__TimeFrame_1a595fd652865bb009c365d9016b77ef3c"></a>

Gets the value of Episode_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetEpisode`](#structFRHAPI__TimeFrame_1a7a35b228bdcdd97007132bd655821a6b)`() const` <a id="structFRHAPI__TimeFrame_1a7a35b228bdcdd97007132bd655821a6b"></a>

Gets the value of Episode_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetEpisode`](#structFRHAPI__TimeFrame_1ad49908c4cd0897bf366d279a93b36461)`(const int32 & DefaultValue) const` <a id="structFRHAPI__TimeFrame_1ad49908c4cd0897bf366d279a93b36461"></a>

Gets the value of Episode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEpisode`](#structFRHAPI__TimeFrame_1afdb8b52fa67192b5b84ea28055e6933d)`(int32 & OutValue) const` <a id="structFRHAPI__TimeFrame_1afdb8b52fa67192b5b84ea28055e6933d"></a>

Fills OutValue with the value of Episode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetEpisodeOrNull`](#structFRHAPI__TimeFrame_1a2d5b08ebfb161ebcd13e96b28693fbaa)`()` <a id="structFRHAPI__TimeFrame_1a2d5b08ebfb161ebcd13e96b28693fbaa"></a>

Returns a pointer to Episode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetEpisodeOrNull`](#structFRHAPI__TimeFrame_1a641e4d6f74277fc91e8b0d157373d4f2)`() const` <a id="structFRHAPI__TimeFrame_1a641e4d6f74277fc91e8b0d157373d4f2"></a>

Returns a pointer to Episode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEpisode`](#structFRHAPI__TimeFrame_1a85fc0ed2b27cc005ce9f9e375ee02e55)`(const int32 & NewValue)` <a id="structFRHAPI__TimeFrame_1a85fc0ed2b27cc005ce9f9e375ee02e55"></a>

Sets the value of Episode_Optional and also sets Episode_IsSet to true.

#### `public inline void `[`SetEpisode`](#structFRHAPI__TimeFrame_1af31f55a5df19d62398ca8ad582f92c59)`(int32 && NewValue)` <a id="structFRHAPI__TimeFrame_1af31f55a5df19d62398ca8ad582f92c59"></a>

Sets the value of Episode_Optional and also sets Episode_IsSet to true using move semantics.

#### `public inline void `[`ClearEpisode`](#structFRHAPI__TimeFrame_1a2f88f072cc4379db7a5e9355178dedcd)`()` <a id="structFRHAPI__TimeFrame_1a2f88f072cc4379db7a5e9355178dedcd"></a>

Clears the value of Episode_Optional and sets Episode_IsSet to false.

#### `public inline bool `[`IsEpisodeSet`](#structFRHAPI__TimeFrame_1acd56fc53175186fa2a084040ff72040c)`() const` <a id="structFRHAPI__TimeFrame_1acd56fc53175186fa2a084040ff72040c"></a>

Checks whether Episode_Optional has been set.

#### `public inline bool `[`IsEpisodeDefaultValue`](#structFRHAPI__TimeFrame_1a3c1c4726e257599575433177bab44d2f)`() const` <a id="structFRHAPI__TimeFrame_1a3c1c4726e257599575433177bab44d2f"></a>

Returns true if Episode_Optional is set and matches the default value.

#### `public inline void `[`SetEpisodeToDefault`](#structFRHAPI__TimeFrame_1a7dd090778af7205fb0076af77f84e4d5)`()` <a id="structFRHAPI__TimeFrame_1a7dd090778af7205fb0076af77f84e4d5"></a>

Sets the value of Episode_Optional to its default and also sets Episode_IsSet to true.

#### `public inline int32 & `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1ab6fdd77056f3f10bd0910127c3c34d35)`()` <a id="structFRHAPI__TimeFrame_1ab6fdd77056f3f10bd0910127c3c34d35"></a>

Gets the value of EpisodeType_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1ae6d77598d88af9560ff06c8e110c5d63)`() const` <a id="structFRHAPI__TimeFrame_1ae6d77598d88af9560ff06c8e110c5d63"></a>

Gets the value of EpisodeType_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1a9554a22c44a650bb3159b302ec711050)`(const int32 & DefaultValue) const` <a id="structFRHAPI__TimeFrame_1a9554a22c44a650bb3159b302ec711050"></a>

Gets the value of EpisodeType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1a6ec55307d4f45826becb235276a81bc0)`(int32 & OutValue) const` <a id="structFRHAPI__TimeFrame_1a6ec55307d4f45826becb235276a81bc0"></a>

Fills OutValue with the value of EpisodeType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetEpisodeTypeOrNull`](#structFRHAPI__TimeFrame_1a3d7571c7300e81d24b925c8d1326aab1)`()` <a id="structFRHAPI__TimeFrame_1a3d7571c7300e81d24b925c8d1326aab1"></a>

Returns a pointer to EpisodeType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetEpisodeTypeOrNull`](#structFRHAPI__TimeFrame_1aede2a2cebce84328224ecdd80d7fffd1)`() const` <a id="structFRHAPI__TimeFrame_1aede2a2cebce84328224ecdd80d7fffd1"></a>

Returns a pointer to EpisodeType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEpisodeType`](#structFRHAPI__TimeFrame_1aa1f0fe9acc79f543ae69717f82bc7f07)`(const int32 & NewValue)` <a id="structFRHAPI__TimeFrame_1aa1f0fe9acc79f543ae69717f82bc7f07"></a>

Sets the value of EpisodeType_Optional and also sets EpisodeType_IsSet to true.

#### `public inline void `[`SetEpisodeType`](#structFRHAPI__TimeFrame_1a0d039f254312db0611d5ae4b4698201b)`(int32 && NewValue)` <a id="structFRHAPI__TimeFrame_1a0d039f254312db0611d5ae4b4698201b"></a>

Sets the value of EpisodeType_Optional and also sets EpisodeType_IsSet to true using move semantics.

#### `public inline void `[`ClearEpisodeType`](#structFRHAPI__TimeFrame_1ac593875efb4429774428eb2de7ff4eb9)`()` <a id="structFRHAPI__TimeFrame_1ac593875efb4429774428eb2de7ff4eb9"></a>

Clears the value of EpisodeType_Optional and sets EpisodeType_IsSet to false.

#### `public inline bool `[`IsEpisodeTypeSet`](#structFRHAPI__TimeFrame_1aa3948c743870c0fca05f0692c4992c78)`() const` <a id="structFRHAPI__TimeFrame_1aa3948c743870c0fca05f0692c4992c78"></a>

Checks whether EpisodeType_Optional has been set.

#### `public inline bool `[`IsEpisodeTypeDefaultValue`](#structFRHAPI__TimeFrame_1ab1cc20719aabc912a5fb97d99ee0e211)`() const` <a id="structFRHAPI__TimeFrame_1ab1cc20719aabc912a5fb97d99ee0e211"></a>

Returns true if EpisodeType_Optional is set and matches the default value.

#### `public inline void `[`SetEpisodeTypeToDefault`](#structFRHAPI__TimeFrame_1a211e7b5d08b87886daddaf325358ee15)`()` <a id="structFRHAPI__TimeFrame_1a211e7b5d08b87886daddaf325358ee15"></a>

Sets the value of EpisodeType_Optional to its default and also sets EpisodeType_IsSet to true.

#### `public inline int32 & `[`GetHourInterval`](#structFRHAPI__TimeFrame_1afdf55d495afd2146764b2d292ebefd81)`()` <a id="structFRHAPI__TimeFrame_1afdf55d495afd2146764b2d292ebefd81"></a>

Gets the value of HourInterval_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetHourInterval`](#structFRHAPI__TimeFrame_1a31a4e601ae5d906edf13b2257f0da4b8)`() const` <a id="structFRHAPI__TimeFrame_1a31a4e601ae5d906edf13b2257f0da4b8"></a>

Gets the value of HourInterval_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetHourInterval`](#structFRHAPI__TimeFrame_1ab9779705ff0e13b32fe9bb35ca8c1cd2)`(const int32 & DefaultValue) const` <a id="structFRHAPI__TimeFrame_1ab9779705ff0e13b32fe9bb35ca8c1cd2"></a>

Gets the value of HourInterval_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHourInterval`](#structFRHAPI__TimeFrame_1ace7da4e14654b9de551fcedf243ef83a)`(int32 & OutValue) const` <a id="structFRHAPI__TimeFrame_1ace7da4e14654b9de551fcedf243ef83a"></a>

Fills OutValue with the value of HourInterval_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetHourIntervalOrNull`](#structFRHAPI__TimeFrame_1a338a89f292121df2c718e8e8efd4d670)`()` <a id="structFRHAPI__TimeFrame_1a338a89f292121df2c718e8e8efd4d670"></a>

Returns a pointer to HourInterval_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetHourIntervalOrNull`](#structFRHAPI__TimeFrame_1a4d5c7d754d28b41842d03e34598d6ddb)`() const` <a id="structFRHAPI__TimeFrame_1a4d5c7d754d28b41842d03e34598d6ddb"></a>

Returns a pointer to HourInterval_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetHourInterval`](#structFRHAPI__TimeFrame_1a096e26c1f4005b9c491f45d21fd87823)`(const int32 & NewValue)` <a id="structFRHAPI__TimeFrame_1a096e26c1f4005b9c491f45d21fd87823"></a>

Sets the value of HourInterval_Optional and also sets HourInterval_IsSet to true.

#### `public inline void `[`SetHourInterval`](#structFRHAPI__TimeFrame_1ae05fd793a0ef5aa5cf1e08435e41f18e)`(int32 && NewValue)` <a id="structFRHAPI__TimeFrame_1ae05fd793a0ef5aa5cf1e08435e41f18e"></a>

Sets the value of HourInterval_Optional and also sets HourInterval_IsSet to true using move semantics.

#### `public inline void `[`ClearHourInterval`](#structFRHAPI__TimeFrame_1a7488c51a0f1ecd54b148cc00009ef711)`()` <a id="structFRHAPI__TimeFrame_1a7488c51a0f1ecd54b148cc00009ef711"></a>

Clears the value of HourInterval_Optional and sets HourInterval_IsSet to false.

#### `public inline bool `[`IsHourIntervalSet`](#structFRHAPI__TimeFrame_1a1dd1f6d9ef520cc44f685e2b6c69e776)`() const` <a id="structFRHAPI__TimeFrame_1a1dd1f6d9ef520cc44f685e2b6c69e776"></a>

Checks whether HourInterval_Optional has been set.

#### `public inline bool `[`IsHourIntervalDefaultValue`](#structFRHAPI__TimeFrame_1adaaf6dfb8a78bdd20d76260a45d65d95)`() const` <a id="structFRHAPI__TimeFrame_1adaaf6dfb8a78bdd20d76260a45d65d95"></a>

Returns true if HourInterval_Optional is set and matches the default value.

#### `public inline void `[`SetHourIntervalToDefault`](#structFRHAPI__TimeFrame_1a1b3affee895187185d25a80d848097c6)`()` <a id="structFRHAPI__TimeFrame_1a1b3affee895187185d25a80d848097c6"></a>

Sets the value of HourInterval_Optional to its default and also sets HourInterval_IsSet to true.

#### `public inline FDateTime & `[`GetStart`](#structFRHAPI__TimeFrame_1a0b50db032a062ef7f3d27c729af5543a)`()` <a id="structFRHAPI__TimeFrame_1a0b50db032a062ef7f3d27c729af5543a"></a>

Gets the value of Start.

#### `public inline const FDateTime & `[`GetStart`](#structFRHAPI__TimeFrame_1a5d8ea739dd79c97e3092f5827556d0c2)`() const` <a id="structFRHAPI__TimeFrame_1a5d8ea739dd79c97e3092f5827556d0c2"></a>

Gets the value of Start.

#### `public inline void `[`SetStart`](#structFRHAPI__TimeFrame_1ae5a23a1c98943888751086a83317e905)`(const FDateTime & NewValue)` <a id="structFRHAPI__TimeFrame_1ae5a23a1c98943888751086a83317e905"></a>

Sets the value of Start.

#### `public inline void `[`SetStart`](#structFRHAPI__TimeFrame_1a248f33e2b9da67385abd5370682d0928)`(FDateTime && NewValue)` <a id="structFRHAPI__TimeFrame_1a248f33e2b9da67385abd5370682d0928"></a>

Sets the value of Start using move semantics.

#### `public inline FDateTime & `[`GetEnd`](#structFRHAPI__TimeFrame_1acbb16dd1b600de5573eb8fe53df57721)`()` <a id="structFRHAPI__TimeFrame_1acbb16dd1b600de5573eb8fe53df57721"></a>

Gets the value of End.

#### `public inline const FDateTime & `[`GetEnd`](#structFRHAPI__TimeFrame_1a100050feb98b46e1e216baa430592346)`() const` <a id="structFRHAPI__TimeFrame_1a100050feb98b46e1e216baa430592346"></a>

Gets the value of End.

#### `public inline void `[`SetEnd`](#structFRHAPI__TimeFrame_1a2aa68b170888ecc63b811855dab2b514)`(const FDateTime & NewValue)` <a id="structFRHAPI__TimeFrame_1a2aa68b170888ecc63b811855dab2b514"></a>

Sets the value of End.

#### `public inline void `[`SetEnd`](#structFRHAPI__TimeFrame_1a20980b33dd83900c6ec5c10e25b697cd)`(FDateTime && NewValue)` <a id="structFRHAPI__TimeFrame_1a20980b33dd83900c6ec5c10e25b697cd"></a>

Sets the value of End using move semantics.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1a177f557db6c8b54ad83811826e0ac574)`()` <a id="structFRHAPI__TimeFrame_1a177f557db6c8b54ad83811826e0ac574"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1a46e3d8e9853e1f3ce7957edd2369d59c)`() const` <a id="structFRHAPI__TimeFrame_1a46e3d8e9853e1f3ce7957edd2369d59c"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1ae3a77dab2c8a72a70a2413ba0a25f737)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__TimeFrame_1ae3a77dab2c8a72a70a2413ba0a25f737"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1ab2d06ff4c1f1c9d37c6fcae1e33878b8)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__TimeFrame_1ab2d06ff4c1f1c9d37c6fcae1e33878b8"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrame_1a0a068af28667855f0c6892d6261d17c8)`()` <a id="structFRHAPI__TimeFrame_1a0a068af28667855f0c6892d6261d17c8"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrame_1a34fcde157131467fdd239fb210fc7135)`() const` <a id="structFRHAPI__TimeFrame_1a34fcde157131467fdd239fb210fc7135"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__TimeFrame_1a16eb4bafb287d3a668539440b25c376d)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__TimeFrame_1a16eb4bafb287d3a668539440b25c376d"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__TimeFrame_1a35c2ab3e943bf2e56280c6209c3d273d)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__TimeFrame_1a35c2ab3e943bf2e56280c6209c3d273d"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__TimeFrame_1a38a9e13c08ae05b91dd35621c129a2d1)`()` <a id="structFRHAPI__TimeFrame_1a38a9e13c08ae05b91dd35621c129a2d1"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline bool `[`IsCacheInfoSet`](#structFRHAPI__TimeFrame_1af36cdcffec95df40a6502886271f1091)`() const` <a id="structFRHAPI__TimeFrame_1af36cdcffec95df40a6502886271f1091"></a>

Checks whether CacheInfo_Optional has been set.

