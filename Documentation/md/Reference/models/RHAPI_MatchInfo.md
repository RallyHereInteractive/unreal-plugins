---
title: RHAPI_MatchInfo
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchInfo`](#structFRHAPI__MatchInfo) | DEPRECATED Information about a match.

## struct `FRHAPI_MatchInfo` <a id="structFRHAPI__MatchInfo"></a>

```
struct FRHAPI_MatchInfo
  : public FRHAPI_Model
```

DEPRECATED Information about a match.

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`MatchId`](#structFRHAPI__MatchInfo_1a7accea9f13f833a68b7a89a86de907b2) | Unique ID.
`public FDateTime `[`Created`](#structFRHAPI__MatchInfo_1a4904d006b5ed11e234e9e4b5a407cc54) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchInfo_1a02d38c6dbc7c9e212d97892ca7807792) | instance-defined custom data
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchInfo_1a1429b2bd18c520ce2ba22a39710c5765) | true if CustomData_Optional has been set to a value
`public TArray< FString > `[`TicketIds_Optional`](#structFRHAPI__MatchInfo_1a38789aaa46dde5136ed9a8a3626bdc0f) | List of tickets that were assigned to this match if created by matchmaking.
`public bool `[`TicketIds_IsSet`](#structFRHAPI__MatchInfo_1a91574dfaac67cedbc94f7bf58ed53df9) | true if TicketIds_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchInfo_1a0e14cb4abf932498902694eddb02e8c5)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchInfo_1ad0f70516932bf8ee3a272b574e54e449)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetMatchId`](#structFRHAPI__MatchInfo_1ada1bfa30045a277e162469172fdd518f)`()` | Gets the value of MatchId.
`public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchInfo_1ae95b129030b44df637ece5514404a1f8)`() const` | Gets the value of MatchId.
`public inline void `[`SetMatchId`](#structFRHAPI__MatchInfo_1ae255085185681d2d8bae8f32929e4d43)`(const FString & NewValue)` | Sets the value of MatchId.
`public inline void `[`SetMatchId`](#structFRHAPI__MatchInfo_1aebc1383ce1deea94d0b139e0765cfa13)`(FString && NewValue)` | Sets the value of MatchId using move semantics.
`public inline FDateTime & `[`GetCreated`](#structFRHAPI__MatchInfo_1a408145db5a2df4c8f5ec1d2d38fb6557)`()` | Gets the value of Created.
`public inline const FDateTime & `[`GetCreated`](#structFRHAPI__MatchInfo_1af90511503d567a9c893a187d3841cba1)`() const` | Gets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__MatchInfo_1a5544dbbaef1f9ebfba6cfadfe52b8eaa)`(const FDateTime & NewValue)` | Sets the value of Created.
`public inline void `[`SetCreated`](#structFRHAPI__MatchInfo_1af00a5080ac31298b59d5e9de35e8d68e)`(FDateTime && NewValue)` | Sets the value of Created using move semantics.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchInfo_1adee2f73fe833934b0160f8497dd75da7)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchInfo_1acd3869c5df52328fe7ede9b4520313fe)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchInfo_1a3f1bc04830897672c58389cab5863f29)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__MatchInfo_1aadb7b3626c5833f981e3d1897212b85e)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchInfo_1a63a62452e477a2673e7b2340a2d483a9)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchInfo_1aca29485ba71d7c4c454354e92276bdb6)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchInfo_1a2486cf861dabf7cbd1dd66085c7def57)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`SetCustomData`](#structFRHAPI__MatchInfo_1a78df7b03b198462961629d850db3815f)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchInfo_1a7272b7c7f05e68f044146691c6a444b7)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchInfo_1ade4a70e16a0b991442c814a202db7c37)`() const` | Checks whether CustomData_Optional has been set.
`public inline TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchInfo_1a945fb0e88ccdac866596b1f735ede2a8)`()` | Gets the value of TicketIds_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchInfo_1a84f6c092947650aade894ae5ab8016d3)`() const` | Gets the value of TicketIds_Optional, regardless of it having been set.
`public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchInfo_1af9a7c2031dd7a1a894443bbc17aad8b6)`(const TArray< FString > & DefaultValue) const` | Gets the value of TicketIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetTicketIds`](#structFRHAPI__MatchInfo_1aa25cb0d6646abad91133a83b1ea782e0)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of TicketIds_Optional and returns true if it has been set, otherwise returns false.
`public inline TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchInfo_1a922da831208ec94a6c9eef14d085f168)`()` | Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.
`public inline const TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchInfo_1ae16fab8e0b4fe8aa10c72d5ca17ba3af)`() const` | Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetTicketIds`](#structFRHAPI__MatchInfo_1ac1376837d89774af571875a8d05dbbdc)`(const TArray< FString > & NewValue)` | Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true.
`public inline void `[`SetTicketIds`](#structFRHAPI__MatchInfo_1ade789dbf8e761ab25e248381ac06d399)`(TArray< FString > && NewValue)` | Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true using move semantics.
`public inline void `[`ClearTicketIds`](#structFRHAPI__MatchInfo_1a0222662660481f1f5beeb18231b94b39)`()` | Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false.
`public inline bool `[`IsTicketIdsSet`](#structFRHAPI__MatchInfo_1af8d200efbbda6529b89d860a14171162)`() const` | Checks whether TicketIds_Optional has been set.

### Members

#### `public FString `[`MatchId`](#structFRHAPI__MatchInfo_1a7accea9f13f833a68b7a89a86de907b2) <a id="structFRHAPI__MatchInfo_1a7accea9f13f833a68b7a89a86de907b2"></a>

Unique ID.

#### `public FDateTime `[`Created`](#structFRHAPI__MatchInfo_1a4904d006b5ed11e234e9e4b5a407cc54) <a id="structFRHAPI__MatchInfo_1a4904d006b5ed11e234e9e4b5a407cc54"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchInfo_1a02d38c6dbc7c9e212d97892ca7807792) <a id="structFRHAPI__MatchInfo_1a02d38c6dbc7c9e212d97892ca7807792"></a>

instance-defined custom data

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchInfo_1a1429b2bd18c520ce2ba22a39710c5765) <a id="structFRHAPI__MatchInfo_1a1429b2bd18c520ce2ba22a39710c5765"></a>

true if CustomData_Optional has been set to a value

#### `public TArray< FString > `[`TicketIds_Optional`](#structFRHAPI__MatchInfo_1a38789aaa46dde5136ed9a8a3626bdc0f) <a id="structFRHAPI__MatchInfo_1a38789aaa46dde5136ed9a8a3626bdc0f"></a>

List of tickets that were assigned to this match if created by matchmaking.

#### `public bool `[`TicketIds_IsSet`](#structFRHAPI__MatchInfo_1a91574dfaac67cedbc94f7bf58ed53df9) <a id="structFRHAPI__MatchInfo_1a91574dfaac67cedbc94f7bf58ed53df9"></a>

true if TicketIds_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchInfo_1a0e14cb4abf932498902694eddb02e8c5)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchInfo_1a0e14cb4abf932498902694eddb02e8c5"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchInfo_1ad0f70516932bf8ee3a272b574e54e449)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchInfo_1ad0f70516932bf8ee3a272b574e54e449"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FString & `[`GetMatchId`](#structFRHAPI__MatchInfo_1ada1bfa30045a277e162469172fdd518f)`()` <a id="structFRHAPI__MatchInfo_1ada1bfa30045a277e162469172fdd518f"></a>

Gets the value of MatchId.

#### `public inline const FString & `[`GetMatchId`](#structFRHAPI__MatchInfo_1ae95b129030b44df637ece5514404a1f8)`() const` <a id="structFRHAPI__MatchInfo_1ae95b129030b44df637ece5514404a1f8"></a>

Gets the value of MatchId.

#### `public inline void `[`SetMatchId`](#structFRHAPI__MatchInfo_1ae255085185681d2d8bae8f32929e4d43)`(const FString & NewValue)` <a id="structFRHAPI__MatchInfo_1ae255085185681d2d8bae8f32929e4d43"></a>

Sets the value of MatchId.

#### `public inline void `[`SetMatchId`](#structFRHAPI__MatchInfo_1aebc1383ce1deea94d0b139e0765cfa13)`(FString && NewValue)` <a id="structFRHAPI__MatchInfo_1aebc1383ce1deea94d0b139e0765cfa13"></a>

Sets the value of MatchId using move semantics.

#### `public inline FDateTime & `[`GetCreated`](#structFRHAPI__MatchInfo_1a408145db5a2df4c8f5ec1d2d38fb6557)`()` <a id="structFRHAPI__MatchInfo_1a408145db5a2df4c8f5ec1d2d38fb6557"></a>

Gets the value of Created.

#### `public inline const FDateTime & `[`GetCreated`](#structFRHAPI__MatchInfo_1af90511503d567a9c893a187d3841cba1)`() const` <a id="structFRHAPI__MatchInfo_1af90511503d567a9c893a187d3841cba1"></a>

Gets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__MatchInfo_1a5544dbbaef1f9ebfba6cfadfe52b8eaa)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchInfo_1a5544dbbaef1f9ebfba6cfadfe52b8eaa"></a>

