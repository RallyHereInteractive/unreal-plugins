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
`public inline FGuid & `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1a1ff3ce792c7ae11e7ed1516ec0065023)`()` | Gets the value of ReferrerPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1a333d0be74010c975a67b5627663bec4f)`() const` | Gets the value of ReferrerPlayerUuid_Optional, regardless of it having been set.
`public inline const FGuid & `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1a7ebb8ccfe38f2d9466bde74667bfb463)`(const FGuid & DefaultValue) const` | Gets the value of ReferrerPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1a471dd343f15076a6f65888134dcaf8b2)`(FGuid & OutValue) const` | Fills OutValue with the value of ReferrerPlayerUuid_Optional and returns true if it has been set, otherwise returns false.
`public inline FGuid * `[`GetReferrerPlayerUuidOrNull`](#structFRHAPI__PlayerReferralSetPayload_1a71577c69c2c4203f32b6f813957f3891)`()` | Returns a pointer to ReferrerPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline const FGuid * `[`GetReferrerPlayerUuidOrNull`](#structFRHAPI__PlayerReferralSetPayload_1a5acd9334ddc143db0f0b74bf2c073c44)`() const` | Returns a pointer to ReferrerPlayerUuid_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1ad0cda78ca21403648653a7a427840ceb)`(const FGuid & NewValue)` | Sets the value of ReferrerPlayerUuid_Optional and also sets ReferrerPlayerUuid_IsSet to true.
`public inline void `[`SetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1a60cb8737b3321de6dea7ecc754505d03)`(FGuid && NewValue)` | Sets the value of ReferrerPlayerUuid_Optional and also sets ReferrerPlayerUuid_IsSet to true using move semantics.
`public inline void `[`ClearReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1a05e7b44a0c4e008dc7344eb3050a05f7)`()` | Clears the value of ReferrerPlayerUuid_Optional and sets ReferrerPlayerUuid_IsSet to false.
`public inline bool `[`IsReferrerPlayerUuidSet`](#structFRHAPI__PlayerReferralSetPayload_1afd02de8aeac9cc4205b45417bd3f9c02)`() const` | Checks whether ReferrerPlayerUuid_Optional has been set.
`public inline FString & `[`GetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1a80ca60f9f74e49f1964c2bbbd0a6f427)`()` | Gets the value of ReferralCode_Optional, regardless of it having been set.
`public inline const FString & `[`GetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1ae7abe051c5e426d646acde2bc3fce173)`() const` | Gets the value of ReferralCode_Optional, regardless of it having been set.
`public inline const FString & `[`GetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1add85773ccae041aee1bb24654f16c79b)`(const FString & DefaultValue) const` | Gets the value of ReferralCode_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1a7c44d103589f6a71ed7b46b841d2189d)`(FString & OutValue) const` | Fills OutValue with the value of ReferralCode_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetReferralCodeOrNull`](#structFRHAPI__PlayerReferralSetPayload_1ae778e64237ff53e525c889262ce844aa)`()` | Returns a pointer to ReferralCode_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetReferralCodeOrNull`](#structFRHAPI__PlayerReferralSetPayload_1acfab246667f32c26d195371845575c04)`() const` | Returns a pointer to ReferralCode_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1ab1e692c716a41e28afd6c6f70901a14a)`(const FString & NewValue)` | Sets the value of ReferralCode_Optional and also sets ReferralCode_IsSet to true.
`public inline void `[`SetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1a5551a09fb9930caf6af263da3ff95534)`(FString && NewValue)` | Sets the value of ReferralCode_Optional and also sets ReferralCode_IsSet to true using move semantics.
`public inline void `[`ClearReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1ac3be6c5fe62a93c64eca0b05e9be6029)`()` | Clears the value of ReferralCode_Optional and sets ReferralCode_IsSet to false.
`public inline bool `[`IsReferralCodeSet`](#structFRHAPI__PlayerReferralSetPayload_1a1ba146184f7b82062bf3f32e15428096)`() const` | Checks whether ReferralCode_Optional has been set.

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

#### `public inline FGuid & `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1a1ff3ce792c7ae11e7ed1516ec0065023)`()` <a id="structFRHAPI__PlayerReferralSetPayload_1a1ff3ce792c7ae11e7ed1516ec0065023"></a>

Gets the value of ReferrerPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1a333d0be74010c975a67b5627663bec4f)`() const` <a id="structFRHAPI__PlayerReferralSetPayload_1a333d0be74010c975a67b5627663bec4f"></a>

Gets the value of ReferrerPlayerUuid_Optional, regardless of it having been set.

#### `public inline const FGuid & `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1a7ebb8ccfe38f2d9466bde74667bfb463)`(const FGuid & DefaultValue) const` <a id="structFRHAPI__PlayerReferralSetPayload_1a7ebb8ccfe38f2d9466bde74667bfb463"></a>

Gets the value of ReferrerPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1a471dd343f15076a6f65888134dcaf8b2)`(FGuid & OutValue) const` <a id="structFRHAPI__PlayerReferralSetPayload_1a471dd343f15076a6f65888134dcaf8b2"></a>

Fills OutValue with the value of ReferrerPlayerUuid_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FGuid * `[`GetReferrerPlayerUuidOrNull`](#structFRHAPI__PlayerReferralSetPayload_1a71577c69c2c4203f32b6f813957f3891)`()` <a id="structFRHAPI__PlayerReferralSetPayload_1a71577c69c2c4203f32b6f813957f3891"></a>

Returns a pointer to ReferrerPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FGuid * `[`GetReferrerPlayerUuidOrNull`](#structFRHAPI__PlayerReferralSetPayload_1a5acd9334ddc143db0f0b74bf2c073c44)`() const` <a id="structFRHAPI__PlayerReferralSetPayload_1a5acd9334ddc143db0f0b74bf2c073c44"></a>

Returns a pointer to ReferrerPlayerUuid_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1ad0cda78ca21403648653a7a427840ceb)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerReferralSetPayload_1ad0cda78ca21403648653a7a427840ceb"></a>

Sets the value of ReferrerPlayerUuid_Optional and also sets ReferrerPlayerUuid_IsSet to true.

#### `public inline void `[`SetReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1a60cb8737b3321de6dea7ecc754505d03)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerReferralSetPayload_1a60cb8737b3321de6dea7ecc754505d03"></a>

Sets the value of ReferrerPlayerUuid_Optional and also sets ReferrerPlayerUuid_IsSet to true using move semantics.

#### `public inline void `[`ClearReferrerPlayerUuid`](#structFRHAPI__PlayerReferralSetPayload_1a05e7b44a0c4e008dc7344eb3050a05f7)`()` <a id="structFRHAPI__PlayerReferralSetPayload_1a05e7b44a0c4e008dc7344eb3050a05f7"></a>

Clears the value of ReferrerPlayerUuid_Optional and sets ReferrerPlayerUuid_IsSet to false.

#### `public inline bool `[`IsReferrerPlayerUuidSet`](#structFRHAPI__PlayerReferralSetPayload_1afd02de8aeac9cc4205b45417bd3f9c02)`() const` <a id="structFRHAPI__PlayerReferralSetPayload_1afd02de8aeac9cc4205b45417bd3f9c02"></a>

Checks whether ReferrerPlayerUuid_Optional has been set.

#### `public inline FString & `[`GetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1a80ca60f9f74e49f1964c2bbbd0a6f427)`()` <a id="structFRHAPI__PlayerReferralSetPayload_1a80ca60f9f74e49f1964c2bbbd0a6f427"></a>

Gets the value of ReferralCode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1ae7abe051c5e426d646acde2bc3fce173)`() const` <a id="structFRHAPI__PlayerReferralSetPayload_1ae7abe051c5e426d646acde2bc3fce173"></a>

Gets the value of ReferralCode_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1add85773ccae041aee1bb24654f16c79b)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerReferralSetPayload_1add85773ccae041aee1bb24654f16c79b"></a>

