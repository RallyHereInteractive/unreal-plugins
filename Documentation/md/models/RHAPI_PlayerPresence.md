# RHAPI_PlayerPresence <a id="group__RHAPI__PlayerPresence"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerPresence`](#structFRHAPI__PlayerPresence) | 

## struct `FRHAPI_PlayerPresence` <a id="structFRHAPI__PlayerPresence"></a>

```
struct FRHAPI_PlayerPresence
  : public FRHAPI_Model
```

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_OnlineStatus `[`Status_Optional`](#structFRHAPI__PlayerPresence_1ab4245201b34187accfbca6aaf8ea939d) | Is the player currently online?
`public bool `[`Status_IsSet`](#structFRHAPI__PlayerPresence_1ac2cfaf558b7093be96de8c74df7ff4e6) | true if Status_Optional has been set to a value
`public FString `[`Message_Optional`](#structFRHAPI__PlayerPresence_1a6de69297573f9e67cc38443e291212a4) | Optional custom message to display alongside the user's online status.
`public bool `[`Message_IsSet`](#structFRHAPI__PlayerPresence_1a975c5550a2028f883ef00c8ce7c6caa1) | true if Message_Optional has been set to a value
`public FString `[`Platform`](#structFRHAPI__PlayerPresence_1a45a64b190b76d0a19c84e88881c14880) | Platform the user was online in.
`public FString `[`DisplayName`](#structFRHAPI__PlayerPresence_1a6cdfa2feb98abb294bc0540fc32474eb) | Player Display Name.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerPresence_1ab66e42868ff9f7338e096ed18b83dbe8) | custom fields for the player to update about their presence
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerPresence_1af7d071d4606396805a4ca2dccd524ec4) | true if CustomData_Optional has been set to a value
`public int32 `[`PlayerId_Optional`](#structFRHAPI__PlayerPresence_1a781961b1549e3533b06f3116caab4d64) | Player ID for the player if it was provided as part of the request.
`public bool `[`PlayerId_IsSet`](#structFRHAPI__PlayerPresence_1afe3f3566bb0baed0c310f388dcde4717) | true if PlayerId_Optional has been set to a value
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerPresence_1a1d0bb60579fee7f87c47f3710b752431) | UUID of the player whose presence this represents.
`public bool `[`DoNotDisturb_Optional`](#structFRHAPI__PlayerPresence_1a3fdc4a3aa5dbb298792e1861132eec6a) | Disables notifications and invites. Only set for self or admin.
`public bool `[`DoNotDisturb_IsSet`](#structFRHAPI__PlayerPresence_1a95e326a3b33c1d605073a4af9d964841) | true if DoNotDisturb_Optional has been set to a value
`public FDateTime `[`LastSeen_Optional`](#structFRHAPI__PlayerPresence_1a43b9f8dd0aa042d01cd93c1882a3cef9) | Info about the player the last time they reported their status. Only set for self or admin.
`public bool `[`LastSeen_IsSet`](#structFRHAPI__PlayerPresence_1aaa0822462308ed3c84f15392ec93e69d) | true if LastSeen_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerPresence_1aa27bd5a54fc9bcc3c915dbc96e1b415b)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerPresence_1ac123af2bcd0911c1c8cf175a16de9d3f)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresence_1a473d46c4a2e703d8571fbcbb00ac3cdd)`()` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresence_1a6b60dec13ad2b7f219d6f98e805794d9)`() const` | Gets the value of Status_Optional, regardless of it having been set.
`public inline const ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresence_1aca18edf90012f769b2bcc29ca3b40df4)`(const ERHAPI_OnlineStatus & DefaultValue) const` | Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetStatus`](#structFRHAPI__PlayerPresence_1adea031eb81aec6f7043520c4c586bca0)`(ERHAPI_OnlineStatus & OutValue) const` | Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.
`public inline ERHAPI_OnlineStatus * `[`GetStatusOrNull`](#structFRHAPI__PlayerPresence_1a044702b723618a9b9d2f897940b7d66d)`()` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline const ERHAPI_OnlineStatus * `[`GetStatusOrNull`](#structFRHAPI__PlayerPresence_1a33f0d8285cf65ccf1ce9eadf4aada605)`() const` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetStatus`](#structFRHAPI__PlayerPresence_1af21ab3a0131c9bf4e9cd59c6898c57c9)`(ERHAPI_OnlineStatus NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true.
`public inline void `[`ClearStatus`](#structFRHAPI__PlayerPresence_1a166438c0a297bbbff8314b1addc758fc)`()` | Clears the value of Status_Optional and sets Status_IsSet to false.
`public inline FString & `[`GetMessage`](#structFRHAPI__PlayerPresence_1add36421a99e312644f8316fd17401b72)`()` | Gets the value of Message_Optional, regardless of it having been set.
`public inline const FString & `[`GetMessage`](#structFRHAPI__PlayerPresence_1acbae44684a48df96db6a35004cff3b60)`() const` | Gets the value of Message_Optional, regardless of it having been set.
`public inline const FString & `[`GetMessage`](#structFRHAPI__PlayerPresence_1a9ff10d9ac5b710f3308402f1b85f8c2c)`(const FString & DefaultValue) const` | Gets the value of Message_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMessage`](#structFRHAPI__PlayerPresence_1ada4f2e295049f1e30151516903f3ab6f)`(FString & OutValue) const` | Fills OutValue with the value of Message_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetMessageOrNull`](#structFRHAPI__PlayerPresence_1a95670351ca506e30b24f0f3e5b0d38a6)`()` | Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetMessageOrNull`](#structFRHAPI__PlayerPresence_1af0d4496639eeae9b5a231b98853ebc0f)`() const` | Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMessage`](#structFRHAPI__PlayerPresence_1a1b31173e0ea892359d5420dfb6fcd4ee)`(FString NewValue)` | Sets the value of Message_Optional and also sets Message_IsSet to true.
`public inline void `[`ClearMessage`](#structFRHAPI__PlayerPresence_1acf817a77014a4a059af05409ccd9dab0)`()` | Clears the value of Message_Optional and sets Message_IsSet to false.
`public inline bool `[`IsMessageDefaultValue`](#structFRHAPI__PlayerPresence_1a5a3d667ba5ef3d3130efdb69e6a51155)`() const` | Returns true if Message_Optional is set and matches the default value.
`public inline void `[`SetMessageToDefault`](#structFRHAPI__PlayerPresence_1a078a7a0fb3f082514bdef5358853bcea)`()` | Sets the value of Message_Optional to its default and also sets Message_IsSet to true.
`public inline FString & `[`GetPlatform`](#structFRHAPI__PlayerPresence_1afa3fbb31521f90c2649039085ac8ca74)`()` | Gets the value of Platform.
`public inline const FString & `[`GetPlatform`](#structFRHAPI__PlayerPresence_1a3bfe24a76d0aeb51a3eedfcd37b787f5)`() const` | Gets the value of Platform.
`public inline void `[`SetPlatform`](#structFRHAPI__PlayerPresence_1a751c7826f191c8fd3286462949561aa9)`(FString NewValue)` | Sets the value of Platform.
`public inline FString & `[`GetDisplayName`](#structFRHAPI__PlayerPresence_1ae934ada98b02ca91bab8dc830a9ba46c)`()` | Gets the value of DisplayName.
`public inline const FString & `[`GetDisplayName`](#structFRHAPI__PlayerPresence_1a62da764c5431679c88a7ad7864b9ddb8)`() const` | Gets the value of DisplayName.
`public inline void `[`SetDisplayName`](#structFRHAPI__PlayerPresence_1a90e1fb8374ea4a54dcb4bcb4973a5456)`(FString NewValue)` | Sets the value of DisplayName.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresence_1a5492cf596aa36be2f533c4c240903ef0)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresence_1ab41fed2fcaf5323ac24ce794453f7813)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresence_1a198ed956b9b5e9921653c24d1be1cbaa)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__PlayerPresence_1a896aea88f0ec3676b8afad170912f59a)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerPresence_1abaacd9775156b5074248c22959e78b91)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerPresence_1a70fd6b7b3e73c5a6a25e25dfeaa93621)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__PlayerPresence_1a38b2b8e7ef74eb43ab3119ec25a468be)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerPresence_1a69de7a9b1c25befec0af2b403d89400d)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPresence_1a2b181d388d305173059663c6a331dcfd)`()` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPresence_1a9ee0f0e8afab428308fff0f54260db2e)`() const` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPresence_1a1bfd00126c1f2f5eb6bce511cb0a39e6)`(const int32 & DefaultValue) const` | Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayerId`](#structFRHAPI__PlayerPresence_1a7f68f8b7f151ac2afb8f17da9436c0a1)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlayerPresence_1a1b4b965c68ef61240f8cc31bd8d2788f)`()` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlayerPresence_1a7237e95e3877554c235bbe2c356173bb)`() const` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayerId`](#structFRHAPI__PlayerPresence_1aac8fc9d82d491e498f81c71838d9306a)`(int32 NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.
`public inline void `[`ClearPlayerId`](#structFRHAPI__PlayerPresence_1a7e8c5f0e7a959ff0bfc6d46409083472)`()` | Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.
`public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlayerPresence_1a5b3dd414fe5c6d32baa1127a75ffed39)`() const` | Returns true if PlayerId_Optional is set and matches the default value.
`public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlayerPresence_1a84700c474f339d6330b4686549a35544)`()` | Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.
`public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerPresence_1a44031e6912d1af9431f33a8578d6c94d)`()` | Gets the value of PlayerUuid.
`public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerPresence_1acf8c72181140262bd5821c024c63e378)`() const` | Gets the value of PlayerUuid.
`public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerPresence_1a90fc55c6d1ff341608490395921d339b)`(FGuid NewValue)` | Sets the value of PlayerUuid.
`public inline bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresence_1a42392c89efa95f52edb03ac535cfa7fa)`()` | Gets the value of DoNotDisturb_Optional, regardless of it having been set.
`public inline const bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresence_1ab442dcc0422848eb0759107646faebc1)`() const` | Gets the value of DoNotDisturb_Optional, regardless of it having been set.
`public inline const bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresence_1a54f55d5094aee26c5fe572ae72cc95f9)`(const bool & DefaultValue) const` | Gets the value of DoNotDisturb_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresence_1a5b75719ef4431ed80c4266eb4241e0a1)`(bool & OutValue) const` | Fills OutValue with the value of DoNotDisturb_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetDoNotDisturbOrNull`](#structFRHAPI__PlayerPresence_1a0bf10e2585288c867b13de021a1a0797)`()` | Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetDoNotDisturbOrNull`](#structFRHAPI__PlayerPresence_1ac73e551f66242714c699b475c0e960ca)`() const` | Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetDoNotDisturb`](#structFRHAPI__PlayerPresence_1aedaca4d771c51657d68beae4c5aea98c)`(bool NewValue)` | Sets the value of DoNotDisturb_Optional and also sets DoNotDisturb_IsSet to true.
`public inline void `[`ClearDoNotDisturb`](#structFRHAPI__PlayerPresence_1a03ce5218c874780e1c3d04fd68d48d61)`()` | Clears the value of DoNotDisturb_Optional and sets DoNotDisturb_IsSet to false.
`public inline bool `[`IsDoNotDisturbDefaultValue`](#structFRHAPI__PlayerPresence_1a56d37e6ea10b4fa8a5c3560ff60addbd)`() const` | Returns true if DoNotDisturb_Optional is set and matches the default value.
`public inline void `[`SetDoNotDisturbToDefault`](#structFRHAPI__PlayerPresence_1ac87c1590c6b65784ca85545477e3f03b)`()` | Sets the value of DoNotDisturb_Optional to its default and also sets DoNotDisturb_IsSet to true.
`public inline FDateTime & `[`GetLastSeen`](#structFRHAPI__PlayerPresence_1afa3a632d15db87a111e32f99823b46e8)`()` | Gets the value of LastSeen_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastSeen`](#structFRHAPI__PlayerPresence_1acf1147e75882917549334f3b231baf63)`() const` | Gets the value of LastSeen_Optional, regardless of it having been set.
`public inline const FDateTime & `[`GetLastSeen`](#structFRHAPI__PlayerPresence_1afb0aa86b2e9b5141479c08400ecf64be)`(const FDateTime & DefaultValue) const` | Gets the value of LastSeen_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetLastSeen`](#structFRHAPI__PlayerPresence_1a6d87af0eee94b42e0031cc0dbdc74c5f)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastSeen_Optional and returns true if it has been set, otherwise returns false.
`public inline FDateTime * `[`GetLastSeenOrNull`](#structFRHAPI__PlayerPresence_1a24e183efe22ee78f5f3cd1c479aea551)`()` | Returns a pointer to LastSeen_Optional, if it has been set, otherwise returns nullptr.
`public inline const FDateTime * `[`GetLastSeenOrNull`](#structFRHAPI__PlayerPresence_1a877485d262325de64db5d5c94f6ebc86)`() const` | Returns a pointer to LastSeen_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetLastSeen`](#structFRHAPI__PlayerPresence_1a8f309150585037b7c1594436aac13ace)`(FDateTime NewValue)` | Sets the value of LastSeen_Optional and also sets LastSeen_IsSet to true.
`public inline void `[`ClearLastSeen`](#structFRHAPI__PlayerPresence_1af3e5ba70c9564dadedcb60029e464844)`()` | Clears the value of LastSeen_Optional and sets LastSeen_IsSet to false.

#### Members

#### `public ERHAPI_OnlineStatus `[`Status_Optional`](#structFRHAPI__PlayerPresence_1ab4245201b34187accfbca6aaf8ea939d) <a id="structFRHAPI__PlayerPresence_1ab4245201b34187accfbca6aaf8ea939d"></a>

Is the player currently online?

#### `public bool `[`Status_IsSet`](#structFRHAPI__PlayerPresence_1ac2cfaf558b7093be96de8c74df7ff4e6) <a id="structFRHAPI__PlayerPresence_1ac2cfaf558b7093be96de8c74df7ff4e6"></a>

true if Status_Optional has been set to a value

#### `public FString `[`Message_Optional`](#structFRHAPI__PlayerPresence_1a6de69297573f9e67cc38443e291212a4) <a id="structFRHAPI__PlayerPresence_1a6de69297573f9e67cc38443e291212a4"></a>

Optional custom message to display alongside the user's online status.

#### `public bool `[`Message_IsSet`](#structFRHAPI__PlayerPresence_1a975c5550a2028f883ef00c8ce7c6caa1) <a id="structFRHAPI__PlayerPresence_1a975c5550a2028f883ef00c8ce7c6caa1"></a>

true if Message_Optional has been set to a value

#### `public FString `[`Platform`](#structFRHAPI__PlayerPresence_1a45a64b190b76d0a19c84e88881c14880) <a id="structFRHAPI__PlayerPresence_1a45a64b190b76d0a19c84e88881c14880"></a>

Platform the user was online in.

#### `public FString `[`DisplayName`](#structFRHAPI__PlayerPresence_1a6cdfa2feb98abb294bc0540fc32474eb) <a id="structFRHAPI__PlayerPresence_1a6cdfa2feb98abb294bc0540fc32474eb"></a>

Player Display Name.

#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerPresence_1ab66e42868ff9f7338e096ed18b83dbe8) <a id="structFRHAPI__PlayerPresence_1ab66e42868ff9f7338e096ed18b83dbe8"></a>

custom fields for the player to update about their presence

#### `public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerPresence_1af7d071d4606396805a4ca2dccd524ec4) <a id="structFRHAPI__PlayerPresence_1af7d071d4606396805a4ca2dccd524ec4"></a>

true if CustomData_Optional has been set to a value

#### `public int32 `[`PlayerId_Optional`](#structFRHAPI__PlayerPresence_1a781961b1549e3533b06f3116caab4d64) <a id="structFRHAPI__PlayerPresence_1a781961b1549e3533b06f3116caab4d64"></a>

Player ID for the player if it was provided as part of the request.

#### `public bool `[`PlayerId_IsSet`](#structFRHAPI__PlayerPresence_1afe3f3566bb0baed0c310f388dcde4717) <a id="structFRHAPI__PlayerPresence_1afe3f3566bb0baed0c310f388dcde4717"></a>

true if PlayerId_Optional has been set to a value

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerPresence_1a1d0bb60579fee7f87c47f3710b752431) <a id="structFRHAPI__PlayerPresence_1a1d0bb60579fee7f87c47f3710b752431"></a>

UUID of the player whose presence this represents.

#### `public bool `[`DoNotDisturb_Optional`](#structFRHAPI__PlayerPresence_1a3fdc4a3aa5dbb298792e1861132eec6a) <a id="structFRHAPI__PlayerPresence_1a3fdc4a3aa5dbb298792e1861132eec6a"></a>

Disables notifications and invites. Only set for self or admin.

#### `public bool `[`DoNotDisturb_IsSet`](#structFRHAPI__PlayerPresence_1a95e326a3b33c1d605073a4af9d964841) <a id="structFRHAPI__PlayerPresence_1a95e326a3b33c1d605073a4af9d964841"></a>

true if DoNotDisturb_Optional has been set to a value

#### `public FDateTime `[`LastSeen_Optional`](#structFRHAPI__PlayerPresence_1a43b9f8dd0aa042d01cd93c1882a3cef9) <a id="structFRHAPI__PlayerPresence_1a43b9f8dd0aa042d01cd93c1882a3cef9"></a>

Info about the player the last time they reported their status. Only set for self or admin.

#### `public bool `[`LastSeen_IsSet`](#structFRHAPI__PlayerPresence_1aaa0822462308ed3c84f15392ec93e69d) <a id="structFRHAPI__PlayerPresence_1aaa0822462308ed3c84f15392ec93e69d"></a>

true if LastSeen_Optional has been set to a value

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerPresence_1aa27bd5a54fc9bcc3c915dbc96e1b415b)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerPresence_1aa27bd5a54fc9bcc3c915dbc96e1b415b"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerPresence_1ac123af2bcd0911c1c8cf175a16de9d3f)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__PlayerPresence_1ac123af2bcd0911c1c8cf175a16de9d3f"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresence_1a473d46c4a2e703d8571fbcbb00ac3cdd)`()` <a id="structFRHAPI__PlayerPresence_1a473d46c4a2e703d8571fbcbb00ac3cdd"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresence_1a6b60dec13ad2b7f219d6f98e805794d9)`() const` <a id="structFRHAPI__PlayerPresence_1a6b60dec13ad2b7f219d6f98e805794d9"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline const ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresence_1aca18edf90012f769b2bcc29ca3b40df4)`(const ERHAPI_OnlineStatus & DefaultValue) const` <a id="structFRHAPI__PlayerPresence_1aca18edf90012f769b2bcc29ca3b40df4"></a>

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetStatus`](#structFRHAPI__PlayerPresence_1adea031eb81aec6f7043520c4c586bca0)`(ERHAPI_OnlineStatus & OutValue) const` <a id="structFRHAPI__PlayerPresence_1adea031eb81aec6f7043520c4c586bca0"></a>

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.

#### `public inline ERHAPI_OnlineStatus * `[`GetStatusOrNull`](#structFRHAPI__PlayerPresence_1a044702b723618a9b9d2f897940b7d66d)`()` <a id="structFRHAPI__PlayerPresence_1a044702b723618a9b9d2f897940b7d66d"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const ERHAPI_OnlineStatus * `[`GetStatusOrNull`](#structFRHAPI__PlayerPresence_1a33f0d8285cf65ccf1ce9eadf4aada605)`() const` <a id="structFRHAPI__PlayerPresence_1a33f0d8285cf65ccf1ce9eadf4aada605"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetStatus`](#structFRHAPI__PlayerPresence_1af21ab3a0131c9bf4e9cd59c6898c57c9)`(ERHAPI_OnlineStatus NewValue)` <a id="structFRHAPI__PlayerPresence_1af21ab3a0131c9bf4e9cd59c6898c57c9"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true.

#### `public inline void `[`ClearStatus`](#structFRHAPI__PlayerPresence_1a166438c0a297bbbff8314b1addc758fc)`()` <a id="structFRHAPI__PlayerPresence_1a166438c0a297bbbff8314b1addc758fc"></a>

Clears the value of Status_Optional and sets Status_IsSet to false.

#### `public inline FString & `[`GetMessage`](#structFRHAPI__PlayerPresence_1add36421a99e312644f8316fd17401b72)`()` <a id="structFRHAPI__PlayerPresence_1add36421a99e312644f8316fd17401b72"></a>

Gets the value of Message_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMessage`](#structFRHAPI__PlayerPresence_1acbae44684a48df96db6a35004cff3b60)`() const` <a id="structFRHAPI__PlayerPresence_1acbae44684a48df96db6a35004cff3b60"></a>

Gets the value of Message_Optional, regardless of it having been set.

#### `public inline const FString & `[`GetMessage`](#structFRHAPI__PlayerPresence_1a9ff10d9ac5b710f3308402f1b85f8c2c)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerPresence_1a9ff10d9ac5b710f3308402f1b85f8c2c"></a>

Gets the value of Message_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetMessage`](#structFRHAPI__PlayerPresence_1ada4f2e295049f1e30151516903f3ab6f)`(FString & OutValue) const` <a id="structFRHAPI__PlayerPresence_1ada4f2e295049f1e30151516903f3ab6f"></a>

Fills OutValue with the value of Message_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FString * `[`GetMessageOrNull`](#structFRHAPI__PlayerPresence_1a95670351ca506e30b24f0f3e5b0d38a6)`()` <a id="structFRHAPI__PlayerPresence_1a95670351ca506e30b24f0f3e5b0d38a6"></a>

Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FString * `[`GetMessageOrNull`](#structFRHAPI__PlayerPresence_1af0d4496639eeae9b5a231b98853ebc0f)`() const` <a id="structFRHAPI__PlayerPresence_1af0d4496639eeae9b5a231b98853ebc0f"></a>

Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetMessage`](#structFRHAPI__PlayerPresence_1a1b31173e0ea892359d5420dfb6fcd4ee)`(FString NewValue)` <a id="structFRHAPI__PlayerPresence_1a1b31173e0ea892359d5420dfb6fcd4ee"></a>

Sets the value of Message_Optional and also sets Message_IsSet to true.

#### `public inline void `[`ClearMessage`](#structFRHAPI__PlayerPresence_1acf817a77014a4a059af05409ccd9dab0)`()` <a id="structFRHAPI__PlayerPresence_1acf817a77014a4a059af05409ccd9dab0"></a>

Clears the value of Message_Optional and sets Message_IsSet to false.

#### `public inline bool `[`IsMessageDefaultValue`](#structFRHAPI__PlayerPresence_1a5a3d667ba5ef3d3130efdb69e6a51155)`() const` <a id="structFRHAPI__PlayerPresence_1a5a3d667ba5ef3d3130efdb69e6a51155"></a>

Returns true if Message_Optional is set and matches the default value.

#### `public inline void `[`SetMessageToDefault`](#structFRHAPI__PlayerPresence_1a078a7a0fb3f082514bdef5358853bcea)`()` <a id="structFRHAPI__PlayerPresence_1a078a7a0fb3f082514bdef5358853bcea"></a>

Sets the value of Message_Optional to its default and also sets Message_IsSet to true.

#### `public inline FString & `[`GetPlatform`](#structFRHAPI__PlayerPresence_1afa3fbb31521f90c2649039085ac8ca74)`()` <a id="structFRHAPI__PlayerPresence_1afa3fbb31521f90c2649039085ac8ca74"></a>

Gets the value of Platform.

#### `public inline const FString & `[`GetPlatform`](#structFRHAPI__PlayerPresence_1a3bfe24a76d0aeb51a3eedfcd37b787f5)`() const` <a id="structFRHAPI__PlayerPresence_1a3bfe24a76d0aeb51a3eedfcd37b787f5"></a>

Gets the value of Platform.

#### `public inline void `[`SetPlatform`](#structFRHAPI__PlayerPresence_1a751c7826f191c8fd3286462949561aa9)`(FString NewValue)` <a id="structFRHAPI__PlayerPresence_1a751c7826f191c8fd3286462949561aa9"></a>

Sets the value of Platform.

#### `public inline FString & `[`GetDisplayName`](#structFRHAPI__PlayerPresence_1ae934ada98b02ca91bab8dc830a9ba46c)`()` <a id="structFRHAPI__PlayerPresence_1ae934ada98b02ca91bab8dc830a9ba46c"></a>

Gets the value of DisplayName.

#### `public inline const FString & `[`GetDisplayName`](#structFRHAPI__PlayerPresence_1a62da764c5431679c88a7ad7864b9ddb8)`() const` <a id="structFRHAPI__PlayerPresence_1a62da764c5431679c88a7ad7864b9ddb8"></a>

Gets the value of DisplayName.

#### `public inline void `[`SetDisplayName`](#structFRHAPI__PlayerPresence_1a90e1fb8374ea4a54dcb4bcb4973a5456)`(FString NewValue)` <a id="structFRHAPI__PlayerPresence_1a90e1fb8374ea4a54dcb4bcb4973a5456"></a>

Sets the value of DisplayName.

#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresence_1a5492cf596aa36be2f533c4c240903ef0)`()` <a id="structFRHAPI__PlayerPresence_1a5492cf596aa36be2f533c4c240903ef0"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresence_1ab41fed2fcaf5323ac24ce794453f7813)`() const` <a id="structFRHAPI__PlayerPresence_1ab41fed2fcaf5323ac24ce794453f7813"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresence_1a198ed956b9b5e9921653c24d1be1cbaa)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerPresence_1a198ed956b9b5e9921653c24d1be1cbaa"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetCustomData`](#structFRHAPI__PlayerPresence_1a896aea88f0ec3676b8afad170912f59a)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerPresence_1a896aea88f0ec3676b8afad170912f59a"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerPresence_1abaacd9775156b5074248c22959e78b91)`()` <a id="structFRHAPI__PlayerPresence_1abaacd9775156b5074248c22959e78b91"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerPresence_1a70fd6b7b3e73c5a6a25e25dfeaa93621)`() const` <a id="structFRHAPI__PlayerPresence_1a70fd6b7b3e73c5a6a25e25dfeaa93621"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetCustomData`](#structFRHAPI__PlayerPresence_1a38b2b8e7ef74eb43ab3119ec25a468be)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__PlayerPresence_1a38b2b8e7ef74eb43ab3119ec25a468be"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerPresence_1a69de7a9b1c25befec0af2b403d89400d)`()` <a id="structFRHAPI__PlayerPresence_1a69de7a9b1c25befec0af2b403d89400d"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPresence_1a2b181d388d305173059663c6a331dcfd)`()` <a id="structFRHAPI__PlayerPresence_1a2b181d388d305173059663c6a331dcfd"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPresence_1a9ee0f0e8afab428308fff0f54260db2e)`() const` <a id="structFRHAPI__PlayerPresence_1a9ee0f0e8afab428308fff0f54260db2e"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPresence_1a1bfd00126c1f2f5eb6bce511cb0a39e6)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerPresence_1a1bfd00126c1f2f5eb6bce511cb0a39e6"></a>

Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetPlayerId`](#structFRHAPI__PlayerPresence_1a7f68f8b7f151ac2afb8f17da9436c0a1)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerPresence_1a7f68f8b7f151ac2afb8f17da9436c0a1"></a>

Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlayerPresence_1a1b4b965c68ef61240f8cc31bd8d2788f)`()` <a id="structFRHAPI__PlayerPresence_1a1b4b965c68ef61240f8cc31bd8d2788f"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlayerPresence_1a7237e95e3877554c235bbe2c356173bb)`() const` <a id="structFRHAPI__PlayerPresence_1a7237e95e3877554c235bbe2c356173bb"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetPlayerId`](#structFRHAPI__PlayerPresence_1aac8fc9d82d491e498f81c71838d9306a)`(int32 NewValue)` <a id="structFRHAPI__PlayerPresence_1aac8fc9d82d491e498f81c71838d9306a"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.

#### `public inline void `[`ClearPlayerId`](#structFRHAPI__PlayerPresence_1a7e8c5f0e7a959ff0bfc6d46409083472)`()` <a id="structFRHAPI__PlayerPresence_1a7e8c5f0e7a959ff0bfc6d46409083472"></a>

Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.

#### `public inline bool `[`IsPlayerIdDefaultValue`](#structFRHAPI__PlayerPresence_1a5b3dd414fe5c6d32baa1127a75ffed39)`() const` <a id="structFRHAPI__PlayerPresence_1a5b3dd414fe5c6d32baa1127a75ffed39"></a>

Returns true if PlayerId_Optional is set and matches the default value.

#### `public inline void `[`SetPlayerIdToDefault`](#structFRHAPI__PlayerPresence_1a84700c474f339d6330b4686549a35544)`()` <a id="structFRHAPI__PlayerPresence_1a84700c474f339d6330b4686549a35544"></a>

Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.

#### `public inline FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerPresence_1a44031e6912d1af9431f33a8578d6c94d)`()` <a id="structFRHAPI__PlayerPresence_1a44031e6912d1af9431f33a8578d6c94d"></a>

Gets the value of PlayerUuid.

#### `public inline const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerPresence_1acf8c72181140262bd5821c024c63e378)`() const` <a id="structFRHAPI__PlayerPresence_1acf8c72181140262bd5821c024c63e378"></a>

Gets the value of PlayerUuid.

#### `public inline void `[`SetPlayerUuid`](#structFRHAPI__PlayerPresence_1a90fc55c6d1ff341608490395921d339b)`(FGuid NewValue)` <a id="structFRHAPI__PlayerPresence_1a90fc55c6d1ff341608490395921d339b"></a>

Sets the value of PlayerUuid.

#### `public inline bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresence_1a42392c89efa95f52edb03ac535cfa7fa)`()` <a id="structFRHAPI__PlayerPresence_1a42392c89efa95f52edb03ac535cfa7fa"></a>

Gets the value of DoNotDisturb_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresence_1ab442dcc0422848eb0759107646faebc1)`() const` <a id="structFRHAPI__PlayerPresence_1ab442dcc0422848eb0759107646faebc1"></a>

Gets the value of DoNotDisturb_Optional, regardless of it having been set.

#### `public inline const bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresence_1a54f55d5094aee26c5fe572ae72cc95f9)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlayerPresence_1a54f55d5094aee26c5fe572ae72cc95f9"></a>

Gets the value of DoNotDisturb_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresence_1a5b75719ef4431ed80c4266eb4241e0a1)`(bool & OutValue) const` <a id="structFRHAPI__PlayerPresence_1a5b75719ef4431ed80c4266eb4241e0a1"></a>

Fills OutValue with the value of DoNotDisturb_Optional and returns true if it has been set, otherwise returns false.

#### `public inline bool * `[`GetDoNotDisturbOrNull`](#structFRHAPI__PlayerPresence_1a0bf10e2585288c867b13de021a1a0797)`()` <a id="structFRHAPI__PlayerPresence_1a0bf10e2585288c867b13de021a1a0797"></a>

Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const bool * `[`GetDoNotDisturbOrNull`](#structFRHAPI__PlayerPresence_1ac73e551f66242714c699b475c0e960ca)`() const` <a id="structFRHAPI__PlayerPresence_1ac73e551f66242714c699b475c0e960ca"></a>

Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetDoNotDisturb`](#structFRHAPI__PlayerPresence_1aedaca4d771c51657d68beae4c5aea98c)`(bool NewValue)` <a id="structFRHAPI__PlayerPresence_1aedaca4d771c51657d68beae4c5aea98c"></a>

Sets the value of DoNotDisturb_Optional and also sets DoNotDisturb_IsSet to true.

#### `public inline void `[`ClearDoNotDisturb`](#structFRHAPI__PlayerPresence_1a03ce5218c874780e1c3d04fd68d48d61)`()` <a id="structFRHAPI__PlayerPresence_1a03ce5218c874780e1c3d04fd68d48d61"></a>

Clears the value of DoNotDisturb_Optional and sets DoNotDisturb_IsSet to false.

#### `public inline bool `[`IsDoNotDisturbDefaultValue`](#structFRHAPI__PlayerPresence_1a56d37e6ea10b4fa8a5c3560ff60addbd)`() const` <a id="structFRHAPI__PlayerPresence_1a56d37e6ea10b4fa8a5c3560ff60addbd"></a>

Returns true if DoNotDisturb_Optional is set and matches the default value.

#### `public inline void `[`SetDoNotDisturbToDefault`](#structFRHAPI__PlayerPresence_1ac87c1590c6b65784ca85545477e3f03b)`()` <a id="structFRHAPI__PlayerPresence_1ac87c1590c6b65784ca85545477e3f03b"></a>

Sets the value of DoNotDisturb_Optional to its default and also sets DoNotDisturb_IsSet to true.

#### `public inline FDateTime & `[`GetLastSeen`](#structFRHAPI__PlayerPresence_1afa3a632d15db87a111e32f99823b46e8)`()` <a id="structFRHAPI__PlayerPresence_1afa3a632d15db87a111e32f99823b46e8"></a>

Gets the value of LastSeen_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastSeen`](#structFRHAPI__PlayerPresence_1acf1147e75882917549334f3b231baf63)`() const` <a id="structFRHAPI__PlayerPresence_1acf1147e75882917549334f3b231baf63"></a>

Gets the value of LastSeen_Optional, regardless of it having been set.

#### `public inline const FDateTime & `[`GetLastSeen`](#structFRHAPI__PlayerPresence_1afb0aa86b2e9b5141479c08400ecf64be)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerPresence_1afb0aa86b2e9b5141479c08400ecf64be"></a>

Gets the value of LastSeen_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline bool `[`GetLastSeen`](#structFRHAPI__PlayerPresence_1a6d87af0eee94b42e0031cc0dbdc74c5f)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerPresence_1a6d87af0eee94b42e0031cc0dbdc74c5f"></a>

Fills OutValue with the value of LastSeen_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FDateTime * `[`GetLastSeenOrNull`](#structFRHAPI__PlayerPresence_1a24e183efe22ee78f5f3cd1c479aea551)`()` <a id="structFRHAPI__PlayerPresence_1a24e183efe22ee78f5f3cd1c479aea551"></a>

Returns a pointer to LastSeen_Optional, if it has been set, otherwise returns nullptr.

#### `public inline const FDateTime * `[`GetLastSeenOrNull`](#structFRHAPI__PlayerPresence_1a877485d262325de64db5d5c94f6ebc86)`() const` <a id="structFRHAPI__PlayerPresence_1a877485d262325de64db5d5c94f6ebc86"></a>

Returns a pointer to LastSeen_Optional, if it has been set, otherwise returns nullptr.

#### `public inline void `[`SetLastSeen`](#structFRHAPI__PlayerPresence_1a8f309150585037b7c1594436aac13ace)`(FDateTime NewValue)` <a id="structFRHAPI__PlayerPresence_1a8f309150585037b7c1594436aac13ace"></a>

Sets the value of LastSeen_Optional and also sets LastSeen_IsSet to true.

#### `public inline void `[`ClearLastSeen`](#structFRHAPI__PlayerPresence_1af3e5ba70c9564dadedcb60029e464844)`()` <a id="structFRHAPI__PlayerPresence_1af3e5ba70c9564dadedcb60029e464844"></a>

Clears the value of LastSeen_Optional and sets LastSeen_IsSet to false.

