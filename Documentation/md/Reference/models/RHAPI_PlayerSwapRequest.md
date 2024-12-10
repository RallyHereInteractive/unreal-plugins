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
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerSwapRequest_1a439149699031ee738da038fb1df10caa)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__PlayerSwapRequest_1aaf7f54e6dd305e09edf69265cbc6d066)`()` | Gets the value of Players.
`public inline const TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__PlayerSwapRequest_1add57444c142e6a8b4527d3cadcf46bbe)`() const` | Gets the value of Players.
`public inline void `[`SetPlayers`](#structFRHAPI__PlayerSwapRequest_1a9d8ce67c08955bbc97c026630ec1abb9)`(const TArray< FGuid > & NewValue)` | Sets the value of Players.
`public inline void `[`SetPlayers`](#structFRHAPI__PlayerSwapRequest_1a98524c435b058c19c229db55dcd4b5e5)`(TArray< FGuid > && NewValue)` | Sets the value of Players using move semantics.

### Members

#### `public TArray< FGuid > `[`Players`](#structFRHAPI__PlayerSwapRequest_1add62788ef61cb09d4ad65d67842552b2) <a id="structFRHAPI__PlayerSwapRequest_1add62788ef61cb09d4ad65d67842552b2"></a>

Two player UUIDs for players who will swap teams.

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerSwapRequest_1a5fa46cabd1d901dc52568d6ccf284ca2)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerSwapRequest_1a5fa46cabd1d901dc52568d6ccf284ca2"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerSwapRequest_1a439149699031ee738da038fb1df10caa)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerSwapRequest_1a439149699031ee738da038fb1df10caa"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__PlayerSwapRequest_1aaf7f54e6dd305e09edf69265cbc6d066)`()` <a id="structFRHAPI__PlayerSwapRequest_1aaf7f54e6dd305e09edf69265cbc6d066"></a>

Gets the value of Players.

#### `public inline const TArray< FGuid > & `[`GetPlayers`](#structFRHAPI__PlayerSwapRequest_1add57444c142e6a8b4527d3cadcf46bbe)`() const` <a id="structFRHAPI__PlayerSwapRequest_1add57444c142e6a8b4527d3cadcf46bbe"></a>

Gets the value of Players.

#### `public inline void `[`SetPlayers`](#structFRHAPI__PlayerSwapRequest_1a9d8ce67c08955bbc97c026630ec1abb9)`(const TArray< FGuid > & NewValue)` <a id="structFRHAPI__PlayerSwapRequest_1a9d8ce67c08955bbc97c026630ec1abb9"></a>

Sets the value of Players.

#### `public inline void `[`SetPlayers`](#structFRHAPI__PlayerSwapRequest_1a98524c435b058c19c229db55dcd4b5e5)`(TArray< FGuid > && NewValue)` <a id="structFRHAPI__PlayerSwapRequest_1a98524c435b058c19c229db55dcd4b5e5"></a>

Sets the value of Players using move semantics.

