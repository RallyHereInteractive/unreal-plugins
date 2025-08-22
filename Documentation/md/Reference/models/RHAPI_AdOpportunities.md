---
title: RHAPI_AdOpportunities
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_AdOpportunities`](#structFRHAPI__AdOpportunities) | 

## struct `FRHAPI_AdOpportunities` <a id="structFRHAPI__AdOpportunities"></a>

```
struct FRHAPI_AdOpportunities
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_AdOpportunity`](RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > `[`Opportunities`](#structFRHAPI__AdOpportunities_1a505bce5e1973467c1d137f8640724ae0) | 
`public virtual bool `[`FromJson`](#structFRHAPI__AdOpportunities_1ab7a8353aa371c24e156716878a8b492e)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AdOpportunities_1a7558889ab9b65c91353990aeae1fc8d5)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TArray< `[`FRHAPI_AdOpportunity`](RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > & `[`GetOpportunities`](#structFRHAPI__AdOpportunities_1a8eb070786f7f8a3f213090401f658f2b)`()` | Gets the value of Opportunities.
`public inline FORCEINLINE const TArray< `[`FRHAPI_AdOpportunity`](RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > & `[`GetOpportunities`](#structFRHAPI__AdOpportunities_1af9baa28202178c7706ad098dfb61ab51)`() const` | Gets the value of Opportunities.
`public inline FORCEINLINE void `[`SetOpportunities`](#structFRHAPI__AdOpportunities_1ab9dcbfd36871b17501f8ef405ef03ad6)`(const TArray< `[`FRHAPI_AdOpportunity`](RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > & NewValue)` | Sets the value of Opportunities.
`public inline FORCEINLINE void `[`SetOpportunities`](#structFRHAPI__AdOpportunities_1a1d00e9519198dbeeae378e28ad982977)`(TArray< `[`FRHAPI_AdOpportunity`](RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > && NewValue)` | Sets the value of Opportunities using move semantics.

### Members

#### `public TArray< `[`FRHAPI_AdOpportunity`](RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > `[`Opportunities`](#structFRHAPI__AdOpportunities_1a505bce5e1973467c1d137f8640724ae0) <a id="structFRHAPI__AdOpportunities_1a505bce5e1973467c1d137f8640724ae0"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__AdOpportunities_1ab7a8353aa371c24e156716878a8b492e)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__AdOpportunities_1ab7a8353aa371c24e156716878a8b492e"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__AdOpportunities_1a7558889ab9b65c91353990aeae1fc8d5)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__AdOpportunities_1a7558889ab9b65c91353990aeae1fc8d5"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TArray< `[`FRHAPI_AdOpportunity`](RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > & `[`GetOpportunities`](#structFRHAPI__AdOpportunities_1a8eb070786f7f8a3f213090401f658f2b)`()` <a id="structFRHAPI__AdOpportunities_1a8eb070786f7f8a3f213090401f658f2b"></a>

Gets the value of Opportunities.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_AdOpportunity`](RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > & `[`GetOpportunities`](#structFRHAPI__AdOpportunities_1af9baa28202178c7706ad098dfb61ab51)`() const` <a id="structFRHAPI__AdOpportunities_1af9baa28202178c7706ad098dfb61ab51"></a>

Gets the value of Opportunities.

#### `public inline FORCEINLINE void `[`SetOpportunities`](#structFRHAPI__AdOpportunities_1ab9dcbfd36871b17501f8ef405ef03ad6)`(const TArray< `[`FRHAPI_AdOpportunity`](RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > & NewValue)` <a id="structFRHAPI__AdOpportunities_1ab9dcbfd36871b17501f8ef405ef03ad6"></a>

Sets the value of Opportunities.

#### `public inline FORCEINLINE void `[`SetOpportunities`](#structFRHAPI__AdOpportunities_1a1d00e9519198dbeeae378e28ad982977)`(TArray< `[`FRHAPI_AdOpportunity`](RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > && NewValue)` <a id="structFRHAPI__AdOpportunities_1a1d00e9519198dbeeae378e28ad982977"></a>

Sets the value of Opportunities using move semantics.

