---
title: RHAPI_PlayerReferralCode
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerReferralCode`](#structFRHAPI__PlayerReferralCode) | Represents a referral code belonging to a player.

## struct `FRHAPI_PlayerReferralCode` <a id="structFRHAPI__PlayerReferralCode"></a>

```
struct FRHAPI_PlayerReferralCode
  : public FRHAPI_Model
```

Represents a referral code belonging to a player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerReferralCode_1a7edcb437efb562f110b8bbfec8bab151) | 
`public FString `[`ReferralCode`](#structFRHAPI__PlayerReferralCode_1a887fbb8b46dcf538f1d4ecb9a3fa81a1) | 
`public FDateTime `[`CreatedDatetime`](#structFRHAPI__PlayerReferralCode_1a515b5399d608d18ddb619ad3b9723d0e) | 
`public FDateTime `[`LastModifiedTimestamp`](#structFRHAPI__PlayerReferralCode_1a8cd82b9a586c6976f81ec0085f99a550) | 
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerReferralCode_1a7765b35697e66f0f61eeae5226e86cbc)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerReferralCode_1a231b0e980724062d00490784583b6276)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerReferralCode_1a0494668aded8861fceb00f268c53f8ad)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerReferralCode_1afbd60302eae52be0dcae3c88e1229fcd)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerReferralCode_1a1bc6e2961d8f3a4cea51d4adc9abfb69)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerReferralCode_1aad8aa5199a53a12237e02b1db814d4b0)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FString & `[`GetReferralCode`](#structFRHAPI__PlayerReferralCode_1abc30046fdb80d0e4e978f0b9f3a55f51)`()` | Gets the value of ReferralCode.
`public inline const FString & `[`GetReferralCode`](#structFRHAPI__PlayerReferralCode_1a4c776ea9cde89c12eccb55209c1b6131)`() const` | Gets the value of ReferralCode.
`public inline void `[`SetReferralCode`](#structFRHAPI__PlayerReferralCode_1a26c3e9564823cde21b6450320646cb66)`(const FString & NewValue)` | Sets the value of ReferralCode.
`public inline void `[`SetReferralCode`](#structFRHAPI__PlayerReferralCode_1ad6ba382a2f0ca43cef52fd48c7b56311)`(FString && NewValue)` | Sets the value of ReferralCode using move semantics.
`public inline FDateTime & `[`GetCreatedDatetime`](#structFRHAPI__PlayerReferralCode_1ae8634dba5b2e0a0f0864b6a9b3423cd0)`()` | Gets the value of CreatedDatetime.
`public inline const FDateTime & `[`GetCreatedDatetime`](#structFRHAPI__PlayerReferralCode_1ae3998274d53ed90c4de63d54f01cbc26)`() const` | Gets the value of CreatedDatetime.
`public inline void `[`SetCreatedDatetime`](#structFRHAPI__PlayerReferralCode_1ad71af129eba1ada2ac23cd3a73508223)`(const FDateTime & NewValue)` | Sets the value of CreatedDatetime.
`public inline void `[`SetCreatedDatetime`](#structFRHAPI__PlayerReferralCode_1a10fee2de2baa6e6d44f9626cb30842dc)`(FDateTime && NewValue)` | Sets the value of CreatedDatetime using move semantics.
`public inline FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__PlayerReferralCode_1ac6f385c8b9a92636a82566ff1cc6e424)`()` | Gets the value of LastModifiedTimestamp.
`public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__PlayerReferralCode_1a37b852d2212690c7b7daaa030fc68755)`() const` | Gets the value of LastModifiedTimestamp.
`public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__PlayerReferralCode_1a141ae6ed5b8ffb83db6cbad7f1596de2)`(const FDateTime & NewValue)` | Sets the value of LastModifiedTimestamp.
`public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__PlayerReferralCode_1adb9b49ef6fc446cb7fd2fe9edd7bf97d)`(FDateTime && NewValue)` | Sets the value of LastModifiedTimestamp using move semantics.

### Members

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerReferralCode_1a7edcb437efb562f110b8bbfec8bab151) <a id="structFRHAPI__PlayerReferralCode_1a7edcb437efb562f110b8bbfec8bab151"></a>

#### `public FString `[`ReferralCode`](#structFRHAPI__PlayerReferralCode_1a887fbb8b46dcf538f1d4ecb9a3fa81a1) <a id="structFRHAPI__PlayerReferralCode_1a887fbb8b46dcf538f1d4ecb9a3fa81a1"></a>

#### `public FDateTime `[`CreatedDatetime`](#structFRHAPI__PlayerReferralCode_1a515b5399d608d18ddb619ad3b9723d0e) <a id="structFRHAPI__PlayerReferralCode_1a515b5399d608d18ddb619ad3b9723d0e"></a>

#### `public FDateTime `[`LastModifiedTimestamp`](#structFRHAPI__PlayerReferralCode_1a8cd82b9a586c6976f81ec0085f99a550) <a id="structFRHAPI__PlayerReferralCode_1a8cd82b9a586c6976f81ec0085f99a550"></a>

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerReferralCode_1a7765b35697e66f0f61eeae5226e86cbc)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerReferralCode_1a7765b35697e66f0f61eeae5226e86cbc"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerReferralCode_1a231b0e980724062d00490784583b6276)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerReferralCode_1a231b0e980724062d00490784583b6276"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerReferralCode_1a0494668aded8861fceb00f268c53f8ad)`()` <a id="structFRHAPI__PlayerReferralCode_1a0494668aded8861fceb00f268c53f8ad"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerReferralCode_1afbd60302eae52be0dcae3c88e1229fcd)`() const` <a id="structFRHAPI__PlayerReferralCode_1afbd60302eae52be0dcae3c88e1229fcd"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerReferralCode_1a1bc6e2961d8f3a4cea51d4adc9abfb69)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerReferralCode_1a1bc6e2961d8f3a4cea51d4adc9abfb69"></a>

Sets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerReferralCode_1aad8aa5199a53a12237e02b1db814d4b0)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerReferralCode_1aad8aa5199a53a12237e02b1db814d4b0"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FString & `[`GetReferralCode`](#structFRHAPI__PlayerReferralCode_1abc30046fdb80d0e4e978f0b9f3a55f51)`()` <a id="structFRHAPI__PlayerReferralCode_1abc30046fdb80d0e4e978f0b9f3a55f51"></a>

