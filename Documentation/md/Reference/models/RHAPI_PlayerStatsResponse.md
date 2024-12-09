---
title: RHAPI_PlayerStatsResponse
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerStatsResponse`](#structFRHAPI__PlayerStatsResponse) | 

## struct `FRHAPI_PlayerStatsResponse` <a id="structFRHAPI__PlayerStatsResponse"></a>

```
struct FRHAPI_PlayerStatsResponse
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public int32 `[`TotalMatchesPlayed_Optional`](#structFRHAPI__PlayerStatsResponse_1a36dafdea632b3cbdc4464b4d806b8bd2) | 
`public bool `[`TotalMatchesPlayed_IsSet`](#structFRHAPI__PlayerStatsResponse_1af3af8d974d758b6d0fc3f6afea81700c) | true if TotalMatchesPlayed_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerStatsResponse_1a8738ea87bdcdd6b59941015ab87b5f7e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerStatsResponse_1ad4d3cb98c9af8b45cdf7c4044a52503d)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline int32 & `[`GetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1a81443061826e863fe2caf10fcdaf9cee)`()` | Gets the value of TotalMatchesPlayed_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1a8157e458768b0307e8235264cc792220)`() const` | Gets the value of TotalMatchesPlayed_Optional, regardless of it having been set.
`public inline const int32 & `[`GetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1ae92894ec8aeb2d884fe17ee4420d34bd)`(const int32 & DefaultValue) const` | Gets the value of TotalMatchesPlayed_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1a4639c7bbe8e479b4b868d9243b2a5e5b)`(int32 & OutValue) const` | Fills OutValue with the value of TotalMatchesPlayed_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetTotalMatchesPlayedOrNull`](#structFRHAPI__PlayerStatsResponse_1a3be3191e490b0eb574838d2d4c5ec87f)`()` | Returns a pointer to TotalMatchesPlayed_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetTotalMatchesPlayedOrNull`](#structFRHAPI__PlayerStatsResponse_1a5679965dafe0612fe3bf86206ca5a7e5)`() const` | Returns a pointer to TotalMatchesPlayed_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1aebe98eb70b02d925b6fa30efcc499e03)`(const int32 & NewValue)` | Sets the value of TotalMatchesPlayed_Optional and also sets TotalMatchesPlayed_IsSet to true.
`public inline void `[`SetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1ad1f63df6593722b13c300d23d7b835bb)`(int32 && NewValue)` | Sets the value of TotalMatchesPlayed_Optional and also sets TotalMatchesPlayed_IsSet to true using move semantics.
`public inline void `[`ClearTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1ab31145dc8deb3c74ea7bad46113866ea)`()` | Clears the value of TotalMatchesPlayed_Optional and sets TotalMatchesPlayed_IsSet to false.
`public inline bool `[`IsTotalMatchesPlayedSet`](#structFRHAPI__PlayerStatsResponse_1adde9f42b8b34b5c9984bbeac90e27034)`() const` | Checks whether TotalMatchesPlayed_Optional has been set.
`public inline bool `[`IsTotalMatchesPlayedDefaultValue`](#structFRHAPI__PlayerStatsResponse_1adf96be3993b6413657d3f088eba2ec70)`() const` | Returns true if TotalMatchesPlayed_Optional is set and matches the default value.
`public inline void `[`SetTotalMatchesPlayedToDefault`](#structFRHAPI__PlayerStatsResponse_1aee07f9644993d4b33b4abdc9075f91f5)`()` | Sets the value of TotalMatchesPlayed_Optional to its default and also sets TotalMatchesPlayed_IsSet to true.

### Members

#### `public int32 `[`TotalMatchesPlayed_Optional`](#structFRHAPI__PlayerStatsResponse_1a36dafdea632b3cbdc4464b4d806b8bd2) <a id="structFRHAPI__PlayerStatsResponse_1a36dafdea632b3cbdc4464b4d806b8bd2"></a>

#### `public bool `[`TotalMatchesPlayed_IsSet`](#structFRHAPI__PlayerStatsResponse_1af3af8d974d758b6d0fc3f6afea81700c) <a id="structFRHAPI__PlayerStatsResponse_1af3af8d974d758b6d0fc3f6afea81700c"></a>

true if TotalMatchesPlayed_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerStatsResponse_1a8738ea87bdcdd6b59941015ab87b5f7e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerStatsResponse_1a8738ea87bdcdd6b59941015ab87b5f7e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerStatsResponse_1ad4d3cb98c9af8b45cdf7c4044a52503d)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerStatsResponse_1ad4d3cb98c9af8b45cdf7c4044a52503d"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline int32 & `[`GetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1a81443061826e863fe2caf10fcdaf9cee)`()` <a id="structFRHAPI__PlayerStatsResponse_1a81443061826e863fe2caf10fcdaf9cee"></a>

Gets the value of TotalMatchesPlayed_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1a8157e458768b0307e8235264cc792220)`() const` <a id="structFRHAPI__PlayerStatsResponse_1a8157e458768b0307e8235264cc792220"></a>

Gets the value of TotalMatchesPlayed_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1ae92894ec8aeb2d884fe17ee4420d34bd)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerStatsResponse_1ae92894ec8aeb2d884fe17ee4420d34bd"></a>

Gets the value of TotalMatchesPlayed_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1a4639c7bbe8e479b4b868d9243b2a5e5b)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerStatsResponse_1a4639c7bbe8e479b4b868d9243b2a5e5b"></a>

