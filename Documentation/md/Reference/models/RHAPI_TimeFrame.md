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
`public FString `[`Name_Optional`](#structFRHAPI__TimeFrame_1a9f98d9b63bc7ed584b19f122871a6fce) | 
`public bool `[`Name_IsSet`](#structFRHAPI__TimeFrame_1a59a4d8fb084ba9df3aa0f8846cfec44f) | true if Name_Optional has been set to a value
`public bool `[`Name_IsNull`](#structFRHAPI__TimeFrame_1aac9316344652a2706459b7dee08f1850) | true if Name_Optional has been explicitly set to null
`public bool `[`Active_Optional`](#structFRHAPI__TimeFrame_1a977575282d88a38f08c66cab4b0bb1b1) | Whether or not the Time Frame is active.
`public bool `[`Active_IsSet`](#structFRHAPI__TimeFrame_1a9331dfcec5f120169f0a6d9ab933964c) | true if Active_Optional has been set to a value
`public int32 `[`Episode_Optional`](#structFRHAPI__TimeFrame_1a6f13c5bba3d4736c37c8dd34db523907) | 
`public bool `[`Episode_IsSet`](#structFRHAPI__TimeFrame_1a22d729d0fc761e3ca8aecd4b9bf1e00b) | true if Episode_Optional has been set to a value
`public int32 `[`EpisodeType_Optional`](#structFRHAPI__TimeFrame_1aa86fb2d7d68e0d1d545c6dfb1fbc5229) | 
`public bool `[`EpisodeType_IsSet`](#structFRHAPI__TimeFrame_1a09b0cf40f95f9b13341f8cd0fdbc8d0b) | true if EpisodeType_Optional has been set to a value
`public int32 `[`HourInterval_Optional`](#structFRHAPI__TimeFrame_1adcbfa15f184a815d088751cc18df818e) | Number of hours that this time frame lasts until restarting.0 interval means no repeating.
`public bool `[`HourInterval_IsSet`](#structFRHAPI__TimeFrame_1a2bdacd12b2f852433aab7d081195de09) | true if HourInterval_Optional has been set to a value
`public FDateTime `[`Start`](#structFRHAPI__TimeFrame_1a73cb11a548bd25c9db92a9aa4730ea7a) | The current start of the Time Frame.
`public FDateTime `[`End`](#structFRHAPI__TimeFrame_1ad3022631cc8ca9e042b21e579e1c7056) | The current end of the Time Frame.
`public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__TimeFrame_1a147c3051181706c6bdf0c078e9f8d44b) | 
`public bool `[`CacheInfo_IsSet`](#structFRHAPI__TimeFrame_1a35e7451323d4130ffdf6f1768334514e) | true if CacheInfo_Optional has been set to a value
`public bool `[`CacheInfo_IsNull`](#structFRHAPI__TimeFrame_1a649148cd2fa99fdffb5c154feca6cd37) | true if CacheInfo_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__TimeFrame_1a8c5ba6096db5b29dd96e0eb9087defc9)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__TimeFrame_1a50919440f291883fb76d28b5e40a06fd)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetName`](#structFRHAPI__TimeFrame_1a378e13708cbb8236a05af670dac9d06d)`()` | Gets the value of Name_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__TimeFrame_1aa122e35ed27449c88c7b369eff215e56)`() const` | Gets the value of Name_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__TimeFrame_1aaa2c8f268c2d68f9320b4b62869f19a3)`(const FString & DefaultValue) const` | Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetName`](#structFRHAPI__TimeFrame_1a94a6e64fac6e741003f72f5b47a41e1f)`(FString & OutValue) const` | Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetNameOrNull`](#structFRHAPI__TimeFrame_1a968743fba2293a39dd8b5eb2aac4ad7c)`()` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetNameOrNull`](#structFRHAPI__TimeFrame_1af5349087bc363590bd8cc34020656e72)`() const` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetName`](#structFRHAPI__TimeFrame_1a294473e211f68202d2bd407df3bd098e)`(const FString & NewValue)` | Sets the value of Name_Optional and also sets Name_IsSet to true.
`public inline FORCEINLINE void `[`SetName`](#structFRHAPI__TimeFrame_1a4d58d81a9e23d9f2a07d820e1d65eb34)`(FString && NewValue)` | Sets the value of Name_Optional and also sets Name_IsSet to true using move semantics.
`public inline void `[`ClearName`](#structFRHAPI__TimeFrame_1a581126a53e4cb04c4151c1454e79aded)`()` | Clears the value of Name_Optional and sets Name_IsSet to false.
`public inline FORCEINLINE void `[`SetNameToNull`](#structFRHAPI__TimeFrame_1ade65028330652e0a447888d86edd3271)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsNameNull`](#structFRHAPI__TimeFrame_1a9d545ae83f1a3347d9cfa99e325d1b01)`() const` | Checks whether Name_Optional is set to null.
`public inline FORCEINLINE bool & `[`GetActive`](#structFRHAPI__TimeFrame_1adc4b6acf64de0d4d8bddc9ce2a7687fe)`()` | Gets the value of Active_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetActive`](#structFRHAPI__TimeFrame_1a9d52794542d061aa46161d415eaf6279)`() const` | Gets the value of Active_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetActive`](#structFRHAPI__TimeFrame_1a71f5aa5de087796eb6bcba70e20b42d7)`(const bool & DefaultValue) const` | Gets the value of Active_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetActive`](#structFRHAPI__TimeFrame_1a576d2a222372bd3266da97d7edf559ec)`(bool & OutValue) const` | Fills OutValue with the value of Active_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetActiveOrNull`](#structFRHAPI__TimeFrame_1a4b490c8b20739c1a123f793378d50a69)`()` | Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetActiveOrNull`](#structFRHAPI__TimeFrame_1aa3abb9284150bcf1f3ae73f915e59d89)`() const` | Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetActive`](#structFRHAPI__TimeFrame_1a5963b05a78a439cef9ef145243af7133)`(const bool & NewValue)` | Sets the value of Active_Optional and also sets Active_IsSet to true.
`public inline FORCEINLINE void `[`SetActive`](#structFRHAPI__TimeFrame_1a90c9e33e467f7c42df03aa31e354757d)`(bool && NewValue)` | Sets the value of Active_Optional and also sets Active_IsSet to true using move semantics.
`public inline void `[`ClearActive`](#structFRHAPI__TimeFrame_1ad0aca5c772290bd9b2c69b0e95cac039)`()` | Clears the value of Active_Optional and sets Active_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_Active`](#structFRHAPI__TimeFrame_1ae9c87e8d9d0e350701ed4fcb9e0b96ff)`()` | Returns the default value of Active.
`public inline FORCEINLINE int32 & `[`GetEpisode`](#structFRHAPI__TimeFrame_1ab5fe87f3fda923ba7b8affdf7ac405cf)`()` | Gets the value of Episode_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetEpisode`](#structFRHAPI__TimeFrame_1aaeca341774169fecccf08c61009fdb78)`() const` | Gets the value of Episode_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetEpisode`](#structFRHAPI__TimeFrame_1a32ae6005488199ee9c8457749a8edf3a)`(const int32 & DefaultValue) const` | Gets the value of Episode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEpisode`](#structFRHAPI__TimeFrame_1a15f433e9a689e42d8cc87087a04cec57)`(int32 & OutValue) const` | Fills OutValue with the value of Episode_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetEpisodeOrNull`](#structFRHAPI__TimeFrame_1aa4acc7f8df3de80b07ef92977455a458)`()` | Returns a pointer to Episode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetEpisodeOrNull`](#structFRHAPI__TimeFrame_1a244bbdde7bb851e7546d2a20a3d75e51)`() const` | Returns a pointer to Episode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEpisode`](#structFRHAPI__TimeFrame_1af2f2e4dbfc33d74d5b997b841892c4c5)`(const int32 & NewValue)` | Sets the value of Episode_Optional and also sets Episode_IsSet to true.
`public inline FORCEINLINE void `[`SetEpisode`](#structFRHAPI__TimeFrame_1a50ce1241cd7a5da243181674a0bf0011)`(int32 && NewValue)` | Sets the value of Episode_Optional and also sets Episode_IsSet to true using move semantics.
`public inline void `[`ClearEpisode`](#structFRHAPI__TimeFrame_1a2f88f072cc4379db7a5e9355178dedcd)`()` | Clears the value of Episode_Optional and sets Episode_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Episode`](#structFRHAPI__TimeFrame_1a615fc57fc7368f7d6e1de246a412ce69)`()` | Returns the default value of Episode.
`public inline FORCEINLINE int32 & `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1a73a5645cefe4d976db205e7dbc1485a2)`()` | Gets the value of EpisodeType_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1afa668a6da9600454211e213f6bb6e28d)`() const` | Gets the value of EpisodeType_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1a2d2e07aa0a05a5a817979e29b062009d)`(const int32 & DefaultValue) const` | Gets the value of EpisodeType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1aea8dd591ea1a6e50ced180dc2e4bf016)`(int32 & OutValue) const` | Fills OutValue with the value of EpisodeType_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetEpisodeTypeOrNull`](#structFRHAPI__TimeFrame_1ab8860729cec25f3dd3c05f5c109b8a7b)`()` | Returns a pointer to EpisodeType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetEpisodeTypeOrNull`](#structFRHAPI__TimeFrame_1a0836590fd25324ff4b9478695f46fdd2)`() const` | Returns a pointer to EpisodeType_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEpisodeType`](#structFRHAPI__TimeFrame_1af9ee4c97914747551cb1a2bd1ef8f219)`(const int32 & NewValue)` | Sets the value of EpisodeType_Optional and also sets EpisodeType_IsSet to true.
`public inline FORCEINLINE void `[`SetEpisodeType`](#structFRHAPI__TimeFrame_1a275bba5e1eb0853f93a92f5ac0fb0323)`(int32 && NewValue)` | Sets the value of EpisodeType_Optional and also sets EpisodeType_IsSet to true using move semantics.
`public inline void `[`ClearEpisodeType`](#structFRHAPI__TimeFrame_1ac593875efb4429774428eb2de7ff4eb9)`()` | Clears the value of EpisodeType_Optional and sets EpisodeType_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_EpisodeType`](#structFRHAPI__TimeFrame_1a9b7c883cefe166eb75f9ce58dc4601ed)`()` | Returns the default value of EpisodeType.
`public inline FORCEINLINE int32 & `[`GetHourInterval`](#structFRHAPI__TimeFrame_1ac55e4c72861ecbf1a7077aa67ccc3d9b)`()` | Gets the value of HourInterval_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetHourInterval`](#structFRHAPI__TimeFrame_1a8453c6eaeb6d6d846a914d3917547eac)`() const` | Gets the value of HourInterval_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetHourInterval`](#structFRHAPI__TimeFrame_1a3d700095417ea3d3b9add31309d1eb7e)`(const int32 & DefaultValue) const` | Gets the value of HourInterval_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetHourInterval`](#structFRHAPI__TimeFrame_1a7f298a495ddd5df7743ea6c93a205e42)`(int32 & OutValue) const` | Fills OutValue with the value of HourInterval_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetHourIntervalOrNull`](#structFRHAPI__TimeFrame_1a10be9eb5717f0137bca036c45d735ff8)`()` | Returns a pointer to HourInterval_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetHourIntervalOrNull`](#structFRHAPI__TimeFrame_1a4d231ed9b90d24a5b75b055a96163f51)`() const` | Returns a pointer to HourInterval_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetHourInterval`](#structFRHAPI__TimeFrame_1a4162a5352f48278905c6c5347a82a0aa)`(const int32 & NewValue)` | Sets the value of HourInterval_Optional and also sets HourInterval_IsSet to true.
`public inline FORCEINLINE void `[`SetHourInterval`](#structFRHAPI__TimeFrame_1a0a390f7b32a3e26f6ab8c85cf7cb7b4f)`(int32 && NewValue)` | Sets the value of HourInterval_Optional and also sets HourInterval_IsSet to true using move semantics.
`public inline void `[`ClearHourInterval`](#structFRHAPI__TimeFrame_1a7488c51a0f1ecd54b148cc00009ef711)`()` | Clears the value of HourInterval_Optional and sets HourInterval_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_HourInterval`](#structFRHAPI__TimeFrame_1a814536536fad669f0e5acacbe6cac716)`()` | Returns the default value of HourInterval.
`public inline FORCEINLINE FDateTime & `[`GetStart`](#structFRHAPI__TimeFrame_1a658bcb9b9cde8d5f43dcd3c9998e3899)`()` | Gets the value of Start.
`public inline FORCEINLINE const FDateTime & `[`GetStart`](#structFRHAPI__TimeFrame_1a3ff7d89a0ad4bbc97dc32c790f70995d)`() const` | Gets the value of Start.
`public inline FORCEINLINE void `[`SetStart`](#structFRHAPI__TimeFrame_1aaadfee01d68f68d9756d0a0ec621e674)`(const FDateTime & NewValue)` | Sets the value of Start.
`public inline FORCEINLINE void `[`SetStart`](#structFRHAPI__TimeFrame_1a53f271d4aa1ca820151bd936b1590fb1)`(FDateTime && NewValue)` | Sets the value of Start using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetEnd`](#structFRHAPI__TimeFrame_1a1a44cacec35376fab13b884ede444049)`()` | Gets the value of End.
`public inline FORCEINLINE const FDateTime & `[`GetEnd`](#structFRHAPI__TimeFrame_1af816ce2d095fce88d617d331354e3bd6)`() const` | Gets the value of End.
`public inline FORCEINLINE void `[`SetEnd`](#structFRHAPI__TimeFrame_1a9d0795b5b0c76e77ca7fd1a529329ac9)`(const FDateTime & NewValue)` | Sets the value of End.
`public inline FORCEINLINE void `[`SetEnd`](#structFRHAPI__TimeFrame_1a06c7d4decdcf0000c27d7ea3c684e64c)`(FDateTime && NewValue)` | Sets the value of End using move semantics.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1a6ac73abc6fc4945a1d013ac588dda566)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1a0bd1153b820ca0a31fddc0ac596d2729)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1a58af6bbedaf9936b79960774f89cadf8)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1aa0ca0ba824ffbe93a74d67eaaa318e7b)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrame_1a63c56f0730462ff743d2d29d41a6ad6a)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrame_1a4bc31a8178bb0e030e6d61509246e7e8)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__TimeFrame_1a401aa0af4763ec5bd064919f37eacbac)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__TimeFrame_1a37f3a404c1a3a2bfa7de2ff5c68bdb88)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__TimeFrame_1a38a9e13c08ae05b91dd35621c129a2d1)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.
`public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__TimeFrame_1a1eeb8f8061e21213d9cce1f37f41986f)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__TimeFrame_1ade817a3a1562c5be4e366e23ab4de0b6)`() const` | Checks whether CacheInfo_Optional is set to null.

### Members

#### `public FString `[`Name_Optional`](#structFRHAPI__TimeFrame_1a9f98d9b63bc7ed584b19f122871a6fce) <a id="structFRHAPI__TimeFrame_1a9f98d9b63bc7ed584b19f122871a6fce"></a>

#### `public bool `[`Name_IsSet`](#structFRHAPI__TimeFrame_1a59a4d8fb084ba9df3aa0f8846cfec44f) <a id="structFRHAPI__TimeFrame_1a59a4d8fb084ba9df3aa0f8846cfec44f"></a>

true if Name_Optional has been set to a value

#### `public bool `[`Name_IsNull`](#structFRHAPI__TimeFrame_1aac9316344652a2706459b7dee08f1850) <a id="structFRHAPI__TimeFrame_1aac9316344652a2706459b7dee08f1850"></a>

true if Name_Optional has been explicitly set to null

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

The current start of the Time Frame.

#### `public FDateTime `[`End`](#structFRHAPI__TimeFrame_1ad3022631cc8ca9e042b21e579e1c7056) <a id="structFRHAPI__TimeFrame_1ad3022631cc8ca9e042b21e579e1c7056"></a>

The current end of the Time Frame.

#### `public `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` `[`CacheInfo_Optional`](#structFRHAPI__TimeFrame_1a147c3051181706c6bdf0c078e9f8d44b) <a id="structFRHAPI__TimeFrame_1a147c3051181706c6bdf0c078e9f8d44b"></a>

#### `public bool `[`CacheInfo_IsSet`](#structFRHAPI__TimeFrame_1a35e7451323d4130ffdf6f1768334514e) <a id="structFRHAPI__TimeFrame_1a35e7451323d4130ffdf6f1768334514e"></a>

true if CacheInfo_Optional has been set to a value

#### `public bool `[`CacheInfo_IsNull`](#structFRHAPI__TimeFrame_1a649148cd2fa99fdffb5c154feca6cd37) <a id="structFRHAPI__TimeFrame_1a649148cd2fa99fdffb5c154feca6cd37"></a>

true if CacheInfo_Optional has been explicitly set to null

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

#### `public inline FORCEINLINE FString & `[`GetName`](#structFRHAPI__TimeFrame_1a378e13708cbb8236a05af670dac9d06d)`()` <a id="structFRHAPI__TimeFrame_1a378e13708cbb8236a05af670dac9d06d"></a>

Gets the value of Name_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__TimeFrame_1aa122e35ed27449c88c7b369eff215e56)`() const` <a id="structFRHAPI__TimeFrame_1aa122e35ed27449c88c7b369eff215e56"></a>

Gets the value of Name_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetName`](#structFRHAPI__TimeFrame_1aaa2c8f268c2d68f9320b4b62869f19a3)`(const FString & DefaultValue) const` <a id="structFRHAPI__TimeFrame_1aaa2c8f268c2d68f9320b4b62869f19a3"></a>

Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetName`](#structFRHAPI__TimeFrame_1a94a6e64fac6e741003f72f5b47a41e1f)`(FString & OutValue) const` <a id="structFRHAPI__TimeFrame_1a94a6e64fac6e741003f72f5b47a41e1f"></a>

Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetNameOrNull`](#structFRHAPI__TimeFrame_1a968743fba2293a39dd8b5eb2aac4ad7c)`()` <a id="structFRHAPI__TimeFrame_1a968743fba2293a39dd8b5eb2aac4ad7c"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetNameOrNull`](#structFRHAPI__TimeFrame_1af5349087bc363590bd8cc34020656e72)`() const` <a id="structFRHAPI__TimeFrame_1af5349087bc363590bd8cc34020656e72"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetName`](#structFRHAPI__TimeFrame_1a294473e211f68202d2bd407df3bd098e)`(const FString & NewValue)` <a id="structFRHAPI__TimeFrame_1a294473e211f68202d2bd407df3bd098e"></a>

Sets the value of Name_Optional and also sets Name_IsSet to true.

#### `public inline FORCEINLINE void `[`SetName`](#structFRHAPI__TimeFrame_1a4d58d81a9e23d9f2a07d820e1d65eb34)`(FString && NewValue)` <a id="structFRHAPI__TimeFrame_1a4d58d81a9e23d9f2a07d820e1d65eb34"></a>

Sets the value of Name_Optional and also sets Name_IsSet to true using move semantics.

#### `public inline void `[`ClearName`](#structFRHAPI__TimeFrame_1a581126a53e4cb04c4151c1454e79aded)`()` <a id="structFRHAPI__TimeFrame_1a581126a53e4cb04c4151c1454e79aded"></a>

Clears the value of Name_Optional and sets Name_IsSet to false.

#### `public inline FORCEINLINE void `[`SetNameToNull`](#structFRHAPI__TimeFrame_1ade65028330652e0a447888d86edd3271)`()` <a id="structFRHAPI__TimeFrame_1ade65028330652e0a447888d86edd3271"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsNameNull`](#structFRHAPI__TimeFrame_1a9d545ae83f1a3347d9cfa99e325d1b01)`() const` <a id="structFRHAPI__TimeFrame_1a9d545ae83f1a3347d9cfa99e325d1b01"></a>

Checks whether Name_Optional is set to null.

#### `public inline FORCEINLINE bool & `[`GetActive`](#structFRHAPI__TimeFrame_1adc4b6acf64de0d4d8bddc9ce2a7687fe)`()` <a id="structFRHAPI__TimeFrame_1adc4b6acf64de0d4d8bddc9ce2a7687fe"></a>

Gets the value of Active_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetActive`](#structFRHAPI__TimeFrame_1a9d52794542d061aa46161d415eaf6279)`() const` <a id="structFRHAPI__TimeFrame_1a9d52794542d061aa46161d415eaf6279"></a>

Gets the value of Active_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetActive`](#structFRHAPI__TimeFrame_1a71f5aa5de087796eb6bcba70e20b42d7)`(const bool & DefaultValue) const` <a id="structFRHAPI__TimeFrame_1a71f5aa5de087796eb6bcba70e20b42d7"></a>

Gets the value of Active_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetActive`](#structFRHAPI__TimeFrame_1a576d2a222372bd3266da97d7edf559ec)`(bool & OutValue) const` <a id="structFRHAPI__TimeFrame_1a576d2a222372bd3266da97d7edf559ec"></a>

Fills OutValue with the value of Active_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetActiveOrNull`](#structFRHAPI__TimeFrame_1a4b490c8b20739c1a123f793378d50a69)`()` <a id="structFRHAPI__TimeFrame_1a4b490c8b20739c1a123f793378d50a69"></a>

Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetActiveOrNull`](#structFRHAPI__TimeFrame_1aa3abb9284150bcf1f3ae73f915e59d89)`() const` <a id="structFRHAPI__TimeFrame_1aa3abb9284150bcf1f3ae73f915e59d89"></a>

Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetActive`](#structFRHAPI__TimeFrame_1a5963b05a78a439cef9ef145243af7133)`(const bool & NewValue)` <a id="structFRHAPI__TimeFrame_1a5963b05a78a439cef9ef145243af7133"></a>

Sets the value of Active_Optional and also sets Active_IsSet to true.

#### `public inline FORCEINLINE void `[`SetActive`](#structFRHAPI__TimeFrame_1a90c9e33e467f7c42df03aa31e354757d)`(bool && NewValue)` <a id="structFRHAPI__TimeFrame_1a90c9e33e467f7c42df03aa31e354757d"></a>

Sets the value of Active_Optional and also sets Active_IsSet to true using move semantics.

#### `public inline void `[`ClearActive`](#structFRHAPI__TimeFrame_1ad0aca5c772290bd9b2c69b0e95cac039)`()` <a id="structFRHAPI__TimeFrame_1ad0aca5c772290bd9b2c69b0e95cac039"></a>

Clears the value of Active_Optional and sets Active_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_Active`](#structFRHAPI__TimeFrame_1ae9c87e8d9d0e350701ed4fcb9e0b96ff)`()` <a id="structFRHAPI__TimeFrame_1ae9c87e8d9d0e350701ed4fcb9e0b96ff"></a>

Returns the default value of Active.

#### `public inline FORCEINLINE int32 & `[`GetEpisode`](#structFRHAPI__TimeFrame_1ab5fe87f3fda923ba7b8affdf7ac405cf)`()` <a id="structFRHAPI__TimeFrame_1ab5fe87f3fda923ba7b8affdf7ac405cf"></a>

Gets the value of Episode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetEpisode`](#structFRHAPI__TimeFrame_1aaeca341774169fecccf08c61009fdb78)`() const` <a id="structFRHAPI__TimeFrame_1aaeca341774169fecccf08c61009fdb78"></a>

Gets the value of Episode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetEpisode`](#structFRHAPI__TimeFrame_1a32ae6005488199ee9c8457749a8edf3a)`(const int32 & DefaultValue) const` <a id="structFRHAPI__TimeFrame_1a32ae6005488199ee9c8457749a8edf3a"></a>

Gets the value of Episode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEpisode`](#structFRHAPI__TimeFrame_1a15f433e9a689e42d8cc87087a04cec57)`(int32 & OutValue) const` <a id="structFRHAPI__TimeFrame_1a15f433e9a689e42d8cc87087a04cec57"></a>

Fills OutValue with the value of Episode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetEpisodeOrNull`](#structFRHAPI__TimeFrame_1aa4acc7f8df3de80b07ef92977455a458)`()` <a id="structFRHAPI__TimeFrame_1aa4acc7f8df3de80b07ef92977455a458"></a>

Returns a pointer to Episode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetEpisodeOrNull`](#structFRHAPI__TimeFrame_1a244bbdde7bb851e7546d2a20a3d75e51)`() const` <a id="structFRHAPI__TimeFrame_1a244bbdde7bb851e7546d2a20a3d75e51"></a>

Returns a pointer to Episode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEpisode`](#structFRHAPI__TimeFrame_1af2f2e4dbfc33d74d5b997b841892c4c5)`(const int32 & NewValue)` <a id="structFRHAPI__TimeFrame_1af2f2e4dbfc33d74d5b997b841892c4c5"></a>

Sets the value of Episode_Optional and also sets Episode_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEpisode`](#structFRHAPI__TimeFrame_1a50ce1241cd7a5da243181674a0bf0011)`(int32 && NewValue)` <a id="structFRHAPI__TimeFrame_1a50ce1241cd7a5da243181674a0bf0011"></a>

Sets the value of Episode_Optional and also sets Episode_IsSet to true using move semantics.

#### `public inline void `[`ClearEpisode`](#structFRHAPI__TimeFrame_1a2f88f072cc4379db7a5e9355178dedcd)`()` <a id="structFRHAPI__TimeFrame_1a2f88f072cc4379db7a5e9355178dedcd"></a>

Clears the value of Episode_Optional and sets Episode_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Episode`](#structFRHAPI__TimeFrame_1a615fc57fc7368f7d6e1de246a412ce69)`()` <a id="structFRHAPI__TimeFrame_1a615fc57fc7368f7d6e1de246a412ce69"></a>

Returns the default value of Episode.

#### `public inline FORCEINLINE int32 & `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1a73a5645cefe4d976db205e7dbc1485a2)`()` <a id="structFRHAPI__TimeFrame_1a73a5645cefe4d976db205e7dbc1485a2"></a>

Gets the value of EpisodeType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1afa668a6da9600454211e213f6bb6e28d)`() const` <a id="structFRHAPI__TimeFrame_1afa668a6da9600454211e213f6bb6e28d"></a>

Gets the value of EpisodeType_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1a2d2e07aa0a05a5a817979e29b062009d)`(const int32 & DefaultValue) const` <a id="structFRHAPI__TimeFrame_1a2d2e07aa0a05a5a817979e29b062009d"></a>

Gets the value of EpisodeType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1aea8dd591ea1a6e50ced180dc2e4bf016)`(int32 & OutValue) const` <a id="structFRHAPI__TimeFrame_1aea8dd591ea1a6e50ced180dc2e4bf016"></a>

Fills OutValue with the value of EpisodeType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetEpisodeTypeOrNull`](#structFRHAPI__TimeFrame_1ab8860729cec25f3dd3c05f5c109b8a7b)`()` <a id="structFRHAPI__TimeFrame_1ab8860729cec25f3dd3c05f5c109b8a7b"></a>

Returns a pointer to EpisodeType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetEpisodeTypeOrNull`](#structFRHAPI__TimeFrame_1a0836590fd25324ff4b9478695f46fdd2)`() const` <a id="structFRHAPI__TimeFrame_1a0836590fd25324ff4b9478695f46fdd2"></a>

Returns a pointer to EpisodeType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEpisodeType`](#structFRHAPI__TimeFrame_1af9ee4c97914747551cb1a2bd1ef8f219)`(const int32 & NewValue)` <a id="structFRHAPI__TimeFrame_1af9ee4c97914747551cb1a2bd1ef8f219"></a>

Sets the value of EpisodeType_Optional and also sets EpisodeType_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEpisodeType`](#structFRHAPI__TimeFrame_1a275bba5e1eb0853f93a92f5ac0fb0323)`(int32 && NewValue)` <a id="structFRHAPI__TimeFrame_1a275bba5e1eb0853f93a92f5ac0fb0323"></a>

Sets the value of EpisodeType_Optional and also sets EpisodeType_IsSet to true using move semantics.

#### `public inline void `[`ClearEpisodeType`](#structFRHAPI__TimeFrame_1ac593875efb4429774428eb2de7ff4eb9)`()` <a id="structFRHAPI__TimeFrame_1ac593875efb4429774428eb2de7ff4eb9"></a>

Clears the value of EpisodeType_Optional and sets EpisodeType_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_EpisodeType`](#structFRHAPI__TimeFrame_1a9b7c883cefe166eb75f9ce58dc4601ed)`()` <a id="structFRHAPI__TimeFrame_1a9b7c883cefe166eb75f9ce58dc4601ed"></a>

Returns the default value of EpisodeType.

#### `public inline FORCEINLINE int32 & `[`GetHourInterval`](#structFRHAPI__TimeFrame_1ac55e4c72861ecbf1a7077aa67ccc3d9b)`()` <a id="structFRHAPI__TimeFrame_1ac55e4c72861ecbf1a7077aa67ccc3d9b"></a>

Gets the value of HourInterval_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetHourInterval`](#structFRHAPI__TimeFrame_1a8453c6eaeb6d6d846a914d3917547eac)`() const` <a id="structFRHAPI__TimeFrame_1a8453c6eaeb6d6d846a914d3917547eac"></a>

Gets the value of HourInterval_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetHourInterval`](#structFRHAPI__TimeFrame_1a3d700095417ea3d3b9add31309d1eb7e)`(const int32 & DefaultValue) const` <a id="structFRHAPI__TimeFrame_1a3d700095417ea3d3b9add31309d1eb7e"></a>

Gets the value of HourInterval_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetHourInterval`](#structFRHAPI__TimeFrame_1a7f298a495ddd5df7743ea6c93a205e42)`(int32 & OutValue) const` <a id="structFRHAPI__TimeFrame_1a7f298a495ddd5df7743ea6c93a205e42"></a>

Fills OutValue with the value of HourInterval_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetHourIntervalOrNull`](#structFRHAPI__TimeFrame_1a10be9eb5717f0137bca036c45d735ff8)`()` <a id="structFRHAPI__TimeFrame_1a10be9eb5717f0137bca036c45d735ff8"></a>

Returns a pointer to HourInterval_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetHourIntervalOrNull`](#structFRHAPI__TimeFrame_1a4d231ed9b90d24a5b75b055a96163f51)`() const` <a id="structFRHAPI__TimeFrame_1a4d231ed9b90d24a5b75b055a96163f51"></a>

Returns a pointer to HourInterval_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetHourInterval`](#structFRHAPI__TimeFrame_1a4162a5352f48278905c6c5347a82a0aa)`(const int32 & NewValue)` <a id="structFRHAPI__TimeFrame_1a4162a5352f48278905c6c5347a82a0aa"></a>

Sets the value of HourInterval_Optional and also sets HourInterval_IsSet to true.

#### `public inline FORCEINLINE void `[`SetHourInterval`](#structFRHAPI__TimeFrame_1a0a390f7b32a3e26f6ab8c85cf7cb7b4f)`(int32 && NewValue)` <a id="structFRHAPI__TimeFrame_1a0a390f7b32a3e26f6ab8c85cf7cb7b4f"></a>

Sets the value of HourInterval_Optional and also sets HourInterval_IsSet to true using move semantics.

#### `public inline void `[`ClearHourInterval`](#structFRHAPI__TimeFrame_1a7488c51a0f1ecd54b148cc00009ef711)`()` <a id="structFRHAPI__TimeFrame_1a7488c51a0f1ecd54b148cc00009ef711"></a>

Clears the value of HourInterval_Optional and sets HourInterval_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_HourInterval`](#structFRHAPI__TimeFrame_1a814536536fad669f0e5acacbe6cac716)`()` <a id="structFRHAPI__TimeFrame_1a814536536fad669f0e5acacbe6cac716"></a>

Returns the default value of HourInterval.

#### `public inline FORCEINLINE FDateTime & `[`GetStart`](#structFRHAPI__TimeFrame_1a658bcb9b9cde8d5f43dcd3c9998e3899)`()` <a id="structFRHAPI__TimeFrame_1a658bcb9b9cde8d5f43dcd3c9998e3899"></a>

Gets the value of Start.

#### `public inline FORCEINLINE const FDateTime & `[`GetStart`](#structFRHAPI__TimeFrame_1a3ff7d89a0ad4bbc97dc32c790f70995d)`() const` <a id="structFRHAPI__TimeFrame_1a3ff7d89a0ad4bbc97dc32c790f70995d"></a>

Gets the value of Start.

#### `public inline FORCEINLINE void `[`SetStart`](#structFRHAPI__TimeFrame_1aaadfee01d68f68d9756d0a0ec621e674)`(const FDateTime & NewValue)` <a id="structFRHAPI__TimeFrame_1aaadfee01d68f68d9756d0a0ec621e674"></a>

Sets the value of Start.

#### `public inline FORCEINLINE void `[`SetStart`](#structFRHAPI__TimeFrame_1a53f271d4aa1ca820151bd936b1590fb1)`(FDateTime && NewValue)` <a id="structFRHAPI__TimeFrame_1a53f271d4aa1ca820151bd936b1590fb1"></a>

Sets the value of Start using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetEnd`](#structFRHAPI__TimeFrame_1a1a44cacec35376fab13b884ede444049)`()` <a id="structFRHAPI__TimeFrame_1a1a44cacec35376fab13b884ede444049"></a>

Gets the value of End.

#### `public inline FORCEINLINE const FDateTime & `[`GetEnd`](#structFRHAPI__TimeFrame_1af816ce2d095fce88d617d331354e3bd6)`() const` <a id="structFRHAPI__TimeFrame_1af816ce2d095fce88d617d331354e3bd6"></a>

Gets the value of End.

#### `public inline FORCEINLINE void `[`SetEnd`](#structFRHAPI__TimeFrame_1a9d0795b5b0c76e77ca7fd1a529329ac9)`(const FDateTime & NewValue)` <a id="structFRHAPI__TimeFrame_1a9d0795b5b0c76e77ca7fd1a529329ac9"></a>

Sets the value of End.

#### `public inline FORCEINLINE void `[`SetEnd`](#structFRHAPI__TimeFrame_1a06c7d4decdcf0000c27d7ea3c684e64c)`(FDateTime && NewValue)` <a id="structFRHAPI__TimeFrame_1a06c7d4decdcf0000c27d7ea3c684e64c"></a>

Sets the value of End using move semantics.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1a6ac73abc6fc4945a1d013ac588dda566)`()` <a id="structFRHAPI__TimeFrame_1a6ac73abc6fc4945a1d013ac588dda566"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1a0bd1153b820ca0a31fddc0ac596d2729)`() const` <a id="structFRHAPI__TimeFrame_1a0bd1153b820ca0a31fddc0ac596d2729"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1a58af6bbedaf9936b79960774f89cadf8)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__TimeFrame_1a58af6bbedaf9936b79960774f89cadf8"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1aa0ca0ba824ffbe93a74d67eaaa318e7b)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__TimeFrame_1aa0ca0ba824ffbe93a74d67eaaa318e7b"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrame_1a63c56f0730462ff743d2d29d41a6ad6a)`()` <a id="structFRHAPI__TimeFrame_1a63c56f0730462ff743d2d29d41a6ad6a"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrame_1a4bc31a8178bb0e030e6d61509246e7e8)`() const` <a id="structFRHAPI__TimeFrame_1a4bc31a8178bb0e030e6d61509246e7e8"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__TimeFrame_1a401aa0af4763ec5bd064919f37eacbac)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & NewValue)` <a id="structFRHAPI__TimeFrame_1a401aa0af4763ec5bd064919f37eacbac"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCacheInfo`](#structFRHAPI__TimeFrame_1a37f3a404c1a3a2bfa7de2ff5c68bdb88)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` && NewValue)` <a id="structFRHAPI__TimeFrame_1a37f3a404c1a3a2bfa7de2ff5c68bdb88"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true using move semantics.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__TimeFrame_1a38a9e13c08ae05b91dd35621c129a2d1)`()` <a id="structFRHAPI__TimeFrame_1a38a9e13c08ae05b91dd35621c129a2d1"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

#### `public inline FORCEINLINE void `[`SetCacheInfoToNull`](#structFRHAPI__TimeFrame_1a1eeb8f8061e21213d9cce1f37f41986f)`()` <a id="structFRHAPI__TimeFrame_1a1eeb8f8061e21213d9cce1f37f41986f"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsCacheInfoNull`](#structFRHAPI__TimeFrame_1ade817a3a1562c5be4e366e23ab4de0b6)`() const` <a id="structFRHAPI__TimeFrame_1ade817a3a1562c5be4e366e23ab4de0b6"></a>

Checks whether CacheInfo_Optional is set to null.

