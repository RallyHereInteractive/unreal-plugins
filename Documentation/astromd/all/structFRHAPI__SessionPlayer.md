---
title: FRHAPI_SessionPlayer Struct
---
Inherits from [FRHAPI_Model](/unreal-plugins/all/structfrhapi__model/#structFRHAPI__Model)

A player resource in a session.

## Summary
| Kind | View | Description |
|------|------|-------------|
|int32|[PlayerId_Optional](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1ada45674d5ad30eda5058ff64a5cb105f)|Legacy id for this player.|
|bool|[PlayerId_IsSet](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a89bc0f5f785941fba984c07a1da3c628)|true if PlayerId_Optional has been set to a value|
|FGuid|[PlayerUuid](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a0c29462af5da0a57e9f9491b94a30cc3)|UUID for this player.|
|ERHAPI_SessionPlayerStatus|[Status](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a20c44a0cb2d627f0fb8417edd463b9bd)|Status of the player in the session.|
|FGuid|[InvitingPlayerUuid_Optional](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a900736c28c358788992534c2b32a38ea)|UUID of the player who sent this players invite, if any.|
|bool|[InvitingPlayerUuid_IsSet](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a274cd7e1313b2b25d69ca73933e76bcf)|true if InvitingPlayerUuid_Optional has been set to a value|
|FString|[SourceSessionId_Optional](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1af3736f582d13c659574eeea281356dc6)|The UUID of the session that this player was invited from.|
|bool|[SourceSessionId_IsSet](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a8f524eeefe1e57d6bfaf7b10e6e119d1)|true if SourceSessionId_Optional has been set to a value|
|TMap< FString, FString >|[CustomData_Optional](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1af093d0545b4ca98d7e916d8456c6d754)|player-defined custom data|
|bool|[CustomData_IsSet](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a2fb78b14e916ce432c24c730d7895ab7)|true if CustomData_Optional has been set to a value|
|FString|[Version_Optional](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a8464dd89d0dbd289132aaa1e0f1edb22)|Product Client Version number. Used for compatibility checking with other players and instances.|
|bool|[Version_IsSet](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a739f1593fa6f0f828b3acbae17b9a581)|true if Version_Optional has been set to a value|
|[FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings)|[ClientSettings_Optional](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a2f8f0d43f78a9b08db040a591e550082)||
|bool|[ClientSettings_IsSet](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a0cb461cb01254f28e33b4ee098fff636)|true if ClientSettings_Optional has been set to a value|
|[FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences)|[CrossplayPreferences_Optional](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a1df5a79e2e5f967579ad882122b7ad74)||
|bool|[CrossplayPreferences_IsSet](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a09fdf10fbfcdc3cdeea386b671d75273)|true if CrossplayPreferences_Optional has been set to a value|
|FDateTime|[Invited_Optional](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a2e47dda3a7a7e474f39950a1487054a5)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|bool|[Invited_IsSet](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a24180c0ac76cb70443d34261572d511c)|true if Invited_Optional has been set to a value|
|FDateTime|[Joined_Optional](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a98a0fa4e013c02e4f94d472459d7f9b7)|Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.|
|bool|[Joined_IsSet](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1ab5d3d5da597f5007fe3708826e570580)|true if Joined_Optional has been set to a value|
|bool|[FromJson](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a6d68b484bda6b9c61facc7ec22a84170)(const TSharedPtr< FJsonValue > & JsonValue)|Fills this object with data from the passed in JSON.|
|void|[WriteJson](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a5dc36810a84dc62648670acc18ba96f0)(TSharedRef< TJsonWriter<>> & Writer)|Writes the data from this object into the specified JSON Writer stream.|
|int32 &|[GetPlayerId](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1af082dcacd1e206105ce866e2f411fc5f)()|Gets the value of PlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetPlayerId](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a38af2b3795973dd9cab39c08982030e0)()|Gets the value of PlayerId_Optional, regardless of it having been set.|
|const int32 &|[GetPlayerId](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a1bb204035e63b18182d060b02255c6af)(const int32 & DefaultValue)|Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetPlayerId](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a1e104e5d5a81d0555749531774c57e20)(int32 & OutValue)|Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.|
|int32 *|[GetPlayerIdOrNull](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a7104c302ca1e6be25e64a792a6fc2640)()|Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.|
|const int32 *|[GetPlayerIdOrNull](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a65f89cbd11987a3f666137a07abbe88a)()|Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetPlayerId](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a1904aa3344becb59e73b470231169f47)(int32 NewValue)|Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.|
|void|[ClearPlayerId](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1aa5068324d303c0ec84db535158fb345e)()|Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.|
|bool|[IsPlayerIdDefaultValue](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1aebb63b6bda892c9b01eba35b22163697)()|Returns true if PlayerId_Optional is set and matches the default value.|
|void|[SetPlayerIdToDefault](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1af1f33f4f89bbc5c6685fe0d700d0c65d)()|Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.|
|FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1aff80c8a8801c3da78cef13c02b4c0358)()|Gets the value of PlayerUuid.|
|const FGuid &|[GetPlayerUuid](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1ac79ff0f30d08521f2f5e7b81041319f9)()|Gets the value of PlayerUuid.|
|void|[SetPlayerUuid](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1afca7d66e4c75dbc1d88e130c7eeff780)(FGuid NewValue)|Sets the value of PlayerUuid.|
|ERHAPI_SessionPlayerStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a6c1dcd9332956742bb36aee64fd9f376)()|Gets the value of Status.|
|const ERHAPI_SessionPlayerStatus &|[GetStatus](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a02ca2506bc5bc82b3429833efbbccb65)()|Gets the value of Status.|
|void|[SetStatus](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a36b3c46c65ab4deaf64a2a976c511cdf)(ERHAPI_SessionPlayerStatus NewValue)|Sets the value of Status.|
|FGuid &|[GetInvitingPlayerUuid](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1acd45c7b28d8030a4e93eb540b1d1be22)()|Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.|
|const FGuid &|[GetInvitingPlayerUuid](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a54de85369af1e47e840f21f47a9d3abd)()|Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.|
|const FGuid &|[GetInvitingPlayerUuid](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a945d4425d54f813d530b4786286a1026)(const FGuid & DefaultValue)|Gets the value of InvitingPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInvitingPlayerUuid](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a9a66f2679f58a2fe39581512c7bb808d)(FGuid & OutValue)|Fills OutValue with the value of InvitingPlayerUuid_Optional and returns true if it has been set, otherwise returns false.|
|FGuid *|[GetInvitingPlayerUuidOrNull](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a3b147bc23a9db14aedd6b8c851bc71a8)()|Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.|
|const FGuid *|[GetInvitingPlayerUuidOrNull](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a79e1d75785329cc7b9787fe811c77b1a)()|Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInvitingPlayerUuid](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1acc906044eca07ceb43ed52a1a5964642)(FGuid NewValue)|Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true.|
|void|[ClearInvitingPlayerUuid](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a108279eb6926eafff034a612ab51fc69)()|Clears the value of InvitingPlayerUuid_Optional and sets InvitingPlayerUuid_IsSet to false.|
|FString &|[GetSourceSessionId](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a58827da36bffbc5e3cb93591bce2cb0c)()|Gets the value of SourceSessionId_Optional, regardless of it having been set.|
|const FString &|[GetSourceSessionId](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a1b024df8ab7ead95079f03326e85510f)()|Gets the value of SourceSessionId_Optional, regardless of it having been set.|
|const FString &|[GetSourceSessionId](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1ad13a3ed971d11fac19977a613a105931)(const FString & DefaultValue)|Gets the value of SourceSessionId_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetSourceSessionId](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1abcba87f13817fe0a6cacda017f742601)(FString & OutValue)|Fills OutValue with the value of SourceSessionId_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetSourceSessionIdOrNull](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a6fbb24ae58218124424cf207a0bf47af)()|Returns a pointer to SourceSessionId_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetSourceSessionIdOrNull](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a258603cdb48ada4a5688a0c788d677b3)()|Returns a pointer to SourceSessionId_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetSourceSessionId](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a5642e6719ed0719b0842b60eda7d0e09)(FString NewValue)|Sets the value of SourceSessionId_Optional and also sets SourceSessionId_IsSet to true.|
|void|[ClearSourceSessionId](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a94530a246d8f063c45837aef156267d5)()|Clears the value of SourceSessionId_Optional and sets SourceSessionId_IsSet to false.|
|TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a5eff9bc325194bc90dd734562a8c8b89)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1ae6385310f74507afa449e27aeb309964)()|Gets the value of CustomData_Optional, regardless of it having been set.|
|const TMap< FString, FString > &|[GetCustomData](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1acb1a7662127097cd97db6ee66bce6a45)(const TMap< FString, FString > & DefaultValue)|Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCustomData](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a84827d47bd6680f74e33e477d5ebea53)(TMap< FString, FString > & OutValue)|Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.|
|TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a44de6cafe64a30947bb032a3dc6cb4f4)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|const TMap< FString, FString > *|[GetCustomDataOrNull](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a89a25ab11203738ea71a04923ee52078)()|Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCustomData](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a12ea2cec1d05e710a554a0eb60d65d51)(TMap< FString, FString > NewValue)|Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.|
|void|[ClearCustomData](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a711c019f6e123fbd65355b61e3d16b23)()|Clears the value of CustomData_Optional and sets CustomData_IsSet to false.|
|FString &|[GetVersion](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a7b8c88818bdb429e4d8c48ab5aca5fd6)()|Gets the value of Version_Optional, regardless of it having been set.|
|const FString &|[GetVersion](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1af89e969acd8d16449783d4d5a04e2bf8)()|Gets the value of Version_Optional, regardless of it having been set.|
|const FString &|[GetVersion](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1acc5a6efe5394c1412ef6a39e06a4fe2b)(const FString & DefaultValue)|Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetVersion](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a57c4d76dd7690b0062d7799e80e333af)(FString & OutValue)|Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.|
|FString *|[GetVersionOrNull](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a0d2d6ab091911afd5e8befdfd31a6ff6)()|Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.|
|const FString *|[GetVersionOrNull](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a11b5151b3217305efcd38671cdfc44cf)()|Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetVersion](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a583d1947aeef7a39ee44ff38bfac4c2a)(FString NewValue)|Sets the value of Version_Optional and also sets Version_IsSet to true.|
|void|[ClearVersion](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a118c09e3ead5ffc3d5a533d39d429d8c)()|Clears the value of Version_Optional and sets Version_IsSet to false.|
|[FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) &|[GetClientSettings](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1ae528a51f129695154021c0e793018c92)()|Gets the value of ClientSettings_Optional, regardless of it having been set.|
|const [FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) &|[GetClientSettings](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a460f99294350394cc6d722c31d487605)()|Gets the value of ClientSettings_Optional, regardless of it having been set.|
|const [FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) &|[GetClientSettings](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a773783f32107601c280fede4ffd61df6)(const [FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) & DefaultValue)|Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetClientSettings](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a2fe4bca124fda7bac88a901c77f7bb73)([FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) & OutValue)|Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) *|[GetClientSettingsOrNull](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a9a18ebe5edbdc58a5d26d11373abb7de)()|Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) *|[GetClientSettingsOrNull](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a9486a2cd28010c8e35d37a75533a3131)()|Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetClientSettings](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a5a0215b63901be5413393030ecc16973)([FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) NewValue)|Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.|
|void|[ClearClientSettings](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a821f58c31fd1c68d79b8059e68050e46)()|Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.|
|[FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) &|[GetCrossplayPreferences](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a5389b335b1a88ce3987698a5d375430d)()|Gets the value of CrossplayPreferences_Optional, regardless of it having been set.|
|const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) &|[GetCrossplayPreferences](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a6c4ea67788f54d4479f6e1d8ad6a4665)()|Gets the value of CrossplayPreferences_Optional, regardless of it having been set.|
|const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) &|[GetCrossplayPreferences](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a5ee60d780f4728f1f7f46910f055d690)(const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) & DefaultValue)|Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetCrossplayPreferences](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1ad343d91946f076520d5c3622da363df9)([FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) & OutValue)|Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.|
|[FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) *|[GetCrossplayPreferencesOrNull](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a71c83a819f2b88a8326644575317fd19)()|Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.|
|const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) *|[GetCrossplayPreferencesOrNull](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1ac2e2424adff3522117846bb62581b695)()|Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetCrossplayPreferences](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a1ce0e1ce8882e124d253029609cf619b)([FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) NewValue)|Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.|
|void|[ClearCrossplayPreferences](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1aab20b5ceba1df5862b8b103d6c6352ea)()|Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.|
|FDateTime &|[GetInvited](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a14d0bbb2f3a437ad4d8110490d682ba9)()|Gets the value of Invited_Optional, regardless of it having been set.|
|const FDateTime &|[GetInvited](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1ad379c6e768e0c56ee579e44d08eade13)()|Gets the value of Invited_Optional, regardless of it having been set.|
|const FDateTime &|[GetInvited](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a47cb1f05a41d417c3f9ed8e9aa88f66f)(const FDateTime & DefaultValue)|Gets the value of Invited_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetInvited](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a76c27fdddda2985942a56a424bbd06b9)(FDateTime & OutValue)|Fills OutValue with the value of Invited_Optional and returns true if it has been set, otherwise returns false.|
|FDateTime *|[GetInvitedOrNull](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a7976724ad9e4aaf6ea7edf6ad798a12c)()|Returns a pointer to Invited_Optional, if it has been set, otherwise returns nullptr.|
|const FDateTime *|[GetInvitedOrNull](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a35b6948791f2d659c1fa54dbd5e32d16)()|Returns a pointer to Invited_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetInvited](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a1a96f1444823fa4ed7bb2e26cea4e632)(FDateTime NewValue)|Sets the value of Invited_Optional and also sets Invited_IsSet to true.|
|void|[ClearInvited](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1aa6b1a742b86c52aa02ee01441a2bf2d8)()|Clears the value of Invited_Optional and sets Invited_IsSet to false.|
|FDateTime &|[GetJoined](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1abecbf72283ecb262b1152bd4b9b60f5b)()|Gets the value of Joined_Optional, regardless of it having been set.|
|const FDateTime &|[GetJoined](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a5a9776015def077c57f79ac3a9ea340e)()|Gets the value of Joined_Optional, regardless of it having been set.|
|const FDateTime &|[GetJoined](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a25c39669436de7c50e238fd75931d266)(const FDateTime & DefaultValue)|Gets the value of Joined_Optional, if it has been set, otherwise it returns DefaultValue.|
|bool|[GetJoined](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a5b395ef14a3539880ebb60c8388ad570)(FDateTime & OutValue)|Fills OutValue with the value of Joined_Optional and returns true if it has been set, otherwise returns false.|
|FDateTime *|[GetJoinedOrNull](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1abcecfd21a9d0658857f355def398d3e1)()|Returns a pointer to Joined_Optional, if it has been set, otherwise returns nullptr.|
|const FDateTime *|[GetJoinedOrNull](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a8ea013f03ae714cb143675f500dd7dfa)()|Returns a pointer to Joined_Optional, if it has been set, otherwise returns nullptr.|
|void|[SetJoined](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a4d113ac251cab541e6a0f442aeb6ce50)(FDateTime NewValue)|Sets the value of Joined_Optional and also sets Joined_IsSet to true.|
|void|[ClearJoined](/unreal-plugins/all/structfrhapi__sessionplayer/#structFRHAPI__SessionPlayer_1a8b9c20d24a494d6a9c252112833d06e2)()|Clears the value of Joined_Optional and sets Joined_IsSet to false.|
## Public Attributes



### `PlayerId_Optional` <a id="structFRHAPI__SessionPlayer_1ada45674d5ad30eda5058ff64a5cb105f"></a>

`int32 FRHAPI_SessionPlayer::PlayerId_Optional`

Legacy id for this player.




### `PlayerId_IsSet` <a id="structFRHAPI__SessionPlayer_1a89bc0f5f785941fba984c07a1da3c628"></a>

`bool FRHAPI_SessionPlayer::PlayerId_IsSet`

true if PlayerId_Optional has been set to a value




### `PlayerUuid` <a id="structFRHAPI__SessionPlayer_1a0c29462af5da0a57e9f9491b94a30cc3"></a>

`FGuid FRHAPI_SessionPlayer::PlayerUuid`

UUID for this player.




### `Status` <a id="structFRHAPI__SessionPlayer_1a20c44a0cb2d627f0fb8417edd463b9bd"></a>

`ERHAPI_SessionPlayerStatus FRHAPI_SessionPlayer::Status`

Status of the player in the session.




### `InvitingPlayerUuid_Optional` <a id="structFRHAPI__SessionPlayer_1a900736c28c358788992534c2b32a38ea"></a>

`FGuid FRHAPI_SessionPlayer::InvitingPlayerUuid_Optional`

UUID of the player who sent this players invite, if any.




### `InvitingPlayerUuid_IsSet` <a id="structFRHAPI__SessionPlayer_1a274cd7e1313b2b25d69ca73933e76bcf"></a>

`bool FRHAPI_SessionPlayer::InvitingPlayerUuid_IsSet`

true if InvitingPlayerUuid_Optional has been set to a value




### `SourceSessionId_Optional` <a id="structFRHAPI__SessionPlayer_1af3736f582d13c659574eeea281356dc6"></a>

`FString FRHAPI_SessionPlayer::SourceSessionId_Optional`

The UUID of the session that this player was invited from.




### `SourceSessionId_IsSet` <a id="structFRHAPI__SessionPlayer_1a8f524eeefe1e57d6bfaf7b10e6e119d1"></a>

`bool FRHAPI_SessionPlayer::SourceSessionId_IsSet`

true if SourceSessionId_Optional has been set to a value




### `CustomData_Optional` <a id="structFRHAPI__SessionPlayer_1af093d0545b4ca98d7e916d8456c6d754"></a>

`TMap<FString, FString> FRHAPI_SessionPlayer::CustomData_Optional`

player-defined custom data




### `CustomData_IsSet` <a id="structFRHAPI__SessionPlayer_1a2fb78b14e916ce432c24c730d7895ab7"></a>

`bool FRHAPI_SessionPlayer::CustomData_IsSet`

true if CustomData_Optional has been set to a value




### `Version_Optional` <a id="structFRHAPI__SessionPlayer_1a8464dd89d0dbd289132aaa1e0f1edb22"></a>

`FString FRHAPI_SessionPlayer::Version_Optional`

Product Client Version number. Used for compatibility checking with other players and instances.




### `Version_IsSet` <a id="structFRHAPI__SessionPlayer_1a739f1593fa6f0f828b3acbae17b9a581"></a>

`bool FRHAPI_SessionPlayer::Version_IsSet`

true if Version_Optional has been set to a value




### `ClientSettings_Optional` <a id="structFRHAPI__SessionPlayer_1a2f8f0d43f78a9b08db040a591e550082"></a>

`FRHAPI_ClientSettings FRHAPI_SessionPlayer::ClientSettings_Optional`






### `ClientSettings_IsSet` <a id="structFRHAPI__SessionPlayer_1a0cb461cb01254f28e33b4ee098fff636"></a>

`bool FRHAPI_SessionPlayer::ClientSettings_IsSet`

true if ClientSettings_Optional has been set to a value




### `CrossplayPreferences_Optional` <a id="structFRHAPI__SessionPlayer_1a1df5a79e2e5f967579ad882122b7ad74"></a>

`FRHAPI_CrossplayPreferences FRHAPI_SessionPlayer::CrossplayPreferences_Optional`






### `CrossplayPreferences_IsSet` <a id="structFRHAPI__SessionPlayer_1a09fdf10fbfcdc3cdeea386b671d75273"></a>

`bool FRHAPI_SessionPlayer::CrossplayPreferences_IsSet`

true if CrossplayPreferences_Optional has been set to a value




### `Invited_Optional` <a id="structFRHAPI__SessionPlayer_1a2e47dda3a7a7e474f39950a1487054a5"></a>

`FDateTime FRHAPI_SessionPlayer::Invited_Optional`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.




### `Invited_IsSet` <a id="structFRHAPI__SessionPlayer_1a24180c0ac76cb70443d34261572d511c"></a>

`bool FRHAPI_SessionPlayer::Invited_IsSet`

true if Invited_Optional has been set to a value




### `Joined_Optional` <a id="structFRHAPI__SessionPlayer_1a98a0fa4e013c02e4f94d472459d7f9b7"></a>

`FDateTime FRHAPI_SessionPlayer::Joined_Optional`

Datetime that enforces that a timezone is given. Unix timestamps are allowed and forced into the UTC time zone.




### `Joined_IsSet` <a id="structFRHAPI__SessionPlayer_1ab5d3d5da597f5007fe3708826e570580"></a>

`bool FRHAPI_SessionPlayer::Joined_IsSet`

true if Joined_Optional has been set to a value





## Public Functions



### `FromJson` <a id="structFRHAPI__SessionPlayer_1a6d68b484bda6b9c61facc7ec22a84170"></a>

bool FromJson(const TSharedPtr< FJsonValue > & JsonValue)

#### Parameters

| Type | Name |
|------|------|
|const TSharedPtr< FJsonValue > &|JsonValue|

#### Description

Fills this object with data from the passed in JSON.


#### Parameters

JsonValue
: Data from the API call.

#### Returns
true if parsing of the JSON data was successful. 



### `WriteJson` <a id="structFRHAPI__SessionPlayer_1a5dc36810a84dc62648670acc18ba96f0"></a>

void WriteJson(TSharedRef< TJsonWriter<>> & Writer)

#### Parameters

| Type | Name |
|------|------|
|TSharedRef< TJsonWriter<>> &|Writer|

#### Description

Writes the data from this object into the specified JSON Writer stream.


#### Parameters

Writer
: JSON Writer stream to push . 



### `GetPlayerId` <a id="structFRHAPI__SessionPlayer_1af082dcacd1e206105ce866e2f411fc5f"></a>

int32 & GetPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerId_Optional, regardless of it having been set.




### `GetPlayerId` <a id="structFRHAPI__SessionPlayer_1a38af2b3795973dd9cab39c08982030e0"></a>

const int32 & GetPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerId_Optional, regardless of it having been set.




### `GetPlayerId` <a id="structFRHAPI__SessionPlayer_1a1bb204035e63b18182d060b02255c6af"></a>

const int32 & GetPlayerId(const int32 & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const int32 &|DefaultValue|

#### Description

Gets the value of PlayerId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetPlayerId` <a id="structFRHAPI__SessionPlayer_1a1e104e5d5a81d0555749531774c57e20"></a>

bool GetPlayerId(int32 & OutValue)

#### Parameters

| Type | Name |
|------|------|
|int32 &|OutValue|

#### Description

Fills OutValue with the value of PlayerId_Optional and returns true if it has been set, otherwise returns false.




### `GetPlayerIdOrNull` <a id="structFRHAPI__SessionPlayer_1a7104c302ca1e6be25e64a792a6fc2640"></a>

int32 * GetPlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.




### `GetPlayerIdOrNull` <a id="structFRHAPI__SessionPlayer_1a65f89cbd11987a3f666137a07abbe88a"></a>

const int32 * GetPlayerIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to PlayerId_Optional, if it has been set, otherwise returns nullptr.




### `SetPlayerId` <a id="structFRHAPI__SessionPlayer_1a1904aa3344becb59e73b470231169f47"></a>

void SetPlayerId(int32 NewValue)

#### Parameters

| Type | Name |
|------|------|
|int32|NewValue|

#### Description

Sets the value of PlayerId_Optional and also sets PlayerId_IsSet to true.




### `ClearPlayerId` <a id="structFRHAPI__SessionPlayer_1aa5068324d303c0ec84db535158fb345e"></a>

void ClearPlayerId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of PlayerId_Optional and sets PlayerId_IsSet to false.




### `IsPlayerIdDefaultValue` <a id="structFRHAPI__SessionPlayer_1aebb63b6bda892c9b01eba35b22163697"></a>

bool IsPlayerIdDefaultValue()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns true if PlayerId_Optional is set and matches the default value.




### `SetPlayerIdToDefault` <a id="structFRHAPI__SessionPlayer_1af1f33f4f89bbc5c6685fe0d700d0c65d"></a>

void SetPlayerIdToDefault()

#### Parameters

| Type | Name |
|------|------|

#### Description

Sets the value of PlayerId_Optional to its default and also sets PlayerId_IsSet to true.




### `GetPlayerUuid` <a id="structFRHAPI__SessionPlayer_1aff80c8a8801c3da78cef13c02b4c0358"></a>

FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `GetPlayerUuid` <a id="structFRHAPI__SessionPlayer_1ac79ff0f30d08521f2f5e7b81041319f9"></a>

const FGuid & GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of PlayerUuid.




### `SetPlayerUuid` <a id="structFRHAPI__SessionPlayer_1afca7d66e4c75dbc1d88e130c7eeff780"></a>

void SetPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of PlayerUuid.




### `GetStatus` <a id="structFRHAPI__SessionPlayer_1a6c1dcd9332956742bb36aee64fd9f376"></a>

ERHAPI_SessionPlayerStatus & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status.




### `GetStatus` <a id="structFRHAPI__SessionPlayer_1a02ca2506bc5bc82b3429833efbbccb65"></a>

const ERHAPI_SessionPlayerStatus & GetStatus()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Status.




### `SetStatus` <a id="structFRHAPI__SessionPlayer_1a36b3c46c65ab4deaf64a2a976c511cdf"></a>

void SetStatus(ERHAPI_SessionPlayerStatus NewValue)

#### Parameters

| Type | Name |
|------|------|
|ERHAPI_SessionPlayerStatus|NewValue|

#### Description

Sets the value of Status.




### `GetInvitingPlayerUuid` <a id="structFRHAPI__SessionPlayer_1acd45c7b28d8030a4e93eb540b1d1be22"></a>

FGuid & GetInvitingPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.




### `GetInvitingPlayerUuid` <a id="structFRHAPI__SessionPlayer_1a54de85369af1e47e840f21f47a9d3abd"></a>

const FGuid & GetInvitingPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of InvitingPlayerUuid_Optional, regardless of it having been set.




### `GetInvitingPlayerUuid` <a id="structFRHAPI__SessionPlayer_1a945d4425d54f813d530b4786286a1026"></a>

const FGuid & GetInvitingPlayerUuid(const FGuid & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|DefaultValue|

#### Description

Gets the value of InvitingPlayerUuid_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInvitingPlayerUuid` <a id="structFRHAPI__SessionPlayer_1a9a66f2679f58a2fe39581512c7bb808d"></a>

bool GetInvitingPlayerUuid(FGuid & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid &|OutValue|

#### Description

Fills OutValue with the value of InvitingPlayerUuid_Optional and returns true if it has been set, otherwise returns false.




### `GetInvitingPlayerUuidOrNull` <a id="structFRHAPI__SessionPlayer_1a3b147bc23a9db14aedd6b8c851bc71a8"></a>

FGuid * GetInvitingPlayerUuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.




### `GetInvitingPlayerUuidOrNull` <a id="structFRHAPI__SessionPlayer_1a79e1d75785329cc7b9787fe811c77b1a"></a>

const FGuid * GetInvitingPlayerUuidOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to InvitingPlayerUuid_Optional, if it has been set, otherwise returns nullptr.




### `SetInvitingPlayerUuid` <a id="structFRHAPI__SessionPlayer_1acc906044eca07ceb43ed52a1a5964642"></a>

void SetInvitingPlayerUuid(FGuid NewValue)

#### Parameters

| Type | Name |
|------|------|
|FGuid|NewValue|

#### Description

Sets the value of InvitingPlayerUuid_Optional and also sets InvitingPlayerUuid_IsSet to true.




### `ClearInvitingPlayerUuid` <a id="structFRHAPI__SessionPlayer_1a108279eb6926eafff034a612ab51fc69"></a>

void ClearInvitingPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of InvitingPlayerUuid_Optional and sets InvitingPlayerUuid_IsSet to false.




### `GetSourceSessionId` <a id="structFRHAPI__SessionPlayer_1a58827da36bffbc5e3cb93591bce2cb0c"></a>

FString & GetSourceSessionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SourceSessionId_Optional, regardless of it having been set.




### `GetSourceSessionId` <a id="structFRHAPI__SessionPlayer_1a1b024df8ab7ead95079f03326e85510f"></a>

const FString & GetSourceSessionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of SourceSessionId_Optional, regardless of it having been set.




### `GetSourceSessionId` <a id="structFRHAPI__SessionPlayer_1ad13a3ed971d11fac19977a613a105931"></a>

const FString & GetSourceSessionId(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of SourceSessionId_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetSourceSessionId` <a id="structFRHAPI__SessionPlayer_1abcba87f13817fe0a6cacda017f742601"></a>

bool GetSourceSessionId(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of SourceSessionId_Optional and returns true if it has been set, otherwise returns false.




### `GetSourceSessionIdOrNull` <a id="structFRHAPI__SessionPlayer_1a6fbb24ae58218124424cf207a0bf47af"></a>

FString * GetSourceSessionIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SourceSessionId_Optional, if it has been set, otherwise returns nullptr.




### `GetSourceSessionIdOrNull` <a id="structFRHAPI__SessionPlayer_1a258603cdb48ada4a5688a0c788d677b3"></a>

const FString * GetSourceSessionIdOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to SourceSessionId_Optional, if it has been set, otherwise returns nullptr.




### `SetSourceSessionId` <a id="structFRHAPI__SessionPlayer_1a5642e6719ed0719b0842b60eda7d0e09"></a>

void SetSourceSessionId(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of SourceSessionId_Optional and also sets SourceSessionId_IsSet to true.




### `ClearSourceSessionId` <a id="structFRHAPI__SessionPlayer_1a94530a246d8f063c45837aef156267d5"></a>

void ClearSourceSessionId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of SourceSessionId_Optional and sets SourceSessionId_IsSet to false.




### `GetCustomData` <a id="structFRHAPI__SessionPlayer_1a5eff9bc325194bc90dd734562a8c8b89"></a>

TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__SessionPlayer_1ae6385310f74507afa449e27aeb309964"></a>

const TMap< FString, FString > & GetCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CustomData_Optional, regardless of it having been set.




### `GetCustomData` <a id="structFRHAPI__SessionPlayer_1acb1a7662127097cd97db6ee66bce6a45"></a>

const TMap< FString, FString > & GetCustomData(const TMap< FString, FString > & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const TMap< FString, FString > &|DefaultValue|

#### Description

Gets the value of CustomData_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCustomData` <a id="structFRHAPI__SessionPlayer_1a84827d47bd6680f74e33e477d5ebea53"></a>

bool GetCustomData(TMap< FString, FString > & OutValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString > &|OutValue|

#### Description

Fills OutValue with the value of CustomData_Optional and returns true if it has been set, otherwise returns false.




### `GetCustomDataOrNull` <a id="structFRHAPI__SessionPlayer_1a44de6cafe64a30947bb032a3dc6cb4f4"></a>

TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `GetCustomDataOrNull` <a id="structFRHAPI__SessionPlayer_1a89a25ab11203738ea71a04923ee52078"></a>

const TMap< FString, FString > * GetCustomDataOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CustomData_Optional, if it has been set, otherwise returns nullptr.




### `SetCustomData` <a id="structFRHAPI__SessionPlayer_1a12ea2cec1d05e710a554a0eb60d65d51"></a>

void SetCustomData(TMap< FString, FString > NewValue)

#### Parameters

| Type | Name |
|------|------|
|TMap< FString, FString >|NewValue|

#### Description

Sets the value of CustomData_Optional and also sets CustomData_IsSet to true.




### `ClearCustomData` <a id="structFRHAPI__SessionPlayer_1a711c019f6e123fbd65355b61e3d16b23"></a>

void ClearCustomData()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CustomData_Optional and sets CustomData_IsSet to false.




### `GetVersion` <a id="structFRHAPI__SessionPlayer_1a7b8c88818bdb429e4d8c48ab5aca5fd6"></a>

FString & GetVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Version_Optional, regardless of it having been set.




### `GetVersion` <a id="structFRHAPI__SessionPlayer_1af89e969acd8d16449783d4d5a04e2bf8"></a>

const FString & GetVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Version_Optional, regardless of it having been set.




### `GetVersion` <a id="structFRHAPI__SessionPlayer_1acc5a6efe5394c1412ef6a39e06a4fe2b"></a>

const FString & GetVersion(const FString & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FString &|DefaultValue|

#### Description

Gets the value of Version_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetVersion` <a id="structFRHAPI__SessionPlayer_1a57c4d76dd7690b0062d7799e80e333af"></a>

bool GetVersion(FString & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FString &|OutValue|

#### Description

Fills OutValue with the value of Version_Optional and returns true if it has been set, otherwise returns false.




### `GetVersionOrNull` <a id="structFRHAPI__SessionPlayer_1a0d2d6ab091911afd5e8befdfd31a6ff6"></a>

FString * GetVersionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.




### `GetVersionOrNull` <a id="structFRHAPI__SessionPlayer_1a11b5151b3217305efcd38671cdfc44cf"></a>

const FString * GetVersionOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Version_Optional, if it has been set, otherwise returns nullptr.




### `SetVersion` <a id="structFRHAPI__SessionPlayer_1a583d1947aeef7a39ee44ff38bfac4c2a"></a>

void SetVersion(FString NewValue)

#### Parameters

| Type | Name |
|------|------|
|FString|NewValue|

#### Description

Sets the value of Version_Optional and also sets Version_IsSet to true.




### `ClearVersion` <a id="structFRHAPI__SessionPlayer_1a118c09e3ead5ffc3d5a533d39d429d8c"></a>

void ClearVersion()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Version_Optional and sets Version_IsSet to false.




### `GetClientSettings` <a id="structFRHAPI__SessionPlayer_1ae528a51f129695154021c0e793018c92"></a>

[FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) & GetClientSettings()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientSettings_Optional, regardless of it having been set.




### `GetClientSettings` <a id="structFRHAPI__SessionPlayer_1a460f99294350394cc6d722c31d487605"></a>

const [FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) & GetClientSettings()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of ClientSettings_Optional, regardless of it having been set.




### `GetClientSettings` <a id="structFRHAPI__SessionPlayer_1a773783f32107601c280fede4ffd61df6"></a>

const [FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) & GetClientSettings(const [FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) &|DefaultValue|

#### Description

Gets the value of ClientSettings_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetClientSettings` <a id="structFRHAPI__SessionPlayer_1a2fe4bca124fda7bac88a901c77f7bb73"></a>

bool GetClientSettings([FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) &|OutValue|

#### Description

Fills OutValue with the value of ClientSettings_Optional and returns true if it has been set, otherwise returns false.




### `GetClientSettingsOrNull` <a id="structFRHAPI__SessionPlayer_1a9a18ebe5edbdc58a5d26d11373abb7de"></a>

[FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) * GetClientSettingsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.




### `GetClientSettingsOrNull` <a id="structFRHAPI__SessionPlayer_1a9486a2cd28010c8e35d37a75533a3131"></a>

const [FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) * GetClientSettingsOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to ClientSettings_Optional, if it has been set, otherwise returns nullptr.




### `SetClientSettings` <a id="structFRHAPI__SessionPlayer_1a5a0215b63901be5413393030ecc16973"></a>

void SetClientSettings([FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_ClientSettings](/unreal-plugins/all/structfrhapi__clientsettings/#structFRHAPI__ClientSettings)|NewValue|

#### Description

Sets the value of ClientSettings_Optional and also sets ClientSettings_IsSet to true.




### `ClearClientSettings` <a id="structFRHAPI__SessionPlayer_1a821f58c31fd1c68d79b8059e68050e46"></a>

void ClearClientSettings()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of ClientSettings_Optional and sets ClientSettings_IsSet to false.




### `GetCrossplayPreferences` <a id="structFRHAPI__SessionPlayer_1a5389b335b1a88ce3987698a5d375430d"></a>

[FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) & GetCrossplayPreferences()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.




### `GetCrossplayPreferences` <a id="structFRHAPI__SessionPlayer_1a6c4ea67788f54d4479f6e1d8ad6a4665"></a>

const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) & GetCrossplayPreferences()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of CrossplayPreferences_Optional, regardless of it having been set.




### `GetCrossplayPreferences` <a id="structFRHAPI__SessionPlayer_1a5ee60d780f4728f1f7f46910f055d690"></a>

const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) & GetCrossplayPreferences(const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) &|DefaultValue|

#### Description

Gets the value of CrossplayPreferences_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetCrossplayPreferences` <a id="structFRHAPI__SessionPlayer_1ad343d91946f076520d5c3622da363df9"></a>

bool GetCrossplayPreferences([FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) & OutValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) &|OutValue|

#### Description

Fills OutValue with the value of CrossplayPreferences_Optional and returns true if it has been set, otherwise returns false.




### `GetCrossplayPreferencesOrNull` <a id="structFRHAPI__SessionPlayer_1a71c83a819f2b88a8326644575317fd19"></a>

[FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) * GetCrossplayPreferencesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.




### `GetCrossplayPreferencesOrNull` <a id="structFRHAPI__SessionPlayer_1ac2e2424adff3522117846bb62581b695"></a>

const [FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) * GetCrossplayPreferencesOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to CrossplayPreferences_Optional, if it has been set, otherwise returns nullptr.




### `SetCrossplayPreferences` <a id="structFRHAPI__SessionPlayer_1a1ce0e1ce8882e124d253029609cf619b"></a>

void SetCrossplayPreferences([FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences) NewValue)

#### Parameters

| Type | Name |
|------|------|
|[FRHAPI_CrossplayPreferences](/unreal-plugins/all/structfrhapi__crossplaypreferences/#structFRHAPI__CrossplayPreferences)|NewValue|

#### Description

Sets the value of CrossplayPreferences_Optional and also sets CrossplayPreferences_IsSet to true.




### `ClearCrossplayPreferences` <a id="structFRHAPI__SessionPlayer_1aab20b5ceba1df5862b8b103d6c6352ea"></a>

void ClearCrossplayPreferences()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of CrossplayPreferences_Optional and sets CrossplayPreferences_IsSet to false.




### `GetInvited` <a id="structFRHAPI__SessionPlayer_1a14d0bbb2f3a437ad4d8110490d682ba9"></a>

FDateTime & GetInvited()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Invited_Optional, regardless of it having been set.




### `GetInvited` <a id="structFRHAPI__SessionPlayer_1ad379c6e768e0c56ee579e44d08eade13"></a>

const FDateTime & GetInvited()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Invited_Optional, regardless of it having been set.




### `GetInvited` <a id="structFRHAPI__SessionPlayer_1a47cb1f05a41d417c3f9ed8e9aa88f66f"></a>

const FDateTime & GetInvited(const FDateTime & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FDateTime &|DefaultValue|

#### Description

Gets the value of Invited_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetInvited` <a id="structFRHAPI__SessionPlayer_1a76c27fdddda2985942a56a424bbd06b9"></a>

bool GetInvited(FDateTime & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime &|OutValue|

#### Description

Fills OutValue with the value of Invited_Optional and returns true if it has been set, otherwise returns false.




### `GetInvitedOrNull` <a id="structFRHAPI__SessionPlayer_1a7976724ad9e4aaf6ea7edf6ad798a12c"></a>

FDateTime * GetInvitedOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Invited_Optional, if it has been set, otherwise returns nullptr.




### `GetInvitedOrNull` <a id="structFRHAPI__SessionPlayer_1a35b6948791f2d659c1fa54dbd5e32d16"></a>

const FDateTime * GetInvitedOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Invited_Optional, if it has been set, otherwise returns nullptr.




### `SetInvited` <a id="structFRHAPI__SessionPlayer_1a1a96f1444823fa4ed7bb2e26cea4e632"></a>

void SetInvited(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of Invited_Optional and also sets Invited_IsSet to true.




### `ClearInvited` <a id="structFRHAPI__SessionPlayer_1aa6b1a742b86c52aa02ee01441a2bf2d8"></a>

void ClearInvited()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Invited_Optional and sets Invited_IsSet to false.




### `GetJoined` <a id="structFRHAPI__SessionPlayer_1abecbf72283ecb262b1152bd4b9b60f5b"></a>

FDateTime & GetJoined()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Joined_Optional, regardless of it having been set.




### `GetJoined` <a id="structFRHAPI__SessionPlayer_1a5a9776015def077c57f79ac3a9ea340e"></a>

const FDateTime & GetJoined()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the value of Joined_Optional, regardless of it having been set.




### `GetJoined` <a id="structFRHAPI__SessionPlayer_1a25c39669436de7c50e238fd75931d266"></a>

const FDateTime & GetJoined(const FDateTime & DefaultValue)

#### Parameters

| Type | Name |
|------|------|
|const FDateTime &|DefaultValue|

#### Description

Gets the value of Joined_Optional, if it has been set, otherwise it returns DefaultValue.




### `GetJoined` <a id="structFRHAPI__SessionPlayer_1a5b395ef14a3539880ebb60c8388ad570"></a>

bool GetJoined(FDateTime & OutValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime &|OutValue|

#### Description

Fills OutValue with the value of Joined_Optional and returns true if it has been set, otherwise returns false.




### `GetJoinedOrNull` <a id="structFRHAPI__SessionPlayer_1abcecfd21a9d0658857f355def398d3e1"></a>

FDateTime * GetJoinedOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Joined_Optional, if it has been set, otherwise returns nullptr.




### `GetJoinedOrNull` <a id="structFRHAPI__SessionPlayer_1a8ea013f03ae714cb143675f500dd7dfa"></a>

const FDateTime * GetJoinedOrNull()

#### Parameters

| Type | Name |
|------|------|

#### Description

Returns a pointer to Joined_Optional, if it has been set, otherwise returns nullptr.




### `SetJoined` <a id="structFRHAPI__SessionPlayer_1a4d113ac251cab541e6a0f442aeb6ce50"></a>

void SetJoined(FDateTime NewValue)

#### Parameters

| Type | Name |
|------|------|
|FDateTime|NewValue|

#### Description

Sets the value of Joined_Optional and also sets Joined_IsSet to true.




### `ClearJoined` <a id="structFRHAPI__SessionPlayer_1a8b9c20d24a494d6a9c252112833d06e2"></a>

void ClearJoined()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clears the value of Joined_Optional and sets Joined_IsSet to false.





