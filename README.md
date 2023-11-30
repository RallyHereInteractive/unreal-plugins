# RallyHere Unreal Plugins

## Change History

## 0.11.0

### High Level Changes
* Throughout the integration layer, the term Sandbox has been changed to Environment.  This is to properly match the terminology used elsewhere.
	* Note: Some commandline and console commands were also changed to match:
		* The default commandline arguments `-RallyHereSandbox=`, `-RallyHereSandboxX=`, and `-RallyHereSandboxInternal=` were changed to `-RallyHereEnv=`, `-RallyHereEnvX=`, and `-RallyHereEnvInternal=`
		* The `rh.setsandboxid`, `rh.resolvesandboxid` and `rh.getsandboxid` console commands were changed to `rh.setenvid`, `rh.resolveenvid`, and `rh.getenvid`
		* The `DefaultSandboxConfiguration`, `SandboxConfigurations`, `SandboxCommandLineKeys`, and `SandboxOSSName` config values were changed to `DefaultEnvironmentConfiguration`, `EnvironmentConfigurations`, `EnvironmentCommandLineKeys`, and `EnvironmentOSSName` (this requires updating your RallyHereIntegration.ini file)
* By default, all API calls now will automatically retry using the engine's HTTP retry system.
* AnalyticsRallyHere has been converted to implement the IAnalyticsProviderET interface.
* WriteOrderEntries() has been rewritten to allow for fewer failure cases, instead it will include as much data as possible, so that API can decide if enough data was provided.
* Helper functions on FResponse objects have been added to handle non-success cases more appropriately.
* Instance Health is now automatically polled and tracked, and can be checked against on the Session's instance object.
	* Note: An instance not being in a health state does not prevent join attempts by default.
	* Note: This behavior can be changed by overriding `GetShouldKeepInstanceHealthAlive()`.
* Backfill status is now automatically polled for active sessions, allowing them to be backfilled automatically.
	* Note: Currently only supported for matchmade sessions.  Backfilling must be kept alive if desired.  Once the backfill ticket expires, it cannot be recreated without re-entering basic matchmaking.
	* Note: This behavior can be changed by overriding `GetShouldKeepBackfillAlive()`.
* Sessions can now invite other sessions as a whole (which invites all players in the target session not currently in the source session).
* The integration SDK is now being released under the Apache v2 license.

### Notable Changes
* Converted Queue usage to the Queue v2 API.
* Changed Rank usage to the Rank v2 API.
* Prototype support for DeveloperAPI integration with the editor.
* Added additional information and tabs to debug window to display read-only configuration values stored in the integration layer that were retrieved from the API.* Improved support for session join calls to allow the integration layer to specify the full player join details.
* Updated embedded Game Host Adapter (GHA) library version to `0.0.10`.
* Fixed issue with session browser data update not correctly distinguishing between POST and PATCH calls.
* Fixed race condition where security token was not echoed back to host before players attempted to join the host, causing joins to fail.
* Fixed session browser cursor tracking.
* Fixed notification cursor tracking.
* Converted OSS auth token retrieval to use GetLinkedAccountAuthToken for some platforms (which allows for asynchronous auth token retrieval).
* Improvements to custom data staging and data entry in debug tool.
* Optimizations to OSS friends presence lookup to reduce number of callback broadcasts.
* Session update delegates now pass back FRH_ErrorInfo structures.
* Multiple fixes for the Platform Session syncing routines.
* Added support for checking OSS player blocked list for friends subsystem.
* Added support for auto-joining pending platform session invites on login/user change (ex: platforms with launch-game-and-join-session support).  This defaults to enabled, but can be disabled via settings.

**Full Changelog**: https://github.com/RallyHereInteractive/unreal-plugins/compare/v0.10.1...v0.11.0

## v0.10.1

### High Level Changes

* This is an update mostly focusing on bug fixing and optimizations
* Includes a new first-pass implementation of the AnalyticsRallyHere plugin, which can be used to route calls to our GETS (Generic Event Tracking System) endpoint.

### Notable Changes

* Adding stubs for App suspension and resuming to the GameInstanceSubsystem
* Integration layer function parameter cleanup (more passing by const ref, etc)
* Fixes for GHA includes not playing nicely with UnrealHeaderTool
* Added support for viewing OSS store items to the Entitlement Subsystem and Debug Tool
* Initial pass at RH Analytics Provider (batched http analytics)
* Allow fallback to old window selection when docking support is not present in the debug tool
* Numerous fixes for non-PCH / non-unity builds
* Numerous bug fixes and compile fixes

