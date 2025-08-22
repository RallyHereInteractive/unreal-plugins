---
title: RHAPI_PlayerSwapRequest
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerSwapRequest`](#structFRHAPI__PlayerSwapRequest) | Request to swap two players on different teams.

## struct `FRHAPI_PlayerSwapRequest` <a id="structFRHAPI__PlayerSwapRequest"></a>

```
struct FRHAPI_PlayerSwapRequest
  : public FRHAPI_Model
```

Request to swap two players on different teams.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< FGuid > `[`Players`](#structFRHAPI__PlayerSwapRequest_1add62788ef61cb09d4ad65d67842552b2) | Two player UUIDs for players who will swap teams.
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerSwapRequest_1a5fa46cabd1d901dc52568d6ccf284ca2)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerSwapRequest_1acdc7f9be77b75bf5f25d4ef96ca89f2a)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__PlayerSwapRequest_1abbfa0b3d7f8ef4e72ae0eb0fa0aacc9c)`()` | Gets the value of Players.
`public inline FORCEINLINE const TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__PlayerSwapRequest_1a33985589b7b8710ca83cac882c3678f1)`() const` | Gets the value of Players.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__PlayerSwapRequest_1aed511fbd75f685e2233cccef9c26f5c5)`(const TArray< FGuid > & NewValue)` | Sets the value of Players.
`public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__PlayerSwapRequest_1aeec67353a95c617186d68487adf30917)`(TArray< FGuid > && NewValue)` | Sets the value of Players using move semantics.

### Members

#### `public TArray< FGuid > `[`Players`](#structFRHAPI__PlayerSwapRequest_1add62788ef61cb09d4ad65d67842552b2) <a id="structFRHAPI__PlayerSwapRequest_1add62788ef61cb09d4ad65d67842552b2"></a>

Two player UUIDs for players who will swap teams.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerSwapRequest_1a5fa46cabd1d901dc52568d6ccf284ca2)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerSwapRequest_1a5fa46cabd1d901dc52568d6ccf284ca2"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerSwapRequest_1acdc7f9be77b75bf5f25d4ef96ca89f2a)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerSwapRequest_1acdc7f9be77b75bf5f25d4ef96ca89f2a"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__PlayerSwapRequest_1abbfa0b3d7f8ef4e72ae0eb0fa0aacc9c)`()` <a id="structFRHAPI__PlayerSwapRequest_1abbfa0b3d7f8ef4e72ae0eb0fa0aacc9c"></a>

Gets the value of Players.

#### `public inline FORCEINLINE const TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__PlayerSwapRequest_1a33985589b7b8710ca83cac882c3678f1)`() const` <a id="structFRHAPI__PlayerSwapRequest_1a33985589b7b8710ca83cac882c3678f1"></a>

Gets the value of Players.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__PlayerSwapRequest_1aed511fbd75f685e2233cccef9c26f5c5)`(const TArray< FGuid > & NewValue)` <a id="structFRHAPI__PlayerSwapRequest_1aed511fbd75f685e2233cccef9c26f5c5"></a>

Sets the value of Players.

#### `public inline FORCEINLINE void `[`SetPlayers`](#structFRHAPI__PlayerSwapRequest_1aeec67353a95c617186d68487adf30917)`(TArray< FGuid > && NewValue)` <a id="structFRHAPI__PlayerSwapRequest_1aeec67353a95c617186d68487adf30917"></a>

Sets the value of Players using move semantics.

