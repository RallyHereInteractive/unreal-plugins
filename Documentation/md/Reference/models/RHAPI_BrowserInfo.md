---
title: RHAPI_BrowserInfo
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_BrowserInfo`](#structFRHAPI__BrowserInfo) | Information about the browser resource in a session.

## struct `FRHAPI_BrowserInfo` <a id="structFRHAPI__BrowserInfo"></a>

```
struct FRHAPI_BrowserInfo
  : public FRHAPI_Model
```

Information about the browser resource in a session.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__BrowserInfo_1a1ad770cf3fe97c92dab9795e64b4a8ed) | Custom data with the listing of the instance in the Session browser.
`public bool `[`CustomData_IsSet`](#structFRHAPI__BrowserInfo_1a27eb9d0cd09c5d0f93d0631e19b0e604) | true if CustomData_Optional has been set to a value
`public FDateTime `[`CreatedTimestamp_Optional`](#structFRHAPI__BrowserInfo_1a757dde22918ff8ddffba918fb659933c) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public bool `[`CreatedTimestamp_IsSet`](#structFRHAPI__BrowserInfo_1ac83f0ff5d82f29c733344ade1638d9d8) | true if CreatedTimestamp_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__BrowserInfo_1a20ee84c7ebab04ef64b22cdc8cae6629)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__BrowserInfo_1a1991b225ba4f722eb4b561105e1111a8)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserInfo_1a0845cf6579ec95d71026ae39e037c196)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserInfo_1a0eef27223bda30aa1aac5e92f6edc11f)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserInfo_1a5c2dc84977228f1386f7243f9356415e)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__BrowserInfo_1a2ee73d5cd50457986be3ca8e979c29d1)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserInfo_1a52ba57e0c65fb78cde3783bdb26f1bee)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserInfo_1affb8f4ed512044d1499dcf6255d67270)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__BrowserInfo_1a5bb57ec4f41d82faecc1f98dfc16f22e)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__BrowserInfo_1a6227fc626df8e8b2588467e897bbbd4c)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__BrowserInfo_1ae8f8398bbf009d658cf121b7734c9ba0)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1a2168c428d9a5157f5999a73b8db1b574)`()` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1a8a4c1c36ec1ab595c00bebe51e70fa13)`() const` | Gets the value of CreatedTimestamp_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1ac1d29e9261af2a6ac81611409b9bb450)`(const FDateTime & DefaultValue) const` | Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1a27d74d9066f570c1aa23a7619df3a9fc)`(FDateTime & OutValue) const` | Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__BrowserInfo_1a881632a4facd55e6598f21c06c2f3f0b)`()` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__BrowserInfo_1ad82c63f1ee7623fd5bb8c64639486422)`() const` | Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1ae9fa8168508a1c045b3f3ca4c0acdd83)`(const FDateTime & NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.
`public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1a7eb9d410bd3dea6d3446b8ae5d29754c)`(FDateTime && NewValue)` | Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.
`public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__BrowserInfo_1a6a8974f574242c1a62b34278b6b38e32)`()` | Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.

### Members

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__BrowserInfo_1a1ad770cf3fe97c92dab9795e64b4a8ed) <a id="structFRHAPI__BrowserInfo_1a1ad770cf3fe97c92dab9795e64b4a8ed"></a>

Custom data with the listing of the instance in the Session browser.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__BrowserInfo_1a27eb9d0cd09c5d0f93d0631e19b0e604) <a id="structFRHAPI__BrowserInfo_1a27eb9d0cd09c5d0f93d0631e19b0e604"></a>

true if CustomData_Optional has been set to a value

#### `public FDateTime `[`CreatedTimestamp_Optional`](#structFRHAPI__BrowserInfo_1a757dde22918ff8ddffba918fb659933c) <a id="structFRHAPI__BrowserInfo_1a757dde22918ff8ddffba918fb659933c"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public bool `[`CreatedTimestamp_IsSet`](#structFRHAPI__BrowserInfo_1ac83f0ff5d82f29c733344ade1638d9d8) <a id="structFRHAPI__BrowserInfo_1ac83f0ff5d82f29c733344ade1638d9d8"></a>

