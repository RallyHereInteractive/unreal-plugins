---
title: RHAPI_BodyUpdateOpportunityById
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BodyUpdateOpportunityById`](#structFRHAPI__BodyUpdateOpportunityById) | 

## struct `FRHAPI_BodyUpdateOpportunityById` <a id="structFRHAPI__BodyUpdateOpportunityById"></a>

```
struct FRHAPI_BodyUpdateOpportunityById
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_OpportunityState `[`State`](#structFRHAPI__BodyUpdateOpportunityById_1a34aec65b8dce5bc71caa0e851c6249fa) | State of the opportunity.
`public ERHAPI_OpportunityAbortReason `[`AbortReason_Optional`](#structFRHAPI__BodyUpdateOpportunityById_1a9095b50c820c13fa559c9f5780ae43ce) | Reason for aborting the opportunity.
`public bool `[`AbortReason_IsSet`](#structFRHAPI__BodyUpdateOpportunityById_1a5b0bdfa2733c34f6cfe6c5e89e5b2791) | true if AbortReason_Optional has been set to a value
`public int32 `[`AbortSeconds_Optional`](#structFRHAPI__BodyUpdateOpportunityById_1af5f563c6a06cb999e1acbec5529c3228) | Number of seconds into the video when the abort happened.
`public bool `[`AbortSeconds_IsSet`](#structFRHAPI__BodyUpdateOpportunityById_1ab6c45e4c41a80c712418dfc4d4bebb16) | true if AbortSeconds_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__BodyUpdateOpportunityById_1a66d757804265fcfbc9c86b0a56fe0189)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BodyUpdateOpportunityById_1aef3837f1b9232a3bdc444951484a96a4)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_OpportunityState & `[`GetState`](#structFRHAPI__BodyUpdateOpportunityById_1a8de0ea080658c3f1b0500e74d46ff88a)`()` | Gets the value of State.
`public inline const ERHAPI_OpportunityState & `[`GetState`](#structFRHAPI__BodyUpdateOpportunityById_1a5ce8f5da8c5f5a5913c84d15b02e78e8)`() const` | Gets the value of State.
`public inline void `[`SetState`](#structFRHAPI__BodyUpdateOpportunityById_1ae2e8a126fde2f650a3cbc94749fbe84e)`(const ERHAPI_OpportunityState & NewValue)` | Sets the value of State.
`public inline void `[`SetState`](#structFRHAPI__BodyUpdateOpportunityById_1a9da7150171308c54fb7d0fd78348dfdd)`(ERHAPI_OpportunityState && NewValue)` | Sets the value of State using move semantics.
`public inline ERHAPI_OpportunityAbortReason & `[`GetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1a35ddba6cfa09314ca5ad65d8b80860c6)`()` | Gets the value of AbortReason_Optional, regardless of it having been set.
`public inline const ERHAPI_OpportunityAbortReason & `[`GetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1ae05309f6a15da094c22bd28ebe1f0ffa)`() const` | Gets the value of AbortReason_Optional, regardless of it having been set.
`public inline const ERHAPI_OpportunityAbortReason & `[`GetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1a08f3ad9fb9e6543ab7a00daf7ef0d432)`(const ERHAPI_OpportunityAbortReason & DefaultValue) const` | Gets the value of AbortReason_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1aa4a6dbeb6533e1c8ba5e7302e95a1588)`(ERHAPI_OpportunityAbortReason & OutValue) const` | Fills OutValue with the value of AbortReason_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_OpportunityAbortReason * `[`GetAbortReasonOrNull`](#structFRHAPI__BodyUpdateOpportunityById_1a5b30200ae487a65a8304fdcd4716587c)`()` | Returns a pointer to AbortReason_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_OpportunityAbortReason * `[`GetAbortReasonOrNull`](#structFRHAPI__BodyUpdateOpportunityById_1a22543c5f52181ace8e83ba1e50c0744a)`() const` | Returns a pointer to AbortReason_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1a0003eaebb82fb020b340cc434c6f61ca)`(const ERHAPI_OpportunityAbortReason & NewValue)` | Sets the value of AbortReason_Optional and also sets AbortReason_IsSet to true.
`public inline void `[`SetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1ae52f06b60781cd26d8f76d78c53c887f)`(ERHAPI_OpportunityAbortReason && NewValue)` | Sets the value of AbortReason_Optional and also sets AbortReason_IsSet to true using move semantics.
`public inline void `[`ClearAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1ae3f0cb05ba5fb7ee72632ff1f8c44efa)`()` | Clears the value of AbortReason_Optional and sets AbortReason_IsSet to false.
`public inline bool `[`IsAbortReasonSet`](#structFRHAPI__BodyUpdateOpportunityById_1af8f0a45700c2ac25d24423ca10f1d096)`() const` | Checks whether AbortReason_Optional has been set.
`public inline int32 & `[`GetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1ade4df84b05a41e53730e38ec57bc3324)`()` | Gets the value of AbortSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1a8a2bf4770554be67faf9eec1247a0c3a)`() const` | Gets the value of AbortSeconds_Optional, regardless of it having been set.
`public inline const int32 & `[`GetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1a62dced431ca409823b8e518dbeda2118)`(const int32 & DefaultValue) const` | Gets the value of AbortSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1a0ea37dd712c4abbb181d2f9fe5ba7eed)`(int32 & OutValue) const` | Fills OutValue with the value of AbortSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetAbortSecondsOrNull`](#structFRHAPI__BodyUpdateOpportunityById_1a9007e3f8f292d855e517a5c4fa6c4698)`()` | Returns a pointer to AbortSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetAbortSecondsOrNull`](#structFRHAPI__BodyUpdateOpportunityById_1af79d0a714a905431fda6d1487190f000)`() const` | Returns a pointer to AbortSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1a7a7605323ddecfa6f873727cfe1c54cb)`(const int32 & NewValue)` | Sets the value of AbortSeconds_Optional and also sets AbortSeconds_IsSet to true.
`public inline void `[`SetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1ac48a89f8f8e3b93e25700b774dfba37d)`(int32 && NewValue)` | Sets the value of AbortSeconds_Optional and also sets AbortSeconds_IsSet to true using move semantics.
`public inline void `[`ClearAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1a9043c9a127601316de50180e50e3ee1c)`()` | Clears the value of AbortSeconds_Optional and sets AbortSeconds_IsSet to false.
`public inline bool `[`IsAbortSecondsSet`](#structFRHAPI__BodyUpdateOpportunityById_1a2631b3681f2f7b28cf24b938f6a82b7d)`() const` | Checks whether AbortSeconds_Optional has been set.
`public inline bool `[`IsAbortSecondsDefaultValue`](#structFRHAPI__BodyUpdateOpportunityById_1a36f8b9127d7f5d7f0d84f54449b27ee5)`() const` | Returns true if AbortSeconds_Optional is set and matches the default value.
`public inline void `[`SetAbortSecondsToDefault`](#structFRHAPI__BodyUpdateOpportunityById_1a8df7404741bbab7707ac20df7fd1d782)`()` | Sets the value of AbortSeconds_Optional to its default and also sets AbortSeconds_IsSet to true.

### Members

#### `public ERHAPI_OpportunityState `[`State`](#structFRHAPI__BodyUpdateOpportunityById_1a34aec65b8dce5bc71caa0e851c6249fa) <a id="structFRHAPI__BodyUpdateOpportunityById_1a34aec65b8dce5bc71caa0e851c6249fa"></a>

State of the opportunity.

#### `public ERHAPI_OpportunityAbortReason `[`AbortReason_Optional`](#structFRHAPI__BodyUpdateOpportunityById_1a9095b50c820c13fa559c9f5780ae43ce) <a id="structFRHAPI__BodyUpdateOpportunityById_1a9095b50c820c13fa559c9f5780ae43ce"></a>

Reason for aborting the opportunity.

#### `public bool `[`AbortReason_IsSet`](#structFRHAPI__BodyUpdateOpportunityById_1a5b0bdfa2733c34f6cfe6c5e89e5b2791) <a id="structFRHAPI__BodyUpdateOpportunityById_1a5b0bdfa2733c34f6cfe6c5e89e5b2791"></a>

true if AbortReason_Optional has been set to a value

#### `public int32 `[`AbortSeconds_Optional`](#structFRHAPI__BodyUpdateOpportunityById_1af5f563c6a06cb999e1acbec5529c3228) <a id="structFRHAPI__BodyUpdateOpportunityById_1af5f563c6a06cb999e1acbec5529c3228"></a>

Number of seconds into the video when the abort happened.

#### `public bool `[`AbortSeconds_IsSet`](#structFRHAPI__BodyUpdateOpportunityById_1ab6c45e4c41a80c712418dfc4d4bebb16) <a id="structFRHAPI__BodyUpdateOpportunityById_1ab6c45e4c41a80c712418dfc4d4bebb16"></a>

true if AbortSeconds_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__BodyUpdateOpportunityById_1a66d757804265fcfbc9c86b0a56fe0189)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BodyUpdateOpportunityById_1a66d757804265fcfbc9c86b0a56fe0189"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BodyUpdateOpportunityById_1aef3837f1b9232a3bdc444951484a96a4)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__BodyUpdateOpportunityById_1aef3837f1b9232a3bdc444951484a96a4"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_OpportunityState & `[`GetState`](#structFRHAPI__BodyUpdateOpportunityById_1a8de0ea080658c3f1b0500e74d46ff88a)`()` <a id="structFRHAPI__BodyUpdateOpportunityById_1a8de0ea080658c3f1b0500e74d46ff88a"></a>

Gets the value of State.

#### `public inline const ERHAPI_OpportunityState & `[`GetState`](#structFRHAPI__BodyUpdateOpportunityById_1a5ce8f5da8c5f5a5913c84d15b02e78e8)`() const` <a id="structFRHAPI__BodyUpdateOpportunityById_1a5ce8f5da8c5f5a5913c84d15b02e78e8"></a>

Gets the value of State.

#### `public inline void `[`SetState`](#structFRHAPI__BodyUpdateOpportunityById_1ae2e8a126fde2f650a3cbc94749fbe84e)`(const ERHAPI_OpportunityState & NewValue)` <a id="structFRHAPI__BodyUpdateOpportunityById_1ae2e8a126fde2f650a3cbc94749fbe84e"></a>

Sets the value of State.

#### `public inline void `[`SetState`](#structFRHAPI__BodyUpdateOpportunityById_1a9da7150171308c54fb7d0fd78348dfdd)`(ERHAPI_OpportunityState && NewValue)` <a id="structFRHAPI__BodyUpdateOpportunityById_1a9da7150171308c54fb7d0fd78348dfdd"></a>

Sets the value of State using move semantics.

#### `public inline ERHAPI_OpportunityAbortReason & `[`GetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1a35ddba6cfa09314ca5ad65d8b80860c6)`()` <a id="structFRHAPI__BodyUpdateOpportunityById_1a35ddba6cfa09314ca5ad65d8b80860c6"></a>

Gets the value of AbortReason_Optional, regardless of it having been set.

#### `public inline const ERHAPI_OpportunityAbortReason & `[`GetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1ae05309f6a15da094c22bd28ebe1f0ffa)`() const` <a id="structFRHAPI__BodyUpdateOpportunityById_1ae05309f6a15da094c22bd28ebe1f0ffa"></a>

Gets the value of AbortReason_Optional, regardless of it having been set.

#### `public inline const ERHAPI_OpportunityAbortReason & `[`GetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1a08f3ad9fb9e6543ab7a00daf7ef0d432)`(const ERHAPI_OpportunityAbortReason & DefaultValue) const` <a id="structFRHAPI__BodyUpdateOpportunityById_1a08f3ad9fb9e6543ab7a00daf7ef0d432"></a>

Gets the value of AbortReason_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1aa4a6dbeb6533e1c8ba5e7302e95a1588)`(ERHAPI_OpportunityAbortReason & OutValue) const` <a id="structFRHAPI__BodyUpdateOpportunityById_1aa4a6dbeb6533e1c8ba5e7302e95a1588"></a>

Fills OutValue with the value of AbortReason_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_OpportunityAbortReason * `[`GetAbortReasonOrNull`](#structFRHAPI__BodyUpdateOpportunityById_1a5b30200ae487a65a8304fdcd4716587c)`()` <a id="structFRHAPI__BodyUpdateOpportunityById_1a5b30200ae487a65a8304fdcd4716587c"></a>

Returns a pointer to AbortReason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_OpportunityAbortReason * `[`GetAbortReasonOrNull`](#structFRHAPI__BodyUpdateOpportunityById_1a22543c5f52181ace8e83ba1e50c0744a)`() const` <a id="structFRHAPI__BodyUpdateOpportunityById_1a22543c5f52181ace8e83ba1e50c0744a"></a>

Returns a pointer to AbortReason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1a0003eaebb82fb020b340cc434c6f61ca)`(const ERHAPI_OpportunityAbortReason & NewValue)` <a id="structFRHAPI__BodyUpdateOpportunityById_1a0003eaebb82fb020b340cc434c6f61ca"></a>

Sets the value of AbortReason_Optional and also sets AbortReason_IsSet to true.

#### `public inline void `[`SetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1ae52f06b60781cd26d8f76d78c53c887f)`(ERHAPI_OpportunityAbortReason && NewValue)` <a id="structFRHAPI__BodyUpdateOpportunityById_1ae52f06b60781cd26d8f76d78c53c887f"></a>

Sets the value of AbortReason_Optional and also sets AbortReason_IsSet to true using move semantics.

#### `public inline void `[`ClearAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1ae3f0cb05ba5fb7ee72632ff1f8c44efa)`()` <a id="structFRHAPI__BodyUpdateOpportunityById_1ae3f0cb05ba5fb7ee72632ff1f8c44efa"></a>

Clears the value of AbortReason_Optional and sets AbortReason_IsSet to false.

#### `public inline bool `[`IsAbortReasonSet`](#structFRHAPI__BodyUpdateOpportunityById_1af8f0a45700c2ac25d24423ca10f1d096)`() const` <a id="structFRHAPI__BodyUpdateOpportunityById_1af8f0a45700c2ac25d24423ca10f1d096"></a>

Checks whether AbortReason_Optional has been set.

#### `public inline int32 & `[`GetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1ade4df84b05a41e53730e38ec57bc3324)`()` <a id="structFRHAPI__BodyUpdateOpportunityById_1ade4df84b05a41e53730e38ec57bc3324"></a>

Gets the value of AbortSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1a8a2bf4770554be67faf9eec1247a0c3a)`() const` <a id="structFRHAPI__BodyUpdateOpportunityById_1a8a2bf4770554be67faf9eec1247a0c3a"></a>

Gets the value of AbortSeconds_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1a62dced431ca409823b8e518dbeda2118)`(const int32 & DefaultValue) const` <a id="structFRHAPI__BodyUpdateOpportunityById_1a62dced431ca409823b8e518dbeda2118"></a>

Gets the value of AbortSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1a0ea37dd712c4abbb181d2f9fe5ba7eed)`(int32 & OutValue) const` <a id="structFRHAPI__BodyUpdateOpportunityById_1a0ea37dd712c4abbb181d2f9fe5ba7eed"></a>

Fills OutValue with the value of AbortSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetAbortSecondsOrNull`](#structFRHAPI__BodyUpdateOpportunityById_1a9007e3f8f292d855e517a5c4fa6c4698)`()` <a id="structFRHAPI__BodyUpdateOpportunityById_1a9007e3f8f292d855e517a5c4fa6c4698"></a>

Returns a pointer to AbortSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetAbortSecondsOrNull`](#structFRHAPI__BodyUpdateOpportunityById_1af79d0a714a905431fda6d1487190f000)`() const` <a id="structFRHAPI__BodyUpdateOpportunityById_1af79d0a714a905431fda6d1487190f000"></a>

Returns a pointer to AbortSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1a7a7605323ddecfa6f873727cfe1c54cb)`(const int32 & NewValue)` <a id="structFRHAPI__BodyUpdateOpportunityById_1a7a7605323ddecfa6f873727cfe1c54cb"></a>

Sets the value of AbortSeconds_Optional and also sets AbortSeconds_IsSet to true.

#### `public inline void `[`SetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1ac48a89f8f8e3b93e25700b774dfba37d)`(int32 && NewValue)` <a id="structFRHAPI__BodyUpdateOpportunityById_1ac48a89f8f8e3b93e25700b774dfba37d"></a>

Sets the value of AbortSeconds_Optional and also sets AbortSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1a9043c9a127601316de50180e50e3ee1c)`()` <a id="structFRHAPI__BodyUpdateOpportunityById_1a9043c9a127601316de50180e50e3ee1c"></a>

Clears the value of AbortSeconds_Optional and sets AbortSeconds_IsSet to false.

#### `public inline bool `[`IsAbortSecondsSet`](#structFRHAPI__BodyUpdateOpportunityById_1a2631b3681f2f7b28cf24b938f6a82b7d)`() const` <a id="structFRHAPI__BodyUpdateOpportunityById_1a2631b3681f2f7b28cf24b938f6a82b7d"></a>

Checks whether AbortSeconds_Optional has been set.

#### `public inline bool `[`IsAbortSecondsDefaultValue`](#structFRHAPI__BodyUpdateOpportunityById_1a36f8b9127d7f5d7f0d84f54449b27ee5)`() const` <a id="structFRHAPI__BodyUpdateOpportunityById_1a36f8b9127d7f5d7f0d84f54449b27ee5"></a>

Returns true if AbortSeconds_Optional is set and matches the default value.

#### `public inline void `[`SetAbortSecondsToDefault`](#structFRHAPI__BodyUpdateOpportunityById_1a8df7404741bbab7707ac20df7fd1d782)`()` <a id="structFRHAPI__BodyUpdateOpportunityById_1a8df7404741bbab7707ac20df7fd1d782"></a>

Sets the value of AbortSeconds_Optional to its default and also sets AbortSeconds_IsSet to true.
