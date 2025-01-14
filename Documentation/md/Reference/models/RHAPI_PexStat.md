---
title: RHAPI_PexStat
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PexStat`](#structFRHAPI__PexStat) | 

## struct `FRHAPI_PexStat` <a id="structFRHAPI__PexStat"></a>

```
struct FRHAPI_PexStat
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public float `[`Min_Optional`](#structFRHAPI__PexStat_1a37b532fbbea0b7a97cdf2cade7dd8009) | 
`public bool `[`Min_IsSet`](#structFRHAPI__PexStat_1a62ac1913ab8895765af0e79dbeed1628) | true if Min_Optional has been set to a value
`public bool `[`Min_IsNull`](#structFRHAPI__PexStat_1ab8b274e9deaa27f3fc87a5d08b86991a) | true if Min_Optional has been explicitly set to null
`public float `[`Max_Optional`](#structFRHAPI__PexStat_1aff3c5410411da75d9c7f2dc489c941e4) | 
`public bool `[`Max_IsSet`](#structFRHAPI__PexStat_1a0b44179f2afed5b0b7964b96f09f947e) | true if Max_Optional has been set to a value
`public bool `[`Max_IsNull`](#structFRHAPI__PexStat_1a5ee93389da4a27552b7829e67c144444) | true if Max_Optional has been explicitly set to null
`public float `[`Avg_Optional`](#structFRHAPI__PexStat_1a5b2c7651460398bf66c362aa57e23d33) | 
`public bool `[`Avg_IsSet`](#structFRHAPI__PexStat_1a4a79842452578d3346184571f18d42c2) | true if Avg_Optional has been set to a value
`public bool `[`Avg_IsNull`](#structFRHAPI__PexStat_1ae028932571bc7cca921d2aec2f8575d3) | true if Avg_Optional has been explicitly set to null
`public float `[`Stddev_Optional`](#structFRHAPI__PexStat_1ab96657f06ea7870a7df58116fe694b9f) | 
`public bool `[`Stddev_IsSet`](#structFRHAPI__PexStat_1ab7bbbc3dadf0b8240a5af5315e61e308) | true if Stddev_Optional has been set to a value
`public bool `[`Stddev_IsNull`](#structFRHAPI__PexStat_1abf9b5bec99e3a4457fe0c483a85bb257) | true if Stddev_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PexStat_1af1d6f3dfb02078a921722d16ba840cbe)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PexStat_1ab49568b39c3054a841e72c543b54f32b)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline float & `[`GetMin`](#structFRHAPI__PexStat_1ab44700b88079ae32a3867d24bb0507d1)`()` | Gets the value of Min_Optional, regardless of it having been set.
`public inline const float & `[`GetMin`](#structFRHAPI__PexStat_1ab7f49e393e8456328e37e114a82a8505)`() const` | Gets the value of Min_Optional, regardless of it having been set.
`public inline const float & `[`GetMin`](#structFRHAPI__PexStat_1a6245ed3d6be031a71e8086dd555a0853)`(const float & DefaultValue) const` | Gets the value of Min_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMin`](#structFRHAPI__PexStat_1a98c2a27ba3780fa169c9f2cf86a6d1b3)`(float & OutValue) const` | Fills OutValue with the value of Min_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetMinOrNull`](#structFRHAPI__PexStat_1a37c3b8fe5723ed7d51a64c0739de07c1)`()` | Returns a pointer to Min_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetMinOrNull`](#structFRHAPI__PexStat_1a05f28eb2fdc40d8ad6fbd3be40a06ac4)`() const` | Returns a pointer to Min_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMin`](#structFRHAPI__PexStat_1afbbde803bea09916c5843688aa6b0648)`(const float & NewValue)` | Sets the value of Min_Optional and also sets Min_IsSet to true.
`public inline void `[`SetMin`](#structFRHAPI__PexStat_1a1f997a3c09c8dfc482f6caf626ec6c51)`(float && NewValue)` | Sets the value of Min_Optional and also sets Min_IsSet to true using move semantics.
`public inline void `[`ClearMin`](#structFRHAPI__PexStat_1a3647c025b6a39e24ad7247b551039a48)`()` | Clears the value of Min_Optional and sets Min_IsSet to false.
`public inline bool `[`IsMinSet`](#structFRHAPI__PexStat_1a05bd80b39673537f92499742683b1467)`() const` | Checks whether Min_Optional has been set.
`public inline void `[`SetMinToNull`](#structFRHAPI__PexStat_1ac9c7b4a5d2fe3764922a5dd53d8b7a7f)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsMinNull`](#structFRHAPI__PexStat_1a4b410745889d07a3139c9ee3c3067b0b)`() const` | Checks whether Min_Optional is set to null.
`public inline float & `[`GetMax`](#structFRHAPI__PexStat_1ad9302046656663b3620ca2a61438f104)`()` | Gets the value of Max_Optional, regardless of it having been set.
`public inline const float & `[`GetMax`](#structFRHAPI__PexStat_1af93d6c3fec6d81a545105885dc8ae002)`() const` | Gets the value of Max_Optional, regardless of it having been set.
`public inline const float & `[`GetMax`](#structFRHAPI__PexStat_1aabffef9ff723c9674e146a80ffd82a21)`(const float & DefaultValue) const` | Gets the value of Max_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMax`](#structFRHAPI__PexStat_1ac867e2d6cb772f463a6b704332a8bbea)`(float & OutValue) const` | Fills OutValue with the value of Max_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetMaxOrNull`](#structFRHAPI__PexStat_1a5b3624ea822188fba0fa4839e90b31ea)`()` | Returns a pointer to Max_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetMaxOrNull`](#structFRHAPI__PexStat_1ac0ca1b1b2efaf1e3c22a26663dc6469d)`() const` | Returns a pointer to Max_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMax`](#structFRHAPI__PexStat_1a7fa080807ea6288139ee890aa3a32a0b)`(const float & NewValue)` | Sets the value of Max_Optional and also sets Max_IsSet to true.
`public inline void `[`SetMax`](#structFRHAPI__PexStat_1a8306eeb72a567c90e95994ee1847bd58)`(float && NewValue)` | Sets the value of Max_Optional and also sets Max_IsSet to true using move semantics.
`public inline void `[`ClearMax`](#structFRHAPI__PexStat_1a4d0d67062c00b2dbe217c6528902e44b)`()` | Clears the value of Max_Optional and sets Max_IsSet to false.
`public inline bool `[`IsMaxSet`](#structFRHAPI__PexStat_1ac49d82c071b84e168a2060b8bd7f91f5)`() const` | Checks whether Max_Optional has been set.
`public inline void `[`SetMaxToNull`](#structFRHAPI__PexStat_1af5b2ec5efe2edc844dff8297741999e5)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsMaxNull`](#structFRHAPI__PexStat_1a5955b3863f86f300dd0db169e8622133)`() const` | Checks whether Max_Optional is set to null.
`public inline float & `[`GetAvg`](#structFRHAPI__PexStat_1a02635df135288a4166043da27982f5be)`()` | Gets the value of Avg_Optional, regardless of it having been set.
`public inline const float & `[`GetAvg`](#structFRHAPI__PexStat_1a02899cc0da2399844f1eddfa595f9a76)`() const` | Gets the value of Avg_Optional, regardless of it having been set.
`public inline const float & `[`GetAvg`](#structFRHAPI__PexStat_1adc2156fcc2bbd1c80d2c6bcd0bc248bc)`(const float & DefaultValue) const` | Gets the value of Avg_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAvg`](#structFRHAPI__PexStat_1a1f426cd4be4723e6d3e82b04985a454d)`(float & OutValue) const` | Fills OutValue with the value of Avg_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetAvgOrNull`](#structFRHAPI__PexStat_1ab84432ea1277fd743d8dee77b3f18738)`()` | Returns a pointer to Avg_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetAvgOrNull`](#structFRHAPI__PexStat_1a633c5e3d72dd70a7b2db0c3d92056e96)`() const` | Returns a pointer to Avg_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAvg`](#structFRHAPI__PexStat_1ab7eafa72a4e58a15ee69766ee57ea778)`(const float & NewValue)` | Sets the value of Avg_Optional and also sets Avg_IsSet to true.
`public inline void `[`SetAvg`](#structFRHAPI__PexStat_1a408705bc6b6563e081fff1dc39d2b2a7)`(float && NewValue)` | Sets the value of Avg_Optional and also sets Avg_IsSet to true using move semantics.
`public inline void `[`ClearAvg`](#structFRHAPI__PexStat_1ab624c8c0e0f5073ed6f0083df50a4eb7)`()` | Clears the value of Avg_Optional and sets Avg_IsSet to false.
`public inline bool `[`IsAvgSet`](#structFRHAPI__PexStat_1a818f22ec84ca605523c2be15f2cd0065)`() const` | Checks whether Avg_Optional has been set.
`public inline void `[`SetAvgToNull`](#structFRHAPI__PexStat_1a44453283bcb09a80108f41ba4953b35a)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsAvgNull`](#structFRHAPI__PexStat_1ad76caf75760b98595d602a3864f9676b)`() const` | Checks whether Avg_Optional is set to null.
`public inline float & `[`GetStddev`](#structFRHAPI__PexStat_1af9fb64ea5dc403dfa5b952e5ecabb4c2)`()` | Gets the value of Stddev_Optional, regardless of it having been set.
`public inline const float & `[`GetStddev`](#structFRHAPI__PexStat_1a54ef5407f46bddaca075af05b7d7d5d7)`() const` | Gets the value of Stddev_Optional, regardless of it having been set.
`public inline const float & `[`GetStddev`](#structFRHAPI__PexStat_1a92e4a50a2b3db888bc169a15bb9bc0fc)`(const float & DefaultValue) const` | Gets the value of Stddev_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStddev`](#structFRHAPI__PexStat_1ab50b4b47dfd1211421bdd040ea3d2012)`(float & OutValue) const` | Fills OutValue with the value of Stddev_Optional and returns true if it has been set, otherwise returns false.
`public inline float * `[`GetStddevOrNull`](#structFRHAPI__PexStat_1ad62e03d58ad6534a96c0d18cee481756)`()` | Returns a pointer to Stddev_Optional, if it has been set, otherwise returns nullptr.
`public inline const float * `[`GetStddevOrNull`](#structFRHAPI__PexStat_1a151da8d0217df326ff01dd5eadbafd46)`() const` | Returns a pointer to Stddev_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStddev`](#structFRHAPI__PexStat_1ae25ef46be256def4632508cebdaa9622)`(const float & NewValue)` | Sets the value of Stddev_Optional and also sets Stddev_IsSet to true.
`public inline void `[`SetStddev`](#structFRHAPI__PexStat_1abc797968e0f445573cda9a615b5cc23e)`(float && NewValue)` | Sets the value of Stddev_Optional and also sets Stddev_IsSet to true using move semantics.
`public inline void `[`ClearStddev`](#structFRHAPI__PexStat_1ac3f06b3d877340f62412878c41fb835f)`()` | Clears the value of Stddev_Optional and sets Stddev_IsSet to false.
`public inline bool `[`IsStddevSet`](#structFRHAPI__PexStat_1a8e81f0c08a9bbad3b92694fd192a0174)`() const` | Checks whether Stddev_Optional has been set.
`public inline void `[`SetStddevToNull`](#structFRHAPI__PexStat_1ac35be6701754c8074dace117190f113d)`()` | Sets the value explicitly to be treated as null.
`public inline bool `[`IsStddevNull`](#structFRHAPI__PexStat_1adee159ce6ce57deaecbe6576fd853821)`() const` | Checks whether Stddev_Optional is set to null.

### Members

#### `public float `[`Min_Optional`](#structFRHAPI__PexStat_1a37b532fbbea0b7a97cdf2cade7dd8009) <a id="structFRHAPI__PexStat_1a37b532fbbea0b7a97cdf2cade7dd8009"></a>

#### `public bool `[`Min_IsSet`](#structFRHAPI__PexStat_1a62ac1913ab8895765af0e79dbeed1628) <a id="structFRHAPI__PexStat_1a62ac1913ab8895765af0e79dbeed1628"></a>

true if Min_Optional has been set to a value

#### `public bool `[`Min_IsNull`](#structFRHAPI__PexStat_1ab8b274e9deaa27f3fc87a5d08b86991a) <a id="structFRHAPI__PexStat_1ab8b274e9deaa27f3fc87a5d08b86991a"></a>

true if Min_Optional has been explicitly set to null

#### `public float `[`Max_Optional`](#structFRHAPI__PexStat_1aff3c5410411da75d9c7f2dc489c941e4) <a id="structFRHAPI__PexStat_1aff3c5410411da75d9c7f2dc489c941e4"></a>

#### `public bool `[`Max_IsSet`](#structFRHAPI__PexStat_1a0b44179f2afed5b0b7964b96f09f947e) <a id="structFRHAPI__PexStat_1a0b44179f2afed5b0b7964b96f09f947e"></a>

true if Max_Optional has been set to a value

#### `public bool `[`Max_IsNull`](#structFRHAPI__PexStat_1a5ee93389da4a27552b7829e67c144444) <a id="structFRHAPI__PexStat_1a5ee93389da4a27552b7829e67c144444"></a>

true if Max_Optional has been explicitly set to null

#### `public float `[`Avg_Optional`](#structFRHAPI__PexStat_1a5b2c7651460398bf66c362aa57e23d33) <a id="structFRHAPI__PexStat_1a5b2c7651460398bf66c362aa57e23d33"></a>

#### `public bool `[`Avg_IsSet`](#structFRHAPI__PexStat_1a4a79842452578d3346184571f18d42c2) <a id="structFRHAPI__PexStat_1a4a79842452578d3346184571f18d42c2"></a>

true if Avg_Optional has been set to a value

#### `public bool `[`Avg_IsNull`](#structFRHAPI__PexStat_1ae028932571bc7cca921d2aec2f8575d3) <a id="structFRHAPI__PexStat_1ae028932571bc7cca921d2aec2f8575d3"></a>

true if Avg_Optional has been explicitly set to null

#### `public float `[`Stddev_Optional`](#structFRHAPI__PexStat_1ab96657f06ea7870a7df58116fe694b9f) <a id="structFRHAPI__PexStat_1ab96657f06ea7870a7df58116fe694b9f"></a>

#### `public bool `[`Stddev_IsSet`](#structFRHAPI__PexStat_1ab7bbbc3dadf0b8240a5af5315e61e308) <a id="structFRHAPI__PexStat_1ab7bbbc3dadf0b8240a5af5315e61e308"></a>

true if Stddev_Optional has been set to a value

#### `public bool `[`Stddev_IsNull`](#structFRHAPI__PexStat_1abf9b5bec99e3a4457fe0c483a85bb257) <a id="structFRHAPI__PexStat_1abf9b5bec99e3a4457fe0c483a85bb257"></a>

true if Stddev_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PexStat_1af1d6f3dfb02078a921722d16ba840cbe)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PexStat_1af1d6f3dfb02078a921722d16ba840cbe"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PexStat_1ab49568b39c3054a841e72c543b54f32b)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PexStat_1ab49568b39c3054a841e72c543b54f32b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline float & `[`GetMin`](#structFRHAPI__PexStat_1ab44700b88079ae32a3867d24bb0507d1)`()` <a id="structFRHAPI__PexStat_1ab44700b88079ae32a3867d24bb0507d1"></a>

Gets the value of Min_Optional, regardless of it having been set.

#### `public inline const float & `[`GetMin`](#structFRHAPI__PexStat_1ab7f49e393e8456328e37e114a82a8505)`() const` <a id="structFRHAPI__PexStat_1ab7f49e393e8456328e37e114a82a8505"></a>

Gets the value of Min_Optional, regardless of it having been set.

#### `public inline const float & `[`GetMin`](#structFRHAPI__PexStat_1a6245ed3d6be031a71e8086dd555a0853)`(const float & DefaultValue) const` <a id="structFRHAPI__PexStat_1a6245ed3d6be031a71e8086dd555a0853"></a>

Gets the value of Min_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMin`](#structFRHAPI__PexStat_1a98c2a27ba3780fa169c9f2cf86a6d1b3)`(float & OutValue) const` <a id="structFRHAPI__PexStat_1a98c2a27ba3780fa169c9f2cf86a6d1b3"></a>

Fills OutValue with the value of Min_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetMinOrNull`](#structFRHAPI__PexStat_1a37c3b8fe5723ed7d51a64c0739de07c1)`()` <a id="structFRHAPI__PexStat_1a37c3b8fe5723ed7d51a64c0739de07c1"></a>

Returns a pointer to Min_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetMinOrNull`](#structFRHAPI__PexStat_1a05f28eb2fdc40d8ad6fbd3be40a06ac4)`() const` <a id="structFRHAPI__PexStat_1a05f28eb2fdc40d8ad6fbd3be40a06ac4"></a>

Returns a pointer to Min_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMin`](#structFRHAPI__PexStat_1afbbde803bea09916c5843688aa6b0648)`(const float & NewValue)` <a id="structFRHAPI__PexStat_1afbbde803bea09916c5843688aa6b0648"></a>

Sets the value of Min_Optional and also sets Min_IsSet to true.

#### `public inline void `[`SetMin`](#structFRHAPI__PexStat_1a1f997a3c09c8dfc482f6caf626ec6c51)`(float && NewValue)` <a id="structFRHAPI__PexStat_1a1f997a3c09c8dfc482f6caf626ec6c51"></a>

Sets the value of Min_Optional and also sets Min_IsSet to true using move semantics.

#### `public inline void `[`ClearMin`](#structFRHAPI__PexStat_1a3647c025b6a39e24ad7247b551039a48)`()` <a id="structFRHAPI__PexStat_1a3647c025b6a39e24ad7247b551039a48"></a>

Clears the value of Min_Optional and sets Min_IsSet to false.

#### `public inline bool `[`IsMinSet`](#structFRHAPI__PexStat_1a05bd80b39673537f92499742683b1467)`() const` <a id="structFRHAPI__PexStat_1a05bd80b39673537f92499742683b1467"></a>

Checks whether Min_Optional has been set.

#### `public inline void `[`SetMinToNull`](#structFRHAPI__PexStat_1ac9c7b4a5d2fe3764922a5dd53d8b7a7f)`()` <a id="structFRHAPI__PexStat_1ac9c7b4a5d2fe3764922a5dd53d8b7a7f"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsMinNull`](#structFRHAPI__PexStat_1a4b410745889d07a3139c9ee3c3067b0b)`() const` <a id="structFRHAPI__PexStat_1a4b410745889d07a3139c9ee3c3067b0b"></a>

Checks whether Min_Optional is set to null.

#### `public inline float & `[`GetMax`](#structFRHAPI__PexStat_1ad9302046656663b3620ca2a61438f104)`()` <a id="structFRHAPI__PexStat_1ad9302046656663b3620ca2a61438f104"></a>

Gets the value of Max_Optional, regardless of it having been set.

#### `public inline const float & `[`GetMax`](#structFRHAPI__PexStat_1af93d6c3fec6d81a545105885dc8ae002)`() const` <a id="structFRHAPI__PexStat_1af93d6c3fec6d81a545105885dc8ae002"></a>

Gets the value of Max_Optional, regardless of it having been set.

#### `public inline const float & `[`GetMax`](#structFRHAPI__PexStat_1aabffef9ff723c9674e146a80ffd82a21)`(const float & DefaultValue) const` <a id="structFRHAPI__PexStat_1aabffef9ff723c9674e146a80ffd82a21"></a>

Gets the value of Max_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMax`](#structFRHAPI__PexStat_1ac867e2d6cb772f463a6b704332a8bbea)`(float & OutValue) const` <a id="structFRHAPI__PexStat_1ac867e2d6cb772f463a6b704332a8bbea"></a>

Fills OutValue with the value of Max_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetMaxOrNull`](#structFRHAPI__PexStat_1a5b3624ea822188fba0fa4839e90b31ea)`()` <a id="structFRHAPI__PexStat_1a5b3624ea822188fba0fa4839e90b31ea"></a>

Returns a pointer to Max_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetMaxOrNull`](#structFRHAPI__PexStat_1ac0ca1b1b2efaf1e3c22a26663dc6469d)`() const` <a id="structFRHAPI__PexStat_1ac0ca1b1b2efaf1e3c22a26663dc6469d"></a>

Returns a pointer to Max_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMax`](#structFRHAPI__PexStat_1a7fa080807ea6288139ee890aa3a32a0b)`(const float & NewValue)` <a id="structFRHAPI__PexStat_1a7fa080807ea6288139ee890aa3a32a0b"></a>

Sets the value of Max_Optional and also sets Max_IsSet to true.

#### `public inline void `[`SetMax`](#structFRHAPI__PexStat_1a8306eeb72a567c90e95994ee1847bd58)`(float && NewValue)` <a id="structFRHAPI__PexStat_1a8306eeb72a567c90e95994ee1847bd58"></a>

Sets the value of Max_Optional and also sets Max_IsSet to true using move semantics.

#### `public inline void `[`ClearMax`](#structFRHAPI__PexStat_1a4d0d67062c00b2dbe217c6528902e44b)`()` <a id="structFRHAPI__PexStat_1a4d0d67062c00b2dbe217c6528902e44b"></a>

Clears the value of Max_Optional and sets Max_IsSet to false.

#### `public inline bool `[`IsMaxSet`](#structFRHAPI__PexStat_1ac49d82c071b84e168a2060b8bd7f91f5)`() const` <a id="structFRHAPI__PexStat_1ac49d82c071b84e168a2060b8bd7f91f5"></a>

Checks whether Max_Optional has been set.

#### `public inline void `[`SetMaxToNull`](#structFRHAPI__PexStat_1af5b2ec5efe2edc844dff8297741999e5)`()` <a id="structFRHAPI__PexStat_1af5b2ec5efe2edc844dff8297741999e5"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsMaxNull`](#structFRHAPI__PexStat_1a5955b3863f86f300dd0db169e8622133)`() const` <a id="structFRHAPI__PexStat_1a5955b3863f86f300dd0db169e8622133"></a>

Checks whether Max_Optional is set to null.

#### `public inline float & `[`GetAvg`](#structFRHAPI__PexStat_1a02635df135288a4166043da27982f5be)`()` <a id="structFRHAPI__PexStat_1a02635df135288a4166043da27982f5be"></a>

Gets the value of Avg_Optional, regardless of it having been set.

#### `public inline const float & `[`GetAvg`](#structFRHAPI__PexStat_1a02899cc0da2399844f1eddfa595f9a76)`() const` <a id="structFRHAPI__PexStat_1a02899cc0da2399844f1eddfa595f9a76"></a>

Gets the value of Avg_Optional, regardless of it having been set.

#### `public inline const float & `[`GetAvg`](#structFRHAPI__PexStat_1adc2156fcc2bbd1c80d2c6bcd0bc248bc)`(const float & DefaultValue) const` <a id="structFRHAPI__PexStat_1adc2156fcc2bbd1c80d2c6bcd0bc248bc"></a>

Gets the value of Avg_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAvg`](#structFRHAPI__PexStat_1a1f426cd4be4723e6d3e82b04985a454d)`(float & OutValue) const` <a id="structFRHAPI__PexStat_1a1f426cd4be4723e6d3e82b04985a454d"></a>

Fills OutValue with the value of Avg_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetAvgOrNull`](#structFRHAPI__PexStat_1ab84432ea1277fd743d8dee77b3f18738)`()` <a id="structFRHAPI__PexStat_1ab84432ea1277fd743d8dee77b3f18738"></a>

Returns a pointer to Avg_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetAvgOrNull`](#structFRHAPI__PexStat_1a633c5e3d72dd70a7b2db0c3d92056e96)`() const` <a id="structFRHAPI__PexStat_1a633c5e3d72dd70a7b2db0c3d92056e96"></a>

Returns a pointer to Avg_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAvg`](#structFRHAPI__PexStat_1ab7eafa72a4e58a15ee69766ee57ea778)`(const float & NewValue)` <a id="structFRHAPI__PexStat_1ab7eafa72a4e58a15ee69766ee57ea778"></a>

Sets the value of Avg_Optional and also sets Avg_IsSet to true.

#### `public inline void `[`SetAvg`](#structFRHAPI__PexStat_1a408705bc6b6563e081fff1dc39d2b2a7)`(float && NewValue)` <a id="structFRHAPI__PexStat_1a408705bc6b6563e081fff1dc39d2b2a7"></a>

Sets the value of Avg_Optional and also sets Avg_IsSet to true using move semantics.

#### `public inline void `[`ClearAvg`](#structFRHAPI__PexStat_1ab624c8c0e0f5073ed6f0083df50a4eb7)`()` <a id="structFRHAPI__PexStat_1ab624c8c0e0f5073ed6f0083df50a4eb7"></a>

Clears the value of Avg_Optional and sets Avg_IsSet to false.

#### `public inline bool `[`IsAvgSet`](#structFRHAPI__PexStat_1a818f22ec84ca605523c2be15f2cd0065)`() const` <a id="structFRHAPI__PexStat_1a818f22ec84ca605523c2be15f2cd0065"></a>

Checks whether Avg_Optional has been set.

#### `public inline void `[`SetAvgToNull`](#structFRHAPI__PexStat_1a44453283bcb09a80108f41ba4953b35a)`()` <a id="structFRHAPI__PexStat_1a44453283bcb09a80108f41ba4953b35a"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsAvgNull`](#structFRHAPI__PexStat_1ad76caf75760b98595d602a3864f9676b)`() const` <a id="structFRHAPI__PexStat_1ad76caf75760b98595d602a3864f9676b"></a>

Checks whether Avg_Optional is set to null.

#### `public inline float & `[`GetStddev`](#structFRHAPI__PexStat_1af9fb64ea5dc403dfa5b952e5ecabb4c2)`()` <a id="structFRHAPI__PexStat_1af9fb64ea5dc403dfa5b952e5ecabb4c2"></a>

Gets the value of Stddev_Optional, regardless of it having been set.

#### `public inline const float & `[`GetStddev`](#structFRHAPI__PexStat_1a54ef5407f46bddaca075af05b7d7d5d7)`() const` <a id="structFRHAPI__PexStat_1a54ef5407f46bddaca075af05b7d7d5d7"></a>

Gets the value of Stddev_Optional, regardless of it having been set.

#### `public inline const float & `[`GetStddev`](#structFRHAPI__PexStat_1a92e4a50a2b3db888bc169a15bb9bc0fc)`(const float & DefaultValue) const` <a id="structFRHAPI__PexStat_1a92e4a50a2b3db888bc169a15bb9bc0fc"></a>

Gets the value of Stddev_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStddev`](#structFRHAPI__PexStat_1ab50b4b47dfd1211421bdd040ea3d2012)`(float & OutValue) const` <a id="structFRHAPI__PexStat_1ab50b4b47dfd1211421bdd040ea3d2012"></a>

Fills OutValue with the value of Stddev_Optional and returns true if it has been set, otherwise returns false.

#### `public inline float * `[`GetStddevOrNull`](#structFRHAPI__PexStat_1ad62e03d58ad6534a96c0d18cee481756)`()` <a id="structFRHAPI__PexStat_1ad62e03d58ad6534a96c0d18cee481756"></a>

Returns a pointer to Stddev_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const float * `[`GetStddevOrNull`](#structFRHAPI__PexStat_1a151da8d0217df326ff01dd5eadbafd46)`() const` <a id="structFRHAPI__PexStat_1a151da8d0217df326ff01dd5eadbafd46"></a>

Returns a pointer to Stddev_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStddev`](#structFRHAPI__PexStat_1ae25ef46be256def4632508cebdaa9622)`(const float & NewValue)` <a id="structFRHAPI__PexStat_1ae25ef46be256def4632508cebdaa9622"></a>

Sets the value of Stddev_Optional and also sets Stddev_IsSet to true.

#### `public inline void `[`SetStddev`](#structFRHAPI__PexStat_1abc797968e0f445573cda9a615b5cc23e)`(float && NewValue)` <a id="structFRHAPI__PexStat_1abc797968e0f445573cda9a615b5cc23e"></a>

Sets the value of Stddev_Optional and also sets Stddev_IsSet to true using move semantics.

#### `public inline void `[`ClearStddev`](#structFRHAPI__PexStat_1ac3f06b3d877340f62412878c41fb835f)`()` <a id="structFRHAPI__PexStat_1ac3f06b3d877340f62412878c41fb835f"></a>

Clears the value of Stddev_Optional and sets Stddev_IsSet to false.

#### `public inline bool `[`IsStddevSet`](#structFRHAPI__PexStat_1a8e81f0c08a9bbad3b92694fd192a0174)`() const` <a id="structFRHAPI__PexStat_1a8e81f0c08a9bbad3b92694fd192a0174"></a>

Checks whether Stddev_Optional has been set.

#### `public inline void `[`SetStddevToNull`](#structFRHAPI__PexStat_1ac35be6701754c8074dace117190f113d)`()` <a id="structFRHAPI__PexStat_1ac35be6701754c8074dace117190f113d"></a>

Sets the value explicitly to be treated as null.

#### `public inline bool `[`IsStddevNull`](#structFRHAPI__PexStat_1adee159ce6ce57deaecbe6576fd853821)`() const` <a id="structFRHAPI__PexStat_1adee159ce6ce57deaecbe6576fd853821"></a>

Checks whether Stddev_Optional is set to null.