Sets the value of Created.

#### `public inline void `[`SetCreated`](#structFRHAPI__MatchInfo_1af00a5080ac31298b59d5e9de35e8d68e)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchInfo_1af00a5080ac31298b59d5e9de35e8d68e"></a>

Sets the value of Created using move semantics.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchInfo_1adee2f73fe833934b0160f8497dd75da7)`()` <a id="structFRHAPI__MatchInfo_1adee2f73fe833934b0160f8497dd75da7"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchInfo_1acd3869c5df52328fe7ede9b4520313fe)`() const` <a id="structFRHAPI__MatchInfo_1acd3869c5df52328fe7ede9b4520313fe"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchInfo_1a3f1bc04830897672c58389cab5863f29)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchInfo_1a3f1bc04830897672c58389cab5863f29"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__MatchInfo_1aadb7b3626c5833f981e3d1897212b85e)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchInfo_1aadb7b3626c5833f981e3d1897212b85e"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchInfo_1a63a62452e477a2673e7b2340a2d483a9)`()` <a id="structFRHAPI__MatchInfo_1a63a62452e477a2673e7b2340a2d483a9"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchInfo_1aca29485ba71d7c4c454354e92276bdb6)`() const` <a id="structFRHAPI__MatchInfo_1aca29485ba71d7c4c454354e92276bdb6"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchInfo_1a2486cf861dabf7cbd1dd66085c7def57)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchInfo_1a2486cf861dabf7cbd1dd66085c7def57"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`SetCustomData`](#structFRHAPI__MatchInfo_1a78df7b03b198462961629d850db3815f)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchInfo_1a78df7b03b198462961629d850db3815f"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchInfo_1a7272b7c7f05e68f044146691c6a444b7)`()` <a id="structFRHAPI__MatchInfo_1a7272b7c7f05e68f044146691c6a444b7"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline bool `[`IsCustomDataSet`](#structFRHAPI__MatchInfo_1ade4a70e16a0b991442c814a202db7c37)`() const` <a id="structFRHAPI__MatchInfo_1ade4a70e16a0b991442c814a202db7c37"></a>

Checks whether CustomData_Optional has been set.

#### `public inline TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchInfo_1a945fb0e88ccdac866596b1f735ede2a8)`()` <a id="structFRHAPI__MatchInfo_1a945fb0e88ccdac866596b1f735ede2a8"></a>

