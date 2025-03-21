---
title: RHAPI_Friends
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Friends`](#structFRHAPI__Friends) | List of player_uuids to operate on.

## struct `FRHAPI_Friends` <a id="structFRHAPI__Friends"></a>

```
struct FRHAPI_Friends
  : public FRHAPI_Model
```

List of player_uuids to operate on.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< FGuid > `[`Friends`](#structFRHAPI__Friends_1ac8e4a2e4be8a82c1c69c0e756eb0b874) | 
`public virtual bool `[`FromJson`](#structFRHAPI__Friends_1acca9cc887aaa239de9a2bf06db92e01d)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Friends_1a4ff2a44fb898d277ecee2d73bb7820da)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< FGuid > & `[`GetFriends`](#structFRHAPI__Friends_1abf5b079744c91665562d9b2c2f52df6e)`()` | Gets the value of Friends.
`public inline const TArray< FGuid > & `[`GetFriends`](#structFRHAPI__Friends_1a0a7880274ae9e18766934c4a5067a633)`() const` | Gets the value of Friends.
`public inline void `[`SetFriends`](#structFRHAPI__Friends_1ad6ca61403b499ffc257b6cb4de78e490)`(const TArray< FGuid > & NewValue)` | Sets the value of Friends.
`public inline void `[`SetFriends`](#structFRHAPI__Friends_1a75d5b98476ead4adb348ca9fb0f57277)`(TArray< FGuid > && NewValue)` | Sets the value of Friends using move semantics.

### Members

#### `public TArray< FGuid > `[`Friends`](#structFRHAPI__Friends_1ac8e4a2e4be8a82c1c69c0e756eb0b874) <a id="structFRHAPI__Friends_1ac8e4a2e4be8a82c1c69c0e756eb0b874"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__Friends_1acca9cc887aaa239de9a2bf06db92e01d)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Friends_1acca9cc887aaa239de9a2bf06db92e01d"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Friends_1a4ff2a44fb898d277ecee2d73bb7820da)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__Friends_1a4ff2a44fb898d277ecee2d73bb7820da"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< FGuid > & `[`GetFriends`](#structFRHAPI__Friends_1abf5b079744c91665562d9b2c2f52df6e)`()` <a id="structFRHAPI__Friends_1abf5b079744c91665562d9b2c2f52df6e"></a>

Gets the value of Friends.

#### `public inline const TArray< FGuid > & `[`GetFriends`](#structFRHAPI__Friends_1a0a7880274ae9e18766934c4a5067a633)`() const` <a id="structFRHAPI__Friends_1a0a7880274ae9e18766934c4a5067a633"></a>

Gets the value of Friends.

#### `public inline void `[`SetFriends`](#structFRHAPI__Friends_1ad6ca61403b499ffc257b6cb4de78e490)`(const TArray< FGuid > & NewValue)` <a id="structFRHAPI__Friends_1ad6ca61403b499ffc257b6cb4de78e490"></a>

Sets the value of Friends.

#### `public inline void `[`SetFriends`](#structFRHAPI__Friends_1a75d5b98476ead4adb348ca9fb0f57277)`(TArray< FGuid > && NewValue)` <a id="structFRHAPI__Friends_1a75d5b98476ead4adb348ca9fb0f57277"></a>

Sets the value of Friends using move semantics.

