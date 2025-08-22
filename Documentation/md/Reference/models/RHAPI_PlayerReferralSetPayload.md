---
title: RHAPI_PlayerReferralSetPayload
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerReferralSetPayload`](#structFRHAPI__PlayerReferralSetPayload) | Represents a payload for setting a player&#39;s referrer.

## struct `FRHAPI_PlayerReferralSetPayload` <a id="structFRHAPI__PlayerReferralSetPayload"></a>

```
struct FRHAPI_PlayerReferralSetPayload
  : public FRHAPI_Model
```

Represents a payload for setting a player&#39;s referrer.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FGuid `[`ReferrerPlayerUuid_Optional`](#structFRHAPI__PlayerReferralSetPayload_1a60f2cb7bb8a4c2d86d5673e9dce517f3) | 
`public bool `[`ReferrerPlayerUuid_IsSet`](#structFRHAPI__PlayerReferralSetPayload_1ac418e3153661ae648242a03058f88651) | true if ReferrerPlayerUuid_Optional has been set to a value
`public FString `[`ReferralCode_Optional`](#structFRHAPI__PlayerReferralSetPayload_1a38d8b5cf595a1bc9168fb02ad1cf7490) | 
`public bool `[`ReferralCode_IsSet`](#structFRHAPI__PlayerReferralSetPayload_1a0b56dd009b445b00df756595bd207422) | true if ReferralCode_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerReferralSetPayload_1a5c313fe9a28fab5e108efef8045867f7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerReferralSetPayload_1a499a96a5267ad8cbc416efba59a84080)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FGuid & `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1a9762d55c622b033016fd14c8850a105d)`()` | Gets the value of ReferrerPlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1aaf3ad4e63ebf778e655170a6386a4148)`() const` | Gets the value of ReferrerPlayerUuid_Optional, regardless of it having been set.
`public inline FORCEINLINE const FGuid & `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1aecb79d79928e6ae0e66d97e15c6398a6)`(const FGuid & DefaultValue) const` | Gets the value of ReferrerPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1ae0278e050500f518b71a40645194361f)`(FGuid & OutValue) const` | Fills OutValue with the value of ReferrerPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FGuid * `[`GetReferrerPlayerUuidOrNull`](#structFRHAPI__PlayerReferralSetPayload_1aaabd02c3ec857fa7881ae7d67de05e62)`()` | Returns a pointer to ReferrerPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FGuid * `[`GetReferrerPlayerUuidOrNull`](#structFRHAPI__PlayerReferralSetPayload_1a87147368fa5fc6a2855aad3bf3e30e0c)`() const` | Returns a pointer to ReferrerPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1aa6750b546509c54aa395407121bf3d9a)`(const FGuid & NewValue)` | Sets the value of ReferrerPlayerUuid_Optional and also sets ReferrerPlayerUuid_IsSet to true.
`public inline FORCEINLINE void `[`SetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1a75f28f5602c2514ffc55a431cb706db6)`(FGuid && NewValue)` | Sets the value of ReferrerPlayerUuid_Optional and also sets ReferrerPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1a05e7b44a0c4e008dc7344eb3050a05f7)`()` | Clears the value of ReferrerPlayerUuid_Optional and sets ReferrerPlayerUuid_IsSet to false.
`public inline FORCEINLINE FString & `[`GetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1a32069839067ad79477c63b18a5dcacd7)`()` | Gets the value of ReferralCode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1afc66887bbf7aa66f1ce1fbd0ae9167af)`() const` | Gets the value of ReferralCode_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1a38ab887103afe528754df7de12a5ca3e)`(const FString & DefaultValue) const` | Gets the value of ReferralCode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1a3e8ccbf96b2e651b47155e1e91f53c1c)`(FString & OutValue) const` | Fills OutValue with the value of ReferralCode_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetReferralCodeOrNull`](#structFRHAPI__PlayerReferralSetPayload_1afb1e62a0dbb4ca8022ae50a89fe01328)`()` | Returns a pointer to ReferralCode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetReferralCodeOrNull`](#structFRHAPI__PlayerReferralSetPayload_1a7a8f0dae15e036601b2a9d2baaf33dfb)`() const` | Returns a pointer to ReferralCode_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1a13a0aae4a18a4a94227dadacb8ac9ad6)`(const FString & NewValue)` | Sets the value of ReferralCode_Optional and also sets ReferralCode_IsSet to true.
`public inline FORCEINLINE void `[`SetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1ac20808f767ec724238fe42cd47ea8188)`(FString && NewValue)` | Sets the value of ReferralCode_Optional and also sets ReferralCode_IsSet to true using move semantics.
`public inline void `[`ClearReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1ac3be6c5fe62a93c64eca0b05e9be6029)`()` | Clears the value of ReferralCode_Optional and sets ReferralCode_IsSet to false.

### Members

#### `public FGuid `[`ReferrerPlayerUuid_Optional`](#structFRHAPI__PlayerReferralSetPayload_1a60f2cb7bb8a4c2d86d5673e9dce517f3) <a id="structFRHAPI__PlayerReferralSetPayload_1a60f2cb7bb8a4c2d86d5673e9dce517f3"></a>

#### `public bool `[`ReferrerPlayerUuid_IsSet`](#structFRHAPI__PlayerReferralSetPayload_1ac418e3153661ae648242a03058f88651) <a id="structFRHAPI__PlayerReferralSetPayload_1ac418e3153661ae648242a03058f88651"></a>

true if ReferrerPlayerUuid_Optional has been set to a value

#### `public FString `[`ReferralCode_Optional`](#structFRHAPI__PlayerReferralSetPayload_1a38d8b5cf595a1bc9168fb02ad1cf7490) <a id="structFRHAPI__PlayerReferralSetPayload_1a38d8b5cf595a1bc9168fb02ad1cf7490"></a>

#### `public bool `[`ReferralCode_IsSet`](#structFRHAPI__PlayerReferralSetPayload_1a0b56dd009b445b00df756595bd207422) <a id="structFRHAPI__PlayerReferralSetPayload_1a0b56dd009b445b00df756595bd207422"></a>

true if ReferralCode_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerReferralSetPayload_1a5c313fe9a28fab5e108efef8045867f7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerReferralSetPayload_1a5c313fe9a28fab5e108efef8045867f7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerReferralSetPayload_1a499a96a5267ad8cbc416efba59a84080)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerReferralSetPayload_1a499a96a5267ad8cbc416efba59a84080"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FGuid & `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1a9762d55c622b033016fd14c8850a105d)`()` <a id="structFRHAPI__PlayerReferralSetPayload_1a9762d55c622b033016fd14c8850a105d"></a>