Fills OutValue with the value of TotalMatchesPlayed_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetTotalMatchesPlayedOrNull`](#structFRHAPI__PlayerStatsResponse_1a3be3191e490b0eb574838d2d4c5ec87f)`()` <a id="structFRHAPI__PlayerStatsResponse_1a3be3191e490b0eb574838d2d4c5ec87f"></a>

Returns a pointer to TotalMatchesPlayed_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetTotalMatchesPlayedOrNull`](#structFRHAPI__PlayerStatsResponse_1a5679965dafe0612fe3bf86206ca5a7e5)`() const` <a id="structFRHAPI__PlayerStatsResponse_1a5679965dafe0612fe3bf86206ca5a7e5"></a>

Returns a pointer to TotalMatchesPlayed_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1aebe98eb70b02d925b6fa30efcc499e03)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerStatsResponse_1aebe98eb70b02d925b6fa30efcc499e03"></a>

Sets the value of TotalMatchesPlayed_Optional and also sets TotalMatchesPlayed_IsSet to true.

#### `public inline void `[`SetTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1ad1f63df6593722b13c300d23d7b835bb)`(int32 && NewValue)` <a id="structFRHAPI__PlayerStatsResponse_1ad1f63df6593722b13c300d23d7b835bb"></a>

Sets the value of TotalMatchesPlayed_Optional and also sets TotalMatchesPlayed_IsSet to true using move semantics.

#### `public inline void `[`ClearTotalMatchesPlayed`](#structFRHAPI__PlayerStatsResponse_1ab31145dc8deb3c74ea7bad46113866ea)`()` <a id="structFRHAPI__PlayerStatsResponse_1ab31145dc8deb3c74ea7bad46113866ea"></a>

Clears the value of TotalMatchesPlayed_Optional and sets TotalMatchesPlayed_IsSet to false.

#### `public inline bool `[`IsTotalMatchesPlayedSet`](#structFRHAPI__PlayerStatsResponse_1adde9f42b8b34b5c9984bbeac90e27034)`() const` <a id="structFRHAPI__PlayerStatsResponse_1adde9f42b8b34b5c9984bbeac90e27034"></a>

Checks whether TotalMatchesPlayed_Optional has been set.

#### `public inline bool `[`IsTotalMatchesPlayedDefaultValue`](#structFRHAPI__PlayerStatsResponse_1adf96be3993b6413657d3f088eba2ec70)`() const` <a id="structFRHAPI__PlayerStatsResponse_1adf96be3993b6413657d3f088eba2ec70"></a>

Returns true if TotalMatchesPlayed_Optional is set and matches the default value.

#### `public inline void `[`SetTotalMatchesPlayedToDefault`](#structFRHAPI__PlayerStatsResponse_1aee07f9644993d4b33b4abdc9075f91f5)`()` <a id="structFRHAPI__PlayerStatsResponse_1aee07f9644993d4b33b4abdc9075f91f5"></a>

Sets the value of TotalMatchesPlayed_Optional to its default and also sets TotalMatchesPlayed_IsSet to true.

