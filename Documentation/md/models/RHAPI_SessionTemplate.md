# RHAPI_SessionTemplate <a id="group__RHAPI__SessionTemplate"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`struct `[`FRHAPI_SessionTemplate`](#structFRHAPI__SessionTemplate) | Template used to create new RallyHere sessions of a specific type. Configurable in the developer portal.

## struct `FRHAPI_SessionTemplate` <a id="structFRHAPI__SessionTemplate"></a>

```
struct FRHAPI_SessionTemplate
  : public FRHAPI_Model
```

Template used to create new RallyHere sessions of a specific type. Configurable in the developer portal.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`SessionType`](#structFRHAPI__SessionTemplate_1a294a5c42b68d1960ade23eb2b8ebed03) | unique name for this template
`public FString `[`EngineSessionType_Optional`](#structFRHAPI__SessionTemplate_1a5215d82c4b5a1849115e1192ce85a42a) | Engine identifier for sessions of this type. For UE, this is commonly `Party` or `Game`.
`public bool `[`EngineSessionType_IsSet`](#structFRHAPI__SessionTemplate_1a7fe48b7d9dd76d0918d6c8cfef6ddabe) | true if EngineSessionType_Optional has been set to a value
`public bool `[`CanJoinMatchmaking_Optional`](#structFRHAPI__SessionTemplate_1a5acc833f588d8b29365429498cfe2a7b) | Are sessions of this type allowed to join matchmaking?
`public bool `[`CanJoinMatchmaking_IsSet`](#structFRHAPI__SessionTemplate_1a2e4fd1ddce8e54ae5242c6a839b9a446) | true if CanJoinMatchmaking_Optional has been set to a value
`public bool `[`CanBeCreatedByPlayersDirectly_Optional`](#structFRHAPI__SessionTemplate_1ab6aed074db1776677efeedae942a6dde) | Are players allowed to create sessions of this type?
`public bool `[`CanBeCreatedByPlayersDirectly_IsSet`](#structFRHAPI__SessionTemplate_1af34cf526890cc59a7c99aeb31fe47f86) | true if CanBeCreatedByPlayersDirectly_Optional has been set to a value
`public bool `[`Joinable_Optional`](#structFRHAPI__SessionTemplate_1af726850d2f0a47c0d363bc6fe56649d2) | Should players join existing sessions of this type before creating a new one.
`public bool `[`Joinable_IsSet`](#structFRHAPI__SessionTemplate_1a640852541c1622264fb0b45e8bcba358) | true if Joinable_Optional has been set to a value
`public bool `[`AutoAddToBrowser_Optional`](#structFRHAPI__SessionTemplate_1acd767d33d578663a2ae87266051aee21) | Should session be automatically added to the browser list.
`public bool `[`AutoAddToBrowser_IsSet`](#structFRHAPI__SessionTemplate_1a3680cbdc548742735a67e6b5aa39f17a) | true if AutoAddToBrowser_Optional has been set to a value
`public TMap< FString, FString > `[`AutoBrowserParams_Optional`](#structFRHAPI__SessionTemplate_1a82787643aa3e38fe0da7bf1500e0ef62) | Browser parameters that can be used to filter results.
`public bool `[`AutoBrowserParams_IsSet`](#structFRHAPI__SessionTemplate_1a72c52c990ae499219e09ac48b95dfb1b) | true if AutoBrowserParams_Optional has been set to a value
`public bool `[`CanBeAddedToServerBrowser_Optional`](#structFRHAPI__SessionTemplate_1a76d1142e89d2951f77aca49fae032565) | Are sessions of this type able to be added to the server browser by players?
`public bool `[`CanBeAddedToServerBrowser_IsSet`](#structFRHAPI__SessionTemplate_1af405bbeacdcad1f1edeec8066557d282) | true if CanBeAddedToServerBrowser_Optional has been set to a value
`public bool `[`KeepAliveOnEmpty_Optional`](#structFRHAPI__SessionTemplate_1a9e9d05c256bcee13ec7a503fff383a9f) | Should the session stay around, or be destroyed when the last player leaves it?
`public bool `[`KeepAliveOnEmpty_IsSet`](#structFRHAPI__SessionTemplate_1a7a021f27573b66f03bddb164ba2baea4) | true if KeepAliveOnEmpty_Optional has been set to a value
`public TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > `[`PlatformTemplates_Optional`](#structFRHAPI__SessionTemplate_1a4a953d98de7701f09938b03e88dc447d) | Platform-Specific session mappings that are used to coordinate Rally Here sessions with OnlineSubsystem sessions.
`public bool `[`PlatformTemplates_IsSet`](#structFRHAPI__SessionTemplate_1a98480d277fd8e297e5b90560f3c10f1a) | true if PlatformTemplates_Optional has been set to a value
`public `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` `[`AutoStartupParams_Optional`](#structFRHAPI__SessionTemplate_1a32d9a060ff0208b639415cee5d9f7287) | 
`public bool `[`AutoStartupParams_IsSet`](#structFRHAPI__SessionTemplate_1a1ae179a6de476981a9a38197758b7e14) | true if AutoStartupParams_Optional has been set to a value
`public int32 `[`MinSessionCount_Optional`](#structFRHAPI__SessionTemplate_1aecf6bdd55d8dc8e92bf1d6e2dc032fc6) | Minimum number of this type of session to be running at any given time per region.
`public bool `[`MinSessionCount_IsSet`](#structFRHAPI__SessionTemplate_1a067eb5ca1f241b90407f3a373cb0bd79) | true if MinSessionCount_Optional has been set to a value
`public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionTemplate_1a8dc395b5c32a277ba6a8098613b19c90) | Product-defined custom data about this session type.
`public bool `[`CustomData_IsSet`](#structFRHAPI__SessionTemplate_1a74b694f3d97279b0f69b5d9c45cef5cc) | true if CustomData_Optional has been set to a value
`public int32 `[`NumTeams_Optional`](#structFRHAPI__SessionTemplate_1a5a6263a13f22dc9fab381d24dd85b07d) | The number of teams this session type can have.
`public bool `[`NumTeams_IsSet`](#structFRHAPI__SessionTemplate_1a5aae055f985bbecae420f583bffcc0a8) | true if NumTeams_Optional has been set to a value
`public int32 `[`PlayersPerTeam_Optional`](#structFRHAPI__SessionTemplate_1acc07f08f5c7dc3262717a590f3de6764) | The number of players that can be on each team.
`public bool `[`PlayersPerTeam_IsSet`](#structFRHAPI__SessionTemplate_1a4351b4b52f5240e0bff65fb92b36b3a2) | true if PlayersPerTeam_Optional has been set to a value
`public bool `[`CanChangeOwnTeam_Optional`](#structFRHAPI__SessionTemplate_1aa2d67a98c7bcf96cc848ae81ca3387e3) | Whether or not a player can change which team they are on. If true, they are able to. If False, they player's team can only be changed by an admin.
`public bool `[`CanChangeOwnTeam_IsSet`](#structFRHAPI__SessionTemplate_1ad6b80d668b66266c71f70affb0cae587) | true if CanChangeOwnTeam_Optional has been set to a value
`public virtual bool `[`FromJson`](#structFRHAPI__SessionTemplate_1a4a45fc40eed406ae864f33e45c0eadf2)`(const TSharedPtr< FJsonValue > & JsonValue)` | Fills this object with data from the passed in JSON.
`public virtual void `[`WriteJson`](#structFRHAPI__SessionTemplate_1a8ddb8c09f6817591c4927b4a5c49df76)`(TSharedRef< TJsonWriter<>> & Writer) const` | Writes the data from this object into the specified JSON Writer stream.
`public inline FString & `[`GetSessionType`](#structFRHAPI__SessionTemplate_1a7772fb5d40d6b5c69dc188065146a39c)`()` | Gets the value of SessionType.
`public inline const FString & `[`GetSessionType`](#structFRHAPI__SessionTemplate_1affce611355a919ed8acc4bbd307ae642)`() const` | Gets the value of SessionType.
`public inline void `[`SetSessionType`](#structFRHAPI__SessionTemplate_1ad361f7865488bf9dbb073c2fa606b744)`(FString NewValue)` | Sets the value of SessionType.
`public inline FString & `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1a762d5ee11b4fbdcf9cc38632fc97765f)`()` | Gets the value of EngineSessionType_Optional, regardless of it having been set.
`public inline const FString & `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1a24a915b19cee9cc45c130fa81cf37942)`() const` | Gets the value of EngineSessionType_Optional, regardless of it having been set.
`public inline const FString & `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1ae11165b1eca1372b3ea911977fd53855)`(const FString & DefaultValue) const` | Gets the value of EngineSessionType_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1ac4fce3fe7bfb35f5ded0559c3d4ddb8d)`(FString & OutValue) const` | Fills OutValue with the value of EngineSessionType_Optional and returns true if it has been set, otherwise returns false.
`public inline FString * `[`GetEngineSessionTypeOrNull`](#structFRHAPI__SessionTemplate_1aa4a5b7deb5f1c36b8be8959629ccd7dd)`()` | Returns a pointer to EngineSessionType_Optional, if it has been set, otherwise returns nullptr.
`public inline const FString * `[`GetEngineSessionTypeOrNull`](#structFRHAPI__SessionTemplate_1a09dcea68cfc96a44fb3e1e5a5e75b62c)`() const` | Returns a pointer to EngineSessionType_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetEngineSessionType`](#structFRHAPI__SessionTemplate_1a6e3a3c92d0edddcb592919871403829b)`(FString NewValue)` | Sets the value of EngineSessionType_Optional and also sets EngineSessionType_IsSet to true.
`public inline void `[`ClearEngineSessionType`](#structFRHAPI__SessionTemplate_1a49cf645ee28f75e34b7e82a375b0b7a0)`()` | Clears the value of EngineSessionType_Optional and sets EngineSessionType_IsSet to false.
`public inline bool `[`IsEngineSessionTypeDefaultValue`](#structFRHAPI__SessionTemplate_1a3cfbdbc7f9037595cd081510a49b47be)`() const` | Returns true if EngineSessionType_Optional is set and matches the default value.
`public inline void `[`SetEngineSessionTypeToDefault`](#structFRHAPI__SessionTemplate_1a63b6dfef02bbfc4c1602f59da2e7f468)`()` | Sets the value of EngineSessionType_Optional to its default and also sets EngineSessionType_IsSet to true.
`public inline bool & `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a0cf738471cdd5148be692454ccc855ba)`()` | Gets the value of CanJoinMatchmaking_Optional, regardless of it having been set.
`public inline const bool & `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a5099fafdd07ecb7d5572dac0c00aee7e)`() const` | Gets the value of CanJoinMatchmaking_Optional, regardless of it having been set.
`public inline const bool & `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a3dde27074a0c0b2e6785e23ec3c6fe4c)`(const bool & DefaultValue) const` | Gets the value of CanJoinMatchmaking_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1ad8ade8f89b17c3544ddeb227951fcf83)`(bool & OutValue) const` | Fills OutValue with the value of CanJoinMatchmaking_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetCanJoinMatchmakingOrNull`](#structFRHAPI__SessionTemplate_1adce54ea0278bbf251c3e43cad020c191)`()` | Returns a pointer to CanJoinMatchmaking_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetCanJoinMatchmakingOrNull`](#structFRHAPI__SessionTemplate_1a07543fefd2c5ac05df610cdbf89c9e04)`() const` | Returns a pointer to CanJoinMatchmaking_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a2e4f26ae74921b4b76ebab0d12c58777)`(bool NewValue)` | Sets the value of CanJoinMatchmaking_Optional and also sets CanJoinMatchmaking_IsSet to true.
`public inline void `[`ClearCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1aea8827859a78eea75ccb378ae6d34536)`()` | Clears the value of CanJoinMatchmaking_Optional and sets CanJoinMatchmaking_IsSet to false.
`public inline bool `[`IsCanJoinMatchmakingDefaultValue`](#structFRHAPI__SessionTemplate_1a712f72abd63eda494b43154b029822e9)`() const` | Returns true if CanJoinMatchmaking_Optional is set and matches the default value.
`public inline void `[`SetCanJoinMatchmakingToDefault`](#structFRHAPI__SessionTemplate_1ab1db9565664aea038731887f24deff21)`()` | Sets the value of CanJoinMatchmaking_Optional to its default and also sets CanJoinMatchmaking_IsSet to true.
`public inline bool & `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a245738afb53726c0b785aec39bf86106)`()` | Gets the value of CanBeCreatedByPlayersDirectly_Optional, regardless of it having been set.
`public inline const bool & `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1aaae97aee94c5b5f89181dd0e7be3e95b)`() const` | Gets the value of CanBeCreatedByPlayersDirectly_Optional, regardless of it having been set.
`public inline const bool & `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1acc909772786edaff5c8a7a7a31fc9133)`(const bool & DefaultValue) const` | Gets the value of CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a17cb4c890a7a9329f9c84300193a5c32)`(bool & OutValue) const` | Fills OutValue with the value of CanBeCreatedByPlayersDirectly_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetCanBeCreatedByPlayersDirectlyOrNull`](#structFRHAPI__SessionTemplate_1ac670ec04c83f5e5ae6fc1b4ca1b368dc)`()` | Returns a pointer to CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetCanBeCreatedByPlayersDirectlyOrNull`](#structFRHAPI__SessionTemplate_1a1edf03762e4cf2988e745f8d3dc5d35d)`() const` | Returns a pointer to CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a284728a7560987dc34a0fba0ef815cfb)`(bool NewValue)` | Sets the value of CanBeCreatedByPlayersDirectly_Optional and also sets CanBeCreatedByPlayersDirectly_IsSet to true.
`public inline void `[`ClearCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1aeeead6ecb3330ef0ab4e0d0f1d51be6f)`()` | Clears the value of CanBeCreatedByPlayersDirectly_Optional and sets CanBeCreatedByPlayersDirectly_IsSet to false.
`public inline bool `[`IsCanBeCreatedByPlayersDirectlyDefaultValue`](#structFRHAPI__SessionTemplate_1afc9d293d6290f5c2de49e0abc1da9c4d)`() const` | Returns true if CanBeCreatedByPlayersDirectly_Optional is set and matches the default value.
`public inline void `[`SetCanBeCreatedByPlayersDirectlyToDefault`](#structFRHAPI__SessionTemplate_1a5895d02285be3538be2d7e59412f7466)`()` | Sets the value of CanBeCreatedByPlayersDirectly_Optional to its default and also sets CanBeCreatedByPlayersDirectly_IsSet to true.
`public inline bool & `[`GetJoinable`](#structFRHAPI__SessionTemplate_1af9cffd42d338984ff9c90540bc8ab561)`()` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline const bool & `[`GetJoinable`](#structFRHAPI__SessionTemplate_1ad8599b59763995fa1ed26cf7d89f6697)`() const` | Gets the value of Joinable_Optional, regardless of it having been set.
`public inline const bool & `[`GetJoinable`](#structFRHAPI__SessionTemplate_1af2829ec666b5d54b5b9b35efb05358a4)`(const bool & DefaultValue) const` | Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetJoinable`](#structFRHAPI__SessionTemplate_1a284913a49f55998220ccbae7ffa31df4)`(bool & OutValue) const` | Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionTemplate_1aeeb6fe105d9e3ba735122f45ee32a40a)`()` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionTemplate_1a7c9bfc444c99da66f448977682d24985)`() const` | Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetJoinable`](#structFRHAPI__SessionTemplate_1ac7e6f063c170b4cfe3d31d2ca7994e88)`(bool NewValue)` | Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.
`public inline void `[`ClearJoinable`](#structFRHAPI__SessionTemplate_1a2656215bcf0eb51c71fed328166e6b68)`()` | Clears the value of Joinable_Optional and sets Joinable_IsSet to false.
`public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__SessionTemplate_1a7005e50d8cbe3b02a9ce17dbb7d4bd4c)`() const` | Returns true if Joinable_Optional is set and matches the default value.
`public inline void `[`SetJoinableToDefault`](#structFRHAPI__SessionTemplate_1aab55eb4066768dc2f660b6f7148789c6)`()` | Sets the value of Joinable_Optional to its default and also sets Joinable_IsSet to true.
`public inline bool & `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1adfdd95d3bbe2abb2bec34a1e505d1420)`()` | Gets the value of AutoAddToBrowser_Optional, regardless of it having been set.
`public inline const bool & `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a1922eb1b6a75e8e3e704ffc247ce68bc)`() const` | Gets the value of AutoAddToBrowser_Optional, regardless of it having been set.
`public inline const bool & `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1ab22d912b63beca54e9eb97754afa2f92)`(const bool & DefaultValue) const` | Gets the value of AutoAddToBrowser_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1ae622425b3ab30a45ced3fe65d4e23f24)`(bool & OutValue) const` | Fills OutValue with the value of AutoAddToBrowser_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetAutoAddToBrowserOrNull`](#structFRHAPI__SessionTemplate_1ac6ee66ffed0a42dd58bc556fb1015faa)`()` | Returns a pointer to AutoAddToBrowser_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetAutoAddToBrowserOrNull`](#structFRHAPI__SessionTemplate_1a68aebb2e292a17a1e41691af29e1e55f)`() const` | Returns a pointer to AutoAddToBrowser_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1aa783957ce6ec058e41016a574c43ed61)`(bool NewValue)` | Sets the value of AutoAddToBrowser_Optional and also sets AutoAddToBrowser_IsSet to true.
`public inline void `[`ClearAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1ae71defa87a1bc92560786421ece26aa0)`()` | Clears the value of AutoAddToBrowser_Optional and sets AutoAddToBrowser_IsSet to false.
`public inline bool `[`IsAutoAddToBrowserDefaultValue`](#structFRHAPI__SessionTemplate_1a1aef6318593a8e024bab505bdc238fc9)`() const` | Returns true if AutoAddToBrowser_Optional is set and matches the default value.
`public inline void `[`SetAutoAddToBrowserToDefault`](#structFRHAPI__SessionTemplate_1a78e197d8caad7dcbdb0a6325c5828d07)`()` | Sets the value of AutoAddToBrowser_Optional to its default and also sets AutoAddToBrowser_IsSet to true.
`public inline TMap< FString, FString > & `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a9fbce9936f06a5974cc4c754cc6ba2be)`()` | Gets the value of AutoBrowserParams_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1aa684894af0b0039c175f754ce967c2ba)`() const` | Gets the value of AutoBrowserParams_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1afc5d4149477d0f71fb54811c0e956e5c)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of AutoBrowserParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a28c63280b5b76ebb4ca52054211a2876)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of AutoBrowserParams_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetAutoBrowserParamsOrNull`](#structFRHAPI__SessionTemplate_1a89e159e41c6b6b645f5643d2a1e2e916)`()` | Returns a pointer to AutoBrowserParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetAutoBrowserParamsOrNull`](#structFRHAPI__SessionTemplate_1a5b7903355ba0fc847ac83f864aa9805a)`() const` | Returns a pointer to AutoBrowserParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a30902dcd2ac35f55b8f1b13d05b5fb81)`(TMap< FString, FString > NewValue)` | Sets the value of AutoBrowserParams_Optional and also sets AutoBrowserParams_IsSet to true.
`public inline void `[`ClearAutoBrowserParams`](#structFRHAPI__SessionTemplate_1afc6ccbb82066817f3e22ad01730802db)`()` | Clears the value of AutoBrowserParams_Optional and sets AutoBrowserParams_IsSet to false.
`public inline bool & `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a356373eb133f994e7ac8d8efbb1775d1)`()` | Gets the value of CanBeAddedToServerBrowser_Optional, regardless of it having been set.
`public inline const bool & `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1ad943f3983e02ba20c1e8216cbb1db291)`() const` | Gets the value of CanBeAddedToServerBrowser_Optional, regardless of it having been set.
`public inline const bool & `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a749dc792aaf08e7bb6f76273c6da485a)`(const bool & DefaultValue) const` | Gets the value of CanBeAddedToServerBrowser_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1ab18e4d2ed25195e8d0f76dc39810daff)`(bool & OutValue) const` | Fills OutValue with the value of CanBeAddedToServerBrowser_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetCanBeAddedToServerBrowserOrNull`](#structFRHAPI__SessionTemplate_1a1f82f9ee862c907b625f5c8f461103a2)`()` | Returns a pointer to CanBeAddedToServerBrowser_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetCanBeAddedToServerBrowserOrNull`](#structFRHAPI__SessionTemplate_1a764001d77e82becf0bba7e9c362f3dd4)`() const` | Returns a pointer to CanBeAddedToServerBrowser_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1ac6eac725b488f4a0e1a80ba8be13368b)`(bool NewValue)` | Sets the value of CanBeAddedToServerBrowser_Optional and also sets CanBeAddedToServerBrowser_IsSet to true.
`public inline void `[`ClearCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a23f4b3075ad5c6cf66442b7fb9ff4731)`()` | Clears the value of CanBeAddedToServerBrowser_Optional and sets CanBeAddedToServerBrowser_IsSet to false.
`public inline bool `[`IsCanBeAddedToServerBrowserDefaultValue`](#structFRHAPI__SessionTemplate_1a7d34d65f47086fd753f7ac691a4c0df5)`() const` | Returns true if CanBeAddedToServerBrowser_Optional is set and matches the default value.
`public inline void `[`SetCanBeAddedToServerBrowserToDefault`](#structFRHAPI__SessionTemplate_1a933ba7bff1d990c9c0e12b47abd0864f)`()` | Sets the value of CanBeAddedToServerBrowser_Optional to its default and also sets CanBeAddedToServerBrowser_IsSet to true.
`public inline bool & `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a8ea968025808651306147a75bd67e3f4)`()` | Gets the value of KeepAliveOnEmpty_Optional, regardless of it having been set.
`public inline const bool & `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a6844b0f1086a52ae8f4abbaa7d6015dd)`() const` | Gets the value of KeepAliveOnEmpty_Optional, regardless of it having been set.
`public inline const bool & `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a3d2f2c8cd62e4e08e1a6cdf1d1edd5f0)`(const bool & DefaultValue) const` | Gets the value of KeepAliveOnEmpty_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1acdfbfbafa3f03348b60c82c0b6625ac8)`(bool & OutValue) const` | Fills OutValue with the value of KeepAliveOnEmpty_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetKeepAliveOnEmptyOrNull`](#structFRHAPI__SessionTemplate_1ab6c0900c63fb8470b63e487b59072bfe)`()` | Returns a pointer to KeepAliveOnEmpty_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetKeepAliveOnEmptyOrNull`](#structFRHAPI__SessionTemplate_1ab15dd91b8e7fb45d13a6f94f60067c2b)`() const` | Returns a pointer to KeepAliveOnEmpty_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a96ab8d6994b4d813d42e85e64a15e68f)`(bool NewValue)` | Sets the value of KeepAliveOnEmpty_Optional and also sets KeepAliveOnEmpty_IsSet to true.
`public inline void `[`ClearKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a296512654f450ed319f63f8b648c53b8)`()` | Clears the value of KeepAliveOnEmpty_Optional and sets KeepAliveOnEmpty_IsSet to false.
`public inline bool `[`IsKeepAliveOnEmptyDefaultValue`](#structFRHAPI__SessionTemplate_1a55aba4ea889f042e220c937f19078a59)`() const` | Returns true if KeepAliveOnEmpty_Optional is set and matches the default value.
`public inline void `[`SetKeepAliveOnEmptyToDefault`](#structFRHAPI__SessionTemplate_1a8a37912d37e10efa335771cbdb045138)`()` | Sets the value of KeepAliveOnEmpty_Optional to its default and also sets KeepAliveOnEmpty_IsSet to true.
`public inline TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1ac6c83f72faa66211afc8ae944090b3d0)`()` | Gets the value of PlatformTemplates_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1aebef26179db7006243d80f71b54ec4b3)`() const` | Gets the value of PlatformTemplates_Optional, regardless of it having been set.
`public inline const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1aea4d305d4f6294a06c6a18e869229e7d)`(const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & DefaultValue) const` | Gets the value of PlatformTemplates_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a56834a7a902d9cff7d59c3e78d1cf3e9)`(TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & OutValue) const` | Fills OutValue with the value of PlatformTemplates_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > * `[`GetPlatformTemplatesOrNull`](#structFRHAPI__SessionTemplate_1a07808f2ecbaa8e97a7be56c7a441b802)`()` | Returns a pointer to PlatformTemplates_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > * `[`GetPlatformTemplatesOrNull`](#structFRHAPI__SessionTemplate_1ab8f18c47ff1f542e4f6595c35bd7be0f)`() const` | Returns a pointer to PlatformTemplates_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a09102a0c2c86e1e96d7b21ec4c483154)`(TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > NewValue)` | Sets the value of PlatformTemplates_Optional and also sets PlatformTemplates_IsSet to true.
`public inline void `[`ClearPlatformTemplates`](#structFRHAPI__SessionTemplate_1a63f0a0474639a53f8a0789e3850321dd)`()` | Clears the value of PlatformTemplates_Optional and sets PlatformTemplates_IsSet to false.
`public inline `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1ab8dd54ee2f4348500f01e44af3448a4a)`()` | Gets the value of AutoStartupParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1a6695f79c7358ba7b6dc665219044f694)`() const` | Gets the value of AutoStartupParams_Optional, regardless of it having been set.
`public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1a89c852cf18006b6e93e52086db3ffa82)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & DefaultValue) const` | Gets the value of AutoStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1add791f7825789aeab338cf381a333094)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & OutValue) const` | Fills OutValue with the value of AutoStartupParams_Optional and returns true if it has been set, otherwise returns false.
`public inline `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetAutoStartupParamsOrNull`](#structFRHAPI__SessionTemplate_1a2cb1eee8abb2d118c644cb7421f393aa)`()` | Returns a pointer to AutoStartupParams_Optional, if it has been set, otherwise returns nullptr.
`public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetAutoStartupParamsOrNull`](#structFRHAPI__SessionTemplate_1a423eba55e9b185ead6f0f8d17eb640b8)`() const` | Returns a pointer to AutoStartupParams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetAutoStartupParams`](#structFRHAPI__SessionTemplate_1ae8aea581ff24bb8fcc059e70dd233c83)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` NewValue)` | Sets the value of AutoStartupParams_Optional and also sets AutoStartupParams_IsSet to true.
`public inline void `[`ClearAutoStartupParams`](#structFRHAPI__SessionTemplate_1a41041ffbd8775231d249554a072116d7)`()` | Clears the value of AutoStartupParams_Optional and sets AutoStartupParams_IsSet to false.
`public inline int32 & `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1aab1a67e445ca5338fbb66baa3d3bcb9f)`()` | Gets the value of MinSessionCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1ab7376fd46c054e32668b755907ac0d90)`() const` | Gets the value of MinSessionCount_Optional, regardless of it having been set.
`public inline const int32 & `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1a1e5c95d760b8e9f40c01e6fb729c5398)`(const int32 & DefaultValue) const` | Gets the value of MinSessionCount_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1a01b84d2a460388a199d7c375fad38fd3)`(int32 & OutValue) const` | Fills OutValue with the value of MinSessionCount_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetMinSessionCountOrNull`](#structFRHAPI__SessionTemplate_1a8e5543499a18eba17eac324c956c0231)`()` | Returns a pointer to MinSessionCount_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetMinSessionCountOrNull`](#structFRHAPI__SessionTemplate_1a3555ef17f28ad123940629efa5aea9d6)`() const` | Returns a pointer to MinSessionCount_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetMinSessionCount`](#structFRHAPI__SessionTemplate_1a254d335fd5933d1f3d3bb157d7f98b04)`(int32 NewValue)` | Sets the value of MinSessionCount_Optional and also sets MinSessionCount_IsSet to true.
`public inline void `[`ClearMinSessionCount`](#structFRHAPI__SessionTemplate_1a563b899213f0a6ff1e7ab855e18df3a5)`()` | Clears the value of MinSessionCount_Optional and sets MinSessionCount_IsSet to false.
`public inline bool `[`IsMinSessionCountDefaultValue`](#structFRHAPI__SessionTemplate_1a8215c4b5ea50cf0228490c27c5db60fb)`() const` | Returns true if MinSessionCount_Optional is set and matches the default value.
`public inline void `[`SetMinSessionCountToDefault`](#structFRHAPI__SessionTemplate_1af3b075285782037409643751bbaaa19d)`()` | Sets the value of MinSessionCount_Optional to its default and also sets MinSessionCount_IsSet to true.
`public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTemplate_1a82fc45eec30dd2fdbc21dfd89596622b)`()` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTemplate_1a93d7a2dbc3d1ef21263a08ee990d51fc)`() const` | Gets the value of CustomData_Optional, regardless of it having been set.
`public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTemplate_1ad619a0c4c3891bff333558fc77926a88)`(const TMap< FString, FString > & DefaultValue) const` | Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCustomData`](#structFRHAPI__SessionTemplate_1ab19f81eb52ffd9f199a884befe791d2a)`(TMap< FString, FString > & OutValue) const` | Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.
`public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionTemplate_1a210b362e85e3b02527bfe2a1f0d78bb2)`()` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionTemplate_1a1f6d298122b0f91adbbcf4b3c188b0c1)`() const` | Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCustomData`](#structFRHAPI__SessionTemplate_1a8f039c1cc05ec90391072c0f9bf69d03)`(TMap< FString, FString > NewValue)` | Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.
`public inline void `[`ClearCustomData`](#structFRHAPI__SessionTemplate_1ac20b3669d3a9488606e5e2afd59df8f1)`()` | Clears the value of CustomData_Optional and sets CustomData_IsSet to false.
`public inline int32 & `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a756f008bb020837ad8503308147df6e2)`()` | Gets the value of NumTeams_Optional, regardless of it having been set.
`public inline const int32 & `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a0700118646093644624de6a22c77afbf)`() const` | Gets the value of NumTeams_Optional, regardless of it having been set.
`public inline const int32 & `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a96d38df114e19c81017a8e5a4b86061c)`(const int32 & DefaultValue) const` | Gets the value of NumTeams_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a6ce27d5e98f039a4111fd089abc115df)`(int32 & OutValue) const` | Fills OutValue with the value of NumTeams_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetNumTeamsOrNull`](#structFRHAPI__SessionTemplate_1ad24010c350f353abae43817ce6a7fa7c)`()` | Returns a pointer to NumTeams_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetNumTeamsOrNull`](#structFRHAPI__SessionTemplate_1a1fe6d852ba498e482f018cb525a73a03)`() const` | Returns a pointer to NumTeams_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetNumTeams`](#structFRHAPI__SessionTemplate_1aee7845d212604eda9ea8ddad496cc87c)`(int32 NewValue)` | Sets the value of NumTeams_Optional and also sets NumTeams_IsSet to true.
`public inline void `[`ClearNumTeams`](#structFRHAPI__SessionTemplate_1ab05fd0888c21bacaaab9bd4b0ca92e00)`()` | Clears the value of NumTeams_Optional and sets NumTeams_IsSet to false.
`public inline bool `[`IsNumTeamsDefaultValue`](#structFRHAPI__SessionTemplate_1a4c6f7c1655e76727f7cb5b5ffc5c66af)`() const` | Returns true if NumTeams_Optional is set and matches the default value.
`public inline void `[`SetNumTeamsToDefault`](#structFRHAPI__SessionTemplate_1a76d7e80355b9705e3a1ea1c86817fd45)`()` | Sets the value of NumTeams_Optional to its default and also sets NumTeams_IsSet to true.
`public inline int32 & `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1a6ae47ea0d86ead702c351b6f06d5b1bb)`()` | Gets the value of PlayersPerTeam_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1ab586729d347edb3ddd5df0fd5beec5f1)`() const` | Gets the value of PlayersPerTeam_Optional, regardless of it having been set.
`public inline const int32 & `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1a7069808829529cd76ec7f294df72cacd)`(const int32 & DefaultValue) const` | Gets the value of PlayersPerTeam_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1ac380d35a8a8a1758ade954aa9f4c09ca)`(int32 & OutValue) const` | Fills OutValue with the value of PlayersPerTeam_Optional and returns true if it has been set, otherwise returns false.
`public inline int32 * `[`GetPlayersPerTeamOrNull`](#structFRHAPI__SessionTemplate_1a3268494a760b7e14302fae97cae4266b)`()` | Returns a pointer to PlayersPerTeam_Optional, if it has been set, otherwise returns nullptr.
`public inline const int32 * `[`GetPlayersPerTeamOrNull`](#structFRHAPI__SessionTemplate_1ac0ba30015039756fbe49ea2f237f0d50)`() const` | Returns a pointer to PlayersPerTeam_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1a0eebc89ec7961b126d546bdd9cd9796b)`(int32 NewValue)` | Sets the value of PlayersPerTeam_Optional and also sets PlayersPerTeam_IsSet to true.
`public inline void `[`ClearPlayersPerTeam`](#structFRHAPI__SessionTemplate_1aa2773b8e861aae5dd66d271167b6e2fb)`()` | Clears the value of PlayersPerTeam_Optional and sets PlayersPerTeam_IsSet to false.
`public inline bool `[`IsPlayersPerTeamDefaultValue`](#structFRHAPI__SessionTemplate_1afc394c69e5ec383de5296897550060eb)`() const` | Returns true if PlayersPerTeam_Optional is set and matches the default value.
`public inline void `[`SetPlayersPerTeamToDefault`](#structFRHAPI__SessionTemplate_1a8434c5519b75cac25c55f491f314dc7e)`()` | Sets the value of PlayersPerTeam_Optional to its default and also sets PlayersPerTeam_IsSet to true.
`public inline bool & `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1a05e870ee9cdc2c46e50ab7fc28482cc7)`()` | Gets the value of CanChangeOwnTeam_Optional, regardless of it having been set.
`public inline const bool & `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1ab308d57c9a744e7ff316c2ffb6b5c0be)`() const` | Gets the value of CanChangeOwnTeam_Optional, regardless of it having been set.
`public inline const bool & `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1a78c0b25be27b024aff1e68a020cc3845)`(const bool & DefaultValue) const` | Gets the value of CanChangeOwnTeam_Optional, if it has been set, otherwise it returns DefaultValue.
`public inline bool `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1acff401368fdba4b7bc966fe2d79d1923)`(bool & OutValue) const` | Fills OutValue with the value of CanChangeOwnTeam_Optional and returns true if it has been set, otherwise returns false.
`public inline bool * `[`GetCanChangeOwnTeamOrNull`](#structFRHAPI__SessionTemplate_1a96d97777749d18bd98f740f0dcf69275)`()` | Returns a pointer to CanChangeOwnTeam_Optional, if it has been set, otherwise returns nullptr.
`public inline const bool * `[`GetCanChangeOwnTeamOrNull`](#structFRHAPI__SessionTemplate_1a89094a04c692a9ef55267b1033500b88)`() const` | Returns a pointer to CanChangeOwnTeam_Optional, if it has been set, otherwise returns nullptr.
`public inline void `[`SetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1ad2a6502d9c243417a2394f73e91c974d)`(bool NewValue)` | Sets the value of CanChangeOwnTeam_Optional and also sets CanChangeOwnTeam_IsSet to true.
`public inline void `[`ClearCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1a9aa2afa1842ee1cab22a7b1a9a772c08)`()` | Clears the value of CanChangeOwnTeam_Optional and sets CanChangeOwnTeam_IsSet to false.
`public inline bool `[`IsCanChangeOwnTeamDefaultValue`](#structFRHAPI__SessionTemplate_1a26a5ebe40250064f888d423e23531bfa)`() const` | Returns true if CanChangeOwnTeam_Optional is set and matches the default value.
`public inline void `[`SetCanChangeOwnTeamToDefault`](#structFRHAPI__SessionTemplate_1ac1a42404ac65f492acfd7e7fe75e4afb)`()` | Sets the value of CanChangeOwnTeam_Optional to its default and also sets CanChangeOwnTeam_IsSet to true.

#### Members

#### `public FString `[`SessionType`](#structFRHAPI__SessionTemplate_1a294a5c42b68d1960ade23eb2b8ebed03) <a id="structFRHAPI__SessionTemplate_1a294a5c42b68d1960ade23eb2b8ebed03"></a>

unique name for this template

<br>
#### `public FString `[`EngineSessionType_Optional`](#structFRHAPI__SessionTemplate_1a5215d82c4b5a1849115e1192ce85a42a) <a id="structFRHAPI__SessionTemplate_1a5215d82c4b5a1849115e1192ce85a42a"></a>

Engine identifier for sessions of this type. For UE, this is commonly `Party` or `Game`.

<br>
#### `public bool `[`EngineSessionType_IsSet`](#structFRHAPI__SessionTemplate_1a7fe48b7d9dd76d0918d6c8cfef6ddabe) <a id="structFRHAPI__SessionTemplate_1a7fe48b7d9dd76d0918d6c8cfef6ddabe"></a>

true if EngineSessionType_Optional has been set to a value

<br>
#### `public bool `[`CanJoinMatchmaking_Optional`](#structFRHAPI__SessionTemplate_1a5acc833f588d8b29365429498cfe2a7b) <a id="structFRHAPI__SessionTemplate_1a5acc833f588d8b29365429498cfe2a7b"></a>

Are sessions of this type allowed to join matchmaking?

<br>
#### `public bool `[`CanJoinMatchmaking_IsSet`](#structFRHAPI__SessionTemplate_1a2e4fd1ddce8e54ae5242c6a839b9a446) <a id="structFRHAPI__SessionTemplate_1a2e4fd1ddce8e54ae5242c6a839b9a446"></a>

true if CanJoinMatchmaking_Optional has been set to a value

<br>
#### `public bool `[`CanBeCreatedByPlayersDirectly_Optional`](#structFRHAPI__SessionTemplate_1ab6aed074db1776677efeedae942a6dde) <a id="structFRHAPI__SessionTemplate_1ab6aed074db1776677efeedae942a6dde"></a>

Are players allowed to create sessions of this type?

<br>
#### `public bool `[`CanBeCreatedByPlayersDirectly_IsSet`](#structFRHAPI__SessionTemplate_1af34cf526890cc59a7c99aeb31fe47f86) <a id="structFRHAPI__SessionTemplate_1af34cf526890cc59a7c99aeb31fe47f86"></a>

true if CanBeCreatedByPlayersDirectly_Optional has been set to a value

<br>
#### `public bool `[`Joinable_Optional`](#structFRHAPI__SessionTemplate_1af726850d2f0a47c0d363bc6fe56649d2) <a id="structFRHAPI__SessionTemplate_1af726850d2f0a47c0d363bc6fe56649d2"></a>

Should players join existing sessions of this type before creating a new one.

<br>
#### `public bool `[`Joinable_IsSet`](#structFRHAPI__SessionTemplate_1a640852541c1622264fb0b45e8bcba358) <a id="structFRHAPI__SessionTemplate_1a640852541c1622264fb0b45e8bcba358"></a>

true if Joinable_Optional has been set to a value

<br>
#### `public bool `[`AutoAddToBrowser_Optional`](#structFRHAPI__SessionTemplate_1acd767d33d578663a2ae87266051aee21) <a id="structFRHAPI__SessionTemplate_1acd767d33d578663a2ae87266051aee21"></a>

Should session be automatically added to the browser list.

<br>
#### `public bool `[`AutoAddToBrowser_IsSet`](#structFRHAPI__SessionTemplate_1a3680cbdc548742735a67e6b5aa39f17a) <a id="structFRHAPI__SessionTemplate_1a3680cbdc548742735a67e6b5aa39f17a"></a>

true if AutoAddToBrowser_Optional has been set to a value

<br>
#### `public TMap< FString, FString > `[`AutoBrowserParams_Optional`](#structFRHAPI__SessionTemplate_1a82787643aa3e38fe0da7bf1500e0ef62) <a id="structFRHAPI__SessionTemplate_1a82787643aa3e38fe0da7bf1500e0ef62"></a>

Browser parameters that can be used to filter results.

<br>
#### `public bool `[`AutoBrowserParams_IsSet`](#structFRHAPI__SessionTemplate_1a72c52c990ae499219e09ac48b95dfb1b) <a id="structFRHAPI__SessionTemplate_1a72c52c990ae499219e09ac48b95dfb1b"></a>

true if AutoBrowserParams_Optional has been set to a value

<br>
#### `public bool `[`CanBeAddedToServerBrowser_Optional`](#structFRHAPI__SessionTemplate_1a76d1142e89d2951f77aca49fae032565) <a id="structFRHAPI__SessionTemplate_1a76d1142e89d2951f77aca49fae032565"></a>

Are sessions of this type able to be added to the server browser by players?

<br>
#### `public bool `[`CanBeAddedToServerBrowser_IsSet`](#structFRHAPI__SessionTemplate_1af405bbeacdcad1f1edeec8066557d282) <a id="structFRHAPI__SessionTemplate_1af405bbeacdcad1f1edeec8066557d282"></a>

true if CanBeAddedToServerBrowser_Optional has been set to a value

<br>
#### `public bool `[`KeepAliveOnEmpty_Optional`](#structFRHAPI__SessionTemplate_1a9e9d05c256bcee13ec7a503fff383a9f) <a id="structFRHAPI__SessionTemplate_1a9e9d05c256bcee13ec7a503fff383a9f"></a>

Should the session stay around, or be destroyed when the last player leaves it?

<br>
#### `public bool `[`KeepAliveOnEmpty_IsSet`](#structFRHAPI__SessionTemplate_1a7a021f27573b66f03bddb164ba2baea4) <a id="structFRHAPI__SessionTemplate_1a7a021f27573b66f03bddb164ba2baea4"></a>

true if KeepAliveOnEmpty_Optional has been set to a value

<br>
#### `public TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > `[`PlatformTemplates_Optional`](#structFRHAPI__SessionTemplate_1a4a953d98de7701f09938b03e88dc447d) <a id="structFRHAPI__SessionTemplate_1a4a953d98de7701f09938b03e88dc447d"></a>

Platform-Specific session mappings that are used to coordinate Rally Here sessions with OnlineSubsystem sessions.

<br>
#### `public bool `[`PlatformTemplates_IsSet`](#structFRHAPI__SessionTemplate_1a98480d277fd8e297e5b90560f3c10f1a) <a id="structFRHAPI__SessionTemplate_1a98480d277fd8e297e5b90560f3c10f1a"></a>

true if PlatformTemplates_Optional has been set to a value

<br>
#### `public `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` `[`AutoStartupParams_Optional`](#structFRHAPI__SessionTemplate_1a32d9a060ff0208b639415cee5d9f7287) <a id="structFRHAPI__SessionTemplate_1a32d9a060ff0208b639415cee5d9f7287"></a>

<br>
#### `public bool `[`AutoStartupParams_IsSet`](#structFRHAPI__SessionTemplate_1a1ae179a6de476981a9a38197758b7e14) <a id="structFRHAPI__SessionTemplate_1a1ae179a6de476981a9a38197758b7e14"></a>

true if AutoStartupParams_Optional has been set to a value

<br>
#### `public int32 `[`MinSessionCount_Optional`](#structFRHAPI__SessionTemplate_1aecf6bdd55d8dc8e92bf1d6e2dc032fc6) <a id="structFRHAPI__SessionTemplate_1aecf6bdd55d8dc8e92bf1d6e2dc032fc6"></a>

Minimum number of this type of session to be running at any given time per region.

<br>
#### `public bool `[`MinSessionCount_IsSet`](#structFRHAPI__SessionTemplate_1a067eb5ca1f241b90407f3a373cb0bd79) <a id="structFRHAPI__SessionTemplate_1a067eb5ca1f241b90407f3a373cb0bd79"></a>

true if MinSessionCount_Optional has been set to a value

<br>
#### `public TMap< FString, FString > `[`CustomData_Optional`](#structFRHAPI__SessionTemplate_1a8dc395b5c32a277ba6a8098613b19c90) <a id="structFRHAPI__SessionTemplate_1a8dc395b5c32a277ba6a8098613b19c90"></a>

Product-defined custom data about this session type.

<br>
#### `public bool `[`CustomData_IsSet`](#structFRHAPI__SessionTemplate_1a74b694f3d97279b0f69b5d9c45cef5cc) <a id="structFRHAPI__SessionTemplate_1a74b694f3d97279b0f69b5d9c45cef5cc"></a>

true if CustomData_Optional has been set to a value

<br>
#### `public int32 `[`NumTeams_Optional`](#structFRHAPI__SessionTemplate_1a5a6263a13f22dc9fab381d24dd85b07d) <a id="structFRHAPI__SessionTemplate_1a5a6263a13f22dc9fab381d24dd85b07d"></a>

The number of teams this session type can have.

<br>
#### `public bool `[`NumTeams_IsSet`](#structFRHAPI__SessionTemplate_1a5aae055f985bbecae420f583bffcc0a8) <a id="structFRHAPI__SessionTemplate_1a5aae055f985bbecae420f583bffcc0a8"></a>

true if NumTeams_Optional has been set to a value

<br>
#### `public int32 `[`PlayersPerTeam_Optional`](#structFRHAPI__SessionTemplate_1acc07f08f5c7dc3262717a590f3de6764) <a id="structFRHAPI__SessionTemplate_1acc07f08f5c7dc3262717a590f3de6764"></a>

The number of players that can be on each team.

<br>
#### `public bool `[`PlayersPerTeam_IsSet`](#structFRHAPI__SessionTemplate_1a4351b4b52f5240e0bff65fb92b36b3a2) <a id="structFRHAPI__SessionTemplate_1a4351b4b52f5240e0bff65fb92b36b3a2"></a>

true if PlayersPerTeam_Optional has been set to a value

<br>
#### `public bool `[`CanChangeOwnTeam_Optional`](#structFRHAPI__SessionTemplate_1aa2d67a98c7bcf96cc848ae81ca3387e3) <a id="structFRHAPI__SessionTemplate_1aa2d67a98c7bcf96cc848ae81ca3387e3"></a>

Whether or not a player can change which team they are on. If true, they are able to. If False, they player's team can only be changed by an admin.

<br>
#### `public bool `[`CanChangeOwnTeam_IsSet`](#structFRHAPI__SessionTemplate_1ad6b80d668b66266c71f70affb0cae587) <a id="structFRHAPI__SessionTemplate_1ad6b80d668b66266c71f70affb0cae587"></a>

true if CanChangeOwnTeam_Optional has been set to a value

<br>
#### `public virtual bool `[`FromJson`](#structFRHAPI__SessionTemplate_1a4a45fc40eed406ae864f33e45c0eadf2)`(const TSharedPtr< FJsonValue > & JsonValue)` <a id="structFRHAPI__SessionTemplate_1a4a45fc40eed406ae864f33e45c0eadf2"></a>

Fills this object with data from the passed in JSON.

#### Parameters
* `JsonValue` Data from the API call.

#### Returns
true if parsing of the JSON data was successful.

<br>
#### `public virtual void `[`WriteJson`](#structFRHAPI__SessionTemplate_1a8ddb8c09f6817591c4927b4a5c49df76)`(TSharedRef< TJsonWriter<>> & Writer) const` <a id="structFRHAPI__SessionTemplate_1a8ddb8c09f6817591c4927b4a5c49df76"></a>

Writes the data from this object into the specified JSON Writer stream.

#### Parameters
* `Writer` JSON Writer stream to push .

<br>
#### `public inline FString & `[`GetSessionType`](#structFRHAPI__SessionTemplate_1a7772fb5d40d6b5c69dc188065146a39c)`()` <a id="structFRHAPI__SessionTemplate_1a7772fb5d40d6b5c69dc188065146a39c"></a>

Gets the value of SessionType.

<br>
#### `public inline const FString & `[`GetSessionType`](#structFRHAPI__SessionTemplate_1affce611355a919ed8acc4bbd307ae642)`() const` <a id="structFRHAPI__SessionTemplate_1affce611355a919ed8acc4bbd307ae642"></a>

Gets the value of SessionType.

<br>
#### `public inline void `[`SetSessionType`](#structFRHAPI__SessionTemplate_1ad361f7865488bf9dbb073c2fa606b744)`(FString NewValue)` <a id="structFRHAPI__SessionTemplate_1ad361f7865488bf9dbb073c2fa606b744"></a>

Sets the value of SessionType.

<br>
#### `public inline FString & `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1a762d5ee11b4fbdcf9cc38632fc97765f)`()` <a id="structFRHAPI__SessionTemplate_1a762d5ee11b4fbdcf9cc38632fc97765f"></a>

Gets the value of EngineSessionType_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1a24a915b19cee9cc45c130fa81cf37942)`() const` <a id="structFRHAPI__SessionTemplate_1a24a915b19cee9cc45c130fa81cf37942"></a>

Gets the value of EngineSessionType_Optional, regardless of it having been set.

<br>
#### `public inline const FString & `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1ae11165b1eca1372b3ea911977fd53855)`(const FString & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1ae11165b1eca1372b3ea911977fd53855"></a>

Gets the value of EngineSessionType_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetEngineSessionType`](#structFRHAPI__SessionTemplate_1ac4fce3fe7bfb35f5ded0559c3d4ddb8d)`(FString & OutValue) const` <a id="structFRHAPI__SessionTemplate_1ac4fce3fe7bfb35f5ded0559c3d4ddb8d"></a>

Fills OutValue with the value of EngineSessionType_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline FString * `[`GetEngineSessionTypeOrNull`](#structFRHAPI__SessionTemplate_1aa4a5b7deb5f1c36b8be8959629ccd7dd)`()` <a id="structFRHAPI__SessionTemplate_1aa4a5b7deb5f1c36b8be8959629ccd7dd"></a>

Returns a pointer to EngineSessionType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const FString * `[`GetEngineSessionTypeOrNull`](#structFRHAPI__SessionTemplate_1a09dcea68cfc96a44fb3e1e5a5e75b62c)`() const` <a id="structFRHAPI__SessionTemplate_1a09dcea68cfc96a44fb3e1e5a5e75b62c"></a>

Returns a pointer to EngineSessionType_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetEngineSessionType`](#structFRHAPI__SessionTemplate_1a6e3a3c92d0edddcb592919871403829b)`(FString NewValue)` <a id="structFRHAPI__SessionTemplate_1a6e3a3c92d0edddcb592919871403829b"></a>

Sets the value of EngineSessionType_Optional and also sets EngineSessionType_IsSet to true.

<br>
#### `public inline void `[`ClearEngineSessionType`](#structFRHAPI__SessionTemplate_1a49cf645ee28f75e34b7e82a375b0b7a0)`()` <a id="structFRHAPI__SessionTemplate_1a49cf645ee28f75e34b7e82a375b0b7a0"></a>

Clears the value of EngineSessionType_Optional and sets EngineSessionType_IsSet to false.

<br>
#### `public inline bool `[`IsEngineSessionTypeDefaultValue`](#structFRHAPI__SessionTemplate_1a3cfbdbc7f9037595cd081510a49b47be)`() const` <a id="structFRHAPI__SessionTemplate_1a3cfbdbc7f9037595cd081510a49b47be"></a>

Returns true if EngineSessionType_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetEngineSessionTypeToDefault`](#structFRHAPI__SessionTemplate_1a63b6dfef02bbfc4c1602f59da2e7f468)`()` <a id="structFRHAPI__SessionTemplate_1a63b6dfef02bbfc4c1602f59da2e7f468"></a>

Sets the value of EngineSessionType_Optional to its default and also sets EngineSessionType_IsSet to true.

<br>
#### `public inline bool & `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a0cf738471cdd5148be692454ccc855ba)`()` <a id="structFRHAPI__SessionTemplate_1a0cf738471cdd5148be692454ccc855ba"></a>

Gets the value of CanJoinMatchmaking_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a5099fafdd07ecb7d5572dac0c00aee7e)`() const` <a id="structFRHAPI__SessionTemplate_1a5099fafdd07ecb7d5572dac0c00aee7e"></a>

Gets the value of CanJoinMatchmaking_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a3dde27074a0c0b2e6785e23ec3c6fe4c)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a3dde27074a0c0b2e6785e23ec3c6fe4c"></a>

Gets the value of CanJoinMatchmaking_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1ad8ade8f89b17c3544ddeb227951fcf83)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1ad8ade8f89b17c3544ddeb227951fcf83"></a>

Fills OutValue with the value of CanJoinMatchmaking_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline bool * `[`GetCanJoinMatchmakingOrNull`](#structFRHAPI__SessionTemplate_1adce54ea0278bbf251c3e43cad020c191)`()` <a id="structFRHAPI__SessionTemplate_1adce54ea0278bbf251c3e43cad020c191"></a>

Returns a pointer to CanJoinMatchmaking_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const bool * `[`GetCanJoinMatchmakingOrNull`](#structFRHAPI__SessionTemplate_1a07543fefd2c5ac05df610cdbf89c9e04)`() const` <a id="structFRHAPI__SessionTemplate_1a07543fefd2c5ac05df610cdbf89c9e04"></a>

Returns a pointer to CanJoinMatchmaking_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1a2e4f26ae74921b4b76ebab0d12c58777)`(bool NewValue)` <a id="structFRHAPI__SessionTemplate_1a2e4f26ae74921b4b76ebab0d12c58777"></a>

Sets the value of CanJoinMatchmaking_Optional and also sets CanJoinMatchmaking_IsSet to true.

<br>
#### `public inline void `[`ClearCanJoinMatchmaking`](#structFRHAPI__SessionTemplate_1aea8827859a78eea75ccb378ae6d34536)`()` <a id="structFRHAPI__SessionTemplate_1aea8827859a78eea75ccb378ae6d34536"></a>

Clears the value of CanJoinMatchmaking_Optional and sets CanJoinMatchmaking_IsSet to false.

<br>
#### `public inline bool `[`IsCanJoinMatchmakingDefaultValue`](#structFRHAPI__SessionTemplate_1a712f72abd63eda494b43154b029822e9)`() const` <a id="structFRHAPI__SessionTemplate_1a712f72abd63eda494b43154b029822e9"></a>

Returns true if CanJoinMatchmaking_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetCanJoinMatchmakingToDefault`](#structFRHAPI__SessionTemplate_1ab1db9565664aea038731887f24deff21)`()` <a id="structFRHAPI__SessionTemplate_1ab1db9565664aea038731887f24deff21"></a>

Sets the value of CanJoinMatchmaking_Optional to its default and also sets CanJoinMatchmaking_IsSet to true.

<br>
#### `public inline bool & `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a245738afb53726c0b785aec39bf86106)`()` <a id="structFRHAPI__SessionTemplate_1a245738afb53726c0b785aec39bf86106"></a>

Gets the value of CanBeCreatedByPlayersDirectly_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1aaae97aee94c5b5f89181dd0e7be3e95b)`() const` <a id="structFRHAPI__SessionTemplate_1aaae97aee94c5b5f89181dd0e7be3e95b"></a>

Gets the value of CanBeCreatedByPlayersDirectly_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1acc909772786edaff5c8a7a7a31fc9133)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1acc909772786edaff5c8a7a7a31fc9133"></a>

Gets the value of CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a17cb4c890a7a9329f9c84300193a5c32)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a17cb4c890a7a9329f9c84300193a5c32"></a>

Fills OutValue with the value of CanBeCreatedByPlayersDirectly_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline bool * `[`GetCanBeCreatedByPlayersDirectlyOrNull`](#structFRHAPI__SessionTemplate_1ac670ec04c83f5e5ae6fc1b4ca1b368dc)`()` <a id="structFRHAPI__SessionTemplate_1ac670ec04c83f5e5ae6fc1b4ca1b368dc"></a>

Returns a pointer to CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const bool * `[`GetCanBeCreatedByPlayersDirectlyOrNull`](#structFRHAPI__SessionTemplate_1a1edf03762e4cf2988e745f8d3dc5d35d)`() const` <a id="structFRHAPI__SessionTemplate_1a1edf03762e4cf2988e745f8d3dc5d35d"></a>

Returns a pointer to CanBeCreatedByPlayersDirectly_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1a284728a7560987dc34a0fba0ef815cfb)`(bool NewValue)` <a id="structFRHAPI__SessionTemplate_1a284728a7560987dc34a0fba0ef815cfb"></a>

Sets the value of CanBeCreatedByPlayersDirectly_Optional and also sets CanBeCreatedByPlayersDirectly_IsSet to true.

<br>
#### `public inline void `[`ClearCanBeCreatedByPlayersDirectly`](#structFRHAPI__SessionTemplate_1aeeead6ecb3330ef0ab4e0d0f1d51be6f)`()` <a id="structFRHAPI__SessionTemplate_1aeeead6ecb3330ef0ab4e0d0f1d51be6f"></a>

Clears the value of CanBeCreatedByPlayersDirectly_Optional and sets CanBeCreatedByPlayersDirectly_IsSet to false.

<br>
#### `public inline bool `[`IsCanBeCreatedByPlayersDirectlyDefaultValue`](#structFRHAPI__SessionTemplate_1afc9d293d6290f5c2de49e0abc1da9c4d)`() const` <a id="structFRHAPI__SessionTemplate_1afc9d293d6290f5c2de49e0abc1da9c4d"></a>

Returns true if CanBeCreatedByPlayersDirectly_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetCanBeCreatedByPlayersDirectlyToDefault`](#structFRHAPI__SessionTemplate_1a5895d02285be3538be2d7e59412f7466)`()` <a id="structFRHAPI__SessionTemplate_1a5895d02285be3538be2d7e59412f7466"></a>

Sets the value of CanBeCreatedByPlayersDirectly_Optional to its default and also sets CanBeCreatedByPlayersDirectly_IsSet to true.

<br>
#### `public inline bool & `[`GetJoinable`](#structFRHAPI__SessionTemplate_1af9cffd42d338984ff9c90540bc8ab561)`()` <a id="structFRHAPI__SessionTemplate_1af9cffd42d338984ff9c90540bc8ab561"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetJoinable`](#structFRHAPI__SessionTemplate_1ad8599b59763995fa1ed26cf7d89f6697)`() const` <a id="structFRHAPI__SessionTemplate_1ad8599b59763995fa1ed26cf7d89f6697"></a>

Gets the value of Joinable_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetJoinable`](#structFRHAPI__SessionTemplate_1af2829ec666b5d54b5b9b35efb05358a4)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1af2829ec666b5d54b5b9b35efb05358a4"></a>

Gets the value of Joinable_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetJoinable`](#structFRHAPI__SessionTemplate_1a284913a49f55998220ccbae7ffa31df4)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a284913a49f55998220ccbae7ffa31df4"></a>

Fills OutValue with the value of Joinable_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionTemplate_1aeeb6fe105d9e3ba735122f45ee32a40a)`()` <a id="structFRHAPI__SessionTemplate_1aeeb6fe105d9e3ba735122f45ee32a40a"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const bool * `[`GetJoinableOrNull`](#structFRHAPI__SessionTemplate_1a7c9bfc444c99da66f448977682d24985)`() const` <a id="structFRHAPI__SessionTemplate_1a7c9bfc444c99da66f448977682d24985"></a>

Returns a pointer to Joinable_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetJoinable`](#structFRHAPI__SessionTemplate_1ac7e6f063c170b4cfe3d31d2ca7994e88)`(bool NewValue)` <a id="structFRHAPI__SessionTemplate_1ac7e6f063c170b4cfe3d31d2ca7994e88"></a>

Sets the value of Joinable_Optional and also sets Joinable_IsSet to true.

<br>
#### `public inline void `[`ClearJoinable`](#structFRHAPI__SessionTemplate_1a2656215bcf0eb51c71fed328166e6b68)`()` <a id="structFRHAPI__SessionTemplate_1a2656215bcf0eb51c71fed328166e6b68"></a>

Clears the value of Joinable_Optional and sets Joinable_IsSet to false.

<br>
#### `public inline bool `[`IsJoinableDefaultValue`](#structFRHAPI__SessionTemplate_1a7005e50d8cbe3b02a9ce17dbb7d4bd4c)`() const` <a id="structFRHAPI__SessionTemplate_1a7005e50d8cbe3b02a9ce17dbb7d4bd4c"></a>

Returns true if Joinable_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetJoinableToDefault`](#structFRHAPI__SessionTemplate_1aab55eb4066768dc2f660b6f7148789c6)`()` <a id="structFRHAPI__SessionTemplate_1aab55eb4066768dc2f660b6f7148789c6"></a>

Sets the value of Joinable_Optional to its default and also sets Joinable_IsSet to true.

<br>
#### `public inline bool & `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1adfdd95d3bbe2abb2bec34a1e505d1420)`()` <a id="structFRHAPI__SessionTemplate_1adfdd95d3bbe2abb2bec34a1e505d1420"></a>

Gets the value of AutoAddToBrowser_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1a1922eb1b6a75e8e3e704ffc247ce68bc)`() const` <a id="structFRHAPI__SessionTemplate_1a1922eb1b6a75e8e3e704ffc247ce68bc"></a>

Gets the value of AutoAddToBrowser_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1ab22d912b63beca54e9eb97754afa2f92)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1ab22d912b63beca54e9eb97754afa2f92"></a>

Gets the value of AutoAddToBrowser_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1ae622425b3ab30a45ced3fe65d4e23f24)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1ae622425b3ab30a45ced3fe65d4e23f24"></a>

Fills OutValue with the value of AutoAddToBrowser_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline bool * `[`GetAutoAddToBrowserOrNull`](#structFRHAPI__SessionTemplate_1ac6ee66ffed0a42dd58bc556fb1015faa)`()` <a id="structFRHAPI__SessionTemplate_1ac6ee66ffed0a42dd58bc556fb1015faa"></a>

Returns a pointer to AutoAddToBrowser_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const bool * `[`GetAutoAddToBrowserOrNull`](#structFRHAPI__SessionTemplate_1a68aebb2e292a17a1e41691af29e1e55f)`() const` <a id="structFRHAPI__SessionTemplate_1a68aebb2e292a17a1e41691af29e1e55f"></a>

Returns a pointer to AutoAddToBrowser_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1aa783957ce6ec058e41016a574c43ed61)`(bool NewValue)` <a id="structFRHAPI__SessionTemplate_1aa783957ce6ec058e41016a574c43ed61"></a>

Sets the value of AutoAddToBrowser_Optional and also sets AutoAddToBrowser_IsSet to true.

<br>
#### `public inline void `[`ClearAutoAddToBrowser`](#structFRHAPI__SessionTemplate_1ae71defa87a1bc92560786421ece26aa0)`()` <a id="structFRHAPI__SessionTemplate_1ae71defa87a1bc92560786421ece26aa0"></a>

Clears the value of AutoAddToBrowser_Optional and sets AutoAddToBrowser_IsSet to false.

<br>
#### `public inline bool `[`IsAutoAddToBrowserDefaultValue`](#structFRHAPI__SessionTemplate_1a1aef6318593a8e024bab505bdc238fc9)`() const` <a id="structFRHAPI__SessionTemplate_1a1aef6318593a8e024bab505bdc238fc9"></a>

Returns true if AutoAddToBrowser_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetAutoAddToBrowserToDefault`](#structFRHAPI__SessionTemplate_1a78e197d8caad7dcbdb0a6325c5828d07)`()` <a id="structFRHAPI__SessionTemplate_1a78e197d8caad7dcbdb0a6325c5828d07"></a>

Sets the value of AutoAddToBrowser_Optional to its default and also sets AutoAddToBrowser_IsSet to true.

<br>
#### `public inline TMap< FString, FString > & `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a9fbce9936f06a5974cc4c754cc6ba2be)`()` <a id="structFRHAPI__SessionTemplate_1a9fbce9936f06a5974cc4c754cc6ba2be"></a>

Gets the value of AutoBrowserParams_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1aa684894af0b0039c175f754ce967c2ba)`() const` <a id="structFRHAPI__SessionTemplate_1aa684894af0b0039c175f754ce967c2ba"></a>

Gets the value of AutoBrowserParams_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1afc5d4149477d0f71fb54811c0e956e5c)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1afc5d4149477d0f71fb54811c0e956e5c"></a>

Gets the value of AutoBrowserParams_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a28c63280b5b76ebb4ca52054211a2876)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a28c63280b5b76ebb4ca52054211a2876"></a>

Fills OutValue with the value of AutoBrowserParams_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetAutoBrowserParamsOrNull`](#structFRHAPI__SessionTemplate_1a89e159e41c6b6b645f5643d2a1e2e916)`()` <a id="structFRHAPI__SessionTemplate_1a89e159e41c6b6b645f5643d2a1e2e916"></a>

Returns a pointer to AutoBrowserParams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetAutoBrowserParamsOrNull`](#structFRHAPI__SessionTemplate_1a5b7903355ba0fc847ac83f864aa9805a)`() const` <a id="structFRHAPI__SessionTemplate_1a5b7903355ba0fc847ac83f864aa9805a"></a>

Returns a pointer to AutoBrowserParams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetAutoBrowserParams`](#structFRHAPI__SessionTemplate_1a30902dcd2ac35f55b8f1b13d05b5fb81)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__SessionTemplate_1a30902dcd2ac35f55b8f1b13d05b5fb81"></a>

Sets the value of AutoBrowserParams_Optional and also sets AutoBrowserParams_IsSet to true.

<br>
#### `public inline void `[`ClearAutoBrowserParams`](#structFRHAPI__SessionTemplate_1afc6ccbb82066817f3e22ad01730802db)`()` <a id="structFRHAPI__SessionTemplate_1afc6ccbb82066817f3e22ad01730802db"></a>

Clears the value of AutoBrowserParams_Optional and sets AutoBrowserParams_IsSet to false.

<br>
#### `public inline bool & `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a356373eb133f994e7ac8d8efbb1775d1)`()` <a id="structFRHAPI__SessionTemplate_1a356373eb133f994e7ac8d8efbb1775d1"></a>

Gets the value of CanBeAddedToServerBrowser_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1ad943f3983e02ba20c1e8216cbb1db291)`() const` <a id="structFRHAPI__SessionTemplate_1ad943f3983e02ba20c1e8216cbb1db291"></a>

Gets the value of CanBeAddedToServerBrowser_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a749dc792aaf08e7bb6f76273c6da485a)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a749dc792aaf08e7bb6f76273c6da485a"></a>

Gets the value of CanBeAddedToServerBrowser_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1ab18e4d2ed25195e8d0f76dc39810daff)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1ab18e4d2ed25195e8d0f76dc39810daff"></a>

Fills OutValue with the value of CanBeAddedToServerBrowser_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline bool * `[`GetCanBeAddedToServerBrowserOrNull`](#structFRHAPI__SessionTemplate_1a1f82f9ee862c907b625f5c8f461103a2)`()` <a id="structFRHAPI__SessionTemplate_1a1f82f9ee862c907b625f5c8f461103a2"></a>

Returns a pointer to CanBeAddedToServerBrowser_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const bool * `[`GetCanBeAddedToServerBrowserOrNull`](#structFRHAPI__SessionTemplate_1a764001d77e82becf0bba7e9c362f3dd4)`() const` <a id="structFRHAPI__SessionTemplate_1a764001d77e82becf0bba7e9c362f3dd4"></a>

Returns a pointer to CanBeAddedToServerBrowser_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1ac6eac725b488f4a0e1a80ba8be13368b)`(bool NewValue)` <a id="structFRHAPI__SessionTemplate_1ac6eac725b488f4a0e1a80ba8be13368b"></a>

Sets the value of CanBeAddedToServerBrowser_Optional and also sets CanBeAddedToServerBrowser_IsSet to true.

<br>
#### `public inline void `[`ClearCanBeAddedToServerBrowser`](#structFRHAPI__SessionTemplate_1a23f4b3075ad5c6cf66442b7fb9ff4731)`()` <a id="structFRHAPI__SessionTemplate_1a23f4b3075ad5c6cf66442b7fb9ff4731"></a>

Clears the value of CanBeAddedToServerBrowser_Optional and sets CanBeAddedToServerBrowser_IsSet to false.

<br>
#### `public inline bool `[`IsCanBeAddedToServerBrowserDefaultValue`](#structFRHAPI__SessionTemplate_1a7d34d65f47086fd753f7ac691a4c0df5)`() const` <a id="structFRHAPI__SessionTemplate_1a7d34d65f47086fd753f7ac691a4c0df5"></a>

Returns true if CanBeAddedToServerBrowser_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetCanBeAddedToServerBrowserToDefault`](#structFRHAPI__SessionTemplate_1a933ba7bff1d990c9c0e12b47abd0864f)`()` <a id="structFRHAPI__SessionTemplate_1a933ba7bff1d990c9c0e12b47abd0864f"></a>

Sets the value of CanBeAddedToServerBrowser_Optional to its default and also sets CanBeAddedToServerBrowser_IsSet to true.

<br>
#### `public inline bool & `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a8ea968025808651306147a75bd67e3f4)`()` <a id="structFRHAPI__SessionTemplate_1a8ea968025808651306147a75bd67e3f4"></a>

Gets the value of KeepAliveOnEmpty_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a6844b0f1086a52ae8f4abbaa7d6015dd)`() const` <a id="structFRHAPI__SessionTemplate_1a6844b0f1086a52ae8f4abbaa7d6015dd"></a>

Gets the value of KeepAliveOnEmpty_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a3d2f2c8cd62e4e08e1a6cdf1d1edd5f0)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a3d2f2c8cd62e4e08e1a6cdf1d1edd5f0"></a>

Gets the value of KeepAliveOnEmpty_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1acdfbfbafa3f03348b60c82c0b6625ac8)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1acdfbfbafa3f03348b60c82c0b6625ac8"></a>

Fills OutValue with the value of KeepAliveOnEmpty_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline bool * `[`GetKeepAliveOnEmptyOrNull`](#structFRHAPI__SessionTemplate_1ab6c0900c63fb8470b63e487b59072bfe)`()` <a id="structFRHAPI__SessionTemplate_1ab6c0900c63fb8470b63e487b59072bfe"></a>

Returns a pointer to KeepAliveOnEmpty_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const bool * `[`GetKeepAliveOnEmptyOrNull`](#structFRHAPI__SessionTemplate_1ab15dd91b8e7fb45d13a6f94f60067c2b)`() const` <a id="structFRHAPI__SessionTemplate_1ab15dd91b8e7fb45d13a6f94f60067c2b"></a>

Returns a pointer to KeepAliveOnEmpty_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a96ab8d6994b4d813d42e85e64a15e68f)`(bool NewValue)` <a id="structFRHAPI__SessionTemplate_1a96ab8d6994b4d813d42e85e64a15e68f"></a>

Sets the value of KeepAliveOnEmpty_Optional and also sets KeepAliveOnEmpty_IsSet to true.

<br>
#### `public inline void `[`ClearKeepAliveOnEmpty`](#structFRHAPI__SessionTemplate_1a296512654f450ed319f63f8b648c53b8)`()` <a id="structFRHAPI__SessionTemplate_1a296512654f450ed319f63f8b648c53b8"></a>

Clears the value of KeepAliveOnEmpty_Optional and sets KeepAliveOnEmpty_IsSet to false.

<br>
#### `public inline bool `[`IsKeepAliveOnEmptyDefaultValue`](#structFRHAPI__SessionTemplate_1a55aba4ea889f042e220c937f19078a59)`() const` <a id="structFRHAPI__SessionTemplate_1a55aba4ea889f042e220c937f19078a59"></a>

Returns true if KeepAliveOnEmpty_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetKeepAliveOnEmptyToDefault`](#structFRHAPI__SessionTemplate_1a8a37912d37e10efa335771cbdb045138)`()` <a id="structFRHAPI__SessionTemplate_1a8a37912d37e10efa335771cbdb045138"></a>

Sets the value of KeepAliveOnEmpty_Optional to its default and also sets KeepAliveOnEmpty_IsSet to true.

<br>
#### `public inline TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1ac6c83f72faa66211afc8ae944090b3d0)`()` <a id="structFRHAPI__SessionTemplate_1ac6c83f72faa66211afc8ae944090b3d0"></a>

Gets the value of PlatformTemplates_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1aebef26179db7006243d80f71b54ec4b3)`() const` <a id="structFRHAPI__SessionTemplate_1aebef26179db7006243d80f71b54ec4b3"></a>

Gets the value of PlatformTemplates_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1aea4d305d4f6294a06c6a18e869229e7d)`(const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1aea4d305d4f6294a06c6a18e869229e7d"></a>

Gets the value of PlatformTemplates_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a56834a7a902d9cff7d59c3e78d1cf3e9)`(TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a56834a7a902d9cff7d59c3e78d1cf3e9"></a>

Fills OutValue with the value of PlatformTemplates_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > * `[`GetPlatformTemplatesOrNull`](#structFRHAPI__SessionTemplate_1a07808f2ecbaa8e97a7be56c7a441b802)`()` <a id="structFRHAPI__SessionTemplate_1a07808f2ecbaa8e97a7be56c7a441b802"></a>

Returns a pointer to PlatformTemplates_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > * `[`GetPlatformTemplatesOrNull`](#structFRHAPI__SessionTemplate_1ab8f18c47ff1f542e4f6595c35bd7be0f)`() const` <a id="structFRHAPI__SessionTemplate_1ab8f18c47ff1f542e4f6595c35bd7be0f"></a>

Returns a pointer to PlatformTemplates_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlatformTemplates`](#structFRHAPI__SessionTemplate_1a09102a0c2c86e1e96d7b21ec4c483154)`(TMap< FString, `[`FRHAPI_PlatformSessionTemplate`](RHAPI_PlatformSessionTemplate.md#structFRHAPI__PlatformSessionTemplate)` > NewValue)` <a id="structFRHAPI__SessionTemplate_1a09102a0c2c86e1e96d7b21ec4c483154"></a>

Sets the value of PlatformTemplates_Optional and also sets PlatformTemplates_IsSet to true.

<br>
#### `public inline void `[`ClearPlatformTemplates`](#structFRHAPI__SessionTemplate_1a63f0a0474639a53f8a0789e3850321dd)`()` <a id="structFRHAPI__SessionTemplate_1a63f0a0474639a53f8a0789e3850321dd"></a>

Clears the value of PlatformTemplates_Optional and sets PlatformTemplates_IsSet to false.

<br>
#### `public inline `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1ab8dd54ee2f4348500f01e44af3448a4a)`()` <a id="structFRHAPI__SessionTemplate_1ab8dd54ee2f4348500f01e44af3448a4a"></a>

Gets the value of AutoStartupParams_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1a6695f79c7358ba7b6dc665219044f694)`() const` <a id="structFRHAPI__SessionTemplate_1a6695f79c7358ba7b6dc665219044f694"></a>

Gets the value of AutoStartupParams_Optional, regardless of it having been set.

<br>
#### `public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1a89c852cf18006b6e93e52086db3ffa82)`(const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a89c852cf18006b6e93e52086db3ffa82"></a>

Gets the value of AutoStartupParams_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetAutoStartupParams`](#structFRHAPI__SessionTemplate_1add791f7825789aeab338cf381a333094)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` & OutValue) const` <a id="structFRHAPI__SessionTemplate_1add791f7825789aeab338cf381a333094"></a>

Fills OutValue with the value of AutoStartupParams_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetAutoStartupParamsOrNull`](#structFRHAPI__SessionTemplate_1a2cb1eee8abb2d118c644cb7421f393aa)`()` <a id="structFRHAPI__SessionTemplate_1a2cb1eee8abb2d118c644cb7421f393aa"></a>

Returns a pointer to AutoStartupParams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const `[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` * `[`GetAutoStartupParamsOrNull`](#structFRHAPI__SessionTemplate_1a423eba55e9b185ead6f0f8d17eb640b8)`() const` <a id="structFRHAPI__SessionTemplate_1a423eba55e9b185ead6f0f8d17eb640b8"></a>

Returns a pointer to AutoStartupParams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetAutoStartupParams`](#structFRHAPI__SessionTemplate_1ae8aea581ff24bb8fcc059e70dd233c83)`(`[`FRHAPI_InstanceStartupParams`](RHAPI_InstanceStartupParams.md#structFRHAPI__InstanceStartupParams)` NewValue)` <a id="structFRHAPI__SessionTemplate_1ae8aea581ff24bb8fcc059e70dd233c83"></a>

Sets the value of AutoStartupParams_Optional and also sets AutoStartupParams_IsSet to true.

<br>
#### `public inline void `[`ClearAutoStartupParams`](#structFRHAPI__SessionTemplate_1a41041ffbd8775231d249554a072116d7)`()` <a id="structFRHAPI__SessionTemplate_1a41041ffbd8775231d249554a072116d7"></a>

Clears the value of AutoStartupParams_Optional and sets AutoStartupParams_IsSet to false.

<br>
#### `public inline int32 & `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1aab1a67e445ca5338fbb66baa3d3bcb9f)`()` <a id="structFRHAPI__SessionTemplate_1aab1a67e445ca5338fbb66baa3d3bcb9f"></a>

Gets the value of MinSessionCount_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1ab7376fd46c054e32668b755907ac0d90)`() const` <a id="structFRHAPI__SessionTemplate_1ab7376fd46c054e32668b755907ac0d90"></a>

Gets the value of MinSessionCount_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1a1e5c95d760b8e9f40c01e6fb729c5398)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a1e5c95d760b8e9f40c01e6fb729c5398"></a>

Gets the value of MinSessionCount_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetMinSessionCount`](#structFRHAPI__SessionTemplate_1a01b84d2a460388a199d7c375fad38fd3)`(int32 & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a01b84d2a460388a199d7c375fad38fd3"></a>

Fills OutValue with the value of MinSessionCount_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetMinSessionCountOrNull`](#structFRHAPI__SessionTemplate_1a8e5543499a18eba17eac324c956c0231)`()` <a id="structFRHAPI__SessionTemplate_1a8e5543499a18eba17eac324c956c0231"></a>

Returns a pointer to MinSessionCount_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetMinSessionCountOrNull`](#structFRHAPI__SessionTemplate_1a3555ef17f28ad123940629efa5aea9d6)`() const` <a id="structFRHAPI__SessionTemplate_1a3555ef17f28ad123940629efa5aea9d6"></a>

Returns a pointer to MinSessionCount_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetMinSessionCount`](#structFRHAPI__SessionTemplate_1a254d335fd5933d1f3d3bb157d7f98b04)`(int32 NewValue)` <a id="structFRHAPI__SessionTemplate_1a254d335fd5933d1f3d3bb157d7f98b04"></a>

Sets the value of MinSessionCount_Optional and also sets MinSessionCount_IsSet to true.

<br>
#### `public inline void `[`ClearMinSessionCount`](#structFRHAPI__SessionTemplate_1a563b899213f0a6ff1e7ab855e18df3a5)`()` <a id="structFRHAPI__SessionTemplate_1a563b899213f0a6ff1e7ab855e18df3a5"></a>

Clears the value of MinSessionCount_Optional and sets MinSessionCount_IsSet to false.

<br>
#### `public inline bool `[`IsMinSessionCountDefaultValue`](#structFRHAPI__SessionTemplate_1a8215c4b5ea50cf0228490c27c5db60fb)`() const` <a id="structFRHAPI__SessionTemplate_1a8215c4b5ea50cf0228490c27c5db60fb"></a>

Returns true if MinSessionCount_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetMinSessionCountToDefault`](#structFRHAPI__SessionTemplate_1af3b075285782037409643751bbaaa19d)`()` <a id="structFRHAPI__SessionTemplate_1af3b075285782037409643751bbaaa19d"></a>

Sets the value of MinSessionCount_Optional to its default and also sets MinSessionCount_IsSet to true.

<br>
#### `public inline TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTemplate_1a82fc45eec30dd2fdbc21dfd89596622b)`()` <a id="structFRHAPI__SessionTemplate_1a82fc45eec30dd2fdbc21dfd89596622b"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTemplate_1a93d7a2dbc3d1ef21263a08ee990d51fc)`() const` <a id="structFRHAPI__SessionTemplate_1a93d7a2dbc3d1ef21263a08ee990d51fc"></a>

Gets the value of CustomData_Optional, regardless of it having been set.

<br>
#### `public inline const TMap< FString, FString > & `[`GetCustomData`](#structFRHAPI__SessionTemplate_1ad619a0c4c3891bff333558fc77926a88)`(const TMap< FString, FString > & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1ad619a0c4c3891bff333558fc77926a88"></a>

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCustomData`](#structFRHAPI__SessionTemplate_1ab19f81eb52ffd9f199a884befe791d2a)`(TMap< FString, FString > & OutValue) const` <a id="structFRHAPI__SessionTemplate_1ab19f81eb52ffd9f199a884befe791d2a"></a>

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionTemplate_1a210b362e85e3b02527bfe2a1f0d78bb2)`()` <a id="structFRHAPI__SessionTemplate_1a210b362e85e3b02527bfe2a1f0d78bb2"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const TMap< FString, FString > * `[`GetCustomDataOrNull`](#structFRHAPI__SessionTemplate_1a1f6d298122b0f91adbbcf4b3c188b0c1)`() const` <a id="structFRHAPI__SessionTemplate_1a1f6d298122b0f91adbbcf4b3c188b0c1"></a>

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCustomData`](#structFRHAPI__SessionTemplate_1a8f039c1cc05ec90391072c0f9bf69d03)`(TMap< FString, FString > NewValue)` <a id="structFRHAPI__SessionTemplate_1a8f039c1cc05ec90391072c0f9bf69d03"></a>

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.

<br>
#### `public inline void `[`ClearCustomData`](#structFRHAPI__SessionTemplate_1ac20b3669d3a9488606e5e2afd59df8f1)`()` <a id="structFRHAPI__SessionTemplate_1ac20b3669d3a9488606e5e2afd59df8f1"></a>

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.

<br>
#### `public inline int32 & `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a756f008bb020837ad8503308147df6e2)`()` <a id="structFRHAPI__SessionTemplate_1a756f008bb020837ad8503308147df6e2"></a>

Gets the value of NumTeams_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a0700118646093644624de6a22c77afbf)`() const` <a id="structFRHAPI__SessionTemplate_1a0700118646093644624de6a22c77afbf"></a>

Gets the value of NumTeams_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a96d38df114e19c81017a8e5a4b86061c)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a96d38df114e19c81017a8e5a4b86061c"></a>

Gets the value of NumTeams_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetNumTeams`](#structFRHAPI__SessionTemplate_1a6ce27d5e98f039a4111fd089abc115df)`(int32 & OutValue) const` <a id="structFRHAPI__SessionTemplate_1a6ce27d5e98f039a4111fd089abc115df"></a>

Fills OutValue with the value of NumTeams_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetNumTeamsOrNull`](#structFRHAPI__SessionTemplate_1ad24010c350f353abae43817ce6a7fa7c)`()` <a id="structFRHAPI__SessionTemplate_1ad24010c350f353abae43817ce6a7fa7c"></a>

Returns a pointer to NumTeams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetNumTeamsOrNull`](#structFRHAPI__SessionTemplate_1a1fe6d852ba498e482f018cb525a73a03)`() const` <a id="structFRHAPI__SessionTemplate_1a1fe6d852ba498e482f018cb525a73a03"></a>

Returns a pointer to NumTeams_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetNumTeams`](#structFRHAPI__SessionTemplate_1aee7845d212604eda9ea8ddad496cc87c)`(int32 NewValue)` <a id="structFRHAPI__SessionTemplate_1aee7845d212604eda9ea8ddad496cc87c"></a>

Sets the value of NumTeams_Optional and also sets NumTeams_IsSet to true.

<br>
#### `public inline void `[`ClearNumTeams`](#structFRHAPI__SessionTemplate_1ab05fd0888c21bacaaab9bd4b0ca92e00)`()` <a id="structFRHAPI__SessionTemplate_1ab05fd0888c21bacaaab9bd4b0ca92e00"></a>

Clears the value of NumTeams_Optional and sets NumTeams_IsSet to false.

<br>
#### `public inline bool `[`IsNumTeamsDefaultValue`](#structFRHAPI__SessionTemplate_1a4c6f7c1655e76727f7cb5b5ffc5c66af)`() const` <a id="structFRHAPI__SessionTemplate_1a4c6f7c1655e76727f7cb5b5ffc5c66af"></a>

Returns true if NumTeams_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetNumTeamsToDefault`](#structFRHAPI__SessionTemplate_1a76d7e80355b9705e3a1ea1c86817fd45)`()` <a id="structFRHAPI__SessionTemplate_1a76d7e80355b9705e3a1ea1c86817fd45"></a>

Sets the value of NumTeams_Optional to its default and also sets NumTeams_IsSet to true.

<br>
#### `public inline int32 & `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1a6ae47ea0d86ead702c351b6f06d5b1bb)`()` <a id="structFRHAPI__SessionTemplate_1a6ae47ea0d86ead702c351b6f06d5b1bb"></a>

Gets the value of PlayersPerTeam_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1ab586729d347edb3ddd5df0fd5beec5f1)`() const` <a id="structFRHAPI__SessionTemplate_1ab586729d347edb3ddd5df0fd5beec5f1"></a>

Gets the value of PlayersPerTeam_Optional, regardless of it having been set.

<br>
#### `public inline const int32 & `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1a7069808829529cd76ec7f294df72cacd)`(const int32 & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a7069808829529cd76ec7f294df72cacd"></a>

Gets the value of PlayersPerTeam_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1ac380d35a8a8a1758ade954aa9f4c09ca)`(int32 & OutValue) const` <a id="structFRHAPI__SessionTemplate_1ac380d35a8a8a1758ade954aa9f4c09ca"></a>

Fills OutValue with the value of PlayersPerTeam_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline int32 * `[`GetPlayersPerTeamOrNull`](#structFRHAPI__SessionTemplate_1a3268494a760b7e14302fae97cae4266b)`()` <a id="structFRHAPI__SessionTemplate_1a3268494a760b7e14302fae97cae4266b"></a>

Returns a pointer to PlayersPerTeam_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const int32 * `[`GetPlayersPerTeamOrNull`](#structFRHAPI__SessionTemplate_1ac0ba30015039756fbe49ea2f237f0d50)`() const` <a id="structFRHAPI__SessionTemplate_1ac0ba30015039756fbe49ea2f237f0d50"></a>

Returns a pointer to PlayersPerTeam_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetPlayersPerTeam`](#structFRHAPI__SessionTemplate_1a0eebc89ec7961b126d546bdd9cd9796b)`(int32 NewValue)` <a id="structFRHAPI__SessionTemplate_1a0eebc89ec7961b126d546bdd9cd9796b"></a>

Sets the value of PlayersPerTeam_Optional and also sets PlayersPerTeam_IsSet to true.

<br>
#### `public inline void `[`ClearPlayersPerTeam`](#structFRHAPI__SessionTemplate_1aa2773b8e861aae5dd66d271167b6e2fb)`()` <a id="structFRHAPI__SessionTemplate_1aa2773b8e861aae5dd66d271167b6e2fb"></a>

Clears the value of PlayersPerTeam_Optional and sets PlayersPerTeam_IsSet to false.

<br>
#### `public inline bool `[`IsPlayersPerTeamDefaultValue`](#structFRHAPI__SessionTemplate_1afc394c69e5ec383de5296897550060eb)`() const` <a id="structFRHAPI__SessionTemplate_1afc394c69e5ec383de5296897550060eb"></a>

Returns true if PlayersPerTeam_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetPlayersPerTeamToDefault`](#structFRHAPI__SessionTemplate_1a8434c5519b75cac25c55f491f314dc7e)`()` <a id="structFRHAPI__SessionTemplate_1a8434c5519b75cac25c55f491f314dc7e"></a>

Sets the value of PlayersPerTeam_Optional to its default and also sets PlayersPerTeam_IsSet to true.

<br>
#### `public inline bool & `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1a05e870ee9cdc2c46e50ab7fc28482cc7)`()` <a id="structFRHAPI__SessionTemplate_1a05e870ee9cdc2c46e50ab7fc28482cc7"></a>

Gets the value of CanChangeOwnTeam_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1ab308d57c9a744e7ff316c2ffb6b5c0be)`() const` <a id="structFRHAPI__SessionTemplate_1ab308d57c9a744e7ff316c2ffb6b5c0be"></a>

Gets the value of CanChangeOwnTeam_Optional, regardless of it having been set.

<br>
#### `public inline const bool & `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1a78c0b25be27b024aff1e68a020cc3845)`(const bool & DefaultValue) const` <a id="structFRHAPI__SessionTemplate_1a78c0b25be27b024aff1e68a020cc3845"></a>

Gets the value of CanChangeOwnTeam_Optional, if it has been set, otherwise it returns DefaultValue.

<br>
#### `public inline bool `[`GetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1acff401368fdba4b7bc966fe2d79d1923)`(bool & OutValue) const` <a id="structFRHAPI__SessionTemplate_1acff401368fdba4b7bc966fe2d79d1923"></a>

Fills OutValue with the value of CanChangeOwnTeam_Optional and returns true if it has been set, otherwise returns false.

<br>
#### `public inline bool * `[`GetCanChangeOwnTeamOrNull`](#structFRHAPI__SessionTemplate_1a96d97777749d18bd98f740f0dcf69275)`()` <a id="structFRHAPI__SessionTemplate_1a96d97777749d18bd98f740f0dcf69275"></a>

Returns a pointer to CanChangeOwnTeam_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline const bool * `[`GetCanChangeOwnTeamOrNull`](#structFRHAPI__SessionTemplate_1a89094a04c692a9ef55267b1033500b88)`() const` <a id="structFRHAPI__SessionTemplate_1a89094a04c692a9ef55267b1033500b88"></a>

Returns a pointer to CanChangeOwnTeam_Optional, if it has been set, otherwise returns nullptr.

<br>
#### `public inline void `[`SetCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1ad2a6502d9c243417a2394f73e91c974d)`(bool NewValue)` <a id="structFRHAPI__SessionTemplate_1ad2a6502d9c243417a2394f73e91c974d"></a>

Sets the value of CanChangeOwnTeam_Optional and also sets CanChangeOwnTeam_IsSet to true.

<br>
#### `public inline void `[`ClearCanChangeOwnTeam`](#structFRHAPI__SessionTemplate_1a9aa2afa1842ee1cab22a7b1a9a772c08)`()` <a id="structFRHAPI__SessionTemplate_1a9aa2afa1842ee1cab22a7b1a9a772c08"></a>

Clears the value of CanChangeOwnTeam_Optional and sets CanChangeOwnTeam_IsSet to false.

<br>
#### `public inline bool `[`IsCanChangeOwnTeamDefaultValue`](#structFRHAPI__SessionTemplate_1a26a5ebe40250064f888d423e23531bfa)`() const` <a id="structFRHAPI__SessionTemplate_1a26a5ebe40250064f888d423e23531bfa"></a>

Returns true if CanChangeOwnTeam_Optional is set and matches the default value.

<br>
#### `public inline void `[`SetCanChangeOwnTeamToDefault`](#structFRHAPI__SessionTemplate_1ac1a42404ac65f492acfd7e7fe75e4afb)`()` <a id="structFRHAPI__SessionTemplate_1ac1a42404ac65f492acfd7e7fe75e4afb"></a>

Sets the value of CanChangeOwnTeam_Optional to its default and also sets CanChangeOwnTeam_IsSet to true.

<br>
