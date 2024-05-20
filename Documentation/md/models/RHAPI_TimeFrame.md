# group `RHAPI_TimeFrame` <a id="group__RHAPI__TimeFrame"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__TimeFrame_1a6216b8f840e8a64f7415c31d82b359e4)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__TimeFrame_1a51b994d0e2578162a4385fe227282178)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetName`](#structFRHAPI__TimeFrame_1a61a9c58b46ee70d81e2db50065091133)`()` | Gets the value of Name_Optional, regardless of it having been set.
`public inline const FString & `[`GetName`](#structFRHAPI__TimeFrame_1a74a8f2660fa870509e208f709bb5f324)`() const` | Gets the value of Name_Optional, regardless of it having been set.
`public inline const FString & `[`GetName`](#structFRHAPI__TimeFrame_1a61956dabee5d81e6010fd6649465f058)`(const FString & DefaultValue) const` | Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetName`](#structFRHAPI__TimeFrame_1a758329c3ea43e1f46586235a6f1f6c1d)`(FString & OutValue) const` | Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetNameOrNull`](#structFRHAPI__TimeFrame_1aefee06dc4bfdb221312e8ace4ccd8b9a)`()` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetNameOrNull`](#structFRHAPI__TimeFrame_1a0c9e9f3dc27555d9d558b679a0e87134)`() const` | Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetName`](#structFRHAPI__TimeFrame_1a13f0f620aec5f65ba8c5c185f3073bad)`(FString NewValue)` | Sets the value of Name_Optional and also sets Name_IsSet to true.
`public inline void `[`ClearName`](#structFRHAPI__TimeFrame_1a581126a53e4cb04c4151c1454e79aded)`()` | Clears the value of Name_Optional and sets Name_IsSet to false.
`public inline bool & `[`GetActive`](#structFRHAPI__TimeFrame_1a7a12bcf20262c2009ed84473cd914405)`()` | Gets the value of Active_Optional, regardless of it having been set.
`public inline const bool & `[`GetActive`](#structFRHAPI__TimeFrame_1a5ef2ffa44fefe506cebaa4f66ce1ef48)`() const` | Gets the value of Active_Optional, regardless of it having been set.
`public inline const bool & `[`GetActive`](#structFRHAPI__TimeFrame_1a09122c2a9538d8b41f96f10e304179ad)`(const bool & DefaultValue) const` | Gets the value of Active_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetActive`](#structFRHAPI__TimeFrame_1a2270c07de39e64c8c2a99d8dbd72070c)`(bool & OutValue) const` | Fills OutValue with the value of Active_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetActiveOrNull`](#structFRHAPI__TimeFrame_1a58445f3c2933caaf91a495d153a1c17e)`()` | Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetActiveOrNull`](#structFRHAPI__TimeFrame_1a78fb77fe09a49a56f8ae44da6b33c126)`() const` | Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetActive`](#structFRHAPI__TimeFrame_1addda5b0153efc29d21fc0e0fb05f83e3)`(bool NewValue)` | Sets the value of Active_Optional and also sets Active_IsSet to true.
`public inline void `[`ClearActive`](#structFRHAPI__TimeFrame_1ad0aca5c772290bd9b2c69b0e95cac039)`()` | Clears the value of Active_Optional and sets Active_IsSet to false.
`public inline bool `[`IsActiveDefaultValue`](#structFRHAPI__TimeFrame_1a868ac1cf044aba574f8b71380cd5c84e)`() const` | Returns true if Active_Optional is set and matches the default value.
`public inline void `[`SetActiveToDefault`](#structFRHAPI__TimeFrame_1ac3e33f300357adaafe87c2d29e058a31)`()` | Sets the value of Active_Optional to its default and also sets Active_IsSet to true.
`public inline int32 & `[`GetEpisode`](#structFRHAPI__TimeFrame_1a81efe2c90e4897f348a02ec956bca5b7)`()` | Gets the value of Episode_Optional, regardless of it having been set.
`public inline const int32 & `[`GetEpisode`](#structFRHAPI__TimeFrame_1a32628e6aa1b5b3445847fdf20c413a5d)`() const` | Gets the value of Episode_Optional, regardless of it having been set.
`public inline const int32 & `[`GetEpisode`](#structFRHAPI__TimeFrame_1a188254266e1b65194afbd37059760d79)`(const int32 & DefaultValue) const` | Gets the value of Episode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEpisode`](#structFRHAPI__TimeFrame_1afdb8b52fa67192b5b84ea28055e6933d)`(int32 & OutValue) const` | Fills OutValue with the value of Episode_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetEpisodeOrNull`](#structFRHAPI__TimeFrame_1acc3e2886064a54754261a4e2ac6d7c7f)`()` | Returns a pointer to Episode_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetEpisodeOrNull`](#structFRHAPI__TimeFrame_1a84f705a43ed2aa5e7d0911b56931285b)`() const` | Returns a pointer to Episode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEpisode`](#structFRHAPI__TimeFrame_1a1ec8ed2b771aa319c36ca7b3b3adefb5)`(int32 NewValue)` | Sets the value of Episode_Optional and also sets Episode_IsSet to true.
`public inline void `[`ClearEpisode`](#structFRHAPI__TimeFrame_1a2f88f072cc4379db7a5e9355178dedcd)`()` | Clears the value of Episode_Optional and sets Episode_IsSet to false.
`public inline bool `[`IsEpisodeDefaultValue`](#structFRHAPI__TimeFrame_1a3c1c4726e257599575433177bab44d2f)`() const` | Returns true if Episode_Optional is set and matches the default value.
`public inline void `[`SetEpisodeToDefault`](#structFRHAPI__TimeFrame_1a7dd090778af7205fb0076af77f84e4d5)`()` | Sets the value of Episode_Optional to its default and also sets Episode_IsSet to true.
`public inline int32 & `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1a8fd40449d98103424b3b0ebc22b9eadd)`()` | Gets the value of EpisodeType_Optional, regardless of it having been set.
`public inline const int32 & `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1ace71d32bd19c9798ce6e5b1d3e7a7e89)`() const` | Gets the value of EpisodeType_Optional, regardless of it having been set.
`public inline const int32 & `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1aedcab36c40ce0f9c65c6caae417e85b7)`(const int32 & DefaultValue) const` | Gets the value of EpisodeType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1a6ec55307d4f45826becb235276a81bc0)`(int32 & OutValue) const` | Fills OutValue with the value of EpisodeType_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetEpisodeTypeOrNull`](#structFRHAPI__TimeFrame_1aec3237f211f5a315646ae569f15f0d3e)`()` | Returns a pointer to EpisodeType_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetEpisodeTypeOrNull`](#structFRHAPI__TimeFrame_1a537a6c6e1f3fa724593574a8b32e2a8c)`() const` | Returns a pointer to EpisodeType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEpisodeType`](#structFRHAPI__TimeFrame_1a6ecfc3bfa3501f669ab1ec62a0ce41d0)`(int32 NewValue)` | Sets the value of EpisodeType_Optional and also sets EpisodeType_IsSet to true.
`public inline void `[`ClearEpisodeType`](#structFRHAPI__TimeFrame_1ac593875efb4429774428eb2de7ff4eb9)`()` | Clears the value of EpisodeType_Optional and sets EpisodeType_IsSet to false.
`public inline bool `[`IsEpisodeTypeDefaultValue`](#structFRHAPI__TimeFrame_1ab1cc20719aabc912a5fb97d99ee0e211)`() const` | Returns true if EpisodeType_Optional is set and matches the default value.
`public inline void `[`SetEpisodeTypeToDefault`](#structFRHAPI__TimeFrame_1a211e7b5d08b87886daddaf325358ee15)`()` | Sets the value of EpisodeType_Optional to its default and also sets EpisodeType_IsSet to true.
`public inline int32 & `[`GetHourInterval`](#structFRHAPI__TimeFrame_1a96fe52c2123c0171189076b9957d5055)`()` | Gets the value of HourInterval_Optional, regardless of it having been set.
`public inline const int32 & `[`GetHourInterval`](#structFRHAPI__TimeFrame_1a98c1e1b0437597f70e1532c4aedbb0f3)`() const` | Gets the value of HourInterval_Optional, regardless of it having been set.
`public inline const int32 & `[`GetHourInterval`](#structFRHAPI__TimeFrame_1a9ed2214e9fdbda6be5f0be224d482722)`(const int32 & DefaultValue) const` | Gets the value of HourInterval_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetHourInterval`](#structFRHAPI__TimeFrame_1ace7da4e14654b9de551fcedf243ef83a)`(int32 & OutValue) const` | Fills OutValue with the value of HourInterval_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetHourIntervalOrNull`](#structFRHAPI__TimeFrame_1ae926130800a31b291758a1e7c9ce9c4d)`()` | Returns a pointer to HourInterval_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetHourIntervalOrNull`](#structFRHAPI__TimeFrame_1ab54995c9ec6e93bc721dbad614789812)`() const` | Returns a pointer to HourInterval_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetHourInterval`](#structFRHAPI__TimeFrame_1a74ed5691da10214be3e36df9804c84e6)`(int32 NewValue)` | Sets the value of HourInterval_Optional and also sets HourInterval_IsSet to true.
`public inline void `[`ClearHourInterval`](#structFRHAPI__TimeFrame_1a7488c51a0f1ecd54b148cc00009ef711)`()` | Clears the value of HourInterval_Optional and sets HourInterval_IsSet to false.
`public inline bool `[`IsHourIntervalDefaultValue`](#structFRHAPI__TimeFrame_1adaaf6dfb8a78bdd20d76260a45d65d95)`() const` | Returns true if HourInterval_Optional is set and matches the default value.
`public inline void `[`SetHourIntervalToDefault`](#structFRHAPI__TimeFrame_1a1b3affee895187185d25a80d848097c6)`()` | Sets the value of HourInterval_Optional to its default and also sets HourInterval_IsSet to true.
`public inline FDateTime & `[`GetStart`](#structFRHAPI__TimeFrame_1afcd1399a2f4d19035b6dc7e1b068b971)`()` | Gets the value of Start.
`public inline const FDateTime & `[`GetStart`](#structFRHAPI__TimeFrame_1adfea0cf9fe4c09b0e77087fe2ff3c6c6)`() const` | Gets the value of Start.
`public inline void `[`SetStart`](#structFRHAPI__TimeFrame_1a262555f788047ebb0d240f999f794f5f)`(FDateTime NewValue)` | Sets the value of Start.
`public inline FDateTime & `[`GetEnd`](#structFRHAPI__TimeFrame_1af81d214b4f63a21dfd7b0659d963ff99)`()` | Gets the value of End.
`public inline const FDateTime & `[`GetEnd`](#structFRHAPI__TimeFrame_1a20a539e8f2739e6e86bb44ca0edd15f0)`() const` | Gets the value of End.
`public inline void `[`SetEnd`](#structFRHAPI__TimeFrame_1ac9c8254d72f15326b439e637e2c68d4d)`(FDateTime NewValue)` | Sets the value of End.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1af9aa89ce323040f0ccd0c2d14b5dde29)`()` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1a62cd18465fa31e73c0a6156afdc583eb)`() const` | Gets the value of CacheInfo_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1a517db9f51a7ec1bc0ac5b04fbd2b1c6c)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` | Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1ab2d06ff4c1f1c9d37c6fcae1e33878b8)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` | Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrame_1a5d762255a302a1bf885905350c8394f0)`()` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrame_1aed405aca0d7c3ca4590cd75d145f73b9)`() const` | Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCacheInfo`](#structFRHAPI__TimeFrame_1aa780f7c451501bb1488d8264f68e141f)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` | Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.
`public inline void `[`ClearCacheInfo`](#structFRHAPI__TimeFrame_1a38a9e13c08ae05b91dd35621c129a2d1)`()` | Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

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

#### `public virtual bool `[`FromJson`](#structFRHAPI__TimeFrame_1a6216b8f840e8a64f7415c31d82b359e4)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__TimeFrame_1a6216b8f840e8a64f7415c31d82b359e4"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__TimeFrame_1a51b994d0e2578162a4385fe227282178)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__TimeFrame_1a51b994d0e2578162a4385fe227282178"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetName`](#structFRHAPI__TimeFrame_1a61a9c58b46ee70d81e2db50065091133)`()` <a id="structFRHAPI__TimeFrame_1a61a9c58b46ee70d81e2db50065091133"></a>

Gets the value of Name_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetName`](#structFRHAPI__TimeFrame_1a74a8f2660fa870509e208f709bb5f324)`() const` <a id="structFRHAPI__TimeFrame_1a74a8f2660fa870509e208f709bb5f324"></a>

Gets the value of Name_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetName`](#structFRHAPI__TimeFrame_1a61956dabee5d81e6010fd6649465f058)`(const FString & DefaultValue) const` <a id="structFRHAPI__TimeFrame_1a61956dabee5d81e6010fd6649465f058"></a>

Gets the value of Name_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetName`](#structFRHAPI__TimeFrame_1a758329c3ea43e1f46586235a6f1f6c1d)`(FString & OutValue) const` <a id="structFRHAPI__TimeFrame_1a758329c3ea43e1f46586235a6f1f6c1d"></a>

Fills OutValue with the value of Name_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetNameOrNull`](#structFRHAPI__TimeFrame_1aefee06dc4bfdb221312e8ace4ccd8b9a)`()` <a id="structFRHAPI__TimeFrame_1aefee06dc4bfdb221312e8ace4ccd8b9a"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetNameOrNull`](#structFRHAPI__TimeFrame_1a0c9e9f3dc27555d9d558b679a0e87134)`() const` <a id="structFRHAPI__TimeFrame_1a0c9e9f3dc27555d9d558b679a0e87134"></a>

Returns a pointer to Name_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetName`](#structFRHAPI__TimeFrame_1a13f0f620aec5f65ba8c5c185f3073bad)`(FString NewValue)` <a id="structFRHAPI__TimeFrame_1a13f0f620aec5f65ba8c5c185f3073bad"></a>

Sets the value of Name_Optional and also sets Name_IsSet to true.

#### `public inline void `[`ClearName`](#structFRHAPI__TimeFrame_1a581126a53e4cb04c4151c1454e79aded)`()` <a id="structFRHAPI__TimeFrame_1a581126a53e4cb04c4151c1454e79aded"></a>

Clears the value of Name_Optional and sets Name_IsSet to false.

#### `public inline bool & `[`GetActive`](#structFRHAPI__TimeFrame_1a7a12bcf20262c2009ed84473cd914405)`()` <a id="structFRHAPI__TimeFrame_1a7a12bcf20262c2009ed84473cd914405"></a>

Gets the value of Active_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetActive`](#structFRHAPI__TimeFrame_1a5ef2ffa44fefe506cebaa4f66ce1ef48)`() const` <a id="structFRHAPI__TimeFrame_1a5ef2ffa44fefe506cebaa4f66ce1ef48"></a>

Gets the value of Active_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetActive`](#structFRHAPI__TimeFrame_1a09122c2a9538d8b41f96f10e304179ad)`(const bool & DefaultValue) const` <a id="structFRHAPI__TimeFrame_1a09122c2a9538d8b41f96f10e304179ad"></a>

Gets the value of Active_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetActive`](#structFRHAPI__TimeFrame_1a2270c07de39e64c8c2a99d8dbd72070c)`(bool & OutValue) const` <a id="structFRHAPI__TimeFrame_1a2270c07de39e64c8c2a99d8dbd72070c"></a>

Fills OutValue with the value of Active_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetActiveOrNull`](#structFRHAPI__TimeFrame_1a58445f3c2933caaf91a495d153a1c17e)`()` <a id="structFRHAPI__TimeFrame_1a58445f3c2933caaf91a495d153a1c17e"></a>

Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetActiveOrNull`](#structFRHAPI__TimeFrame_1a78fb77fe09a49a56f8ae44da6b33c126)`() const` <a id="structFRHAPI__TimeFrame_1a78fb77fe09a49a56f8ae44da6b33c126"></a>

Returns a pointer to Active_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetActive`](#structFRHAPI__TimeFrame_1addda5b0153efc29d21fc0e0fb05f83e3)`(bool NewValue)` <a id="structFRHAPI__TimeFrame_1addda5b0153efc29d21fc0e0fb05f83e3"></a>

Sets the value of Active_Optional and also sets Active_IsSet to true.

#### `public inline void `[`ClearActive`](#structFRHAPI__TimeFrame_1ad0aca5c772290bd9b2c69b0e95cac039)`()` <a id="structFRHAPI__TimeFrame_1ad0aca5c772290bd9b2c69b0e95cac039"></a>

Clears the value of Active_Optional and sets Active_IsSet to false.

#### `public inline bool `[`IsActiveDefaultValue`](#structFRHAPI__TimeFrame_1a868ac1cf044aba574f8b71380cd5c84e)`() const` <a id="structFRHAPI__TimeFrame_1a868ac1cf044aba574f8b71380cd5c84e"></a>

Returns true if Active_Optional is set and matches the default value.

#### `public inline void `[`SetActiveToDefault`](#structFRHAPI__TimeFrame_1ac3e33f300357adaafe87c2d29e058a31)`()` <a id="structFRHAPI__TimeFrame_1ac3e33f300357adaafe87c2d29e058a31"></a>

Sets the value of Active_Optional to its default and also sets Active_IsSet to true.

#### `public inline int32 & `[`GetEpisode`](#structFRHAPI__TimeFrame_1a81efe2c90e4897f348a02ec956bca5b7)`()` <a id="structFRHAPI__TimeFrame_1a81efe2c90e4897f348a02ec956bca5b7"></a>

Gets the value of Episode_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetEpisode`](#structFRHAPI__TimeFrame_1a32628e6aa1b5b3445847fdf20c413a5d)`() const` <a id="structFRHAPI__TimeFrame_1a32628e6aa1b5b3445847fdf20c413a5d"></a>

Gets the value of Episode_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetEpisode`](#structFRHAPI__TimeFrame_1a188254266e1b65194afbd37059760d79)`(const int32 & DefaultValue) const` <a id="structFRHAPI__TimeFrame_1a188254266e1b65194afbd37059760d79"></a>

Gets the value of Episode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEpisode`](#structFRHAPI__TimeFrame_1afdb8b52fa67192b5b84ea28055e6933d)`(int32 & OutValue) const` <a id="structFRHAPI__TimeFrame_1afdb8b52fa67192b5b84ea28055e6933d"></a>

Fills OutValue with the value of Episode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetEpisodeOrNull`](#structFRHAPI__TimeFrame_1acc3e2886064a54754261a4e2ac6d7c7f)`()` <a id="structFRHAPI__TimeFrame_1acc3e2886064a54754261a4e2ac6d7c7f"></a>

Returns a pointer to Episode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetEpisodeOrNull`](#structFRHAPI__TimeFrame_1a84f705a43ed2aa5e7d0911b56931285b)`() const` <a id="structFRHAPI__TimeFrame_1a84f705a43ed2aa5e7d0911b56931285b"></a>

Returns a pointer to Episode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEpisode`](#structFRHAPI__TimeFrame_1a1ec8ed2b771aa319c36ca7b3b3adefb5)`(int32 NewValue)` <a id="structFRHAPI__TimeFrame_1a1ec8ed2b771aa319c36ca7b3b3adefb5"></a>

Sets the value of Episode_Optional and also sets Episode_IsSet to true.

#### `public inline void `[`ClearEpisode`](#structFRHAPI__TimeFrame_1a2f88f072cc4379db7a5e9355178dedcd)`()` <a id="structFRHAPI__TimeFrame_1a2f88f072cc4379db7a5e9355178dedcd"></a>

Clears the value of Episode_Optional and sets Episode_IsSet to false.

#### `public inline bool `[`IsEpisodeDefaultValue`](#structFRHAPI__TimeFrame_1a3c1c4726e257599575433177bab44d2f)`() const` <a id="structFRHAPI__TimeFrame_1a3c1c4726e257599575433177bab44d2f"></a>

Returns true if Episode_Optional is set and matches the default value.

#### `public inline void `[`SetEpisodeToDefault`](#structFRHAPI__TimeFrame_1a7dd090778af7205fb0076af77f84e4d5)`()` <a id="structFRHAPI__TimeFrame_1a7dd090778af7205fb0076af77f84e4d5"></a>

Sets the value of Episode_Optional to its default and also sets Episode_IsSet to true.

#### `public inline int32 & `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1a8fd40449d98103424b3b0ebc22b9eadd)`()` <a id="structFRHAPI__TimeFrame_1a8fd40449d98103424b3b0ebc22b9eadd"></a>

Gets the value of EpisodeType_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1ace71d32bd19c9798ce6e5b1d3e7a7e89)`() const` <a id="structFRHAPI__TimeFrame_1ace71d32bd19c9798ce6e5b1d3e7a7e89"></a>

Gets the value of EpisodeType_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1aedcab36c40ce0f9c65c6caae417e85b7)`(const int32 & DefaultValue) const` <a id="structFRHAPI__TimeFrame_1aedcab36c40ce0f9c65c6caae417e85b7"></a>

Gets the value of EpisodeType_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEpisodeType`](#structFRHAPI__TimeFrame_1a6ec55307d4f45826becb235276a81bc0)`(int32 & OutValue) const` <a id="structFRHAPI__TimeFrame_1a6ec55307d4f45826becb235276a81bc0"></a>

Fills OutValue with the value of EpisodeType_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetEpisodeTypeOrNull`](#structFRHAPI__TimeFrame_1aec3237f211f5a315646ae569f15f0d3e)`()` <a id="structFRHAPI__TimeFrame_1aec3237f211f5a315646ae569f15f0d3e"></a>

Returns a pointer to EpisodeType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetEpisodeTypeOrNull`](#structFRHAPI__TimeFrame_1a537a6c6e1f3fa724593574a8b32e2a8c)`() const` <a id="structFRHAPI__TimeFrame_1a537a6c6e1f3fa724593574a8b32e2a8c"></a>

Returns a pointer to EpisodeType_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEpisodeType`](#structFRHAPI__TimeFrame_1a6ecfc3bfa3501f669ab1ec62a0ce41d0)`(int32 NewValue)` <a id="structFRHAPI__TimeFrame_1a6ecfc3bfa3501f669ab1ec62a0ce41d0"></a>

Sets the value of EpisodeType_Optional and also sets EpisodeType_IsSet to true.

#### `public inline void `[`ClearEpisodeType`](#structFRHAPI__TimeFrame_1ac593875efb4429774428eb2de7ff4eb9)`()` <a id="structFRHAPI__TimeFrame_1ac593875efb4429774428eb2de7ff4eb9"></a>

Clears the value of EpisodeType_Optional and sets EpisodeType_IsSet to false.

#### `public inline bool `[`IsEpisodeTypeDefaultValue`](#structFRHAPI__TimeFrame_1ab1cc20719aabc912a5fb97d99ee0e211)`() const` <a id="structFRHAPI__TimeFrame_1ab1cc20719aabc912a5fb97d99ee0e211"></a>

Returns true if EpisodeType_Optional is set and matches the default value.

#### `public inline void `[`SetEpisodeTypeToDefault`](#structFRHAPI__TimeFrame_1a211e7b5d08b87886daddaf325358ee15)`()` <a id="structFRHAPI__TimeFrame_1a211e7b5d08b87886daddaf325358ee15"></a>

Sets the value of EpisodeType_Optional to its default and also sets EpisodeType_IsSet to true.

#### `public inline int32 & `[`GetHourInterval`](#structFRHAPI__TimeFrame_1a96fe52c2123c0171189076b9957d5055)`()` <a id="structFRHAPI__TimeFrame_1a96fe52c2123c0171189076b9957d5055"></a>

Gets the value of HourInterval_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetHourInterval`](#structFRHAPI__TimeFrame_1a98c1e1b0437597f70e1532c4aedbb0f3)`() const` <a id="structFRHAPI__TimeFrame_1a98c1e1b0437597f70e1532c4aedbb0f3"></a>

Gets the value of HourInterval_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetHourInterval`](#structFRHAPI__TimeFrame_1a9ed2214e9fdbda6be5f0be224d482722)`(const int32 & DefaultValue) const` <a id="structFRHAPI__TimeFrame_1a9ed2214e9fdbda6be5f0be224d482722"></a>

Gets the value of HourInterval_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetHourInterval`](#structFRHAPI__TimeFrame_1ace7da4e14654b9de551fcedf243ef83a)`(int32 & OutValue) const` <a id="structFRHAPI__TimeFrame_1ace7da4e14654b9de551fcedf243ef83a"></a>

Fills OutValue with the value of HourInterval_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetHourIntervalOrNull`](#structFRHAPI__TimeFrame_1ae926130800a31b291758a1e7c9ce9c4d)`()` <a id="structFRHAPI__TimeFrame_1ae926130800a31b291758a1e7c9ce9c4d"></a>

Returns a pointer to HourInterval_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetHourIntervalOrNull`](#structFRHAPI__TimeFrame_1ab54995c9ec6e93bc721dbad614789812)`() const` <a id="structFRHAPI__TimeFrame_1ab54995c9ec6e93bc721dbad614789812"></a>

Returns a pointer to HourInterval_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetHourInterval`](#structFRHAPI__TimeFrame_1a74ed5691da10214be3e36df9804c84e6)`(int32 NewValue)` <a id="structFRHAPI__TimeFrame_1a74ed5691da10214be3e36df9804c84e6"></a>

Sets the value of HourInterval_Optional and also sets HourInterval_IsSet to true.

#### `public inline void `[`ClearHourInterval`](#structFRHAPI__TimeFrame_1a7488c51a0f1ecd54b148cc00009ef711)`()` <a id="structFRHAPI__TimeFrame_1a7488c51a0f1ecd54b148cc00009ef711"></a>

Clears the value of HourInterval_Optional and sets HourInterval_IsSet to false.

#### `public inline bool `[`IsHourIntervalDefaultValue`](#structFRHAPI__TimeFrame_1adaaf6dfb8a78bdd20d76260a45d65d95)`() const` <a id="structFRHAPI__TimeFrame_1adaaf6dfb8a78bdd20d76260a45d65d95"></a>

Returns true if HourInterval_Optional is set and matches the default value.

#### `public inline void `[`SetHourIntervalToDefault`](#structFRHAPI__TimeFrame_1a1b3affee895187185d25a80d848097c6)`()` <a id="structFRHAPI__TimeFrame_1a1b3affee895187185d25a80d848097c6"></a>

Sets the value of HourInterval_Optional to its default and also sets HourInterval_IsSet to true.

#### `public inline FDateTime & `[`GetStart`](#structFRHAPI__TimeFrame_1afcd1399a2f4d19035b6dc7e1b068b971)`()` <a id="structFRHAPI__TimeFrame_1afcd1399a2f4d19035b6dc7e1b068b971"></a>

Gets the value of Start.

#### `public inline const FDateTime & `[`GetStart`](#structFRHAPI__TimeFrame_1adfea0cf9fe4c09b0e77087fe2ff3c6c6)`() const` <a id="structFRHAPI__TimeFrame_1adfea0cf9fe4c09b0e77087fe2ff3c6c6"></a>

Gets the value of Start.

#### `public inline void `[`SetStart`](#structFRHAPI__TimeFrame_1a262555f788047ebb0d240f999f794f5f)`(FDateTime NewValue)` <a id="structFRHAPI__TimeFrame_1a262555f788047ebb0d240f999f794f5f"></a>

Sets the value of Start.

#### `public inline FDateTime & `[`GetEnd`](#structFRHAPI__TimeFrame_1af81d214b4f63a21dfd7b0659d963ff99)`()` <a id="structFRHAPI__TimeFrame_1af81d214b4f63a21dfd7b0659d963ff99"></a>

Gets the value of End.

#### `public inline const FDateTime & `[`GetEnd`](#structFRHAPI__TimeFrame_1a20a539e8f2739e6e86bb44ca0edd15f0)`() const` <a id="structFRHAPI__TimeFrame_1a20a539e8f2739e6e86bb44ca0edd15f0"></a>

Gets the value of End.

#### `public inline void `[`SetEnd`](#structFRHAPI__TimeFrame_1ac9c8254d72f15326b439e637e2c68d4d)`(FDateTime NewValue)` <a id="structFRHAPI__TimeFrame_1ac9c8254d72f15326b439e637e2c68d4d"></a>

Sets the value of End.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1af9aa89ce323040f0ccd0c2d14b5dde29)`()` <a id="structFRHAPI__TimeFrame_1af9aa89ce323040f0ccd0c2d14b5dde29"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1a62cd18465fa31e73c0a6156afdc583eb)`() const` <a id="structFRHAPI__TimeFrame_1a62cd18465fa31e73c0a6156afdc583eb"></a>

Gets the value of CacheInfo_Optional, regardless of it having been set.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1a517db9f51a7ec1bc0ac5b04fbd2b1c6c)`(const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & DefaultValue) const` <a id="structFRHAPI__TimeFrame_1a517db9f51a7ec1bc0ac5b04fbd2b1c6c"></a>

Gets the value of CacheInfo_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCacheInfo`](#structFRHAPI__TimeFrame_1ab2d06ff4c1f1c9d37c6fcae1e33878b8)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` & OutValue) const` <a id="structFRHAPI__TimeFrame_1ab2d06ff4c1f1c9d37c6fcae1e33878b8"></a>

Fills OutValue with the value of CacheInfo_Optional and returns true if it has been set, otherwise returns false.

#### `public inline `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrame_1a5d762255a302a1bf885905350c8394f0)`()` <a id="structFRHAPI__TimeFrame_1a5d762255a302a1bf885905350c8394f0"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const `[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` * `[`GetCacheInfoOrNull`](#structFRHAPI__TimeFrame_1aed405aca0d7c3ca4590cd75d145f73b9)`() const` <a id="structFRHAPI__TimeFrame_1aed405aca0d7c3ca4590cd75d145f73b9"></a>

Returns a pointer to CacheInfo_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCacheInfo`](#structFRHAPI__TimeFrame_1aa780f7c451501bb1488d8264f68e141f)`(`[`FRHAPI_CacheInfo`](RHAPI_CacheInfo.md#structFRHAPI__CacheInfo)` NewValue)` <a id="structFRHAPI__TimeFrame_1aa780f7c451501bb1488d8264f68e141f"></a>

Sets the value of CacheInfo_Optional and also sets CacheInfo_IsSet to true.

#### `public inline void `[`ClearCacheInfo`](#structFRHAPI__TimeFrame_1a38a9e13c08ae05b91dd35621c129a2d1)`()` <a id="structFRHAPI__TimeFrame_1a38a9e13c08ae05b91dd35621c129a2d1"></a>

Clears the value of CacheInfo_Optional and sets CacheInfo_IsSet to false.

