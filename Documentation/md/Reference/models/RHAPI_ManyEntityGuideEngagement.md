---
title: RHAPI_ManyEntityGuideEngagement
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_ManyEntityGuideEngagement`](#structFRHAPI__ManyEntityGuideEngagement) | 

## struct `FRHAPI_ManyEntityGuideEngagement` <a id="structFRHAPI__ManyEntityGuideEngagement"></a>

```
struct FRHAPI_ManyEntityGuideEngagement
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > `[`Results_Optional`](#structFRHAPI__ManyEntityGuideEngagement_1affcca41f5528e4b4bd717d7da8004a1e) | 
`public bool `[`Results_IsSet`](#structFRHAPI__ManyEntityGuideEngagement_1a78d7c93e12d3fd8fa4aab1a010c3a424) | true if Results_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__ManyEntityGuideEngagement_1a88073757718d7da435c3995f47ac7c18)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__ManyEntityGuideEngagement_1a45bd51c1487d4eaa252337e5bcf245ff)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & `[`GetResults`](#structFRHAPI__ManyEntityGuideEngagement_1ace573db0c06ea7ba86b1f0de9f8b74aa)`()` | Gets the value of Results_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & `[`GetResults`](#structFRHAPI__ManyEntityGuideEngagement_1a74945d3bb1f88f4a7ff04857b3ba946e)`() const` | Gets the value of Results_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & `[`GetResults`](#structFRHAPI__ManyEntityGuideEngagement_1a016db9e305b301640231cdf8a635495c)`(const TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & DefaultValue) const` | Gets the value of Results_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetResults`](#structFRHAPI__ManyEntityGuideEngagement_1acff4a4800156c5cc9446bb21496b47e6)`(TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & OutValue) const` | Fills OutValue with the value of Results_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > * `[`GetResultsOrNull`](#structFRHAPI__ManyEntityGuideEngagement_1a12fecd8991ca029c065fef7f436bf4ff)`()` | Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > * `[`GetResultsOrNull`](#structFRHAPI__ManyEntityGuideEngagement_1a79fe27c75afe86036f625b64f0f3bf0e)`() const` | Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetResults`](#structFRHAPI__ManyEntityGuideEngagement_1adc049825913c7075db45f8e3588e11e5)`(const TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & NewValue)` | Sets the value of Results_Optional and also sets Results_IsSet to true.
`public inline FORCEINLINE void `[`SetResults`](#structFRHAPI__ManyEntityGuideEngagement_1a489cb3d71167ea3df8e5adf7a340fb84)`(TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > && NewValue)` | Sets the value of Results_Optional and also sets Results_IsSet to true using move semantics.
`public inline void `[`ClearResults`](#structFRHAPI__ManyEntityGuideEngagement_1a91a560e335c905ae7b6d48fe7e62cb53)`()` | Clears the value of Results_Optional and sets Results_IsSet to false.

### Members

#### `public TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > `[`Results_Optional`](#structFRHAPI__ManyEntityGuideEngagement_1affcca41f5528e4b4bd717d7da8004a1e) <a id="structFRHAPI__ManyEntityGuideEngagement_1affcca41f5528e4b4bd717d7da8004a1e"></a>

#### `public bool `[`Results_IsSet`](#structFRHAPI__ManyEntityGuideEngagement_1a78d7c93e12d3fd8fa4aab1a010c3a424) <a id="structFRHAPI__ManyEntityGuideEngagement_1a78d7c93e12d3fd8fa4aab1a010c3a424"></a>

true if Results_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__ManyEntityGuideEngagement_1a88073757718d7da435c3995f47ac7c18)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__ManyEntityGuideEngagement_1a88073757718d7da435c3995f47ac7c18"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__ManyEntityGuideEngagement_1a45bd51c1487d4eaa252337e5bcf245ff)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__ManyEntityGuideEngagement_1a45bd51c1487d4eaa252337e5bcf245ff"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & `[`GetResults`](#structFRHAPI__ManyEntityGuideEngagement_1ace573db0c06ea7ba86b1f0de9f8b74aa)`()` <a id="structFRHAPI__ManyEntityGuideEngagement_1ace573db0c06ea7ba86b1f0de9f8b74aa"></a>

Gets the value of Results_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & `[`GetResults`](#structFRHAPI__ManyEntityGuideEngagement_1a74945d3bb1f88f4a7ff04857b3ba946e)`() const` <a id="structFRHAPI__ManyEntityGuideEngagement_1a74945d3bb1f88f4a7ff04857b3ba946e"></a>

Gets the value of Results_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & `[`GetResults`](#structFRHAPI__ManyEntityGuideEngagement_1a016db9e305b301640231cdf8a635495c)`(const TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & DefaultValue) const` <a id="structFRHAPI__ManyEntityGuideEngagement_1a016db9e305b301640231cdf8a635495c"></a>

Gets the value of Results_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetResults`](#structFRHAPI__ManyEntityGuideEngagement_1acff4a4800156c5cc9446bb21496b47e6)`(TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & OutValue) const` <a id="structFRHAPI__ManyEntityGuideEngagement_1acff4a4800156c5cc9446bb21496b47e6"></a>

Fills OutValue with the value of Results_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > * `[`GetResultsOrNull`](#structFRHAPI__ManyEntityGuideEngagement_1a12fecd8991ca029c065fef7f436bf4ff)`()` <a id="structFRHAPI__ManyEntityGuideEngagement_1a12fecd8991ca029c065fef7f436bf4ff"></a>

Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > * `[`GetResultsOrNull`](#structFRHAPI__ManyEntityGuideEngagement_1a79fe27c75afe86036f625b64f0f3bf0e)`() const` <a id="structFRHAPI__ManyEntityGuideEngagement_1a79fe27c75afe86036f625b64f0f3bf0e"></a>

Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetResults`](#structFRHAPI__ManyEntityGuideEngagement_1adc049825913c7075db45f8e3588e11e5)`(const TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & NewValue)` <a id="structFRHAPI__ManyEntityGuideEngagement_1adc049825913c7075db45f8e3588e11e5"></a>

Sets the value of Results_Optional and also sets Results_IsSet to true.

#### `public inline FORCEINLINE void `[`SetResults`](#structFRHAPI__ManyEntityGuideEngagement_1a489cb3d71167ea3df8e5adf7a340fb84)`(TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > && NewValue)` <a id="structFRHAPI__ManyEntityGuideEngagement_1a489cb3d71167ea3df8e5adf7a340fb84"></a>

Sets the value of Results_Optional and also sets Results_IsSet to true using move semantics.

#### `public inline void `[`ClearResults`](#structFRHAPI__ManyEntityGuideEngagement_1a91a560e335c905ae7b6d48fe7e62cb53)`()` <a id="structFRHAPI__ManyEntityGuideEngagement_1a91a560e335c905ae7b6d48fe7e62cb53"></a>

Clears the value of Results_Optional and sets Results_IsSet to false.

