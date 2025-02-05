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
`public inline TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & `[`GetResults`](#structFRHAPI__ManyEntityGuideEngagement_1acd930ce854658e61eebe9a78f5cb19eb)`()` | Gets the value of Results_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & `[`GetResults`](#structFRHAPI__ManyEntityGuideEngagement_1a0b4be03c6a62afd15467720c8f7e1bbc)`() const` | Gets the value of Results_Optional, regardless of it having been set.
`public inline const TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & `[`GetResults`](#structFRHAPI__ManyEntityGuideEngagement_1aa9e1d6596cb795598b3132608191d2ee)`(const TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & DefaultValue) const` | Gets the value of Results_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetResults`](#structFRHAPI__ManyEntityGuideEngagement_1aac4d917cd4dd7b8058382511d98e1523)`(TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & OutValue) const` | Fills OutValue with the value of Results_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > * `[`GetResultsOrNull`](#structFRHAPI__ManyEntityGuideEngagement_1a5f26f99649c2cfced6f935f09da38f5e)`()` | Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > * `[`GetResultsOrNull`](#structFRHAPI__ManyEntityGuideEngagement_1af792a9dcc4f523c3e8c76d085e767837)`() const` | Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetResults`](#structFRHAPI__ManyEntityGuideEngagement_1a468d683579147b02211356293ce5ceb1)`(const TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & NewValue)` | Sets the value of Results_Optional and also sets Results_IsSet to true.
`public inline void `[`SetResults`](#structFRHAPI__ManyEntityGuideEngagement_1ad036bbf974165600e995c4ccfda12e63)`(TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > && NewValue)` | Sets the value of Results_Optional and also sets Results_IsSet to true using move semantics.
`public inline void `[`ClearResults`](#structFRHAPI__ManyEntityGuideEngagement_1a91a560e335c905ae7b6d48fe7e62cb53)`()` | Clears the value of Results_Optional and sets Results_IsSet to false.
`public inline bool `[`IsResultsSet`](#structFRHAPI__ManyEntityGuideEngagement_1a720cb0704916268997d296a07e56bb02)`() const` | Checks whether Results_Optional has been set.

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

#### `public inline TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & `[`GetResults`](#structFRHAPI__ManyEntityGuideEngagement_1acd930ce854658e61eebe9a78f5cb19eb)`()` <a id="structFRHAPI__ManyEntityGuideEngagement_1acd930ce854658e61eebe9a78f5cb19eb"></a>

Gets the value of Results_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & `[`GetResults`](#structFRHAPI__ManyEntityGuideEngagement_1a0b4be03c6a62afd15467720c8f7e1bbc)`() const` <a id="structFRHAPI__ManyEntityGuideEngagement_1a0b4be03c6a62afd15467720c8f7e1bbc"></a>

Gets the value of Results_Optional, regardless of it having been set.

#### `public inline const TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & `[`GetResults`](#structFRHAPI__ManyEntityGuideEngagement_1aa9e1d6596cb795598b3132608191d2ee)`(const TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & DefaultValue) const` <a id="structFRHAPI__ManyEntityGuideEngagement_1aa9e1d6596cb795598b3132608191d2ee"></a>

Gets the value of Results_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetResults`](#structFRHAPI__ManyEntityGuideEngagement_1aac4d917cd4dd7b8058382511d98e1523)`(TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & OutValue) const` <a id="structFRHAPI__ManyEntityGuideEngagement_1aac4d917cd4dd7b8058382511d98e1523"></a>

Fills OutValue with the value of Results_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > * `[`GetResultsOrNull`](#structFRHAPI__ManyEntityGuideEngagement_1a5f26f99649c2cfced6f935f09da38f5e)`()` <a id="structFRHAPI__ManyEntityGuideEngagement_1a5f26f99649c2cfced6f935f09da38f5e"></a>

Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > * `[`GetResultsOrNull`](#structFRHAPI__ManyEntityGuideEngagement_1af792a9dcc4f523c3e8c76d085e767837)`() const` <a id="structFRHAPI__ManyEntityGuideEngagement_1af792a9dcc4f523c3e8c76d085e767837"></a>

Returns a pointer to Results_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetResults`](#structFRHAPI__ManyEntityGuideEngagement_1a468d683579147b02211356293ce5ceb1)`(const TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > & NewValue)` <a id="structFRHAPI__ManyEntityGuideEngagement_1a468d683579147b02211356293ce5ceb1"></a>

Sets the value of Results_Optional and also sets Results_IsSet to true.

#### `public inline void `[`SetResults`](#structFRHAPI__ManyEntityGuideEngagement_1ad036bbf974165600e995c4ccfda12e63)`(TArray< `[`FRHAPI_EntityGuideEngagement`](RHAPI_EntityGuideEngagement.md#structFRHAPI__EntityGuideEngagement)` > && NewValue)` <a id="structFRHAPI__ManyEntityGuideEngagement_1ad036bbf974165600e995c4ccfda12e63"></a>

Sets the value of Results_Optional and also sets Results_IsSet to true using move semantics.

#### `public inline void `[`ClearResults`](#structFRHAPI__ManyEntityGuideEngagement_1a91a560e335c905ae7b6d48fe7e62cb53)`()` <a id="structFRHAPI__ManyEntityGuideEngagement_1a91a560e335c905ae7b6d48fe7e62cb53"></a>

Clears the value of Results_Optional and sets Results_IsSet to false.

#### `public inline bool `[`IsResultsSet`](#structFRHAPI__ManyEntityGuideEngagement_1a720cb0704916268997d296a07e56bb02)`() const` <a id="structFRHAPI__ManyEntityGuideEngagement_1a720cb0704916268997d296a07e56bb02"></a>

Checks whether Results_Optional has been set.

