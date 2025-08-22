---
title: RHAPI_RestrictionEvent
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_RestrictionEvent`](#structFRHAPI__RestrictionEvent) | Restriction applied to a player.

## struct `FRHAPI_RestrictionEvent` <a id="structFRHAPI__RestrictionEvent"></a>

```
struct FRHAPI_RestrictionEvent
  : public FRHAPI_Model
```

Restriction applied to a player.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_RestrictionType `[`Type_Optional`](#structFRHAPI__RestrictionEvent_1acbc790b6b7db8693b74b61696ec0d0c5) | Type of restriction. null means removing all rstrictions.
`public bool `[`Type_IsSet`](#structFRHAPI__RestrictionEvent_1a4c9834155a498e408787c1f90e31215e) | true if Type_Optional has been set to a value
`public ERHAPI_RestrictionReasonCode `[`Reason_Optional`](#structFRHAPI__RestrictionEvent_1a7c9ed0875433f4214699c862825b23d7) | Reason the restriction was applied.
`public bool `[`Reason_IsSet`](#structFRHAPI__RestrictionEvent_1af4f5e160db99e8f2363be98f25e20495) | true if Reason_Optional has been set to a value
`public FDateTime `[`Expiration_Optional`](#structFRHAPI__RestrictionEvent_1a7d500aaedbd40aeef581543c7d06f340) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`Expiration_IsSet`](#structFRHAPI__RestrictionEvent_1a8172b52b2e19450645e937c0af99389b) | true if Expiration_Optional has been set to a value
`public ERHAPI_RestrictionIssuerType `[`IssuerType`](#structFRHAPI__RestrictionEvent_1ae1697666ed3eb388898bf4f39b9d493c) | Type of the Issuer.
`public FString `[`Issuer`](#structFRHAPI__RestrictionEvent_1a6af172feceac3e131b841256c9e93c4d) | The creator of the restriction.
`public FString `[`ReasonDetail_Optional`](#structFRHAPI__RestrictionEvent_1a16d94e42d83f5623056b30af9e506c63) | Internal-only reason describing the restriction.
`public bool `[`ReasonDetail_IsSet`](#structFRHAPI__RestrictionEvent_1a723c2cd626d8e8cad19858a95de5c27d) | true if ReasonDetail_Optional has been set to a value
`public FString `[`RestrictionEventId`](#structFRHAPI__RestrictionEvent_1a46e0531b65a869ba46d3ca33ce5f599c) | Unique ID identifying the restriction.
`public FGuid `[`PersonId`](#structFRHAPI__RestrictionEvent_1a9e636d53f03ba88246596d139e9568e4) | Person the restriction was applied to.
`public FDateTime `[`Created`](#structFRHAPI__RestrictionEvent_1abb14005f63e0fb659f10ea3bc9fdbf1e) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public virtual bool `[`FromJson`](#structFRHAPI__RestrictionEvent_1a96a54c036196d745eb2125cb78a35ac5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__RestrictionEvent_1a1c57e401cf5cee85dcf3bcc4aa386090)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionEvent_1a2ab5f9c2203fb13c60242e2b7f5c15a2)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionEvent_1a4787ed1fd36c4ad09d451e95ed9dc474)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionEvent_1a0dafed0413c81ac781ca8978a1d87f27)`(const ERHAPI_RestrictionType & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetType`](#structFRHAPI__RestrictionEvent_1acd36f720a54ecce6d30926edd8b3415c)`(ERHAPI_RestrictionType & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_RestrictionType * `[`GetTypeOrNull`](#structFRHAPI__RestrictionEvent_1aa5776399e866637af6c91b6854cace53)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_RestrictionType * `[`GetTypeOrNull`](#structFRHAPI__RestrictionEvent_1adce2b9010735f6b90c29024fd4c93a13)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__RestrictionEvent_1aa39b539f98ee768f01a02adb85617e4b)`(const ERHAPI_RestrictionType & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline FORCEINLINE void `[`SetType`](#structFRHAPI__RestrictionEvent_1acf34665d104d3d2494d85d03192986b3)`(ERHAPI_RestrictionType && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__RestrictionEvent_1a77d214f8e9353ec89c6b3b5bc81bac10)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline FORCEINLINE ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionEvent_1a57c1f30a7c55453f7e492cfb7d530be8)`()` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionEvent_1aa9b6f99ffb8773feb706b7adb83662cf)`() const` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionEvent_1adbd5b8ad369c5811a5095ea4d2a44649)`(const ERHAPI_RestrictionReasonCode & DefaultValue) const` | Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetReason`](#structFRHAPI__RestrictionEvent_1ae717e17ed9b136e45a68f6d37a177584)`(ERHAPI_RestrictionReasonCode & OutValue) const` | Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__RestrictionEvent_1ac19dfc1dc3e587f10dfdbf4bb98fac62)`()` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__RestrictionEvent_1aa16a03a15075bc2b1ab0a557c95f1b58)`() const` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__RestrictionEvent_1ad37186f5bbe4839a012a72974c8820b8)`(const ERHAPI_RestrictionReasonCode & NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true.
`public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__RestrictionEvent_1ad49225726c4b300cada705191412ca84)`(ERHAPI_RestrictionReasonCode && NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.
`public inline void `[`ClearReason`](#structFRHAPI__RestrictionEvent_1a9dbcdb819b189d9accda3769021ba15f)`()` | Clears the value of Reason_Optional and sets Reason_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionEvent_1a4cbc244b659e3fc42166d74b9e1c9d53)`()` | Gets the value of Expiration_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionEvent_1a62324810e381a5a27276ac77dd7b303d)`() const` | Gets the value of Expiration_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionEvent_1ab192c667afc8de5c6faa2f77130d1261)`(const FDateTime & DefaultValue) const` | Gets the value of Expiration_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetExpiration`](#structFRHAPI__RestrictionEvent_1a3ab3e6184ee4a28cbf4d1f7bee47bb0c)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expiration_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__RestrictionEvent_1a9bf8f9f01294791e840d80f7c607615d)`()` | Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__RestrictionEvent_1a27ad4714b381033e32289295f3214dd7)`() const` | Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetExpiration`](#structFRHAPI__RestrictionEvent_1a47f1e88d57f08e964d612bc7de2db796)`(const FDateTime & NewValue)` | Sets the value of Expiration_Optional and also sets Expiration_IsSet to true.
`public inline FORCEINLINE void `[`SetExpiration`](#structFRHAPI__RestrictionEvent_1a51e23205f28153aaf8c5a820307537d7)`(FDateTime && NewValue)` | Sets the value of Expiration_Optional and also sets Expiration_IsSet to true using move semantics.
`public inline void `[`ClearExpiration`](#structFRHAPI__RestrictionEvent_1a836568e0e9615f128332d07b832edff1)`()` | Clears the value of Expiration_Optional and sets Expiration_IsSet to false.
`public inline FORCEINLINE ERHAPI_RestrictionIssuerType & `[`GetIssuerType`](#structFRHAPI__RestrictionEvent_1ab300354468c5b9ffac6dbee759ab76ec)`()` | Gets the value of IssuerType.
`public inline FORCEINLINE const ERHAPI_RestrictionIssuerType & `[`GetIssuerType`](#structFRHAPI__RestrictionEvent_1a3e44c374fc7423edfc35026681f03f20)`() const` | Gets the value of IssuerType.
`public inline FORCEINLINE void `[`SetIssuerType`](#structFRHAPI__RestrictionEvent_1a8bb1c3eefef08e9f2efd1d4f8634a88e)`(const ERHAPI_RestrictionIssuerType & NewValue)` | Sets the value of IssuerType.
`public inline FORCEINLINE void `[`SetIssuerType`](#structFRHAPI__RestrictionEvent_1af964898ea78ce98d3cb175f6d1b1d358)`(ERHAPI_RestrictionIssuerType && NewValue)` | Sets the value of IssuerType using move semantics.
`public inline FORCEINLINE FString & `[`GetIssuer`](#structFRHAPI__RestrictionEvent_1a405ec05677e57b9e826358d4af91f3e0)`()` | Gets the value of Issuer.
`public inline FORCEINLINE const FString & `[`GetIssuer`](#structFRHAPI__RestrictionEvent_1a2c96ee76b74ad2aad7967ed8aa269a6a)`() const` | Gets the value of Issuer.
`public inline FORCEINLINE void `[`SetIssuer`](#structFRHAPI__RestrictionEvent_1a83bad14589a71cfbe64c9293393f1e5d)`(const FString & NewValue)` | Sets the value of Issuer.
`public inline FORCEINLINE void `[`SetIssuer`](#structFRHAPI__RestrictionEvent_1a2f1fc349f607b43e8946c324f8fcf4d6)`(FString && NewValue)` | Sets the value of Issuer using move semantics.
`public inline FORCEINLINE FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionEvent_1a20a093db7d408d3613a7a65ce45c1921)`()` | Gets the value of ReasonDetail_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionEvent_1a16598847b69e872d6d6bd8c3e1ff0fec)`() const` | Gets the value of ReasonDetail_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionEvent_1ad26c5340e036f4d14ca722700420085c)`(const FString & DefaultValue) const` | Gets the value of ReasonDetail_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetReasonDetail`](#structFRHAPI__RestrictionEvent_1a80e0a2cb58ec558d60e7d5ea0820db3a)`(FString & OutValue) const` | Fills OutValue with the value of ReasonDetail_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetReasonDetailOrNull`](#structFRHAPI__RestrictionEvent_1ae1437bc0e07b7cd77eba71190783d002)`()` | Returns a pointer to ReasonDetail_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetReasonDetailOrNull`](#structFRHAPI__RestrictionEvent_1a700f19d5c3126ab2d6ed19d8ae0ce30c)`() const` | Returns a pointer to ReasonDetail_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetReasonDetail`](#structFRHAPI__RestrictionEvent_1a6fe20403b4b0c03c579969fc5c855919)`(const FString & NewValue)` | Sets the value of ReasonDetail_Optional and also sets ReasonDetail_IsSet to true.
`public inline FORCEINLINE void `[`SetReasonDetail`](#structFRHAPI__RestrictionEvent_1a5fc28572b3b586d2b07af5479dc89206)`(FString && NewValue)` | Sets the value of ReasonDetail_Optional and also sets ReasonDetail_IsSet to true using move semantics.
`public inline void `[`ClearReasonDetail`](#structFRHAPI__RestrictionEvent_1ad465ee5871fd81ac769f25e0af788757)`()` | Clears the value of ReasonDetail_Optional and sets ReasonDetail_IsSet to false.
`public inline FORCEINLINE FString & `[`GetRestrictionEventId`](#structFRHAPI__RestrictionEvent_1ab47123e9ae8283c37bda7a8394a72cd1)`()` | Gets the value of RestrictionEventId.
`public inline FORCEINLINE const FString & `[`GetRestrictionEventId`](#structFRHAPI__RestrictionEvent_1a66f8cbf13e51ad068f36338e823fee5c)`() const` | Gets the value of RestrictionEventId.
`public inline FORCEINLINE void `[`SetRestrictionEventId`](#structFRHAPI__RestrictionEvent_1a8d500beb14f9458c0c78a04445ae7de4)`(const FString & NewValue)` | Sets the value of RestrictionEventId.
`public inline FORCEINLINE void `[`SetRestrictionEventId`](#structFRHAPI__RestrictionEvent_1a3280fbcc8a7a9697a889bb94cd716509)`(FString && NewValue)` | Sets the value of RestrictionEventId using move semantics.
`public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__RestrictionEvent_1af2398cc1c9b7a67b5d069fbab8799fa2)`()` | Gets the value of PersonId.
`public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__RestrictionEvent_1a858fbdf5b9e3387a18ca7ea581cbe442)`() const` | Gets the value of PersonId.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__RestrictionEvent_1aa2305847253404a7bef5f09f9480d3d1)`(const FGuid & NewValue)` | Sets the value of PersonId.
`public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__RestrictionEvent_1aafceb2f21f235895b368dad679e07451)`(FGuid && NewValue)` | Sets the value of PersonId using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetCreated`](#structFRHAPI__RestrictionEvent_1a823359047c631c70fbe66346e7f94ecd)`()` | Gets the value of Created.
`public inline FORCEINLINE const FDateTime & `[`GetCreated`](#structFRHAPI__RestrictionEvent_1a35ddbaae18cd2dffe69607ec58de95d9)`() const` | Gets the value of Created.
`public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__RestrictionEvent_1ac3efd9920075482693ce4b4fe217e2eb)`(const FDateTime & NewValue)` | Sets the value of Created.
`public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__RestrictionEvent_1a8549ebdaade31a9080b0b56728511b29)`(FDateTime && NewValue)` | Sets the value of Created using move semantics.

### Members

#### `public ERHAPI_RestrictionType `[`Type_Optional`](#structFRHAPI__RestrictionEvent_1acbc790b6b7db8693b74b61696ec0d0c5) <a id="structFRHAPI__RestrictionEvent_1acbc790b6b7db8693b74b61696ec0d0c5"></a>

Type of restriction. null means removing all rstrictions.

#### `public bool `[`Type_IsSet`](#structFRHAPI__RestrictionEvent_1a4c9834155a498e408787c1f90e31215e) <a id="structFRHAPI__RestrictionEvent_1a4c9834155a498e408787c1f90e31215e"></a>

true if Type_Optional has been set to a value

#### `public ERHAPI_RestrictionReasonCode `[`Reason_Optional`](#structFRHAPI__RestrictionEvent_1a7c9ed0875433f4214699c862825b23d7) <a id="structFRHAPI__RestrictionEvent_1a7c9ed0875433f4214699c862825b23d7"></a>

Reason the restriction was applied.

#### `public bool `[`Reason_IsSet`](#structFRHAPI__RestrictionEvent_1af4f5e160db99e8f2363be98f25e20495) <a id="structFRHAPI__RestrictionEvent_1af4f5e160db99e8f2363be98f25e20495"></a>

true if Reason_Optional has been set to a value

#### `public FDateTime `[`Expiration_Optional`](#structFRHAPI__RestrictionEvent_1a7d500aaedbd40aeef581543c7d06f340) <a id="structFRHAPI__RestrictionEvent_1a7d500aaedbd40aeef581543c7d06f340"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`Expiration_IsSet`](#structFRHAPI__RestrictionEvent_1a8172b52b2e19450645e937c0af99389b) <a id="structFRHAPI__RestrictionEvent_1a8172b52b2e19450645e937c0af99389b"></a>

true if Expiration_Optional has been set to a value

#### `public ERHAPI_RestrictionIssuerType `[`IssuerType`](#structFRHAPI__RestrictionEvent_1ae1697666ed3eb388898bf4f39b9d493c) <a id="structFRHAPI__RestrictionEvent_1ae1697666ed3eb388898bf4f39b9d493c"></a>

Type of the Issuer.

#### `public FString `[`Issuer`](#structFRHAPI__RestrictionEvent_1a6af172feceac3e131b841256c9e93c4d) <a id="structFRHAPI__RestrictionEvent_1a6af172feceac3e131b841256c9e93c4d"></a>

The creator of the restriction.

#### `public FString `[`ReasonDetail_Optional`](#structFRHAPI__RestrictionEvent_1a16d94e42d83f5623056b30af9e506c63) <a id="structFRHAPI__RestrictionEvent_1a16d94e42d83f5623056b30af9e506c63"></a>

Internal-only reason describing the restriction.

#### `public bool `[`ReasonDetail_IsSet`](#structFRHAPI__RestrictionEvent_1a723c2cd626d8e8cad19858a95de5c27d) <a id="structFRHAPI__RestrictionEvent_1a723c2cd626d8e8cad19858a95de5c27d"></a>

true if ReasonDetail_Optional has been set to a value

#### `public FString `[`RestrictionEventId`](#structFRHAPI__RestrictionEvent_1a46e0531b65a869ba46d3ca33ce5f599c) <a id="structFRHAPI__RestrictionEvent_1a46e0531b65a869ba46d3ca33ce5f599c"></a>

Unique ID identifying the restriction.

#### `public FGuid `[`PersonId`](#structFRHAPI__RestrictionEvent_1a9e636d53f03ba88246596d139e9568e4) <a id="structFRHAPI__RestrictionEvent_1a9e636d53f03ba88246596d139e9568e4"></a>

Person the restriction was applied to.

#### `public FDateTime `[`Created`](#structFRHAPI__RestrictionEvent_1abb14005f63e0fb659f10ea3bc9fdbf1e) <a id="structFRHAPI__RestrictionEvent_1abb14005f63e0fb659f10ea3bc9fdbf1e"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public virtual bool `[`FromJson`](#structFRHAPI__RestrictionEvent_1a96a54c036196d745eb2125cb78a35ac5)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__RestrictionEvent_1a96a54c036196d745eb2125cb78a35ac5"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__RestrictionEvent_1a1c57e401cf5cee85dcf3bcc4aa386090)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__RestrictionEvent_1a1c57e401cf5cee85dcf3bcc4aa386090"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionEvent_1a2ab5f9c2203fb13c60242e2b7f5c15a2)`()` <a id="structFRHAPI__RestrictionEvent_1a2ab5f9c2203fb13c60242e2b7f5c15a2"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionEvent_1a4787ed1fd36c4ad09d451e95ed9dc474)`() const` <a id="structFRHAPI__RestrictionEvent_1a4787ed1fd36c4ad09d451e95ed9dc474"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionEvent_1a0dafed0413c81ac781ca8978a1d87f27)`(const ERHAPI_RestrictionType & DefaultValue) const` <a id="structFRHAPI__RestrictionEvent_1a0dafed0413c81ac781ca8978a1d87f27"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetType`](#structFRHAPI__RestrictionEvent_1acd36f720a54ecce6d30926edd8b3415c)`(ERHAPI_RestrictionType & OutValue) const` <a id="structFRHAPI__RestrictionEvent_1acd36f720a54ecce6d30926edd8b3415c"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_RestrictionType * `[`GetTypeOrNull`](#structFRHAPI__RestrictionEvent_1aa5776399e866637af6c91b6854cace53)`()` <a id="structFRHAPI__RestrictionEvent_1aa5776399e866637af6c91b6854cace53"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_RestrictionType * `[`GetTypeOrNull`](#structFRHAPI__RestrictionEvent_1adce2b9010735f6b90c29024fd4c93a13)`() const` <a id="structFRHAPI__RestrictionEvent_1adce2b9010735f6b90c29024fd4c93a13"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__RestrictionEvent_1aa39b539f98ee768f01a02adb85617e4b)`(const ERHAPI_RestrictionType & NewValue)` <a id="structFRHAPI__RestrictionEvent_1aa39b539f98ee768f01a02adb85617e4b"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline FORCEINLINE void `[`SetType`](#structFRHAPI__RestrictionEvent_1acf34665d104d3d2494d85d03192986b3)`(ERHAPI_RestrictionType && NewValue)` <a id="structFRHAPI__RestrictionEvent_1acf34665d104d3d2494d85d03192986b3"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__RestrictionEvent_1a77d214f8e9353ec89c6b3b5bc81bac10)`()` <a id="structFRHAPI__RestrictionEvent_1a77d214f8e9353ec89c6b3b5bc81bac10"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionEvent_1a57c1f30a7c55453f7e492cfb7d530be8)`()` <a id="structFRHAPI__RestrictionEvent_1a57c1f30a7c55453f7e492cfb7d530be8"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionEvent_1aa9b6f99ffb8773feb706b7adb83662cf)`() const` <a id="structFRHAPI__RestrictionEvent_1aa9b6f99ffb8773feb706b7adb83662cf"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionEvent_1adbd5b8ad369c5811a5095ea4d2a44649)`(const ERHAPI_RestrictionReasonCode & DefaultValue) const` <a id="structFRHAPI__RestrictionEvent_1adbd5b8ad369c5811a5095ea4d2a44649"></a>

Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetReason`](#structFRHAPI__RestrictionEvent_1ae717e17ed9b136e45a68f6d37a177584)`(ERHAPI_RestrictionReasonCode & OutValue) const` <a id="structFRHAPI__RestrictionEvent_1ae717e17ed9b136e45a68f6d37a177584"></a>

Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__RestrictionEvent_1ac19dfc1dc3e587f10dfdbf4bb98fac62)`()` <a id="structFRHAPI__RestrictionEvent_1ac19dfc1dc3e587f10dfdbf4bb98fac62"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__RestrictionEvent_1aa16a03a15075bc2b1ab0a557c95f1b58)`() const` <a id="structFRHAPI__RestrictionEvent_1aa16a03a15075bc2b1ab0a557c95f1b58"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__RestrictionEvent_1ad37186f5bbe4839a012a72974c8820b8)`(const ERHAPI_RestrictionReasonCode & NewValue)` <a id="structFRHAPI__RestrictionEvent_1ad37186f5bbe4839a012a72974c8820b8"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true.

#### `public inline FORCEINLINE void `[`SetReason`](#structFRHAPI__RestrictionEvent_1ad49225726c4b300cada705191412ca84)`(ERHAPI_RestrictionReasonCode && NewValue)` <a id="structFRHAPI__RestrictionEvent_1ad49225726c4b300cada705191412ca84"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.

#### `public inline void `[`ClearReason`](#structFRHAPI__RestrictionEvent_1a9dbcdb819b189d9accda3769021ba15f)`()` <a id="structFRHAPI__RestrictionEvent_1a9dbcdb819b189d9accda3769021ba15f"></a>

Clears the value of Reason_Optional and sets Reason_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionEvent_1a4cbc244b659e3fc42166d74b9e1c9d53)`()` <a id="structFRHAPI__RestrictionEvent_1a4cbc244b659e3fc42166d74b9e1c9d53"></a>

Gets the value of Expiration_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionEvent_1a62324810e381a5a27276ac77dd7b303d)`() const` <a id="structFRHAPI__RestrictionEvent_1a62324810e381a5a27276ac77dd7b303d"></a>

Gets the value of Expiration_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionEvent_1ab192c667afc8de5c6faa2f77130d1261)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__RestrictionEvent_1ab192c667afc8de5c6faa2f77130d1261"></a>

Gets the value of Expiration_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetExpiration`](#structFRHAPI__RestrictionEvent_1a3ab3e6184ee4a28cbf4d1f7bee47bb0c)`(FDateTime & OutValue) const` <a id="structFRHAPI__RestrictionEvent_1a3ab3e6184ee4a28cbf4d1f7bee47bb0c"></a>

Fills OutValue with the value of Expiration_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__RestrictionEvent_1a9bf8f9f01294791e840d80f7c607615d)`()` <a id="structFRHAPI__RestrictionEvent_1a9bf8f9f01294791e840d80f7c607615d"></a>

Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__RestrictionEvent_1a27ad4714b381033e32289295f3214dd7)`() const` <a id="structFRHAPI__RestrictionEvent_1a27ad4714b381033e32289295f3214dd7"></a>

Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetExpiration`](#structFRHAPI__RestrictionEvent_1a47f1e88d57f08e964d612bc7de2db796)`(const FDateTime & NewValue)` <a id="structFRHAPI__RestrictionEvent_1a47f1e88d57f08e964d612bc7de2db796"></a>

Sets the value of Expiration_Optional and also sets Expiration_IsSet to true.

#### `public inline FORCEINLINE void `[`SetExpiration`](#structFRHAPI__RestrictionEvent_1a51e23205f28153aaf8c5a820307537d7)`(FDateTime && NewValue)` <a id="structFRHAPI__RestrictionEvent_1a51e23205f28153aaf8c5a820307537d7"></a>

Sets the value of Expiration_Optional and also sets Expiration_IsSet to true using move semantics.

#### `public inline void `[`ClearExpiration`](#structFRHAPI__RestrictionEvent_1a836568e0e9615f128332d07b832edff1)`()` <a id="structFRHAPI__RestrictionEvent_1a836568e0e9615f128332d07b832edff1"></a>

Clears the value of Expiration_Optional and sets Expiration_IsSet to false.

#### `public inline FORCEINLINE ERHAPI_RestrictionIssuerType & `[`GetIssuerType`](#structFRHAPI__RestrictionEvent_1ab300354468c5b9ffac6dbee759ab76ec)`()` <a id="structFRHAPI__RestrictionEvent_1ab300354468c5b9ffac6dbee759ab76ec"></a>

Gets the value of IssuerType.

#### `public inline FORCEINLINE const ERHAPI_RestrictionIssuerType & `[`GetIssuerType`](#structFRHAPI__RestrictionEvent_1a3e44c374fc7423edfc35026681f03f20)`() const` <a id="structFRHAPI__RestrictionEvent_1a3e44c374fc7423edfc35026681f03f20"></a>

Gets the value of IssuerType.

#### `public inline FORCEINLINE void `[`SetIssuerType`](#structFRHAPI__RestrictionEvent_1a8bb1c3eefef08e9f2efd1d4f8634a88e)`(const ERHAPI_RestrictionIssuerType & NewValue)` <a id="structFRHAPI__RestrictionEvent_1a8bb1c3eefef08e9f2efd1d4f8634a88e"></a>

Sets the value of IssuerType.

#### `public inline FORCEINLINE void `[`SetIssuerType`](#structFRHAPI__RestrictionEvent_1af964898ea78ce98d3cb175f6d1b1d358)`(ERHAPI_RestrictionIssuerType && NewValue)` <a id="structFRHAPI__RestrictionEvent_1af964898ea78ce98d3cb175f6d1b1d358"></a>

Sets the value of IssuerType using move semantics.

#### `public inline FORCEINLINE FString & `[`GetIssuer`](#structFRHAPI__RestrictionEvent_1a405ec05677e57b9e826358d4af91f3e0)`()` <a id="structFRHAPI__RestrictionEvent_1a405ec05677e57b9e826358d4af91f3e0"></a>

Gets the value of Issuer.

#### `public inline FORCEINLINE const FString & `[`GetIssuer`](#structFRHAPI__RestrictionEvent_1a2c96ee76b74ad2aad7967ed8aa269a6a)`() const` <a id="structFRHAPI__RestrictionEvent_1a2c96ee76b74ad2aad7967ed8aa269a6a"></a>

Gets the value of Issuer.

#### `public inline FORCEINLINE void `[`SetIssuer`](#structFRHAPI__RestrictionEvent_1a83bad14589a71cfbe64c9293393f1e5d)`(const FString & NewValue)` <a id="structFRHAPI__RestrictionEvent_1a83bad14589a71cfbe64c9293393f1e5d"></a>

Sets the value of Issuer.

#### `public inline FORCEINLINE void `[`SetIssuer`](#structFRHAPI__RestrictionEvent_1a2f1fc349f607b43e8946c324f8fcf4d6)`(FString && NewValue)` <a id="structFRHAPI__RestrictionEvent_1a2f1fc349f607b43e8946c324f8fcf4d6"></a>

Sets the value of Issuer using move semantics.

#### `public inline FORCEINLINE FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionEvent_1a20a093db7d408d3613a7a65ce45c1921)`()` <a id="structFRHAPI__RestrictionEvent_1a20a093db7d408d3613a7a65ce45c1921"></a>

Gets the value of ReasonDetail_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionEvent_1a16598847b69e872d6d6bd8c3e1ff0fec)`() const` <a id="structFRHAPI__RestrictionEvent_1a16598847b69e872d6d6bd8c3e1ff0fec"></a>

Gets the value of ReasonDetail_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionEvent_1ad26c5340e036f4d14ca722700420085c)`(const FString & DefaultValue) const` <a id="structFRHAPI__RestrictionEvent_1ad26c5340e036f4d14ca722700420085c"></a>

Gets the value of ReasonDetail_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetReasonDetail`](#structFRHAPI__RestrictionEvent_1a80e0a2cb58ec558d60e7d5ea0820db3a)`(FString & OutValue) const` <a id="structFRHAPI__RestrictionEvent_1a80e0a2cb58ec558d60e7d5ea0820db3a"></a>

Fills OutValue with the value of ReasonDetail_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetReasonDetailOrNull`](#structFRHAPI__RestrictionEvent_1ae1437bc0e07b7cd77eba71190783d002)`()` <a id="structFRHAPI__RestrictionEvent_1ae1437bc0e07b7cd77eba71190783d002"></a>

Returns a pointer to ReasonDetail_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetReasonDetailOrNull`](#structFRHAPI__RestrictionEvent_1a700f19d5c3126ab2d6ed19d8ae0ce30c)`() const` <a id="structFRHAPI__RestrictionEvent_1a700f19d5c3126ab2d6ed19d8ae0ce30c"></a>

Returns a pointer to ReasonDetail_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetReasonDetail`](#structFRHAPI__RestrictionEvent_1a6fe20403b4b0c03c579969fc5c855919)`(const FString & NewValue)` <a id="structFRHAPI__RestrictionEvent_1a6fe20403b4b0c03c579969fc5c855919"></a>

Sets the value of ReasonDetail_Optional and also sets ReasonDetail_IsSet to true.

#### `public inline FORCEINLINE void `[`SetReasonDetail`](#structFRHAPI__RestrictionEvent_1a5fc28572b3b586d2b07af5479dc89206)`(FString && NewValue)` <a id="structFRHAPI__RestrictionEvent_1a5fc28572b3b586d2b07af5479dc89206"></a>

Sets the value of ReasonDetail_Optional and also sets ReasonDetail_IsSet to true using move semantics.

#### `public inline void `[`ClearReasonDetail`](#structFRHAPI__RestrictionEvent_1ad465ee5871fd81ac769f25e0af788757)`()` <a id="structFRHAPI__RestrictionEvent_1ad465ee5871fd81ac769f25e0af788757"></a>

Clears the value of ReasonDetail_Optional and sets ReasonDetail_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetRestrictionEventId`](#structFRHAPI__RestrictionEvent_1ab47123e9ae8283c37bda7a8394a72cd1)`()` <a id="structFRHAPI__RestrictionEvent_1ab47123e9ae8283c37bda7a8394a72cd1"></a>

Gets the value of RestrictionEventId.

#### `public inline FORCEINLINE const FString & `[`GetRestrictionEventId`](#structFRHAPI__RestrictionEvent_1a66f8cbf13e51ad068f36338e823fee5c)`() const` <a id="structFRHAPI__RestrictionEvent_1a66f8cbf13e51ad068f36338e823fee5c"></a>

Gets the value of RestrictionEventId.

#### `public inline FORCEINLINE void `[`SetRestrictionEventId`](#structFRHAPI__RestrictionEvent_1a8d500beb14f9458c0c78a04445ae7de4)`(const FString & NewValue)` <a id="structFRHAPI__RestrictionEvent_1a8d500beb14f9458c0c78a04445ae7de4"></a>

Sets the value of RestrictionEventId.

#### `public inline FORCEINLINE void `[`SetRestrictionEventId`](#structFRHAPI__RestrictionEvent_1a3280fbcc8a7a9697a889bb94cd716509)`(FString && NewValue)` <a id="structFRHAPI__RestrictionEvent_1a3280fbcc8a7a9697a889bb94cd716509"></a>

Sets the value of RestrictionEventId using move semantics.

#### `public inline FORCEINLINE FGuid & `[`GetPersonId`](#structFRHAPI__RestrictionEvent_1af2398cc1c9b7a67b5d069fbab8799fa2)`()` <a id="structFRHAPI__RestrictionEvent_1af2398cc1c9b7a67b5d069fbab8799fa2"></a>

Gets the value of PersonId.

#### `public inline FORCEINLINE const FGuid & `[`GetPersonId`](#structFRHAPI__RestrictionEvent_1a858fbdf5b9e3387a18ca7ea581cbe442)`() const` <a id="structFRHAPI__RestrictionEvent_1a858fbdf5b9e3387a18ca7ea581cbe442"></a>

Gets the value of PersonId.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__RestrictionEvent_1aa2305847253404a7bef5f09f9480d3d1)`(const FGuid & NewValue)` <a id="structFRHAPI__RestrictionEvent_1aa2305847253404a7bef5f09f9480d3d1"></a>

Sets the value of PersonId.

#### `public inline FORCEINLINE void `[`SetPersonId`](#structFRHAPI__RestrictionEvent_1aafceb2f21f235895b368dad679e07451)`(FGuid && NewValue)` <a id="structFRHAPI__RestrictionEvent_1aafceb2f21f235895b368dad679e07451"></a>

Sets the value of PersonId using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetCreated`](#structFRHAPI__RestrictionEvent_1a823359047c631c70fbe66346e7f94ecd)`()` <a id="structFRHAPI__RestrictionEvent_1a823359047c631c70fbe66346e7f94ecd"></a>

Gets the value of Created.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreated`](#structFRHAPI__RestrictionEvent_1a35ddbaae18cd2dffe69607ec58de95d9)`() const` <a id="structFRHAPI__RestrictionEvent_1a35ddbaae18cd2dffe69607ec58de95d9"></a>

Gets the value of Created.

#### `public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__RestrictionEvent_1ac3efd9920075482693ce4b4fe217e2eb)`(const FDateTime & NewValue)` <a id="structFRHAPI__RestrictionEvent_1ac3efd9920075482693ce4b4fe217e2eb"></a>

Sets the value of Created.

#### `public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__RestrictionEvent_1a8549ebdaade31a9080b0b56728511b29)`(FDateTime && NewValue)` <a id="structFRHAPI__RestrictionEvent_1a8549ebdaade31a9080b0b56728511b29"></a>

Sets the value of Created using move semantics.

