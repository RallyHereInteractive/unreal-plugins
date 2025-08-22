---
title: RHAPI_PlayerPresence
---

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_PlayerPresence`](#structFRHAPI__PlayerPresence) | 

## struct `FRHAPI_PlayerPresence` <a id="structFRHAPI__PlayerPresence"></a>

```
struct FRHAPI_PlayerPresence
  : public FRHAPI_Model
```

### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public ERHAPI_OnlineStatus `[`Status_Optional`](#structFRHAPI__PlayerPresence_1ab4245201b34187accfbca6aaf8ea939d) | 
`public bool `[`Status_IsSet`](#structFRHAPI__PlayerPresence_1ac2cfaf558b7093be96de8c74df7ff4e6) | true if Status_Optional has been set to a value
`public FString `[`Message_Optional`](#structFRHAPI__PlayerPresence_1a6de69297573f9e67cc38443e291212a4) | Optional custom message to display alongside the user's online status.
`public bool `[`Message_IsSet`](#structFRHAPI__PlayerPresence_1a975c5550a2028f883ef00c8ce7c6caa1) | true if Message_Optional has been set to a value
`public FString `[`Platform`](#structFRHAPI__PlayerPresence_1a45a64b190b76d0a19c84e88881c14880) | Platform the user was online in.
`public FString `[`DisplayName`](#structFRHAPI__PlayerPresence_1a6cdfa2feb98abb294bc0540fc32474eb) | Player Display Name.
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__PlayerPresence_1ab66e42868ff9f7338e096ed18b83dbe8) | custom fields for the player to update about their presence
`public bool `[`CustomData_IsSet`](#structFRHAPI__PlayerPresence_1af7d071d4606396805a4ca2dccd524ec4) | true if CustomData_Optional has been set to a value
`public int32 `[`PlayerId_Optional`](#structFRHAPI__PlayerPresence_1a781961b1549e3533b06f3116caab4d64) | 
`public bool `[`PlayerId_IsSet`](#structFRHAPI__PlayerPresence_1afe3f3566bb0baed0c310f388dcde4717) | true if PlayerId_Optional has been set to a value
`public bool `[`PlayerId_IsNull`](#structFRHAPI__PlayerPresence_1a9635c5879651168618ff303f4ba7a698) | true if PlayerId_Optional has been explicitly set to null
`public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerPresence_1a1d0bb60579fee7f87c47f3710b752431) | UUID of the player whose presence this represents.
`public bool `[`DoNotDisturb_Optional`](#structFRHAPI__PlayerPresence_1a3fdc4a3aa5dbb298792e1861132eec6a) | 
`public bool `[`DoNotDisturb_IsSet`](#structFRHAPI__PlayerPresence_1a95e326a3b33c1d605073a4af9d964841) | true if DoNotDisturb_Optional has been set to a value
`public bool `[`DoNotDisturb_IsNull`](#structFRHAPI__PlayerPresence_1aa430fb8c95a433d4b1faca9407d63030) | true if DoNotDisturb_Optional has been explicitly set to null
`public FDateTime `[`LastSeen_Optional`](#structFRHAPI__PlayerPresence_1a43b9f8dd0aa042d01cd93c1882a3cef9) | 
`public bool `[`LastSeen_IsSet`](#structFRHAPI__PlayerPresence_1aaa0822462308ed3c84f15392ec93e69d) | true if LastSeen_Optional has been set to a value
`public bool `[`LastSeen_IsNull`](#structFRHAPI__PlayerPresence_1aa4185112f6a3966a7888402616558ac9) | true if LastSeen_Optional has been explicitly set to null
`public virtual bool `[`FromJson`](#structFRHAPI__PlayerPresence_1a00e8a5741df12c0df5f0cf888d1b99eb)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__PlayerPresence_1ac5aaf1c341d4d93f8dabf240bb815269)`(TSharedRef< TJsonWriter<> > & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FORCEINLINE ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresence_1a254e009e34d91d30ac3236eadc917cca)`()` | Gets the value of Status_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresence_1a6b8a3522d3203c22d1c53a7b8f7e9191)`() const` | Gets the value of Status_Optional, regardless of it having been set.
`public inline FORCEINLINE const ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresence_1af1842dff8b3654a5df4d503a82f82fde)`(const ERHAPI_OnlineStatus & DefaultValue) const` | Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetStatus`](#structFRHAPI__PlayerPresence_1a48724c51a989f6f5a3883add23556aa3)`(ERHAPI_OnlineStatus & OutValue) const` | Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE ERHAPI_OnlineStatus * `[`GetStatusOrNull`](#structFRHAPI__PlayerPresence_1afdef46a013951cf1fa88ced799e1fdb3)`()` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const ERHAPI_OnlineStatus * `[`GetStatusOrNull`](#structFRHAPI__PlayerPresence_1a79d0700bb85a6303284793a493942bf1)`() const` | Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__PlayerPresence_1ac3580962642d1e8a56f5bd047d4e229c)`(const ERHAPI_OnlineStatus & NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true.
`public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__PlayerPresence_1a9739f807b4875592fb443c920be00de4)`(ERHAPI_OnlineStatus && NewValue)` | Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.
`public inline void `[`ClearStatus`](#structFRHAPI__PlayerPresence_1a166438c0a297bbbff8314b1addc758fc)`()` | Clears the value of Status_Optional and sets Status_IsSet to false.
`public inline FORCEINLINE FString & `[`GetMessage`](#structFRHAPI__PlayerPresence_1a73421d48ad320484445d58fd4fd4ef7e)`()` | Gets the value of Message_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMessage`](#structFRHAPI__PlayerPresence_1aacb78c62b1f994a426eec63200a9d0cd)`() const` | Gets the value of Message_Optional, regardless of it having been set.
`public inline FORCEINLINE const FString & `[`GetMessage`](#structFRHAPI__PlayerPresence_1a3d5dbe68f7a321b17036f74963eb98c3)`(const FString & DefaultValue) const` | Gets the value of Message_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetMessage`](#structFRHAPI__PlayerPresence_1abffeb44a19e5185a5957bb43165d44ec)`(FString & OutValue) const` | Fills OutValue with the value of Message_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FString * `[`GetMessageOrNull`](#structFRHAPI__PlayerPresence_1a162964b0b78d09bb2bec19d1cd926b22)`()` | Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FString * `[`GetMessageOrNull`](#structFRHAPI__PlayerPresence_1a03ebda4c6d500f0d1a7640fa32f5d18b)`() const` | Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetMessage`](#structFRHAPI__PlayerPresence_1a77c6d1409ed999a20475267d5800ac74)`(const FString & NewValue)` | Sets the value of Message_Optional and also sets Message_IsSet to true.
`public inline FORCEINLINE void `[`SetMessage`](#structFRHAPI__PlayerPresence_1a02273fff31f66e028503b6147be5a3d2)`(FString && NewValue)` | Sets the value of Message_Optional and also sets Message_IsSet to true using move semantics.
`public inline void `[`ClearMessage`](#structFRHAPI__PlayerPresence_1acf817a77014a4a059af05409ccd9dab0)`()` | Clears the value of Message_Optional and sets Message_IsSet to false.
`public inline FORCEINLINE FString `[`GetDefaultValue_Message`](#structFRHAPI__PlayerPresence_1a8b1100d75cb9b908714b4252b4e0ef42)`()` | Returns the default value of Message.
`public inline FORCEINLINE FString & `[`GetPlatform`](#structFRHAPI__PlayerPresence_1a20135edfe93f4d456bf5be01d42fcc3f)`()` | Gets the value of Platform.
`public inline FORCEINLINE const FString & `[`GetPlatform`](#structFRHAPI__PlayerPresence_1adebcb5ace7809398dd0261d91ac52c3a)`() const` | Gets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlayerPresence_1ad56186fe1e540b08cc52f7ebaa5b33d1)`(const FString & NewValue)` | Sets the value of Platform.
`public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlayerPresence_1a4f3632f9f37fcf69f62c1705224d892d)`(FString && NewValue)` | Sets the value of Platform using move semantics.
`public inline FORCEINLINE FString & `[`GetDisplayName`](#structFRHAPI__PlayerPresence_1a50d8ed051482d314587fc6fff419ba18)`()` | Gets the value of DisplayName.
`public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__PlayerPresence_1afa0fd0c3140c5695353e80aa72666c90)`() const` | Gets the value of DisplayName.
`public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__PlayerPresence_1a6283e353e650e6e9c5ad4f3ec07fd95b)`(const FString & NewValue)` | Sets the value of DisplayName.
`public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__PlayerPresence_1acd8e5bc6db3cf43c0384a898eb3b8640)`(FString && NewValue)` | Sets the value of DisplayName using move semantics.
`public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresence_1a27936c4f0761f7485f067c0a84d4464b)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresence_1a9fb92ebd0cc5ef267abf0ac438dac2af)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresence_1a8420a6484e9b276d5aeb090728343205)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlayerPresence_1a0dba03315015194877fc65ba3d472151)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerPresence_1adb5fa6c36b478e3e56ef524872f023a0)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerPresence_1a5d0046d0857d3585e1763bdee9f62346)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerPresence_1a1ab31a290da7526259dd27fe7f694591)`(const TMap< FString, FString > & NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerPresence_1a12e92d933c5aa6c0ab2d35e5b1005f00)`(TMap< FString, FString > && NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.
`public inline void `[`ClearCustomData`](#structFRHAPI__PlayerPresence_1a69de7a9b1c25befec0af2b403d89400d)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPresence_1ad685feb10d3e50e50c3ca94c5e011f00)`()` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPresence_1ad8282c50621e03be38fadfbd3ac8438a)`() const` | Gets the value of PlayerId_Optional, regardless of it having been set.
`public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPresence_1a1ff4279a1a5ebbed6c78f7e33ac5f6f5)`(const int32 & DefaultValue) const` | Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetPlayerId`](#structFRHAPI__PlayerPresence_1acefeb42f1ee12705eaacf5f44cc2a6b1)`(int32 & OutValue) const` | Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlayerPresence_1a26d9a2cd0b57be5f699c65e53088e379)`()` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlayerPresence_1a8edf7909b11345e3cc55ca3d94200202)`() const` | Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlayerPresence_1a34717a225f620c186a055449e94f20dd)`(const int32 & NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.
`public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlayerPresence_1a2994c7cf98878c89a9c6a01d016b200c)`(int32 && NewValue)` | Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.
`public inline void `[`ClearPlayerId`](#structFRHAPI__PlayerPresence_1a7e8c5f0e7a959ff0bfc6d46409083472)`()` | Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.
`public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__PlayerPresence_1a9d5200715be2c4c302152334328ddb94)`()` | Returns the default value of PlayerId.
`public inline FORCEINLINE void `[`SetPlayerIdToNull`](#structFRHAPI__PlayerPresence_1aebffaaec0e5bc13b584ca5051071657f)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsPlayerIdNull`](#structFRHAPI__PlayerPresence_1aa7dd7334433780b0bcc0e47deb851f9a)`() const` | Checks whether PlayerId_Optional is set to null.
`public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerPresence_1aff7a86b8ba77ee64c0929301daad961e)`()` | Gets the value of PlayerUuid.
`public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerPresence_1ac3669c93f879833399fb57e7a0c1463f)`() const` | Gets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerPresence_1a8fdc52e632d1e38b2652fa6d12a4c049)`(const FGuid & NewValue)` | Sets the value of PlayerUuid.
`public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerPresence_1a6cfe712ffd9197c8cf41a1de63607685)`(FGuid && NewValue)` | Sets the value of PlayerUuid using move semantics.
`public inline FORCEINLINE bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresence_1a5bb47e8118fafe04caad409868331700)`()` | Gets the value of DoNotDisturb_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresence_1aebf2091226ba0e534b64c7ce099298a0)`() const` | Gets the value of DoNotDisturb_Optional, regardless of it having been set.
`public inline FORCEINLINE const bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresence_1a8a34714fdef364cbec2d5f13a89d2085)`(const bool & DefaultValue) const` | Gets the value of DoNotDisturb_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresence_1a30f64501fedca332c21da124d2343138)`(bool & OutValue) const` | Fills OutValue with the value of DoNotDisturb_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE bool * `[`GetDoNotDisturbOrNull`](#structFRHAPI__PlayerPresence_1a0a264be258db03e467c94fe4958dc97b)`()` | Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const bool * `[`GetDoNotDisturbOrNull`](#structFRHAPI__PlayerPresence_1a099580fa1526f242d56a6eb80f4105d4)`() const` | Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetDoNotDisturb`](#structFRHAPI__PlayerPresence_1a255c444b032d1741ad2bf1393161f0f6)`(const bool & NewValue)` | Sets the value of DoNotDisturb_Optional and also sets DoNotDisturb_IsSet to true.
`public inline FORCEINLINE void `[`SetDoNotDisturb`](#structFRHAPI__PlayerPresence_1a2efdc2dac0d01dcac0cdac69b32ddc0e)`(bool && NewValue)` | Sets the value of DoNotDisturb_Optional and also sets DoNotDisturb_IsSet to true using move semantics.
`public inline void `[`ClearDoNotDisturb`](#structFRHAPI__PlayerPresence_1a03ce5218c874780e1c3d04fd68d48d61)`()` | Clears the value of DoNotDisturb_Optional and sets DoNotDisturb_IsSet to false.
`public inline FORCEINLINE bool `[`GetDefaultValue_DoNotDisturb`](#structFRHAPI__PlayerPresence_1a800c604fc1c80730b3009a32039538db)`()` | Returns the default value of DoNotDisturb.
`public inline FORCEINLINE void `[`SetDoNotDisturbToNull`](#structFRHAPI__PlayerPresence_1a7baa6d4e378eaf0648ba9e99d24601b1)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsDoNotDisturbNull`](#structFRHAPI__PlayerPresence_1a91f23154c16d4734c62efa58610f781a)`() const` | Checks whether DoNotDisturb_Optional is set to null.
`public inline FORCEINLINE FDateTime & `[`GetLastSeen`](#structFRHAPI__PlayerPresence_1a87373c0ad5e1e97d5935b943ce45a74d)`()` | Gets the value of LastSeen_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastSeen`](#structFRHAPI__PlayerPresence_1a503434131645b105d660527c73da6751)`() const` | Gets the value of LastSeen_Optional, regardless of it having been set.
`public inline FORCEINLINE const FDateTime & `[`GetLastSeen`](#structFRHAPI__PlayerPresence_1acbcfb090af10134822b125bc6a4cff18)`(const FDateTime & DefaultValue) const` | Gets the value of LastSeen_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline FORCEINLINE bool `[`GetLastSeen`](#structFRHAPI__PlayerPresence_1ae91699d189a5c06c887488a2abc4bf53)`(FDateTime & OutValue) const` | Fills OutValue with the value of LastSeen_Optional and returns true if it has been set, otherwise returns false.
`public inline FORCEINLINE FDateTime * `[`GetLastSeenOrNull`](#structFRHAPI__PlayerPresence_1af431b0be3a76b99812072cf1dca31d18)`()` | Returns a pointer to LastSeen_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE const FDateTime * `[`GetLastSeenOrNull`](#structFRHAPI__PlayerPresence_1a29d60c0469f83bdcbc5695be280b910d)`() const` | Returns a pointer to LastSeen_Optional, if it has been set, otherwise returns nullptr.
`public inline FORCEINLINE void `[`SetLastSeen`](#structFRHAPI__PlayerPresence_1a201ea18696018ba07420c6c5b99eaa8a)`(const FDateTime & NewValue)` | Sets the value of LastSeen_Optional and also sets LastSeen_IsSet to true.
`public inline FORCEINLINE void `[`SetLastSeen`](#structFRHAPI__PlayerPresence_1a6de13a8987ee5d0ee65f6ddbc5d2e354)`(FDateTime && NewValue)` | Sets the value of LastSeen_Optional and also sets LastSeen_IsSet to true using move semantics.
`public inline void `[`ClearLastSeen`](#structFRHAPI__PlayerPresence_1af3e5ba70c9564dadedcb60029e464844)`()` | Clears the value of LastSeen_Optional and sets LastSeen_IsSet to false.
`public inline FORCEINLINE void `[`SetLastSeenToNull`](#structFRHAPI__PlayerPresence_1ac6956f92180e7c814c83a0d0820d73b3)`()` | Sets the value explicitly to be treated as null.
`public inline FORCEINLINE bool `[`IsLastSeenNull`](#structFRHAPI__PlayerPresence_1a6661439639a01b4f5704d9013d323f04)`() const` | Checks whether LastSeen_Optional is set to null.

### Members

#### `public ERHAPI_OnlineStatus `[`Status_Optional`](#structFRHAPI__PlayerPresence_1ab4245201b34187accfbca6aaf8ea939d) <a id="structFRHAPI__PlayerPresence_1ab4245201b34187accfbca6aaf8ea939d"></a>

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

#### `public bool `[`PlayerId_IsSet`](#structFRHAPI__PlayerPresence_1afe3f3566bb0baed0c310f388dcde4717) <a id="structFRHAPI__PlayerPresence_1afe3f3566bb0baed0c310f388dcde4717"></a>

true if PlayerId_Optional has been set to a value

#### `public bool `[`PlayerId_IsNull`](#structFRHAPI__PlayerPresence_1a9635c5879651168618ff303f4ba7a698) <a id="structFRHAPI__PlayerPresence_1a9635c5879651168618ff303f4ba7a698"></a>

true if PlayerId_Optional has been explicitly set to null

#### `public FGuid `[`PlayerUuid`](#structFRHAPI__PlayerPresence_1a1d0bb60579fee7f87c47f3710b752431) <a id="structFRHAPI__PlayerPresence_1a1d0bb60579fee7f87c47f3710b752431"></a>

UUID of the player whose presence this represents.

#### `public bool `[`DoNotDisturb_Optional`](#structFRHAPI__PlayerPresence_1a3fdc4a3aa5dbb298792e1861132eec6a) <a id="structFRHAPI__PlayerPresence_1a3fdc4a3aa5dbb298792e1861132eec6a"></a>

#### `public bool `[`DoNotDisturb_IsSet`](#structFRHAPI__PlayerPresence_1a95e326a3b33c1d605073a4af9d964841) <a id="structFRHAPI__PlayerPresence_1a95e326a3b33c1d605073a4af9d964841"></a>

true if DoNotDisturb_Optional has been set to a value

#### `public bool `[`DoNotDisturb_IsNull`](#structFRHAPI__PlayerPresence_1aa430fb8c95a433d4b1faca9407d63030) <a id="structFRHAPI__PlayerPresence_1aa430fb8c95a433d4b1faca9407d63030"></a>

true if DoNotDisturb_Optional has been explicitly set to null

#### `public FDateTime `[`LastSeen_Optional`](#structFRHAPI__PlayerPresence_1a43b9f8dd0aa042d01cd93c1882a3cef9) <a id="structFRHAPI__PlayerPresence_1a43b9f8dd0aa042d01cd93c1882a3cef9"></a>

#### `public bool `[`LastSeen_IsSet`](#structFRHAPI__PlayerPresence_1aaa0822462308ed3c84f15392ec93e69d) <a id="structFRHAPI__PlayerPresence_1aaa0822462308ed3c84f15392ec93e69d"></a>

true if LastSeen_Optional has been set to a value

#### `public bool `[`LastSeen_IsNull`](#structFRHAPI__PlayerPresence_1aa4185112f6a3966a7888402616558ac9) <a id="structFRHAPI__PlayerPresence_1aa4185112f6a3966a7888402616558ac9"></a>

true if LastSeen_Optional has been explicitly set to null

#### `public virtual bool `[`FromJson`](#structFRHAPI__PlayerPresence_1a00e8a5741df12c0df5f0cf888d1b99eb)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__PlayerPresence_1a00e8a5741df12c0df5f0cf888d1b99eb"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

#### `public virtual void `[`WriteJson`](#structFRHAPI__PlayerPresence_1ac5aaf1c341d4d93f8dabf240bb815269)`(TSharedRef< TJsonWriter<> > & Writer) const` <a id="structFRHAPI__PlayerPresence_1ac5aaf1c341d4d93f8dabf240bb815269"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

#### `public inline FORCEINLINE ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresence_1a254e009e34d91d30ac3236eadc917cca)`()` <a id="structFRHAPI__PlayerPresence_1a254e009e34d91d30ac3236eadc917cca"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresence_1a6b8a3522d3203c22d1c53a7b8f7e9191)`() const` <a id="structFRHAPI__PlayerPresence_1a6b8a3522d3203c22d1c53a7b8f7e9191"></a>

Gets the value of Status_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const ERHAPI_OnlineStatus & `[`GetStatus`](#structFRHAPI__PlayerPresence_1af1842dff8b3654a5df4d503a82f82fde)`(const ERHAPI_OnlineStatus & DefaultValue) const` <a id="structFRHAPI__PlayerPresence_1af1842dff8b3654a5df4d503a82f82fde"></a>

Gets the value of Status_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetStatus`](#structFRHAPI__PlayerPresence_1a48724c51a989f6f5a3883add23556aa3)`(ERHAPI_OnlineStatus & OutValue) const` <a id="structFRHAPI__PlayerPresence_1a48724c51a989f6f5a3883add23556aa3"></a>

Fills OutValue with the value of Status_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE ERHAPI_OnlineStatus * `[`GetStatusOrNull`](#structFRHAPI__PlayerPresence_1afdef46a013951cf1fa88ced799e1fdb3)`()` <a id="structFRHAPI__PlayerPresence_1afdef46a013951cf1fa88ced799e1fdb3"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const ERHAPI_OnlineStatus * `[`GetStatusOrNull`](#structFRHAPI__PlayerPresence_1a79d0700bb85a6303284793a493942bf1)`() const` <a id="structFRHAPI__PlayerPresence_1a79d0700bb85a6303284793a493942bf1"></a>

Returns a pointer to Status_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__PlayerPresence_1ac3580962642d1e8a56f5bd047d4e229c)`(const ERHAPI_OnlineStatus & NewValue)` <a id="structFRHAPI__PlayerPresence_1ac3580962642d1e8a56f5bd047d4e229c"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true.

#### `public inline FORCEINLINE void `[`SetStatus`](#structFRHAPI__PlayerPresence_1a9739f807b4875592fb443c920be00de4)`(ERHAPI_OnlineStatus && NewValue)` <a id="structFRHAPI__PlayerPresence_1a9739f807b4875592fb443c920be00de4"></a>

Sets the value of Status_Optional and also sets Status_IsSet to true using move semantics.

#### `public inline void `[`ClearStatus`](#structFRHAPI__PlayerPresence_1a166438c0a297bbbff8314b1addc758fc)`()` <a id="structFRHAPI__PlayerPresence_1a166438c0a297bbbff8314b1addc758fc"></a>

Clears the value of Status_Optional and sets Status_IsSet to false.

#### `public inline FORCEINLINE FString & `[`GetMessage`](#structFRHAPI__PlayerPresence_1a73421d48ad320484445d58fd4fd4ef7e)`()` <a id="structFRHAPI__PlayerPresence_1a73421d48ad320484445d58fd4fd4ef7e"></a>

Gets the value of Message_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMessage`](#structFRHAPI__PlayerPresence_1aacb78c62b1f994a426eec63200a9d0cd)`() const` <a id="structFRHAPI__PlayerPresence_1aacb78c62b1f994a426eec63200a9d0cd"></a>

Gets the value of Message_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FString & `[`GetMessage`](#structFRHAPI__PlayerPresence_1a3d5dbe68f7a321b17036f74963eb98c3)`(const FString & DefaultValue) const` <a id="structFRHAPI__PlayerPresence_1a3d5dbe68f7a321b17036f74963eb98c3"></a>

Gets the value of Message_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetMessage`](#structFRHAPI__PlayerPresence_1abffeb44a19e5185a5957bb43165d44ec)`(FString & OutValue) const` <a id="structFRHAPI__PlayerPresence_1abffeb44a19e5185a5957bb43165d44ec"></a>

Fills OutValue with the value of Message_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FString * `[`GetMessageOrNull`](#structFRHAPI__PlayerPresence_1a162964b0b78d09bb2bec19d1cd926b22)`()` <a id="structFRHAPI__PlayerPresence_1a162964b0b78d09bb2bec19d1cd926b22"></a>

Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FString * `[`GetMessageOrNull`](#structFRHAPI__PlayerPresence_1a03ebda4c6d500f0d1a7640fa32f5d18b)`() const` <a id="structFRHAPI__PlayerPresence_1a03ebda4c6d500f0d1a7640fa32f5d18b"></a>

Returns a pointer to Message_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetMessage`](#structFRHAPI__PlayerPresence_1a77c6d1409ed999a20475267d5800ac74)`(const FString & NewValue)` <a id="structFRHAPI__PlayerPresence_1a77c6d1409ed999a20475267d5800ac74"></a>

Sets the value of Message_Optional and also sets Message_IsSet to true.

#### `public inline FORCEINLINE void `[`SetMessage`](#structFRHAPI__PlayerPresence_1a02273fff31f66e028503b6147be5a3d2)`(FString && NewValue)` <a id="structFRHAPI__PlayerPresence_1a02273fff31f66e028503b6147be5a3d2"></a>

Sets the value of Message_Optional and also sets Message_IsSet to true using move semantics.

#### `public inline void `[`ClearMessage`](#structFRHAPI__PlayerPresence_1acf817a77014a4a059af05409ccd9dab0)`()` <a id="structFRHAPI__PlayerPresence_1acf817a77014a4a059af05409ccd9dab0"></a>

Clears the value of Message_Optional and sets Message_IsSet to false.

#### `public inline FORCEINLINE FString `[`GetDefaultValue_Message`](#structFRHAPI__PlayerPresence_1a8b1100d75cb9b908714b4252b4e0ef42)`()` <a id="structFRHAPI__PlayerPresence_1a8b1100d75cb9b908714b4252b4e0ef42"></a>

Returns the default value of Message.

#### `public inline FORCEINLINE FString & `[`GetPlatform`](#structFRHAPI__PlayerPresence_1a20135edfe93f4d456bf5be01d42fcc3f)`()` <a id="structFRHAPI__PlayerPresence_1a20135edfe93f4d456bf5be01d42fcc3f"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE const FString & `[`GetPlatform`](#structFRHAPI__PlayerPresence_1adebcb5ace7809398dd0261d91ac52c3a)`() const` <a id="structFRHAPI__PlayerPresence_1adebcb5ace7809398dd0261d91ac52c3a"></a>

Gets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlayerPresence_1ad56186fe1e540b08cc52f7ebaa5b33d1)`(const FString & NewValue)` <a id="structFRHAPI__PlayerPresence_1ad56186fe1e540b08cc52f7ebaa5b33d1"></a>

Sets the value of Platform.

#### `public inline FORCEINLINE void `[`SetPlatform`](#structFRHAPI__PlayerPresence_1a4f3632f9f37fcf69f62c1705224d892d)`(FString && NewValue)` <a id="structFRHAPI__PlayerPresence_1a4f3632f9f37fcf69f62c1705224d892d"></a>

Sets the value of Platform using move semantics.

#### `public inline FORCEINLINE FString & `[`GetDisplayName`](#structFRHAPI__PlayerPresence_1a50d8ed051482d314587fc6fff419ba18)`()` <a id="structFRHAPI__PlayerPresence_1a50d8ed051482d314587fc6fff419ba18"></a>

Gets the value of DisplayName.

#### `public inline FORCEINLINE const FString & `[`GetDisplayName`](#structFRHAPI__PlayerPresence_1afa0fd0c3140c5695353e80aa72666c90)`() const` <a id="structFRHAPI__PlayerPresence_1afa0fd0c3140c5695353e80aa72666c90"></a>

Gets the value of DisplayName.

#### `public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__PlayerPresence_1a6283e353e650e6e9c5ad4f3ec07fd95b)`(const FString & NewValue)` <a id="structFRHAPI__PlayerPresence_1a6283e353e650e6e9c5ad4f3ec07fd95b"></a>

Sets the value of DisplayName.

#### `public inline FORCEINLINE void `[`SetDisplayName`](#structFRHAPI__PlayerPresence_1acd8e5bc6db3cf43c0384a898eb3b8640)`(FString && NewValue)` <a id="structFRHAPI__PlayerPresence_1acd8e5bc6db3cf43c0384a898eb3b8640"></a>

Sets the value of DisplayName using move semantics.

#### `public inline FORCEINLINE TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresence_1a27936c4f0761f7485f067c0a84d4464b)`()` <a id="structFRHAPI__PlayerPresence_1a27936c4f0761f7485f067c0a84d4464b"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresence_1a9fb92ebd0cc5ef267abf0ac438dac2af)`() const` <a id="structFRHAPI__PlayerPresence_1a9fb92ebd0cc5ef267abf0ac438dac2af"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__PlayerPresence_1a8420a6484e9b276d5aeb090728343205)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__PlayerPresence_1a8420a6484e9b276d5aeb090728343205"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetCustomData`](#structFRHAPI__PlayerPresence_1a0dba03315015194877fc65ba3d472151)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__PlayerPresence_1a0dba03315015194877fc65ba3d472151"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerPresence_1adb5fa6c36b478e3e56ef524872f023a0)`()` <a id="structFRHAPI__PlayerPresence_1adb5fa6c36b478e3e56ef524872f023a0"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__PlayerPresence_1a5d0046d0857d3585e1763bdee9f62346)`() const` <a id="structFRHAPI__PlayerPresence_1a5d0046d0857d3585e1763bdee9f62346"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerPresence_1a1ab31a290da7526259dd27fe7f694591)`(const TMap< FString, FString > & NewValue)` <a id="structFRHAPI__PlayerPresence_1a1ab31a290da7526259dd27fe7f694591"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

#### `public inline FORCEINLINE void `[`SetCustomData`](#structFRHAPI__PlayerPresence_1a12e92d933c5aa6c0ab2d35e5b1005f00)`(TMap< FString, FString > && NewValue)` <a id="structFRHAPI__PlayerPresence_1a12e92d933c5aa6c0ab2d35e5b1005f00"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true using move semantics.

#### `public inline void `[`ClearCustomData`](#structFRHAPI__PlayerPresence_1a69de7a9b1c25befec0af2b403d89400d)`()` <a id="structFRHAPI__PlayerPresence_1a69de7a9b1c25befec0af2b403d89400d"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

#### `public inline FORCEINLINE int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPresence_1ad685feb10d3e50e50c3ca94c5e011f00)`()` <a id="structFRHAPI__PlayerPresence_1ad685feb10d3e50e50c3ca94c5e011f00"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPresence_1ad8282c50621e03be38fadfbd3ac8438a)`() const` <a id="structFRHAPI__PlayerPresence_1ad8282c50621e03be38fadfbd3ac8438a"></a>

Gets the value of PlayerId_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const int32 & `[`GetPlayerId`](#structFRHAPI__PlayerPresence_1a1ff4279a1a5ebbed6c78f7e33ac5f6f5)`(const int32 & DefaultValue) const` <a id="structFRHAPI__PlayerPresence_1a1ff4279a1a5ebbed6c78f7e33ac5f6f5"></a>

Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetPlayerId`](#structFRHAPI__PlayerPresence_1acefeb42f1ee12705eaacf5f44cc2a6b1)`(int32 & OutValue) const` <a id="structFRHAPI__PlayerPresence_1acefeb42f1ee12705eaacf5f44cc2a6b1"></a>

Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlayerPresence_1a26d9a2cd0b57be5f699c65e53088e379)`()` <a id="structFRHAPI__PlayerPresence_1a26d9a2cd0b57be5f699c65e53088e379"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const int32 * `[`GetPlayerIdOrNull`](#structFRHAPI__PlayerPresence_1a8edf7909b11345e3cc55ca3d94200202)`() const` <a id="structFRHAPI__PlayerPresence_1a8edf7909b11345e3cc55ca3d94200202"></a>

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlayerPresence_1a34717a225f620c186a055449e94f20dd)`(const int32 & NewValue)` <a id="structFRHAPI__PlayerPresence_1a34717a225f620c186a055449e94f20dd"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.

#### `public inline FORCEINLINE void `[`SetPlayerId`](#structFRHAPI__PlayerPresence_1a2994c7cf98878c89a9c6a01d016b200c)`(int32 && NewValue)` <a id="structFRHAPI__PlayerPresence_1a2994c7cf98878c89a9c6a01d016b200c"></a>

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true using move semantics.

#### `public inline void `[`ClearPlayerId`](#structFRHAPI__PlayerPresence_1a7e8c5f0e7a959ff0bfc6d46409083472)`()` <a id="structFRHAPI__PlayerPresence_1a7e8c5f0e7a959ff0bfc6d46409083472"></a>

Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.

#### `public inline FORCEINLINE int32 `[`GetDefaultValue_PlayerId`](#structFRHAPI__PlayerPresence_1a9d5200715be2c4c302152334328ddb94)`()` <a id="structFRHAPI__PlayerPresence_1a9d5200715be2c4c302152334328ddb94"></a>

Returns the default value of PlayerId.

#### `public inline FORCEINLINE void `[`SetPlayerIdToNull`](#structFRHAPI__PlayerPresence_1aebffaaec0e5bc13b584ca5051071657f)`()` <a id="structFRHAPI__PlayerPresence_1aebffaaec0e5bc13b584ca5051071657f"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsPlayerIdNull`](#structFRHAPI__PlayerPresence_1aa7dd7334433780b0bcc0e47deb851f9a)`() const` <a id="structFRHAPI__PlayerPresence_1aa7dd7334433780b0bcc0e47deb851f9a"></a>

Checks whether PlayerId_Optional is set to null.

#### `public inline FORCEINLINE FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerPresence_1aff7a86b8ba77ee64c0929301daad961e)`()` <a id="structFRHAPI__PlayerPresence_1aff7a86b8ba77ee64c0929301daad961e"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE const FGuid & `[`GetPlayerUuid`](#structFRHAPI__PlayerPresence_1ac3669c93f879833399fb57e7a0c1463f)`() const` <a id="structFRHAPI__PlayerPresence_1ac3669c93f879833399fb57e7a0c1463f"></a>

Gets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerPresence_1a8fdc52e632d1e38b2652fa6d12a4c049)`(const FGuid & NewValue)` <a id="structFRHAPI__PlayerPresence_1a8fdc52e632d1e38b2652fa6d12a4c049"></a>

Sets the value of PlayerUuid.

#### `public inline FORCEINLINE void `[`SetPlayerUuid`](#structFRHAPI__PlayerPresence_1a6cfe712ffd9197c8cf41a1de63607685)`(FGuid && NewValue)` <a id="structFRHAPI__PlayerPresence_1a6cfe712ffd9197c8cf41a1de63607685"></a>

Sets the value of PlayerUuid using move semantics.

#### `public inline FORCEINLINE bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresence_1a5bb47e8118fafe04caad409868331700)`()` <a id="structFRHAPI__PlayerPresence_1a5bb47e8118fafe04caad409868331700"></a>

Gets the value of DoNotDisturb_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresence_1aebf2091226ba0e534b64c7ce099298a0)`() const` <a id="structFRHAPI__PlayerPresence_1aebf2091226ba0e534b64c7ce099298a0"></a>

Gets the value of DoNotDisturb_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const bool & `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresence_1a8a34714fdef364cbec2d5f13a89d2085)`(const bool & DefaultValue) const` <a id="structFRHAPI__PlayerPresence_1a8a34714fdef364cbec2d5f13a89d2085"></a>

Gets the value of DoNotDisturb_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetDoNotDisturb`](#structFRHAPI__PlayerPresence_1a30f64501fedca332c21da124d2343138)`(bool & OutValue) const` <a id="structFRHAPI__PlayerPresence_1a30f64501fedca332c21da124d2343138"></a>

Fills OutValue with the value of DoNotDisturb_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE bool * `[`GetDoNotDisturbOrNull`](#structFRHAPI__PlayerPresence_1a0a264be258db03e467c94fe4958dc97b)`()` <a id="structFRHAPI__PlayerPresence_1a0a264be258db03e467c94fe4958dc97b"></a>

Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const bool * `[`GetDoNotDisturbOrNull`](#structFRHAPI__PlayerPresence_1a099580fa1526f242d56a6eb80f4105d4)`() const` <a id="structFRHAPI__PlayerPresence_1a099580fa1526f242d56a6eb80f4105d4"></a>

Returns a pointer to DoNotDisturb_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetDoNotDisturb`](#structFRHAPI__PlayerPresence_1a255c444b032d1741ad2bf1393161f0f6)`(const bool & NewValue)` <a id="structFRHAPI__PlayerPresence_1a255c444b032d1741ad2bf1393161f0f6"></a>

Sets the value of DoNotDisturb_Optional and also sets DoNotDisturb_IsSet to true.

#### `public inline FORCEINLINE void `[`SetDoNotDisturb`](#structFRHAPI__PlayerPresence_1a2efdc2dac0d01dcac0cdac69b32ddc0e)`(bool && NewValue)` <a id="structFRHAPI__PlayerPresence_1a2efdc2dac0d01dcac0cdac69b32ddc0e"></a>

Sets the value of DoNotDisturb_Optional and also sets DoNotDisturb_IsSet to true using move semantics.

#### `public inline void `[`ClearDoNotDisturb`](#structFRHAPI__PlayerPresence_1a03ce5218c874780e1c3d04fd68d48d61)`()` <a id="structFRHAPI__PlayerPresence_1a03ce5218c874780e1c3d04fd68d48d61"></a>

Clears the value of DoNotDisturb_Optional and sets DoNotDisturb_IsSet to false.

#### `public inline FORCEINLINE bool `[`GetDefaultValue_DoNotDisturb`](#structFRHAPI__PlayerPresence_1a800c604fc1c80730b3009a32039538db)`()` <a id="structFRHAPI__PlayerPresence_1a800c604fc1c80730b3009a32039538db"></a>

Returns the default value of DoNotDisturb.

#### `public inline FORCEINLINE void `[`SetDoNotDisturbToNull`](#structFRHAPI__PlayerPresence_1a7baa6d4e378eaf0648ba9e99d24601b1)`()` <a id="structFRHAPI__PlayerPresence_1a7baa6d4e378eaf0648ba9e99d24601b1"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsDoNotDisturbNull`](#structFRHAPI__PlayerPresence_1a91f23154c16d4734c62efa58610f781a)`() const` <a id="structFRHAPI__PlayerPresence_1a91f23154c16d4734c62efa58610f781a"></a>

Checks whether DoNotDisturb_Optional is set to null.

#### `public inline FORCEINLINE FDateTime & `[`GetLastSeen`](#structFRHAPI__PlayerPresence_1a87373c0ad5e1e97d5935b943ce45a74d)`()` <a id="structFRHAPI__PlayerPresence_1a87373c0ad5e1e97d5935b943ce45a74d"></a>

Gets the value of LastSeen_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastSeen`](#structFRHAPI__PlayerPresence_1a503434131645b105d660527c73da6751)`() const` <a id="structFRHAPI__PlayerPresence_1a503434131645b105d660527c73da6751"></a>

Gets the value of LastSeen_Optional, regardless of it having been set.

#### `public inline FORCEINLINE const FDateTime & `[`GetLastSeen`](#structFRHAPI__PlayerPresence_1acbcfb090af10134822b125bc6a4cff18)`(const FDateTime & DefaultValue) const` <a id="structFRHAPI__PlayerPresence_1acbcfb090af10134822b125bc6a4cff18"></a>

Gets the value of LastSeen_Optional, if it has been set, otherwise it returns DefaultValue.

#### `public inline FORCEINLINE bool `[`GetLastSeen`](#structFRHAPI__PlayerPresence_1ae91699d189a5c06c887488a2abc4bf53)`(FDateTime & OutValue) const` <a id="structFRHAPI__PlayerPresence_1ae91699d189a5c06c887488a2abc4bf53"></a>

Fills OutValue with the value of LastSeen_Optional and returns true if it has been set, otherwise returns false.

#### `public inline FORCEINLINE FDateTime * `[`GetLastSeenOrNull`](#structFRHAPI__PlayerPresence_1af431b0be3a76b99812072cf1dca31d18)`()` <a id="structFRHAPI__PlayerPresence_1af431b0be3a76b99812072cf1dca31d18"></a>

Returns a pointer to LastSeen_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE const FDateTime * `[`GetLastSeenOrNull`](#structFRHAPI__PlayerPresence_1a29d60c0469f83bdcbc5695be280b910d)`() const` <a id="structFRHAPI__PlayerPresence_1a29d60c0469f83bdcbc5695be280b910d"></a>

Returns a pointer to LastSeen_Optional, if it has been set, otherwise returns nullptr.

#### `public inline FORCEINLINE void `[`SetLastSeen`](#structFRHAPI__PlayerPresence_1a201ea18696018ba07420c6c5b99eaa8a)`(const FDateTime & NewValue)` <a id="structFRHAPI__PlayerPresence_1a201ea18696018ba07420c6c5b99eaa8a"></a>

Sets the value of LastSeen_Optional and also sets LastSeen_IsSet to true.

#### `public inline FORCEINLINE void `[`SetLastSeen`](#structFRHAPI__PlayerPresence_1a6de13a8987ee5d0ee65f6ddbc5d2e354)`(FDateTime && NewValue)` <a id="structFRHAPI__PlayerPresence_1a6de13a8987ee5d0ee65f6ddbc5d2e354"></a>

Sets the value of LastSeen_Optional and also sets LastSeen_IsSet to true using move semantics.

#### `public inline void `[`ClearLastSeen`](#structFRHAPI__PlayerPresence_1af3e5ba70c9564dadedcb60029e464844)`()` <a id="structFRHAPI__PlayerPresence_1af3e5ba70c9564dadedcb60029e464844"></a>

Clears the value of LastSeen_Optional and sets LastSeen_IsSet to false.

#### `public inline FORCEINLINE void `[`SetLastSeenToNull`](#structFRHAPI__PlayerPresence_1ac6956f92180e7c814c83a0d0820d73b3)`()` <a id="structFRHAPI__PlayerPresence_1ac6956f92180e7c814c83a0d0820d73b3"></a>

Sets the value explicitly to be treated as null.

#### `public inline FORCEINLINE bool `[`IsLastSeenNull`](#structFRHAPI__PlayerPresence_1a6661439639a01b4f5704d9013d323f04)`() const` <a id="structFRHAPI__PlayerPresence_1a6661439639a01b4f5704d9013d323f04"></a>

Checks whether LastSeen_Optional is set to null.

