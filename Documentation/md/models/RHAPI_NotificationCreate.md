# group `RHAPI_NotificationCreate` <a id="group__RHAPI__NotificationCreate"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_NotificationCreate`](#structFRHAPI__NotificationCreate) | 

---
title: FRHAPI_NotificationCreate
---

```
struct FRHAPI_NotificationCreate
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Message`](#structFRHAPI__NotificationCreate_1aa0b36df125568c5a818f6d912e68026b) | Base Message for the notification.
`public FString `[`RhUrl_Optional`](#structFRHAPI__NotificationCreate_1aab76e69babb5831da06322158ac18a5a) | Path to get additional data about this notification.
`public bool `[`RhUrl_IsSet`](#structFRHAPI__NotificationCreate_1a92cbe6572c2358361c7fd7b7f8881339) | true if RhUrl_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__NotificationCreate_1a262983e21a17f8f39a40b96cf38baf89) | Custom values for the notification.
`public bool `[`CustomData_IsSet`](#structFRHAPI__NotificationCreate_1aef02ee1a1a84a9c2ef1b83e9059ce0dc) | true if CustomData_Optional has been set to a value
`public FString `[`Etag_Optional`](#structFRHAPI__NotificationCreate_1af0a10c4259a996effcdcf157ce8f6053) | ETag for the resource at rh_url at the time of this notification.
`public bool `[`Etag_IsSet`](#structFRHAPI__NotificationCreate_1a84ce9b6e74852a4e933096b16d1b554c) | true if Etag_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__NotificationCreate_1a039c94e3a5735df04c369a8a7f719144)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__NotificationCreate_1a7da7ce595ed6136db13fc5ee865940c3)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetMessage`](#structFRHAPI__NotificationCreate_1a0152ca697ce4a14177fab0a434cfbe48)`()` | Gets the value of Message.
`public inline const FString & `[`GetMessage`](#structFRHAPI__NotificationCreate_1adcab94108c90cdf9aa68dc7ff7159029)`() const` | Gets the value of Message.
`public inline void `[`SetMessage`](#structFRHAPI__NotificationCreate_1a724e3d17d6f6deff3809c3edca4ffce0)`(const FString & NewValue)` | Sets the value of Message.
`public inline void `[`SetMessage`](#structFRHAPI__NotificationCreate_1ae547144cac415476dce6f8c5d00ce2e1)`(FString && NewValue)` | Sets the value of Message using move semantics.
`public inline FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a330c21817ef1b8f82bf3b37309ddf2f7)`()` | Gets the value of RhUrl_Optional, regardless of it having been set.
`public inline const FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a277ef684586b3ee64cb16a0553a6c000)`() const` | Gets the value of RhUrl_Optional, regardless of it having been set.
`public inline const FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a39516c3d34ca765c1b0b7df4a138cbda)`(const FString & DefaultValue) const` | Gets the value of RhUrl_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a2e8c420d3c44cdfff8a68702694640de)`(FString & OutValue) const` | Fills OutValue with the value of RhUrl_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRhUrlOrNull`](#structFRHAPI__NotificationCreate_1a94579c2d8042f573e7331d83e6c5c92d)`()` | Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRhUrlOrNull`](#structFRHAPI__NotificationCreate_1a5cfe484ab2e2c5132a5de200f4d8ec62)`() const` | Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRhUrl`](#structFRHAPI__NotificationCreate_1a15a933ef842b37dff3f66cd6ec807a54)`(const FString & NewValue)` | Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true.
`public inline void `[`SetRhUrl`](#structFRHAPI__NotificationCreate_1a5f8eba04bf4a4a12bd8c438a6a04bf47)`(FString && NewValue)` | Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true using move semantics.
`public inline void `[`ClearRhUrl`](#structFRHAPI__NotificationCreate_1a4376b256f42a972fb782b4e70b48f53c)`()` | Clears the value of RhUrl_Optional and sets RhUrl_IsSet to false.
`public inline bool `[`IsRhUrlSet`](#structFRHAPI__NotificationCreate_1ac2dd5e03210aa1f0a793db7002f9b9c4)`() const` | Checks whether RhUrl_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1a2380bfb434d133469ff26ead31d7de1b)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1a04a2dc2c902a5acb0041de12b6f8eae6)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1ae5529e828fcd280c5b49ae661b9e20cf)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__NotificationCreate_1aef2522d79f3a3f80f788eec472f72577)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__NotificationCreate_1ab1d44f7bbdabc2fe8373d987938dbb8d)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__NotificationCreate_1a12abc4d5f1931d5ff50e8937bf44dec7)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__NotificationCreate_1ad64be04d51f13cd10eebff28bb3a2562)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__NotificationCreate_1abfad92fbae3fc253e80842724deb5097)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__NotificationCreate_1a01eef552ff3657f797242a435a3f27f5)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__NotificationCreate_1aef63b7633d2314d6c4734e827c71019a)`() const` | Checks whether CustomData_Optional has been set.
`public inline FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1af0752d1df2cea737cf54519f5f5135b9)`()` | Gets the value of Etag_Optional, regardless of it having been set.
`public inline const FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1ab6bc32e156c1d89e93c8032592dbbb5e)`() const` | Gets the value of Etag_Optional, regardless of it having been set.
`public inline const FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1a5b6f47e5eaf9f47315b6a9288d8e3225)`(const FString & DefaultValue) const` | Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEtag`](#structFRHAPI__NotificationCreate_1aed19722f10bf0167cfec2eff5a89d2a8)`(FString & OutValue) const` | Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetEtagOrNull`](#structFRHAPI__NotificationCreate_1a8d317f2c741c8fd624bdd17315eaba9a)`()` | Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetEtagOrNull`](#structFRHAPI__NotificationCreate_1a36c85629c00031dd796c4967643f3c8f)`() const` | Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEtag`](#structFRHAPI__NotificationCreate_1a8e564f58fd88cdec6e78d044aa85eb56)`(const FString & NewValue)` | Sets the value of Etag_Optional and also sets Etag_IsSet to true.
`public inline void `[`SetEtag`](#structFRHAPI__NotificationCreate_1a15c076c6faca9132d1be24f4c315f15a)`(FString && NewValue)` | Sets the value of Etag_Optional and also sets Etag_IsSet to true using move semantics.
`public inline void `[`ClearEtag`](#structFRHAPI__NotificationCreate_1a3db358e09781131cc09ab950f6f7f3f6)`()` | Clears the value of Etag_Optional and sets Etag_IsSet to false.
`public inline bool `[`IsEtagSet`](#structFRHAPI__NotificationCreate_1abeea39d64d2fe0a8194627988750c590)`() const` | Checks whether Etag_Optional has been set.

### Members

#### `public FString `[`Message`](#structFRHAPI__NotificationCreate_1aa0b36df125568c5a818f6d912e68026b) <a id="structFRHAPI__NotificationCreate_1aa0b36df125568c5a818f6d912e68026b"></a>

Base Message for the notification.

#### `public FString `[`RhUrl_Optional`](#structFRHAPI__NotificationCreate_1aab76e69babb5831da06322158ac18a5a) <a id="structFRHAPI__NotificationCreate_1aab76e69babb5831da06322158ac18a5a"></a>

Path to get additional data about this notification.

#### `public bool `[`RhUrl_IsSet`](#structFRHAPI__NotificationCreate_1a92cbe6572c2358361c7fd7b7f8881339) <a id="structFRHAPI__NotificationCreate_1a92cbe6572c2358361c7fd7b7f8881339"></a>

true if RhUrl_Optional has been set to a value

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__NotificationCreate_1a262983e21a17f8f39a40b96cf38baf89) <a id="structFRHAPI__NotificationCreate_1a262983e21a17f8f39a40b96cf38baf89"></a>

Custom values for the notification.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__NotificationCreate_1aef02ee1a1a84a9c2ef1b83e9059ce0dc) <a id="structFRHAPI__NotificationCreate_1aef02ee1a1a84a9c2ef1b83e9059ce0dc"></a>

true if CustomData_Optional has been set to a value

#### `public FString `[`Etag_Optional`](#structFRHAPI__NotificationCreate_1af0a10c4259a996effcdcf157ce8f6053) <a id="structFRHAPI__NotificationCreate_1af0a10c4259a996effcdcf157ce8f6053"></a>

ETag for the resource at rh_url at the time of this notification.

#### `public bool `[`Etag_IsSet`](#structFRHAPI__NotificationCreate_1a84ce9b6e74852a4e933096b16d1b554c) <a id="structFRHAPI__NotificationCreate_1a84ce9b6e74852a4e933096b16d1b554c"></a>

true if Etag_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__NotificationCreate_1a039c94e3a5735df04c369a8a7f719144)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__NotificationCreate_1a039c94e3a5735df04c369a8a7f719144"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__NotificationCreate_1a7da7ce595ed6136db13fc5ee865940c3)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__NotificationCreate_1a7da7ce595ed6136db13fc5ee865940c3"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetMessage`](#structFRHAPI__NotificationCreate_1a0152ca697ce4a14177fab0a434cfbe48)`()` <a id="structFRHAPI__NotificationCreate_1a0152ca697ce4a14177fab0a434cfbe48"></a>

Gets the value of Message.

#### `public inline const FString & `[`GetMessage`](#structFRHAPI__NotificationCreate_1adcab94108c90cdf9aa68dc7ff7159029)`() const` <a id="structFRHAPI__NotificationCreate_1adcab94108c90cdf9aa68dc7ff7159029"></a>

Gets the value of Message.

#### `public inline void `[`SetMessage`](#structFRHAPI__NotificationCreate_1a724e3d17d6f6deff3809c3edca4ffce0)`(const FString & NewValue)` <a id="structFRHAPI__NotificationCreate_1a724e3d17d6f6deff3809c3edca4ffce0"></a>

Sets the value of Message.

#### `public inline void `[`SetMessage`](#structFRHAPI__NotificationCreate_1ae547144cac415476dce6f8c5d00ce2e1)`(FString && NewValue)` <a id="structFRHAPI__NotificationCreate_1ae547144cac415476dce6f8c5d00ce2e1"></a>

Sets the value of Message using move semantics.

#### `public inline FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a330c21817ef1b8f82bf3b37309ddf2f7)`()` <a id="structFRHAPI__NotificationCreate_1a330c21817ef1b8f82bf3b37309ddf2f7"></a>

Gets the value of RhUrl_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a277ef684586b3ee64cb16a0553a6c000)`() const` <a id="structFRHAPI__NotificationCreate_1a277ef684586b3ee64cb16a0553a6c000"></a>

Gets the value of RhUrl_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a39516c3d34ca765c1b0b7df4a138cbda)`(const FString & DefaultValue) const` <a id="structFRHAPI__NotificationCreate_1a39516c3d34ca765c1b0b7df4a138cbda"></a>

Gets the value of RhUrl_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a2e8c420d3c44cdfff8a68702694640de)`(FString & OutValue) const` <a id="structFRHAPI__NotificationCreate_1a2e8c420d3c44cdfff8a68702694640de"></a>

Fills OutValue with the value of RhUrl_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRhUrlOrNull`](#structFRHAPI__NotificationCreate_1a94579c2d8042f573e7331d83e6c5c92d)`()` <a id="structFRHAPI__NotificationCreate_1a94579c2d8042f573e7331d83e6c5c92d"></a>

Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRhUrlOrNull`](#structFRHAPI__NotificationCreate_1a5cfe484ab2e2c5132a5de200f4d8ec62)`() const` <a id="structFRHAPI__NotificationCreate_1a5cfe484ab2e2c5132a5de200f4d8ec62"></a>

Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRhUrl`](#structFRHAPI__NotificationCreate_1a15a933ef842b37dff3f66cd6ec807a54)`(const FString & NewValue)` <a id="structFRHAPI__NotificationCreate_1a15a933ef842b37dff3f66cd6ec807a54"></a>

Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true.

#### `public inline void `[`SetRhUrl`](#structFRHAPI__NotificationCreate_1a5f8eba04bf4a4a12bd8c438a6a04bf47)`(FString && NewValue)` <a id="structFRHAPI__NotificationCreate_1a5f8eba04bf4a4a12bd8c438a6a04bf47"></a>

Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true using move semantics.

#### `public inline void `[`ClearRhUrl`](#structFRHAPI__NotificationCreate_1a4376b256f42a972fb782b4e70b48f53c)`()` <a id="structFRHAPI__NotificationCreate_1a4376b256f42a972fb782b4e70b48f53c"></a>

Clears the value of RhUrl_Optional and sets RhUrl_IsSet to false.

#### `public inline bool `[`IsRhUrlSet`](#structFRHAPI__NotificationCreate_1ac2dd5e03210aa1f0a793db7002f9b9c4)`() const` <a id="structFRHAPI__NotificationCreate_1ac2dd5e03210aa1f0a793db7002f9b9c4"></a>

Checks whether RhUrl_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1a2380bfb434d133469ff26ead31d7de1b)`()` <a id="structFRHAPI__NotificationCreate_1a2380bfb434d133469ff26ead31d7de1b"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1a04a2dc2c902a5acb0041de12b6f8eae6)`() const` <a id="structFRHAPI__NotificationCreate_1a04a2dc2c902a5acb0041de12b6f8eae6"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1ae5529e828fcd280c5b49ae661b9e20cf)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__NotificationCreate_1ae5529e828fcd280c5b49ae661b9e20cf"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__NotificationCreate_1aef2522d79f3a3f80f788eec472f72577)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__NotificationCreate_1aef2522d79f3a3f80f788eec472f72577"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__NotificationCreate_1ab1d44f7bbdabc2fe8373d987938dbb8d)`()` <a id="structFRHAPI__NotificationCreate_1ab1d44f7bbdabc2fe8373d987938dbb8d"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__NotificationCreate_1a12abc4d5f1931d5ff50e8937bf44dec7)`() const` <a id="structFRHAPI__NotificationCreate_1a12abc4d5f1931d5ff50e8937bf44dec7"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__NotificationCreate_1ad64be04d51f13cd10eebff28bb3a2562)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__NotificationCreate_1ad64be04d51f13cd10eebff28bb3a2562"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__NotificationCreate_1abfad92fbae3fc253e80842724deb5097)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__NotificationCreate_1abfad92fbae3fc253e80842724deb5097"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__NotificationCreate_1a01eef552ff3657f797242a435a3f27f5)`()` <a id="structFRHAPI__NotificationCreate_1a01eef552ff3657f797242a435a3f27f5"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__NotificationCreate_1aef63b7633d2314d6c4734e827c71019a)`() const` <a id="structFRHAPI__NotificationCreate_1aef63b7633d2314d6c4734e827c71019a"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1af0752d1df2cea737cf54519f5f5135b9)`()` <a id="structFRHAPI__NotificationCreate_1af0752d1df2cea737cf54519f5f5135b9"></a>

Gets the value of Etag_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1ab6bc32e156c1d89e93c8032592dbbb5e)`() const` <a id="structFRHAPI__NotificationCreate_1ab6bc32e156c1d89e93c8032592dbbb5e"></a>

Gets the value of Etag_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1a5b6f47e5eaf9f47315b6a9288d8e3225)`(const FString & DefaultValue) const` <a id="structFRHAPI__NotificationCreate_1a5b6f47e5eaf9f47315b6a9288d8e3225"></a>

Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEtag`](#structFRHAPI__NotificationCreate_1aed19722f10bf0167cfec2eff5a89d2a8)`(FString & OutValue) const` <a id="structFRHAPI__NotificationCreate_1aed19722f10bf0167cfec2eff5a89d2a8"></a>

Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetEtagOrNull`](#structFRHAPI__NotificationCreate_1a8d317f2c741c8fd624bdd17315eaba9a)`()` <a id="structFRHAPI__NotificationCreate_1a8d317f2c741c8fd624bdd17315eaba9a"></a>

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetEtagOrNull`](#structFRHAPI__NotificationCreate_1a36c85629c00031dd796c4967643f3c8f)`() const` <a id="structFRHAPI__NotificationCreate_1a36c85629c00031dd796c4967643f3c8f"></a>

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEtag`](#structFRHAPI__NotificationCreate_1a8e564f58fd88cdec6e78d044aa85eb56)`(const FString & NewValue)` <a id="structFRHAPI__NotificationCreate_1a8e564f58fd88cdec6e78d044aa85eb56"></a>

Sets the value of Etag_Optional and also sets Etag_IsSet to true.

#### `public inline void `[`SetEtag`](#structFRHAPI__NotificationCreate_1a15c076c6faca9132d1be24f4c315f15a)`(FString && NewValue)` <a id="structFRHAPI__NotificationCreate_1a15c076c6faca9132d1be24f4c315f15a"></a>

Sets the value of Etag_Optional and also sets Etag_IsSet to true using move semantics.

#### `public inline void `[`ClearEtag`](#structFRHAPI__NotificationCreate_1a3db358e09781131cc09ab950f6f7f3f6)`()` <a id="structFRHAPI__NotificationCreate_1a3db358e09781131cc09ab950f6f7f3f6"></a>

Clears the value of Etag_Optional and sets Etag_IsSet to false.

#### `public inline bool `[`IsEtagSet`](#structFRHAPI__NotificationCreate_1abeea39d64d2fe0a8194627988750c590)`() const` <a id="structFRHAPI__NotificationCreate_1abeea39d64d2fe0a8194627988750c590"></a>

Checks whether Etag_Optional has been set.

