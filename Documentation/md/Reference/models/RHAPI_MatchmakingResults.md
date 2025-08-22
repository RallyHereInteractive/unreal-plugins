---
title: RHAPI_MatchmakingResults
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_MatchmakingResults`](#structFRHAPI__MatchmakingResults) | 

## struct `FRHAPI_MatchmakingResults` <a id="structFRHAPI__MatchmakingResults"></a>

```
struct FRHAPI_MatchmakingResults
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`MatchMakingId`](#structFRHAPI__MatchmakingResults_1a2d42bc189e932217b41b963cac3062fd) | Unique ID.
`public FDateTime `[`Created`](#structFRHAPI__MatchmakingResults_1a609594c6a987fee6dfef097a3834c2c7) | Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchmakingResults_1a5a11952125ceae887402479b919a915f) | MMF defined custom data.
`public bool `[`CustomData_IsSet`](#structFRHAPI__MatchmakingResults_1a457e1e4690a6a4b34e1b12ac76312733) | true if CustomData_Optional has been set to a value
`public TArray< FString > `[`TicketIds_Optional`](#structFRHAPI__MatchmakingResults_1aaf32e071732f9c81ada7c0ed265993e7) | List of tickets that were assigned to this match if created by matchmaking.
`public bool `[`TicketIds_IsSet`](#structFRHAPI__MatchmakingResults_1aa41fe3fd301f36e2524791a3fc68edec) | true if TicketIds_Optional has been set to a value
`public TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > `[`TicketData_Optional`](#structFRHAPI__MatchmakingResults_1aadc585110557b26000d9ddcc7f85c212) | List of all the ticket data that was used when generating this match.
`public bool `[`TicketData_IsSet`](#structFRHAPI__MatchmakingResults_1a2f5b68051fa49767ed93375f2142cc08) | true if TicketData_Optional has been set to a value
`public bool `[`TicketsAssigned_Optional`](#structFRHAPI__MatchmakingResults_1a5d7305f61c2b585c05d45f82217a4205) | Whether or not the tickets from these results have been assigned.
`public bool `[`TicketsAssigned_IsSet`](#structFRHAPI__MatchmakingResults_1ab4f3027f46dce15e66c0768271866b4d) | true if TicketsAssigned_Optional has been set to a value
`public `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` `[`Profile_Optional`](#structFRHAPI__MatchmakingResults_1adbc0997e7831f29ac0822a7b23236308) | The profile used to create this match.
`public bool `[`Profile_IsSet`](#structFRHAPI__MatchmakingResults_1ad08c04e9a461a5845f7539dfb5a397c5) | true if Profile_Optional has been set to a value
`public TMap< FString, int32 > `[`TicketWaitSeconds_Optional`](#structFRHAPI__MatchmakingResults_1a37b4c4b78a7624db8052fa9b40e2e730) | The total time in seconds that each ticket waited before being assigned to a match.
`public bool `[`TicketWaitSeconds_IsSet`](#structFRHAPI__MatchmakingResults_1a1fed36ab09bdfb36a3e554e69b280f1b) | true if TicketWaitSeconds_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__MatchmakingResults_1a26df787de6a29043c515a062e2aba6e3)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__MatchmakingResults_1a1f262f640b6bcda9463dffbed3400c7f)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE FString & `[`GetMatchMakingId`](#structFRHAPI__MatchmakingResults_1af4e9d66f94f849c9e0fa688516eb7ecf)`()` | Gets the value of MatchMakingId.
`public inline FORCEINLINE const FString & `[`GetMatchMakingId`](#structFRHAPI__MatchmakingResults_1a9117823a799ae20ca7442f669ad6bcf1)`() const` | Gets the value of MatchMakingId.
`public inline FORCEINLINE void `[`SetMatchMakingId`](#structFRHAPI__MatchmakingResults_1a8312e40d1a9f13b0c64e2f6f5e37686b)`(const FString & NewValue)` | Sets the value of MatchMakingId.
`public inline FORCEINLINE void `[`SetMatchMakingId`](#structFRHAPI__MatchmakingResults_1a0dcf8617631838b20e5ad05ad7708072)`(FString && NewValue)` | Sets the value of MatchMakingId using move semantics.
`public inline FORCEINLINE FDateTime & `[`GetCreated`](#structFRHAPI__MatchmakingResults_1ad3c87c43de6d69253404d8dae3b890d4)`()` | Gets the value of Created.
`public inline FORCEINLINE const FDateTime & `[`GetCreated`](#structFRHAPI__MatchmakingResults_1a185503e06dcdde3a2bc70d226d2518b6)`() const` | Gets the value of Created.
`public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__MatchmakingResults_1a144e218d1cdf17aa06a21ef60f7a27db)`(const FDateTime & NewValue)` | Sets the value of Created.
`public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__MatchmakingResults_1aaf4c8a27abd13ec86c0198a73027a6ba)`(FDateTime && NewValue)` | Sets the value of Created using move semantics.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1ae90737152293a7441fc0d9f2db543f2e)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1a48f8a38b644abe4abd44c10a4cd9a854)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1a555e0ea2e3125e430d538f4e437d805c)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1a3494afce0fd9721b48ecfd3234763ff5)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingResults_1ad477bae24ee3bb576adba41e1abf85b7)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingResults_1afb35294dba359c47c3bee3fa785bcdb6)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchmakingResults_1a85d38bb849c3b33577de1e573090fc72)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchmakingResults_1a43a83b3c879bf6ed388c7d622f5bf726)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__MatchmakingResults_1ae469afc928153d7220e9d3eddc314527)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1a2685fe13913056cc14cb7dc30ea3a98f)`()` | Gets the value of TicketIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1a6b781482f6948246f9afae2d22249687)`() const` | Gets the value of TicketIds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1a7efb925410359b110c19b40f467cdb63)`(const TArray< FString > & DefaultValue) const` | Gets the value of TicketIds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1a388f71a6a3bdc26386757db95f3e2cee)`(TArray< FString > & OutValue) const` | Fills OutValue with the value of TicketIds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchmakingResults_1a3ed0bca9b3a8a1267f06fa21819430f4)`()` | Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchmakingResults_1a11bce9aa7f549aca245cd6e33437347e)`() const` | Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTicketIds`](#structFRHAPI__MatchmakingResults_1a651874dc75137d08a9601e8c291fbf79)`(const TArray< FString > & NewValue)` | Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true.
`public inline FORCEINLINE void `[`SetTicketIds`](#structFRHAPI__MatchmakingResults_1a12dd3df45487fad334180d34e7316791)`(TArray< FString > && NewValue)` | Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true using move semantics.
`public inline void `[`ClearTicketIds`](#structFRHAPI__MatchmakingResults_1a65ed513e849ce02fa71a83adc2b5e626)`()` | Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false.
`public inline FORCEINLINE TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1a2dd3683b54762a529420bb90fa8927ca)`()` | Gets the value of TicketData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1a3e6691de67f5f98c41c82d3e8e543a4d)`() const` | Gets the value of TicketData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1a6fa72f6ee553075e06484379e419bd15)`(const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & DefaultValue) const` | Gets the value of TicketData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1aa2ce03138ffece7eca8d84f5bcc91483)`(TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & OutValue) const` | Fills OutValue with the value of TicketData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > * `[`GetTicketDataOrNull`](#structFRHAPI__MatchmakingResults_1aa088ad957db37f49735f8ba10fee65d7)`()` | Returns a pointer to TicketData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > * `[`GetTicketDataOrNull`](#structFRHAPI__MatchmakingResults_1a4cc8266cc8492b353e36c9137e8972e2)`() const` | Returns a pointer to TicketData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTicketData`](#structFRHAPI__MatchmakingResults_1a39f8476e6d1dfdd1f6fb36781aa5af70)`(const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & NewValue)` | Sets the value of TicketData_Optional and also sets TicketData_IsSet to true.
`public inline FORCEINLINE void `[`SetTicketData`](#structFRHAPI__MatchmakingResults_1a4539a7fa50d433b9a4836ac3f517faac)`(TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > && NewValue)` | Sets the value of TicketData_Optional and also sets TicketData_IsSet to true using move semantics.
`public inline void `[`ClearTicketData`](#structFRHAPI__MatchmakingResults_1a0cea2c223c4bfb668d7392bc0612b480)`()` | Clears the value of TicketData_Optional and sets TicketData_IsSet to false.
`public inline FORCEINLINE bool & `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1aa9c087bad8a29161573902414432c4fa)`()` | Gets the value of TicketsAssigned_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1ac579a665b013767c4c91317af2aae353)`() const` | Gets the value of TicketsAssigned_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a61cb6882edc94da8dc71563e1b4c706c)`(const bool & DefaultValue) const` | Gets the value of TicketsAssigned_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1ac9f925df968e7db7a0f34b6db7cc61bb)`(bool & OutValue) const` | Fills OutValue with the value of TicketsAssigned_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetTicketsAssignedOrNull`](#structFRHAPI__MatchmakingResults_1a33f82f0add65a3cb54025ecdc5b5e709)`()` | Returns a pointer to TicketsAssigned_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetTicketsAssignedOrNull`](#structFRHAPI__MatchmakingResults_1a99212c32be1a1a2334ca4909f154812c)`() const` | Returns a pointer to TicketsAssigned_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1ab3625d1519d8bc9d1736950b86f2d99e)`(const bool & NewValue)` | Sets the value of TicketsAssigned_Optional and also sets TicketsAssigned_IsSet to true.
`public inline FORCEINLINE void `[`SetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1ae98361aa5845068648f03fe598ee2509)`(bool && NewValue)` | Sets the value of TicketsAssigned_Optional and also sets TicketsAssigned_IsSet to true using move semantics.
`public inline void `[`ClearTicketsAssigned`](#structFRHAPI__MatchmakingResults_1aa61a731c623adefbd95d6b7dec006971)`()` | Clears the value of TicketsAssigned_Optional and sets TicketsAssigned_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_TicketsAssigned`](#structFRHAPI__MatchmakingResults_1a8eb0ae40ba42b2005658176def285412)`()` | Returns the default value of TicketsAssigned.
`public inline FORCEINLINE `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & `[`GetProfile`](#structFRHAPI__MatchmakingResults_1aa4566c0feb8276953d69df093cbca71b)`()` | Gets the value of Profile_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & `[`GetProfile`](#structFRHAPI__MatchmakingResults_1a9692eb97467aeb752088975ecc6cd951)`() const` | Gets the value of Profile_Optional, regardless of it having been set.
`public inline FORCEINLINE const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & `[`GetProfile`](#structFRHAPI__MatchmakingResults_1a700dd3bdcc44f420d515327851e35f57)`(const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & DefaultValue) const` | Gets the value of Profile_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetProfile`](#structFRHAPI__MatchmakingResults_1a276cbb55052e51ae7b82d83516875b4a)`(`[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & OutValue) const` | Fills OutValue with the value of Profile_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` * `[`GetProfileOrNull`](#structFRHAPI__MatchmakingResults_1ab6c0e3d3fd60533d117478043870a5aa)`()` | Returns a pointer to Profile_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` * `[`GetProfileOrNull`](#structFRHAPI__MatchmakingResults_1aa9d98950d9a29dab368a7d57b0af170a)`() const` | Returns a pointer to Profile_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetProfile`](#structFRHAPI__MatchmakingResults_1a5eb3f74d319c902dc87f3ef9a19d3b63)`(const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & NewValue)` | Sets the value of Profile_Optional and also sets Profile_IsSet to true.
`public inline FORCEINLINE void `[`SetProfile`](#structFRHAPI__MatchmakingResults_1a0a3f86cc29ff4040135d2f6b309f000a)`(`[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` && NewValue)` | Sets the value of Profile_Optional and also sets Profile_IsSet to true using move semantics.
`public inline void `[`ClearProfile`](#structFRHAPI__MatchmakingResults_1ad5e14ca03c0e29c1c7d402ff5acd13ec)`()` | Clears the value of Profile_Optional and sets Profile_IsSet to false.
`public inline FORCEINLINE TMap< FString, int32 > & `[`GetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1ade2382794c405d77dc60299171fc7aa1)`()` | Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, int32 > & `[`GetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1a1cf218fec42cf8be51da5cb02a69b6b8)`() const` | Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, int32 > & `[`GetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1abfce75ac2d0a862258b38700f509777d)`(const TMap< FString, int32 > & DefaultValue) const` | Gets the value of TicketWaitSeconds_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1ac50c2d41621b1ea83e2049b1bd66eed9)`(TMap< FString, int32 > & OutValue) const` | Fills OutValue with the value of TicketWaitSeconds_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, int32 > * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__MatchmakingResults_1af3e29695dcb96086e6a30856d678637b)`()` | Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, int32 > * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__MatchmakingResults_1a6cfc62298390e433dbf2a9f396e9306f)`() const` | Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1a6f48375ff49ab2da6c08ea915f8e2d91)`(const TMap< FString, int32 > & NewValue)` | Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true.
`public inline FORCEINLINE void `[`SetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1acd04164532edfb0af095c95a11216b1b)`(TMap< FString, int32 > && NewValue)` | Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true using move semantics.
`public inline void `[`ClearTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1a93ffe9e5b884fdaf4676b6a87e8d0d6c)`()` | Clears the value of TicketWaitSeconds_Optional and sets TicketWaitSeconds_IsSet to false.

### Members

#### `public FString `[`MatchMakingId`](#structFRHAPI__MatchmakingResults_1a2d42bc189e932217b41b963cac3062fd) <a id="structFRHAPI__MatchmakingResults_1a2d42bc189e932217b41b963cac3062fd"></a>

Unique ID.

#### `public FDateTime `[`Created`](#structFRHAPI__MatchmakingResults_1a609594c6a987fee6dfef097a3834c2c7) <a id="structFRHAPI__MatchmakingResults_1a609594c6a987fee6dfef097a3834c2c7"></a>

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__MatchmakingResults_1a5a11952125ceae887402479b919a915f) <a id="structFRHAPI__MatchmakingResults_1a5a11952125ceae887402479b919a915f"></a>

MMF defined custom data.

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__MatchmakingResults_1a457e1e4690a6a4b34e1b12ac76312733) <a id="structFRHAPI__MatchmakingResults_1a457e1e4690a6a4b34e1b12ac76312733"></a>

true if CustomData_Optional has been set to a value

#### `public TArray< FString > `[`TicketIds_Optional`](#structFRHAPI__MatchmakingResults_1aaf32e071732f9c81ada7c0ed265993e7) <a id="structFRHAPI__MatchmakingResults_1aaf32e071732f9c81ada7c0ed265993e7"></a>

List of tickets that were assigned to this match if created by matchmaking.

#### `public bool `[`TicketIds_IsSet`](#structFRHAPI__MatchmakingResults_1aa41fe3fd301f36e2524791a3fc68edec) <a id="structFRHAPI__MatchmakingResults_1aa41fe3fd301f36e2524791a3fc68edec"></a>

true if TicketIds_Optional has been set to a value

#### `public TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > `[`TicketData_Optional`](#structFRHAPI__MatchmakingResults_1aadc585110557b26000d9ddcc7f85c212) <a id="structFRHAPI__MatchmakingResults_1aadc585110557b26000d9ddcc7f85c212"></a>

List of all the ticket data that was used when generating this match.

#### `public bool `[`TicketData_IsSet`](#structFRHAPI__MatchmakingResults_1a2f5b68051fa49767ed93375f2142cc08) <a id="structFRHAPI__MatchmakingResults_1a2f5b68051fa49767ed93375f2142cc08"></a>

true if TicketData_Optional has been set to a value

#### `public bool `[`TicketsAssigned_Optional`](#structFRHAPI__MatchmakingResults_1a5d7305f61c2b585c05d45f82217a4205) <a id="structFRHAPI__MatchmakingResults_1a5d7305f61c2b585c05d45f82217a4205"></a>

Whether or not the tickets from these results have been assigned.

#### `public bool `[`TicketsAssigned_IsSet`](#structFRHAPI__MatchmakingResults_1ab4f3027f46dce15e66c0768271866b4d) <a id="structFRHAPI__MatchmakingResults_1ab4f3027f46dce15e66c0768271866b4d"></a>

true if TicketsAssigned_Optional has been set to a value

#### `public `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` `[`Profile_Optional`](#structFRHAPI__MatchmakingResults_1adbc0997e7831f29ac0822a7b23236308) <a id="structFRHAPI__MatchmakingResults_1adbc0997e7831f29ac0822a7b23236308"></a>

The profile used to create this match.

#### `public bool `[`Profile_IsSet`](#structFRHAPI__MatchmakingResults_1ad08c04e9a461a5845f7539dfb5a397c5) <a id="structFRHAPI__MatchmakingResults_1ad08c04e9a461a5845f7539dfb5a397c5"></a>

true if Profile_Optional has been set to a value

#### `public TMap< FString, int32 > `[`TicketWaitSeconds_Optional`](#structFRHAPI__MatchmakingResults_1a37b4c4b78a7624db8052fa9b40e2e730) <a id="structFRHAPI__MatchmakingResults_1a37b4c4b78a7624db8052fa9b40e2e730"></a>

The total time in seconds that each ticket waited before being assigned to a match.

#### `public bool `[`TicketWaitSeconds_IsSet`](#structFRHAPI__MatchmakingResults_1a1fed36ab09bdfb36a3e554e69b280f1b) <a id="structFRHAPI__MatchmakingResults_1a1fed36ab09bdfb36a3e554e69b280f1b"></a>

true if TicketWaitSeconds_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__MatchmakingResults_1a26df787de6a29043c515a062e2aba6e3)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__MatchmakingResults_1a26df787de6a29043c515a062e2aba6e3"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__MatchmakingResults_1a1f262f640b6bcda9463dffbed3400c7f)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__MatchmakingResults_1a1f262f640b6bcda9463dffbed3400c7f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE FString & `[`GetMatchMakingId`](#structFRHAPI__MatchmakingResults_1af4e9d66f94f849c9e0fa688516eb7ecf)`()` <a id="structFRHAPI__MatchmakingResults_1af4e9d66f94f849c9e0fa688516eb7ecf"></a>

Gets the value of MatchMakingId.

#### `public inline FORCEINLINE const FString & `[`GetMatchMakingId`](#structFRHAPI__MatchmakingResults_1a9117823a799ae20ca7442f669ad6bcf1)`() const` <a id="structFRHAPI__MatchmakingResults_1a9117823a799ae20ca7442f669ad6bcf1"></a>

Gets the value of MatchMakingId.

#### `public inline FORCEINLINE void `[`SetMatchMakingId`](#structFRHAPI__MatchmakingResults_1a8312e40d1a9f13b0c64e2f6f5e37686b)`(const FString & NewValue)` <a id="structFRHAPI__MatchmakingResults_1a8312e40d1a9f13b0c64e2f6f5e37686b"></a>

Sets the value of MatchMakingId.

#### `public inline FORCEINLINE void `[`SetMatchMakingId`](#structFRHAPI__MatchmakingResults_1a0dcf8617631838b20e5ad05ad7708072)`(FString && NewValue)` <a id="structFRHAPI__MatchmakingResults_1a0dcf8617631838b20e5ad05ad7708072"></a>

Sets the value of MatchMakingId using move semantics.

#### `public inline FORCEINLINE FDateTime & `[`GetCreated`](#structFRHAPI__MatchmakingResults_1ad3c87c43de6d69253404d8dae3b890d4)`()` <a id="structFRHAPI__MatchmakingResults_1ad3c87c43de6d69253404d8dae3b890d4"></a>

Gets the value of Created.

#### `public inline FORCEINLINE const FDateTime & `[`GetCreated`](#structFRHAPI__MatchmakingResults_1a185503e06dcdde3a2bc70d226d2518b6)`() const` <a id="structFRHAPI__MatchmakingResults_1a185503e06dcdde3a2bc70d226d2518b6"></a>

Gets the value of Created.

#### `public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__MatchmakingResults_1a144e218d1cdf17aa06a21ef60f7a27db)`(const FDateTime & NewValue)` <a id="structFRHAPI__MatchmakingResults_1a144e218d1cdf17aa06a21ef60f7a27db"></a>

Sets the value of Created.

#### `public inline FORCEINLINE void `[`SetCreated`](#structFRHAPI__MatchmakingResults_1aaf4c8a27abd13ec86c0198a73027a6ba)`(FDateTime && NewValue)` <a id="structFRHAPI__MatchmakingResults_1aaf4c8a27abd13ec86c0198a73027a6ba"></a>

Sets the value of Created using move semantics.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1ae90737152293a7441fc0d9f2db543f2e)`()` <a id="structFRHAPI__MatchmakingResults_1ae90737152293a7441fc0d9f2db543f2e"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1a48f8a38b644abe4abd44c10a4cd9a854)`() const` <a id="structFRHAPI__MatchmakingResults_1a48f8a38b644abe4abd44c10a4cd9a854"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1a555e0ea2e3125e430d538f4e437d805c)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__MatchmakingResults_1a555e0ea2e3125e430d538f4e437d805c"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__MatchmakingResults_1a3494afce0fd9721b48ecfd3234763ff5)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__MatchmakingResults_1a3494afce0fd9721b48ecfd3234763ff5"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingResults_1ad477bae24ee3bb576adba41e1abf85b7)`()` <a id="structFRHAPI__MatchmakingResults_1ad477bae24ee3bb576adba41e1abf85b7"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__MatchmakingResults_1afb35294dba359c47c3bee3fa785bcdb6)`() const` <a id="structFRHAPI__MatchmakingResults_1afb35294dba359c47c3bee3fa785bcdb6"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchmakingResults_1a85d38bb849c3b33577de1e573090fc72)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__MatchmakingResults_1a85d38bb849c3b33577de1e573090fc72"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__MatchmakingResults_1a43a83b3c879bf6ed388c7d622f5bf726)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__MatchmakingResults_1a43a83b3c879bf6ed388c7d622f5bf726"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__MatchmakingResults_1ae469afc928153d7220e9d3eddc314527)`()` <a id="structFRHAPI__MatchmakingResults_1ae469afc928153d7220e9d3eddc314527"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1a2685fe13913056cc14cb7dc30ea3a98f)`()` <a id="structFRHAPI__MatchmakingResults_1a2685fe13913056cc14cb7dc30ea3a98f"></a>

Gets the value of TicketIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1a6b781482f6948246f9afae2d22249687)`() const` <a id="structFRHAPI__MatchmakingResults_1a6b781482f6948246f9afae2d22249687"></a>

Gets the value of TicketIds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< FString > & `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1a7efb925410359b110c19b40f467cdb63)`(const TArray< FString > & DefaultValue) const` <a id="structFRHAPI__MatchmakingResults_1a7efb925410359b110c19b40f467cdb63"></a>

Gets the value of TicketIds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTicketIds`](#structFRHAPI__MatchmakingResults_1a388f71a6a3bdc26386757db95f3e2cee)`(TArray< FString > & OutValue) const` <a id="structFRHAPI__MatchmakingResults_1a388f71a6a3bdc26386757db95f3e2cee"></a>

Fills OutValue with the value of TicketIds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchmakingResults_1a3ed0bca9b3a8a1267f06fa21819430f4)`()` <a id="structFRHAPI__MatchmakingResults_1a3ed0bca9b3a8a1267f06fa21819430f4"></a>

Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< FString > * `[`GetTicketIdsOrNull`](#structFRHAPI__MatchmakingResults_1a11bce9aa7f549aca245cd6e33437347e)`() const` <a id="structFRHAPI__MatchmakingResults_1a11bce9aa7f549aca245cd6e33437347e"></a>

Returns a pointer to TicketIds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTicketIds`](#structFRHAPI__MatchmakingResults_1a651874dc75137d08a9601e8c291fbf79)`(const TArray< FString > & NewValue)` <a id="structFRHAPI__MatchmakingResults_1a651874dc75137d08a9601e8c291fbf79"></a>

Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTicketIds`](#structFRHAPI__MatchmakingResults_1a12dd3df45487fad334180d34e7316791)`(TArray< FString > && NewValue)` <a id="structFRHAPI__MatchmakingResults_1a12dd3df45487fad334180d34e7316791"></a>

Sets the value of TicketIds_Optional and also sets TicketIds_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketIds`](#structFRHAPI__MatchmakingResults_1a65ed513e849ce02fa71a83adc2b5e626)`()` <a id="structFRHAPI__MatchmakingResults_1a65ed513e849ce02fa71a83adc2b5e626"></a>

Clears the value of TicketIds_Optional and sets TicketIds_IsSet to false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1a2dd3683b54762a529420bb90fa8927ca)`()` <a id="structFRHAPI__MatchmakingResults_1a2dd3683b54762a529420bb90fa8927ca"></a>

