---
title: RHAPI_AllPlayerDeserterStatuses
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_AllPlayerDeserterStatuses`](#structFRHAPI__AllPlayerDeserterStatuses) | 

## struct `FRHAPI_AllPlayerDeserterStatuses` <a id="structFRHAPI__AllPlayerDeserterStatuses"></a>

```
struct FRHAPI_AllPlayerDeserterStatuses
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_PlayerDeserterStatus`](RHAPI_PlayerDeserterStatus.md#structFRHAPI__PlayerDeserterStatus)` > `[`DeserterStatuses`](#structFRHAPI__AllPlayerDeserterStatuses_1ac3f665589655ff819887c47c2041f1ae) | List of all of a player's deserter statuses.
`public virtual bool `[`FromJson`](#structFRHAPI__AllPlayerDeserterStatuses_1a8ee59963ba0eb60d38c98548232201c7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AllPlayerDeserterStatuses_1af89006e4fd4ef82c0b02505456c656db)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_PlayerDeserterStatus`](RHAPI_PlayerDeserterStatus.md#structFRHAPI__PlayerDeserterStatus)` > & `[`GetDeserterStatuses`](#structFRHAPI__AllPlayerDeserterStatuses_1adc243f1f079b0b8f2a64f43f2b7ab729)`()` | Gets the value of DeserterStatuses.
`public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerDeserterStatus`](RHAPI_PlayerDeserterStatus.md#structFRHAPI__PlayerDeserterStatus)` > & `[`GetDeserterStatuses`](#structFRHAPI__AllPlayerDeserterStatuses_1a7d3e7a38cab10dcb62b8f4485bcc73ef)`() const` | Gets the value of DeserterStatuses.
`public inline FORCEINLINE void `[`SetDeserterStatuses`](#structFRHAPI__AllPlayerDeserterStatuses_1aebd0f0f88b664da467936f074c337d9e)`(const TArray< `[`FRHAPI_PlayerDeserterStatus`](RHAPI_PlayerDeserterStatus.md#structFRHAPI__PlayerDeserterStatus)` > & NewValue)` | Sets the value of DeserterStatuses.
`public inline FORCEINLINE void `[`SetDeserterStatuses`](#structFRHAPI__AllPlayerDeserterStatuses_1ac8590112abfc36a77f42b85726f05b0a)`(TArray< `[`FRHAPI_PlayerDeserterStatus`](RHAPI_PlayerDeserterStatus.md#structFRHAPI__PlayerDeserterStatus)` > && NewValue)` | Sets the value of DeserterStatuses using move semantics.

### Members

#### `public TArray< `[`FRHAPI_PlayerDeserterStatus`](RHAPI_PlayerDeserterStatus.md#structFRHAPI__PlayerDeserterStatus)` > `[`DeserterStatuses`](#structFRHAPI__AllPlayerDeserterStatuses_1ac3f665589655ff819887c47c2041f1ae) <a id="structFRHAPI__AllPlayerDeserterStatuses_1ac3f665589655ff819887c47c2041f1ae"></a>

List of all of a player's deserter statuses.

#### `public virtual bool `[`FromJson`](#structFRHAPI__AllPlayerDeserterStatuses_1a8ee59963ba0eb60d38c98548232201c7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__AllPlayerDeserterStatuses_1a8ee59963ba0eb60d38c98548232201c7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__AllPlayerDeserterStatuses_1af89006e4fd4ef82c0b02505456c656db)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__AllPlayerDeserterStatuses_1af89006e4fd4ef82c0b02505456c656db"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_PlayerDeserterStatus`](RHAPI_PlayerDeserterStatus.md#structFRHAPI__PlayerDeserterStatus)` > & `[`GetDeserterStatuses`](#structFRHAPI__AllPlayerDeserterStatuses_1adc243f1f079b0b8f2a64f43f2b7ab729)`()` <a id="structFRHAPI__AllPlayerDeserterStatuses_1adc243f1f079b0b8f2a64f43f2b7ab729"></a>

Gets the value of DeserterStatuses.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_PlayerDeserterStatus`](RHAPI_PlayerDeserterStatus.md#structFRHAPI__PlayerDeserterStatus)` > & `[`GetDeserterStatuses`](#structFRHAPI__AllPlayerDeserterStatuses_1a7d3e7a38cab10dcb62b8f4485bcc73ef)`() const` <a id="structFRHAPI__AllPlayerDeserterStatuses_1a7d3e7a38cab10dcb62b8f4485bcc73ef"></a>

Gets the value of DeserterStatuses.

#### `public inline FORCEINLINE void `[`SetDeserterStatuses`](#structFRHAPI__AllPlayerDeserterStatuses_1aebd0f0f88b664da467936f074c337d9e)`(const TArray< `[`FRHAPI_PlayerDeserterStatus`](RHAPI_PlayerDeserterStatus.md#structFRHAPI__PlayerDeserterStatus)` > & NewValue)` <a id="structFRHAPI__AllPlayerDeserterStatuses_1aebd0f0f88b664da467936f074c337d9e"></a>

Sets the value of DeserterStatuses.

#### `public inline FORCEINLINE void `[`SetDeserterStatuses`](#structFRHAPI__AllPlayerDeserterStatuses_1ac8590112abfc36a77f42b85726f05b0a)`(TArray< `[`FRHAPI_PlayerDeserterStatus`](RHAPI_PlayerDeserterStatus.md#structFRHAPI__PlayerDeserterStatus)` > && NewValue)` <a id="structFRHAPI__AllPlayerDeserterStatuses_1ac8590112abfc36a77f42b85726f05b0a"></a>

Sets the value of DeserterStatuses using move semantics.