### 0.10.0

- High Level Changes
    - Began laying the foundation for an Editor Plugin that allows for updating and viewing information within the Dev Portal via the Unreal Editor, allowing for a easier workflow for many operastions.
		- NOTE: while the foundation is being laid, the initial features for this part of the integration was not yet ready for this release, but should appear in a future release.
	- The Debug Tool now has improvements to support docking windows (including a new default layout, you may need to click the "Reset Layout" button if your windows once to adjust to the new setup).
	- Default (unamed) sandbox configuration uses the same struct as named sandbox overrides.  The old configuration (with individual values) has been deprecated.  The named sandbox now inherits values from the default sandbox, if they are not specified.
	- Converted URH_LocalPlayer and URH_IpConnection to implement an interface class that contains most of their common code, and changed integration layer casts to use the interface.  This is intended to facilitate working around inheritance problems if the project does not use the base ULocalPlayer and UIpConnection.
		- NOTE: there are still a small number of functions on URH_LocalPlayer and URH_IpConnection that need to be implemented to work properly, since they can only be overridden by virtual function overrides.
	- Added initial support for custom endpoints (requires configuration on dev portal), where a client can call an endpoint by a pre-configured ID, and the API will passthrough the call after validating the authentication).
-------
- Notable Improvements:
	- RH_Properties.h contains the first implementations of "smart" IDs, and will have editor support via editor plugins that will work via custom visualizers.  
		- These types are intended to be able to be optionally used at the project level by asset classes, so that things such as Item Ids can be created via a button in the editor, or worked with via commandlets and utilities.
		- The integration layer and API layer does not depend on these classes, but they are intended to work seamlessly with it via type casting.
		- These types contain both legacy values (int32), and uuid values (FGuid).  This is to facilitate a future planned conversion of the ID types to uuid.
	- Added ability in player info subsystem to look up a player via their platform user id
	- Diagnostic Report Generator - converted (and improved) the web request generator into a more generic diagnostic report generator.  Currently this will write to a file on disk, but has hooks for future use to push that file to a remote location.  We plan to improve this feature over time to allow for easier collection of remote error reports (especially on systems where file system access is restricted).
	- Debug tool improvements have continued, 
		- Support for docking of windows together.  Windows are now always visible, and can just be docked as needed
		- ImPlot support (used by the analytics tab)
		- Support for working around multiple player "sources" (those doing actions) and "targets" (those the actions are being done to, such as who is being invited).	
		- Analytics tab, with client side web call statistics
		- Several windows have been merged or re-arranged (such as Player Presence and Local Presence)
		- Added support for editing custom data for several locations that took it but had no way to input it.
	- Fixed several cases where Session Helpers were not properly handling the SessionOwner weak pointer when dealing with results of asychronous calls.
	- Improvements to session cleanup, including platform sessions, and some race conditions causing crashes and bad behavior in those areas.
	- Inventory orders now accepts the IsTransaction flag properly
	- Support for TimeAPI - allow querying a server timestamp and calculating client drift from server
	- Steam OSS FindSessionById added to documentation (engine change required for full steam platform session functionality, not packaged in SDK)
	- Several strings in the autogenerated and API layers have been converted to reduce redundant storage.
	- Added support for requesting the list of another player's sessions via the PlayerInfo object.  Note that by default, this is restricted by permissions, and not available on the client (but should be available to servers).
	- Sessions in the global session cache can now poll themselves for updates
	- Removed several elements that were deprecated in 0.9.0 SDK
	- Lookup functions in RH_Common.h that took the OSS Name as input are now driven by a map configured in the RallyHereIntegration.ini.  This is to support remapping custom OSS implementations into our types.
	- Initial support (disabled by default) for "sandboxed" variants of GameInstanceSubsystemPlugin, which track their data per-player.  This is implemented for the PlayerInfo subsystem.  This is intended for use cases where player information has to be kept strictly separate.  If disabled, the GetPlayerInfoSubsystem() lookup on the RH_LocalPlayerSubsystem will return the global one on the RH_GameInstanceSubsystem.
	- Fix exit code forwarding improperly handling an unsigned int being initialized to INDEX_NONE (-1).  Now is initialized to zero and checked against that.
	- First pass support for UE 5.3.0 (fixed compilation / warning issues in editor compile)
	- Added some wider support for delegates with FRH_ErrorInfo, for error passthrough.  Added support to FRH_SimpleQueryHelper, plus a few other locations.  This will continue to expand over time.
	

