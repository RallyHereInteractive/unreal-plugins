---
title: RHAPI_Platforms
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_Platforms`](#structFRHAPI__Platforms) | 

## struct `FRHAPI_Platforms` <a id="structFRHAPI__Platforms"></a>

```
struct FRHAPI_Platforms
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< FString > `[`Platforms`](#structFRHAPI__Platforms_1ae4374248bbbde6844cb94ef9f12a4e93) | 
`public virtual bool `[`FromJson`](#structFRHAPI__Platforms_1abd3881f21a4476efadb31f7dadd23d8c)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Platforms_1a6ab3e53e43034617e12a4545290667a9)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< FString > & `[`GetPlatforms`](#structFRHAPI__Platforms_1a8e3f4efa850afb0d3e4e30c8c0545b8d)`()` | Gets the value of Platforms.
`public inline FORCEINLINE const TArray< FString > & `[`GetPlatforms`](#structFRHAPI__Platforms_1a1cbc57bee0f021db9530517bda065c79)`() const` | Gets the value of Platforms.
`public inline FORCEINLINE void `[`SetPlatforms`](#structFRHAPI__Platforms_1a96833d797c222f655ac5e65a71756306)`(const TArray< FString > & NewValue)` | Sets the value of Platforms.
`public inline FORCEINLINE void `[`SetPlatforms`](#structFRHAPI__Platforms_1a41c044a336b34a1f22b646b2bac4be6f)`(TArray< FString > && NewValue)` | Sets the value of Platforms using move semantics.

### Members

#### `public TArray< FString > `[`Platforms`](#structFRHAPI__Platforms_1ae4374248bbbde6844cb94ef9f12a4e93) <a id="structFRHAPI__Platforms_1ae4374248bbbde6844cb94ef9f12a4e93"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__Platforms_1abd3881f21a4476efadb31f7dadd23d8c)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Platforms_1abd3881f21a4476efadb31f7dadd23d8c"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Platforms_1a6ab3e53e43034617e12a4545290667a9)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__Platforms_1a6ab3e53e43034617e12a4545290667a9"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< FString > & `[`GetPlatforms`](#structFRHAPI__Platforms_1a8e3f4efa850afb0d3e4e30c8c0545b8d)`()` <a id="structFRHAPI__Platforms_1a8e3f4efa850afb0d3e4e30c8c0545b8d"></a>

Gets the value of Platforms.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetPlatforms`](#structFRHAPI__Platforms_1a1cbc57bee0f021db9530517bda065c79)`() const` <a id="structFRHAPI__Platforms_1a1cbc57bee0f021db9530517bda065c79"></a>

Gets the value of Platforms.

#### `public inline FORCEINLINE void `[`SetPlatforms`](#structFRHAPI__Platforms_1a96833d797c222f655ac5e65a71756306)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__Platforms_1a96833d797c222f655ac5e65a71756306"></a>

Sets the value of Platforms.

#### `public inline FORCEINLINE void `[`SetPlatforms`](#structFRHAPI__Platforms_1a41c044a336b34a1f22b646b2bac4be6f)`(TArray< FString > && NewValue)` <a id="structFRHAPI__Platforms_1a41c044a336b34a1f22b646b2bac4be6f"></a>

Sets the value of Platforms using move semantics.

