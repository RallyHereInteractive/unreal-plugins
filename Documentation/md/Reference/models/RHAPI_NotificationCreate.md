---
title: RHAPI_NotificationCreate
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_NotificationCreate`](#structFRHAPI__NotificationCreate) | 

## struct `FRHAPI_NotificationCreate` <a id="structFRHAPI__NotificationCreate"></a>

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
`public virtual void `[`WriteJson`](#structFRHAPI__NotificationCreate_1aac373e021c4f06789e5f2a353b41029b)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetMessage`](#structFRHAPI__NotificationCreate_1a6163ad0672a4d4423f53feebcafe508c)`()` | Gets the value of Message.
`public inline const FString & `[`GetMessage`](#structFRHAPI__NotificationCreate_1ae64b7de123b30d2f757a803a403d8317)`() const` | Gets the value of Message.
`public inline void `[`SetMessage`](#structFRHAPI__NotificationCreate_1a724e3d17d6f6deff3809c3edca4ffce0)`(const FString & NewValue)` | Sets the value of Message.
`public inline void `[`SetMessage`](#structFRHAPI__NotificationCreate_1ae547144cac415476dce6f8c5d00ce2e1)`(FString && NewValue)` | Sets the value of Message using move semantics.
`public inline FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1afcf7c24e915bce53ebfe1fdcb0bbedb9)`()` | Gets the value of RhUrl_Optional, regardless of it having been set.
`public inline const FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1aec1907e5a50d4622226d30e4e4e61886)`() const` | Gets the value of RhUrl_Optional, regardless of it having been set.
`public inline const FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a2851a554e6ef24f76764e4ca52315388)`(const FString & DefaultValue) const` | Gets the value of RhUrl_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a2e8c420d3c44cdfff8a68702694640de)`(FString & OutValue) const` | Fills OutValue with the value of RhUrl_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRhUrlOrNull`](#structFRHAPI__NotificationCreate_1a268bf3e62454b02b9a71a1ab4b21f756)`()` | Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRhUrlOrNull`](#structFRHAPI__NotificationCreate_1a6a976e08446bb34768e76792a67e324b)`() const` | Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRhUrl`](#structFRHAPI__NotificationCreate_1a15a933ef842b37dff3f66cd6ec807a54)`(const FString & NewValue)` | Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true.
`public inline void `[`SetRhUrl`](#structFRHAPI__NotificationCreate_1a5f8eba04bf4a4a12bd8c438a6a04bf47)`(FString && NewValue)` | Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true using move semantics.
`public inline void `[`ClearRhUrl`](#structFRHAPI__NotificationCreate_1a4376b256f42a972fb782b4e70b48f53c)`()` | Clears the value of RhUrl_Optional and sets RhUrl_IsSet to false.
`public inline bool `[`IsRhUrlSet`](#structFRHAPI__NotificationCreate_1ac2dd5e03210aa1f0a793db7002f9b9c4)`() const` | Checks whether RhUrl_Optional has been set.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1adc3ec494ef1298af22b38094c7d19052)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1a6ebc4d33a8d8363b311cf28564520b11)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1a5ca2530b7715a150aadfbc6f8727c544)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__NotificationCreate_1aef2522d79f3a3f80f788eec472f72577)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__NotificationCreate_1a3a54d3f4411dad2bb69ee291008ffd36)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__NotificationCreate_1a56c3d803085eda4e5f28262b36728127)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__NotificationCreate_1ad64be04d51f13cd10eebff28bb3a2562)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__NotificationCreate_1abfad92fbae3fc253e80842724deb5097)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__NotificationCreate_1a01eef552ff3657f797242a435a3f27f5)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__NotificationCreate_1aef63b7633d2314d6c4734e827c71019a)`() const` | Checks whether CustomData_Optional has been set.
`public inline FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1a71726c5478a54ec494292451382e380a)`()` | Gets the value of Etag_Optional, regardless of it having been set.
`public inline const FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1a7c51da6e4a38b3f432c2d439a180d96d)`() const` | Gets the value of Etag_Optional, regardless of it having been set.
`public inline const FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1a5c3249cb185db991d7d85a3a4b27496c)`(const FString & DefaultValue) const` | Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEtag`](#structFRHAPI__NotificationCreate_1aed19722f10bf0167cfec2eff5a89d2a8)`(FString & OutValue) const` | Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetEtagOrNull`](#structFRHAPI__NotificationCreate_1a087d1f386a45ad17c058d9a973ff1165)`()` | Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetEtagOrNull`](#structFRHAPI__NotificationCreate_1a47a2c6a209cfd913d694cb71a0e0e3b9)`() const` | Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.
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

#### `public virtual void `[`WriteJson`](#structFRHAPI__NotificationCreate_1aac373e021c4f06789e5f2a353b41029b)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__NotificationCreate_1aac373e021c4f06789e5f2a353b41029b"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetMessage`](#structFRHAPI__NotificationCreate_1a6163ad0672a4d4423f53feebcafe508c)`()` <a id="structFRHAPI__NotificationCreate_1a6163ad0672a4d4423f53feebcafe508c"></a>

Gets the value of Message.

#### `public inline const FString & `[`GetMessage`](#structFRHAPI__NotificationCreate_1ae64b7de123b30d2f757a803a403d8317)`() const` <a id="structFRHAPI__NotificationCreate_1ae64b7de123b30d2f757a803a403d8317"></a>

Gets the value of Message.

#### `public inline void `[`SetMessage`](#structFRHAPI__NotificationCreate_1a724e3d17d6f6deff3809c3edca4ffce0)`(const FString & NewValue)` <a id="structFRHAPI__NotificationCreate_1a724e3d17d6f6deff3809c3edca4ffce0"></a>

Sets the value of Message.

#### `public inline void `[`SetMessage`](#structFRHAPI__NotificationCreate_1ae547144cac415476dce6f8c5d00ce2e1)`(FString && NewValue)` <a id="structFRHAPI__NotificationCreate_1ae547144cac415476dce6f8c5d00ce2e1"></a>

Sets the value of Message using move semantics.

#### `public inline FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1afcf7c24e915bce53ebfe1fdcb0bbedb9)`()` <a id="structFRHAPI__NotificationCreate_1afcf7c24e915bce53ebfe1fdcb0bbedb9"></a>

Gets the value of RhUrl_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1aec1907e5a50d4622226d30e4e4e61886)`() const` <a id="structFRHAPI__NotificationCreate_1aec1907e5a50d4622226d30e4e4e61886"></a>

Gets the value of RhUrl_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a2851a554e6ef24f76764e4ca52315388)`(const FString & DefaultValue) const` <a id="structFRHAPI__NotificationCreate_1a2851a554e6ef24f76764e4ca52315388"></a>

Gets the value of RhUrl_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a2e8c420d3c44cdfff8a68702694640de)`(FString & OutValue) const` <a id="structFRHAPI__NotificationCreate_1a2e8c420d3c44cdfff8a68702694640de"></a>

Fills OutValue with the value of RhUrl_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetRhUrlOrNull`](#structFRHAPI__NotificationCreate_1a268bf3e62454b02b9a71a1ab4b21f756)`()` <a id="structFRHAPI__NotificationCreate_1a268bf3e62454b02b9a71a1ab4b21f756"></a>

Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetRhUrlOrNull`](#structFRHAPI__NotificationCreate_1a6a976e08446bb34768e76792a67e324b)`() const` <a id="structFRHAPI__NotificationCreate_1a6a976e08446bb34768e76792a67e324b"></a>

Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetRhUrl`](#structFRHAPI__NotificationCreate_1a15a933ef842b37dff3f66cd6ec807a54)`(const FString & NewValue)` <a id="structFRHAPI__NotificationCreate_1a15a933ef842b37dff3f66cd6ec807a54"></a>

Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true.

#### `public inline void `[`SetRhUrl`](#structFRHAPI__NotificationCreate_1a5f8eba04bf4a4a12bd8c438a6a04bf47)`(FString && NewValue)` <a id="structFRHAPI__NotificationCreate_1a5f8eba04bf4a4a12bd8c438a6a04bf47"></a>

Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true using move semantics.

#### `public inline void `[`ClearRhUrl`](#structFRHAPI__NotificationCreate_1a4376b256f42a972fb782b4e70b48f53c)`()` <a id="structFRHAPI__NotificationCreate_1a4376b256f42a972fb782b4e70b48f53c"></a>

Clears the value of RhUrl_Optional and sets RhUrl_IsSet to false.

#### `public inline bool `[`IsRhUrlSet`](#structFRHAPI__NotificationCreate_1ac2dd5e03210aa1f0a793db7002f9b9c4)`() const` <a id="structFRHAPI__NotificationCreate_1ac2dd5e03210aa1f0a793db7002f9b9c4"></a>

Checks whether RhUrl_Optional has been set.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1adc3ec494ef1298af22b38094c7d19052)`()` <a id="structFRHAPI__NotificationCreate_1adc3ec494ef1298af22b38094c7d19052"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1a6ebc4d33a8d8363b311cf28564520b11)`() const` <a id="structFRHAPI__NotificationCreate_1a6ebc4d33a8d8363b311cf28564520b11"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1a5ca2530b7715a150aadfbc6f8727c544)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__NotificationCreate_1a5ca2530b7715a150aadfbc6f8727c544"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__NotificationCreate_1aef2522d79f3a3f80f788eec472f72577)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__NotificationCreate_1aef2522d79f3a3f80f788eec472f72577"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__NotificationCreate_1a3a54d3f4411dad2bb69ee291008ffd36)`()` <a id="structFRHAPI__NotificationCreate_1a3a54d3f4411dad2bb69ee291008ffd36"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__NotificationCreate_1a56c3d803085eda4e5f28262b36728127)`() const` <a id="structFRHAPI__NotificationCreate_1a56c3d803085eda4e5f28262b36728127"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__NotificationCreate_1ad64be04d51f13cd10eebff28bb3a2562)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__NotificationCreate_1ad64be04d51f13cd10eebff28bb3a2562"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__NotificationCreate_1abfad92fbae3fc253e80842724deb5097)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__NotificationCreate_1abfad92fbae3fc253e80842724deb5097"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__NotificationCreate_1a01eef552ff3657f797242a435a3f27f5)`()` <a id="structFRHAPI__NotificationCreate_1a01eef552ff3657f797242a435a3f27f5"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__NotificationCreate_1aef63b7633d2314d6c4734e827c71019a)`() const` <a id="structFRHAPI__NotificationCreate_1aef63b7633d2314d6c4734e827c71019a"></a>

Checks whether CustomData_Optional has been set.

#### `public inline FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1a71726c5478a54ec494292451382e380a)`()` <a id="structFRHAPI__NotificationCreate_1a71726c5478a54ec494292451382e380a"></a>

Gets the value of Etag_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1a7c51da6e4a38b3f432c2d439a180d96d)`() const` <a id="structFRHAPI__NotificationCreate_1a7c51da6e4a38b3f432c2d439a180d96d"></a>