Gets the value of ReferralCode.

#### `public inline const FString & `[`GetReferralCode`](#structFRHAPI__PlayerReferralCode_1a4c776ea9cde89c12eccb55209c1b6131)`() const` <a id="structFRHAPI__PlayerReferralCode_1a4c776ea9cde89c12eccb55209c1b6131"></a>

Gets the value of ReferralCode.

#### `public inline void `[`SetReferralCode`](#structFRHAPI__PlayerReferralCode_1a26c3e9564823cde21b6450320646cb66)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReferralCode_1a26c3e9564823cde21b6450320646cb66"></a>

Sets the value of ReferralCode.

#### `public inline void `[`SetReferralCode`](#structFRHAPI__PlayerReferralCode_1ad6ba382a2f0ca43cef52fd48c7b56311)`(FString && NewValue)` <a id="structFRHAPI__PlayerReferralCode_1ad6ba382a2f0ca43cef52fd48c7b56311"></a>

Sets the value of ReferralCode using move semantics.

#### `public inline FDateTime & `[`GetCreatedDatetime`](#structFRHAPI__PlayerReferralCode_1ae8634dba5b2e0a0f0864b6a9b3423cd0)`()` <a id="structFRHAPI__PlayerReferralCode_1ae8634dba5b2e0a0f0864b6a9b3423cd0"></a>

Gets the value of CreatedDatetime.

#### `public inline const FDateTime & `[`GetCreatedDatetime`](#structFRHAPI__PlayerReferralCode_1ae3998274d53ed90c4de63d54f01cbc26)`() const` <a id="structFRHAPI__PlayerReferralCode_1ae3998274d53ed90c4de63d54f01cbc26"></a>

Gets the value of CreatedDatetime.

#### `public inline void `[`SetCreatedDatetime`](#structFRHAPI__PlayerReferralCode_1ad71af129eba1ada2ac23cd3a73508223)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerReferralCode_1ad71af129eba1ada2ac23cd3a73508223"></a>

Sets the value of CreatedDatetime.

#### `public inline void `[`SetCreatedDatetime`](#structFRHAPI__PlayerReferralCode_1a10fee2de2baa6e6d44f9626cb30842dc)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerReferralCode_1a10fee2de2baa6e6d44f9626cb30842dc"></a>

Sets the value of CreatedDatetime using move semantics.

#### `public inline FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__PlayerReferralCode_1ac6f385c8b9a92636a82566ff1cc6e424)`()` <a id="structFRHAPI__PlayerReferralCode_1ac6f385c8b9a92636a82566ff1cc6e424"></a>

Gets the value of LastModifiedTimestamp.

#### `public inline const FDateTime & `[`GetLastModifiedTimestamp`](#structFRHAPI__PlayerReferralCode_1a37b852d2212690c7b7daaa030fc68755)`() const` <a id="structFRHAPI__PlayerReferralCode_1a37b852d2212690c7b7daaa030fc68755"></a>

Gets the value of LastModifiedTimestamp.

#### `public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__PlayerReferralCode_1a141ae6ed5b8ffb83db6cbad7f1596de2)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerReferralCode_1a141ae6ed5b8ffb83db6cbad7f1596de2"></a>

Sets the value of LastModifiedTimestamp.

#### `public inline void `[`SetLastModifiedTimestamp`](#structFRHAPI__PlayerReferralCode_1adb9b49ef6fc446cb7fd2fe9edd7bf97d)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerReferralCode_1adb9b49ef6fc446cb7fd2fe9edd7bf97d"></a>

Sets the value of LastModifiedTimestamp using move semantics.