true if CreatedTimestamp_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__BrowserInfo_1a20ee84c7ebab04ef64b22cdc8cae6629)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__BrowserInfo_1a20ee84c7ebab04ef64b22cdc8cae6629"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__BrowserInfo_1a1991b225ba4f722eb4b561105e1111a8)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__BrowserInfo_1a1991b225ba4f722eb4b561105e1111a8"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserInfo_1a0845cf6579ec95d71026ae39e037c196)`()` <a id="structFRHAPI__BrowserInfo_1a0845cf6579ec95d71026ae39e037c196"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserInfo_1a0eef27223bda30aa1aac5e92f6edc11f)`() const` <a id="structFRHAPI__BrowserInfo_1a0eef27223bda30aa1aac5e92f6edc11f"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__BrowserInfo_1a5c2dc84977228f1386f7243f9356415e)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__BrowserInfo_1a5c2dc84977228f1386f7243f9356415e"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__BrowserInfo_1a2ee73d5cd50457986be3ca8e979c29d1)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__BrowserInfo_1a2ee73d5cd50457986be3ca8e979c29d1"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserInfo_1a52ba57e0c65fb78cde3783bdb26f1bee)`()` <a id="structFRHAPI__BrowserInfo_1a52ba57e0c65fb78cde3783bdb26f1bee"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__BrowserInfo_1affb8f4ed512044d1499dcf6255d67270)`() const` <a id="structFRHAPI__BrowserInfo_1affb8f4ed512044d1499dcf6255d67270"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__BrowserInfo_1a5bb57ec4f41d82faecc1f98dfc16f22e)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__BrowserInfo_1a5bb57ec4f41d82faecc1f98dfc16f22e"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__BrowserInfo_1a6227fc626df8e8b2588467e897bbbd4c)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__BrowserInfo_1a6227fc626df8e8b2588467e897bbbd4c"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__BrowserInfo_1ae8f8398bbf009d658cf121b7734c9ba0)`()` <a id="structFRHAPI__BrowserInfo_1ae8f8398bbf009d658cf121b7734c9ba0"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1a2168c428d9a5157f5999a73b8db1b574)`()` <a id="structFRHAPI__BrowserInfo_1a2168c428d9a5157f5999a73b8db1b574"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1a8a4c1c36ec1ab595c00bebe51e70fa13)`() const` <a id="structFRHAPI__BrowserInfo_1a8a4c1c36ec1ab595c00bebe51e70fa13"></a>

Gets the value of CreatedTimestamp_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1ac1d29e9261af2a6ac81611409b9bb450)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__BrowserInfo_1ac1d29e9261af2a6ac81611409b9bb450"></a>

Gets the value of CreatedTimestamp_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1a27d74d9066f570c1aa23a7619df3a9fc)`(FDateTime & OutValue) const` <a id="structFRHAPI__BrowserInfo_1a27d74d9066f570c1aa23a7619df3a9fc"></a>

Fills OutValue with the value of CreatedTimestamp_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__BrowserInfo_1a881632a4facd55e6598f21c06c2f3f0b)`()` <a id="structFRHAPI__BrowserInfo_1a881632a4facd55e6598f21c06c2f3f0b"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetCreatedTimestampOrNull`](#structFRHAPI__BrowserInfo_1ad82c63f1ee7623fd5bb8c64639486422)`() const` <a id="structFRHAPI__BrowserInfo_1ad82c63f1ee7623fd5bb8c64639486422"></a>

Returns a pointer to CreatedTimestamp_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1ae9fa8168508a1c045b3f3ca4c0acdd83)`(const FDateTime & NewValue)` <a id="structFRHAPI__BrowserInfo_1ae9fa8168508a1c045b3f3ca4c0acdd83"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCreatedTimestamp`](#structFRHAPI__BrowserInfo_1a7eb9d410bd3dea6d3446b8ae5d29754c)`(FDateTime && NewValue)` <a id="structFRHAPI__BrowserInfo_1a7eb9d410bd3dea6d3446b8ae5d29754c"></a>

Sets the value of CreatedTimestamp_Optional and also sets CreatedTimestamp_IsSet to true using move semantics.

#### `public inline void `[`ClearCreatedTimestamp`](#structFRHAPI__BrowserInfo_1a6a8974f574242c1a62b34278b6b38e32)`()` <a id="structFRHAPI__BrowserInfo_1a6a8974f574242c1a62b34278b6b38e32"></a>

Clears the value of CreatedTimestamp_Optional and sets CreatedTimestamp_IsSet to false.

