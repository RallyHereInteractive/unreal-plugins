# RHAPI_NotificationCreate <a id="group__RHAPI__NotificationCreate"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_NotificationCreate`](#structFRHAPI__NotificationCreate) | 

## struct `FRHAPI_NotificationCreate` <a id="structFRHAPI__NotificationCreate"></a>

```
struct FRHAPI_NotificationCreate
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Message`](#structFRHAPI__NotificationCreate_1aa0b36df125568c5a818f6d912e68026b) | Base Message for the notification.
`public FString `[`RhUrl_Optional`](#structFRHAPI__NotificationCreate_1aab76e69babb5831da06322158ac18a5a) | Path to get additional data about this notification.
`public bool `[`RhUrl_IsSet`](#structFRHAPI__NotificationCreate_1a92cbe6572c2358361c7fd7b7f8881339) | true if RhUrl_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__NotificationCreate_1a262983e21a17f8f39a40b96cf38baf89) | Custom values for the notification.
`public bool `[`CustomData_IsSet`](#structFRHAPI__NotificationCreate_1aef02ee1a1a84a9c2ef1b83e9059ce0dc) | true if CustomData_Optional has been set to a value
`public FString `[`Etag_Optional`](#structFRHAPI__NotificationCreate_1af0a10c4259a996effcdcf157ce8f6053) | ETag for the resource at rh_url at the time of this notification.
`public bool `[`Etag_IsSet`](#structFRHAPI__NotificationCreate_1a84ce9b6e74852a4e933096b16d1b554c) | true if Etag_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__NotificationCreate_1a41db2b45c132d9b93af6f18e647a3dd7)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__NotificationCreate_1aaa33690fbc48e369e62493c435a9bb68)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetMessage`](#structFRHAPI__NotificationCreate_1a0152ca697ce4a14177fab0a434cfbe48)`()` | Gets the value of Message.
`public inline const FString & `[`GetMessage`](#structFRHAPI__NotificationCreate_1adcab94108c90cdf9aa68dc7ff7159029)`() const` | Gets the value of Message.
`public inline void `[`SetMessage`](#structFRHAPI__NotificationCreate_1a0f46dfa8a6bd62de5713e126a99b127a)`(FString NewValue)` | Sets the value of Message.
`public inline FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a330c21817ef1b8f82bf3b37309ddf2f7)`()` | Gets the value of RhUrl_Optional, regardless of it having been set.
`public inline const FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a277ef684586b3ee64cb16a0553a6c000)`() const` | Gets the value of RhUrl_Optional, regardless of it having been set.
`public inline const FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a39516c3d34ca765c1b0b7df4a138cbda)`(const FString & DefaultValue) const` | Gets the value of RhUrl_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a2e8c420d3c44cdfff8a68702694640de)`(FString & OutValue) const` | Fills OutValue with the value of RhUrl_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetRhUrlOrNull`](#structFRHAPI__NotificationCreate_1a94579c2d8042f573e7331d83e6c5c92d)`()` | Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetRhUrlOrNull`](#structFRHAPI__NotificationCreate_1a5cfe484ab2e2c5132a5de200f4d8ec62)`() const` | Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetRhUrl`](#structFRHAPI__NotificationCreate_1ae4834ed698007730c549b97cef2d7af2)`(FString NewValue)` | Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true.
`public inline void `[`ClearRhUrl`](#structFRHAPI__NotificationCreate_1a4376b256f42a972fb782b4e70b48f53c)`()` | Clears the value of RhUrl_Optional and sets RhUrl_IsSet to false.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1a2380bfb434d133469ff26ead31d7de1b)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1a04a2dc2c902a5acb0041de12b6f8eae6)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1ae5529e828fcd280c5b49ae661b9e20cf)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__NotificationCreate_1aef2522d79f3a3f80f788eec472f72577)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__NotificationCreate_1ab1d44f7bbdabc2fe8373d987938dbb8d)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__NotificationCreate_1a12abc4d5f1931d5ff50e8937bf44dec7)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__NotificationCreate_1a54b2434bb2971cec3ac16043ddbcd502)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__NotificationCreate_1a01eef552ff3657f797242a435a3f27f5)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1af0752d1df2cea737cf54519f5f5135b9)`()` | Gets the value of Etag_Optional, regardless of it having been set.
`public inline const FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1ab6bc32e156c1d89e93c8032592dbbb5e)`() const` | Gets the value of Etag_Optional, regardless of it having been set.
`public inline const FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1a5b6f47e5eaf9f47315b6a9288d8e3225)`(const FString & DefaultValue) const` | Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEtag`](#structFRHAPI__NotificationCreate_1aed19722f10bf0167cfec2eff5a89d2a8)`(FString & OutValue) const` | Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetEtagOrNull`](#structFRHAPI__NotificationCreate_1a8d317f2c741c8fd624bdd17315eaba9a)`()` | Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetEtagOrNull`](#structFRHAPI__NotificationCreate_1a36c85629c00031dd796c4967643f3c8f)`() const` | Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEtag`](#structFRHAPI__NotificationCreate_1a9e407e790330d460b78af078c64b823b)`(FString NewValue)` | Sets the value of Etag_Optional and also sets Etag_IsSet to true.
`public inline void `[`ClearEtag`](#structFRHAPI__NotificationCreate_1a3db358e09781131cc09ab950f6f7f3f6)`()` | Clears the value of Etag_Optional and sets Etag_IsSet to false.

#### Members

#### `public FString `[`Message`](#structFRHAPI__NotificationCreate_1aa0b36df125568c5a818f6d912e68026b) <a id="structFRHAPI__NotificationCreate_1aa0b36df125568c5a818f6d912e68026b"></a>

Base Message for the notification.

<br>
#### `public FString `[`RhUrl_Optional`](#structFRHAPI__NotificationCreate_1aab76e69babb5831da06322158ac18a5a) <a id="structFRHAPI__NotificationCreate_1aab76e69babb5831da06322158ac18a5a"></a>

Path to get additional data about this notification.

<br>
#### `public bool `[`RhUrl_IsSet`](#structFRHAPI__NotificationCreate_1a92cbe6572c2358361c7fd7b7f8881339) <a id="structFRHAPI__NotificationCreate_1a92cbe6572c2358361c7fd7b7f8881339"></a>

true if RhUrl_Optional has been set to a value

<br>
#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__NotificationCreate_1a262983e21a17f8f39a40b96cf38baf89) <a id="structFRHAPI__NotificationCreate_1a262983e21a17f8f39a40b96cf38baf89"></a>

Custom values for the notification.

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__NotificationCreate_1aef02ee1a1a84a9c2ef1b83e9059ce0dc) <a id="structFRHAPI__NotificationCreate_1aef02ee1a1a84a9c2ef1b83e9059ce0dc"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public FString `[`Etag_Optional`](#structFRHAPI__NotificationCreate_1af0a10c4259a996effcdcf157ce8f6053) <a id="structFRHAPI__NotificationCreate_1af0a10c4259a996effcdcf157ce8f6053"></a>

ETag for the resource at rh_url at the time of this notification.

<br>
#### `public bool `[`Etag_IsSet`](#structFRHAPI__NotificationCreate_1a84ce9b6e74852a4e933096b16d1b554c) <a id="structFRHAPI__NotificationCreate_1a84ce9b6e74852a4e933096b16d1b554c"></a>

true if Etag_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__NotificationCreate_1a41db2b45c132d9b93af6f18e647a3dd7)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__NotificationCreate_1a41db2b45c132d9b93af6f18e647a3dd7"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__NotificationCreate_1aaa33690fbc48e369e62493c435a9bb68)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__NotificationCreate_1aaa33690fbc48e369e62493c435a9bb68"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetMessage`](#structFRHAPI__NotificationCreate_1a0152ca697ce4a14177fab0a434cfbe48)`()` <a id="structFRHAPI__NotificationCreate_1a0152ca697ce4a14177fab0a434cfbe48"></a>

Gets the value of Message.

<br>
#### `public inline const FString & `[`GetMessage`](#structFRHAPI__NotificationCreate_1adcab94108c90cdf9aa68dc7ff7159029)`() const` <a id="structFRHAPI__NotificationCreate_1adcab94108c90cdf9aa68dc7ff7159029"></a>

Gets the value of Message.

<br>
#### `public inline void `[`SetMessage`](#structFRHAPI__NotificationCreate_1a0f46dfa8a6bd62de5713e126a99b127a)`(FString NewValue)` <a id="structFRHAPI__NotificationCreate_1a0f46dfa8a6bd62de5713e126a99b127a"></a>

Sets the value of Message.

<br>
#### `public inline FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a330c21817ef1b8f82bf3b37309ddf2f7)`()` <a id="structFRHAPI__NotificationCreate_1a330c21817ef1b8f82bf3b37309ddf2f7"></a>

Gets the value of RhUrl_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a277ef684586b3ee64cb16a0553a6c000)`() const` <a id="structFRHAPI__NotificationCreate_1a277ef684586b3ee64cb16a0553a6c000"></a>

Gets the value of RhUrl_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a39516c3d34ca765c1b0b7df4a138cbda)`(const FString & DefaultValue) const` <a id="structFRHAPI__NotificationCreate_1a39516c3d34ca765c1b0b7df4a138cbda"></a>

Gets the value of RhUrl_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a2e8c420d3c44cdfff8a68702694640de)`(FString & OutValue) const` <a id="structFRHAPI__NotificationCreate_1a2e8c420d3c44cdfff8a68702694640de"></a>

Fills OutValue with the value of RhUrl_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetRhUrlOrNull`](#structFRHAPI__NotificationCreate_1a94579c2d8042f573e7331d83e6c5c92d)`()` <a id="structFRHAPI__NotificationCreate_1a94579c2d8042f573e7331d83e6c5c92d"></a>

Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetRhUrlOrNull`](#structFRHAPI__NotificationCreate_1a5cfe484ab2e2c5132a5de200f4d8ec62)`() const` <a id="structFRHAPI__NotificationCreate_1a5cfe484ab2e2c5132a5de200f4d8ec62"></a>

Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetRhUrl`](#structFRHAPI__NotificationCreate_1ae4834ed698007730c549b97cef2d7af2)`(FString NewValue)` <a id="structFRHAPI__NotificationCreate_1ae4834ed698007730c549b97cef2d7af2"></a>

Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true.

<br>
#### `public inline void `[`ClearRhUrl`](#structFRHAPI__NotificationCreate_1a4376b256f42a972fb782b4e70b48f53c)`()` <a id="structFRHAPI__NotificationCreate_1a4376b256f42a972fb782b4e70b48f53c"></a>

Clears the value of RhUrl_Optional and sets RhUrl_IsSet to false.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1a2380bfb434d133469ff26ead31d7de1b)`()` <a id="structFRHAPI__NotificationCreate_1a2380bfb434d133469ff26ead31d7de1b"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1a04a2dc2c902a5acb0041de12b6f8eae6)`() const` <a id="structFRHAPI__NotificationCreate_1a04a2dc2c902a5acb0041de12b6f8eae6"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1ae5529e828fcd280c5b49ae661b9e20cf)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__NotificationCreate_1ae5529e828fcd280c5b49ae661b9e20cf"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__NotificationCreate_1aef2522d79f3a3f80f788eec472f72577)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__NotificationCreate_1aef2522d79f3a3f80f788eec472f72577"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__NotificationCreate_1ab1d44f7bbdabc2fe8373d987938dbb8d)`()` <a id="structFRHAPI__NotificationCreate_1ab1d44f7bbdabc2fe8373d987938dbb8d"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__NotificationCreate_1a12abc4d5f1931d5ff50e8937bf44dec7)`() const` <a id="structFRHAPI__NotificationCreate_1a12abc4d5f1931d5ff50e8937bf44dec7"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__NotificationCreate_1a54b2434bb2971cec3ac16043ddbcd502)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__NotificationCreate_1a54b2434bb2971cec3ac16043ddbcd502"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__NotificationCreate_1a01eef552ff3657f797242a435a3f27f5)`()` <a id="structFRHAPI__NotificationCreate_1a01eef552ff3657f797242a435a3f27f5"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1af0752d1df2cea737cf54519f5f5135b9)`()` <a id="structFRHAPI__NotificationCreate_1af0752d1df2cea737cf54519f5f5135b9"></a>

Gets the value of Etag_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1ab6bc32e156c1d89e93c8032592dbbb5e)`() const` <a id="structFRHAPI__NotificationCreate_1ab6bc32e156c1d89e93c8032592dbbb5e"></a>

Gets the value of Etag_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1a5b6f47e5eaf9f47315b6a9288d8e3225)`(const FString & DefaultValue) const` <a id="structFRHAPI__NotificationCreate_1a5b6f47e5eaf9f47315b6a9288d8e3225"></a>

Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetEtag`](#structFRHAPI__NotificationCreate_1aed19722f10bf0167cfec2eff5a89d2a8)`(FString & OutValue) const` <a id="structFRHAPI__NotificationCreate_1aed19722f10bf0167cfec2eff5a89d2a8"></a>

Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetEtagOrNull`](#structFRHAPI__NotificationCreate_1a8d317f2c741c8fd624bdd17315eaba9a)`()` <a id="structFRHAPI__NotificationCreate_1a8d317f2c741c8fd624bdd17315eaba9a"></a>

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetEtagOrNull`](#structFRHAPI__NotificationCreate_1a36c85629c00031dd796c4967643f3c8f)`() const` <a id="structFRHAPI__NotificationCreate_1a36c85629c00031dd796c4967643f3c8f"></a>

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetEtag`](#structFRHAPI__NotificationCreate_1a9e407e790330d460b78af078c64b823b)`(FString NewValue)` <a id="structFRHAPI__NotificationCreate_1a9e407e790330d460b78af078c64b823b"></a>

Sets the value of Etag_Optional and also sets Etag_IsSet to true.

<br>
#### `public inline void `[`ClearEtag`](#structFRHAPI__NotificationCreate_1a3db358e09781131cc09ab950f6f7f3f6)`()` <a id="structFRHAPI__NotificationCreate_1a3db358e09781131cc09ab950f6f7f3f6"></a>

Clears the value of Etag_Optional and sets Etag_IsSet to false.

<br>