Gets the value of TicketData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1a3e6691de67f5f98c41c82d3e8e543a4d)`() const` <a id="structFRHAPI__MatchmakingResults_1a3e6691de67f5f98c41c82d3e8e543a4d"></a>

Gets the value of TicketData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1a6fa72f6ee553075e06484379e419bd15)`(const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & DefaultValue) const` <a id="structFRHAPI__MatchmakingResults_1a6fa72f6ee553075e06484379e419bd15"></a>

Gets the value of TicketData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTicketData`](#structFRHAPI__MatchmakingResults_1aa2ce03138ffece7eca8d84f5bcc91483)`(TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & OutValue) const` <a id="structFRHAPI__MatchmakingResults_1aa2ce03138ffece7eca8d84f5bcc91483"></a>

Fills OutValue with the value of TicketData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > * `[`GetTicketDataOrNull`](#structFRHAPI__MatchmakingResults_1aa088ad957db37f49735f8ba10fee65d7)`()` <a id="structFRHAPI__MatchmakingResults_1aa088ad957db37f49735f8ba10fee65d7"></a>

Returns a pointer to TicketData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > * `[`GetTicketDataOrNull`](#structFRHAPI__MatchmakingResults_1a4cc8266cc8492b353e36c9137e8972e2)`() const` <a id="structFRHAPI__MatchmakingResults_1a4cc8266cc8492b353e36c9137e8972e2"></a>

Returns a pointer to TicketData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTicketData`](#structFRHAPI__MatchmakingResults_1a39f8476e6d1dfdd1f6fb36781aa5af70)`(const TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > & NewValue)` <a id="structFRHAPI__MatchmakingResults_1a39f8476e6d1dfdd1f6fb36781aa5af70"></a>

Sets the value of TicketData_Optional and also sets TicketData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTicketData`](#structFRHAPI__MatchmakingResults_1a4539a7fa50d433b9a4836ac3f517faac)`(TArray< `[`FRHAPI_TicketData`](RHAPI_TicketData.md#structFRHAPI__TicketData)` > && NewValue)` <a id="structFRHAPI__MatchmakingResults_1a4539a7fa50d433b9a4836ac3f517faac"></a>

Sets the value of TicketData_Optional and also sets TicketData_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketData`](#structFRHAPI__MatchmakingResults_1a0cea2c223c4bfb668d7392bc0612b480)`()` <a id="structFRHAPI__MatchmakingResults_1a0cea2c223c4bfb668d7392bc0612b480"></a>

Clears the value of TicketData_Optional and sets TicketData_IsSet to false.

#### `public inline FORCEINLINE bool & `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1aa9c087bad8a29161573902414432c4fa)`()` <a id="structFRHAPI__MatchmakingResults_1aa9c087bad8a29161573902414432c4fa"></a>

Gets the value of TicketsAssigned_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1ac579a665b013767c4c91317af2aae353)`() const` <a id="structFRHAPI__MatchmakingResults_1ac579a665b013767c4c91317af2aae353"></a>

