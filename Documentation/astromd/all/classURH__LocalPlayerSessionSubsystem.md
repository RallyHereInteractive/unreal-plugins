---
title: URH_LocalPlayerSessionSubsystem Class
---Inherits from [URH_LocalPlayerSubsystemPlugin](/unreal-plugins/all/classurh__localplayersubsystemplugin/#classURH__LocalPlayerSubsystemPlugin)

Inherits from [IRH_SessionOwnerInterface](/unreal-plugins/all/classirh__sessionownerinterface/#classIRH__SessionOwnerInterface)

Subsystem to manage sessions for the local player.

## Summary
| Kind | View | Description |
|------|------|-------------|
|FRH_OnSessionUpdatedMulticastDynamicDelegate|[BLUEPRINT_OnSessionUpdatedDelegate](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a28a48c4ed60e8b00ad9de1f9b39e1217)|Multicast delegate triggered when a session managed by this subsystem is updated.|
|FRH_OnSessionUpdatedMulticastDynamicDelegate|[BLUEPRINT_OnSessionAddedDelegate](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a612a36a3c5862b352bea9c20b157fb1e)|Multicast delegate triggered when a session managed by this subsystem is added.|
|FRH_OnSessionUpdatedMulticastDynamicDelegate|[BLUEPRINT_OnSessionRemovedDelegate](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a66e481e48c38b559766e07cf4b89b4f9)|Multicast delegate triggered when a session managed by this subsystem is removed.|
|FRH_OnSessionUpdatedMulticastDynamicDelegate|[BLUEPRINT_OnSessionExpirationCompleteDelegate](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a5eb7d010dfe8a9c83b977c694c3f8fd3)|Multicast delegate triggered when a session managed by this subsystem is fully expired (happens after removal)|
|FRH_OnLoginPollSessionsCompleteMulticastDynamicDelegate|[BLUEPRINT_OnLoginPollSessionsCompleteDelegate](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a4ad0823710a468816be02f3e600164ad)|Multicast delegate triggered when the initial poll after login is complete, to do first-time setup.|
|FRH_OnFailedToJoinPlatformSessionMulticastDynamicDelegate|[BLUEPRINT_OnFailedToJoinPlatformSessionDelegate](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a9c5890ac06e22e12e436ab439603a57a)|Multicast delegate triggered when we fail to join a platform session that we've accepted an invite to.|
|FRH_OnSessionUpdatedMulticastDelegate|[OnSessionUpdatedDelegate](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a87ec0a5447e17ebbbda133342770d960)|Multicast delegate triggered when a session managed by this subsystem is updated.|
|FRH_OnSessionUpdatedMulticastDelegate|[OnSessionAddedDelegate](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a34c015e300be4c0474addf8f6d6d947b)|Multicast delegate triggered when a session managed by this subsystem is added.|
|FRH_OnSessionUpdatedMulticastDelegate|[OnSessionRemovedDelegate](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1af13b47604f229daf45aa56fdb25554cc)|Multicast delegate triggered when a session managed by this subsystem is removed.|
|FRH_OnSessionUpdatedMulticastDelegate|[OnSessionExpirationCompleteDelegate](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a897c37a8854ad40a5ab9f75129a57e74)|Multicast delegate triggered when a session managed by this subsystem is fully expired (happens after removal)|
|FRH_OnLoginPollSessionsCompleteMulticastDelegate|[OnLoginPollSessionsCompleteDelegate](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1adf39311c4affa07453f6dd6cfeab6203)|Multicast delegate triggered when the initial poll after login is complete, to do first-time setup.|
|FRH_OnFailedToJoinPlatformSessionMulticastDelegate|[OnFailedToJoinPlatformSessionDelegate](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1aaa731f4db12fb478a38ca11784438b63)|Multicast delegate triggered when we fail to join a platform session that we've accepted an invite to.|
|FRH_AutoPollerPtr|[Poller](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a042e9dee585644aa339fd3b3b8e6ad12)|Poller for sessions.|
|TMap< FString, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) >|[Templates](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a78953314d26e12a0aa43abd5828fe912)|Map of Template Ids to Session Templates.|
|TOptional< FString >|[AllSessionsETag](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a3b99704446608834a66a9def184c133b)|ETag of last QueryAllSessions call response.|
|TOptional< FString >|[AllTemplatesETag](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a5479e5160d85fc15ecfc553a897d5bea)|ETag of last QueryAllSessionTemplates call response.|
|TOptional< FOnlineSessionSearchResult >|[PlatformSessionToJoinOnUserChange](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1afcd78f39dfd5aebd442d959d6212fbaa)|OSS Session that we need to join upon user change (ex: login).|
|TMap< FString, [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * >|[Sessions](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a134d1e08da7eae1d03ba4b5a1ee419d6)|Map of Session Ids to Sessions we are in.|
|TMap< FString, [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * >|[ExpiringSessions](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1ad1bcc3afd124b033ccfba4b001cebbe2)|Map of Session Ids to Sessions objects that may be in the process of cleaning themselves up.|
|TMap< FString, [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) >|[DeferredSessionUpdates](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a9f22ebb821fcb358e5e277acbef28010)|Map of Session Ids to Sessions updates we could not process for some reason, such as race conditions.|
|TMap< FString, [URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * >|[PlatformSyncers](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1ab601abbf8833c31cb45ccde7d481d3de)|Map of Session Ids to their Platform Session Syncers.|
||[URH_LocalPlayerSessionSubsystem](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a038813e71ac05adf08f219b29d703891)()||
|void|[Initialize](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a0f380ce4b08ba9e13a06496939bc14d7)()|Initialize the subsystem.|
|void|[Deinitialize](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a120580f60e2559621a29074257000119)()|Deinitialize the subsystem.|
|FAuthContextPtr|[GetSessionAuthContext](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a6eb6370bc861ae0aa43831888996e885)()|Get auth context for session (IRH_SessionOwnerInterface requirement)|
|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *|[GetSessionById](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1ae9b547c5444917b422f0faf4f9f302f7)(const FString & SessionId)|Get session by its Session Id.|
|TArray< [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * >|[GetSessionsByType](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1ada97ad5b91df96d7c12906654dff2efc)(const FString & Type)|Get all joined and invited sessions by SessionType.|
|TArray< [URH_InvitedSession](/unreal-plugins/all/classurh__invitedsession/#classURH__InvitedSession) * >|[GetInvitedSessionsByType](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a2062f6db160d2e691043384daba8a0c7)(const FString & Type)|Get all invited sessions by SessionType.|
|TArray< [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * >|[GetJoinedSessionsByType](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a8ef4d278c989d7ce7d27066f763d6a6b)(const FString & Type)|Get all joined sessions by SessionType.|
|FORCEINLINE [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *|[GetFirstSessionByType](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a01900cd4029717129f2a9b58ed0393bf)(const FString & Type)|Get first joined or invited sessions by SessionType (useful for titles that ensure only one of a given session type will exist)|
|FORCEINLINE [URH_InvitedSession](/unreal-plugins/all/classurh__invitedsession/#classURH__InvitedSession) *|[GetFirstInvitedSessionByType](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a6425315f9172f8dfa5f8c91c134906cf)(const FString & Type)|Get first invited sessions by SessionType (useful for titles that ensure only one of a given session type will exist)|
|FORCEINLINE [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *|[GetFirstJoinedSessionByType](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1aa414c134992b703f331750fb0efe7ad6)(const FString & Type)|Get first joined sessions by SessionType (useful for titles that ensure only one of a given session type will exist)|
|[URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *|[GetFirstActiveSession](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a520c98308877db871add24d0dd4b4b54)()|Get first "active" session (session which is IsActive())|
|FORCEINLINE TArray< [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * >|[GetSessions](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1ae82fb3ff0c18d5c55cc163b935ff56f8)()|Get an array of all sessions controlled by this system.|
|FORCEINLINE bool|[IsInSession](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1ad5bfcc3b466927d7d92f94bff1ba31d5)(const FString & SessionId)|Utility function to determine if local player is a member of that session.|
|class [URH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem) *|[GetPlayerInfoSubsystem](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a8978774a71778d9d5a9b4f20f1ee85f6)()|Utility function to look up the player info subsystem (IRH_SessionOwnerInterface requirement)|
|IOnlineSubsystem *|[GetOSS](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a236725daa5e1b49d96c04a2da868be04)()|Utility function to look up the OnlineSubsystem to use for session calls (IRH_SessionOwnerInterface requirement)|
|FUniqueNetIdWrapper|[GetOSSUniqueId](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a242dea7f5ff3092050c7d15ba05dc8a0)()|Utility function to look up the UniqueNetId to use for OnlineSubsystem calls (IRH_SessionOwnerInterface requirement)|
|FGuid|[GetPlayerUuid](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1aaf5587019c1eb05ce9e42c72541dd802)()|Gets the Player UUID to use for player related calls (can be invalid)|
|[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) *|[GetPlatformSyncerByRHSessionId](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a4ed75c6f69c267d419355a48e64db6fe)(const FString & SessionId)|Gets the platform session synchronization object for a given session id (IRH_SessionOwnerInterface requirement)|
|[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) *|[GetPlatformSyncerByPlatformSessionId](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a498582f9ba28c7472e33004de090efe7)(const FUniqueNetIdRepl & PlatformSessionId)|Gets the platform session synchronization object for a given platform session id.|
|void|[SetPlatformSessionToJoinOnUserChange](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a7b32f021e042bf401d2156764df2babc)(const FOnlineSessionSearchResult & Session)|Set a platform session to join upon the next user change.|
|void|[ClearPlatformSessionToJoinOnUserChange](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1afa5db7d0b7302957dd89c4a7b9f78cb5)()|Clear a platform session to join upon the next user change.|
|void|[CreateOrJoinSessionByType](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1ae987d7bbdbc819106e7e00a06a08d918)(const [FRHAPI_CreateOrJoinRequest](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest) & CreateParams, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Utility function to Create or Join a session by a given SessionType (most times will create a session, but Hub join rules may do a Join instead)|
|void|[BLUEPRINT_CreateOrJoinSessionByType](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a3cd18e8fb059a7844a60c3deebd8acb5)(const [FRHAPI_CreateOrJoinRequest](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest) & CreateParams, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of CreateOrJoinSessionByType.|
|void|[JoinSessionById](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a81439a14711f1519f5a4c109574d0527)(const FString & SessionId, const FRH_OnSessionUpdatedDelegateBlock & Delegate)|Utility function to Join a session by SessionId.|
|void|[BLUEPRINT_JoinSessionById](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a1d00b98420ce2333f9f19313998a139d)(const FString & SessionId, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)|Blueprint compatible version of JoinSessionById.|
|void|[ImportAPISession](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a21c227f5c4a783adacd79c25714aa2e3)(const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) & Session)|Imports a new or updated session from the API into this subsystem (IRH_SessionOwnerInterface requirement)|
|void|[ImportAPITemplate](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1ae7616f99c6aa669e529aad3cd0a0451f)(const [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) & Template)|Imports a new session template from the API into this subsystem (IRH_SessionOwnerInterface requirement)|
|void|[ReconcileAPISessions](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1aede0956db4c8e8626fa239c16cb3d61e)(const TArray< FString > & SessionIds, const TOptional< FString > & ETag)|Reconciles the list of session ids with this subsystem, removing any sessions that are no longer in the list, then updates the stored ETag for the local player's session list (IRH_SessionOwnerInterface requirement)|
|void|[ReconcileAPITemplates](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a4f63fd2f8b8a6f34c01cc45022eeee71)(const TArray< FString > & InTemplates, const TOptional< FString > & ETag)|Reconciles the list of template SessionTypes with this subsystem, removing any templates that are no longer in the list, then updates the stored ETag for the local player's templatelist (IRH_SessionOwnerInterface requirement)|
|bool|[GetTemplate](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a237eee46e92fabeb77c426fce7e857d8)(const FString & Type, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) & Template)|Looks up a template from within this subsystem (IRH_SessionOwnerInterface requirement)|
|FORCEINLINE TArray< [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) >|[GetTemplates](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a4c06df84a31add059852a36de3959038)()|Gets a list of all templates in this subsystem.|
|TOptional< FString >|[GetETagForAllSessionsPoll](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a95c37ca700d9e30f3cc46c79055208b2)()|Looks up a ETag to use when querying for session membership (IRH_SessionOwnerInterface requirement)|
|TOptional< FString >|[GetETagForAllTemplatesPoll](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1aa3e56b3a6b8466282f98f33fa444b814)()|Looks up a ETag to use when querying for template information (IRH_SessionOwnerInterface requirement)|
|TArray< [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * >|[GetAllSessionsForPolling](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a4dbf97c53be79cdeced20be7d9176378)()|Looks up all sessions to process when polling if ETags match (IRH_SessionOwnerInterface requirement)|
|void|[SearchForSessions](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a2d981ffabd1a06a57e12cf2f64e991c5)(const [FRH_SessionBrowserSearchParams](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams) & Params, const FRH_OnSessionSearchCompleteDelegateBlock & Delegate)|Utility function that searches the session browser cache for information on browser sessions.|
|void|[BLUEPRINT_SearchForSessions](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a1fc6352551fdde138995e52ccdf9cb66)(const [FRH_SessionBrowserSearchParams](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams) & Params, const FRH_OnSessionSearchCompleteDynamicDelegate & Delegate)|Blueprint compatible version of SearchForSessions.|
|void|[StartPolling](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a46f1de5fd5535924cb742f82878b949a)()|Start polling for session template and membership updates.|
|void|[StopPolling](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1ae11fbca181c0c52bd17cc06b701a12e1)()|Stop polling for session template and membership updates.|
|void|[PollForUpdate](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a1a13b1d7c4f1993e553f95ec10966c5b)(const FRH_PollCompleteFunc & Delegate)|Poll function for use with FRH_AutoPoller.|
|void|[ForcePollForUpdate](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a6f7a77ff7630f1beb1aa58e3943adda1)(bool bClearETag)|Force an immediate poll.|
|float|[GetPollTimeRemaining](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a27ce3d0bc063b3466f74c6b5e735696c)()|Get the current time remaining on poll cycle, or -1.f if not polling.|
|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *|[CreateOrUpdateRHSession](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a2efe4a073341684f83e5da781df7a9f0)(const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) & Session, const ERHAPI_SessionPlayerStatus & LocalPlayerStatus)|Creates or updates a specific session for the local player.|
|bool|[LocalPlayerStatusFromSession](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1aa0bec72de8c9da10cb97e78730c5cb79)(const [FRHAPI_Session](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session) & Session, ERHAPI_SessionPlayerStatus & Status)|Gets the local player status in a specific session.|
|void|[RemoveSessionById](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a7e790f89c514d7210c5b58b947cebec2)(const FString & SessionId)|Removes a cached session for the local player, this does NOT try to leave it.|
|void|[RemoveSession](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1ac956ad61bb35b46c9cb067e247e8b06f)(const [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * Session)|Removes a cached session for the local player, this does NOT try to leave it.|
|void|[OnExpirationComplete](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1ae8b9736ce9f79dd68014b3f01df9fd1f)([URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * Session)|Called when a session the local player is part of expires.|
|bool|[PreprocessAPISessionImport](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a9c559f45b88f7a21f62dcdf6476fcbea)(const [FRHAPI_Session](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session) & Session, ERHAPI_SessionPlayerStatus & Status)|Attepts to preprocess an API session.|
|void|[OnUserChanged](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a26fbf14bcba6e280614f699fb5e3711c)(const FGuid & OldPlayerUuid, class [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * OldLocalPlayerInfo)|Base handling when the local user changes, override to provide functionality.|
|void|[InitPropertiesWithDefaultValues](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a8d62c9d3f5c42d59b77fa894ce226ad4)()|Initializes the subsystem with defaults for its cached data.|
|void|[HandleNotification](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1aaa005ba728065e1b159a4d61906eae89)(const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) & Notification, const FString & APIName, const TArray< FString > & APIParams)|Handle a notification from the notification API.|
|[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) *|[CreatePlatformSyncer](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a689a1f5d6391c55118c8467e5fe2e9ce)([URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session)|Creates a Platform Session Syncer for the local player.|
|bool|[FilterOSSCallbackUser](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1ac3f8a2189935d62ddee4f0c523028264)(const int32 ControllerId)|Checks if the online subsystem call is for the local user.|
|bool|[FilterOSSCallbackUser](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a499f53a4e277ea57c023eca530e7edd1)(const FUniqueNetId & UniqueNetId)|Checks if the online subsystem call is for the local user.|
|void|[OnPlatformActivityActivation](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1aa06aadafbc3aebee2e79d0114db792a3)(const FUniqueNetId & LocalUserId, const FString & ActivityId, const FOnlineSessionSearchResult * SessionInfo)|Handles the response of an online subsystem activity activation.|
|void|[OnPlatformSessionInviteAccepted](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a8dc7b270d5a63dc6024cc5a0422ea032)(const bool bSuccesful, const int32 ControllerId, FUniqueNetIdPtr UserId, const FOnlineSessionSearchResult & Session)|Handles the response of an online subsystem session invite.|
|void|[OnPlatformSessionCreated](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a58f090980ad25944e7f9fc974b6d3ed2)(FName SessionName, bool bSuccess)|Handles the response of an online subsystem session creation.|
|void|[OnPlatformSessionJoined](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a407cb4e27d487bbc1f9530a7b8a3f802)(FName SessionName, EOnJoinSessionCompleteResult::Type Result)|Handles the response of an online subsystem session join.|
|void|[OnPlatformSessionStarted](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a0c299fea961f369123ca438e318ba266)(FName SessionName, bool bSuccess)|Handles the response of an online subsystem session started.|
|void|[OnPlatformSessionEnded](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1af0572f80f29da197fabf336175c8fcb2)(FName SessionName, bool bSuccess)|Handles the response of an online subsystem session ended.|
|void|[OnPlatformSessionDestroyed](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a635b650a45ccde86c301b7f88aa0484d)(FName SessionName, bool bSuccess)|Handles the response of an online subsystem session destroy.|
|void|[OnPlatformSessionParticipantsChanged](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a7d2554778e7116195c8c783eab1b1488)(FName SessionName, const FUniqueNetId & UniqueNetId, bool bJoined)|Called from other Platform Session Participant functions to reconcile the state of the platform syncer.|
|void|[OnPlatformSessionParticipantChange](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a18ac6fdc4538f89361f5e23d27b0fcd3)(FName SessionName, const FUniqueNetId & UniqueNetId, bool bJoined)|Handles the response of an online subsystem session participant change.|
|void|[OnPlatformSessionParticipantRemoved](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a19fcc5c2c30710932f1757dbe0ce3666)(FName SessionName, const FUniqueNetId & UniqueNetId)|Handles the response of an online subsystem session participant remove.|
|void|[HandlePollAllSessionsComplete](/unreal-plugins/all/classurh__localplayersessionsubsystem/#classURH__LocalPlayerSessionSubsystem_1a723518fadb2e8fb85f0a624debb53b91)(bool bSuccess, const TArray< FString > & SessionIds)|Handles the response of polling all sessions.|
## Public Attributes



### `BLUEPRINT_OnSessionUpdatedDelegate` <a id="classURH__LocalPlayerSessionSubsystem_1a28a48c4ed60e8b00ad9de1f9b39e1217"></a>

`FRH_OnSessionUpdatedMulticastDynamicDelegate URH_LocalPlayerSessionSubsystem::BLUEPRINT_OnSessionUpdatedDelegate`

Multicast delegate triggered when a session managed by this subsystem is updated.




### `BLUEPRINT_OnSessionAddedDelegate` <a id="classURH__LocalPlayerSessionSubsystem_1a612a36a3c5862b352bea9c20b157fb1e"></a>

`FRH_OnSessionUpdatedMulticastDynamicDelegate URH_LocalPlayerSessionSubsystem::BLUEPRINT_OnSessionAddedDelegate`

Multicast delegate triggered when a session managed by this subsystem is added.




### `BLUEPRINT_OnSessionRemovedDelegate` <a id="classURH__LocalPlayerSessionSubsystem_1a66e481e48c38b559766e07cf4b89b4f9"></a>

`FRH_OnSessionUpdatedMulticastDynamicDelegate URH_LocalPlayerSessionSubsystem::BLUEPRINT_OnSessionRemovedDelegate`

Multicast delegate triggered when a session managed by this subsystem is removed.




### `BLUEPRINT_OnSessionExpirationCompleteDelegate` <a id="classURH__LocalPlayerSessionSubsystem_1a5eb7d010dfe8a9c83b977c694c3f8fd3"></a>

`FRH_OnSessionUpdatedMulticastDynamicDelegate URH_LocalPlayerSessionSubsystem::BLUEPRINT_OnSessionExpirationCompleteDelegate`

Multicast delegate triggered when a session managed by this subsystem is fully expired (happens after removal)




### `BLUEPRINT_OnLoginPollSessionsCompleteDelegate` <a id="classURH__LocalPlayerSessionSubsystem_1a4ad0823710a468816be02f3e600164ad"></a>

`FRH_OnLoginPollSessionsCompleteMulticastDynamicDelegate URH_LocalPlayerSessionSubsystem::BLUEPRINT_OnLoginPollSessionsCompleteDelegate`

Multicast delegate triggered when the initial poll after login is complete, to do first-time setup.




### `BLUEPRINT_OnFailedToJoinPlatformSessionDelegate` <a id="classURH__LocalPlayerSessionSubsystem_1a9c5890ac06e22e12e436ab439603a57a"></a>

`FRH_OnFailedToJoinPlatformSessionMulticastDynamicDelegate URH_LocalPlayerSessionSubsystem::BLUEPRINT_OnFailedToJoinPlatformSessionDelegate`

Multicast delegate triggered when we fail to join a platform session that we've accepted an invite to.




### `OnSessionUpdatedDelegate` <a id="classURH__LocalPlayerSessionSubsystem_1a87ec0a5447e17ebbbda133342770d960"></a>

`FRH_OnSessionUpdatedMulticastDelegate URH_LocalPlayerSessionSubsystem::OnSessionUpdatedDelegate`

Multicast delegate triggered when a session managed by this subsystem is updated.




### `OnSessionAddedDelegate` <a id="classURH__LocalPlayerSessionSubsystem_1a34c015e300be4c0474addf8f6d6d947b"></a>

`FRH_OnSessionUpdatedMulticastDelegate URH_LocalPlayerSessionSubsystem::OnSessionAddedDelegate`

Multicast delegate triggered when a session managed by this subsystem is added.




### `OnSessionRemovedDelegate` <a id="classURH__LocalPlayerSessionSubsystem_1af13b47604f229daf45aa56fdb25554cc"></a>

`FRH_OnSessionUpdatedMulticastDelegate URH_LocalPlayerSessionSubsystem::OnSessionRemovedDelegate`

Multicast delegate triggered when a session managed by this subsystem is removed.




### `OnSessionExpirationCompleteDelegate` <a id="classURH__LocalPlayerSessionSubsystem_1a897c37a8854ad40a5ab9f75129a57e74"></a>

`FRH_OnSessionUpdatedMulticastDelegate URH_LocalPlayerSessionSubsystem::OnSessionExpirationCompleteDelegate`

Multicast delegate triggered when a session managed by this subsystem is fully expired (happens after removal)




### `OnLoginPollSessionsCompleteDelegate` <a id="classURH__LocalPlayerSessionSubsystem_1adf39311c4affa07453f6dd6cfeab6203"></a>

`FRH_OnLoginPollSessionsCompleteMulticastDelegate URH_LocalPlayerSessionSubsystem::OnLoginPollSessionsCompleteDelegate`

Multicast delegate triggered when the initial poll after login is complete, to do first-time setup.




### `OnFailedToJoinPlatformSessionDelegate` <a id="classURH__LocalPlayerSessionSubsystem_1aaa731f4db12fb478a38ca11784438b63"></a>

`FRH_OnFailedToJoinPlatformSessionMulticastDelegate URH_LocalPlayerSessionSubsystem::OnFailedToJoinPlatformSessionDelegate`

Multicast delegate triggered when we fail to join a platform session that we've accepted an invite to.





## Protected Attributes



### `Poller` <a id="classURH__LocalPlayerSessionSubsystem_1a042e9dee585644aa339fd3b3b8e6ad12"></a>

`FRH_AutoPollerPtr URH_LocalPlayerSessionSubsystem::Poller`

Poller for sessions.




### `Templates` <a id="classURH__LocalPlayerSessionSubsystem_1a78953314d26e12a0aa43abd5828fe912"></a>

`TMap<FString, FRHAPI_SessionTemplate> URH_LocalPlayerSessionSubsystem::Templates`

Map of Template Ids to Session Templates.




### `AllSessionsETag` <a id="classURH__LocalPlayerSessionSubsystem_1a3b99704446608834a66a9def184c133b"></a>

`TOptional<FString> URH_LocalPlayerSessionSubsystem::AllSessionsETag`

ETag of last QueryAllSessions call response.




### `AllTemplatesETag` <a id="classURH__LocalPlayerSessionSubsystem_1a5479e5160d85fc15ecfc553a897d5bea"></a>

`TOptional<FString> URH_LocalPlayerSessionSubsystem::AllTemplatesETag`

ETag of last QueryAllSessionTemplates call response.




### `PlatformSessionToJoinOnUserChange` <a id="classURH__LocalPlayerSessionSubsystem_1afcd78f39dfd5aebd442d959d6212fbaa"></a>

`TOptional<FOnlineSessionSearchResult> URH_LocalPlayerSessionSubsystem::PlatformSessionToJoinOnUserChange`

OSS Session that we need to join upon user change (ex: login).




### `Sessions` <a id="classURH__LocalPlayerSessionSubsystem_1a134d1e08da7eae1d03ba4b5a1ee419d6"></a>

`TMap<FString, URH_SessionView*> URH_LocalPlayerSessionSubsystem::Sessions`

Map of Session Ids to Sessions we are in.




### `ExpiringSessions` <a id="classURH__LocalPlayerSessionSubsystem_1ad1bcc3afd124b033ccfba4b001cebbe2"></a>

`TMap<FString, URH_SessionView*> URH_LocalPlayerSessionSubsystem::ExpiringSessions`

Map of Session Ids to Sessions objects that may be in the process of cleaning themselves up.




### `DeferredSessionUpdates` <a id="classURH__LocalPlayerSessionSubsystem_1a9f22ebb821fcb358e5e277acbef28010"></a>

`TMap<FString, FRH_APISessionWithETag> URH_LocalPlayerSessionSubsystem::DeferredSessionUpdates`

Map of Session Ids to Sessions updates we could not process for some reason, such as race conditions.




### `PlatformSyncers` <a id="classURH__LocalPlayerSessionSubsystem_1ab601abbf8833c31cb45ccde7d481d3de"></a>

`TMap<FString, URH_PlatformSessionSyncer*> URH_LocalPlayerSessionSubsystem::PlatformSyncers`

Map of Session Ids to their Platform Session Syncers.





## Public Functions



### `URH_LocalPlayerSessionSubsystem` <a id="classURH__LocalPlayerSessionSubsystem_1a038813e71ac05adf08f219b29d703891"></a>

 URH_LocalPlayerSessionSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description






### `Initialize` <a id="classURH__LocalPlayerSessionSubsystem_1a0f380ce4b08ba9e13a06496939bc14d7"></a>

void Initialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initialize the subsystem.




### `Deinitialize` <a id="classURH__LocalPlayerSessionSubsystem_1a120580f60e2559621a29074257000119"></a>

void Deinitialize()

#### Parameters

| Type | Name |
|------|------|

#### Description

Deinitialize the subsystem.




### `GetSessionAuthContext` <a id="classURH__LocalPlayerSessionSubsystem_1a6eb6370bc861ae0aa43831888996e885"></a>

FAuthContextPtr GetSessionAuthContext()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get auth context for session (IRH_SessionOwnerInterface requirement)




### `GetSessionById` <a id="classURH__LocalPlayerSessionSubsystem_1ae9b547c5444917b422f0faf4f9f302f7"></a>

[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * GetSessionById(const FString & SessionId)

#### Parameters

| Type | Name |
|------|------|
|const FString &|SessionId|

#### Description

Get session by its Session Id.


#### Parameters

SessionId
: Session Id to look up 

#### Returns
Session object, if it exists 



### `GetSessionsByType` <a id="classURH__LocalPlayerSessionSubsystem_1ada97ad5b91df96d7c12906654dff2efc"></a>

TArray< [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * > GetSessionsByType(const FString & Type)

#### Parameters

| Type | Name |
|------|------|
|const FString &|Type|

#### Description

Get all joined and invited sessions by SessionType.


#### Parameters

SessionType
: SessionType to filter for 

#### Returns
Array of session objects of the specified SessionType 



### `GetInvitedSessionsByType` <a id="classURH__LocalPlayerSessionSubsystem_1a2062f6db160d2e691043384daba8a0c7"></a>

TArray< [URH_InvitedSession](/unreal-plugins/all/classurh__invitedsession/#classURH__InvitedSession) * > GetInvitedSessionsByType(const FString & Type)

#### Parameters

| Type | Name |
|------|------|
|const FString &|Type|

#### Description

Get all invited sessions by SessionType.


#### Parameters

SessionType
: SessionType to filter for 

#### Returns
Array of session objects of the specified SessionType 



### `GetJoinedSessionsByType` <a id="classURH__LocalPlayerSessionSubsystem_1a8ef4d278c989d7ce7d27066f763d6a6b"></a>

TArray< [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * > GetJoinedSessionsByType(const FString & Type)

#### Parameters

| Type | Name |
|------|------|
|const FString &|Type|

#### Description

Get all joined sessions by SessionType.


#### Parameters

SessionType
: SessionType to filter for 

#### Returns
Array of session objects of the specified SessionType 



### `GetFirstSessionByType` <a id="classURH__LocalPlayerSessionSubsystem_1a01900cd4029717129f2a9b58ed0393bf"></a>

FORCEINLINE [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * GetFirstSessionByType(const FString & Type)

#### Parameters

| Type | Name |
|------|------|
|const FString &|Type|

#### Description

Get first joined or invited sessions by SessionType (useful for titles that ensure only one of a given session type will exist)


#### Parameters

SessionType
: SessionType to filter for 

#### Returns
Session object of the specified SessionType, if it exists 



### `GetFirstInvitedSessionByType` <a id="classURH__LocalPlayerSessionSubsystem_1a6425315f9172f8dfa5f8c91c134906cf"></a>

FORCEINLINE [URH_InvitedSession](/unreal-plugins/all/classurh__invitedsession/#classURH__InvitedSession) * GetFirstInvitedSessionByType(const FString & Type)

#### Parameters

| Type | Name |
|------|------|
|const FString &|Type|

#### Description

Get first invited sessions by SessionType (useful for titles that ensure only one of a given session type will exist)


#### Parameters

SessionType
: SessionType to filter for 

#### Returns
Session object of the specified SessionType, if it exists 



### `GetFirstJoinedSessionByType` <a id="classURH__LocalPlayerSessionSubsystem_1aa414c134992b703f331750fb0efe7ad6"></a>

FORCEINLINE [URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * GetFirstJoinedSessionByType(const FString & Type)

#### Parameters

| Type | Name |
|------|------|
|const FString &|Type|

#### Description

Get first joined sessions by SessionType (useful for titles that ensure only one of a given session type will exist)


#### Parameters

SessionType
: SessionType to filter for 

#### Returns
Session object of the specified SessionType, if it exists 



### `GetFirstActiveSession` <a id="classURH__LocalPlayerSessionSubsystem_1a520c98308877db871add24d0dd4b4b54"></a>

[URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * GetFirstActiveSession()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get first "active" session (session which is IsActive())


#### Parameters

SessionType
: SessionType to filter for 

#### Returns
Session object of the specified SessionType, if it exists 



### `GetSessions` <a id="classURH__LocalPlayerSessionSubsystem_1ae82fb3ff0c18d5c55cc163b935ff56f8"></a>

FORCEINLINE TArray< [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * > GetSessions()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get an array of all sessions controlled by this system.



#### Returns
Array of session objects 



### `IsInSession` <a id="classURH__LocalPlayerSessionSubsystem_1ad5bfcc3b466927d7d92f94bff1ba31d5"></a>

FORCEINLINE bool IsInSession(const FString & SessionId)

#### Parameters

| Type | Name |
|------|------|
|const FString &|SessionId|

#### Description

Utility function to determine if local player is a member of that session.


#### Parameters

SessionId
: Session Id to check 

#### Returns
whether or not the player is in the session 



### `GetPlayerInfoSubsystem` <a id="classURH__LocalPlayerSessionSubsystem_1a8978774a71778d9d5a9b4f20f1ee85f6"></a>

class [URH_PlayerInfoSubsystem](/unreal-plugins/all/classurh__playerinfosubsystem/#classURH__PlayerInfoSubsystem) * GetPlayerInfoSubsystem()

#### Parameters

| Type | Name |
|------|------|

#### Description

Utility function to look up the player info subsystem (IRH_SessionOwnerInterface requirement)




### `GetOSS` <a id="classURH__LocalPlayerSessionSubsystem_1a236725daa5e1b49d96c04a2da868be04"></a>

IOnlineSubsystem * GetOSS()

#### Parameters

| Type | Name |
|------|------|

#### Description

Utility function to look up the OnlineSubsystem to use for session calls (IRH_SessionOwnerInterface requirement)




### `GetOSSUniqueId` <a id="classURH__LocalPlayerSessionSubsystem_1a242dea7f5ff3092050c7d15ba05dc8a0"></a>

FUniqueNetIdWrapper GetOSSUniqueId()

#### Parameters

| Type | Name |
|------|------|

#### Description

Utility function to look up the UniqueNetId to use for OnlineSubsystem calls (IRH_SessionOwnerInterface requirement)




### `GetPlayerUuid` <a id="classURH__LocalPlayerSessionSubsystem_1aaf5587019c1eb05ce9e42c72541dd802"></a>

FGuid GetPlayerUuid()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets the Player UUID to use for player related calls (can be invalid)




### `GetPlatformSyncerByRHSessionId` <a id="classURH__LocalPlayerSessionSubsystem_1a4ed75c6f69c267d419355a48e64db6fe"></a>

[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * GetPlatformSyncerByRHSessionId(const FString & SessionId)

#### Parameters

| Type | Name |
|------|------|
|const FString &|SessionId|

#### Description

Gets the platform session synchronization object for a given session id (IRH_SessionOwnerInterface requirement)


#### Parameters

SessionId
: RallyHere Session Id to look up the synchornization object wiht 

#### Returns
Platform Session synchronization object 



### `GetPlatformSyncerByPlatformSessionId` <a id="classURH__LocalPlayerSessionSubsystem_1a498582f9ba28c7472e33004de090efe7"></a>

[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * GetPlatformSyncerByPlatformSessionId(const FUniqueNetIdRepl & PlatformSessionId)

#### Parameters

| Type | Name |
|------|------|
|const FUniqueNetIdRepl &|PlatformSessionId|

#### Description

Gets the platform session synchronization object for a given platform session id.


#### Parameters

PlatformSessionId
: Platform Session Id (as string) to look up the synchornization object wiht 

#### Returns
Platform Session synchronization object 



### `SetPlatformSessionToJoinOnUserChange` <a id="classURH__LocalPlayerSessionSubsystem_1a7b32f021e042bf401d2156764df2babc"></a>

void SetPlatformSessionToJoinOnUserChange(const FOnlineSessionSearchResult & Session)

#### Parameters

| Type | Name |
|------|------|
|const FOnlineSessionSearchResult &|Session|

#### Description

Set a platform session to join upon the next user change.




### `ClearPlatformSessionToJoinOnUserChange` <a id="classURH__LocalPlayerSessionSubsystem_1afa5db7d0b7302957dd89c4a7b9f78cb5"></a>

void ClearPlatformSessionToJoinOnUserChange()

#### Parameters

| Type | Name |
|------|------|

#### Description

Clear a platform session to join upon the next user change.




### `CreateOrJoinSessionByType` <a id="classURH__LocalPlayerSessionSubsystem_1ae987d7bbdbc819106e7e00a06a08d918"></a>

void CreateOrJoinSessionByType(const [FRHAPI_CreateOrJoinRequest](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest) & CreateParams, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CreateOrJoinRequest](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest) &|CreateParams|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Utility function to Create or Join a session by a given SessionType (most times will create a session, but Hub join rules may do a Join instead)


#### Parameters

CreateParams
: Creation paramters for the session 
Delegate
: delegate to trigger when complete 



### `BLUEPRINT_CreateOrJoinSessionByType` <a id="classURH__LocalPlayerSessionSubsystem_1a3cd18e8fb059a7844a60c3deebd8acb5"></a>

void BLUEPRINT_CreateOrJoinSessionByType(const [FRHAPI_CreateOrJoinRequest](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest) & CreateParams, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_CreateOrJoinRequest](/unreal-plugins/all/structfrhapi__createorjoinrequest/#structFRHAPI__CreateOrJoinRequest) &|CreateParams|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of CreateOrJoinSessionByType.


#### Parameters

CreateParams
: Creation paramters for the session 
Delegate
: delegate to trigger when complete 



### `JoinSessionById` <a id="classURH__LocalPlayerSessionSubsystem_1a81439a14711f1519f5a4c109574d0527"></a>

void JoinSessionById(const FString & SessionId, const FRH_OnSessionUpdatedDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|SessionId|
|const FRH_OnSessionUpdatedDelegateBlock &|Delegate|

#### Description

Utility function to Join a session by SessionId.


#### Parameters

SessionId
: The session id to join 
Delegate
: delegate to trigger when complete 



### `BLUEPRINT_JoinSessionById` <a id="classURH__LocalPlayerSessionSubsystem_1a1d00b98420ce2333f9f19313998a139d"></a>

void BLUEPRINT_JoinSessionById(const FString & SessionId, const FRH_OnSessionUpdatedDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FString &|SessionId|
|const FRH_OnSessionUpdatedDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of JoinSessionById.


#### Parameters

SessionId
: The session id to join 
Delegate
: delegate to trigger when complete 



### `ImportAPISession` <a id="classURH__LocalPlayerSessionSubsystem_1a21c227f5c4a783adacd79c25714aa2e3"></a>

void ImportAPISession(const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) & Session)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) &|Session|

#### Description

Imports a new or updated session from the API into this subsystem (IRH_SessionOwnerInterface requirement)


#### Parameters

Session
: The session data to import 



### `ImportAPITemplate` <a id="classURH__LocalPlayerSessionSubsystem_1ae7616f99c6aa669e529aad3cd0a0451f"></a>

void ImportAPITemplate(const [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) & Template)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) &|Template|

#### Description

Imports a new session template from the API into this subsystem (IRH_SessionOwnerInterface requirement)


#### Parameters

Template
: the template data to import 



### `ReconcileAPISessions` <a id="classURH__LocalPlayerSessionSubsystem_1aede0956db4c8e8626fa239c16cb3d61e"></a>

void ReconcileAPISessions(const TArray< FString > & SessionIds, const TOptional< FString > & ETag)

#### Parameters

| Type | Name |
|------|------|
|const TArray< FString > &|SessionIds|
|const TOptional< FString > &|ETag|

#### Description

Reconciles the list of session ids with this subsystem, removing any sessions that are no longer in the list, then updates the stored ETag for the local player's session list (IRH_SessionOwnerInterface requirement)


#### Parameters

SessionIds
: The list of session ids to reconcile against 
ETag
: optional ETag to use when querying all sessions for optimization 



### `ReconcileAPITemplates` <a id="classURH__LocalPlayerSessionSubsystem_1a4f63fd2f8b8a6f34c01cc45022eeee71"></a>

void ReconcileAPITemplates(const TArray< FString > & InTemplates, const TOptional< FString > & ETag)

#### Parameters

| Type | Name |
|------|------|
|const TArray< FString > &|InTemplates|
|const TOptional< FString > &|ETag|

#### Description

Reconciles the list of template SessionTypes with this subsystem, removing any templates that are no longer in the list, then updates the stored ETag for the local player's templatelist (IRH_SessionOwnerInterface requirement)


#### Parameters

InTemplates
: The list of template names (SessionType) ids to reconcile against 
ETag
: optional ETag to use when querying all templates for optimization 



### `GetTemplate` <a id="classURH__LocalPlayerSessionSubsystem_1a237eee46e92fabeb77c426fce7e857d8"></a>

bool GetTemplate(const FString & Type, [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) & Template)

#### Parameters

| Type | Name |
|------|------|
|const FString &|Type|
|[FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) &|Template|

#### Description

Looks up a template from within this subsystem (IRH_SessionOwnerInterface requirement)


#### Parameters

Type
: The SessionType to look up 
Template
: The template information, if found 

#### Returns
Whether or not the template was found 



### `GetTemplates` <a id="classURH__LocalPlayerSessionSubsystem_1a4c06df84a31add059852a36de3959038"></a>

FORCEINLINE TArray< [FRHAPI_SessionTemplate](/unreal-plugins/all/structfrhapi__sessiontemplate/#structFRHAPI__SessionTemplate) > GetTemplates()

#### Parameters

| Type | Name |
|------|------|

#### Description

Gets a list of all templates in this subsystem.



#### Returns
Array of all templates 



### `GetETagForAllSessionsPoll` <a id="classURH__LocalPlayerSessionSubsystem_1a95c37ca700d9e30f3cc46c79055208b2"></a>

TOptional< FString > GetETagForAllSessionsPoll()

#### Parameters

| Type | Name |
|------|------|

#### Description

Looks up a ETag to use when querying for session membership (IRH_SessionOwnerInterface requirement)




### `GetETagForAllTemplatesPoll` <a id="classURH__LocalPlayerSessionSubsystem_1aa3e56b3a6b8466282f98f33fa444b814"></a>

TOptional< FString > GetETagForAllTemplatesPoll()

#### Parameters

| Type | Name |
|------|------|

#### Description

Looks up a ETag to use when querying for template information (IRH_SessionOwnerInterface requirement)




### `GetAllSessionsForPolling` <a id="classURH__LocalPlayerSessionSubsystem_1a4dbf97c53be79cdeced20be7d9176378"></a>

TArray< [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * > GetAllSessionsForPolling()

#### Parameters

| Type | Name |
|------|------|

#### Description

Looks up all sessions to process when polling if ETags match (IRH_SessionOwnerInterface requirement)




### `SearchForSessions` <a id="classURH__LocalPlayerSessionSubsystem_1a2d981ffabd1a06a57e12cf2f64e991c5"></a>

void SearchForSessions(const [FRH_SessionBrowserSearchParams](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams) & Params, const FRH_OnSessionSearchCompleteDelegateBlock & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_SessionBrowserSearchParams](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams) &|Params|
|const FRH_OnSessionSearchCompleteDelegateBlock &|Delegate|

#### Description

Utility function that searches the session browser cache for information on browser sessions.


#### Parameters

Params
: Search parameters for the browser search 
Delegate
: Delegate to trigger once complete 



### `BLUEPRINT_SearchForSessions` <a id="classURH__LocalPlayerSessionSubsystem_1a1fc6352551fdde138995e52ccdf9cb66"></a>

void BLUEPRINT_SearchForSessions(const [FRH_SessionBrowserSearchParams](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams) & Params, const FRH_OnSessionSearchCompleteDynamicDelegate & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_SessionBrowserSearchParams](/unreal-plugins/all/structfrh__sessionbrowsersearchparams/#structFRH__SessionBrowserSearchParams) &|Params|
|const FRH_OnSessionSearchCompleteDynamicDelegate &|Delegate|

#### Description

Blueprint compatible version of SearchForSessions.


#### Parameters

Params
: Search parameters for the browser search 
Delegate
: Delegate to trigger once complete 



### `StartPolling` <a id="classURH__LocalPlayerSessionSubsystem_1a46f1de5fd5535924cb742f82878b949a"></a>

void StartPolling()

#### Parameters

| Type | Name |
|------|------|

#### Description

Start polling for session template and membership updates.




### `StopPolling` <a id="classURH__LocalPlayerSessionSubsystem_1ae11fbca181c0c52bd17cc06b701a12e1"></a>

void StopPolling()

#### Parameters

| Type | Name |
|------|------|

#### Description

Stop polling for session template and membership updates.




### `PollForUpdate` <a id="classURH__LocalPlayerSessionSubsystem_1a1a13b1d7c4f1993e553f95ec10966c5b"></a>

void PollForUpdate(const FRH_PollCompleteFunc & Delegate)

#### Parameters

| Type | Name |
|------|------|
|const FRH_PollCompleteFunc &|Delegate|

#### Description

Poll function for use with FRH_AutoPoller.


#### Parameters

PollComplete
: delegate to restart the poll 



### `ForcePollForUpdate` <a id="classURH__LocalPlayerSessionSubsystem_1a6f7a77ff7630f1beb1aa58e3943adda1"></a>

void ForcePollForUpdate(bool bClearETag)

#### Parameters

| Type | Name |
|------|------|
|bool|bClearETag|

#### Description

Force an immediate poll.




### `GetPollTimeRemaining` <a id="classURH__LocalPlayerSessionSubsystem_1a27ce3d0bc063b3466f74c6b5e735696c"></a>

float GetPollTimeRemaining()

#### Parameters

| Type | Name |
|------|------|

#### Description

Get the current time remaining on poll cycle, or -1.f if not polling.





## Protected Functions



### `CreateOrUpdateRHSession` <a id="classURH__LocalPlayerSessionSubsystem_1a2efe4a073341684f83e5da781df7a9f0"></a>

[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * CreateOrUpdateRHSession(const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) & Session, const ERHAPI_SessionPlayerStatus & LocalPlayerStatus)

#### Parameters

| Type | Name |
|------|------|
|const [FRH_APISessionWithETag](/unreal-plugins/all/structtrh__datawithetagwrapper/#structTRH__DataWithETagWrapper) &|Session|
|const ERHAPI_SessionPlayerStatus &|LocalPlayerStatus|

#### Description

Creates or updates a specific session for the local player.


#### Parameters

Session
: Session information to create or update. 
LocalPlayerStatus
: The status of the local player in the session. 

#### Returns
The session that is created or updated. 



### `LocalPlayerStatusFromSession` <a id="classURH__LocalPlayerSessionSubsystem_1aa0bec72de8c9da10cb97e78730c5cb79"></a>

bool LocalPlayerStatusFromSession(const [FRHAPI_Session](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session) & Session, ERHAPI_SessionPlayerStatus & Status)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_Session](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session) &|Session|
|ERHAPI_SessionPlayerStatus &|Status|

#### Description

Gets the local player status in a specific session.


#### Parameters

Session
: The Session to get the local player status from. 
Status
: The status of the local player in the session. 

#### Returns
True if the player is part of that session. 



### `RemoveSessionById` <a id="classURH__LocalPlayerSessionSubsystem_1a7e790f89c514d7210c5b58b947cebec2"></a>

void RemoveSessionById(const FString & SessionId)

#### Parameters

| Type | Name |
|------|------|
|const FString &|SessionId|

#### Description

Removes a cached session for the local player, this does NOT try to leave it.


#### Parameters

SessionId
: The Session Id to remove. 



### `RemoveSession` <a id="classURH__LocalPlayerSessionSubsystem_1ac956ad61bb35b46c9cb067e247e8b06f"></a>

void RemoveSession(const [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * Session)

#### Parameters

| Type | Name |
|------|------|
|const [URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *|Session|

#### Description

Removes a cached session for the local player, this does NOT try to leave it.


#### Parameters

Session
: The Session to remove. 



### `OnExpirationComplete` <a id="classURH__LocalPlayerSessionSubsystem_1ae8b9736ce9f79dd68014b3f01df9fd1f"></a>

void OnExpirationComplete([URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) * Session)

#### Parameters

| Type | Name |
|------|------|
|[URH_SessionView](/unreal-plugins/all/classurh__sessionview/#classURH__SessionView) *|Session|

#### Description

Called when a session the local player is part of expires.


#### Parameters

Session
: The session that expired. 



### `PreprocessAPISessionImport` <a id="classURH__LocalPlayerSessionSubsystem_1a9c559f45b88f7a21f62dcdf6476fcbea"></a>

bool PreprocessAPISessionImport(const [FRHAPI_Session](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session) & Session, ERHAPI_SessionPlayerStatus & Status)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_Session](/unreal-plugins/all/structfrhapi__session/#structFRHAPI__Session) &|Session|
|ERHAPI_SessionPlayerStatus &|Status|

#### Description

Attepts to preprocess an API session.


#### Parameters

Session
: The session to preprocess. 
Status
: The status of the local player to that session. 

#### Returns
False if deferred or dropped, true if it can be processed. 



### `OnUserChanged` <a id="classURH__LocalPlayerSessionSubsystem_1a26fbf14bcba6e280614f699fb5e3711c"></a>

void OnUserChanged(const FGuid & OldPlayerUuid, class [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) * OldLocalPlayerInfo)

#### Parameters

| Type | Name |
|------|------|
|const FGuid &|OldPlayerUuid|
|class [URH_PlayerInfo](/unreal-plugins/all/classurh__playerinfo/#classURH__PlayerInfo) *|OldLocalPlayerInfo|

#### Description

Base handling when the local user changes, override to provide functionality.


#### Parameters

OldPlayerUuid
: The old player Uuid. 
OldLocalPlayerInfo
: The old local player info. 



### `InitPropertiesWithDefaultValues` <a id="classURH__LocalPlayerSessionSubsystem_1a8d62c9d3f5c42d59b77fa894ce226ad4"></a>

void InitPropertiesWithDefaultValues()

#### Parameters

| Type | Name |
|------|------|

#### Description

Initializes the subsystem with defaults for its cached data.




### `HandleNotification` <a id="classURH__LocalPlayerSessionSubsystem_1aaa005ba728065e1b159a4d61906eae89"></a>

void HandleNotification(const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) & Notification, const FString & APIName, const TArray< FString > & APIParams)

#### Parameters

| Type | Name |
|------|------|
|const [FRHAPI_Notification](/unreal-plugins/all/structfrhapi__notification/#structFRHAPI__Notification) &|Notification|
|const FString &|APIName|
|const TArray< FString > &|APIParams|

#### Description

Handle a notification from the notification API.


#### Parameters

Notification
: The notification to handle. 
APIName
: The name of the API that sent the notification. 
APIParams
: The parameters for the API that sent the notification. 



### `CreatePlatformSyncer` <a id="classURH__LocalPlayerSessionSubsystem_1a689a1f5d6391c55118c8467e5fe2e9ce"></a>

[URH_PlatformSessionSyncer](/unreal-plugins/all/classurh__platformsessionsyncer/#classURH__PlatformSessionSyncer) * CreatePlatformSyncer([URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) * Session)

#### Parameters

| Type | Name |
|------|------|
|[URH_JoinedSession](/unreal-plugins/all/classurh__joinedsession/#classURH__JoinedSession) *|Session|

#### Description

Creates a Platform Session Syncer for the local player.


#### Parameters

Session
: The Session assocaited with the syncer. 

#### Returns
The Platform Session Syncer. 



### `FilterOSSCallbackUser` <a id="classURH__LocalPlayerSessionSubsystem_1ac3f8a2189935d62ddee4f0c523028264"></a>

bool FilterOSSCallbackUser(const int32 ControllerId)

#### Parameters

| Type | Name |
|------|------|
|const int32|ControllerId|

#### Description

Checks if the online subsystem call is for the local user.


#### Parameters

ControllerId
: The controller Id to check against. 

#### Returns
True if the callback is allowed. 



### `FilterOSSCallbackUser` <a id="classURH__LocalPlayerSessionSubsystem_1a499f53a4e277ea57c023eca530e7edd1"></a>

bool FilterOSSCallbackUser(const FUniqueNetId & UniqueNetId)

#### Parameters

| Type | Name |
|------|------|
|const FUniqueNetId &|UniqueNetId|

#### Description

Checks if the online subsystem call is for the local user.


#### Parameters

UniqueNetId
: The Unique Net Id to check against. 

#### Returns
True if the callback is allowed. 



### `OnPlatformActivityActivation` <a id="classURH__LocalPlayerSessionSubsystem_1aa06aadafbc3aebee2e79d0114db792a3"></a>

void OnPlatformActivityActivation(const FUniqueNetId & LocalUserId, const FString & ActivityId, const FOnlineSessionSearchResult * SessionInfo)

#### Parameters

| Type | Name |
|------|------|
|const FUniqueNetId &|LocalUserId|
|const FString &|ActivityId|
|const FOnlineSessionSearchResult *|SessionInfo|

#### Description

Handles the response of an online subsystem activity activation.


#### Parameters

LocalUserId
: The Unique Net Id associated with the activity. 
ActivityId
: The Id of the activity. 
SessionInfo
: The session info associated with the activity. 



### `OnPlatformSessionInviteAccepted` <a id="classURH__LocalPlayerSessionSubsystem_1a8dc7b270d5a63dc6024cc5a0422ea032"></a>

void OnPlatformSessionInviteAccepted(const bool bSuccesful, const int32 ControllerId, FUniqueNetIdPtr UserId, const FOnlineSessionSearchResult & Session)

#### Parameters

| Type | Name |
|------|------|
|const bool|bSuccesful|
|const int32|ControllerId|
|FUniqueNetIdPtr|UserId|
|const FOnlineSessionSearchResult &|Session|

#### Description

Handles the response of an online subsystem session invite.


#### Parameters

bSuccesful
: True if the invite was successful. 
ControllerId
: The controller Id of the invited player. 
UserId
: Unique Net Id of the invited player. 
Session
: The Session the invite was for. 



### `OnPlatformSessionCreated` <a id="classURH__LocalPlayerSessionSubsystem_1a58f090980ad25944e7f9fc974b6d3ed2"></a>

void OnPlatformSessionCreated(FName SessionName, bool bSuccess)

#### Parameters

| Type | Name |
|------|------|
|FName|SessionName|
|bool|bSuccess|

#### Description

Handles the response of an online subsystem session creation.


#### Parameters

SessionName
: The name of the created session. 
bSuccess
: True if the creation was successful. 



### `OnPlatformSessionJoined` <a id="classURH__LocalPlayerSessionSubsystem_1a407cb4e27d487bbc1f9530a7b8a3f802"></a>

void OnPlatformSessionJoined(FName SessionName, EOnJoinSessionCompleteResult::Type Result)

#### Parameters

| Type | Name |
|------|------|
|FName|SessionName|
|EOnJoinSessionCompleteResult::Type|Result|

#### Description

Handles the response of an online subsystem session join.


#### Parameters

SessionName
: The name of the associated session. 
Result
: The resule of the join attempt. 



### `OnPlatformSessionStarted` <a id="classURH__LocalPlayerSessionSubsystem_1a0c299fea961f369123ca438e318ba266"></a>

void OnPlatformSessionStarted(FName SessionName, bool bSuccess)

#### Parameters

| Type | Name |
|------|------|
|FName|SessionName|
|bool|bSuccess|

#### Description

Handles the response of an online subsystem session started.


#### Parameters

SessionName
: The name of the associated session. 
bSuccess
: True if the creation was successful. 



### `OnPlatformSessionEnded` <a id="classURH__LocalPlayerSessionSubsystem_1af0572f80f29da197fabf336175c8fcb2"></a>

void OnPlatformSessionEnded(FName SessionName, bool bSuccess)

#### Parameters

| Type | Name |
|------|------|
|FName|SessionName|
|bool|bSuccess|

#### Description

Handles the response of an online subsystem session ended.


#### Parameters

SessionName
: The name of the associated session. 
bSuccess
: True if the creation was successful. 



### `OnPlatformSessionDestroyed` <a id="classURH__LocalPlayerSessionSubsystem_1a635b650a45ccde86c301b7f88aa0484d"></a>

void OnPlatformSessionDestroyed(FName SessionName, bool bSuccess)

#### Parameters

| Type | Name |
|------|------|
|FName|SessionName|
|bool|bSuccess|

#### Description

Handles the response of an online subsystem session destroy.


#### Parameters

SessionName
: The name of the associated session. 
bSuccess
: True if the creation was successful. 



### `OnPlatformSessionParticipantsChanged` <a id="classURH__LocalPlayerSessionSubsystem_1a7d2554778e7116195c8c783eab1b1488"></a>

void OnPlatformSessionParticipantsChanged(FName SessionName, const FUniqueNetId & UniqueNetId, bool bJoined)

#### Parameters

| Type | Name |
|------|------|
|FName|SessionName|
|const FUniqueNetId &|UniqueNetId|
|bool|bJoined|

#### Description

Called from other Platform Session Participant functions to reconcile the state of the platform syncer.


#### Parameters

SessionName
: The name of the associated session. 
UniqueNetId
: Unique Net Id of the participant that joined, changed, left, or was removed. 



### `OnPlatformSessionParticipantChange` <a id="classURH__LocalPlayerSessionSubsystem_1a18ac6fdc4538f89361f5e23d27b0fcd3"></a>

void OnPlatformSessionParticipantChange(FName SessionName, const FUniqueNetId & UniqueNetId, bool bJoined)

#### Parameters

| Type | Name |
|------|------|
|FName|SessionName|
|const FUniqueNetId &|UniqueNetId|
|bool|bJoined|

#### Description

Handles the response of an online subsystem session participant change.


#### Parameters

SessionName
: The name of the associated session. 
UniqueNetId
: Unique Net Id of the participant that changed. 
bJoined
: If that participant joined the session. 



### `OnPlatformSessionParticipantRemoved` <a id="classURH__LocalPlayerSessionSubsystem_1a19fcc5c2c30710932f1757dbe0ce3666"></a>

void OnPlatformSessionParticipantRemoved(FName SessionName, const FUniqueNetId & UniqueNetId)

#### Parameters

| Type | Name |
|------|------|
|FName|SessionName|
|const FUniqueNetId &|UniqueNetId|

#### Description

Handles the response of an online subsystem session participant remove.


#### Parameters

SessionName
: The name of the associated session. 
UniqueNetId
: Unique Net Id of the participant that was removed. 



### `HandlePollAllSessionsComplete` <a id="classURH__LocalPlayerSessionSubsystem_1a723518fadb2e8fb85f0a624debb53b91"></a>

void HandlePollAllSessionsComplete(bool bSuccess, const TArray< FString > & SessionIds)

#### Parameters

| Type | Name |
|------|------|
|bool|bSuccess|
|const TArray< FString > &|SessionIds|

#### Description

Handles the response of polling all sessions.


#### Parameters

bSuccess
: True if the poll was successful. 
SessionIds
: Session Ids updated from the polling. 




