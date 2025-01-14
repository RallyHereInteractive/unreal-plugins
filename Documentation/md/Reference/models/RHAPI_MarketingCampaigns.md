---
title: RHAPI_MarketingCampaigns
---

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

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > `[`Campaigns`](#structFRHAPI__MarketingCampaigns_1a88d6c9da15ac877b420b90278678d505) | List of external Marketing Campaigns.
`public virtual bool `[`FromJson`](#structFRHAPI__MarketingCampaigns_1adf5e03cc408468f73950966d8df368fd)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MarketingCampaigns_1adb86894187b504efa35aa91307161bf9)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > & `[`GetCampaigns`](#structFRHAPI__MarketingCampaigns_1af688faef6a3aebd794b34c5de14d085c)`()` | Gets the value of Campaigns.
`public inline const TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > & `[`GetCampaigns`](#structFRHAPI__MarketingCampaigns_1abc257053c5ef20f878c8725ee1e58a20)`() const` | Gets the value of Campaigns.
`public inline void `[`SetCampaigns`](#structFRHAPI__MarketingCampaigns_1a2d930bf11e195ab35e13e504dbc59e7d)`(const TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > & NewValue)` | Sets the value of Campaigns.
`public inline void `[`SetCampaigns`](#structFRHAPI__MarketingCampaigns_1af5f9a6777795b409c1c1416862a10eb3)`(TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > && NewValue)` | Sets the value of Campaigns using move semantics.

### Members

#### `public TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > `[`Campaigns`](#structFRHAPI__MarketingCampaigns_1a88d6c9da15ac877b420b90278678d505) <a id="structFRHAPI__MarketingCampaigns_1a88d6c9da15ac877b420b90278678d505"></a>

List of external Marketing Campaigns.

#### `public virtual bool `[`FromJson`](#structFRHAPI__MarketingCampaigns_1adf5e03cc408468f73950966d8df368fd)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MarketingCampaigns_1adf5e03cc408468f73950966d8df368fd"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MarketingCampaigns_1adb86894187b504efa35aa91307161bf9)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MarketingCampaigns_1adb86894187b504efa35aa91307161bf9"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > & `[`GetCampaigns`](#structFRHAPI__MarketingCampaigns_1af688faef6a3aebd794b34c5de14d085c)`()` <a id="structFRHAPI__MarketingCampaigns_1af688faef6a3aebd794b34c5de14d085c"></a>

Gets the value of Campaigns.

#### `public inline const TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > & `[`GetCampaigns`](#structFRHAPI__MarketingCampaigns_1abc257053c5ef20f878c8725ee1e58a20)`() const` <a id="structFRHAPI__MarketingCampaigns_1abc257053c5ef20f878c8725ee1e58a20"></a>

Gets the value of Campaigns.

#### `public inline void `[`SetCampaigns`](#structFRHAPI__MarketingCampaigns_1a2d930bf11e195ab35e13e504dbc59e7d)`(const TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > & NewValue)` <a id="structFRHAPI__MarketingCampaigns_1a2d930bf11e195ab35e13e504dbc59e7d"></a>

Sets the value of Campaigns.

#### `public inline void `[`SetCampaigns`](#structFRHAPI__MarketingCampaigns_1af5f9a6777795b409c1c1416862a10eb3)`(TArray< `[`FRHAPI_MarketingCampaign`](RHAPI_MarketingCampaign.md#structFRHAPI__MarketingCampaign)` > && NewValue)` <a id="structFRHAPI__MarketingCampaigns_1af5f9a6777795b409c1c1416862a10eb3"></a>

Sets the value of Campaigns using move semantics.

