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
`public inline FORCEINLINE FString & `[`GetMessage`](#structFRHAPI__NotificationCreate_1a19a71e0f1d7b7ad7ce608881eff50d0f)`()` | Gets the value of Message.
`public inline FORCEINLINE const FString & `[`GetMessage`](#structFRHAPI__NotificationCreate_1a90248b4b8f982eb0d0ac81767c6e58c5)`() const` | Gets the value of Message.
`public inline FORCEINLINE void `[`SetMessage`](#structFRHAPI__NotificationCreate_1af9ff74df55909f293f9b7fa14ecb3c65)`(const FString & NewValue)` | Sets the value of Message.
`public inline FORCEINLINE void `[`SetMessage`](#structFRHAPI__NotificationCreate_1a580c5155d094779513757d85dd107c0b)`(FString && NewValue)` | Sets the value of Message using move semantics.
`public inline FORCEINLINE FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a112a841b9cb829366858c5de36bf85d6)`()` | Gets the value of RhUrl_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1aee8f655bc615d548578699cca68d0c30)`() const` | Gets the value of RhUrl_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1adc1b6b2312081ab68dd76769e56d3cc2)`(const FString & DefaultValue) const` | Gets the value of RhUrl_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a05e22529e51e5ad837e9be6a26e7cafb)`(FString & OutValue) const` | Fills OutValue with the value of RhUrl_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetRhUrlOrNull`](#structFRHAPI__NotificationCreate_1ae5874f0c857d5a217c629febe80d0c82)`()` | Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetRhUrlOrNull`](#structFRHAPI__NotificationCreate_1a67f50f0aa6b18c844d2e794f8b1f0c93)`() const` | Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetRhUrl`](#structFRHAPI__NotificationCreate_1aa4c74b95a15543d722f3cbf90c6f6860)`(const FString & NewValue)` | Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true.
`public inline FORCEINLINE void `[`SetRhUrl`](#structFRHAPI__NotificationCreate_1a4afcdb7c467cfb041f7b318c7886d22d)`(FString && NewValue)` | Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true using move semantics.
`public inline void `[`ClearRhUrl`](#structFRHAPI__NotificationCreate_1a4376b256f42a972fb782b4e70b48f53c)`()` | Clears the value of RhUrl_Optional and sets RhUrl_IsSet to false.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1a3715c84e12abf73369f46977d40aff25)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1a1562c52af8852c4fcc66b0d3e36f7e9b)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1ac72ee1cb25f00ae02d2c46641b8dfffb)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__NotificationCreate_1a5a99466d4f541c607b01f84e9f765a72)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__NotificationCreate_1a60078bba9e213d6ce43856f4e8635914)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__NotificationCreate_1a368cd5148d5924f47513d9c4b1ca0549)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__NotificationCreate_1adeea8474ebe60521186afbeb05743488)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__NotificationCreate_1a6bf7c63f05fce5315321fca05996e4d7)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__NotificationCreate_1a01eef552ff3657f797242a435a3f27f5)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1ad8548015b18aba14b1bb0408924d164b)`()` | Gets the value of Etag_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1ab693f3d845d056f51217227664599e13)`() const` | Gets the value of Etag_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1aa965ba19cf1a2f86bc6f05991398ab9e)`(const FString & DefaultValue) const` | Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetEtag`](#structFRHAPI__NotificationCreate_1a5749b24d7892b0c578f675eb2755b4a5)`(FString & OutValue) const` | Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetEtagOrNull`](#structFRHAPI__NotificationCreate_1afce6e4978238425fa53500d621773caf)`()` | Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetEtagOrNull`](#structFRHAPI__NotificationCreate_1aadb34339ae2b61333ca3021fcb4b2e8a)`() const` | Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetEtag`](#structFRHAPI__NotificationCreate_1ae71055d4b1047b1e6eb415f415b9145f)`(const FString & NewValue)` | Sets the value of Etag_Optional and also sets Etag_IsSet to true.
`public inline FORCEINLINE void `[`SetEtag`](#structFRHAPI__NotificationCreate_1a42828b616639acedcb951199a160c82e)`(FString && NewValue)` | Sets the value of Etag_Optional and also sets Etag_IsSet to true using move semantics.
`public inline void `[`ClearEtag`](#structFRHAPI__NotificationCreate_1a3db358e09781131cc09ab950f6f7f3f6)`()` | Clears the value of Etag_Optional and sets Etag_IsSet to false.

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

#### `public inline FORCEINLINE FString & `[`GetMessage`](#structFRHAPI__NotificationCreate_1a19a71e0f1d7b7ad7ce608881eff50d0f)`()` <a id="structFRHAPI__NotificationCreate_1a19a71e0f1d7b7ad7ce608881eff50d0f"></a>

Gets the value of Message.

#### `public inline FORCEINLINE const FString & `[`GetMessage`](#structFRHAPI__NotificationCreate_1a90248b4b8f982eb0d0ac81767c6e58c5)`() const` <a id="structFRHAPI__NotificationCreate_1a90248b4b8f982eb0d0ac81767c6e58c5"></a>

Gets the value of Message.

#### `public inline FORCEINLINE void `[`SetMessage`](#structFRHAPI__NotificationCreate_1af9ff74df55909f293f9b7fa14ecb3c65)`(const FString & NewValue)` <a id="structFRHAPI__NotificationCreate_1af9ff74df55909f293f9b7fa14ecb3c65"></a>

Sets the value of Message.

#### `public inline FORCEINLINE void `[`SetMessage`](#structFRHAPI__NotificationCreate_1a580c5155d094779513757d85dd107c0b)`(FString && NewValue)` <a id="structFRHAPI__NotificationCreate_1a580c5155d094779513757d85dd107c0b"></a>

Sets the value of Message using move semantics.

#### `public inline FORCEINLINE FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a112a841b9cb829366858c5de36bf85d6)`()` <a id="structFRHAPI__NotificationCreate_1a112a841b9cb829366858c5de36bf85d6"></a>

Gets the value of RhUrl_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1aee8f655bc615d548578699cca68d0c30)`() const` <a id="structFRHAPI__NotificationCreate_1aee8f655bc615d548578699cca68d0c30"></a>

Gets the value of RhUrl_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1adc1b6b2312081ab68dd76769e56d3cc2)`(const FString & DefaultValue) const` <a id="structFRHAPI__NotificationCreate_1adc1b6b2312081ab68dd76769e56d3cc2"></a>

Gets the value of RhUrl_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetRhUrl`](#structFRHAPI__NotificationCreate_1a05e22529e51e5ad837e9be6a26e7cafb)`(FString & OutValue) const` <a id="structFRHAPI__NotificationCreate_1a05e22529e51e5ad837e9be6a26e7cafb"></a>

Fills OutValue with the value of RhUrl_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetRhUrlOrNull`](#structFRHAPI__NotificationCreate_1ae5874f0c857d5a217c629febe80d0c82)`()` <a id="structFRHAPI__NotificationCreate_1ae5874f0c857d5a217c629febe80d0c82"></a>

Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetRhUrlOrNull`](#structFRHAPI__NotificationCreate_1a67f50f0aa6b18c844d2e794f8b1f0c93)`() const` <a id="structFRHAPI__NotificationCreate_1a67f50f0aa6b18c844d2e794f8b1f0c93"></a>

Returns a pointer to RhUrl_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetRhUrl`](#structFRHAPI__NotificationCreate_1aa4c74b95a15543d722f3cbf90c6f6860)`(const FString & NewValue)` <a id="structFRHAPI__NotificationCreate_1aa4c74b95a15543d722f3cbf90c6f6860"></a>

Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true.

#### `public inline FORCEINLINE void `[`SetRhUrl`](#structFRHAPI__NotificationCreate_1a4afcdb7c467cfb041f7b318c7886d22d)`(FString && NewValue)` <a id="structFRHAPI__NotificationCreate_1a4afcdb7c467cfb041f7b318c7886d22d"></a>

Sets the value of RhUrl_Optional and also sets RhUrl_IsSet to true using move semantics.

#### `public inline void `[`ClearRhUrl`](#structFRHAPI__NotificationCreate_1a4376b256f42a972fb782b4e70b48f53c)`()` <a id="structFRHAPI__NotificationCreate_1a4376b256f42a972fb782b4e70b48f53c"></a>

Clears the value of RhUrl_Optional and sets RhUrl_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1a3715c84e12abf73369f46977d40aff25)`()` <a id="structFRHAPI__NotificationCreate_1a3715c84e12abf73369f46977d40aff25"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1a1562c52af8852c4fcc66b0d3e36f7e9b)`() const` <a id="structFRHAPI__NotificationCreate_1a1562c52af8852c4fcc66b0d3e36f7e9b"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__NotificationCreate_1ac72ee1cb25f00ae02d2c46641b8dfffb)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__NotificationCreate_1ac72ee1cb25f00ae02d2c46641b8dfffb"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__NotificationCreate_1a5a99466d4f541c607b01f84e9f765a72)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__NotificationCreate_1a5a99466d4f541c607b01f84e9f765a72"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__NotificationCreate_1a60078bba9e213d6ce43856f4e8635914)`()` <a id="structFRHAPI__NotificationCreate_1a60078bba9e213d6ce43856f4e8635914"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__NotificationCreate_1a368cd5148d5924f47513d9c4b1ca0549)`() const` <a id="structFRHAPI__NotificationCreate_1a368cd5148d5924f47513d9c4b1ca0549"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__NotificationCreate_1adeea8474ebe60521186afbeb05743488)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__NotificationCreate_1adeea8474ebe60521186afbeb05743488"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__NotificationCreate_1a6bf7c63f05fce5315321fca05996e4d7)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__NotificationCreate_1a6bf7c63f05fce5315321fca05996e4d7"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__NotificationCreate_1a01eef552ff3657f797242a435a3f27f5)`()` <a id="structFRHAPI__NotificationCreate_1a01eef552ff3657f797242a435a3f27f5"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1ad8548015b18aba14b1bb0408924d164b)`()` <a id="structFRHAPI__NotificationCreate_1ad8548015b18aba14b1bb0408924d164b"></a>

