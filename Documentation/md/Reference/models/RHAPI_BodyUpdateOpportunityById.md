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
`public virtual void `[`WriteJson`](#structFRHAPI__BodyUpdateOpportunityById_1aa03d03cfdb15672f83132a32d77704bd)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_OpportunityState & `[`GetState`](#structFRHAPI__BodyUpdateOpportunityById_1adac800bf02b9f1232278597b5cb6758b)`()` | Gets the value of State.
`public inline FORCEINLINE const ERHAPI_OpportunityState & `[`GetState`](#structFRHAPI__BodyUpdateOpportunityById_1a2f6a74d6c78d13a9c3fb32c8fa1d4b1e)`() const` | Gets the value of State.
`public inline FORCEINLINE void `[`SetState`](#structFRHAPI__BodyUpdateOpportunityById_1a56880bc7544e7dd78f788a596308d0ae)`(const ERHAPI_OpportunityState & NewValue)` | Sets the value of State.
`public inline FORCEINLINE void `[`SetState`](#structFRHAPI__BodyUpdateOpportunityById_1a0a5e24beec80b457b59cae28a2971205)`(ERHAPI_OpportunityState && NewValue)` | Sets the value of State using move semantics.
`public inline FORCEINLINE ERHAPI_OpportunityAbortReason & `[`GetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1a4e7bb4fc403af7e6fb6738c0783671f7)`()` | Gets the value of AbortReason_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_OpportunityAbortReason & `[`GetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1acead297ef96d77f0eec63c34ad32f714)`() const` | Gets the value of AbortReason_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_OpportunityAbortReason & `[`GetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1af8ab19045462cd9b661a146570000815)`(const ERHAPI_OpportunityAbortReason & DefaultValue) const` | Gets the value of AbortReason_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1a56bbaa2276627bed11d9edae20756e0e)`(ERHAPI_OpportunityAbortReason & OutValue) const` | Fills OutValue with the value of AbortReason_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_OpportunityAbortReason * `[`GetAbortReasonOrNull`](#structFRHAPI__BodyUpdateOpportunityById_1af0f9821e2f5ca11d5717a900e73bb73e)`()` | Returns a pointer to AbortReason_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_OpportunityAbortReason * `[`GetAbortReasonOrNull`](#structFRHAPI__BodyUpdateOpportunityById_1a737fea5afc580a2de5c4d44d50f853f6)`() const` | Returns a pointer to AbortReason_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1a1cfa18735d6877e702357fde3db7f352)`(const ERHAPI_OpportunityAbortReason & NewValue)` | Sets the value of AbortReason_Optional and also sets AbortReason_IsSet to true.
`public inline FORCEINLINE void `[`SetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1a59df9ee46d6cf69007e3badc3c0eafcb)`(ERHAPI_OpportunityAbortReason && NewValue)` | Sets the value of AbortReason_Optional and also sets AbortReason_IsSet to true using move semantics.
`public inline void `[`ClearAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1ae3f0cb05ba5fb7ee72632ff1f8c44efa)`()` | Clears the value of AbortReason_Optional and sets AbortReason_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1a2611e3413ecffeeccee5f2c927a454ae)`()` | Gets the value of AbortSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1aa5b55f0534b660d78a4bc521ad632193)`() const` | Gets the value of AbortSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1ad1f721efc5a57b521c8d1e4b4dfaa8e7)`(const int32 & DefaultValue) const` | Gets the value of AbortSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1a1c14481a0678e8f31e01a5fd82564539)`(int32 & OutValue) const` | Fills OutValue with the value of AbortSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetAbortSecondsOrNull`](#structFRHAPI__BodyUpdateOpportunityById_1a8e65e90ba06327b29ecffb81f055d09c)`()` | Returns a pointer to AbortSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetAbortSecondsOrNull`](#structFRHAPI__BodyUpdateOpportunityById_1a6c7bc7878b4170321fec681ba51740b2)`() const` | Returns a pointer to AbortSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1a0cd4b6a2a8ec18fd5565e7037614f848)`(const int32 & NewValue)` | Sets the value of AbortSeconds_Optional and also sets AbortSeconds_IsSet to true.
`public inline FORCEINLINE void `[`SetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1adab107c830fccce3aa552653f72a1521)`(int32 && NewValue)` | Sets the value of AbortSeconds_Optional and also sets AbortSeconds_IsSet to true using move semantics.
`public inline void `[`ClearAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1a9043c9a127601316de50180e50e3ee1c)`()` | Clears the value of AbortSeconds_Optional and sets AbortSeconds_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_AbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1aac94d0fb2f97bbe09d41b579815598fb)`()` | Returns the default value of AbortSeconds.

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

#### `public virtual void `[`WriteJson`](#structFRHAPI__BodyUpdateOpportunityById_1aa03d03cfdb15672f83132a32d77704bd)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__BodyUpdateOpportunityById_1aa03d03cfdb15672f83132a32d77704bd"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_OpportunityState & `[`GetState`](#structFRHAPI__BodyUpdateOpportunityById_1adac800bf02b9f1232278597b5cb6758b)`()` <a id="structFRHAPI__BodyUpdateOpportunityById_1adac800bf02b9f1232278597b5cb6758b"></a>

Gets the value of State.

#### `public inline FORCEINLINE const ERHAPI_OpportunityState & `[`GetState`](#structFRHAPI__BodyUpdateOpportunityById_1a2f6a74d6c78d13a9c3fb32c8fa1d4b1e)`() const` <a id="structFRHAPI__BodyUpdateOpportunityById_1a2f6a74d6c78d13a9c3fb32c8fa1d4b1e"></a>

Gets the value of State.

#### `public inline FORCEINLINE void `[`SetState`](#structFRHAPI__BodyUpdateOpportunityById_1a56880bc7544e7dd78f788a596308d0ae)`(const ERHAPI_OpportunityState & NewValue)` <a id="structFRHAPI__BodyUpdateOpportunityById_1a56880bc7544e7dd78f788a596308d0ae"></a>

Sets the value of State.

#### `public inline FORCEINLINE void `[`SetState`](#structFRHAPI__BodyUpdateOpportunityById_1a0a5e24beec80b457b59cae28a2971205)`(ERHAPI_OpportunityState && NewValue)` <a id="structFRHAPI__BodyUpdateOpportunityById_1a0a5e24beec80b457b59cae28a2971205"></a>

Sets the value of State using move semantics.

#### `public inline FORCEINLINE ERHAPI_OpportunityAbortReason & `[`GetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1a4e7bb4fc403af7e6fb6738c0783671f7)`()` <a id="structFRHAPI__BodyUpdateOpportunityById_1a4e7bb4fc403af7e6fb6738c0783671f7"></a>

Gets the value of AbortReason_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_OpportunityAbortReason & `[`GetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1acead297ef96d77f0eec63c34ad32f714)`() const` <a id="structFRHAPI__BodyUpdateOpportunityById_1acead297ef96d77f0eec63c34ad32f714"></a>

Gets the value of AbortReason_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_OpportunityAbortReason & `[`GetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1af8ab19045462cd9b661a146570000815)`(const ERHAPI_OpportunityAbortReason & DefaultValue) const` <a id="structFRHAPI__BodyUpdateOpportunityById_1af8ab19045462cd9b661a146570000815"></a>

Gets the value of AbortReason_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1a56bbaa2276627bed11d9edae20756e0e)`(ERHAPI_OpportunityAbortReason & OutValue) const` <a id="structFRHAPI__BodyUpdateOpportunityById_1a56bbaa2276627bed11d9edae20756e0e"></a>

