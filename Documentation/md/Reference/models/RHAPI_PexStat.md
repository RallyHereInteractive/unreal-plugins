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
`public inline FORCEINLINE float & `[`GetMin`](#structFRHAPI__PexStat_1ab4243e26907d9bd08521a445c24b67fb)`()` | Gets the value of Min_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMin`](#structFRHAPI__PexStat_1acc5f061dadbca7120f3a1640a5bb704a)`() const` | Gets the value of Min_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMin`](#structFRHAPI__PexStat_1a052f059652c3e2909e2ac21e54d94795)`(const float & DefaultValue) const` | Gets the value of Min_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMin`](#structFRHAPI__PexStat_1ade43f862e6d8ca0e52c54ee9230f84e3)`(float & OutValue) const` | Fills OutValue with the value of Min_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetMinOrNull`](#structFRHAPI__PexStat_1a5c549bba663e63ff009efae44ff5ed3d)`()` | Returns a pointer to Min_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetMinOrNull`](#structFRHAPI__PexStat_1ac328d90671d3ee81818633094290a8ff)`() const` | Returns a pointer to Min_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMin`](#structFRHAPI__PexStat_1a44a1d4a45e669abff658c33d0b8221df)`(const float & NewValue)` | Sets the value of Min_Optional and also sets Min_IsSet to true.
`public inline FORCEINLINE void `[`SetMin`](#structFRHAPI__PexStat_1afe40756a2dfd138a8b0d6eae3b84cb81)`(float && NewValue)` | Sets the value of Min_Optional and also sets Min_IsSet to true using move semantics.
`public inline void `[`ClearMin`](#structFRHAPI__PexStat_1a3647c025b6a39e24ad7247b551039a48)`()` | Clears the value of Min_Optional and sets Min_IsSet to false.
`public inline FORCEINLINE void `[`SetMinToNull`](#structFRHAPI__PexStat_1a27cdce12194fa3c79232bea770593553)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMinNull`](#structFRHAPI__PexStat_1a07f923646c8b62a2d51c609a407be6be)`() const` | Checks whether Min_Optional is set to null.
`public inline FORCEINLINE float & `[`GetMax`](#structFRHAPI__PexStat_1a4b9598da9aca85ab5a80915f9ead3e27)`()` | Gets the value of Max_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMax`](#structFRHAPI__PexStat_1a30ccd3734b22da161210727ce5ddce60)`() const` | Gets the value of Max_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetMax`](#structFRHAPI__PexStat_1ab751aae8f2f86fe72e55a2fbdda2f1ff)`(const float & DefaultValue) const` | Gets the value of Max_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMax`](#structFRHAPI__PexStat_1af298db4abe7203aaec4906dc003eede2)`(float & OutValue) const` | Fills OutValue with the value of Max_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetMaxOrNull`](#structFRHAPI__PexStat_1af657dc230380970b7e857fd79cc05253)`()` | Returns a pointer to Max_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetMaxOrNull`](#structFRHAPI__PexStat_1a21a62c259d0d7afed02b5f1822aec6af)`() const` | Returns a pointer to Max_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMax`](#structFRHAPI__PexStat_1a2a29264261178d6c898d3ebd3520c784)`(const float & NewValue)` | Sets the value of Max_Optional and also sets Max_IsSet to true.
`public inline FORCEINLINE void `[`SetMax`](#structFRHAPI__PexStat_1a36f7b7520428592cd27e5fc4750d2185)`(float && NewValue)` | Sets the value of Max_Optional and also sets Max_IsSet to true using move semantics.
`public inline void `[`ClearMax`](#structFRHAPI__PexStat_1a4d0d67062c00b2dbe217c6528902e44b)`()` | Clears the value of Max_Optional and sets Max_IsSet to false.
`public inline FORCEINLINE void `[`SetMaxToNull`](#structFRHAPI__PexStat_1ad623f2d1ced8d75111611dfc0b7e34e4)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsMaxNull`](#structFRHAPI__PexStat_1a654e2c5c019495040fa054fa83d9a7dd)`() const` | Checks whether Max_Optional is set to null.
`public inline FORCEINLINE float & `[`GetAvg`](#structFRHAPI__PexStat_1ad4ff2ffc7e2064075d7a3de6a654d867)`()` | Gets the value of Avg_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetAvg`](#structFRHAPI__PexStat_1a9c0dad681c5f8f6211fa6f1a0abf9fbb)`() const` | Gets the value of Avg_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetAvg`](#structFRHAPI__PexStat_1adbf0f876be5695bd1aeeab37c841233b)`(const float & DefaultValue) const` | Gets the value of Avg_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAvg`](#structFRHAPI__PexStat_1a10ae8ad31adee9466349c0461a46c819)`(float & OutValue) const` | Fills OutValue with the value of Avg_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetAvgOrNull`](#structFRHAPI__PexStat_1ac32cb40493f6c4f4712e02540849bb9b)`()` | Returns a pointer to Avg_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetAvgOrNull`](#structFRHAPI__PexStat_1ab63c6180ee5273a7785bba85fc511d4c)`() const` | Returns a pointer to Avg_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAvg`](#structFRHAPI__PexStat_1a3193362986be9e9e45a796f458c6efbb)`(const float & NewValue)` | Sets the value of Avg_Optional and also sets Avg_IsSet to true.
`public inline FORCEINLINE void `[`SetAvg`](#structFRHAPI__PexStat_1ad4f7141c85fc35bafdb08b2c2e44eafb)`(float && NewValue)` | Sets the value of Avg_Optional and also sets Avg_IsSet to true using move semantics.
`public inline void `[`ClearAvg`](#structFRHAPI__PexStat_1ab624c8c0e0f5073ed6f0083df50a4eb7)`()` | Clears the value of Avg_Optional and sets Avg_IsSet to false.
`public inline FORCEINLINE void `[`SetAvgToNull`](#structFRHAPI__PexStat_1a085d9e56ff65c5c441b5cf23182efcbd)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsAvgNull`](#structFRHAPI__PexStat_1a1888774d0c5cd2d0742605fb185ac8d6)`() const` | Checks whether Avg_Optional is set to null.
`public inline FORCEINLINE float & `[`GetStddev`](#structFRHAPI__PexStat_1aef1aa790fd689ac03cc21abdffae86f5)`()` | Gets the value of Stddev_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetStddev`](#structFRHAPI__PexStat_1a089b29f9ed4c4696ffbb1a8f5b3083e8)`() const` | Gets the value of Stddev_Optional, regardless of it having been set.
`public inline FORCEINLINE const float & `[`GetStddev`](#structFRHAPI__PexStat_1aa483982376133fdbb495e060627b1dcd)`(const float & DefaultValue) const` | Gets the value of Stddev_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStddev`](#structFRHAPI__PexStat_1ac58505c210bb8953e1155a737e807fa8)`(float & OutValue) const` | Fills OutValue with the value of Stddev_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE float * `[`GetStddevOrNull`](#structFRHAPI__PexStat_1a48c341b40fe5d504fe24adeb868e53dd)`()` | Returns a pointer to Stddev_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const float * `[`GetStddevOrNull`](#structFRHAPI__PexStat_1a1fc37018d78fd8566de12ea33bb92b40)`() const` | Returns a pointer to Stddev_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStddev`](#structFRHAPI__PexStat_1ab755730aa2c4e6656136f99831c55102)`(const float & NewValue)` | Sets the value of Stddev_Optional and also sets Stddev_IsSet to true.
`public inline FORCEINLINE void `[`SetStddev`](#structFRHAPI__PexStat_1a5da5bb886a525e16f9e29327b6e75d97)`(float && NewValue)` | Sets the value of Stddev_Optional and also sets Stddev_IsSet to true using move semantics.
`public inline void `[`ClearStddev`](#structFRHAPI__PexStat_1ac3f06b3d877340f62412878c41fb835f)`()` | Clears the value of Stddev_Optional and sets Stddev_IsSet to false.
`public inline FORCEINLINE void `[`SetStddevToNull`](#structFRHAPI__PexStat_1a6c458f67bbf4d0b9ad4490daddcc5e8c)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsStddevNull`](#structFRHAPI__PexStat_1a41ec6b9ad6b01f9f6316df8ca048f4d0)`() const` | Checks whether Stddev_Optional is set to null.

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

#### `public inline FORCEINLINE float & `[`GetMin`](#structFRHAPI__PexStat_1ab4243e26907d9bd08521a445c24b67fb)`()` <a id="structFRHAPI__PexStat_1ab4243e26907d9bd08521a445c24b67fb"></a>

Gets the value of Min_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMin`](#structFRHAPI__PexStat_1acc5f061dadbca7120f3a1640a5bb704a)`() const` <a id="structFRHAPI__PexStat_1acc5f061dadbca7120f3a1640a5bb704a"></a>

Gets the value of Min_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMin`](#structFRHAPI__PexStat_1a052f059652c3e2909e2ac21e54d94795)`(const float & DefaultValue) const` <a id="structFRHAPI__PexStat_1a052f059652c3e2909e2ac21e54d94795"></a>

Gets the value of Min_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMin`](#structFRHAPI__PexStat_1ade43f862e6d8ca0e52c54ee9230f84e3)`(float & OutValue) const` <a id="structFRHAPI__PexStat_1ade43f862e6d8ca0e52c54ee9230f84e3"></a>

Fills OutValue with the value of Min_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetMinOrNull`](#structFRHAPI__PexStat_1a5c549bba663e63ff009efae44ff5ed3d)`()` <a id="structFRHAPI__PexStat_1a5c549bba663e63ff009efae44ff5ed3d"></a>

Returns a pointer to Min_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetMinOrNull`](#structFRHAPI__PexStat_1ac328d90671d3ee81818633094290a8ff)`() const` <a id="structFRHAPI__PexStat_1ac328d90671d3ee81818633094290a8ff"></a>

Returns a pointer to Min_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMin`](#structFRHAPI__PexStat_1a44a1d4a45e669abff658c33d0b8221df)`(const float & NewValue)` <a id="structFRHAPI__PexStat_1a44a1d4a45e669abff658c33d0b8221df"></a>

Sets the value of Min_Optional and also sets Min_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMin`](#structFRHAPI__PexStat_1afe40756a2dfd138a8b0d6eae3b84cb81)`(float && NewValue)` <a id="structFRHAPI__PexStat_1afe40756a2dfd138a8b0d6eae3b84cb81"></a>

Sets the value of Min_Optional and also sets Min_IsSet to true using move semantics.

#### `public inline void `[`ClearMin`](#structFRHAPI__PexStat_1a3647c025b6a39e24ad7247b551039a48)`()` <a id="structFRHAPI__PexStat_1a3647c025b6a39e24ad7247b551039a48"></a>

Clears the value of Min_Optional and sets Min_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMinToNull`](#structFRHAPI__PexStat_1a27cdce12194fa3c79232bea770593553)`()` <a id="structFRHAPI__PexStat_1a27cdce12194fa3c79232bea770593553"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMinNull`](#structFRHAPI__PexStat_1a07f923646c8b62a2d51c609a407be6be)`() const` <a id="structFRHAPI__PexStat_1a07f923646c8b62a2d51c609a407be6be"></a>

Checks whether Min_Optional is set to null.

#### `public inline FORCEINLINE float & `[`GetMax`](#structFRHAPI__PexStat_1a4b9598da9aca85ab5a80915f9ead3e27)`()` <a id="structFRHAPI__PexStat_1a4b9598da9aca85ab5a80915f9ead3e27"></a>

Gets the value of Max_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMax`](#structFRHAPI__PexStat_1a30ccd3734b22da161210727ce5ddce60)`() const` <a id="structFRHAPI__PexStat_1a30ccd3734b22da161210727ce5ddce60"></a>

Gets the value of Max_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetMax`](#structFRHAPI__PexStat_1ab751aae8f2f86fe72e55a2fbdda2f1ff)`(const float & DefaultValue) const` <a id="structFRHAPI__PexStat_1ab751aae8f2f86fe72e55a2fbdda2f1ff"></a>

Gets the value of Max_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMax`](#structFRHAPI__PexStat_1af298db4abe7203aaec4906dc003eede2)`(float & OutValue) const` <a id="structFRHAPI__PexStat_1af298db4abe7203aaec4906dc003eede2"></a>

Fills OutValue with the value of Max_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetMaxOrNull`](#structFRHAPI__PexStat_1af657dc230380970b7e857fd79cc05253)`()` <a id="structFRHAPI__PexStat_1af657dc230380970b7e857fd79cc05253"></a>

Returns a pointer to Max_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetMaxOrNull`](#structFRHAPI__PexStat_1a21a62c259d0d7afed02b5f1822aec6af)`() const` <a id="structFRHAPI__PexStat_1a21a62c259d0d7afed02b5f1822aec6af"></a>

Returns a pointer to Max_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMax`](#structFRHAPI__PexStat_1a2a29264261178d6c898d3ebd3520c784)`(const float & NewValue)` <a id="structFRHAPI__PexStat_1a2a29264261178d6c898d3ebd3520c784"></a>

Sets the value of Max_Optional and also sets Max_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMax`](#structFRHAPI__PexStat_1a36f7b7520428592cd27e5fc4750d2185)`(float && NewValue)` <a id="structFRHAPI__PexStat_1a36f7b7520428592cd27e5fc4750d2185"></a>

Sets the value of Max_Optional and also sets Max_IsSet to true using move semantics.

#### `public inline void `[`ClearMax`](#structFRHAPI__PexStat_1a4d0d67062c00b2dbe217c6528902e44b)`()` <a id="structFRHAPI__PexStat_1a4d0d67062c00b2dbe217c6528902e44b"></a>

Clears the value of Max_Optional and sets Max_IsSet to false.

#### `public inline FORCEINLINE void `[`SetMaxToNull`](#structFRHAPI__PexStat_1ad623f2d1ced8d75111611dfc0b7e34e4)`()` <a id="structFRHAPI__PexStat_1ad623f2d1ced8d75111611dfc0b7e34e4"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsMaxNull`](#structFRHAPI__PexStat_1a654e2c5c019495040fa054fa83d9a7dd)`() const` <a id="structFRHAPI__PexStat_1a654e2c5c019495040fa054fa83d9a7dd"></a>

Checks whether Max_Optional is set to null.

#### `public inline FORCEINLINE float & `[`GetAvg`](#structFRHAPI__PexStat_1ad4ff2ffc7e2064075d7a3de6a654d867)`()` <a id="structFRHAPI__PexStat_1ad4ff2ffc7e2064075d7a3de6a654d867"></a>

Gets the value of Avg_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetAvg`](#structFRHAPI__PexStat_1a9c0dad681c5f8f6211fa6f1a0abf9fbb)`() const` <a id="structFRHAPI__PexStat_1a9c0dad681c5f8f6211fa6f1a0abf9fbb"></a>

Gets the value of Avg_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetAvg`](#structFRHAPI__PexStat_1adbf0f876be5695bd1aeeab37c841233b)`(const float & DefaultValue) const` <a id="structFRHAPI__PexStat_1adbf0f876be5695bd1aeeab37c841233b"></a>

Gets the value of Avg_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAvg`](#structFRHAPI__PexStat_1a10ae8ad31adee9466349c0461a46c819)`(float & OutValue) const` <a id="structFRHAPI__PexStat_1a10ae8ad31adee9466349c0461a46c819"></a>

Fills OutValue with the value of Avg_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetAvgOrNull`](#structFRHAPI__PexStat_1ac32cb40493f6c4f4712e02540849bb9b)`()` <a id="structFRHAPI__PexStat_1ac32cb40493f6c4f4712e02540849bb9b"></a>

Returns a pointer to Avg_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetAvgOrNull`](#structFRHAPI__PexStat_1ab63c6180ee5273a7785bba85fc511d4c)`() const` <a id="structFRHAPI__PexStat_1ab63c6180ee5273a7785bba85fc511d4c"></a>

Returns a pointer to Avg_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAvg`](#structFRHAPI__PexStat_1a3193362986be9e9e45a796f458c6efbb)`(const float & NewValue)` <a id="structFRHAPI__PexStat_1a3193362986be9e9e45a796f458c6efbb"></a>

Sets the value of Avg_Optional and also sets Avg_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAvg`](#structFRHAPI__PexStat_1ad4f7141c85fc35bafdb08b2c2e44eafb)`(float && NewValue)` <a id="structFRHAPI__PexStat_1ad4f7141c85fc35bafdb08b2c2e44eafb"></a>

Sets the value of Avg_Optional and also sets Avg_IsSet to true using move semantics.

#### `public inline void `[`ClearAvg`](#structFRHAPI__PexStat_1ab624c8c0e0f5073ed6f0083df50a4eb7)`()` <a id="structFRHAPI__PexStat_1ab624c8c0e0f5073ed6f0083df50a4eb7"></a>

Clears the value of Avg_Optional and sets Avg_IsSet to false.

#### `public inline FORCEINLINE void `[`SetAvgToNull`](#structFRHAPI__PexStat_1a085d9e56ff65c5c441b5cf23182efcbd)`()` <a id="structFRHAPI__PexStat_1a085d9e56ff65c5c441b5cf23182efcbd"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsAvgNull`](#structFRHAPI__PexStat_1a1888774d0c5cd2d0742605fb185ac8d6)`() const` <a id="structFRHAPI__PexStat_1a1888774d0c5cd2d0742605fb185ac8d6"></a>

Checks whether Avg_Optional is set to null.

#### `public inline FORCEINLINE float & `[`GetStddev`](#structFRHAPI__PexStat_1aef1aa790fd689ac03cc21abdffae86f5)`()` <a id="structFRHAPI__PexStat_1aef1aa790fd689ac03cc21abdffae86f5"></a>

Gets the value of Stddev_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetStddev`](#structFRHAPI__PexStat_1a089b29f9ed4c4696ffbb1a8f5b3083e8)`() const` <a id="structFRHAPI__PexStat_1a089b29f9ed4c4696ffbb1a8f5b3083e8"></a>

Gets the value of Stddev_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const float & `[`GetStddev`](#structFRHAPI__PexStat_1aa483982376133fdbb495e060627b1dcd)`(const float & DefaultValue) const` <a id="structFRHAPI__PexStat_1aa483982376133fdbb495e060627b1dcd"></a>

Gets the value of Stddev_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStddev`](#structFRHAPI__PexStat_1ac58505c210bb8953e1155a737e807fa8)`(float & OutValue) const` <a id="structFRHAPI__PexStat_1ac58505c210bb8953e1155a737e807fa8"></a>

Fills OutValue with the value of Stddev_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE float * `[`GetStddevOrNull`](#structFRHAPI__PexStat_1a48c341b40fe5d504fe24adeb868e53dd)`()` <a id="structFRHAPI__PexStat_1a48c341b40fe5d504fe24adeb868e53dd"></a>

Returns a pointer to Stddev_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const float * `[`GetStddevOrNull`](#structFRHAPI__PexStat_1a1fc37018d78fd8566de12ea33bb92b40)`() const` <a id="structFRHAPI__PexStat_1a1fc37018d78fd8566de12ea33bb92b40"></a>

Returns a pointer to Stddev_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStddev`](#structFRHAPI__PexStat_1ab755730aa2c4e6656136f99831c55102)`(const float & NewValue)` <a id="structFRHAPI__PexStat_1ab755730aa2c4e6656136f99831c55102"></a>

Sets the value of Stddev_Optional and also sets Stddev_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStddev`](#structFRHAPI__PexStat_1a5da5bb886a525e16f9e29327b6e75d97)`(float && NewValue)` <a id="structFRHAPI__PexStat_1a5da5bb886a525e16f9e29327b6e75d97"></a>

Sets the value of Stddev_Optional and also sets Stddev_IsSet to true using move semantics.

#### `public inline void `[`ClearStddev`](#structFRHAPI__PexStat_1ac3f06b3d877340f62412878c41fb835f)`()` <a id="structFRHAPI__PexStat_1ac3f06b3d877340f62412878c41fb835f"></a>

Clears the value of Stddev_Optional and sets Stddev_IsSet to false.

#### `public inline FORCEINLINE void `[`SetStddevToNull`](#structFRHAPI__PexStat_1a6c458f67bbf4d0b9ad4490daddcc5e8c)`()` <a id="structFRHAPI__PexStat_1a6c458f67bbf4d0b9ad4490daddcc5e8c"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsStddevNull`](#structFRHAPI__PexStat_1a41ec6b9ad6b01f9f6316df8ca048f4d0)`() const` <a id="structFRHAPI__PexStat_1a41ec6b9ad6b01f9f6316df8ca048f4d0"></a>

Checks whether Stddev_Optional is set to null.

