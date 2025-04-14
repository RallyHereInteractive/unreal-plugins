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
`public inline ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionEvent_1acc613da7f78001647ca736ecd5c29595)`()` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionEvent_1aa9eeac3168cf4a1280f413847d27ad9c)`() const` | Gets the value of Type_Optional, regardless of it having been set.
`public inline const ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionEvent_1ad97a9d80977329617ddc53204215cbeb)`(const ERHAPI_RestrictionType & DefaultValue) const` | Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetType`](#structFRHAPI__RestrictionEvent_1ac1c04e55a69a393ce529459009cd4db7)`(ERHAPI_RestrictionType & OutValue) const` | Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_RestrictionType * `[`GetTypeOrNull`](#structFRHAPI__RestrictionEvent_1a42cf68279b6fe598123961fe6ea770b4)`()` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_RestrictionType * `[`GetTypeOrNull`](#structFRHAPI__RestrictionEvent_1a380f85930cbc34b8f5ef2ff078c3de48)`() const` | Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetType`](#structFRHAPI__RestrictionEvent_1a3737f7731acc78a0fd4bebfaf01c2399)`(const ERHAPI_RestrictionType & NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true.
`public inline void `[`SetType`](#structFRHAPI__RestrictionEvent_1a1357ec643cc6483e1d93b09246931ed3)`(ERHAPI_RestrictionType && NewValue)` | Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.
`public inline void `[`ClearType`](#structFRHAPI__RestrictionEvent_1a77d214f8e9353ec89c6b3b5bc81bac10)`()` | Clears the value of Type_Optional and sets Type_IsSet to false.
`public inline bool `[`IsTypeSet`](#structFRHAPI__RestrictionEvent_1a7ac49e7a2e0af928d194feb2ae8f6906)`() const` | Checks whether Type_Optional has been set.
`public inline ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionEvent_1aae16e475ddf0b782587224adfc2380b6)`()` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionEvent_1a06242775c7aa2d9c05fb6c455e545d25)`() const` | Gets the value of Reason_Optional, regardless of it having been set.
`public inline const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionEvent_1af974b132733861ed063ee20757f34f88)`(const ERHAPI_RestrictionReasonCode & DefaultValue) const` | Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetReason`](#structFRHAPI__RestrictionEvent_1a44b77a8473ab18a175fa62f6e5ffe90e)`(ERHAPI_RestrictionReasonCode & OutValue) const` | Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__RestrictionEvent_1a5e2c490fd2d8aa48df695c945a939eb7)`()` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__RestrictionEvent_1a1b458ea3d1bc1ff791428510ad9fc48e)`() const` | Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetReason`](#structFRHAPI__RestrictionEvent_1a9292b1b6a2a8839a2dac839321d91f65)`(const ERHAPI_RestrictionReasonCode & NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true.
`public inline void `[`SetReason`](#structFRHAPI__RestrictionEvent_1a4ea39569f259a6cc3ddae4f17fab27c5)`(ERHAPI_RestrictionReasonCode && NewValue)` | Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.
`public inline void `[`ClearReason`](#structFRHAPI__RestrictionEvent_1a9dbcdb819b189d9accda3769021ba15f)`()` | Clears the value of Reason_Optional and sets Reason_IsSet to false.
`public inline bool `[`IsReasonSet`](#structFRHAPI__RestrictionEvent_1af9350578af338776013170e00ff02cf9)`() const` | Checks whether Reason_Optional has been set.
`public inline FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionEvent_1a7e0c887219c6f6919104060aed3439e6)`()` | Gets the value of Expiration_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionEvent_1a83e9402ea23df152daeed1837214735e)`() const` | Gets the value of Expiration_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionEvent_1ab3685c7312e78de938937bb683373dbe)`(const FDateTime & DefaultValue) const` | Gets the value of Expiration_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExpiration`](#structFRHAPI__RestrictionEvent_1acbbd11e2e3c2e8252376f90a58613570)`(FDateTime & OutValue) const` | Fills OutValue with the value of Expiration_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__RestrictionEvent_1a84f4a5d9afc2437a50fe32a905ef7319)`()` | Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__RestrictionEvent_1ac2e9be9a10b0a9d74d9d5bbe5d81d88b)`() const` | Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExpiration`](#structFRHAPI__RestrictionEvent_1a03af13002754af921bfc7f0fdea3f27b)`(const FDateTime & NewValue)` | Sets the value of Expiration_Optional and also sets Expiration_IsSet to true.
`public inline void `[`SetExpiration`](#structFRHAPI__RestrictionEvent_1af9e0ac7ca3b0a7a6e4b91e864b2ceeec)`(FDateTime && NewValue)` | Sets the value of Expiration_Optional and also sets Expiration_IsSet to true using move semantics.
`public inline void `[`ClearExpiration`](#structFRHAPI__RestrictionEvent_1a836568e0e9615f128332d07b832edff1)`()` | Clears the value of Expiration_Optional and sets Expiration_IsSet to false.
`public inline bool `[`IsExpirationSet`](#structFRHAPI__RestrictionEvent_1a5ff1fd2bcf58053cacca874d4584135b)`() const` | Checks whether Expiration_Optional has been set.
`public inline ERHAPI_RestrictionIssuerType & `[`GetIssuerType`](#structFRHAPI__RestrictionEvent_1a2f5680b151495084f2cf8603b5ee32b0)`()` | Gets the value of IssuerType.
`public inline const ERHAPI_RestrictionIssuerType & `[`GetIssuerType`](#structFRHAPI__RestrictionEvent_1aa58b8b7610a7995ddec3df9c447c03c5)`() const` | Gets the value of IssuerType.
`public inline void `[`SetIssuerType`](#structFRHAPI__RestrictionEvent_1ab94475c08e11897ac92a35870cb9fd5a)`(const ERHAPI_RestrictionIssuerType & NewValue)` | Sets the value of IssuerType.
`public inline void `[`SetIssuerType`](#structFRHAPI__RestrictionEvent_1a48744b0b774eb03e3871f7a151ba69e0)`(ERHAPI_RestrictionIssuerType && NewValue)` | Sets the value of IssuerType using move semantics.
`public inline FString & `[`GetIssuer`](#structFRHAPI__RestrictionEvent_1a0462ee48dfc6a074a60a7f90d796942b)`()` | Gets the value of Issuer.
`public inline const FString & `[`GetIssuer`](#structFRHAPI__RestrictionEvent_1a012e344a256eeed2449e4c06b5c3b7ab)`() const` | Gets the value of Issuer.
`public inline void `[`SetIssuer`](#structFRHAPI__RestrictionEvent_1a6205a42b9b63863fac991fd205459265)`(const FString & NewValue)` | Sets the value of Issuer.
`public inline void `[`SetIssuer`](#structFRHAPI__RestrictionEvent_1a1bd41b0555e4a1cd7ea38a2a2860ef05)`(FString && NewValue)` | Sets the value of Issuer using move semantics.
`public inline FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionEvent_1a04c2852e467123b95586bdf7a5be8f7a)`()` | Gets the value of ReasonDetail_Optional, regardless of it having been set.
`public inline const FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionEvent_1a20b17215c87f5fe6170cf37b994ae1f1)`() const` | Gets the value of ReasonDetail_Optional, regardless of it having been set.
`public inline const FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionEvent_1a33ac4c9f1b06cae7ea91a5865084fc1c)`(const FString & DefaultValue) const` | Gets the value of ReasonDetail_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetReasonDetail`](#structFRHAPI__RestrictionEvent_1a1e7e1e5b32c83c3033f5b6223206e243)`(FString & OutValue) const` | Fills OutValue with the value of ReasonDetail_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetReasonDetailOrNull`](#structFRHAPI__RestrictionEvent_1ad466d75e04995507a6672a314f93118b)`()` | Returns a pointer to ReasonDetail_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetReasonDetailOrNull`](#structFRHAPI__RestrictionEvent_1a291174c0cae6fa80aa55a3c64bb292e4)`() const` | Returns a pointer to ReasonDetail_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetReasonDetail`](#structFRHAPI__RestrictionEvent_1adab704b47b089c178547dcfdd05e3380)`(const FString & NewValue)` | Sets the value of ReasonDetail_Optional and also sets ReasonDetail_IsSet to true.
`public inline void `[`SetReasonDetail`](#structFRHAPI__RestrictionEvent_1a4f5e176689f8b5a0335b7714f0576297)`(FString && NewValue)` | Sets the value of ReasonDetail_Optional and also sets ReasonDetail_IsSet to true using move semantics.
`public inline void `[`ClearReasonDetail`](#structFRHAPI__RestrictionEvent_1ad465ee5871fd81ac769f25e0af788757)`()` | Clears the value of ReasonDetail_Optional and sets ReasonDetail_IsSet to false.
`public inline bool `[`IsReasonDetailSet`](#structFRHAPI__RestrictionEvent_1abcce0ce9b267380e72d92e35630c1d2a)`() const` | Checks whether ReasonDetail_Optional has been set.
`public inline FString & `[`GetRestrictionEventId`](#structFRHAPI__RestrictionEvent_1aeb58473f24e5fcabe066810eefee7bad)`()` | Gets the value of RestrictionEventId.
`public inline const FString & `[`GetRestrictionEventId`](#structFRHAPI__RestrictionEvent_1abf976744518f3e6371bfeb7c3f4d60e6)`() const` | Gets the value of RestrictionEventId.
`public inline void `[`SetRestrictionEventId`](#structFRHAPI__RestrictionEvent_1adb8fee7b15afe0ef5e6e81e74d6f6a90)`(const FString & NewValue)` | Sets the value of RestrictionEventId.
`public inline void `[`SetRestrictionEventId`](#structFRHAPI__RestrictionEvent_1a8d8e535a74a0484ee971e263f78f8856)`(FString && NewValue)` | Sets the value of RestrictionEventId using move semantics.
`public inline FGuid & `[`GetPersonId`](#structFRHAPI__RestrictionEvent_1a151e1ae29e2369cd687be87dfefea400)`()` | Gets the value of PersonId.
`public inline const FGuid & `[`GetPersonId`](#structFRHAPI__RestrictionEvent_1a507fcb9053885fab0dd1eb3e5241446c)`() const` | Gets the value of PersonId.
`public inline void `[`SetPersonId`](#structFRHAPI__RestrictionEvent_1abe107765cfcb3bbe108efc5c38a79577)`(const FGuid & NewValue)` | Sets the value of PersonId.
`public inline void `[`SetPersonId`](#structFRHAPI__RestrictionEvent_1a6cd2a2b723f5a614ed0f580ca730f50b)`(FGuid && NewValue)` | Sets the value of PersonId using move semantics.
`public inline FDateTime & `[`GetCreated`](#structFRHAPI__RestrictionEvent_1a5921e50d70affa58cbbecad0cc1ae915)`()` | Gets the value of Created.
`public inline const FDateTime & `[`GetCreated`](#structFRHAPI__RestrictionEvent_1a88910faf15c68c15e26162afce5754db)`() const` | Gets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__RestrictionEvent_1a4c6b50d60be6940df025cb3e6a356ba8)`(const FDateTime & NewValue)` | Sets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__RestrictionEvent_1af6bde6324c874deef619ce8801cb3ced)`(FDateTime && NewValue)` | Sets the value of Created using move semantics.

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

#### `public inline ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionEvent_1acc613da7f78001647ca736ecd5c29595)`()` <a id="structFRHAPI__RestrictionEvent_1acc613da7f78001647ca736ecd5c29595"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionEvent_1aa9eeac3168cf4a1280f413847d27ad9c)`() const` <a id="structFRHAPI__RestrictionEvent_1aa9eeac3168cf4a1280f413847d27ad9c"></a>

Gets the value of Type_Optional, regardless of it having been set.

#### `public inline const ERHAPI_RestrictionType & `[`GetType`](#structFRHAPI__RestrictionEvent_1ad97a9d80977329617ddc53204215cbeb)`(const ERHAPI_RestrictionType & DefaultValue) const` <a id="structFRHAPI__RestrictionEvent_1ad97a9d80977329617ddc53204215cbeb"></a>

Gets the value of Type_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetType`](#structFRHAPI__RestrictionEvent_1ac1c04e55a69a393ce529459009cd4db7)`(ERHAPI_RestrictionType & OutValue) const` <a id="structFRHAPI__RestrictionEvent_1ac1c04e55a69a393ce529459009cd4db7"></a>

Fills OutValue with the value of Type_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_RestrictionType * `[`GetTypeOrNull`](#structFRHAPI__RestrictionEvent_1a42cf68279b6fe598123961fe6ea770b4)`()` <a id="structFRHAPI__RestrictionEvent_1a42cf68279b6fe598123961fe6ea770b4"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_RestrictionType * `[`GetTypeOrNull`](#structFRHAPI__RestrictionEvent_1a380f85930cbc34b8f5ef2ff078c3de48)`() const` <a id="structFRHAPI__RestrictionEvent_1a380f85930cbc34b8f5ef2ff078c3de48"></a>

Returns a pointer to Type_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetType`](#structFRHAPI__RestrictionEvent_1a3737f7731acc78a0fd4bebfaf01c2399)`(const ERHAPI_RestrictionType & NewValue)` <a id="structFRHAPI__RestrictionEvent_1a3737f7731acc78a0fd4bebfaf01c2399"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true.

#### `public inline void `[`SetType`](#structFRHAPI__RestrictionEvent_1a1357ec643cc6483e1d93b09246931ed3)`(ERHAPI_RestrictionType && NewValue)` <a id="structFRHAPI__RestrictionEvent_1a1357ec643cc6483e1d93b09246931ed3"></a>

Sets the value of Type_Optional and also sets Type_IsSet to true using move semantics.

#### `public inline void `[`ClearType`](#structFRHAPI__RestrictionEvent_1a77d214f8e9353ec89c6b3b5bc81bac10)`()` <a id="structFRHAPI__RestrictionEvent_1a77d214f8e9353ec89c6b3b5bc81bac10"></a>

Clears the value of Type_Optional and sets Type_IsSet to false.

#### `public inline bool `[`IsTypeSet`](#structFRHAPI__RestrictionEvent_1a7ac49e7a2e0af928d194feb2ae8f6906)`() const` <a id="structFRHAPI__RestrictionEvent_1a7ac49e7a2e0af928d194feb2ae8f6906"></a>

Checks whether Type_Optional has been set.

#### `public inline ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionEvent_1aae16e475ddf0b782587224adfc2380b6)`()` <a id="structFRHAPI__RestrictionEvent_1aae16e475ddf0b782587224adfc2380b6"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionEvent_1a06242775c7aa2d9c05fb6c455e545d25)`() const` <a id="structFRHAPI__RestrictionEvent_1a06242775c7aa2d9c05fb6c455e545d25"></a>

Gets the value of Reason_Optional, regardless of it having been set.

#### `public inline const ERHAPI_RestrictionReasonCode & `[`GetReason`](#structFRHAPI__RestrictionEvent_1af974b132733861ed063ee20757f34f88)`(const ERHAPI_RestrictionReasonCode & DefaultValue) const` <a id="structFRHAPI__RestrictionEvent_1af974b132733861ed063ee20757f34f88"></a>

Gets the value of Reason_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetReason`](#structFRHAPI__RestrictionEvent_1a44b77a8473ab18a175fa62f6e5ffe90e)`(ERHAPI_RestrictionReasonCode & OutValue) const` <a id="structFRHAPI__RestrictionEvent_1a44b77a8473ab18a175fa62f6e5ffe90e"></a>

Fills OutValue with the value of Reason_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__RestrictionEvent_1a5e2c490fd2d8aa48df695c945a939eb7)`()` <a id="structFRHAPI__RestrictionEvent_1a5e2c490fd2d8aa48df695c945a939eb7"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_RestrictionReasonCode * `[`GetReasonOrNull`](#structFRHAPI__RestrictionEvent_1a1b458ea3d1bc1ff791428510ad9fc48e)`() const` <a id="structFRHAPI__RestrictionEvent_1a1b458ea3d1bc1ff791428510ad9fc48e"></a>

Returns a pointer to Reason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetReason`](#structFRHAPI__RestrictionEvent_1a9292b1b6a2a8839a2dac839321d91f65)`(const ERHAPI_RestrictionReasonCode & NewValue)` <a id="structFRHAPI__RestrictionEvent_1a9292b1b6a2a8839a2dac839321d91f65"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true.

#### `public inline void `[`SetReason`](#structFRHAPI__RestrictionEvent_1a4ea39569f259a6cc3ddae4f17fab27c5)`(ERHAPI_RestrictionReasonCode && NewValue)` <a id="structFRHAPI__RestrictionEvent_1a4ea39569f259a6cc3ddae4f17fab27c5"></a>

Sets the value of Reason_Optional and also sets Reason_IsSet to true using move semantics.

#### `public inline void `[`ClearReason`](#structFRHAPI__RestrictionEvent_1a9dbcdb819b189d9accda3769021ba15f)`()` <a id="structFRHAPI__RestrictionEvent_1a9dbcdb819b189d9accda3769021ba15f"></a>

Clears the value of Reason_Optional and sets Reason_IsSet to false.

#### `public inline bool `[`IsReasonSet`](#structFRHAPI__RestrictionEvent_1af9350578af338776013170e00ff02cf9)`() const` <a id="structFRHAPI__RestrictionEvent_1af9350578af338776013170e00ff02cf9"></a>

Checks whether Reason_Optional has been set.

#### `public inline FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionEvent_1a7e0c887219c6f6919104060aed3439e6)`()` <a id="structFRHAPI__RestrictionEvent_1a7e0c887219c6f6919104060aed3439e6"></a>

Gets the value of Expiration_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionEvent_1a83e9402ea23df152daeed1837214735e)`() const` <a id="structFRHAPI__RestrictionEvent_1a83e9402ea23df152daeed1837214735e"></a>

Gets the value of Expiration_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetExpiration`](#structFRHAPI__RestrictionEvent_1ab3685c7312e78de938937bb683373dbe)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__RestrictionEvent_1ab3685c7312e78de938937bb683373dbe"></a>

Gets the value of Expiration_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExpiration`](#structFRHAPI__RestrictionEvent_1acbbd11e2e3c2e8252376f90a58613570)`(FDateTime & OutValue) const` <a id="structFRHAPI__RestrictionEvent_1acbbd11e2e3c2e8252376f90a58613570"></a>

Fills OutValue with the value of Expiration_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__RestrictionEvent_1a84f4a5d9afc2437a50fe32a905ef7319)`()` <a id="structFRHAPI__RestrictionEvent_1a84f4a5d9afc2437a50fe32a905ef7319"></a>

Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetExpirationOrNull`](#structFRHAPI__RestrictionEvent_1ac2e9be9a10b0a9d74d9d5bbe5d81d88b)`() const` <a id="structFRHAPI__RestrictionEvent_1ac2e9be9a10b0a9d74d9d5bbe5d81d88b"></a>

Returns a pointer to Expiration_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExpiration`](#structFRHAPI__RestrictionEvent_1a03af13002754af921bfc7f0fdea3f27b)`(const FDateTime & NewValue)` <a id="structFRHAPI__RestrictionEvent_1a03af13002754af921bfc7f0fdea3f27b"></a>

Sets the value of Expiration_Optional and also sets Expiration_IsSet to true.

#### `public inline void `[`SetExpiration`](#structFRHAPI__RestrictionEvent_1af9e0ac7ca3b0a7a6e4b91e864b2ceeec)`(FDateTime && NewValue)` <a id="structFRHAPI__RestrictionEvent_1af9e0ac7ca3b0a7a6e4b91e864b2ceeec"></a>

Sets the value of Expiration_Optional and also sets Expiration_IsSet to true using move semantics.

#### `public inline void `[`ClearExpiration`](#structFRHAPI__RestrictionEvent_1a836568e0e9615f128332d07b832edff1)`()` <a id="structFRHAPI__RestrictionEvent_1a836568e0e9615f128332d07b832edff1"></a>

Clears the value of Expiration_Optional and sets Expiration_IsSet to false.

#### `public inline bool `[`IsExpirationSet`](#structFRHAPI__RestrictionEvent_1a5ff1fd2bcf58053cacca874d4584135b)`() const` <a id="structFRHAPI__RestrictionEvent_1a5ff1fd2bcf58053cacca874d4584135b"></a>

Checks whether Expiration_Optional has been set.

#### `public inline ERHAPI_RestrictionIssuerType & `[`GetIssuerType`](#structFRHAPI__RestrictionEvent_1a2f5680b151495084f2cf8603b5ee32b0)`()` <a id="structFRHAPI__RestrictionEvent_1a2f5680b151495084f2cf8603b5ee32b0"></a>

Gets the value of IssuerType.

#### `public inline const ERHAPI_RestrictionIssuerType & `[`GetIssuerType`](#structFRHAPI__RestrictionEvent_1aa58b8b7610a7995ddec3df9c447c03c5)`() const` <a id="structFRHAPI__RestrictionEvent_1aa58b8b7610a7995ddec3df9c447c03c5"></a>

Gets the value of IssuerType.

#### `public inline void `[`SetIssuerType`](#structFRHAPI__RestrictionEvent_1ab94475c08e11897ac92a35870cb9fd5a)`(const ERHAPI_RestrictionIssuerType & NewValue)` <a id="structFRHAPI__RestrictionEvent_1ab94475c08e11897ac92a35870cb9fd5a"></a>

Sets the value of IssuerType.

#### `public inline void `[`SetIssuerType`](#structFRHAPI__RestrictionEvent_1a48744b0b774eb03e3871f7a151ba69e0)`(ERHAPI_RestrictionIssuerType && NewValue)` <a id="structFRHAPI__RestrictionEvent_1a48744b0b774eb03e3871f7a151ba69e0"></a>

Sets the value of IssuerType using move semantics.

#### `public inline FString & `[`GetIssuer`](#structFRHAPI__RestrictionEvent_1a0462ee48dfc6a074a60a7f90d796942b)`()` <a id="structFRHAPI__RestrictionEvent_1a0462ee48dfc6a074a60a7f90d796942b"></a>

Gets the value of Issuer.

#### `public inline const FString & `[`GetIssuer`](#structFRHAPI__RestrictionEvent_1a012e344a256eeed2449e4c06b5c3b7ab)`() const` <a id="structFRHAPI__RestrictionEvent_1a012e344a256eeed2449e4c06b5c3b7ab"></a>

Gets the value of Issuer.

#### `public inline void `[`SetIssuer`](#structFRHAPI__RestrictionEvent_1a6205a42b9b63863fac991fd205459265)`(const FString & NewValue)` <a id="structFRHAPI__RestrictionEvent_1a6205a42b9b63863fac991fd205459265"></a>

Sets the value of Issuer.

#### `public inline void `[`SetIssuer`](#structFRHAPI__RestrictionEvent_1a1bd41b0555e4a1cd7ea38a2a2860ef05)`(FString && NewValue)` <a id="structFRHAPI__RestrictionEvent_1a1bd41b0555e4a1cd7ea38a2a2860ef05"></a>

Sets the value of Issuer using move semantics.

#### `public inline FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionEvent_1a04c2852e467123b95586bdf7a5be8f7a)`()` <a id="structFRHAPI__RestrictionEvent_1a04c2852e467123b95586bdf7a5be8f7a"></a>

Gets the value of ReasonDetail_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionEvent_1a20b17215c87f5fe6170cf37b994ae1f1)`() const` <a id="structFRHAPI__RestrictionEvent_1a20b17215c87f5fe6170cf37b994ae1f1"></a>

Gets the value of ReasonDetail_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetReasonDetail`](#structFRHAPI__RestrictionEvent_1a33ac4c9f1b06cae7ea91a5865084fc1c)`(const FString & DefaultValue) const` <a id="structFRHAPI__RestrictionEvent_1a33ac4c9f1b06cae7ea91a5865084fc1c"></a>

Gets the value of ReasonDetail_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetReasonDetail`](#structFRHAPI__RestrictionEvent_1a1e7e1e5b32c83c3033f5b6223206e243)`(FString & OutValue) const` <a id="structFRHAPI__RestrictionEvent_1a1e7e1e5b32c83c3033f5b6223206e243"></a>

Fills OutValue with the value of ReasonDetail_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetReasonDetailOrNull`](#structFRHAPI__RestrictionEvent_1ad466d75e04995507a6672a314f93118b)`()` <a id="structFRHAPI__RestrictionEvent_1ad466d75e04995507a6672a314f93118b"></a>

Returns a pointer to ReasonDetail_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetReasonDetailOrNull`](#structFRHAPI__RestrictionEvent_1a291174c0cae6fa80aa55a3c64bb292e4)`() const` <a id="structFRHAPI__RestrictionEvent_1a291174c0cae6fa80aa55a3c64bb292e4"></a>

Returns a pointer to ReasonDetail_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetReasonDetail`](#structFRHAPI__RestrictionEvent_1adab704b47b089c178547dcfdd05e3380)`(const FString & NewValue)` <a id="structFRHAPI__RestrictionEvent_1adab704b47b089c178547dcfdd05e3380"></a>

Sets the value of ReasonDetail_Optional and also sets ReasonDetail_IsSet to true.

#### `public inline void `[`SetReasonDetail`](#structFRHAPI__RestrictionEvent_1a4f5e176689f8b5a0335b7714f0576297)`(FString && NewValue)` <a id="structFRHAPI__RestrictionEvent_1a4f5e176689f8b5a0335b7714f0576297"></a>

Sets the value of ReasonDetail_Optional and also sets ReasonDetail_IsSet to true using move semantics.

#### `public inline void `[`ClearReasonDetail`](#structFRHAPI__RestrictionEvent_1ad465ee5871fd81ac769f25e0af788757)`()` <a id="structFRHAPI__RestrictionEvent_1ad465ee5871fd81ac769f25e0af788757"></a>

Clears the value of ReasonDetail_Optional and sets ReasonDetail_IsSet to false.

#### `public inline bool `[`IsReasonDetailSet`](#structFRHAPI__RestrictionEvent_1abcce0ce9b267380e72d92e35630c1d2a)`() const` <a id="structFRHAPI__RestrictionEvent_1abcce0ce9b267380e72d92e35630c1d2a"></a>

Checks whether ReasonDetail_Optional has been set.

#### `public inline FString & `[`GetRestrictionEventId`](#structFRHAPI__RestrictionEvent_1aeb58473f24e5fcabe066810eefee7bad)`()` <a id="structFRHAPI__RestrictionEvent_1aeb58473f24e5fcabe066810eefee7bad"></a>

Gets the value of RestrictionEventId.

#### `public inline const FString & `[`GetRestrictionEventId`](#structFRHAPI__RestrictionEvent_1abf976744518f3e6371bfeb7c3f4d60e6)`() const` <a id="structFRHAPI__RestrictionEvent_1abf976744518f3e6371bfeb7c3f4d60e6"></a>

Gets the value of RestrictionEventId.

#### `public inline void `[`SetRestrictionEventId`](#structFRHAPI__RestrictionEvent_1adb8fee7b15afe0ef5e6e81e74d6f6a90)`(const FString & NewValue)` <a id="structFRHAPI__RestrictionEvent_1adb8fee7b15afe0ef5e6e81e74d6f6a90"></a>

Sets the value of RestrictionEventId.

#### `public inline void `[`SetRestrictionEventId`](#structFRHAPI__RestrictionEvent_1a8d8e535a74a0484ee971e263f78f8856)`(FString && NewValue)` <a id="structFRHAPI__RestrictionEvent_1a8d8e535a74a0484ee971e263f78f8856"></a>

Sets the value of RestrictionEventId using move semantics.

#### `public inline FGuid & `[`GetPersonId`](#structFRHAPI__RestrictionEvent_1a151e1ae29e2369cd687be87dfefea400)`()` <a id="structFRHAPI__RestrictionEvent_1a151e1ae29e2369cd687be87dfefea400"></a>

Gets the value of PersonId.

#### `public inline const FGuid & `[`GetPersonId`](#structFRHAPI__RestrictionEvent_1a507fcb9053885fab0dd1eb3e5241446c)`() const` <a id="structFRHAPI__RestrictionEvent_1a507fcb9053885fab0dd1eb3e5241446c"></a>

Gets the value of PersonId.

#### `public inline void `[`SetPersonId`](#structFRHAPI__RestrictionEvent_1abe107765cfcb3bbe108efc5c38a79577)`(const FGuid & NewValue)` <a id="structFRHAPI__RestrictionEvent_1abe107765cfcb3bbe108efc5c38a79577"></a>

Sets the value of PersonId.

#### `public inline void `[`SetPersonId`](#structFRHAPI__RestrictionEvent_1a6cd2a2b723f5a614ed0f580ca730f50b)`(FGuid && NewValue)` <a id="structFRHAPI__RestrictionEvent_1a6cd2a2b723f5a614ed0f580ca730f50b"></a>

Sets the value of PersonId using move semantics.

#### `public inline FDateTime & `[`GetCreated`](#structFRHAPI__RestrictionEvent_1a5921e50d70affa58cbbecad0cc1ae915)`()` <a id="structFRHAPI__RestrictionEvent_1a5921e50d70affa58cbbecad0cc1ae915"></a>

Gets the value of Created.

#### `public inline const FDateTime & `[`GetCreated`](#structFRHAPI__RestrictionEvent_1a88910faf15c68c15e26162afce5754db)`() const` <a id="structFRHAPI__RestrictionEvent_1a88910faf15c68c15e26162afce5754db"></a>

Gets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__RestrictionEvent_1a4c6b50d60be6940df025cb3e6a356ba8)`(const FDateTime & NewValue)` <a id="structFRHAPI__RestrictionEvent_1a4c6b50d60be6940df025cb3e6a356ba8"></a>

Sets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__RestrictionEvent_1af6bde6324c874deef619ce8801cb3ced)`(FDateTime && NewValue)` <a id="structFRHAPI__RestrictionEvent_1af6bde6324c874deef619ce8801cb3ced"></a>

Sets the value of Created using move semantics.