Fills OutValue with the value of AbortReason_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_OpportunityAbortReason * `[`GetAbortReasonOrNull`](#structFRHAPI__BodyUpdateOpportunityById_1af0f9821e2f5ca11d5717a900e73bb73e)`()` <a id="structFRHAPI__BodyUpdateOpportunityById_1af0f9821e2f5ca11d5717a900e73bb73e"></a>

Returns a pointer to AbortReason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_OpportunityAbortReason * `[`GetAbortReasonOrNull`](#structFRHAPI__BodyUpdateOpportunityById_1a737fea5afc580a2de5c4d44d50f853f6)`() const` <a id="structFRHAPI__BodyUpdateOpportunityById_1a737fea5afc580a2de5c4d44d50f853f6"></a>

Returns a pointer to AbortReason_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1a1cfa18735d6877e702357fde3db7f352)`(const ERHAPI_OpportunityAbortReason & NewValue)` <a id="structFRHAPI__BodyUpdateOpportunityById_1a1cfa18735d6877e702357fde3db7f352"></a>

Sets the value of AbortReason_Optional and also sets AbortReason_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1a59df9ee46d6cf69007e3badc3c0eafcb)`(ERHAPI_OpportunityAbortReason && NewValue)` <a id="structFRHAPI__BodyUpdateOpportunityById_1a59df9ee46d6cf69007e3badc3c0eafcb"></a>

