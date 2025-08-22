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
`public inline FORCEINLINE float & `[`GetMu`](#structFRHAPI__RankRankData_1a503f16e89cbb0d93a0e436c2774c772c)`()` | Gets the value of Mu.
`public inline FORCEINLINE const float & `[`GetMu`](#structFRHAPI__RankRankData_1ac2bda417bb3d963acae708e4bdf0b180)`() const` | Gets the value of Mu.
`public inline FORCEINLINE void `[`SetMu`](#structFRHAPI__RankRankData_1aeaaab876dc211a86e64b30f545d9167a)`(const float & NewValue)` | Sets the value of Mu.
`public inline FORCEINLINE void `[`SetMu`](#structFRHAPI__RankRankData_1a1ad2bd1c66d888955fc082034b314790)`(float && NewValue)` | Sets the value of Mu using move semantics.
`public inline FORCEINLINE float & `[`GetSigma`](#structFRHAPI__RankRankData_1a632ae7e6a40ddf8a179489d9f2826d4a)`()` | Gets the value of Sigma.
`public inline FORCEINLINE const float & `[`GetSigma`](#structFRHAPI__RankRankData_1a187467e43288988fd1a165d059f085cd)`() const` | Gets the value of Sigma.
`public inline FORCEINLINE void `[`SetSigma`](#structFRHAPI__RankRankData_1a089d2158b533c70c4c135be74f9c3d2d)`(const float & NewValue)` | Sets the value of Sigma.
`public inline FORCEINLINE void `[`SetSigma`](#structFRHAPI__RankRankData_1aa149dd1d189732f512667b49b13b1e43)`(float && NewValue)` | Sets the value of Sigma using move semantics.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankRankData_1a93b53d2c33dcc2162798d3bb4cfad513)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankRankData_1a55f170abb9c07909b2dc54040cda71ca)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankRankData_1aa15a5c0b721756bd0b7da6d3705f1b49)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__RankRankData_1ab909d36b17ad7fb1219af9b791619a25)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankRankData_1ac57d4a24cb33f7c1344917f6ac497aee)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankRankData_1a3e325e1084808346449bb0c58cb6ccf1)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__RankRankData_1a76328576fd6d297e43011db920861f86)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__RankRankData_1a909213e208162e4216160c8272682201)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__RankRankData_1a319304e954e50f333da75582b1aea553)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1a681c9815628fbde34cce75d36e7c7d2c)`()` | Gets the value of LastUpdatedDatetime_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1aec526a38c758c6cb929bff369ae1f53c)`() const` | Gets the value of LastUpdatedDatetime_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1a84c383efd69bea83c097568cd3eec5c5)`(const FDateTime & DefaultValue) const` | Gets the value of LastUpdatedDatetime_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1a734782a13a7dc9b545df5e02097e7682)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastUpdatedDatetime_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetLastUpdatedDatetimeOrNull`](#structFRHAPI__RankRankData_1aca0577434fde102d9a880ca53cc5b233)`()` | Returns a pointer to LastUpdatedDatetime_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetLastUpdatedDatetimeOrNull`](#structFRHAPI__RankRankData_1a7455a22522e03dd3bce563c5829b8f35)`() const` | Returns a pointer to LastUpdatedDatetime_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1acc500ab30f3b26057aa060e915a61d18)`(const FDateTime & NewValue)` | Sets the value of LastUpdatedDatetime_Optional and also sets LastUpdatedDatetime_IsSet to true.
`public inline FORCEINLINE void `[`SetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1a8fbf505d86648cd99becb29a49a408c6)`(FDateTime && NewValue)` | Sets the value of LastUpdatedDatetime_Optional and also sets LastUpdatedDatetime_IsSet to true using move semantics.
`public inline void `[`ClearLastUpdatedDatetime`](#structFRHAPI__RankRankData_1a5a9c38cd67461009914656bd693e9a82)`()` | Clears the value of LastUpdatedDatetime_Optional and sets LastUpdatedDatetime_IsSet to false.

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

#### `public inline FORCEINLINE float & `[`GetMu`](#structFRHAPI__RankRankData_1a503f16e89cbb0d93a0e436c2774c772c)`()` <a id="structFRHAPI__RankRankData_1a503f16e89cbb0d93a0e436c2774c772c"></a>

Gets the value of Mu.

#### `public inline FORCEINLINE const float & `[`GetMu`](#structFRHAPI__RankRankData_1ac2bda417bb3d963acae708e4bdf0b180)`() const` <a id="structFRHAPI__RankRankData_1ac2bda417bb3d963acae708e4bdf0b180"></a>

Gets the value of Mu.

#### `public inline FORCEINLINE void `[`SetMu`](#structFRHAPI__RankRankData_1aeaaab876dc211a86e64b30f545d9167a)`(const float & NewValue)` <a id="structFRHAPI__RankRankData_1aeaaab876dc211a86e64b30f545d9167a"></a>

Sets the value of Mu.

#### `public inline FORCEINLINE void `[`SetMu`](#structFRHAPI__RankRankData_1a1ad2bd1c66d888955fc082034b314790)`(float && NewValue)` <a id="structFRHAPI__RankRankData_1a1ad2bd1c66d888955fc082034b314790"></a>

Sets the value of Mu using move semantics.

#### `public inline FORCEINLINE float & `[`GetSigma`](#structFRHAPI__RankRankData_1a632ae7e6a40ddf8a179489d9f2826d4a)`()` <a id="structFRHAPI__RankRankData_1a632ae7e6a40ddf8a179489d9f2826d4a"></a>

Gets the value of Sigma.

#### `public inline FORCEINLINE const float & `[`GetSigma`](#structFRHAPI__RankRankData_1a187467e43288988fd1a165d059f085cd)`() const` <a id="structFRHAPI__RankRankData_1a187467e43288988fd1a165d059f085cd"></a>

Gets the value of Sigma.

#### `public inline FORCEINLINE void `[`SetSigma`](#structFRHAPI__RankRankData_1a089d2158b533c70c4c135be74f9c3d2d)`(const float & NewValue)` <a id="structFRHAPI__RankRankData_1a089d2158b533c70c4c135be74f9c3d2d"></a>

Sets the value of Sigma.

#### `public inline FORCEINLINE void `[`SetSigma`](#structFRHAPI__RankRankData_1aa149dd1d189732f512667b49b13b1e43)`(float && NewValue)` <a id="structFRHAPI__RankRankData_1aa149dd1d189732f512667b49b13b1e43"></a>

Sets the value of Sigma using move semantics.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankRankData_1a93b53d2c33dcc2162798d3bb4cfad513)`()` <a id="structFRHAPI__RankRankData_1a93b53d2c33dcc2162798d3bb4cfad513"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankRankData_1a55f170abb9c07909b2dc54040cda71ca)`() const` <a id="structFRHAPI__RankRankData_1a55f170abb9c07909b2dc54040cda71ca"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__RankRankData_1aa15a5c0b721756bd0b7da6d3705f1b49)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__RankRankData_1aa15a5c0b721756bd0b7da6d3705f1b49"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__RankRankData_1ab909d36b17ad7fb1219af9b791619a25)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__RankRankData_1ab909d36b17ad7fb1219af9b791619a25"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankRankData_1ac57d4a24cb33f7c1344917f6ac497aee)`()` <a id="structFRHAPI__RankRankData_1ac57d4a24cb33f7c1344917f6ac497aee"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__RankRankData_1a3e325e1084808346449bb0c58cb6ccf1)`() const` <a id="structFRHAPI__RankRankData_1a3e325e1084808346449bb0c58cb6ccf1"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__RankRankData_1a76328576fd6d297e43011db920861f86)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__RankRankData_1a76328576fd6d297e43011db920861f86"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__RankRankData_1a909213e208162e4216160c8272682201)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__RankRankData_1a909213e208162e4216160c8272682201"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__RankRankData_1a319304e954e50f333da75582b1aea553)`()` <a id="structFRHAPI__RankRankData_1a319304e954e50f333da75582b1aea553"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1a681c9815628fbde34cce75d36e7c7d2c)`()` <a id="structFRHAPI__RankRankData_1a681c9815628fbde34cce75d36e7c7d2c"></a>

Gets the value of LastUpdatedDatetime_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1aec526a38c758c6cb929bff369ae1f53c)`() const` <a id="structFRHAPI__RankRankData_1aec526a38c758c6cb929bff369ae1f53c"></a>

Gets the value of LastUpdatedDatetime_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1a84c383efd69bea83c097568cd3eec5c5)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__RankRankData_1a84c383efd69bea83c097568cd3eec5c5"></a>

Gets the value of LastUpdatedDatetime_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1a734782a13a7dc9b545df5e02097e7682)`(FDateTime & OutValue) const` <a id="structFRHAPI__RankRankData_1a734782a13a7dc9b545df5e02097e7682"></a>

Fills OutValue with the value of LastUpdatedDatetime_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetLastUpdatedDatetimeOrNull`](#structFRHAPI__RankRankData_1aca0577434fde102d9a880ca53cc5b233)`()` <a id="structFRHAPI__RankRankData_1aca0577434fde102d9a880ca53cc5b233"></a>

Returns a pointer to LastUpdatedDatetime_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetLastUpdatedDatetimeOrNull`](#structFRHAPI__RankRankData_1a7455a22522e03dd3bce563c5829b8f35)`() const` <a id="structFRHAPI__RankRankData_1a7455a22522e03dd3bce563c5829b8f35"></a>

Returns a pointer to LastUpdatedDatetime_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1acc500ab30f3b26057aa060e915a61d18)`(const FDateTime & NewValue)` <a id="structFRHAPI__RankRankData_1acc500ab30f3b26057aa060e915a61d18"></a>

Sets the value of LastUpdatedDatetime_Optional and also sets LastUpdatedDatetime_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLastUpdatedDatetime`](#structFRHAPI__RankRankData_1a8fbf505d86648cd99becb29a49a408c6)`(FDateTime && NewValue)` <a id="structFRHAPI__RankRankData_1a8fbf505d86648cd99becb29a49a408c6"></a>

Sets the value of LastUpdatedDatetime_Optional and also sets LastUpdatedDatetime_IsSet to true using move semantics.

#### `public inline void `[`ClearLastUpdatedDatetime`](#structFRHAPI__RankRankData_1a5a9c38cd67461009914656bd693e9a82)`()` <a id="structFRHAPI__RankRankData_1a5a9c38cd67461009914656bd693e9a82"></a>

Clears the value of LastUpdatedDatetime_Optional and sets LastUpdatedDatetime_IsSet to false.