Gets the value of TicketsAssigned_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1a61cb6882edc94da8dc71563e1b4c706c)`(const bool & DefaultValue) const` <a id="structFRHAPI__MatchmakingResults_1a61cb6882edc94da8dc71563e1b4c706c"></a>

Gets the value of TicketsAssigned_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1ac9f925df968e7db7a0f34b6db7cc61bb)`(bool & OutValue) const` <a id="structFRHAPI__MatchmakingResults_1ac9f925df968e7db7a0f34b6db7cc61bb"></a>

Fills OutValue with the value of TicketsAssigned_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetTicketsAssignedOrNull`](#structFRHAPI__MatchmakingResults_1a33f82f0add65a3cb54025ecdc5b5e709)`()` <a id="structFRHAPI__MatchmakingResults_1a33f82f0add65a3cb54025ecdc5b5e709"></a>

Returns a pointer to TicketsAssigned_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetTicketsAssignedOrNull`](#structFRHAPI__MatchmakingResults_1a99212c32be1a1a2334ca4909f154812c)`() const` <a id="structFRHAPI__MatchmakingResults_1a99212c32be1a1a2334ca4909f154812c"></a>

Returns a pointer to TicketsAssigned_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1ab3625d1519d8bc9d1736950b86f2d99e)`(const bool & NewValue)` <a id="structFRHAPI__MatchmakingResults_1ab3625d1519d8bc9d1736950b86f2d99e"></a>