Gets the value of ReferrerPlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1aaf3ad4e63ebf778e655170a6386a4148)`() const` <a id="structFRHAPI__PlayerReferralSetPayload_1aaf3ad4e63ebf778e655170a6386a4148"></a>

Gets the value of ReferrerPlayerUuid_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FGuid & `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1aecb79d79928e6ae0e66d97e15c6398a6)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerReferralSetPayload_1aecb79d79928e6ae0e66d97e15c6398a6"></a>

Gets the value of ReferrerPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1ae0278e050500f518b71a40645194361f)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerReferralSetPayload_1ae0278e050500f518b71a40645194361f"></a>

Fills OutValue with the value of ReferrerPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FGuid * `[`GetReferrerPlayerUuidOrNull`](#structFRHAPI__PlayerReferralSetPayload_1aaabd02c3ec857fa7881ae7d67de05e62)`()` <a id="structFRHAPI__PlayerReferralSetPayload_1aaabd02c3ec857fa7881ae7d67de05e62"></a>

Returns a pointer to ReferrerPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FGuid * `[`GetReferrerPlayerUuidOrNull`](#structFRHAPI__PlayerReferralSetPayload_1a87147368fa5fc6a2855aad3bf3e30e0c)`() const` <a id="structFRHAPI__PlayerReferralSetPayload_1a87147368fa5fc6a2855aad3bf3e30e0c"></a>

Returns a pointer to ReferrerPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1aa6750b546509c54aa395407121bf3d9a)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerReferralSetPayload_1aa6750b546509c54aa395407121bf3d9a"></a>

Sets the value of ReferrerPlayerUuid_Optional and also sets ReferrerPlayerUuid_IsSet to true.

#### `public inline FORCEINLINE void `[`SetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1a75f28f5602c2514ffc55a431cb706db6)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerReferralSetPayload_1a75f28f5602c2514ffc55a431cb706db6"></a>

Sets the value of ReferrerPlayerUuid_Optional and also sets ReferrerPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1a05e7b44a0c4e008dc7344eb3050a05f7)`()` <a id="structFRHAPI__PlayerReferralSetPayload_1a05e7b44a0c4e008dc7344eb3050a05f7"></a>

Clears the value of ReferrerPlayerUuid_Optional and sets ReferrerPlayerUuid_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1a32069839067ad79477c63b18a5dcacd7)`()` <a id="structFRHAPI__PlayerReferralSetPayload_1a32069839067ad79477c63b18a5dcacd7"></a>

Gets the value of ReferralCode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1afc66887bbf7aa66f1ce1fbd0ae9167af)`() const` <a id="structFRHAPI__PlayerReferralSetPayload_1afc66887bbf7aa66f1ce1fbd0ae9167af"></a>

Gets the value of ReferralCode_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1a38ab887103afe528754df7de12a5ca3e)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReferralSetPayload_1a38ab887103afe528754df7de12a5ca3e"></a>

Gets the value of ReferralCode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1a3e8ccbf96b2e651b47155e1e91f53c1c)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReferralSetPayload_1a3e8ccbf96b2e651b47155e1e91f53c1c"></a>

Fills OutValue with the value of ReferralCode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetReferralCodeOrNull`](#structFRHAPI__PlayerReferralSetPayload_1afb1e62a0dbb4ca8022ae50a89fe01328)`()` <a id="structFRHAPI__PlayerReferralSetPayload_1afb1e62a0dbb4ca8022ae50a89fe01328"></a>

Returns a pointer to ReferralCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetReferralCodeOrNull`](#structFRHAPI__PlayerReferralSetPayload_1a7a8f0dae15e036601b2a9d2baaf33dfb)`() const` <a id="structFRHAPI__PlayerReferralSetPayload_1a7a8f0dae15e036601b2a9d2baaf33dfb"></a>

Returns a pointer to ReferralCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1a13a0aae4a18a4a94227dadacb8ac9ad6)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReferralSetPayload_1a13a0aae4a18a4a94227dadacb8ac9ad6"></a>

Sets the value of ReferralCode_Optional and also sets ReferralCode_IsSet to true.

#### `public inline FORCEINLINE void `[`SetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1ac20808f767ec724238fe42cd47ea8188)`(FString && NewValue)` <a id="structFRHAPI__PlayerReferralSetPayload_1ac20808f767ec724238fe42cd47ea8188"></a>

Sets the value of ReferralCode_Optional and also sets ReferralCode_IsSet to true using move semantics.

#### `public inline void `[`ClearReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1ac3be6c5fe62a93c64eca0b05e9be6029)`()` <a id="structFRHAPI__PlayerReferralSetPayload_1ac3be6c5fe62a93c64eca0b05e9be6029"></a>

Clears the value of ReferralCode_Optional and sets ReferralCode_IsSet to false.

