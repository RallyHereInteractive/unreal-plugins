# RHAPI_MarketingCampaigns <a id="group__RHAPI__MarketingCampaigns"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MarketingCampaigns`](#structFRHAPI__MarketingCampaigns) | List of external Marketing Campaigns.

## struct `FRHAPI_MarketingCampaigns` <a id="structFRHAPI__MarketingCampaigns"></a>

```
struct FRHAPI_MarketingCampaigns
  : public FRHAPI_Model
```

List of external Marketing Campaigns.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > `[`Campaigns`](#structFRHAPI__MarketingCampaigns_1a88d6c9da15ac877b420b90278678d505) | List of external Marketing Campaigns.
`public virtual bool `[`FromJson`](#structFRHAPI__MarketingCampaigns_1a8f3ae77637be44c02ad9eb5bef1dda31)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MarketingCampaigns_1a7f41cb97dd5ba99cad6ffb5a53ab00b0)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > & `[`GetCampaigns`](#structFRHAPI__MarketingCampaigns_1aa95cc3a073517448aa5d6561e3e702d0)`()` | Gets the value of Campaigns.
`public inline const TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > & `[`GetCampaigns`](#structFRHAPI__MarketingCampaigns_1a6b519767e3a90b23702d0ee5a31f2199)`() const` | Gets the value of Campaigns.
`public inline void `[`SetCampaigns`](#structFRHAPI__MarketingCampaigns_1ae487365fbea2f2a3e37f5c639c16d6c1)`(TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > NewValue)` | Sets the value of Campaigns.

#### Members

#### `public TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > `[`Campaigns`](#structFRHAPI__MarketingCampaigns_1a88d6c9da15ac877b420b90278678d505) <a id="structFRHAPI__MarketingCampaigns_1a88d6c9da15ac877b420b90278678d505"></a>

List of external Marketing Campaigns.

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__MarketingCampaigns_1a8f3ae77637be44c02ad9eb5bef1dda31)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MarketingCampaigns_1a8f3ae77637be44c02ad9eb5bef1dda31"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__MarketingCampaigns_1a7f41cb97dd5ba99cad6ffb5a53ab00b0)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__MarketingCampaigns_1a7f41cb97dd5ba99cad6ffb5a53ab00b0"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > & `[`GetCampaigns`](#structFRHAPI__MarketingCampaigns_1aa95cc3a073517448aa5d6561e3e702d0)`()` <a id="structFRHAPI__MarketingCampaigns_1aa95cc3a073517448aa5d6561e3e702d0"></a>

Gets the value of Campaigns.

<br>
#### `public inline const TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > & `[`GetCampaigns`](#structFRHAPI__MarketingCampaigns_1a6b519767e3a90b23702d0ee5a31f2199)`() const` <a id="structFRHAPI__MarketingCampaigns_1a6b519767e3a90b23702d0ee5a31f2199"></a>

Gets the value of Campaigns.

<br>
#### `public inline void `[`SetCampaigns`](#structFRHAPI__MarketingCampaigns_1ae487365fbea2f2a3e37f5c639c16d6c1)`(TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > NewValue)` <a id="structFRHAPI__MarketingCampaigns_1ae487365fbea2f2a3e37f5c639c16d6c1"></a>

Sets the value of Campaigns.

<br>
