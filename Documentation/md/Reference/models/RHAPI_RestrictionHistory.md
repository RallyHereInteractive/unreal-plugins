---
title: RHAPI_RestrictionHistory
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RestrictionHistory`](#structFRHAPI__RestrictionHistory) | List of restriction events that have been applied to a user.

## struct `FRHAPI_RestrictionHistory` <a id="structFRHAPI__RestrictionHistory"></a>

```
struct FRHAPI_RestrictionHistory
  : public FRHAPI_Model
```

List of restriction events that have been applied to a user.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_RestrictionEvent`](RHAPI_RestrictionEvent.md#structFRHAPI__RestrictionEvent)` > `[`Entries`](#structFRHAPI__RestrictionHistory_1a339d04ae15fc545bc4cd2c28dbc2e5cb) | The restriction history entries.
`public FString `[`ContinuationToken_Optional`](#structFRHAPI__RestrictionHistory_1a3c6d71c4d0a233a7daa1cde5ea80933f) | Token to retrieve the next page of results.
`public bool `[`ContinuationToken_IsSet`](#structFRHAPI__RestrictionHistory_1acaee17e62bdffe209842d289a21455d4) | true if ContinuationToken_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__RestrictionHistory_1a9663b6e9edc806d24441cc94710ad1a5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RestrictionHistory_1a106741c6fa2c680ce45490a108925c85)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_RestrictionEvent`](RHAPI_RestrictionEvent.md#structFRHAPI__RestrictionEvent)` > & `[`GetEntries`](#structFRHAPI__RestrictionHistory_1a117f265c95d1571ac7c41ca6f6c661fd)`()` | Gets the value of Entries.
`public inline FORCEINLINE const TArray< `[`FRHAPI_RestrictionEvent`](RHAPI_RestrictionEvent.md#structFRHAPI__RestrictionEvent)` > & `[`GetEntries`](#structFRHAPI__RestrictionHistory_1aa002d9b259d82ae480903d31b983ecc3)`() const` | Gets the value of Entries.
`public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__RestrictionHistory_1acf6b358f33b75fb1dca7feee540533a4)`(const TArray< `[`FRHAPI_RestrictionEvent`](RHAPI_RestrictionEvent.md#structFRHAPI__RestrictionEvent)` > & NewValue)` | Sets the value of Entries.
`public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__RestrictionHistory_1a9a4dfaa61223d074e8f999800a8f6055)`(TArray< `[`FRHAPI_RestrictionEvent`](RHAPI_RestrictionEvent.md#structFRHAPI__RestrictionEvent)` > && NewValue)` | Sets the value of Entries using move semantics.
`public inline FORCEINLINE FString & `[`GetContinuationToken`](#structFRHAPI__RestrictionHistory_1acf3972e64fe30b0b285be13cbb0480c1)`()` | Gets the value of ContinuationToken_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetContinuationToken`](#structFRHAPI__RestrictionHistory_1acd048d17382c729e02860e6553010545)`() const` | Gets the value of ContinuationToken_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetContinuationToken`](#structFRHAPI__RestrictionHistory_1a3e03fda616c9ccf4d5b7915a09eeaebc)`(const FString & DefaultValue) const` | Gets the value of ContinuationToken_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetContinuationToken`](#structFRHAPI__RestrictionHistory_1afa1e59691413e1aa5cdb85b74d0bc449)`(FString & OutValue) const` | Fills OutValue with the value of ContinuationToken_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__RestrictionHistory_1ad761a2cfb3ef0a825abd2009f7aae99b)`()` | Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__RestrictionHistory_1a3a19c05731713ec40e067809e828b4bf)`() const` | Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetContinuationToken`](#structFRHAPI__RestrictionHistory_1a1178e54a9fc0ffd91af0475876c623a9)`(const FString & NewValue)` | Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true.
`public inline FORCEINLINE void `[`SetContinuationToken`](#structFRHAPI__RestrictionHistory_1a8134d0b7c23ad633f2ebf1863b97a5ae)`(FString && NewValue)` | Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true using move semantics.
`public inline void `[`ClearContinuationToken`](#structFRHAPI__RestrictionHistory_1a6abb9e6975963e0fdfd90a370c442c5e)`()` | Clears the value of ContinuationToken_Optional and sets ContinuationToken_IsSet to false.

### Members

#### `public TArray< `[`FRHAPI_RestrictionEvent`](RHAPI_RestrictionEvent.md#structFRHAPI__RestrictionEvent)` > `[`Entries`](#structFRHAPI__RestrictionHistory_1a339d04ae15fc545bc4cd2c28dbc2e5cb) <a id="structFRHAPI__RestrictionHistory_1a339d04ae15fc545bc4cd2c28dbc2e5cb"></a>

The restriction history entries.

#### `public FString `[`ContinuationToken_Optional`](#structFRHAPI__RestrictionHistory_1a3c6d71c4d0a233a7daa1cde5ea80933f) <a id="structFRHAPI__RestrictionHistory_1a3c6d71c4d0a233a7daa1cde5ea80933f"></a>

Token to retrieve the next page of results.

#### `public bool `[`ContinuationToken_IsSet`](#structFRHAPI__RestrictionHistory_1acaee17e62bdffe209842d289a21455d4) <a id="structFRHAPI__RestrictionHistory_1acaee17e62bdffe209842d289a21455d4"></a>

true if ContinuationToken_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__RestrictionHistory_1a9663b6e9edc806d24441cc94710ad1a5)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RestrictionHistory_1a9663b6e9edc806d24441cc94710ad1a5"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__RestrictionHistory_1a106741c6fa2c680ce45490a108925c85)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__RestrictionHistory_1a106741c6fa2c680ce45490a108925c85"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_RestrictionEvent`](RHAPI_RestrictionEvent.md#structFRHAPI__RestrictionEvent)` > & `[`GetEntries`](#structFRHAPI__RestrictionHistory_1a117f265c95d1571ac7c41ca6f6c661fd)`()` <a id="structFRHAPI__RestrictionHistory_1a117f265c95d1571ac7c41ca6f6c661fd"></a>

Gets the value of Entries.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_RestrictionEvent`](RHAPI_RestrictionEvent.md#structFRHAPI__RestrictionEvent)` > & `[`GetEntries`](#structFRHAPI__RestrictionHistory_1aa002d9b259d82ae480903d31b983ecc3)`() const` <a id="structFRHAPI__RestrictionHistory_1aa002d9b259d82ae480903d31b983ecc3"></a>

Gets the value of Entries.

#### `public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__RestrictionHistory_1acf6b358f33b75fb1dca7feee540533a4)`(const TArray< `[`FRHAPI_RestrictionEvent`](RHAPI_RestrictionEvent.md#structFRHAPI__RestrictionEvent)` > & NewValue)` <a id="structFRHAPI__RestrictionHistory_1acf6b358f33b75fb1dca7feee540533a4"></a>

Sets the value of Entries.

#### `public inline FORCEINLINE void `[`SetEntries`](#structFRHAPI__RestrictionHistory_1a9a4dfaa61223d074e8f999800a8f6055)`(TArray< `[`FRHAPI_RestrictionEvent`](RHAPI_RestrictionEvent.md#structFRHAPI__RestrictionEvent)` > && NewValue)` <a id="structFRHAPI__RestrictionHistory_1a9a4dfaa61223d074e8f999800a8f6055"></a>

Sets the value of Entries using move semantics.

#### `public inline FORCEINLINE FString & `[`GetContinuationToken`](#structFRHAPI__RestrictionHistory_1acf3972e64fe30b0b285be13cbb0480c1)`()` <a id="structFRHAPI__RestrictionHistory_1acf3972e64fe30b0b285be13cbb0480c1"></a>

Gets the value of ContinuationToken_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetContinuationToken`](#structFRHAPI__RestrictionHistory_1acd048d17382c729e02860e6553010545)`() const` <a id="structFRHAPI__RestrictionHistory_1acd048d17382c729e02860e6553010545"></a>

Gets the value of ContinuationToken_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetContinuationToken`](#structFRHAPI__RestrictionHistory_1a3e03fda616c9ccf4d5b7915a09eeaebc)`(const FString & DefaultValue) const` <a id="structFRHAPI__RestrictionHistory_1a3e03fda616c9ccf4d5b7915a09eeaebc"></a>

Gets the value of ContinuationToken_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetContinuationToken`](#structFRHAPI__RestrictionHistory_1afa1e59691413e1aa5cdb85b74d0bc449)`(FString & OutValue) const` <a id="structFRHAPI__RestrictionHistory_1afa1e59691413e1aa5cdb85b74d0bc449"></a>

Fills OutValue with the value of ContinuationToken_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__RestrictionHistory_1ad761a2cfb3ef0a825abd2009f7aae99b)`()` <a id="structFRHAPI__RestrictionHistory_1ad761a2cfb3ef0a825abd2009f7aae99b"></a>

Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetContinuationTokenOrNull`](#structFRHAPI__RestrictionHistory_1a3a19c05731713ec40e067809e828b4bf)`() const` <a id="structFRHAPI__RestrictionHistory_1a3a19c05731713ec40e067809e828b4bf"></a>

Returns a pointer to ContinuationToken_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetContinuationToken`](#structFRHAPI__RestrictionHistory_1a1178e54a9fc0ffd91af0475876c623a9)`(const FString & NewValue)` <a id="structFRHAPI__RestrictionHistory_1a1178e54a9fc0ffd91af0475876c623a9"></a>

Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true.

#### `public inline FORCEINLINE void `[`SetContinuationToken`](#structFRHAPI__RestrictionHistory_1a8134d0b7c23ad633f2ebf1863b97a5ae)`(FString && NewValue)` <a id="structFRHAPI__RestrictionHistory_1a8134d0b7c23ad633f2ebf1863b97a5ae"></a>

Sets the value of ContinuationToken_Optional and also sets ContinuationToken_IsSet to true using move semantics.

#### `public inline void `[`ClearContinuationToken`](#structFRHAPI__RestrictionHistory_1a6abb9e6975963e0fdfd90a370c442c5e)`()` <a id="structFRHAPI__RestrictionHistory_1a6abb9e6975963e0fdfd90a370c442c5e"></a>

Clears the value of ContinuationToken_Optional and sets ContinuationToken_IsSet to false.

