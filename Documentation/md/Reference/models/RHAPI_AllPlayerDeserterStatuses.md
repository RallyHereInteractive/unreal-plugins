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
`public inline TArray< `[`FRHAPI_PlayerDeserterStatus`](RHAPI_PlayerDeserterStatus.md#structFRHAPI__PlayerDeserterStatus)` > & `[`GetDeserterStatuses`](#structFRHAPI__AllPlayerDeserterStatuses_1af31db478c052dc650884406484a76414)`()` | Gets the value of DeserterStatuses.
`public inline const TArray< `[`FRHAPI_PlayerDeserterStatus`](RHAPI_PlayerDeserterStatus.md#structFRHAPI__PlayerDeserterStatus)` > & `[`GetDeserterStatuses`](#structFRHAPI__AllPlayerDeserterStatuses_1a70044e6a21e3c2fc61e2eec050bb2d04)`() const` | Gets the value of DeserterStatuses.
`public inline void `[`SetDeserterStatuses`](#structFRHAPI__AllPlayerDeserterStatuses_1a90c6ed4aac6d96fe7526c05aab32ca27)`(const TArray< `[`FRHAPI_PlayerDeserterStatus`](RHAPI_PlayerDeserterStatus.md#structFRHAPI__PlayerDeserterStatus)` > & NewValue)` | Sets the value of DeserterStatuses.
`public inline void `[`SetDeserterStatuses`](#structFRHAPI__AllPlayerDeserterStatuses_1a3f0a5d8d95e67ad0c5fb04bae45aa2d9)`(TArray< `[`FRHAPI_PlayerDeserterStatus`](RHAPI_PlayerDeserterStatus.md#structFRHAPI__PlayerDeserterStatus)` > && NewValue)` | Sets the value of DeserterStatuses using move semantics.

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

#### `public inline TArray< `[`FRHAPI_PlayerDeserterStatus`](RHAPI_PlayerDeserterStatus.md#structFRHAPI__PlayerDeserterStatus)` > & `[`GetDeserterStatuses`](#structFRHAPI__AllPlayerDeserterStatuses_1af31db478c052dc650884406484a76414)`()` <a id="structFRHAPI__AllPlayerDeserterStatuses_1af31db478c052dc650884406484a76414"></a>

Gets the value of DeserterStatuses.

#### `public inline const TArray< `[`FRHAPI_PlayerDeserterStatus`](RHAPI_PlayerDeserterStatus.md#structFRHAPI__PlayerDeserterStatus)` > & `[`GetDeserterStatuses`](#structFRHAPI__AllPlayerDeserterStatuses_1a70044e6a21e3c2fc61e2eec050bb2d04)`() const` <a id="structFRHAPI__AllPlayerDeserterStatuses_1a70044e6a21e3c2fc61e2eec050bb2d04"></a>

Gets the value of DeserterStatuses.

#### `public inline void `[`SetDeserterStatuses`](#structFRHAPI__AllPlayerDeserterStatuses_1a90c6ed4aac6d96fe7526c05aab32ca27)`(const TArray< `[`FRHAPI_PlayerDeserterStatus`](RHAPI_PlayerDeserterStatus.md#structFRHAPI__PlayerDeserterStatus)` > & NewValue)` <a id="structFRHAPI__AllPlayerDeserterStatuses_1a90c6ed4aac6d96fe7526c05aab32ca27"></a>

Sets the value of DeserterStatuses.

#### `public inline void `[`SetDeserterStatuses`](#structFRHAPI__AllPlayerDeserterStatuses_1a3f0a5d8d95e67ad0c5fb04bae45aa2d9)`(TArray< `[`FRHAPI_PlayerDeserterStatus`](RHAPI_PlayerDeserterStatus.md#structFRHAPI__PlayerDeserterStatus)` > && NewValue)` <a id="structFRHAPI__AllPlayerDeserterStatuses_1a3f0a5d8d95e67ad0c5fb04bae45aa2d9"></a>

Sets the value of DeserterStatuses using move semantics.

