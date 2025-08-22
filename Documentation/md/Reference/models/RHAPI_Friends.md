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
`public inline FORCEINLINE TArray< FGuid > & `[`GetFriends`](#structFRHAPI__Friends_1ad9cee382027d684e7f71b7baee4b790d)`()` | Gets the value of Friends.
`public inline FORCEINLINE const TArray< FGuid > & `[`GetFriends`](#structFRHAPI__Friends_1adcf5df57f581c6c95574a855f4da69b5)`() const` | Gets the value of Friends.
`public inline FORCEINLINE void `[`SetFriends`](#structFRHAPI__Friends_1a481c9131d9f15f26fdcf362bf883b748)`(const TArray< FGuid > & NewValue)` | Sets the value of Friends.
`public inline FORCEINLINE void `[`SetFriends`](#structFRHAPI__Friends_1a3129ef5e57627ac783e3b2162b6c92ce)`(TArray< FGuid > && NewValue)` | Sets the value of Friends using move semantics.

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

#### `public inline FORCEINLINE TArray< FGuid > & `[`GetFriends`](#structFRHAPI__Friends_1ad9cee382027d684e7f71b7baee4b790d)`()` <a id="structFRHAPI__Friends_1ad9cee382027d684e7f71b7baee4b790d"></a>

Gets the value of Friends.

#### `public inline FORCEINLINE const TArray< FGuid > & `[`GetFriends`](#structFRHAPI__Friends_1adcf5df57f581c6c95574a855f4da69b5)`() const` <a id="structFRHAPI__Friends_1adcf5df57f581c6c95574a855f4da69b5"></a>

Gets the value of Friends.

#### `public inline FORCEINLINE void `[`SetFriends`](#structFRHAPI__Friends_1a481c9131d9f15f26fdcf362bf883b748)`(const TArray< FGuid > & NewValue)` <a id="structFRHAPI__Friends_1a481c9131d9f15f26fdcf362bf883b748"></a>

Sets the value of Friends.

#### `public inline FORCEINLINE void `[`SetFriends`](#structFRHAPI__Friends_1a3129ef5e57627ac783e3b2162b6c92ce)`(TArray< FGuid > && NewValue)` <a id="structFRHAPI__Friends_1a3129ef5e57627ac783e3b2162b6c92ce"></a>

Sets the value of Friends using move semantics.