Gets the value of Etag_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1a5c3249cb185db991d7d85a3a4b27496c)`(const FString & DefaultValue) const` <a id="structFRHAPI__NotificationCreate_1a5c3249cb185db991d7d85a3a4b27496c"></a>

Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetEtag`](#structFRHAPI__NotificationCreate_1aed19722f10bf0167cfec2eff5a89d2a8)`(FString & OutValue) const` <a id="structFRHAPI__NotificationCreate_1aed19722f10bf0167cfec2eff5a89d2a8"></a>

Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetEtagOrNull`](#structFRHAPI__NotificationCreate_1a087d1f386a45ad17c058d9a973ff1165)`()` <a id="structFRHAPI__NotificationCreate_1a087d1f386a45ad17c058d9a973ff1165"></a>

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetEtagOrNull`](#structFRHAPI__NotificationCreate_1a47a2c6a209cfd913d694cb71a0e0e3b9)`() const` <a id="structFRHAPI__NotificationCreate_1a47a2c6a209cfd913d694cb71a0e0e3b9"></a>

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetEtag`](#structFRHAPI__NotificationCreate_1a8e564f58fd88cdec6e78d044aa85eb56)`(const FString & NewValue)` <a id="structFRHAPI__NotificationCreate_1a8e564f58fd88cdec6e78d044aa85eb56"></a>

Sets the value of Etag_Optional and also sets Etag_IsSet to true.

#### `public inline void `[`SetEtag`](#structFRHAPI__NotificationCreate_1a15c076c6faca9132d1be24f4c315f15a)`(FString && NewValue)` <a id="structFRHAPI__NotificationCreate_1a15c076c6faca9132d1be24f4c315f15a"></a>

Sets the value of Etag_Optional and also sets Etag_IsSet to true using move semantics.

#### `public inline void `[`ClearEtag`](#structFRHAPI__NotificationCreate_1a3db358e09781131cc09ab950f6f7f3f6)`()` <a id="structFRHAPI__NotificationCreate_1a3db358e09781131cc09ab950f6f7f3f6"></a>

Clears the value of Etag_Optional and sets Etag_IsSet to false.

#### `public inline bool `[`IsEtagSet`](#structFRHAPI__NotificationCreate_1abeea39d64d2fe0a8194627988750c590)`() const` <a id="structFRHAPI__NotificationCreate_1abeea39d64d2fe0a8194627988750c590"></a>

Checks whether Etag_Optional has been set.

