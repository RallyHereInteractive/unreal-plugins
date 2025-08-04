---
title: RHAPI_RankRankData
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RankRankData`](#structFRHAPI__RankRankData) | Ranked data about a player&#39;s skill and confidence levels.

## struct `FRHAPI_RankRankData` <a id="structFRHAPI__RankRankData"></a>

```
struct FRHAPI_RankRankData
  : public FRHAPI_Model
```

Ranked data about a player&#39;s skill and confidence levels.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public float `[`Mu`](#structFRHAPI__RankRankData_1a65657b053e2385f72a273f6da1ad0336) | A measure of perceived skill in a player.
`public float `[`Sigma`](#structFRHAPI__RankRankData_1a5a58728579185eec1dc6b2d68c70cc52) | A measure of how confident we are in the perceived skill (high sigma means low confidence)
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__RankRankData_1af743025e4e98a237501007181fe2baf3) | Custom key-value player rank data.
`public bool `[`CustomData_IsSet`](#structFRHAPI__RankRankData_1a836f74d8eeabc4b47bcbcb6f67e18a77) | true if CustomData_Optional has been set to a value
`public FDateTime `[`LastUpdatedDatetime_Optional`](#structFRHAPI__RankRankData_1a8137db9e9c93b20bcf82994b8416207d) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`LastUpdatedDatetime_IsSet`](#structFRHAPI__RankRankData_1a7f6c36a96db2383fef577342b3954b38) | true if LastUpdatedDatetime_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__RankRankData_1a1d74e64ab2a269bca24689628afe39d6)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RankRankData_1a0270dec7bc6cca9667da20b7acad3d18)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline float & `[`GetMu`](#structFRHAPI__RankRankData_1af2528ad1bbd3926cf55b0e11ddc19f88)`()` | Gets the value of Mu.
`public inline const float & `[`GetMu`](#structFRHAPI__RankRankData_1a37218f25d9662731ed49a5e8a6fe39c8)`() const` | Gets the value of Mu.
`public inline void `[`SetMu`](#structFRHAPI__RankRankData_1ab1db3987be4d19fd3c5b85237ed5be10)`(const float & NewValue)` | Sets the value of Mu.
`public inline void `[`SetMu`](#structFRHAPI__RankRankData_1a3f57235c80b05c65c2432401c300eb71)`(float && NewValue)` | Sets the value of Mu using move semantics.
`public inline float & `[`GetSigma`](#structFRHAPI__RankRankData_1aad8e2554c0d365b2b10a35b33da2f14d)`()` | Gets the value of Sigma.
`public inline const float & `[`GetSigma`](#structFRHAPI__RankRankData_1a8115a63ee8900682568db9eaf87a701a)`() const` | Gets the value of Sigma.
`public inline void `[`SetSigma`](#structFRHAPI__RankRankData_1abb913e0d4c1dee4f60d6a997c06c8d23)`(const float & NewValue)` | Sets the value of Sigma.
`public inline void `[`SetSigma`](#structFRHAPI__RankRankData_1a94faaf303b770f8e98501574efa857a2)`(float && NewValue)` | Sets the value of Sigma using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankRankData_1a43a5b754f52caec10fd39f3e27c20ed6)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankRankData_1a435e865c306b733c5d0a8b251bb586e2)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankRankData_1ab2db92150fb5346303027fb68ca4f814)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__RankRankData_1a6ef447fa6edfe03588a8492684ac7392)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankRankData_1ad21371776bd528a82f7d7b6f083663c8)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankRankData_1a0b4f00a604f63c1dba38e6feccb9958e)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__RankRankData_1a28192b4c0fbd6a1bedc292ee4e3baaf4)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__RankRankData_1a2f9c6d0dcedc23236e0ec9321f5fb215)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__RankRankData_1a319304e954e50f333da75582b1aea553)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__RankRankData_1abfc42bffa144324c93177659e8b13493)`() const` | Checks whether CustomData_Optional has been set.
`public inline FDateTime & `[`GetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1a720a6296d11a58d87dd37a8e96deb1e4)`()` | Gets the value of LastUpdatedDatetime_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1ac736ec51e149ab7944c81b2cb1e2d6b8)`() const` | Gets the value of LastUpdatedDatetime_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1a9fa14ca9d8032eff1473b14d050919ea)`(const FDateTime & DefaultValue) const` | Gets the value of LastUpdatedDatetime_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1a0c42187cf1a5ab883f9b735332c1f77c)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastUpdatedDatetime_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLastUpdatedDatetimeOrNull`](#structFRHAPI__RankRankData_1a5d0c598d5b8a90c45827bb45b5d1d72e)`()` | Returns a pointer to LastUpdatedDatetime_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLastUpdatedDatetimeOrNull`](#structFRHAPI__RankRankData_1aa39bbe33773a58bd7273dc84d95af5ef)`() const` | Returns a pointer to LastUpdatedDatetime_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1ae848ae63b6284c28f01c729f310a95e4)`(const FDateTime & NewValue)` | Sets the value of LastUpdatedDatetime_Optional and also sets LastUpdatedDatetime_IsSet to true.
`public inline void `[`SetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1a305deb89578aa433fd1603830f9f9d42)`(FDateTime && NewValue)` | Sets the value of LastUpdatedDatetime_Optional and also sets LastUpdatedDatetime_IsSet to true using move semantics.
`public inline void `[`ClearLastUpdatedDatetime`](#structFRHAPI__RankRankData_1a5a9c38cd67461009914656bd693e9a82)`()` | Clears the value of LastUpdatedDatetime_Optional and sets LastUpdatedDatetime_IsSet to false.
`public inline bool `[`IsLastUpdatedDatetimeSet`](#structFRHAPI__RankRankData_1abcc87bd805a78e8113058471ab25bb4c)`() const` | Checks whether LastUpdatedDatetime_Optional has been set.

### Members

#### `public float `[`Mu`](#structFRHAPI__RankRankData_1a65657b053e2385f72a273f6da1ad0336) <a id="structFRHAPI__RankRankData_1a65657b053e2385f72a273f6da1ad0336"></a>

A measure of perceived skill in a player.

#### `public float `[`Sigma`](#structFRHAPI__RankRankData_1a5a58728579185eec1dc6b2d68c70cc52) <a id="structFRHAPI__RankRankData_1a5a58728579185eec1dc6b2d68c70cc52"></a>

A measure of how confident we are in the perceived skill (high sigma means low confidence)

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__RankRankData_1af743025e4e98a237501007181fe2baf3) <a id="structFRHAPI__RankRankData_1af743025e4e98a237501007181fe2baf3"></a>

Custom key-value player rank data.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__RankRankData_1a836f74d8eeabc4b47bcbcb6f67e18a77) <a id="structFRHAPI__RankRankData_1a836f74d8eeabc4b47bcbcb6f67e18a77"></a>

true if CustomData_Optional has been set to a value

#### `public FDateTime `[`LastUpdatedDatetime_Optional`](#structFRHAPI__RankRankData_1a8137db9e9c93b20bcf82994b8416207d) <a id="structFRHAPI__RankRankData_1a8137db9e9c93b20bcf82994b8416207d"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`LastUpdatedDatetime_IsSet`](#structFRHAPI__RankRankData_1a7f6c36a96db2383fef577342b3954b38) <a id="structFRHAPI__RankRankData_1a7f6c36a96db2383fef577342b3954b38"></a>

true if LastUpdatedDatetime_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__RankRankData_1a1d74e64ab2a269bca24689628afe39d6)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RankRankData_1a1d74e64ab2a269bca24689628afe39d6"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__RankRankData_1a0270dec7bc6cca9667da20b7acad3d18)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__RankRankData_1a0270dec7bc6cca9667da20b7acad3d18"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline float & `[`GetMu`](#structFRHAPI__RankRankData_1af2528ad1bbd3926cf55b0e11ddc19f88)`()` <a id="structFRHAPI__RankRankData_1af2528ad1bbd3926cf55b0e11ddc19f88"></a>

Gets the value of Mu.

#### `public inline const float & `[`GetMu`](#structFRHAPI__RankRankData_1a37218f25d9662731ed49a5e8a6fe39c8)`() const` <a id="structFRHAPI__RankRankData_1a37218f25d9662731ed49a5e8a6fe39c8"></a>

Gets the value of Mu.

#### `public inline void `[`SetMu`](#structFRHAPI__RankRankData_1ab1db3987be4d19fd3c5b85237ed5be10)`(const float & NewValue)` <a id="structFRHAPI__RankRankData_1ab1db3987be4d19fd3c5b85237ed5be10"></a>

Sets the value of Mu.

#### `public inline void `[`SetMu`](#structFRHAPI__RankRankData_1a3f57235c80b05c65c2432401c300eb71)`(float && NewValue)` <a id="structFRHAPI__RankRankData_1a3f57235c80b05c65c2432401c300eb71"></a>

Sets the value of Mu using move semantics.

#### `public inline float & `[`GetSigma`](#structFRHAPI__RankRankData_1aad8e2554c0d365b2b10a35b33da2f14d)`()` <a id="structFRHAPI__RankRankData_1aad8e2554c0d365b2b10a35b33da2f14d"></a>

Gets the value of Sigma.

#### `public inline const float & `[`GetSigma`](#structFRHAPI__RankRankData_1a8115a63ee8900682568db9eaf87a701a)`() const` <a id="structFRHAPI__RankRankData_1a8115a63ee8900682568db9eaf87a701a"></a>

Gets the value of Sigma.

#### `public inline void `[`SetSigma`](#structFRHAPI__RankRankData_1abb913e0d4c1dee4f60d6a997c06c8d23)`(const float & NewValue)` <a id="structFRHAPI__RankRankData_1abb913e0d4c1dee4f60d6a997c06c8d23"></a>

Sets the value of Sigma.

#### `public inline void `[`SetSigma`](#structFRHAPI__RankRankData_1a94faaf303b770f8e98501574efa857a2)`(float && NewValue)` <a id="structFRHAPI__RankRankData_1a94faaf303b770f8e98501574efa857a2"></a>

Sets the value of Sigma using move semantics.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankRankData_1a43a5b754f52caec10fd39f3e27c20ed6)`()` <a id="structFRHAPI__RankRankData_1a43a5b754f52caec10fd39f3e27c20ed6"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankRankData_1a435e865c306b733c5d0a8b251bb586e2)`() const` <a id="structFRHAPI__RankRankData_1a435e865c306b733c5d0a8b251bb586e2"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankRankData_1ab2db92150fb5346303027fb68ca4f814)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__RankRankData_1ab2db92150fb5346303027fb68ca4f814"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__RankRankData_1a6ef447fa6edfe03588a8492684ac7392)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__RankRankData_1a6ef447fa6edfe03588a8492684ac7392"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankRankData_1ad21371776bd528a82f7d7b6f083663c8)`()` <a id="structFRHAPI__RankRankData_1ad21371776bd528a82f7d7b6f083663c8"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankRankData_1a0b4f00a604f63c1dba38e6feccb9958e)`() const` <a id="structFRHAPI__RankRankData_1a0b4f00a604f63c1dba38e6feccb9958e"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__RankRankData_1a28192b4c0fbd6a1bedc292ee4e3baaf4)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__RankRankData_1a28192b4c0fbd6a1bedc292ee4e3baaf4"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__RankRankData_1a2f9c6d0dcedc23236e0ec9321f5fb215)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__RankRankData_1a2f9c6d0dcedc23236e0ec9321f5fb215"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__RankRankData_1a319304e954e50f333da75582b1aea553)`()` <a id="structFRHAPI__RankRankData_1a319304e954e50f333da75582b1aea553"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__RankRankData_1abfc42bffa144324c93177659e8b13493)`() const` <a id="structFRHAPI__RankRankData_1abfc42bffa144324c93177659e8b13493"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FDateTime & `[`GetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1a720a6296d11a58d87dd37a8e96deb1e4)`()` <a id="structFRHAPI__RankRankData_1a720a6296d11a58d87dd37a8e96deb1e4"></a>

Gets the value of LastUpdatedDatetime_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1ac736ec51e149ab7944c81b2cb1e2d6b8)`() const` <a id="structFRHAPI__RankRankData_1ac736ec51e149ab7944c81b2cb1e2d6b8"></a>

Gets the value of LastUpdatedDatetime_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1a9fa14ca9d8032eff1473b14d050919ea)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__RankRankData_1a9fa14ca9d8032eff1473b14d050919ea"></a>

Gets the value of LastUpdatedDatetime_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1a0c42187cf1a5ab883f9b735332c1f77c)`(FDateTime & OutValue) const` <a id="structFRHAPI__RankRankData_1a0c42187cf1a5ab883f9b735332c1f77c"></a>

Fills OutValue with the value of LastUpdatedDatetime_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetLastUpdatedDatetimeOrNull`](#structFRHAPI__RankRankData_1a5d0c598d5b8a90c45827bb45b5d1d72e)`()` <a id="structFRHAPI__RankRankData_1a5d0c598d5b8a90c45827bb45b5d1d72e"></a>

Returns a pointer to LastUpdatedDatetime_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetLastUpdatedDatetimeOrNull`](#structFRHAPI__RankRankData_1aa39bbe33773a58bd7273dc84d95af5ef)`() const` <a id="structFRHAPI__RankRankData_1aa39bbe33773a58bd7273dc84d95af5ef"></a>

Returns a pointer to LastUpdatedDatetime_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1ae848ae63b6284c28f01c729f310a95e4)`(const FDateTime & NewValue)` <a id="structFRHAPI__RankRankData_1ae848ae63b6284c28f01c729f310a95e4"></a>

Sets the value of LastUpdatedDatetime_Optional and also sets LastUpdatedDatetime_IsSet to true.

#### `public inline void `[`SetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1a305deb89578aa433fd1603830f9f9d42)`(FDateTime && NewValue)` <a id="structFRHAPI__RankRankData_1a305deb89578aa433fd1603830f9f9d42"></a>

Sets the value of LastUpdatedDatetime_Optional and also sets LastUpdatedDatetime_IsSet to true using move semantics.

#### `public inline void `[`ClearLastUpdatedDatetime`](#structFRHAPI__RankRankData_1a5a9c38cd67461009914656bd693e9a82)`()` <a id="structFRHAPI__RankRankData_1a5a9c38cd67461009914656bd693e9a82"></a>

Clears the value of LastUpdatedDatetime_Optional and sets LastUpdatedDatetime_IsSet to false.

#### `public inline bool `[`IsLastUpdatedDatetimeSet`](#structFRHAPI__RankRankData_1abcc87bd805a78e8113058471ab25bb4c)`() const` <a id="structFRHAPI__RankRankData_1abcc87bd805a78e8113058471ab25bb4c"></a>

Checks whether LastUpdatedDatetime_Optional has been set.