Gets the value of ReferralCode_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1a7c44d103589f6a71ed7b46b841d2189d)`(FString & OutValue) const` <a id="structFRHAPI__PlayerReferralSetPayload_1a7c44d103589f6a71ed7b46b841d2189d"></a>

Fills OutValue with the value of ReferralCode_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetReferralCodeOrNull`](#structFRHAPI__PlayerReferralSetPayload_1ae778e64237ff53e525c889262ce844aa)`()` <a id="structFRHAPI__PlayerReferralSetPayload_1ae778e64237ff53e525c889262ce844aa"></a>

Returns a pointer to ReferralCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetReferralCodeOrNull`](#structFRHAPI__PlayerReferralSetPayload_1acfab246667f32c26d195371845575c04)`() const` <a id="structFRHAPI__PlayerReferralSetPayload_1acfab246667f32c26d195371845575c04"></a>

Returns a pointer to ReferralCode_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1ab1e692c716a41e28afd6c6f70901a14a)`(const FString & NewValue)` <a id="structFRHAPI__PlayerReferralSetPayload_1ab1e692c716a41e28afd6c6f70901a14a"></a>

Sets the value of ReferralCode_Optional and also sets ReferralCode_IsSet to true.

#### `public inline void `[`SetReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1a5551a09fb9930caf6af263da3ff95534)`(FString && NewValue)` <a id="structFRHAPI__PlayerReferralSetPayload_1a5551a09fb9930caf6af263da3ff95534"></a>

Sets the value of ReferralCode_Optional and also sets ReferralCode_IsSet to true using move semantics.

#### `public inline void `[`ClearReferralCode`](#structFRHAPI__PlayerReferralSetPayload_1ac3be6c5fe62a93c64eca0b05e9be6029)`()` <a id="structFRHAPI__PlayerReferralSetPayload_1ac3be6c5fe62a93c64eca0b05e9be6029"></a>

Clears the value of ReferralCode_Optional and sets ReferralCode_IsSet to false.

#### `public inline bool `[`IsReferralCodeSet`](#structFRHAPI__PlayerReferralSetPayload_1a1ba146184f7b82062bf3f32e15428096)`() const` <a id="structFRHAPI__PlayerReferralSetPayload_1a1ba146184f7b82062bf3f32e15428096"></a>

Checks whether ReferralCode_Optional has been set.

