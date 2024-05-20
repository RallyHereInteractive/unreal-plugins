# group `RHAPI_Platforms` <a id="group__RHAPI__Platforms"></a>

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
`public virtual bool `[`FromJson`](#structFRHAPI__Platforms_1a7cca703ebb0fbae2609caaeb9a2af971)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__Platforms_1afced0f9ef246bfaeba1bc7a31f322267)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< FString > & `[`GetPlatforms`](#structFRHAPI__Platforms_1a88e4d99e7376ee7ef9873104a9041192)`()` | Gets the value of Platforms.
`public inline const TArray< FString > & `[`GetPlatforms`](#structFRHAPI__Platforms_1ab3d5d3d8ddcb4a1d3486c0706fffaf4a)`() const` | Gets the value of Platforms.
`public inline void `[`SetPlatforms`](#structFRHAPI__Platforms_1a1451cc76b8f1d221dd8098449787c504)`(TArray< FString > NewValue)` | Sets the value of Platforms.

### Members

#### `public TArray< FString > `[`Platforms`](#structFRHAPI__Platforms_1ae4374248bbbde6844cb94ef9f12a4e93) <a id="structFRHAPI__Platforms_1ae4374248bbbde6844cb94ef9f12a4e93"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__Platforms_1a7cca703ebb0fbae2609caaeb9a2af971)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__Platforms_1a7cca703ebb0fbae2609caaeb9a2af971"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__Platforms_1afced0f9ef246bfaeba1bc7a31f322267)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__Platforms_1afced0f9ef246bfaeba1bc7a31f322267"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< FString > & `[`GetPlatforms`](#structFRHAPI__Platforms_1a88e4d99e7376ee7ef9873104a9041192)`()` <a id="structFRHAPI__Platforms_1a88e4d99e7376ee7ef9873104a9041192"></a>

Gets the value of Platforms.

#### `public inline const TArray< FString > & `[`GetPlatforms`](#structFRHAPI__Platforms_1ab3d5d3d8ddcb4a1d3486c0706fffaf4a)`() const` <a id="structFRHAPI__Platforms_1ab3d5d3d8ddcb4a1d3486c0706fffaf4a"></a>

Gets the value of Platforms.

#### `public inline void `[`SetPlatforms`](#structFRHAPI__Platforms_1a1451cc76b8f1d221dd8098449787c504)`(TArray< FString > NewValue)` <a id="structFRHAPI__Platforms_1a1451cc76b8f1d221dd8098449787c504"></a>

Sets the value of Platforms.

