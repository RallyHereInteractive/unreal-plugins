# group `RHAPI_AdditionalJoinParams` <a id="group__RHAPI__AdditionalJoinParams"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_AdditionalJoinParams`](#structFRHAPI__AdditionalJoinParams) | Additional parameters to apply to a matchmaking ticket.

---
title: FRHAPI_AdditionalJoinParams
---

```
struct FRHAPI_AdditionalJoinParams
  : public FRHAPI_Model
```

Additional parameters to apply to a matchmaking ticket.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, float > `[`DoubleArgs_Optional`](#structFRHAPI__AdditionalJoinParams_1a4a7c882893185978589f4d5f0809dd83) | Additional double arguments to add to the matchmaking ticket.
`public bool `[`DoubleArgs_IsSet`](#structFRHAPI__AdditionalJoinParams_1ae389ab86098f619c59e7f3ab19eac707) | true if DoubleArgs_Optional has been set to a value
`public TMap< FString, FString > `[`StringArgs_Optional`](#structFRHAPI__AdditionalJoinParams_1ae7e58b608afaa63343b96eef1e3380c4) | Additional string arguments to add to the matchmaking ticket.
`public bool `[`StringArgs_IsSet`](#structFRHAPI__AdditionalJoinParams_1a9d723634243a2ea880fb41040818c07d) | true if StringArgs_Optional has been set to a value
`public TArray< FString > `[`Tags_Optional`](#structFRHAPI__AdditionalJoinParams_1a70dc68d5fc5a855de1714813f52364b3) | Additional tags to add to the matchmaking ticket.
`public bool `[`Tags_IsSet`](#structFRHAPI__AdditionalJoinParams_1adab885e9edeb377d8156138d7749d7b6) | true if Tags_Optional has been set to a value
`public TMap< FString, FString > `[`Extensions_Optional`](#structFRHAPI__AdditionalJoinParams_1aa76f09c6714d382a195c79ba533685dd) | Additional extensions to add to the matchmaking ticket. Value is a base64 string representation of the protobuf binary data. The data will be converted back to binary before being put on the ticket.
`public bool `[`Extensions_IsSet`](#structFRHAPI__AdditionalJoinParams_1a7585d1a783ebca930804ed2eaf2b6e83) | true if Extensions_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__AdditionalJoinParams_1a1a0d03b3ad1223859a88287733ff13b4)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__AdditionalJoinParams_1a2d1150131102f5414e4d05bfa6fc6487)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline TMap< FString, float > & `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1aabe7c646e550db8df4bc5e1782bbae8c)`()` | Gets the value of DoubleArgs_Optional, regardless of it having been set.
`public inline const TMap< FString, float > & `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1a84f4c7a3e8523c80145c8da26b042b3a)`() const` | Gets the value of DoubleArgs_Optional, regardless of it having been set.
`public inline const TMap< FString, float > & `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1ad1ba115ea7a2a9eee148419c490d27ec)`(const TMap< FString, float > & DefaultValue) const` | Gets the value of DoubleArgs_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1aee93e59343933267ad1fcaafafcc274b)`(TMap< FString, float > & OutValue) const` | Fills OutValue with the value of DoubleArgs_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, float > * `[`GetDoubleArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1a1929b09bc94153c1709b04a34cb5f579)`()` | Returns a pointer to DoubleArgs_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, float > * `[`GetDoubleArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1aa582bc773b05c745ba2cf92f1a9d2a4d)`() const` | Returns a pointer to DoubleArgs_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1acc48a26a04304f47573677907a76b91c)`(const TMap< FString, float > & NewValue)` | Sets the value of DoubleArgs_Optional and also sets DoubleArgs_IsSet to true.
`public inline void `[`SetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1a94cc0399784078fbd380a46a3f0afaeb)`(TMap< FString, float > && NewValue)` | Sets the value of DoubleArgs_Optional and also sets DoubleArgs_IsSet to true using move semantics.
`public inline void `[`ClearDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1a5055d3c7ceab28d5c3ac8ff572055207)`()` | Clears the value of DoubleArgs_Optional and sets DoubleArgs_IsSet to false.
`public inline bool `[`IsDoubleArgsSet`](#structFRHAPI__AdditionalJoinParams_1a67efa7da38de2ffb40a176b7ba4916d6)`() const` | Checks whether DoubleArgs_Optional has been set.
`public inline TMap< FString, FString > & `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1aee56142e4ede519e524b6e2e176b2902)`()` | Gets the value of StringArgs_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a64563214481a17493c6fbe4853c449e8)`() const` | Gets the value of StringArgs_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a37ac752248e252d0379f18a221128580)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of StringArgs_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a1d259bb154755e3bb9eca79ac510f427)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of StringArgs_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetStringArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1aa93e031a5878f950eb64e0fd1e05227d)`()` | Returns a pointer to StringArgs_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetStringArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1a0c3a1bf622363576124c7619b33d89f6)`() const` | Returns a pointer to StringArgs_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a59832950089edb0c4f9b85092fa52447)`(const TMap< FString, FString > & NewValue)` | Sets the value of StringArgs_Optional and also sets StringArgs_IsSet to true.
`public inline void `[`SetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a1224f8a69234fa7c590ef426ffd09fc7)`(TMap< FString, FString > && NewValue)` | Sets the value of StringArgs_Optional and also sets StringArgs_IsSet to true using move semantics.
`public inline void `[`ClearStringArgs`](#structFRHAPI__AdditionalJoinParams_1a99c9c6930bc31ad763a7fb316e851563)`()` | Clears the value of StringArgs_Optional and sets StringArgs_IsSet to false.
`public inline bool `[`IsStringArgsSet`](#structFRHAPI__AdditionalJoinParams_1a321968e43a3d3710c3bd0a2432b38f3e)`() const` | Checks whether StringArgs_Optional has been set.
`public inline TArray< FString > & `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1ac1caf9793e68f022ece1f7f189161d42)`()` | Gets the value of Tags_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1a5d2c0934b594959c6d870d8e06b1876c)`() const` | Gets the value of Tags_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1ab3c6e6203999cd0cdb79b02d6a4bec5f)`(const TArray< FString > & DefaultValue) const` | Gets the value of Tags_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1a6735a8b6cb588aa2f3805a3ed5eb34a3)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of Tags_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetTagsOrNull`](#structFRHAPI__AdditionalJoinParams_1a817f369f070e33e0a55d356292fba64f)`()` | Returns a pointer to Tags_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetTagsOrNull`](#structFRHAPI__AdditionalJoinParams_1a39662fcd9d3af849292d5d5793a08d54)`() const` | Returns a pointer to Tags_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTags`](#structFRHAPI__AdditionalJoinParams_1ae958fd06d8bda2bf0931ef23b471acc6)`(const TArray< FString > & NewValue)` | Sets the value of Tags_Optional and also sets Tags_IsSet to true.
`public inline void `[`SetTags`](#structFRHAPI__AdditionalJoinParams_1a39e86864adbd6ccce2d913cf636c7f7a)`(TArray< FString > && NewValue)` | Sets the value of Tags_Optional and also sets Tags_IsSet to true using move semantics.
`public inline void `[`ClearTags`](#structFRHAPI__AdditionalJoinParams_1afbd5779f4bf70aa83f592727750c89e9)`()` | Clears the value of Tags_Optional and sets Tags_IsSet to false.
`public inline bool `[`IsTagsSet`](#structFRHAPI__AdditionalJoinParams_1adb89ab77b8a48ffd24bfb32beaaba758)`() const` | Checks whether Tags_Optional has been set.
`public inline TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1a2af14fcbfccaf8733a3d0a9c511debdb)`()` | Gets the value of Extensions_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1a4d202329f362922798012b8ca3f8784b)`() const` | Gets the value of Extensions_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1ab60908d74a79b88788cc2e9993203c71)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1a6f76d92a00aa66b83d89f707ef306940)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AdditionalJoinParams_1a718fce2b4a063aa53b92047ad35de12a)`()` | Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AdditionalJoinParams_1ab61518d1a59cd1cd9305364dd88d4cb1)`() const` | Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetExtensions`](#structFRHAPI__AdditionalJoinParams_1a1801f3196252cf1f2d86fd2757233001)`(const TMap< FString, FString > & NewValue)` | Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.
`public inline void `[`SetExtensions`](#structFRHAPI__AdditionalJoinParams_1a120c011a9c0836cb567ec4f386f0c2f4)`(TMap< FString, FString > && NewValue)` | Sets the value of Extensions_Optional and also sets Extensions_IsSet to true using move semantics.
`public inline void `[`ClearExtensions`](#structFRHAPI__AdditionalJoinParams_1af4f1ea3d69193091aaf259a362f379c2)`()` | Clears the value of Extensions_Optional and sets Extensions_IsSet to false.
`public inline bool `[`IsExtensionsSet`](#structFRHAPI__AdditionalJoinParams_1a0cefe699ef841f1a9d0e462195ea2bcf)`() const` | Checks whether Extensions_Optional has been set.

### Members

#### `public TMap< FString, float > `[`DoubleArgs_Optional`](#structFRHAPI__AdditionalJoinParams_1a4a7c882893185978589f4d5f0809dd83) <a id="structFRHAPI__AdditionalJoinParams_1a4a7c882893185978589f4d5f0809dd83"></a>

Additional double arguments to add to the matchmaking ticket.

#### `public bool `[`DoubleArgs_IsSet`](#structFRHAPI__AdditionalJoinParams_1ae389ab86098f619c59e7f3ab19eac707) <a id="structFRHAPI__AdditionalJoinParams_1ae389ab86098f619c59e7f3ab19eac707"></a>

true if DoubleArgs_Optional has been set to a value

#### `public TMap< FString, FString > `[`StringArgs_Optional`](#structFRHAPI__AdditionalJoinParams_1ae7e58b608afaa63343b96eef1e3380c4) <a id="structFRHAPI__AdditionalJoinParams_1ae7e58b608afaa63343b96eef1e3380c4"></a>

Additional string arguments to add to the matchmaking ticket.

#### `public bool `[`StringArgs_IsSet`](#structFRHAPI__AdditionalJoinParams_1a9d723634243a2ea880fb41040818c07d) <a id="structFRHAPI__AdditionalJoinParams_1a9d723634243a2ea880fb41040818c07d"></a>

true if StringArgs_Optional has been set to a value

#### `public TArray< FString > `[`Tags_Optional`](#structFRHAPI__AdditionalJoinParams_1a70dc68d5fc5a855de1714813f52364b3) <a id="structFRHAPI__AdditionalJoinParams_1a70dc68d5fc5a855de1714813f52364b3"></a>

Additional tags to add to the matchmaking ticket.

#### `public bool `[`Tags_IsSet`](#structFRHAPI__AdditionalJoinParams_1adab885e9edeb377d8156138d7749d7b6) <a id="structFRHAPI__AdditionalJoinParams_1adab885e9edeb377d8156138d7749d7b6"></a>

true if Tags_Optional has been set to a value

#### `public TMap< FString, FString > `[`Extensions_Optional`](#structFRHAPI__AdditionalJoinParams_1aa76f09c6714d382a195c79ba533685dd) <a id="structFRHAPI__AdditionalJoinParams_1aa76f09c6714d382a195c79ba533685dd"></a>

Additional extensions to add to the matchmaking ticket. Value is a base64 string representation of the protobuf binary data. The data will be converted back to binary before being put on the ticket.

#### `public bool `[`Extensions_IsSet`](#structFRHAPI__AdditionalJoinParams_1a7585d1a783ebca930804ed2eaf2b6e83) <a id="structFRHAPI__AdditionalJoinParams_1a7585d1a783ebca930804ed2eaf2b6e83"></a>

true if Extensions_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__AdditionalJoinParams_1a1a0d03b3ad1223859a88287733ff13b4)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__AdditionalJoinParams_1a1a0d03b3ad1223859a88287733ff13b4"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__AdditionalJoinParams_1a2d1150131102f5414e4d05bfa6fc6487)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__AdditionalJoinParams_1a2d1150131102f5414e4d05bfa6fc6487"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline TMap< FString, float > & `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1aabe7c646e550db8df4bc5e1782bbae8c)`()` <a id="structFRHAPI__AdditionalJoinParams_1aabe7c646e550db8df4bc5e1782bbae8c"></a>

Gets the value of DoubleArgs_Optional, regardless of it having been set.

#### `public inline const TMap< FString, float > & `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1a84f4c7a3e8523c80145c8da26b042b3a)`() const` <a id="structFRHAPI__AdditionalJoinParams_1a84f4c7a3e8523c80145c8da26b042b3a"></a>

Gets the value of DoubleArgs_Optional, regardless of it having been set.

#### `public inline const TMap< FString, float > & `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1ad1ba115ea7a2a9eee148419c490d27ec)`(const TMap< FString, float > & DefaultValue) const` <a id="structFRHAPI__AdditionalJoinParams_1ad1ba115ea7a2a9eee148419c490d27ec"></a>

Gets the value of DoubleArgs_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1aee93e59343933267ad1fcaafafcc274b)`(TMap< FString, float > & OutValue) const` <a id="structFRHAPI__AdditionalJoinParams_1aee93e59343933267ad1fcaafafcc274b"></a>

Fills OutValue with the value of DoubleArgs_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, float > * `[`GetDoubleArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1a1929b09bc94153c1709b04a34cb5f579)`()` <a id="structFRHAPI__AdditionalJoinParams_1a1929b09bc94153c1709b04a34cb5f579"></a>

Returns a pointer to DoubleArgs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, float > * `[`GetDoubleArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1aa582bc773b05c745ba2cf92f1a9d2a4d)`() const` <a id="structFRHAPI__AdditionalJoinParams_1aa582bc773b05c745ba2cf92f1a9d2a4d"></a>

Returns a pointer to DoubleArgs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1acc48a26a04304f47573677907a76b91c)`(const TMap< FString, float > & NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1acc48a26a04304f47573677907a76b91c"></a>

Sets the value of DoubleArgs_Optional and also sets DoubleArgs_IsSet to true.

#### `public inline void `[`SetDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1a94cc0399784078fbd380a46a3f0afaeb)`(TMap< FString, float > && NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1a94cc0399784078fbd380a46a3f0afaeb"></a>

Sets the value of DoubleArgs_Optional and also sets DoubleArgs_IsSet to true using move semantics.

#### `public inline void `[`ClearDoubleArgs`](#structFRHAPI__AdditionalJoinParams_1a5055d3c7ceab28d5c3ac8ff572055207)`()` <a id="structFRHAPI__AdditionalJoinParams_1a5055d3c7ceab28d5c3ac8ff572055207"></a>

Clears the value of DoubleArgs_Optional and sets DoubleArgs_IsSet to false.

#### `public inline bool `[`IsDoubleArgsSet`](#structFRHAPI__AdditionalJoinParams_1a67efa7da38de2ffb40a176b7ba4916d6)`() const` <a id="structFRHAPI__AdditionalJoinParams_1a67efa7da38de2ffb40a176b7ba4916d6"></a>

Checks whether DoubleArgs_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1aee56142e4ede519e524b6e2e176b2902)`()` <a id="structFRHAPI__AdditionalJoinParams_1aee56142e4ede519e524b6e2e176b2902"></a>

Gets the value of StringArgs_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a64563214481a17493c6fbe4853c449e8)`() const` <a id="structFRHAPI__AdditionalJoinParams_1a64563214481a17493c6fbe4853c449e8"></a>

Gets the value of StringArgs_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a37ac752248e252d0379f18a221128580)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__AdditionalJoinParams_1a37ac752248e252d0379f18a221128580"></a>

Gets the value of StringArgs_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a1d259bb154755e3bb9eca79ac510f427)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__AdditionalJoinParams_1a1d259bb154755e3bb9eca79ac510f427"></a>

Fills OutValue with the value of StringArgs_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetStringArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1aa93e031a5878f950eb64e0fd1e05227d)`()` <a id="structFRHAPI__AdditionalJoinParams_1aa93e031a5878f950eb64e0fd1e05227d"></a>

Returns a pointer to StringArgs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetStringArgsOrNull`](#structFRHAPI__AdditionalJoinParams_1a0c3a1bf622363576124c7619b33d89f6)`() const` <a id="structFRHAPI__AdditionalJoinParams_1a0c3a1bf622363576124c7619b33d89f6"></a>

Returns a pointer to StringArgs_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a59832950089edb0c4f9b85092fa52447)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1a59832950089edb0c4f9b85092fa52447"></a>

Sets the value of StringArgs_Optional and also sets StringArgs_IsSet to true.

#### `public inline void `[`SetStringArgs`](#structFRHAPI__AdditionalJoinParams_1a1224f8a69234fa7c590ef426ffd09fc7)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1a1224f8a69234fa7c590ef426ffd09fc7"></a>

Sets the value of StringArgs_Optional and also sets StringArgs_IsSet to true using move semantics.

#### `public inline void `[`ClearStringArgs`](#structFRHAPI__AdditionalJoinParams_1a99c9c6930bc31ad763a7fb316e851563)`()` <a id="structFRHAPI__AdditionalJoinParams_1a99c9c6930bc31ad763a7fb316e851563"></a>

Clears the value of StringArgs_Optional and sets StringArgs_IsSet to false.

#### `public inline bool `[`IsStringArgsSet`](#structFRHAPI__AdditionalJoinParams_1a321968e43a3d3710c3bd0a2432b38f3e)`() const` <a id="structFRHAPI__AdditionalJoinParams_1a321968e43a3d3710c3bd0a2432b38f3e"></a>

Checks whether StringArgs_Optional has been set.

#### `public inline TArray< FString > & `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1ac1caf9793e68f022ece1f7f189161d42)`()` <a id="structFRHAPI__AdditionalJoinParams_1ac1caf9793e68f022ece1f7f189161d42"></a>

Gets the value of Tags_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1a5d2c0934b594959c6d870d8e06b1876c)`() const` <a id="structFRHAPI__AdditionalJoinParams_1a5d2c0934b594959c6d870d8e06b1876c"></a>

Gets the value of Tags_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1ab3c6e6203999cd0cdb79b02d6a4bec5f)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__AdditionalJoinParams_1ab3c6e6203999cd0cdb79b02d6a4bec5f"></a>

Gets the value of Tags_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTags`](#structFRHAPI__AdditionalJoinParams_1a6735a8b6cb588aa2f3805a3ed5eb34a3)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__AdditionalJoinParams_1a6735a8b6cb588aa2f3805a3ed5eb34a3"></a>

Fills OutValue with the value of Tags_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< FString > * `[`GetTagsOrNull`](#structFRHAPI__AdditionalJoinParams_1a817f369f070e33e0a55d356292fba64f)`()` <a id="structFRHAPI__AdditionalJoinParams_1a817f369f070e33e0a55d356292fba64f"></a>

Returns a pointer to Tags_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< FString > * `[`GetTagsOrNull`](#structFRHAPI__AdditionalJoinParams_1a39662fcd9d3af849292d5d5793a08d54)`() const` <a id="structFRHAPI__AdditionalJoinParams_1a39662fcd9d3af849292d5d5793a08d54"></a>

Returns a pointer to Tags_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTags`](#structFRHAPI__AdditionalJoinParams_1ae958fd06d8bda2bf0931ef23b471acc6)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1ae958fd06d8bda2bf0931ef23b471acc6"></a>

Sets the value of Tags_Optional and also sets Tags_IsSet to true.

#### `public inline void `[`SetTags`](#structFRHAPI__AdditionalJoinParams_1a39e86864adbd6ccce2d913cf636c7f7a)`(TArray< FString > && NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1a39e86864adbd6ccce2d913cf636c7f7a"></a>

Sets the value of Tags_Optional and also sets Tags_IsSet to true using move semantics.

#### `public inline void `[`ClearTags`](#structFRHAPI__AdditionalJoinParams_1afbd5779f4bf70aa83f592727750c89e9)`()` <a id="structFRHAPI__AdditionalJoinParams_1afbd5779f4bf70aa83f592727750c89e9"></a>

Clears the value of Tags_Optional and sets Tags_IsSet to false.

#### `public inline bool `[`IsTagsSet`](#structFRHAPI__AdditionalJoinParams_1adb89ab77b8a48ffd24bfb32beaaba758)`() const` <a id="structFRHAPI__AdditionalJoinParams_1adb89ab77b8a48ffd24bfb32beaaba758"></a>

Checks whether Tags_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1a2af14fcbfccaf8733a3d0a9c511debdb)`()` <a id="structFRHAPI__AdditionalJoinParams_1a2af14fcbfccaf8733a3d0a9c511debdb"></a>

Gets the value of Extensions_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1a4d202329f362922798012b8ca3f8784b)`() const` <a id="structFRHAPI__AdditionalJoinParams_1a4d202329f362922798012b8ca3f8784b"></a>

Gets the value of Extensions_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1ab60908d74a79b88788cc2e9993203c71)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__AdditionalJoinParams_1ab60908d74a79b88788cc2e9993203c71"></a>

Gets the value of Extensions_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetExtensions`](#structFRHAPI__AdditionalJoinParams_1a6f76d92a00aa66b83d89f707ef306940)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__AdditionalJoinParams_1a6f76d92a00aa66b83d89f707ef306940"></a>

Fills OutValue with the value of Extensions_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AdditionalJoinParams_1a718fce2b4a063aa53b92047ad35de12a)`()` <a id="structFRHAPI__AdditionalJoinParams_1a718fce2b4a063aa53b92047ad35de12a"></a>

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetExtensionsOrNull`](#structFRHAPI__AdditionalJoinParams_1ab61518d1a59cd1cd9305364dd88d4cb1)`() const` <a id="structFRHAPI__AdditionalJoinParams_1ab61518d1a59cd1cd9305364dd88d4cb1"></a>

Returns a pointer to Extensions_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetExtensions`](#structFRHAPI__AdditionalJoinParams_1a1801f3196252cf1f2d86fd2757233001)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1a1801f3196252cf1f2d86fd2757233001"></a>

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true.

#### `public inline void `[`SetExtensions`](#structFRHAPI__AdditionalJoinParams_1a120c011a9c0836cb567ec4f386f0c2f4)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__AdditionalJoinParams_1a120c011a9c0836cb567ec4f386f0c2f4"></a>

Sets the value of Extensions_Optional and also sets Extensions_IsSet to true using move semantics.

#### `public inline void `[`ClearExtensions`](#structFRHAPI__AdditionalJoinParams_1af4f1ea3d69193091aaf259a362f379c2)`()` <a id="structFRHAPI__AdditionalJoinParams_1af4f1ea3d69193091aaf259a362f379c2"></a>

Clears the value of Extensions_Optional and sets Extensions_IsSet to false.

#### `public inline bool `[`IsExtensionsSet`](#structFRHAPI__AdditionalJoinParams_1a0cefe699ef841f1a9d0e462195ea2bcf)`() const` <a id="structFRHAPI__AdditionalJoinParams_1a0cefe699ef841f1a9d0e462195ea2bcf"></a>

Checks whether Extensions_Optional has been set.

