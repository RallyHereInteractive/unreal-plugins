# Events <a id="group__Events"></a>

## Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public void RALLYHEREINTEGRATION_API `[`CreateCustomDataAttributes`](#group__Events_1gaa582d62c9f49b2f7fd8f24fa6ae4d6df)`(const TOptional< TMap< FString, FString >> & InCustomData,TArray< FAnalyticsEventAttribute > & Attributes)`            | 
`public TSharedPtr< class IAnalyticsProvider > RALLYHEREINTEGRATION_API `[`AutoCreateAnalyticsProvider`](#group__Events_1ga7eb36ad6c9fda8dbaf75f0105729e359)`()`            | 
`public FORCEINLINE FJsonFragment `[`JsonValueToFragment`](#group__Events_1ga030389845523022e1934e67c81e62df9)`(const TSharedPtr< FJsonValue > & InJsonValue)`            | 
`struct `[`RHStandardEvents::FCorrelationStartEvent`](#structRHStandardEvents_1_1FCorrelationStartEvent) | Event that is triggered at the start of the application and when we have generated a correlation_id to track events.
`struct `[`RHStandardEvents::FCorrelationEndEvent`](#structRHStandardEvents_1_1FCorrelationEndEvent) | This event is triggered to mark the end of tracking events. Typically triggered when the client gracefully is closed.
`struct `[`RHStandardEvents::FClientDeviceEvent`](#structRHStandardEvents_1_1FClientDeviceEvent) | Records the first time a user launches an app and when device information changes.
`struct `[`RHStandardEvents::FInstanceJoinStartEvent`](#structRHStandardEvents_1_1FInstanceJoinStartEvent) | This event is triggered when the player / game client has an instance to connect to and has started the process to connect to it.
`struct `[`RHStandardEvents::FInstanceJoinCompleteEvent`](#structRHStandardEvents_1_1FInstanceJoinCompleteEvent) | This event is triggered when the player / game client has attempted to connect to the instance.This event will capture both the success and the failure to connect to an instance.
`struct `[`RHStandardEvents::FInstanceLeftEvent`](#structRHStandardEvents_1_1FInstanceLeftEvent) | This event is triggered when a player / game client has disconnected from the instance.
`struct `[`RHStandardEvents::FInstanceHelloReceivedEvent`](#structRHStandardEvents_1_1FInstanceHelloReceivedEvent) | This event is triggered when the host detects a hello signal from a player / game client attempting to connect to it.
`struct `[`RHStandardEvents::FInstanceLoginReceivedEvent`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent) | This event is triggered when the host receives a login signal from a player / game client attempting to connect to it.
`struct `[`RHStandardEvents::FInstanceJoinReceivedEvent`](#structRHStandardEvents_1_1FInstanceJoinReceivedEvent) | This event is triggered when the host receives a join signal from a player / game client attempting to connect to it.
`struct `[`RHStandardEvents::FInstanceClientDisconnectEvent`](#structRHStandardEvents_1_1FInstanceClientDisconnectEvent) | This event is triggered when the host detects a client disconnection (either caused by it, or by the client).
`struct `[`RHStandardEvents::FLoginStartEvent`](#structRHStandardEvents_1_1FLoginStartEvent) | This event is triggered at the start of the client login process.
`struct `[`RHStandardEvents::FLoginCompleteEvent`](#structRHStandardEvents_1_1FLoginCompleteEvent) | This event is triggered when the login process has completed.This event is meant to capture both successful and failed login attempts.
`struct `[`RHStandardEvents::FObjectiveProgressEvent`](#structRHStandardEvents_1_1FObjectiveProgressEvent) | This event is meant to be triggered when a player has earned progress on an objective.The RHIntegration Plugin will not automatically trigger this, but this event is something that RallyHere will process and have an understanding of the data.
`struct `[`RHStandardEvents::FPlayerGameResultEvent`](#structRHStandardEvents_1_1FPlayerGameResultEvent) | This event is meant to capture high level information about a completed match.
`struct `[`RHStandardEvents::FPlatformPurchaseEvent`](#structRHStandardEvents_1_1FPlatformPurchaseEvent) | This event is triggered when processing of a real money purchase has been completed.
`struct `[`RHStandardEvents::FCustomEvent`](#structRHStandardEvents_1_1FCustomEvent) | This is a wrapper for providing custom event data.

## Members

#### `public void RALLYHEREINTEGRATION_API `[`CreateCustomDataAttributes`](#group__Events_1gaa582d62c9f49b2f7fd8f24fa6ae4d6df)`(const TOptional< TMap< FString, FString >> & InCustomData,TArray< FAnalyticsEventAttribute > & Attributes)` <a id="group__Events_1gaa582d62c9f49b2f7fd8f24fa6ae4d6df"></a>

#### `public TSharedPtr< class IAnalyticsProvider > RALLYHEREINTEGRATION_API `[`AutoCreateAnalyticsProvider`](#group__Events_1ga7eb36ad6c9fda8dbaf75f0105729e359)`()` <a id="group__Events_1ga7eb36ad6c9fda8dbaf75f0105729e359"></a>

#### `public FORCEINLINE FJsonFragment `[`JsonValueToFragment`](#group__Events_1ga030389845523022e1934e67c81e62df9)`(const TSharedPtr< FJsonValue > & InJsonValue)` <a id="group__Events_1ga030389845523022e1934e67c81e62df9"></a>

## struct `RHStandardEvents::FCorrelationStartEvent` <a id="structRHStandardEvents_1_1FCorrelationStartEvent"></a>

Event that is triggered at the start of the application and when we have generated a correlation_id to track events.

rh.correlation_start

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`PlatformName`](#structRHStandardEvents_1_1FCorrelationStartEvent_1a8e604b52ad66462ed3bfeed0d636db82) | Used for tracking platform enumerations.List of possible values.
`public FString `[`ClientBuildVersion`](#structRHStandardEvents_1_1FCorrelationStartEvent_1a6cc8e387b5bbcba8603e9863b330646e) | The build version of the client.
`public FString `[`EngineVersion`](#structRHStandardEvents_1_1FCorrelationStartEvent_1adc9fa712ac009d6a5a4c0bf59baab9f2) | The version of the engine.
`public FString `[`IntegrationPluginVersion`](#structRHStandardEvents_1_1FCorrelationStartEvent_1aae577244f7c1ebff56e414a33c13fecb) | The version of the integration plugin.
`public FString `[`ClientTimestamp`](#structRHStandardEvents_1_1FCorrelationStartEvent_1a55a8d1162dcd1bd7f15fed4d5bfd2b73) | The client timestamp when the event was triggered.
`public TOptional< FString > `[`ServerTimestamp`](#structRHStandardEvents_1_1FCorrelationStartEvent_1ad9506893fe3a9e17b618bcb18627b6f8) | The client's estimated server timestamp when the event was triggered.
`public TOptional< FString > `[`CommandLineArg`](#structRHStandardEvents_1_1FCorrelationStartEvent_1a3747872c0a5f42f5c2bd8f48165b058a) | The command line arguments passed to the client.
`public TOptional< bool > `[`IsEditor`](#structRHStandardEvents_1_1FCorrelationStartEvent_1a2dd4d71e29afe5f6ae4f0a5874ace098) | Whether the client is running in editor mode.
`public TOptional< FString > `[`Mode`](#structRHStandardEvents_1_1FCorrelationStartEvent_1a44a1e5df276714002007b51441393896) | The mode the client is running in.
`public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FCorrelationStartEvent_1a8d0e6c9968c9c4268ccb31d72aea70e2) | custom data fields (will be auto-prefixed with custom data prefix)
`public inline  `[`FCorrelationStartEvent`](#structRHStandardEvents_1_1FCorrelationStartEvent_1a1a51eff01e7eb9d12b21c31bf06b8070)`()` | 
`public inline void `[`EmitTo`](#structRHStandardEvents_1_1FCorrelationStartEvent_1a0ccb1224987fdfcd710ce798dbedf13d)`(IAnalyticsProvider * Provider) const` | 

#### Members

#### `public FString `[`PlatformName`](#structRHStandardEvents_1_1FCorrelationStartEvent_1a8e604b52ad66462ed3bfeed0d636db82) <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1a8e604b52ad66462ed3bfeed0d636db82"></a>

Used for tracking platform enumerations.List of possible values.

<br>
#### `public FString `[`ClientBuildVersion`](#structRHStandardEvents_1_1FCorrelationStartEvent_1a6cc8e387b5bbcba8603e9863b330646e) <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1a6cc8e387b5bbcba8603e9863b330646e"></a>

The build version of the client.

<br>
#### `public FString `[`EngineVersion`](#structRHStandardEvents_1_1FCorrelationStartEvent_1adc9fa712ac009d6a5a4c0bf59baab9f2) <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1adc9fa712ac009d6a5a4c0bf59baab9f2"></a>

The version of the engine.

<br>
#### `public FString `[`IntegrationPluginVersion`](#structRHStandardEvents_1_1FCorrelationStartEvent_1aae577244f7c1ebff56e414a33c13fecb) <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1aae577244f7c1ebff56e414a33c13fecb"></a>

The version of the integration plugin.

<br>
#### `public FString `[`ClientTimestamp`](#structRHStandardEvents_1_1FCorrelationStartEvent_1a55a8d1162dcd1bd7f15fed4d5bfd2b73) <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1a55a8d1162dcd1bd7f15fed4d5bfd2b73"></a>

The client timestamp when the event was triggered.

<br>
#### `public TOptional< FString > `[`ServerTimestamp`](#structRHStandardEvents_1_1FCorrelationStartEvent_1ad9506893fe3a9e17b618bcb18627b6f8) <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1ad9506893fe3a9e17b618bcb18627b6f8"></a>

The client's estimated server timestamp when the event was triggered.

<br>
#### `public TOptional< FString > `[`CommandLineArg`](#structRHStandardEvents_1_1FCorrelationStartEvent_1a3747872c0a5f42f5c2bd8f48165b058a) <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1a3747872c0a5f42f5c2bd8f48165b058a"></a>

The command line arguments passed to the client.

<br>
#### `public TOptional< bool > `[`IsEditor`](#structRHStandardEvents_1_1FCorrelationStartEvent_1a2dd4d71e29afe5f6ae4f0a5874ace098) <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1a2dd4d71e29afe5f6ae4f0a5874ace098"></a>

Whether the client is running in editor mode.

<br>
#### `public TOptional< FString > `[`Mode`](#structRHStandardEvents_1_1FCorrelationStartEvent_1a44a1e5df276714002007b51441393896) <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1a44a1e5df276714002007b51441393896"></a>

The mode the client is running in.

<br>
#### `public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FCorrelationStartEvent_1a8d0e6c9968c9c4268ccb31d72aea70e2) <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1a8d0e6c9968c9c4268ccb31d72aea70e2"></a>

custom data fields (will be auto-prefixed with custom data prefix)

<br>
#### `public inline  `[`FCorrelationStartEvent`](#structRHStandardEvents_1_1FCorrelationStartEvent_1a1a51eff01e7eb9d12b21c31bf06b8070)`()` <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1a1a51eff01e7eb9d12b21c31bf06b8070"></a>

<br>
#### `public inline void `[`EmitTo`](#structRHStandardEvents_1_1FCorrelationStartEvent_1a0ccb1224987fdfcd710ce798dbedf13d)`(IAnalyticsProvider * Provider) const` <a id="structRHStandardEvents_1_1FCorrelationStartEvent_1a0ccb1224987fdfcd710ce798dbedf13d"></a>

<br>
## struct `RHStandardEvents::FCorrelationEndEvent` <a id="structRHStandardEvents_1_1FCorrelationEndEvent"></a>

This event is triggered to mark the end of tracking events. Typically triggered when the client gracefully is closed.

rh.correlation_end

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TOptional< FString > `[`Reason`](#structRHStandardEvents_1_1FCorrelationEndEvent_1a13520150a2320beaa4d3fb6e711e942c) | The reason for the correlation to end.
`public TOptional< float > `[`DurationSeconds`](#structRHStandardEvents_1_1FCorrelationEndEvent_1a2198feae504ef70955648fe7752b37d7) | The duration of the correlation.
`public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FCorrelationEndEvent_1a2c182c2aafe72419987a26a15e57708b) | custom data fields (will be auto-prefixed with custom data prefix)
`public inline  `[`FCorrelationEndEvent`](#structRHStandardEvents_1_1FCorrelationEndEvent_1ab67461755e3ea773980869285b599e8d)`()` | 
`public inline void `[`EmitTo`](#structRHStandardEvents_1_1FCorrelationEndEvent_1a19410683fa4e5105f754323ce77be689)`(IAnalyticsProvider * Provider) const` | 

#### Members

#### `public TOptional< FString > `[`Reason`](#structRHStandardEvents_1_1FCorrelationEndEvent_1a13520150a2320beaa4d3fb6e711e942c) <a id="structRHStandardEvents_1_1FCorrelationEndEvent_1a13520150a2320beaa4d3fb6e711e942c"></a>

The reason for the correlation to end.

<br>
#### `public TOptional< float > `[`DurationSeconds`](#structRHStandardEvents_1_1FCorrelationEndEvent_1a2198feae504ef70955648fe7752b37d7) <a id="structRHStandardEvents_1_1FCorrelationEndEvent_1a2198feae504ef70955648fe7752b37d7"></a>

The duration of the correlation.

<br>
#### `public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FCorrelationEndEvent_1a2c182c2aafe72419987a26a15e57708b) <a id="structRHStandardEvents_1_1FCorrelationEndEvent_1a2c182c2aafe72419987a26a15e57708b"></a>

custom data fields (will be auto-prefixed with custom data prefix)

<br>
#### `public inline  `[`FCorrelationEndEvent`](#structRHStandardEvents_1_1FCorrelationEndEvent_1ab67461755e3ea773980869285b599e8d)`()` <a id="structRHStandardEvents_1_1FCorrelationEndEvent_1ab67461755e3ea773980869285b599e8d"></a>

<br>
#### `public inline void `[`EmitTo`](#structRHStandardEvents_1_1FCorrelationEndEvent_1a19410683fa4e5105f754323ce77be689)`(IAnalyticsProvider * Provider) const` <a id="structRHStandardEvents_1_1FCorrelationEndEvent_1a19410683fa4e5105f754323ce77be689"></a>

<br>
## struct `RHStandardEvents::FClientDeviceEvent` <a id="structRHStandardEvents_1_1FClientDeviceEvent"></a>

Records the first time a user launches an app and when device information changes.

rh.client_device

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TOptional< FString > `[`CpuType`](#structRHStandardEvents_1_1FClientDeviceEvent_1a8a9cb7125da22db2fca5e9f37b577a8c) | The type of CPU.
`public TOptional< int32 > `[`CpuCores`](#structRHStandardEvents_1_1FClientDeviceEvent_1a600aefe9173f574976a7b60235cf2daf) | The number of logical CPU cores.
`public TOptional< FString > `[`GpuType`](#structRHStandardEvents_1_1FClientDeviceEvent_1a6dd0de7fad58903b5f80f352144a1ef6) | The reference of the GPU(brand name and model)
`public TOptional< int32 > `[`ScreenHeight`](#structRHStandardEvents_1_1FClientDeviceEvent_1ad76cec719196daa0ed83f36e873148f4) | Maximum known number of height pixels(dpi)
`public TOptional< int32 > `[`ScreenWidth`](#structRHStandardEvents_1_1FClientDeviceEvent_1a3d248cbe9809b22653d10a72f08130a0) | Maximum known number of width pixels(dpi)
`public TOptional< int32 > `[`RamTotal`](#structRHStandardEvents_1_1FClientDeviceEvent_1a8df7f359bd078ae6622a98d0e70aa35a) | Size of the RAM on the device in megabytes.
`public TOptional< int32 > `[`RamAvailable`](#structRHStandardEvents_1_1FClientDeviceEvent_1ada61fffa384c031f8f39b2db6fab2801) | Size of the available RAM on the device in megabytes.
`public TOptional< FString > `[`Ip`](#structRHStandardEvents_1_1FClientDeviceEvent_1a8dbd86970e47d2e6cc456df43f61c92a) | This is the IP of the game client.
`public TOptional< FString > `[`DeviceType`](#structRHStandardEvents_1_1FClientDeviceEvent_1a52fbd8a4229809e92327d3e6f83cc4c5) | This will be then platform the game client is running on.
`public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FClientDeviceEvent_1a341236af57be2415969ac60cc296c7c5) | custom data fields (will be auto-prefixed with custom data prefix)
`public inline  `[`FClientDeviceEvent`](#structRHStandardEvents_1_1FClientDeviceEvent_1ad549fc630bc30c9f77f2d5f1a6c39ac3)`()` | 
`public inline void `[`EmitTo`](#structRHStandardEvents_1_1FClientDeviceEvent_1acfb344c95e558432c3a3e07311be7fc9)`(IAnalyticsProvider * Provider) const` | 

#### Members

#### `public TOptional< FString > `[`CpuType`](#structRHStandardEvents_1_1FClientDeviceEvent_1a8a9cb7125da22db2fca5e9f37b577a8c) <a id="structRHStandardEvents_1_1FClientDeviceEvent_1a8a9cb7125da22db2fca5e9f37b577a8c"></a>

The type of CPU.

<br>
#### `public TOptional< int32 > `[`CpuCores`](#structRHStandardEvents_1_1FClientDeviceEvent_1a600aefe9173f574976a7b60235cf2daf) <a id="structRHStandardEvents_1_1FClientDeviceEvent_1a600aefe9173f574976a7b60235cf2daf"></a>

The number of logical CPU cores.

<br>
#### `public TOptional< FString > `[`GpuType`](#structRHStandardEvents_1_1FClientDeviceEvent_1a6dd0de7fad58903b5f80f352144a1ef6) <a id="structRHStandardEvents_1_1FClientDeviceEvent_1a6dd0de7fad58903b5f80f352144a1ef6"></a>

The reference of the GPU(brand name and model)

<br>
#### `public TOptional< int32 > `[`ScreenHeight`](#structRHStandardEvents_1_1FClientDeviceEvent_1ad76cec719196daa0ed83f36e873148f4) <a id="structRHStandardEvents_1_1FClientDeviceEvent_1ad76cec719196daa0ed83f36e873148f4"></a>

Maximum known number of height pixels(dpi)

<br>
#### `public TOptional< int32 > `[`ScreenWidth`](#structRHStandardEvents_1_1FClientDeviceEvent_1a3d248cbe9809b22653d10a72f08130a0) <a id="structRHStandardEvents_1_1FClientDeviceEvent_1a3d248cbe9809b22653d10a72f08130a0"></a>

Maximum known number of width pixels(dpi)

<br>
#### `public TOptional< int32 > `[`RamTotal`](#structRHStandardEvents_1_1FClientDeviceEvent_1a8df7f359bd078ae6622a98d0e70aa35a) <a id="structRHStandardEvents_1_1FClientDeviceEvent_1a8df7f359bd078ae6622a98d0e70aa35a"></a>

Size of the RAM on the device in megabytes.

<br>
#### `public TOptional< int32 > `[`RamAvailable`](#structRHStandardEvents_1_1FClientDeviceEvent_1ada61fffa384c031f8f39b2db6fab2801) <a id="structRHStandardEvents_1_1FClientDeviceEvent_1ada61fffa384c031f8f39b2db6fab2801"></a>

Size of the available RAM on the device in megabytes.

<br>
#### `public TOptional< FString > `[`Ip`](#structRHStandardEvents_1_1FClientDeviceEvent_1a8dbd86970e47d2e6cc456df43f61c92a) <a id="structRHStandardEvents_1_1FClientDeviceEvent_1a8dbd86970e47d2e6cc456df43f61c92a"></a>

This is the IP of the game client.

<br>
#### `public TOptional< FString > `[`DeviceType`](#structRHStandardEvents_1_1FClientDeviceEvent_1a52fbd8a4229809e92327d3e6f83cc4c5) <a id="structRHStandardEvents_1_1FClientDeviceEvent_1a52fbd8a4229809e92327d3e6f83cc4c5"></a>

This will be then platform the game client is running on.

<br>
#### `public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FClientDeviceEvent_1a341236af57be2415969ac60cc296c7c5) <a id="structRHStandardEvents_1_1FClientDeviceEvent_1a341236af57be2415969ac60cc296c7c5"></a>

custom data fields (will be auto-prefixed with custom data prefix)

<br>
#### `public inline  `[`FClientDeviceEvent`](#structRHStandardEvents_1_1FClientDeviceEvent_1ad549fc630bc30c9f77f2d5f1a6c39ac3)`()` <a id="structRHStandardEvents_1_1FClientDeviceEvent_1ad549fc630bc30c9f77f2d5f1a6c39ac3"></a>

<br>
#### `public inline void `[`EmitTo`](#structRHStandardEvents_1_1FClientDeviceEvent_1acfb344c95e558432c3a3e07311be7fc9)`(IAnalyticsProvider * Provider) const` <a id="structRHStandardEvents_1_1FClientDeviceEvent_1acfb344c95e558432c3a3e07311be7fc9"></a>

<br>
## struct `RHStandardEvents::FInstanceJoinStartEvent` <a id="structRHStandardEvents_1_1FInstanceJoinStartEvent"></a>

This event is triggered when the player / game client has an instance to connect to and has started the process to connect to it.

rh.instance_join_start

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TOptional< FString > `[`SessionId`](#structRHStandardEvents_1_1FInstanceJoinStartEvent_1ac697b9f001444fb9d7485ecfe41630b0) | The session_id of the instance the player is attempting to join.
`public TOptional< FString > `[`InstanceId`](#structRHStandardEvents_1_1FInstanceJoinStartEvent_1a1e83a69a7bb5bfe0ceb77535c1d2f185) | The instance_id of the instance the player is attempting to join.
`public TOptional< FString > `[`ConnectionString`](#structRHStandardEvents_1_1FInstanceJoinStartEvent_1a133d73e2a9d924f03beb8701a94fa153) | The connection string of the instance the player is attempting to join.
`public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FInstanceJoinStartEvent_1a809a4e3ad455ea11f699db5e96c823c0) | custom data fields (will be auto-prefixed with custom data prefix)
`public inline  `[`FInstanceJoinStartEvent`](#structRHStandardEvents_1_1FInstanceJoinStartEvent_1a9fe9145048ff3fc4d3c3c951d8a1f2ec)`()` | 
`public inline void `[`EmitTo`](#structRHStandardEvents_1_1FInstanceJoinStartEvent_1a410a6489ad2d7531ad7bd5816d9306a3)`(IAnalyticsProvider * Provider) const` | 

#### Members

#### `public TOptional< FString > `[`SessionId`](#structRHStandardEvents_1_1FInstanceJoinStartEvent_1ac697b9f001444fb9d7485ecfe41630b0) <a id="structRHStandardEvents_1_1FInstanceJoinStartEvent_1ac697b9f001444fb9d7485ecfe41630b0"></a>

The session_id of the instance the player is attempting to join.

<br>
#### `public TOptional< FString > `[`InstanceId`](#structRHStandardEvents_1_1FInstanceJoinStartEvent_1a1e83a69a7bb5bfe0ceb77535c1d2f185) <a id="structRHStandardEvents_1_1FInstanceJoinStartEvent_1a1e83a69a7bb5bfe0ceb77535c1d2f185"></a>

The instance_id of the instance the player is attempting to join.

<br>
#### `public TOptional< FString > `[`ConnectionString`](#structRHStandardEvents_1_1FInstanceJoinStartEvent_1a133d73e2a9d924f03beb8701a94fa153) <a id="structRHStandardEvents_1_1FInstanceJoinStartEvent_1a133d73e2a9d924f03beb8701a94fa153"></a>

The connection string of the instance the player is attempting to join.

<br>
#### `public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FInstanceJoinStartEvent_1a809a4e3ad455ea11f699db5e96c823c0) <a id="structRHStandardEvents_1_1FInstanceJoinStartEvent_1a809a4e3ad455ea11f699db5e96c823c0"></a>

custom data fields (will be auto-prefixed with custom data prefix)

<br>
#### `public inline  `[`FInstanceJoinStartEvent`](#structRHStandardEvents_1_1FInstanceJoinStartEvent_1a9fe9145048ff3fc4d3c3c951d8a1f2ec)`()` <a id="structRHStandardEvents_1_1FInstanceJoinStartEvent_1a9fe9145048ff3fc4d3c3c951d8a1f2ec"></a>

<br>
#### `public inline void `[`EmitTo`](#structRHStandardEvents_1_1FInstanceJoinStartEvent_1a410a6489ad2d7531ad7bd5816d9306a3)`(IAnalyticsProvider * Provider) const` <a id="structRHStandardEvents_1_1FInstanceJoinStartEvent_1a410a6489ad2d7531ad7bd5816d9306a3"></a>

<br>
## struct `RHStandardEvents::FInstanceJoinCompleteEvent` <a id="structRHStandardEvents_1_1FInstanceJoinCompleteEvent"></a>

This event is triggered when the player / game client has attempted to connect to the instance.This event will capture both the success and the failure to connect to an instance.

rh.instnace_join_complete

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`IsSuccess`](#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a7f22215472927a1e1560f110957b381a) | Whether or not the join was an overall success.
`public TOptional< FString > `[`SessionId`](#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1afe91b49ca38affef3d630953d8fcb112) | The session_id of the instance the player is attempting to join.
`public TOptional< FString > `[`InstanceId`](#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1ab9e632d1a19e316929798e3b252bd71a) | The instance_id of the instance the player is attempting to join.
`public TOptional< FString > `[`Reason`](#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a8295d75bbfd9a941c64eeb68b8722c6d) | The reason for the failure to join the instance.
`public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a7a60eeaf37414665063ad1a6386fb40c) | custom data fields (will be auto-prefixed with custom data prefix)
`public inline  `[`FInstanceJoinCompleteEvent`](#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a90fc553eeebc4e89006ed2709011fc10)`()` | 
`public inline void `[`EmitTo`](#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1aef5e96360a6ac8389b5371a78efddf98)`(IAnalyticsProvider * Provider) const` | 

#### Members

#### `public bool `[`IsSuccess`](#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a7f22215472927a1e1560f110957b381a) <a id="structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a7f22215472927a1e1560f110957b381a"></a>

Whether or not the join was an overall success.

<br>
#### `public TOptional< FString > `[`SessionId`](#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1afe91b49ca38affef3d630953d8fcb112) <a id="structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1afe91b49ca38affef3d630953d8fcb112"></a>

The session_id of the instance the player is attempting to join.

<br>
#### `public TOptional< FString > `[`InstanceId`](#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1ab9e632d1a19e316929798e3b252bd71a) <a id="structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1ab9e632d1a19e316929798e3b252bd71a"></a>

The instance_id of the instance the player is attempting to join.

<br>
#### `public TOptional< FString > `[`Reason`](#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a8295d75bbfd9a941c64eeb68b8722c6d) <a id="structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a8295d75bbfd9a941c64eeb68b8722c6d"></a>

The reason for the failure to join the instance.

<br>
#### `public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a7a60eeaf37414665063ad1a6386fb40c) <a id="structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a7a60eeaf37414665063ad1a6386fb40c"></a>

custom data fields (will be auto-prefixed with custom data prefix)

<br>
#### `public inline  `[`FInstanceJoinCompleteEvent`](#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a90fc553eeebc4e89006ed2709011fc10)`()` <a id="structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1a90fc553eeebc4e89006ed2709011fc10"></a>

<br>
#### `public inline void `[`EmitTo`](#structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1aef5e96360a6ac8389b5371a78efddf98)`(IAnalyticsProvider * Provider) const` <a id="structRHStandardEvents_1_1FInstanceJoinCompleteEvent_1aef5e96360a6ac8389b5371a78efddf98"></a>

<br>
## struct `RHStandardEvents::FInstanceLeftEvent` <a id="structRHStandardEvents_1_1FInstanceLeftEvent"></a>

This event is triggered when a player / game client has disconnected from the instance.

rh.instance_left

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TOptional< FString > `[`SessionId`](#structRHStandardEvents_1_1FInstanceLeftEvent_1a137db99dea205b6820ee4012be508b8d) | The session_id of the instance the player is leaving.
`public TOptional< FString > `[`InstanceId`](#structRHStandardEvents_1_1FInstanceLeftEvent_1ad43fed5658c18978918684d96c785306) | The instance_id of the instance the player is leaving.
`public TOptional< FString > `[`Reason`](#structRHStandardEvents_1_1FInstanceLeftEvent_1a686540f637f62130ffc392ede61f09f9) | The reason for the player leaving the instance.
`public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FInstanceLeftEvent_1af42085b7b056b6dd38e169dd0342811e) | custom data fields (will be auto-prefixed with custom data prefix)
`public inline  `[`FInstanceLeftEvent`](#structRHStandardEvents_1_1FInstanceLeftEvent_1a698bd9d2e86ef8f5956b84286c677ba6)`()` | 
`public inline void `[`EmitTo`](#structRHStandardEvents_1_1FInstanceLeftEvent_1acb0af23c65982c32df6644f4b4a82b6f)`(IAnalyticsProvider * Provider) const` | 

#### Members

#### `public TOptional< FString > `[`SessionId`](#structRHStandardEvents_1_1FInstanceLeftEvent_1a137db99dea205b6820ee4012be508b8d) <a id="structRHStandardEvents_1_1FInstanceLeftEvent_1a137db99dea205b6820ee4012be508b8d"></a>

The session_id of the instance the player is leaving.

<br>
#### `public TOptional< FString > `[`InstanceId`](#structRHStandardEvents_1_1FInstanceLeftEvent_1ad43fed5658c18978918684d96c785306) <a id="structRHStandardEvents_1_1FInstanceLeftEvent_1ad43fed5658c18978918684d96c785306"></a>

The instance_id of the instance the player is leaving.

<br>
#### `public TOptional< FString > `[`Reason`](#structRHStandardEvents_1_1FInstanceLeftEvent_1a686540f637f62130ffc392ede61f09f9) <a id="structRHStandardEvents_1_1FInstanceLeftEvent_1a686540f637f62130ffc392ede61f09f9"></a>

The reason for the player leaving the instance.

<br>
#### `public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FInstanceLeftEvent_1af42085b7b056b6dd38e169dd0342811e) <a id="structRHStandardEvents_1_1FInstanceLeftEvent_1af42085b7b056b6dd38e169dd0342811e"></a>

custom data fields (will be auto-prefixed with custom data prefix)

<br>
#### `public inline  `[`FInstanceLeftEvent`](#structRHStandardEvents_1_1FInstanceLeftEvent_1a698bd9d2e86ef8f5956b84286c677ba6)`()` <a id="structRHStandardEvents_1_1FInstanceLeftEvent_1a698bd9d2e86ef8f5956b84286c677ba6"></a>

<br>
#### `public inline void `[`EmitTo`](#structRHStandardEvents_1_1FInstanceLeftEvent_1acb0af23c65982c32df6644f4b4a82b6f)`(IAnalyticsProvider * Provider) const` <a id="structRHStandardEvents_1_1FInstanceLeftEvent_1acb0af23c65982c32df6644f4b4a82b6f"></a>

<br>
## struct `RHStandardEvents::FInstanceHelloReceivedEvent` <a id="structRHStandardEvents_1_1FInstanceHelloReceivedEvent"></a>

This event is triggered when the host detects a hello signal from a player / game client attempting to connect to it.

rh.instance_hello_received

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TOptional< FString > `[`SessionId`](#structRHStandardEvents_1_1FInstanceHelloReceivedEvent_1a62b4a2a6d6cce74d720b1fdf3a14b53e) | The session_id of the instance the player is attempting to join.
`public TOptional< FString > `[`InstanceId`](#structRHStandardEvents_1_1FInstanceHelloReceivedEvent_1a6153fd5f9c7e753526144af2b90d461e) | The instance_id of the instance the player is attempting to join.
`public TOptional< FGuid > `[`UserId`](#structRHStandardEvents_1_1FInstanceHelloReceivedEvent_1aaa5fd1a2f2df19100fda3eaff1683272) | The user id of the instance the player is attempting to join.
`public TOptional< FString > `[`IpAddress`](#structRHStandardEvents_1_1FInstanceHelloReceivedEvent_1ae7d2fb50c71dac5533ddbd9bd2314bc3) | The incoming IP Address the connection is originating from.
`public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FInstanceHelloReceivedEvent_1a4192fcb94955a7d002b4f72f8f638237) | custom data fields (will be auto-prefixed with custom data prefix)
`public inline  `[`FInstanceHelloReceivedEvent`](#structRHStandardEvents_1_1FInstanceHelloReceivedEvent_1acf31d6acaee497ce21e28d13c868d677)`()` | 
`public inline void `[`EmitTo`](#structRHStandardEvents_1_1FInstanceHelloReceivedEvent_1a8dd8971a4314464e14e9a02932a0db5c)`(IAnalyticsProvider * Provider) const` | 

#### Members

#### `public TOptional< FString > `[`SessionId`](#structRHStandardEvents_1_1FInstanceHelloReceivedEvent_1a62b4a2a6d6cce74d720b1fdf3a14b53e) <a id="structRHStandardEvents_1_1FInstanceHelloReceivedEvent_1a62b4a2a6d6cce74d720b1fdf3a14b53e"></a>

The session_id of the instance the player is attempting to join.

<br>
#### `public TOptional< FString > `[`InstanceId`](#structRHStandardEvents_1_1FInstanceHelloReceivedEvent_1a6153fd5f9c7e753526144af2b90d461e) <a id="structRHStandardEvents_1_1FInstanceHelloReceivedEvent_1a6153fd5f9c7e753526144af2b90d461e"></a>

The instance_id of the instance the player is attempting to join.

<br>
#### `public TOptional< FGuid > `[`UserId`](#structRHStandardEvents_1_1FInstanceHelloReceivedEvent_1aaa5fd1a2f2df19100fda3eaff1683272) <a id="structRHStandardEvents_1_1FInstanceHelloReceivedEvent_1aaa5fd1a2f2df19100fda3eaff1683272"></a>

The user id of the instance the player is attempting to join.

<br>
#### `public TOptional< FString > `[`IpAddress`](#structRHStandardEvents_1_1FInstanceHelloReceivedEvent_1ae7d2fb50c71dac5533ddbd9bd2314bc3) <a id="structRHStandardEvents_1_1FInstanceHelloReceivedEvent_1ae7d2fb50c71dac5533ddbd9bd2314bc3"></a>

The incoming IP Address the connection is originating from.

<br>
#### `public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FInstanceHelloReceivedEvent_1a4192fcb94955a7d002b4f72f8f638237) <a id="structRHStandardEvents_1_1FInstanceHelloReceivedEvent_1a4192fcb94955a7d002b4f72f8f638237"></a>

custom data fields (will be auto-prefixed with custom data prefix)

<br>
#### `public inline  `[`FInstanceHelloReceivedEvent`](#structRHStandardEvents_1_1FInstanceHelloReceivedEvent_1acf31d6acaee497ce21e28d13c868d677)`()` <a id="structRHStandardEvents_1_1FInstanceHelloReceivedEvent_1acf31d6acaee497ce21e28d13c868d677"></a>

<br>
#### `public inline void `[`EmitTo`](#structRHStandardEvents_1_1FInstanceHelloReceivedEvent_1a8dd8971a4314464e14e9a02932a0db5c)`(IAnalyticsProvider * Provider) const` <a id="structRHStandardEvents_1_1FInstanceHelloReceivedEvent_1a8dd8971a4314464e14e9a02932a0db5c"></a>

<br>
## struct `RHStandardEvents::FInstanceLoginReceivedEvent` <a id="structRHStandardEvents_1_1FInstanceLoginReceivedEvent"></a>

This event is triggered when the host receives a login signal from a player / game client attempting to connect to it.

rh.instance_login_received

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`IsSuccess`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1a3e6b3f4fafeb7250ff18b2e642bb26c7) | 
`public TOptional< FString > `[`SessionId`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1a9c4f7c61b422d9a595eb87a1153f288e) | The session_id of the instance the player is attempting to join.
`public TOptional< FString > `[`InstanceId`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1a32fbe2361d0e5e81bb7c3b9af062faaa) | The instance_id of the instance the player is attempting to join.
`public TOptional< FGuid > `[`UserId`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1ad01de080b087044b1885ce2904d4af50) | The user id of the instance the player is attempting to join.
`public TOptional< FString > `[`PlatformUserId`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1a56e5792c677856299f28f721f6711872) | Platform UserId of the player.
`public TOptional< FString > `[`PlatformId`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1a6be08c852916f6670449093b400f6366) | Platform Id of the player.
`public TOptional< FString > `[`ConnectionString`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1a0d0b5a349c42d0395383711ef5265c29) | The connection string the player is attempting to join with.
`public TOptional< `[`FSplitJoinInfo`](undefined.md#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1_1FSplitJoinInfo)` > `[`SplitJoinInfo`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1af380b47e61e9e28a297e09a42f0aba9c) | the split join info for this connection
`public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1a44430050aeffe42e9f26b693afa5c06a) | custom data fields (will be auto-prefixed with custom data prefix)
`public inline  `[`FInstanceLoginReceivedEvent`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1ab9cf4514ca3affaad4f8a8d637fae248)`()` | 
`public inline void `[`EmitTo`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1afc6e60ff75293eb3130004aa8b8f4070)`(IAnalyticsProvider * Provider) const` | 

#### Members

#### `public bool `[`IsSuccess`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1a3e6b3f4fafeb7250ff18b2e642bb26c7) <a id="structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1a3e6b3f4fafeb7250ff18b2e642bb26c7"></a>

<br>
#### `public TOptional< FString > `[`SessionId`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1a9c4f7c61b422d9a595eb87a1153f288e) <a id="structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1a9c4f7c61b422d9a595eb87a1153f288e"></a>

The session_id of the instance the player is attempting to join.

<br>
#### `public TOptional< FString > `[`InstanceId`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1a32fbe2361d0e5e81bb7c3b9af062faaa) <a id="structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1a32fbe2361d0e5e81bb7c3b9af062faaa"></a>

The instance_id of the instance the player is attempting to join.

<br>
#### `public TOptional< FGuid > `[`UserId`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1ad01de080b087044b1885ce2904d4af50) <a id="structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1ad01de080b087044b1885ce2904d4af50"></a>

The user id of the instance the player is attempting to join.

<br>
#### `public TOptional< FString > `[`PlatformUserId`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1a56e5792c677856299f28f721f6711872) <a id="structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1a56e5792c677856299f28f721f6711872"></a>

Platform UserId of the player.

<br>
#### `public TOptional< FString > `[`PlatformId`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1a6be08c852916f6670449093b400f6366) <a id="structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1a6be08c852916f6670449093b400f6366"></a>

Platform Id of the player.

<br>
#### `public TOptional< FString > `[`ConnectionString`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1a0d0b5a349c42d0395383711ef5265c29) <a id="structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1a0d0b5a349c42d0395383711ef5265c29"></a>

The connection string the player is attempting to join with.

<br>
#### `public TOptional< `[`FSplitJoinInfo`](undefined.md#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1_1FSplitJoinInfo)` > `[`SplitJoinInfo`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1af380b47e61e9e28a297e09a42f0aba9c) <a id="structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1af380b47e61e9e28a297e09a42f0aba9c"></a>

the split join info for this connection

<br>
#### `public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1a44430050aeffe42e9f26b693afa5c06a) <a id="structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1a44430050aeffe42e9f26b693afa5c06a"></a>

custom data fields (will be auto-prefixed with custom data prefix)

<br>
#### `public inline  `[`FInstanceLoginReceivedEvent`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1ab9cf4514ca3affaad4f8a8d637fae248)`()` <a id="structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1ab9cf4514ca3affaad4f8a8d637fae248"></a>

<br>
#### `public inline void `[`EmitTo`](#structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1afc6e60ff75293eb3130004aa8b8f4070)`(IAnalyticsProvider * Provider) const` <a id="structRHStandardEvents_1_1FInstanceLoginReceivedEvent_1afc6e60ff75293eb3130004aa8b8f4070"></a>

<br>
## struct `RHStandardEvents::FInstanceJoinReceivedEvent` <a id="structRHStandardEvents_1_1FInstanceJoinReceivedEvent"></a>

This event is triggered when the host receives a join signal from a player / game client attempting to connect to it.

rh.instance_join_received

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public bool `[`IsSuccess`](#structRHStandardEvents_1_1FInstanceJoinReceivedEvent_1a4dd1e3633ac01bc8321a2c4c0186d4e2) | 
`public TOptional< FString > `[`SessionId`](#structRHStandardEvents_1_1FInstanceJoinReceivedEvent_1ad322381c8f3a6a994f3bb8063d76757a) | The session_id of the instance the player is attempting to join.
`public TOptional< FString > `[`InstanceId`](#structRHStandardEvents_1_1FInstanceJoinReceivedEvent_1a2142c21d63b77f87f61cb83c0b27986e) | The instance_id of the instance the player is attempting to join.
`public TOptional< FGuid > `[`UserId`](#structRHStandardEvents_1_1FInstanceJoinReceivedEvent_1a8f1e4cc77730d933962c6b381138e2d5) | The user id of the instance the player is attempting to join.
`public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FInstanceJoinReceivedEvent_1a8f9b48c48f0943bb96aeca521f38b8f7) | custom data fields (will be auto-prefixed with custom data prefix)
`public inline  `[`FInstanceJoinReceivedEvent`](#structRHStandardEvents_1_1FInstanceJoinReceivedEvent_1ad9f191b94536fd1a693453b5b04aa7db)`()` | 
`public inline void `[`EmitTo`](#structRHStandardEvents_1_1FInstanceJoinReceivedEvent_1a713ce24d16f21526fe567f1bc3993c98)`(IAnalyticsProvider * Provider) const` | 

#### Members

#### `public bool `[`IsSuccess`](#structRHStandardEvents_1_1FInstanceJoinReceivedEvent_1a4dd1e3633ac01bc8321a2c4c0186d4e2) <a id="structRHStandardEvents_1_1FInstanceJoinReceivedEvent_1a4dd1e3633ac01bc8321a2c4c0186d4e2"></a>

<br>
#### `public TOptional< FString > `[`SessionId`](#structRHStandardEvents_1_1FInstanceJoinReceivedEvent_1ad322381c8f3a6a994f3bb8063d76757a) <a id="structRHStandardEvents_1_1FInstanceJoinReceivedEvent_1ad322381c8f3a6a994f3bb8063d76757a"></a>

The session_id of the instance the player is attempting to join.

<br>
#### `public TOptional< FString > `[`InstanceId`](#structRHStandardEvents_1_1FInstanceJoinReceivedEvent_1a2142c21d63b77f87f61cb83c0b27986e) <a id="structRHStandardEvents_1_1FInstanceJoinReceivedEvent_1a2142c21d63b77f87f61cb83c0b27986e"></a>

The instance_id of the instance the player is attempting to join.

<br>
#### `public TOptional< FGuid > `[`UserId`](#structRHStandardEvents_1_1FInstanceJoinReceivedEvent_1a8f1e4cc77730d933962c6b381138e2d5) <a id="structRHStandardEvents_1_1FInstanceJoinReceivedEvent_1a8f1e4cc77730d933962c6b381138e2d5"></a>

The user id of the instance the player is attempting to join.

<br>
#### `public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FInstanceJoinReceivedEvent_1a8f9b48c48f0943bb96aeca521f38b8f7) <a id="structRHStandardEvents_1_1FInstanceJoinReceivedEvent_1a8f9b48c48f0943bb96aeca521f38b8f7"></a>

custom data fields (will be auto-prefixed with custom data prefix)

<br>
#### `public inline  `[`FInstanceJoinReceivedEvent`](#structRHStandardEvents_1_1FInstanceJoinReceivedEvent_1ad9f191b94536fd1a693453b5b04aa7db)`()` <a id="structRHStandardEvents_1_1FInstanceJoinReceivedEvent_1ad9f191b94536fd1a693453b5b04aa7db"></a>

<br>
#### `public inline void `[`EmitTo`](#structRHStandardEvents_1_1FInstanceJoinReceivedEvent_1a713ce24d16f21526fe567f1bc3993c98)`(IAnalyticsProvider * Provider) const` <a id="structRHStandardEvents_1_1FInstanceJoinReceivedEvent_1a713ce24d16f21526fe567f1bc3993c98"></a>

<br>
## struct `RHStandardEvents::FInstanceClientDisconnectEvent` <a id="structRHStandardEvents_1_1FInstanceClientDisconnectEvent"></a>

This event is triggered when the host detects a client disconnection (either caused by it, or by the client).

rh.instance_client_disconnect

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TOptional< FString > `[`SessionId`](#structRHStandardEvents_1_1FInstanceClientDisconnectEvent_1acc115067d56487b45cb1781af2394049) | The session_id of the session.
`public TOptional< FString > `[`InstanceId`](#structRHStandardEvents_1_1FInstanceClientDisconnectEvent_1acfd49a311f03b19128a86fcdd0917da0) | The instance_id of the instance.
`public TOptional< FGuid > `[`UserId`](#structRHStandardEvents_1_1FInstanceClientDisconnectEvent_1a29819903437fbc894edf2e66740c949b) | The user id of the instance the player disconnecting.
`public TOptional< FString > `[`Reason`](#structRHStandardEvents_1_1FInstanceClientDisconnectEvent_1a6b570cbbcfd12805a316b70509211289) | The reason for the disconnect, if known.
`public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FInstanceClientDisconnectEvent_1ad7aa4cd4a10bbc653a8fc9d275d1002b) | custom data fields (will be auto-prefixed with custom data prefix)
`public inline  `[`FInstanceClientDisconnectEvent`](#structRHStandardEvents_1_1FInstanceClientDisconnectEvent_1a66881d90ba7836f59ffdbaf86058ab76)`()` | 
`public inline void `[`EmitTo`](#structRHStandardEvents_1_1FInstanceClientDisconnectEvent_1ae2d932b03b4e86770c1cf21677c18841)`(IAnalyticsProvider * Provider) const` | 

#### Members

#### `public TOptional< FString > `[`SessionId`](#structRHStandardEvents_1_1FInstanceClientDisconnectEvent_1acc115067d56487b45cb1781af2394049) <a id="structRHStandardEvents_1_1FInstanceClientDisconnectEvent_1acc115067d56487b45cb1781af2394049"></a>

The session_id of the session.

<br>
#### `public TOptional< FString > `[`InstanceId`](#structRHStandardEvents_1_1FInstanceClientDisconnectEvent_1acfd49a311f03b19128a86fcdd0917da0) <a id="structRHStandardEvents_1_1FInstanceClientDisconnectEvent_1acfd49a311f03b19128a86fcdd0917da0"></a>

The instance_id of the instance.

<br>
#### `public TOptional< FGuid > `[`UserId`](#structRHStandardEvents_1_1FInstanceClientDisconnectEvent_1a29819903437fbc894edf2e66740c949b) <a id="structRHStandardEvents_1_1FInstanceClientDisconnectEvent_1a29819903437fbc894edf2e66740c949b"></a>

The user id of the instance the player disconnecting.

<br>
#### `public TOptional< FString > `[`Reason`](#structRHStandardEvents_1_1FInstanceClientDisconnectEvent_1a6b570cbbcfd12805a316b70509211289) <a id="structRHStandardEvents_1_1FInstanceClientDisconnectEvent_1a6b570cbbcfd12805a316b70509211289"></a>

The reason for the disconnect, if known.

<br>
#### `public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FInstanceClientDisconnectEvent_1ad7aa4cd4a10bbc653a8fc9d275d1002b) <a id="structRHStandardEvents_1_1FInstanceClientDisconnectEvent_1ad7aa4cd4a10bbc653a8fc9d275d1002b"></a>

custom data fields (will be auto-prefixed with custom data prefix)

<br>
#### `public inline  `[`FInstanceClientDisconnectEvent`](#structRHStandardEvents_1_1FInstanceClientDisconnectEvent_1a66881d90ba7836f59ffdbaf86058ab76)`()` <a id="structRHStandardEvents_1_1FInstanceClientDisconnectEvent_1a66881d90ba7836f59ffdbaf86058ab76"></a>

<br>
#### `public inline void `[`EmitTo`](#structRHStandardEvents_1_1FInstanceClientDisconnectEvent_1ae2d932b03b4e86770c1cf21677c18841)`(IAnalyticsProvider * Provider) const` <a id="structRHStandardEvents_1_1FInstanceClientDisconnectEvent_1ae2d932b03b4e86770c1cf21677c18841"></a>

<br>
## struct `RHStandardEvents::FLoginStartEvent` <a id="structRHStandardEvents_1_1FLoginStartEvent"></a>

This event is triggered at the start of the client login process.

rh.login_start

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TOptional< FString > `[`PlatformDisplayName`](#structRHStandardEvents_1_1FLoginStartEvent_1ad86dab7ee24d5268c6a919f4bd940bee) | Platform username / gamertag of the player.
`public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FLoginStartEvent_1aaa8c15c1d4484c3ea1a940b5432b6999) | custom data fields (will be auto-prefixed with custom data prefix)
`public inline  `[`FLoginStartEvent`](#structRHStandardEvents_1_1FLoginStartEvent_1ade639811664eb76689e326042f554bca)`()` | 
`public inline void `[`EmitTo`](#structRHStandardEvents_1_1FLoginStartEvent_1a21dac598f0c7d0c9a06f0535d8eab4ac)`(IAnalyticsProvider * Provider) const` | 

#### Members

#### `public TOptional< FString > `[`PlatformDisplayName`](#structRHStandardEvents_1_1FLoginStartEvent_1ad86dab7ee24d5268c6a919f4bd940bee) <a id="structRHStandardEvents_1_1FLoginStartEvent_1ad86dab7ee24d5268c6a919f4bd940bee"></a>

Platform username / gamertag of the player.

<br>
#### `public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FLoginStartEvent_1aaa8c15c1d4484c3ea1a940b5432b6999) <a id="structRHStandardEvents_1_1FLoginStartEvent_1aaa8c15c1d4484c3ea1a940b5432b6999"></a>

custom data fields (will be auto-prefixed with custom data prefix)

<br>
#### `public inline  `[`FLoginStartEvent`](#structRHStandardEvents_1_1FLoginStartEvent_1ade639811664eb76689e326042f554bca)`()` <a id="structRHStandardEvents_1_1FLoginStartEvent_1ade639811664eb76689e326042f554bca"></a>

<br>
#### `public inline void `[`EmitTo`](#structRHStandardEvents_1_1FLoginStartEvent_1a21dac598f0c7d0c9a06f0535d8eab4ac)`(IAnalyticsProvider * Provider) const` <a id="structRHStandardEvents_1_1FLoginStartEvent_1a21dac598f0c7d0c9a06f0535d8eab4ac"></a>

<br>
## struct `RHStandardEvents::FLoginCompleteEvent` <a id="structRHStandardEvents_1_1FLoginCompleteEvent"></a>

This event is triggered when the login process has completed.This event is meant to capture both successful and failed login attempts.

rh.login_complete

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`PlatformUserId`](#structRHStandardEvents_1_1FLoginCompleteEvent_1a9f82c4ff7a06a6301e5008b9d5e77bef) | Platform UserId of the player.
`public FString `[`PlatformId`](#structRHStandardEvents_1_1FLoginCompleteEvent_1a5bc4a30e83be6aa9efee09ca239ee9c4) | Platform Id of the player.
`public FString `[`Status`](#structRHStandardEvents_1_1FLoginCompleteEvent_1a450d771307789ec844783fc93aa9d43e) | The status of the login attempt.
`public TOptional< FString > `[`PlatformDisplayName`](#structRHStandardEvents_1_1FLoginCompleteEvent_1aa387846cfb5da38f19a8f9fc85f0d1fc) | Platform username / gamertag of the player.
`public TOptional< FString > `[`PersonId`](#structRHStandardEvents_1_1FLoginCompleteEvent_1ac4de5a5a09f1ea049638b5a795c84826) | PersonId of the player.
`public TOptional< FString > `[`Reason`](#structRHStandardEvents_1_1FLoginCompleteEvent_1afbf4607ea9cf02be776462795cb43675) | The reason for the failure to login.
`public TOptional< float > `[`DurationSeconds`](#structRHStandardEvents_1_1FLoginCompleteEvent_1a26ee1029c1a011fb47ec8a15dcf97427) | The duration of the login process.
`public TOptional< FString > `[`SubmitTimestamp`](#structRHStandardEvents_1_1FLoginCompleteEvent_1a9bbb4e039316e0d26cfa351c5bdda9ef) | The timestamp when the login process was submitted to the RH API.
`public TOptional< FString > `[`PlatformLoginCompleteTimestamp`](#structRHStandardEvents_1_1FLoginCompleteEvent_1a0c48e762565c10bf0f8bc212ac817846) | The timestamp when the login process was completed.
`public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FLoginCompleteEvent_1a6505fba3d70c9ddf43416360bc48bbbf) | custom data fields (will be auto-prefixed with custom data prefix)
`public inline  `[`FLoginCompleteEvent`](#structRHStandardEvents_1_1FLoginCompleteEvent_1a54e374804cb72bc28f8de6152169e08c)`()` | 
`public inline void `[`EmitTo`](#structRHStandardEvents_1_1FLoginCompleteEvent_1a13109823a17b2b5a67125d947661caf7)`(IAnalyticsProvider * Provider) const` | 

#### Members

#### `public FString `[`PlatformUserId`](#structRHStandardEvents_1_1FLoginCompleteEvent_1a9f82c4ff7a06a6301e5008b9d5e77bef) <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1a9f82c4ff7a06a6301e5008b9d5e77bef"></a>

Platform UserId of the player.

<br>
#### `public FString `[`PlatformId`](#structRHStandardEvents_1_1FLoginCompleteEvent_1a5bc4a30e83be6aa9efee09ca239ee9c4) <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1a5bc4a30e83be6aa9efee09ca239ee9c4"></a>

Platform Id of the player.

<br>
#### `public FString `[`Status`](#structRHStandardEvents_1_1FLoginCompleteEvent_1a450d771307789ec844783fc93aa9d43e) <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1a450d771307789ec844783fc93aa9d43e"></a>

The status of the login attempt.

<br>
#### `public TOptional< FString > `[`PlatformDisplayName`](#structRHStandardEvents_1_1FLoginCompleteEvent_1aa387846cfb5da38f19a8f9fc85f0d1fc) <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1aa387846cfb5da38f19a8f9fc85f0d1fc"></a>

Platform username / gamertag of the player.

<br>
#### `public TOptional< FString > `[`PersonId`](#structRHStandardEvents_1_1FLoginCompleteEvent_1ac4de5a5a09f1ea049638b5a795c84826) <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1ac4de5a5a09f1ea049638b5a795c84826"></a>

PersonId of the player.

<br>
#### `public TOptional< FString > `[`Reason`](#structRHStandardEvents_1_1FLoginCompleteEvent_1afbf4607ea9cf02be776462795cb43675) <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1afbf4607ea9cf02be776462795cb43675"></a>

The reason for the failure to login.

<br>
#### `public TOptional< float > `[`DurationSeconds`](#structRHStandardEvents_1_1FLoginCompleteEvent_1a26ee1029c1a011fb47ec8a15dcf97427) <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1a26ee1029c1a011fb47ec8a15dcf97427"></a>

The duration of the login process.

<br>
#### `public TOptional< FString > `[`SubmitTimestamp`](#structRHStandardEvents_1_1FLoginCompleteEvent_1a9bbb4e039316e0d26cfa351c5bdda9ef) <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1a9bbb4e039316e0d26cfa351c5bdda9ef"></a>

The timestamp when the login process was submitted to the RH API.

<br>
#### `public TOptional< FString > `[`PlatformLoginCompleteTimestamp`](#structRHStandardEvents_1_1FLoginCompleteEvent_1a0c48e762565c10bf0f8bc212ac817846) <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1a0c48e762565c10bf0f8bc212ac817846"></a>

The timestamp when the login process was completed.

<br>
#### `public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FLoginCompleteEvent_1a6505fba3d70c9ddf43416360bc48bbbf) <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1a6505fba3d70c9ddf43416360bc48bbbf"></a>

custom data fields (will be auto-prefixed with custom data prefix)

<br>
#### `public inline  `[`FLoginCompleteEvent`](#structRHStandardEvents_1_1FLoginCompleteEvent_1a54e374804cb72bc28f8de6152169e08c)`()` <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1a54e374804cb72bc28f8de6152169e08c"></a>

<br>
#### `public inline void `[`EmitTo`](#structRHStandardEvents_1_1FLoginCompleteEvent_1a13109823a17b2b5a67125d947661caf7)`(IAnalyticsProvider * Provider) const` <a id="structRHStandardEvents_1_1FLoginCompleteEvent_1a13109823a17b2b5a67125d947661caf7"></a>

<br>
## struct `RHStandardEvents::FObjectiveProgressEvent` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent"></a>

This event is meant to be triggered when a player has earned progress on an objective.The RHIntegration Plugin will not automatically trigger this, but this event is something that RallyHere will process and have an understanding of the data.

rh.objective_progress

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`Category`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a599682d21697df42de766247514cf56a) | A "bigger.smaller.smallest.tiny" formatted string.For example, in a UI element specification, this could be "hud.minimap.expandButton".
`public FString `[`Status`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a1666afdda05cb4637328a084935e9c9a) | Generic status.
`public TOptional< FString > `[`Context`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a5fa44ba551357c5931a544a7acc9f804) | Generic context, possibly escaped JSON.
`public TOptional< FString > `[`VendorId`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a9c15bd432a7d967ec5bb3b6884e5c0fc) | Vendor ID for the order.
`public TOptional< FString > `[`LootId`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1ad13f52f80bb9708ae92bcd01d27572db) | Loot ID for the order.
`public TOptional< FString > `[`ItemId`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1ad4a2b8caf6e7b1a7d214bfb191409d7f) | Specific Item ID.
`public TOptional< int32 > `[`StartProgress`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a6a53df5dda366b73a78e53e664e0a69e) | The quantity value before the progression event.
`public TOptional< int32 > `[`EndProgress`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a143b405070508d212baa6c53f94c4b2e) | The quantity value after the progression event.
`public TOptional< FString > `[`ProviderId`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a0a9c7c225a92a2e24ca1c595deb1a901) | Identifier for the authentication provider.
`public TOptional< FString > `[`OrderRefId`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a44543703ee251c8012f231b98d2776c8) | Order reference ID.
`public TOptional< FString > `[`OrderId`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1ace08b35c3ed55570033d7b606e04f112) | Order identifier.
`public TOptional< FString > `[`OrderEntryId`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a3c9c1e2749fc414ed608d672146489be) | Order entry identifier.
`public TOptional< FString > `[`Description`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a6a42dfd2f81fdbfb7c60ff14203b075b) | Generic description string.
`public TOptional< FString > `[`SessionId`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1ac13dff22b34faf109069a6ebbf18cbb9) | A SessionID to be associated with this event (ex: for gameplay rewards)
`public TOptional< FString > `[`InstanceId`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a6b0bd7a6a9497aebe4f49967394ac8a3) | A InstanceId to be associated with this event (ex: for gameplay rewards)
`public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a9ffc3b2b5472a6ec21830cdc57638356) | custom data fields (will be auto-prefixed with custom data prefix)
`public inline  `[`FObjectiveProgressEvent`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1ae4ae09439045f64f41c15068bd296729)`()` | 
`public inline void `[`EmitTo`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1afc45b87abf3b09ff20d3299ecb6a322e)`(IAnalyticsProvider * Provider) const` | 

#### Members

#### `public FString `[`Category`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a599682d21697df42de766247514cf56a) <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a599682d21697df42de766247514cf56a"></a>

A "bigger.smaller.smallest.tiny" formatted string.For example, in a UI element specification, this could be "hud.minimap.expandButton".

<br>
#### `public FString `[`Status`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a1666afdda05cb4637328a084935e9c9a) <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a1666afdda05cb4637328a084935e9c9a"></a>

Generic status.

<br>
#### `public TOptional< FString > `[`Context`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a5fa44ba551357c5931a544a7acc9f804) <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a5fa44ba551357c5931a544a7acc9f804"></a>

Generic context, possibly escaped JSON.

<br>
#### `public TOptional< FString > `[`VendorId`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a9c15bd432a7d967ec5bb3b6884e5c0fc) <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a9c15bd432a7d967ec5bb3b6884e5c0fc"></a>

Vendor ID for the order.

<br>
#### `public TOptional< FString > `[`LootId`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1ad13f52f80bb9708ae92bcd01d27572db) <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1ad13f52f80bb9708ae92bcd01d27572db"></a>

Loot ID for the order.

<br>
#### `public TOptional< FString > `[`ItemId`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1ad4a2b8caf6e7b1a7d214bfb191409d7f) <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1ad4a2b8caf6e7b1a7d214bfb191409d7f"></a>

Specific Item ID.

<br>
#### `public TOptional< int32 > `[`StartProgress`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a6a53df5dda366b73a78e53e664e0a69e) <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a6a53df5dda366b73a78e53e664e0a69e"></a>

The quantity value before the progression event.

<br>
#### `public TOptional< int32 > `[`EndProgress`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a143b405070508d212baa6c53f94c4b2e) <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a143b405070508d212baa6c53f94c4b2e"></a>

The quantity value after the progression event.

<br>
#### `public TOptional< FString > `[`ProviderId`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a0a9c7c225a92a2e24ca1c595deb1a901) <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a0a9c7c225a92a2e24ca1c595deb1a901"></a>

Identifier for the authentication provider.

<br>
#### `public TOptional< FString > `[`OrderRefId`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a44543703ee251c8012f231b98d2776c8) <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a44543703ee251c8012f231b98d2776c8"></a>

Order reference ID.

<br>
#### `public TOptional< FString > `[`OrderId`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1ace08b35c3ed55570033d7b606e04f112) <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1ace08b35c3ed55570033d7b606e04f112"></a>

Order identifier.

<br>
#### `public TOptional< FString > `[`OrderEntryId`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a3c9c1e2749fc414ed608d672146489be) <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a3c9c1e2749fc414ed608d672146489be"></a>

Order entry identifier.

<br>
#### `public TOptional< FString > `[`Description`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a6a42dfd2f81fdbfb7c60ff14203b075b) <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a6a42dfd2f81fdbfb7c60ff14203b075b"></a>

Generic description string.

<br>
#### `public TOptional< FString > `[`SessionId`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1ac13dff22b34faf109069a6ebbf18cbb9) <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1ac13dff22b34faf109069a6ebbf18cbb9"></a>

A SessionID to be associated with this event (ex: for gameplay rewards)

<br>
#### `public TOptional< FString > `[`InstanceId`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a6b0bd7a6a9497aebe4f49967394ac8a3) <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a6b0bd7a6a9497aebe4f49967394ac8a3"></a>

A InstanceId to be associated with this event (ex: for gameplay rewards)

<br>
#### `public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1a9ffc3b2b5472a6ec21830cdc57638356) <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1a9ffc3b2b5472a6ec21830cdc57638356"></a>

custom data fields (will be auto-prefixed with custom data prefix)

<br>
#### `public inline  `[`FObjectiveProgressEvent`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1ae4ae09439045f64f41c15068bd296729)`()` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1ae4ae09439045f64f41c15068bd296729"></a>

<br>
#### `public inline void `[`EmitTo`](#structRHStandardEvents_1_1FObjectiveProgressEvent_1afc45b87abf3b09ff20d3299ecb6a322e)`(IAnalyticsProvider * Provider) const` <a id="structRHStandardEvents_1_1FObjectiveProgressEvent_1afc45b87abf3b09ff20d3299ecb6a322e"></a>

<br>
## struct `RHStandardEvents::FPlayerGameResultEvent` <a id="structRHStandardEvents_1_1FPlayerGameResultEvent"></a>

This event is meant to capture high level information about a completed match.

rh.player_game_result

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public TOptional< int32 > `[`Placement`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1a7df827b68e03a2ce139139162dc8101b) | The placement of the player in the game
`public TOptional< FString > `[`GameSessionId`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1a998cf9acd8bf7ca3a162c62b7989774f) | The session_id of the game
`public TOptional< FString > `[`InstanceId`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1a3036135c8fde18b3db67538cdf2dbca5) | The instance_id of the game within the session
`public TOptional< float > `[`DurationSeconds`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1aede2e3d23874e944f318e87fcb588f3d) | The duration of the game in seconds
`public TOptional< FString > `[`TeamId`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1ae1d77a154cb24e4a449552c004ced8c8) | The team_id of the player
`public TOptional< FString > `[`Round`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1ae27ed2a3cdae86c14f81c8a80989547d) | The round of the game
`public TOptional< FString > `[`PartySessionId`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1a3cd4f78c414d84382109f60b78a6034e) | The session_id of the party the player is in
`public TOptional< bool > `[`IsAfkKicked`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1a678f1a35938b6d7f9aac18c6858f13bf) | Whether the player was kicked for being AFK
`public TOptional< bool > `[`WasBackfilled`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1a9606cf9d0fb06527326965a10c05ac0c) | Whether the player was backfilled into the game
`public TOptional< FString > `[`PrimaryInputType`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1adbe683133ec0c01df96811e54c4c235d) | The primary input type of the player
`public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1a53999f026467c7e844cf0dbe19e36e37) | custom data fields (will be auto-prefixed with custom data prefix)
`public inline  `[`FPlayerGameResultEvent`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1a63ed113be1c84b80b0d193dbf3faead0)`()` | 
`public inline void `[`EmitTo`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1a5428c9acaee0b90c784476e272fae149)`(IAnalyticsProvider * Provider) const` | 

#### Members

#### `public TOptional< int32 > `[`Placement`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1a7df827b68e03a2ce139139162dc8101b) <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1a7df827b68e03a2ce139139162dc8101b"></a>

The placement of the player in the game

<br>
#### `public TOptional< FString > `[`GameSessionId`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1a998cf9acd8bf7ca3a162c62b7989774f) <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1a998cf9acd8bf7ca3a162c62b7989774f"></a>

The session_id of the game

<br>
#### `public TOptional< FString > `[`InstanceId`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1a3036135c8fde18b3db67538cdf2dbca5) <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1a3036135c8fde18b3db67538cdf2dbca5"></a>

The instance_id of the game within the session

<br>
#### `public TOptional< float > `[`DurationSeconds`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1aede2e3d23874e944f318e87fcb588f3d) <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1aede2e3d23874e944f318e87fcb588f3d"></a>

The duration of the game in seconds

<br>
#### `public TOptional< FString > `[`TeamId`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1ae1d77a154cb24e4a449552c004ced8c8) <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1ae1d77a154cb24e4a449552c004ced8c8"></a>

The team_id of the player

<br>
#### `public TOptional< FString > `[`Round`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1ae27ed2a3cdae86c14f81c8a80989547d) <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1ae27ed2a3cdae86c14f81c8a80989547d"></a>

The round of the game

<br>
#### `public TOptional< FString > `[`PartySessionId`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1a3cd4f78c414d84382109f60b78a6034e) <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1a3cd4f78c414d84382109f60b78a6034e"></a>

The session_id of the party the player is in

<br>
#### `public TOptional< bool > `[`IsAfkKicked`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1a678f1a35938b6d7f9aac18c6858f13bf) <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1a678f1a35938b6d7f9aac18c6858f13bf"></a>

Whether the player was kicked for being AFK

<br>
#### `public TOptional< bool > `[`WasBackfilled`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1a9606cf9d0fb06527326965a10c05ac0c) <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1a9606cf9d0fb06527326965a10c05ac0c"></a>

Whether the player was backfilled into the game

<br>
#### `public TOptional< FString > `[`PrimaryInputType`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1adbe683133ec0c01df96811e54c4c235d) <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1adbe683133ec0c01df96811e54c4c235d"></a>

The primary input type of the player

<br>
#### `public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1a53999f026467c7e844cf0dbe19e36e37) <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1a53999f026467c7e844cf0dbe19e36e37"></a>

custom data fields (will be auto-prefixed with custom data prefix)

<br>
#### `public inline  `[`FPlayerGameResultEvent`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1a63ed113be1c84b80b0d193dbf3faead0)`()` <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1a63ed113be1c84b80b0d193dbf3faead0"></a>

<br>
#### `public inline void `[`EmitTo`](#structRHStandardEvents_1_1FPlayerGameResultEvent_1a5428c9acaee0b90c784476e272fae149)`(IAnalyticsProvider * Provider) const` <a id="structRHStandardEvents_1_1FPlayerGameResultEvent_1a5428c9acaee0b90c784476e272fae149"></a>

<br>
## struct `RHStandardEvents::FPlatformPurchaseEvent` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent"></a>

This event is triggered when processing of a real money purchase has been completed.

rh.platform_purchase

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public `[`FCheckoutData`](undefined.md#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData)` `[`Checkout`](#structRHStandardEvents_1_1FPlatformPurchaseEvent_1aea4d2e7889aa801abadf580c0bba9102) | The checkout data for the purchase
`public `[`FReceiptData`](undefined.md#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptData)` `[`Receipt`](#structRHStandardEvents_1_1FPlatformPurchaseEvent_1a4f90b4c43115a19e7651a7dc6e26157b) | The receipt data for the purchase
`public FString `[`State`](#structRHStandardEvents_1_1FPlatformPurchaseEvent_1aa20e40471f982db8d7544951a49d253c) | The state of the purchase
`public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FPlatformPurchaseEvent_1ad5022bcbe859ffa72c5b593fa292d395) | custom data fields (will be auto-prefixed with custom data prefix)
`public inline  `[`FPlatformPurchaseEvent`](#structRHStandardEvents_1_1FPlatformPurchaseEvent_1a1b772cdc5a20dc0eac0f5b71f24531d7)`()` | 
`public inline void `[`EmitTo`](#structRHStandardEvents_1_1FPlatformPurchaseEvent_1ac11f111abda67274f03f584fc22912da)`(IAnalyticsProvider * Provider) const` | 

#### Members

#### `public `[`FCheckoutData`](undefined.md#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FCheckoutData)` `[`Checkout`](#structRHStandardEvents_1_1FPlatformPurchaseEvent_1aea4d2e7889aa801abadf580c0bba9102) <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1aea4d2e7889aa801abadf580c0bba9102"></a>

The checkout data for the purchase

<br>
#### `public `[`FReceiptData`](undefined.md#structRHStandardEvents_1_1FPlatformPurchaseEvent_1_1FReceiptData)` `[`Receipt`](#structRHStandardEvents_1_1FPlatformPurchaseEvent_1a4f90b4c43115a19e7651a7dc6e26157b) <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1a4f90b4c43115a19e7651a7dc6e26157b"></a>

The receipt data for the purchase

<br>
#### `public FString `[`State`](#structRHStandardEvents_1_1FPlatformPurchaseEvent_1aa20e40471f982db8d7544951a49d253c) <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1aa20e40471f982db8d7544951a49d253c"></a>

The state of the purchase

<br>
#### `public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FPlatformPurchaseEvent_1ad5022bcbe859ffa72c5b593fa292d395) <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1ad5022bcbe859ffa72c5b593fa292d395"></a>

custom data fields (will be auto-prefixed with custom data prefix)

<br>
#### `public inline  `[`FPlatformPurchaseEvent`](#structRHStandardEvents_1_1FPlatformPurchaseEvent_1a1b772cdc5a20dc0eac0f5b71f24531d7)`()` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1a1b772cdc5a20dc0eac0f5b71f24531d7"></a>

<br>
#### `public inline void `[`EmitTo`](#structRHStandardEvents_1_1FPlatformPurchaseEvent_1ac11f111abda67274f03f584fc22912da)`(IAnalyticsProvider * Provider) const` <a id="structRHStandardEvents_1_1FPlatformPurchaseEvent_1ac11f111abda67274f03f584fc22912da"></a>

<br>
## struct `RHStandardEvents::FCustomEvent` <a id="structRHStandardEvents_1_1FCustomEvent"></a>

This is a wrapper for providing custom event data.

#### Summary

 Members                        | Descriptions                                
--------------------------------|---------------------------------------------
`public FString `[`EventName`](#structRHStandardEvents_1_1FCustomEvent_1ab04513a6304068186509da1913a2896a) | Name of the event.
`public TArray< FAnalyticsEventAttribute > `[`Attributes`](#structRHStandardEvents_1_1FCustomEvent_1af6f0ea633eef4ceab7a4a985cb57fff0) | Attribute list.
`public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FCustomEvent_1aa15d1cedc9143c218dc3db2506e32dc7) | custom data fields (will be auto-prefixed with custom data prefix)
`public inline  `[`FCustomEvent`](#structRHStandardEvents_1_1FCustomEvent_1add4d8214b9316a09b1974046126b6787)`()` | 
`public inline void `[`EmitTo`](#structRHStandardEvents_1_1FCustomEvent_1a9c9fe99fea36643abbf5082ea6c8ce6e)`(IAnalyticsProvider * Provider) const` | 

#### Members

#### `public FString `[`EventName`](#structRHStandardEvents_1_1FCustomEvent_1ab04513a6304068186509da1913a2896a) <a id="structRHStandardEvents_1_1FCustomEvent_1ab04513a6304068186509da1913a2896a"></a>

Name of the event.

<br>
#### `public TArray< FAnalyticsEventAttribute > `[`Attributes`](#structRHStandardEvents_1_1FCustomEvent_1af6f0ea633eef4ceab7a4a985cb57fff0) <a id="structRHStandardEvents_1_1FCustomEvent_1af6f0ea633eef4ceab7a4a985cb57fff0"></a>

Attribute list.

<br>
#### `public TOptional< TMap< FString, FString > > `[`CustomData`](#structRHStandardEvents_1_1FCustomEvent_1aa15d1cedc9143c218dc3db2506e32dc7) <a id="structRHStandardEvents_1_1FCustomEvent_1aa15d1cedc9143c218dc3db2506e32dc7"></a>

custom data fields (will be auto-prefixed with custom data prefix)

<br>
#### `public inline  `[`FCustomEvent`](#structRHStandardEvents_1_1FCustomEvent_1add4d8214b9316a09b1974046126b6787)`()` <a id="structRHStandardEvents_1_1FCustomEvent_1add4d8214b9316a09b1974046126b6787"></a>

<br>
#### `public inline void `[`EmitTo`](#structRHStandardEvents_1_1FCustomEvent_1a9c9fe99fea36643abbf5082ea6c8ce6e)`(IAnalyticsProvider * Provider) const` <a id="structRHStandardEvents_1_1FCustomEvent_1a9c9fe99fea36643abbf5082ea6c8ce6e"></a>

<br>
