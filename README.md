# RallyHere Unreal Plugins

## Change History

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
- Specific Improvements:
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