Sets the value of TicketsAssigned_Optional and also sets TicketsAssigned_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTicketsAssigned`](#structFRHAPI__MatchmakingResults_1ae98361aa5845068648f03fe598ee2509)`(bool && NewValue)` <a id="structFRHAPI__MatchmakingResults_1ae98361aa5845068648f03fe598ee2509"></a>

Sets the value of TicketsAssigned_Optional and also sets TicketsAssigned_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketsAssigned`](#structFRHAPI__MatchmakingResults_1aa61a731c623adefbd95d6b7dec006971)`()` <a id="structFRHAPI__MatchmakingResults_1aa61a731c623adefbd95d6b7dec006971"></a>

Clears the value of TicketsAssigned_Optional and sets TicketsAssigned_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_TicketsAssigned`](#structFRHAPI__MatchmakingResults_1a8eb0ae40ba42b2005658176def285412)`()` <a id="structFRHAPI__MatchmakingResults_1a8eb0ae40ba42b2005658176def285412"></a>

Returns the default value of TicketsAssigned.

#### `public inline FORCEINLINE `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & `[`GetProfile`](#structFRHAPI__MatchmakingResults_1aa4566c0feb8276953d69df093cbca71b)`()` <a id="structFRHAPI__MatchmakingResults_1aa4566c0feb8276953d69df093cbca71b"></a>

Gets the value of Profile_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & `[`GetProfile`](#structFRHAPI__MatchmakingResults_1a9692eb97467aeb752088975ecc6cd951)`() const` <a id="structFRHAPI__MatchmakingResults_1a9692eb97467aeb752088975ecc6cd951"></a>

Gets the value of Profile_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & `[`GetProfile`](#structFRHAPI__MatchmakingResults_1a700dd3bdcc44f420d515327851e35f57)`(const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & DefaultValue) const` <a id="structFRHAPI__MatchmakingResults_1a700dd3bdcc44f420d515327851e35f57"></a>

Gets the value of Profile_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetProfile`](#structFRHAPI__MatchmakingResults_1a276cbb55052e51ae7b82d83516875b4a)`(`[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & OutValue) const` <a id="structFRHAPI__MatchmakingResults_1a276cbb55052e51ae7b82d83516875b4a"></a>

Fills OutValue with the value of Profile_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` * `[`GetProfileOrNull`](#structFRHAPI__MatchmakingResults_1ab6c0e3d3fd60533d117478043870a5aa)`()` <a id="structFRHAPI__MatchmakingResults_1ab6c0e3d3fd60533d117478043870a5aa"></a>

Returns a pointer to Profile_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` * `[`GetProfileOrNull`](#structFRHAPI__MatchmakingResults_1aa9d98950d9a29dab368a7d57b0af170a)`() const` <a id="structFRHAPI__MatchmakingResults_1aa9d98950d9a29dab368a7d57b0af170a"></a>

Returns a pointer to Profile_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetProfile`](#structFRHAPI__MatchmakingResults_1a5eb3f74d319c902dc87f3ef9a19d3b63)`(const `[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` & NewValue)` <a id="structFRHAPI__MatchmakingResults_1a5eb3f74d319c902dc87f3ef9a19d3b63"></a>

Sets the value of Profile_Optional and also sets Profile_IsSet to true.

#### `public inline FORCEINLINE void `[`SetProfile`](#structFRHAPI__MatchmakingResults_1a0a3f86cc29ff4040135d2f6b309f000a)`(`[`FRHAPI_MatchMakingProfileV2`](RHAPI_MatchMakingProfileV2.md#structFRHAPI__MatchMakingProfileV2)` && NewValue)` <a id="structFRHAPI__MatchmakingResults_1a0a3f86cc29ff4040135d2f6b309f000a"></a>

Sets the value of Profile_Optional and also sets Profile_IsSet to true using move semantics.

#### `public inline void `[`ClearProfile`](#structFRHAPI__MatchmakingResults_1ad5e14ca03c0e29c1c7d402ff5acd13ec)`()` <a id="structFRHAPI__MatchmakingResults_1ad5e14ca03c0e29c1c7d402ff5acd13ec"></a>

Clears the value of Profile_Optional and sets Profile_IsSet to false.

#### `public inline FORCEINLINE TMap< FString, int32 > & `[`GetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1ade2382794c405d77dc60299171fc7aa1)`()` <a id="structFRHAPI__MatchmakingResults_1ade2382794c405d77dc60299171fc7aa1"></a>

Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, int32 > & `[`GetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1a1cf218fec42cf8be51da5cb02a69b6b8)`() const` <a id="structFRHAPI__MatchmakingResults_1a1cf218fec42cf8be51da5cb02a69b6b8"></a>

Gets the value of TicketWaitSeconds_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, int32 > & `[`GetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1abfce75ac2d0a862258b38700f509777d)`(const TMap< FString, int32 > & DefaultValue) const` <a id="structFRHAPI__MatchmakingResults_1abfce75ac2d0a862258b38700f509777d"></a>

Gets the value of TicketWaitSeconds_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1ac50c2d41621b1ea83e2049b1bd66eed9)`(TMap< FString, int32 > & OutValue) const` <a id="structFRHAPI__MatchmakingResults_1ac50c2d41621b1ea83e2049b1bd66eed9"></a>

Fills OutValue with the value of TicketWaitSeconds_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, int32 > * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__MatchmakingResults_1af3e29695dcb96086e6a30856d678637b)`()` <a id="structFRHAPI__MatchmakingResults_1af3e29695dcb96086e6a30856d678637b"></a>

Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, int32 > * `[`GetTicketWaitSecondsOrNull`](#structFRHAPI__MatchmakingResults_1a6cfc62298390e433dbf2a9f396e9306f)`() const` <a id="structFRHAPI__MatchmakingResults_1a6cfc62298390e433dbf2a9f396e9306f"></a>

Returns a pointer to TicketWaitSeconds_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1a6f48375ff49ab2da6c08ea915f8e2d91)`(const TMap< FString, int32 > & NewValue)` <a id="structFRHAPI__MatchmakingResults_1a6f48375ff49ab2da6c08ea915f8e2d91"></a>

Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true.

#### `public inline FORCEINLINE void `[`SetTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1acd04164532edfb0af095c95a11216b1b)`(TMap< FString, int32 > && NewValue)` <a id="structFRHAPI__MatchmakingResults_1acd04164532edfb0af095c95a11216b1b"></a>

Sets the value of TicketWaitSeconds_Optional and also sets TicketWaitSeconds_IsSet to true using move semantics.

#### `public inline void `[`ClearTicketWaitSeconds`](#structFRHAPI__MatchmakingResults_1a93ffe9e5b884fdaf4676b6a87e8d0d6c)`()` <a id="structFRHAPI__MatchmakingResults_1a93ffe9e5b884fdaf4676b6a87e8d0d6c"></a>

Clears the value of TicketWaitSeconds_Optional and sets TicketWaitSeconds_IsSet to false.