### 0.9.0

- High Level Changes
    - We have continued doing code level documentation passes within the RallyHereIntegration plugin.  We expect this work to be ongoing.
    - Client ID and Secret can now be configured in the SDK options, but are not yet required.  If you would like to configure these please contact us, as self-configuration is not yet available.
    - Of note, some changes have been made in our Unreal Quickstart page describing some additional configuration changes needed to properly use the integration plugins.
- BREAKING CHANGE
    - The RallyHereIntegration layer has been reorganized a bit, due to some design goal changes.  The various "subsystem plugins" have been reworked to be able to be subclassed, and configuration has been added to the settings to specify override subclasses to use.
    - Additionally, player info plugins have been reworked for more consistency, and a method for using a subclass of RH_PlayerInfo has been added similar to the above changes.
    - By and large, this rework and renaming should be easy to convert for, but some of the naming changes are likely to cause breakage.  The RHExampleGame project has been updated for the new naming, for reference.
    - As part of this change, a lot of functions previously marked private in the header files are now marked protected and virtual, so they can be overridden.
-------
- Notable Improvements:
    - Debug Tool Improvements - we have initiated and are continuing a pass to make improvements to the debug tool.  This includes reworking how players are selected within it, and how that interacts with other windows.  We are also making other improvements to formatting and functionality in multiple windows.
    - Server Bootstrapping / GameHostAdapter - the game host adapter library introduced in the previous SDK release has seen some improvements.  We have reworked it into using a provider interface, and finished out support for the AutoCreate bootstrapping type.  The server bootstrapper has been reworked for this new flow, and large portions of the temporary bootstrapping setup have been removed.
    - Server Bootstrapping Mode default change - the default mode for server bootstrapping is now the Disabled mode.  This is to preserve editor functionality when using PIE.  All bootstrap modes must now be specified on the commandline, in order for the host provider interface to be able to process them properly.
    - PS4 non-crossgen - We have restored support for PS4 logins not using crossgen support.  Note that we recommend using the cross gen support for a better experience.
    - Editor support - Some initial pass at editor support for the integration layer, for doing things like adding Item definitions that are backed by the RallyHere API.  This removes the PInvEditor functionality from RHExampleGame as part of converting to this new editor plugin.
    - Platform Sessions (Steam, Epic, Xbox, etc) - initial support pass has been completed, with validation on Steam and Epic platforms.  Platform Sessions can now be configured on session templates, and specifying one will try to automatically create a session on the specified platform when a player joins that session type.  Once joined, it will set that platform session information onto the rally here session, so that other players can join.  Note that this support is in its initial stages, and aimed primarily at allowing platform session invites to function.
		- NOTE - UE5's OnlineSubsystemSteam does not implement FindSessionById, which causes some Steam functionality to break.  We will be evaluating workarounds for this in upcoming releases.  This mostly affects cases where a player joins a RallyHere session without a Steam platform invite.
    - Engine Changes - we have finished removing the dependencies on engine changes present in previous SDKs, and now work with an unaltered Unreal Engine.  We still test primarily against UE 5.1, though we have done some basic checks against 5.2.1.  If you run into issues with newer versions of the engine, please let us know.
    - Inventory - CreateNewPlayerOrder now accepts custom data
    - Notifications - notification support has been added for inventory changes, and the notification handler has been moved from URH_LocalPlayerSubsystem to URH_PlayerInfo (with a getter on the subsystem that finds the local player info).  This is to allow support for hosts listening for notifications for connected clients.
    - OnlineSubsystemSteamV2 - various fixes including crash fixes.
    - RallyHereAPI generator - the RallyHereAPI plugin code generator is now embedded into the RallyHere integration plugins.  Running the generate.bash file in the RallyHereAPI folder will allow you to generate a new API spec based on a specified sandbox (defaults to our public spec).  Note that this must be run in a Linux environment (WSL2 works fine for Windows developers).
    - WebRequest Tracking/Logging - improved sanitization of some sensitive IDs from the logging and display window, so that errors from those windows can be shared more easily.
    - Web Request Throttling / Priority - a throttling and priority system have been added to web requests, to allow for better control over bursts of requests.  This should also allow for platforms with more limited HTTP functionality to have an easier time with the API calls.
    - EOS purchasing fix - speculative fix for an issue where EOS purchases were redeemed within the OSS layer before being sent for redemption to the RallyHere API.

