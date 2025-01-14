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
`public inline FGuid & `[`GetExternalKeyCampaignId`](#structFRHAPI__ExternalKeyEntitlement_1a4a3b566a8b29c9876f1f5787eea256c1)`()` | Gets the value of ExternalKeyCampaignId.
`public inline const FGuid & `[`GetExternalKeyCampaignId`](#structFRHAPI__ExternalKeyEntitlement_1a9c241f439b2f8093e660f846432a2f60)`() const` | Gets the value of ExternalKeyCampaignId.
`public inline void `[`SetExternalKeyCampaignId`](#structFRHAPI__ExternalKeyEntitlement_1a2e888984fb8e180516c5454bfe85ed8e)`(const FGuid & NewValue)` | Sets the value of ExternalKeyCampaignId.
`public inline void `[`SetExternalKeyCampaignId`](#structFRHAPI__ExternalKeyEntitlement_1a877eebe76d2a106760f0f70e6c59f5a7)`(FGuid && NewValue)` | Sets the value of ExternalKeyCampaignId using move semantics.
`public inline int32 & `[`GetQuantity`](#structFRHAPI__ExternalKeyEntitlement_1a0f6f79f69d47e7629abf05c6086b1162)`()` | Gets the value of Quantity.
`public inline const int32 & `[`GetQuantity`](#structFRHAPI__ExternalKeyEntitlement_1a0be6d5bb8921171ff2daf68f799d8ebc)`() const` | Gets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__ExternalKeyEntitlement_1a1fadc4240aad3af9f8345e4c98c3e3d3)`(const int32 & NewValue)` | Sets the value of Quantity.
`public inline void `[`SetQuantity`](#structFRHAPI__ExternalKeyEntitlement_1a99c834310c0f21806b08b653731445db)`(int32 && NewValue)` | Sets the value of Quantity using move semantics.
`public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__ExternalKeyEntitlement_1a28fabc8019a38a4095a253b47a95ba85)`() const` | Returns true if Quantity matches the default value.
`public inline void `[`SetQuantityToDefault`](#structFRHAPI__ExternalKeyEntitlement_1a78d3992451251c7886a18365176d6a10)`()` | Sets the value of Quantity to its default

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

#### `public inline FGuid & `[`GetExternalKeyCampaignId`](#structFRHAPI__ExternalKeyEntitlement_1a4a3b566a8b29c9876f1f5787eea256c1)`()` <a id="structFRHAPI__ExternalKeyEntitlement_1a4a3b566a8b29c9876f1f5787eea256c1"></a>

Gets the value of ExternalKeyCampaignId.

#### `public inline const FGuid & `[`GetExternalKeyCampaignId`](#structFRHAPI__ExternalKeyEntitlement_1a9c241f439b2f8093e660f846432a2f60)`() const` <a id="structFRHAPI__ExternalKeyEntitlement_1a9c241f439b2f8093e660f846432a2f60"></a>

Gets the value of ExternalKeyCampaignId.

#### `public inline void `[`SetExternalKeyCampaignId`](#structFRHAPI__ExternalKeyEntitlement_1a2e888984fb8e180516c5454bfe85ed8e)`(const FGuid & NewValue)` <a id="structFRHAPI__ExternalKeyEntitlement_1a2e888984fb8e180516c5454bfe85ed8e"></a>

Sets the value of ExternalKeyCampaignId.

#### `public inline void `[`SetExternalKeyCampaignId`](#structFRHAPI__ExternalKeyEntitlement_1a877eebe76d2a106760f0f70e6c59f5a7)`(FGuid && NewValue)` <a id="structFRHAPI__ExternalKeyEntitlement_1a877eebe76d2a106760f0f70e6c59f5a7"></a>

Sets the value of ExternalKeyCampaignId using move semantics.

#### `public inline int32 & `[`GetQuantity`](#structFRHAPI__ExternalKeyEntitlement_1a0f6f79f69d47e7629abf05c6086b1162)`()` <a id="structFRHAPI__ExternalKeyEntitlement_1a0f6f79f69d47e7629abf05c6086b1162"></a>

Gets the value of Quantity.

#### `public inline const int32 & `[`GetQuantity`](#structFRHAPI__ExternalKeyEntitlement_1a0be6d5bb8921171ff2daf68f799d8ebc)`() const` <a id="structFRHAPI__ExternalKeyEntitlement_1a0be6d5bb8921171ff2daf68f799d8ebc"></a>

Gets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__ExternalKeyEntitlement_1a1fadc4240aad3af9f8345e4c98c3e3d3)`(const int32 & NewValue)` <a id="structFRHAPI__ExternalKeyEntitlement_1a1fadc4240aad3af9f8345e4c98c3e3d3"></a>

Sets the value of Quantity.

#### `public inline void `[`SetQuantity`](#structFRHAPI__ExternalKeyEntitlement_1a99c834310c0f21806b08b653731445db)`(int32 && NewValue)` <a id="structFRHAPI__ExternalKeyEntitlement_1a99c834310c0f21806b08b653731445db"></a>

Sets the value of Quantity using move semantics.

#### `public inline bool `[`IsQuantityDefaultValue`](#structFRHAPI__ExternalKeyEntitlement_1a28fabc8019a38a4095a253b47a95ba85)`() const` <a id="structFRHAPI__ExternalKeyEntitlement_1a28fabc8019a38a4095a253b47a95ba85"></a>

Returns true if Quantity matches the default value.

#### `public inline void `[`SetQuantityToDefault`](#structFRHAPI__ExternalKeyEntitlement_1a78d3992451251c7886a18365176d6a10)`()` <a id="structFRHAPI__ExternalKeyEntitlement_1a78d3992451251c7886a18365176d6a10"></a>

Sets the value of Quantity to its default