Gets the value of TicketIds_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchInfo_1a84f6c092947650aade894ae5ab8016d3)`() const` <a id="structFRHAPI__MatchInfo_1a84f6c092947650aade894ae5ab8016d3"></a>

Gets the value of TicketIds_Optional, regardless of it having been set.

#### `public inline const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchInfo_1af9a7c2031dd7a1a894443bbc17aad8b6)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__MatchInfo_1af9a7c2031dd7a1a894443bbc17aad8b6"></a>

Gets the value of TicketIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetTicketIds`](#structFRHAPI__MatchInfo_1aa25cb0d6646abad91133a83b1ea782e0)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__MatchInfo_1aa25cb0d6646abad91133a83b1ea782e0"></a>

Fills OutValue with the value of TicketIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchInfo_1a922da831208ec94a6c9eef14d085f168)`()` <a id="structFRHAPI__MatchInfo_1a922da831208ec94a6c9eef14d085f168"></a>

Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchInfo_1ae16fab8e0b4fe8aa10c72d5ca17ba3af)`() const` <a id="structFRHAPI__MatchInfo_1ae16fab8e0b4fe8aa10c72d5ca17ba3af"></a>

Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetTicketIds`](#structFRHAPI__MatchInfo_1ac1376837d89774af571875a8d05dbbdc)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__MatchInfo_1ac1376837d89774af571875a8d05dbbdc"></a>

Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true.

#### `public inline void `[`SetTicketIds`](#structFRHAPI__MatchInfo_1ade789dbf8e761ab25e248381ac06d399)`(TArray< FString > && NewValue)` <a id="structFRHAPI__MatchInfo_1ade789dbf8e761ab25e248381ac06d399"></a>

Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketIds`](#structFRHAPI__MatchInfo_1a0222662660481f1f5beeb18231b94b39)`()` <a id="structFRHAPI__MatchInfo_1a0222662660481f1f5beeb18231b94b39"></a>

Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false.

#### `public inline bool `[`IsTicketIdsSet`](#structFRHAPI__MatchInfo_1af8d200efbbda6529b89d860a14171162)`() const` <a id="structFRHAPI__MatchInfo_1af8d200efbbda6529b89d860a14171162"></a>

Checks whether TicketIds_Optional has been set.

