---
title: RHAPI_ExternalKeyEntitlement
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_ExternalKeyEntitlement`](#structFRHAPI__ExternalKeyEntitlement) | 

## struct `FRHAPI_ExternalKeyEntitlement` <a id="structFRHAPI__ExternalKeyEntitlement"></a>

```
struct FRHAPI_ExternalKeyEntitlement
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`ExternalKeyCampaignId`](#structFRHAPI__ExternalKeyEntitlement_1abce6e9b546cabed58bef65fe84f251e0) | The External Key Campaign ID.
`public int32 `[`Quantity`](#structFRHAPI__ExternalKeyEntitlement_1a810b35bdfda5a77732ecaef7c1bb64de) | The quantity of the External Key Entitlement.
`public virtual bool `[`FromJson`](#structFRHAPI__ExternalKeyEntitlement_1a37c7f892a7b35dfe64f77c97930a5143)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__ExternalKeyEntitlement_1a41e52f0e034a06c98c307dc3297b317b)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetExternalKeyCampaignId`](#structFRHAPI__ExternalKeyEntitlement_1a33335a379ef06e67ccfecc288d6e3499)`()` | Gets the value of ExternalKeyCampaignId.
`public inline FORCEINLINE const FGuid & `[`GetExternalKeyCampaignId`](#structFRHAPI__ExternalKeyEntitlement_1a7b9f85616bd375ad52a6db2172c27e1c)`() const` | Gets the value of ExternalKeyCampaignId.
`public inline FORCEINLINE void `[`SetExternalKeyCampaignId`](#structFRHAPI__ExternalKeyEntitlement_1afea28c5c4410cbda994a91877f964d33)`(const FGuid & NewValue)` | Sets the value of ExternalKeyCampaignId.
`public inline FORCEINLINE void `[`SetExternalKeyCampaignId`](#structFRHAPI__ExternalKeyEntitlement_1a00e2a88149f410f4fe5975cf1a5d185c)`(FGuid && NewValue)` | Sets the value of ExternalKeyCampaignId using move semantics.
`public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__ExternalKeyEntitlement_1a180b04b9b8e574a4cdbe80140b89b868)`()` | Gets the value of Quantity.
`public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__ExternalKeyEntitlement_1a33fef64a0664bb7b36cbfc344cba299f)`() const` | Gets the value of Quantity.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__ExternalKeyEntitlement_1aed34af571ca73c2338a8d17cc5009237)`(const int32 & NewValue)` | Sets the value of Quantity.
`public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__ExternalKeyEntitlement_1a48af002d6b35cf0b3873a46ed2f280dd)`(int32 && NewValue)` | Sets the value of Quantity using move semantics.
`public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__ExternalKeyEntitlement_1a91f32b8ca56ef05d22eb800a319e2f06)`()` | Returns the default value of Quantity.

### Members

#### `public FGuid `[`ExternalKeyCampaignId`](#structFRHAPI__ExternalKeyEntitlement_1abce6e9b546cabed58bef65fe84f251e0) <a id="structFRHAPI__ExternalKeyEntitlement_1abce6e9b546cabed58bef65fe84f251e0"></a>

The External Key Campaign ID.

#### `public int32 `[`Quantity`](#structFRHAPI__ExternalKeyEntitlement_1a810b35bdfda5a77732ecaef7c1bb64de) <a id="structFRHAPI__ExternalKeyEntitlement_1a810b35bdfda5a77732ecaef7c1bb64de"></a>

The quantity of the External Key Entitlement.

#### `public virtual bool `[`FromJson`](#structFRHAPI__ExternalKeyEntitlement_1a37c7f892a7b35dfe64f77c97930a5143)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__ExternalKeyEntitlement_1a37c7f892a7b35dfe64f77c97930a5143"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__ExternalKeyEntitlement_1a41e52f0e034a06c98c307dc3297b317b)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__ExternalKeyEntitlement_1a41e52f0e034a06c98c307dc3297b317b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetExternalKeyCampaignId`](#structFRHAPI__ExternalKeyEntitlement_1a33335a379ef06e67ccfecc288d6e3499)`()` <a id="structFRHAPI__ExternalKeyEntitlement_1a33335a379ef06e67ccfecc288d6e3499"></a>

Gets the value of ExternalKeyCampaignId.

#### `public inline FORCEINLINE const FGuid & `[`GetExternalKeyCampaignId`](#structFRHAPI__ExternalKeyEntitlement_1a7b9f85616bd375ad52a6db2172c27e1c)`() const` <a id="structFRHAPI__ExternalKeyEntitlement_1a7b9f85616bd375ad52a6db2172c27e1c"></a>

Gets the value of ExternalKeyCampaignId.

#### `public inline FORCEINLINE void `[`SetExternalKeyCampaignId`](#structFRHAPI__ExternalKeyEntitlement_1afea28c5c4410cbda994a91877f964d33)`(const FGuid & NewValue)` <a id="structFRHAPI__ExternalKeyEntitlement_1afea28c5c4410cbda994a91877f964d33"></a>

Sets the value of ExternalKeyCampaignId.

#### `public inline FORCEINLINE void `[`SetExternalKeyCampaignId`](#structFRHAPI__ExternalKeyEntitlement_1a00e2a88149f410f4fe5975cf1a5d185c)`(FGuid && NewValue)` <a id="structFRHAPI__ExternalKeyEntitlement_1a00e2a88149f410f4fe5975cf1a5d185c"></a>

Sets the value of ExternalKeyCampaignId using move semantics.

#### `public inline FORCEINLINE int32 & `[`GetQuantity`](#structFRHAPI__ExternalKeyEntitlement_1a180b04b9b8e574a4cdbe80140b89b868)`()` <a id="structFRHAPI__ExternalKeyEntitlement_1a180b04b9b8e574a4cdbe80140b89b868"></a>

Gets the value of Quantity.

#### `public inline FORCEINLINE const int32 & `[`GetQuantity`](#structFRHAPI__ExternalKeyEntitlement_1a33fef64a0664bb7b36cbfc344cba299f)`() const` <a id="structFRHAPI__ExternalKeyEntitlement_1a33fef64a0664bb7b36cbfc344cba299f"></a>

Gets the value of Quantity.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__ExternalKeyEntitlement_1aed34af571ca73c2338a8d17cc5009237)`(const int32 & NewValue)` <a id="structFRHAPI__ExternalKeyEntitlement_1aed34af571ca73c2338a8d17cc5009237"></a>

Sets the value of Quantity.

#### `public inline FORCEINLINE void `[`SetQuantity`](#structFRHAPI__ExternalKeyEntitlement_1a48af002d6b35cf0b3873a46ed2f280dd)`(int32 && NewValue)` <a id="structFRHAPI__ExternalKeyEntitlement_1a48af002d6b35cf0b3873a46ed2f280dd"></a>

Sets the value of Quantity using move semantics.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_Quantity`](#structFRHAPI__ExternalKeyEntitlement_1a91f32b8ca56ef05d22eb800a319e2f06)`()` <a id="structFRHAPI__ExternalKeyEntitlement_1a91f32b8ca56ef05d22eb800a319e2f06"></a>

Returns the default value of Quantity.