Sets the value of AbortReason_Optional and also sets AbortReason_IsSet to true using move semantics.

#### `public inline void `[`ClearAbortReason`](#structFRHAPI__BodyUpdateOpportunityById_1ae3f0cb05ba5fb7ee72632ff1f8c44efa)`()` <a id="structFRHAPI__BodyUpdateOpportunityById_1ae3f0cb05ba5fb7ee72632ff1f8c44efa"></a>

Clears the value of AbortReason_Optional and sets AbortReason_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1a2611e3413ecffeeccee5f2c927a454ae)`()` <a id="structFRHAPI__BodyUpdateOpportunityById_1a2611e3413ecffeeccee5f2c927a454ae"></a>

Gets the value of AbortSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1aa5b55f0534b660d78a4bc521ad632193)`() const` <a id="structFRHAPI__BodyUpdateOpportunityById_1aa5b55f0534b660d78a4bc521ad632193"></a>

Gets the value of AbortSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1ad1f721efc5a57b521c8d1e4b4dfaa8e7)`(const int32 & DefaultValue) const` <a id="structFRHAPI__BodyUpdateOpportunityById_1ad1f721efc5a57b521c8d1e4b4dfaa8e7"></a>

Gets the value of AbortSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1a1c14481a0678e8f31e01a5fd82564539)`(int32 & OutValue) const` <a id="structFRHAPI__BodyUpdateOpportunityById_1a1c14481a0678e8f31e01a5fd82564539"></a>

Fills OutValue with the value of AbortSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetAbortSecondsOrNull`](#structFRHAPI__BodyUpdateOpportunityById_1a8e65e90ba06327b29ecffb81f055d09c)`()` <a id="structFRHAPI__BodyUpdateOpportunityById_1a8e65e90ba06327b29ecffb81f055d09c"></a>

Returns a pointer to AbortSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetAbortSecondsOrNull`](#structFRHAPI__BodyUpdateOpportunityById_1a6c7bc7878b4170321fec681ba51740b2)`() const` <a id="structFRHAPI__BodyUpdateOpportunityById_1a6c7bc7878b4170321fec681ba51740b2"></a>

Returns a pointer to AbortSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1a0cd4b6a2a8ec18fd5565e7037614f848)`(const int32 & NewValue)` <a id="structFRHAPI__BodyUpdateOpportunityById_1a0cd4b6a2a8ec18fd5565e7037614f848"></a>

Sets the value of AbortSeconds_Optional and also sets AbortSeconds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1adab107c830fccce3aa552653f72a1521)`(int32 && NewValue)` <a id="structFRHAPI__BodyUpdateOpportunityById_1adab107c830fccce3aa552653f72a1521"></a>

Sets the value of AbortSeconds_Optional and also sets AbortSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearAbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1a9043c9a127601316de50180e50e3ee1c)`()` <a id="structFRHAPI__BodyUpdateOpportunityById_1a9043c9a127601316de50180e50e3ee1c"></a>

Clears the value of AbortSeconds_Optional and sets AbortSeconds_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_AbortSeconds`](#structFRHAPI__BodyUpdateOpportunityById_1aac94d0fb2f97bbe09d41b579815598fb)`()` <a id="structFRHAPI__BodyUpdateOpportunityById_1aac94d0fb2f97bbe09d41b579815598fb"></a>

Returns the default value of AbortSeconds.