### 0.8.0

- Enhanced Custom Game lobby functionality while improving and fixing some bugs
- Completed move to UE5 EnhancedInput system
- Improved handling of API query failures
- Restructured game event handling for data analytics
- Added performance trace events throughout API and Integration layers
- Expanded debug tool functionality for Players, Friends, Sessions, and Web Requests windows
- Deprecated use of "Gamertag" from RallyHereStart, RallyHereIntegration, and RallyHereDebugTool in favor of "Display Name"
- Deprecated PlatformTypes enumeration as it's being replaced by well known strings
- Fixed a handful of issues with Example Game functionality on consoles
- Fixed player state UUID not being set when using a class extended off RHGameModeBase

### 0.7.0

- Transitioned from legacy input system to enhanced input system (still in progress)
- Added Game Host Adaptor to enable adding new instance server hosts without requiring code updates
- Added Custom Lobby functionality using sessions
- Added session notifications to expedite party and matchmaking invitations
- Fixed party invites not always displaying a prompt to accept/decline
- Added support for beacons to session system
- Added example of in-game scoreboard
- Added example of dynamic news via JSON data factory
- Hooked up platform achievements
- Added support for coupons (items that discount prices on soft/premium currency purchases)
- Added logout support
- Added support for recently played with players and platform blocking of players
- Various bug fixes and enhancements in the debug overlay UI
- Multitude of bug fixes on social overlay UI
- Fixes and improvements in voucher redemption system

### 0.6.0

- Hooked up Custom Lobby (still WIP)
- Reworked login callback system to be hooked to the GameInstance
- Improved order handling, polling, and caching
- Added suppport for fetching of TempDisabledItems
- Fixed portal purchases not automatically processing when checkout is complete
- Fixed player status and default avatar not showing up for Platform friends
- Added requesting of Twitch/Amazon entitlements on login
- Converted Catalog Subsystem to directly use the API plugin's Vendor struct
- Converted Catalog Subsystem to directly use the API plugin's XP table struct
- Various fixes and improvements to the Debug Tool

### 0.5.0

- Removed PlatformGameFramework plugin (RHExampleGame\Plugins\Hirez\PlatformGameFramework) - most of it got moved to Example Game
- Removed PlatformUMG plugin (RHExampleGame\Plugins\Hirez\PlatformUMG) - most of it got moved into the RallyHereStart plugin
- Got Party Sessions and Match Sessions functional (Custom Games are still WIP)
- Updated Battle Pass to use API functions
- Updated SettingsDataFactory to use API functions
- Fixed purchasing and acquisitions
- Various player display fixes:
    - Fixed player info displays not working after returning from a match
    - Fixed Platform Friends always showing up under "Party Invites"
    - Fixed Platform friends not refreshing the friend count on the main lobby screen
    - Fixed player presence not consistently updating on player cards
- Fixed Escape menu not being available on Login screen
- Converted Site ID (integer) to Region ID (string)
- Removed Rogue Company team members from the credits screen

### 0.4.0

- Added Inventory Subsystem to RallyHereIntegration plugin
- Converted from legacy loadout support to new Settings API
- Added legacy Player ID support to Inventory and Settings Subsystems

### 0.3.0

- Fixed cooking of account cosmetics, reputation, and store items by changing PrimaryAssetTypesToScan entry for PlatformInventoryItem in DefaultEngine.ini to AlwaysCook
- First pass build of Player Manager, not yet ready for use
- Continued work on new session system, not yet ready for use
- Removed HiRez specific level loading logic from PGame layer
- Fixed issues where affordability checks were failing due to unloaded objects
- Fixed the join queue button defaulting to "No Game Mode Selected"
- Added support for displaying store items and prices with an invalid currency type

### 0.2.0

- Hooked up purchasing of Battle Pass and Battle Pass levels
- Added a cinematic video player that plays while logging in (currently playing the Georgia Peach video as a placeholder)
- Changed default OSS to Steam
- Fixed consolidated font support for Chinese, Japanese, Korean, and Arabic
- Cleaned up a massive amount of warning logs
- Added Presence and Session Browser support to the RallyHere Debug Tool