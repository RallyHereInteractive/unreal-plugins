# RHAPI_AdOpportunities <a id="group__RHAPI__AdOpportunities"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_AdOpportunities`](#structFRHAPI__AdOpportunities) | 

## struct `FRHAPI_AdOpportunities` <a id="structFRHAPI__AdOpportunities"></a>

```
struct FRHAPI_AdOpportunities
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_AdOpportunity`](RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > `[`Opportunities`](#structFRHAPI__AdOpportunities_1a505bce5e1973467c1d137f8640724ae0) | 
`public virtual bool `[`FromJson`](#structFRHAPI__AdOpportunities_1aacb6660cbf98575505612b2f724b9553)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AdOpportunities_1a479bc71e04d3d38ba4dab5c3fa76870c)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_AdOpportunity`](RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > & `[`GetOpportunities`](#structFRHAPI__AdOpportunities_1a9bb1906e1cc793af43de22cc852c2a78)`()` | Gets the value of Opportunities.
`public inline const TArray< `[`FRHAPI_AdOpportunity`](RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > & `[`GetOpportunities`](#structFRHAPI__AdOpportunities_1a9b93de1d671c38962e90f1963dc67272)`() const` | Gets the value of Opportunities.
`public inline void `[`SetOpportunities`](#structFRHAPI__AdOpportunities_1af4812eab7243e147bd720ae6d2eca341)`(TArray< `[`FRHAPI_AdOpportunity`](RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > NewValue)` | Sets the value of Opportunities.

#### Members

#### `public TArray< `[`FRHAPI_AdOpportunity`](RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > `[`Opportunities`](#structFRHAPI__AdOpportunities_1a505bce5e1973467c1d137f8640724ae0) <a id="structFRHAPI__AdOpportunities_1a505bce5e1973467c1d137f8640724ae0"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__AdOpportunities_1aacb6660cbf98575505612b2f724b9553)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__AdOpportunities_1aacb6660cbf98575505612b2f724b9553"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__AdOpportunities_1a479bc71e04d3d38ba4dab5c3fa76870c)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__AdOpportunities_1a479bc71e04d3d38ba4dab5c3fa76870c"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_AdOpportunity`](RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > & `[`GetOpportunities`](#structFRHAPI__AdOpportunities_1a9bb1906e1cc793af43de22cc852c2a78)`()` <a id="structFRHAPI__AdOpportunities_1a9bb1906e1cc793af43de22cc852c2a78"></a>

Gets the value of Opportunities.

#### `public inline const TArray< `[`FRHAPI_AdOpportunity`](RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > & `[`GetOpportunities`](#structFRHAPI__AdOpportunities_1a9b93de1d671c38962e90f1963dc67272)`() const` <a id="structFRHAPI__AdOpportunities_1a9b93de1d671c38962e90f1963dc67272"></a>

Gets the value of Opportunities.

#### `public inline void `[`SetOpportunities`](#structFRHAPI__AdOpportunities_1af4812eab7243e147bd720ae6d2eca341)`(TArray< `[`FRHAPI_AdOpportunity`](RHAPI_AdOpportunity.md#structFRHAPI__AdOpportunity)` > NewValue)` <a id="structFRHAPI__AdOpportunities_1af4812eab7243e147bd720ae6d2eca341"></a>

Sets the value of Opportunities.

