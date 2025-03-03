---
title: RHAPI_PlayerUpdateRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerUpdateRequest`](#structFRHAPI__PlayerUpdateRequest) | 

## struct `FRHAPI_PlayerUpdateRequest` <a id="structFRHAPI__PlayerUpdateRequest"></a>

```
struct FRHAPI_PlayerUpdateRequest
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerUpdateRequest_1a3d4766eba33d888cf19423cca8a604ac) | Custom data for the player.
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerUpdateRequest_1a722b66dcd71262b17204d97a62705d8d) | true if CustomData_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerUpdateRequest_1a56a375b7965b9add2da285ae13aa1a3a)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerUpdateRequest_1ac477e46613d17ec3944d73cc74c4240b)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerUpdateRequest_1a7b90cf1c127002da74d03500febc3788)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerUpdateRequest_1af28c69484161ce919b49d88bba1c8ee5)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerUpdateRequest_1a91617580c552846b4aa567ef357d03db)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlayerUpdateRequest_1a95fcd7591c31de744da219fa3c439e49)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerUpdateRequest_1a5bd9f13ea98932525a3f8a5bfb2b5c9c)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerUpdateRequest_1a1c0825cb38b782e3614e04b981685438)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerUpdateRequest_1a747c8decec6b5b50952b7a927511166d)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerUpdateRequest_1a649d3fc5eb51085916e835b56675fdcf)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerUpdateRequest_1a821b5c2d6545ecd1a1eff6410f6ff9f5)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlayerUpdateRequest_1aafc0f43b5599421acc32be1874bb035d)`() const` | Checks whether CustomData_Optional has been set.

### Members

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerUpdateRequest_1a3d4766eba33d888cf19423cca8a604ac) <a id="structFRHAPI__PlayerUpdateRequest_1a3d4766eba33d888cf19423cca8a604ac"></a>

Custom data for the player.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerUpdateRequest_1a722b66dcd71262b17204d97a62705d8d) <a id="structFRHAPI__PlayerUpdateRequest_1a722b66dcd71262b17204d97a62705d8d"></a>

true if CustomData_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerUpdateRequest_1a56a375b7965b9add2da285ae13aa1a3a)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerUpdateRequest_1a56a375b7965b9add2da285ae13aa1a3a"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerUpdateRequest_1ac477e46613d17ec3944d73cc74c4240b)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerUpdateRequest_1ac477e46613d17ec3944d73cc74c4240b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerUpdateRequest_1a7b90cf1c127002da74d03500febc3788)`()` <a id="structFRHAPI__PlayerUpdateRequest_1a7b90cf1c127002da74d03500febc3788"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerUpdateRequest_1af28c69484161ce919b49d88bba1c8ee5)`() const` <a id="structFRHAPI__PlayerUpdateRequest_1af28c69484161ce919b49d88bba1c8ee5"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerUpdateRequest_1a91617580c552846b4aa567ef357d03db)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerUpdateRequest_1a91617580c552846b4aa567ef357d03db"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlayerUpdateRequest_1a95fcd7591c31de744da219fa3c439e49)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerUpdateRequest_1a95fcd7591c31de744da219fa3c439e49"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerUpdateRequest_1a5bd9f13ea98932525a3f8a5bfb2b5c9c)`()` <a id="structFRHAPI__PlayerUpdateRequest_1a5bd9f13ea98932525a3f8a5bfb2b5c9c"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerUpdateRequest_1a1c0825cb38b782e3614e04b981685438)`() const` <a id="structFRHAPI__PlayerUpdateRequest_1a1c0825cb38b782e3614e04b981685438"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerUpdateRequest_1a747c8decec6b5b50952b7a927511166d)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlayerUpdateRequest_1a747c8decec6b5b50952b7a927511166d"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerUpdateRequest_1a649d3fc5eb51085916e835b56675fdcf)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlayerUpdateRequest_1a649d3fc5eb51085916e835b56675fdcf"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerUpdateRequest_1a821b5c2d6545ecd1a1eff6410f6ff9f5)`()` <a id="structFRHAPI__PlayerUpdateRequest_1a821b5c2d6545ecd1a1eff6410f6ff9f5"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__PlayerUpdateRequest_1aafc0f43b5599421acc32be1874bb035d)`() const` <a id="structFRHAPI__PlayerUpdateRequest_1aafc0f43b5599421acc32be1874bb035d"></a>

Checks whether CustomData_Optional has been set.