Gets the value of Etag_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1ab693f3d845d056f51217227664599e13)`() const` <a id="structFRHAPI__NotificationCreate_1ab693f3d845d056f51217227664599e13"></a>

Gets the value of Etag_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetEtag`](#structFRHAPI__NotificationCreate_1aa965ba19cf1a2f86bc6f05991398ab9e)`(const FString & DefaultValue) const` <a id="structFRHAPI__NotificationCreate_1aa965ba19cf1a2f86bc6f05991398ab9e"></a>

Gets the value of Etag_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetEtag`](#structFRHAPI__NotificationCreate_1a5749b24d7892b0c578f675eb2755b4a5)`(FString & OutValue) const` <a id="structFRHAPI__NotificationCreate_1a5749b24d7892b0c578f675eb2755b4a5"></a>

Fills OutValue with the value of Etag_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetEtagOrNull`](#structFRHAPI__NotificationCreate_1afce6e4978238425fa53500d621773caf)`()` <a id="structFRHAPI__NotificationCreate_1afce6e4978238425fa53500d621773caf"></a>

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetEtagOrNull`](#structFRHAPI__NotificationCreate_1aadb34339ae2b61333ca3021fcb4b2e8a)`() const` <a id="structFRHAPI__NotificationCreate_1aadb34339ae2b61333ca3021fcb4b2e8a"></a>

Returns a pointer to Etag_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetEtag`](#structFRHAPI__NotificationCreate_1ae71055d4b1047b1e6eb415f415b9145f)`(const FString & NewValue)` <a id="structFRHAPI__NotificationCreate_1ae71055d4b1047b1e6eb415f415b9145f"></a>

Sets the value of Etag_Optional and also sets Etag_IsSet to true.

#### `public inline FORCEINLINE void `[`SetEtag`](#structFRHAPI__NotificationCreate_1a42828b616639acedcb951199a160c82e)`(FString && NewValue)` <a id="structFRHAPI__NotificationCreate_1a42828b616639acedcb951199a160c82e"></a>

Sets the value of Etag_Optional and also sets Etag_IsSet to true using move semantics.

#### `public inline void `[`ClearEtag`](#structFRHAPI__NotificationCreate_1a3db358e09781131cc09ab950f6f7f3f6)`()` <a id="structFRHAPI__NotificationCreate_1a3db358e09781131cc09ab950f6f7f3f6"></a>

Clears the value of Etag_Optional and sets Etag_IsSet to false.

