/*
Copyright 2023 RallyHere

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
#ifndef RH_C_API_H
#define RH_C_API_H

#include <cstddef>
#include <cstdint>
#include "c_platform.h"
#include "c_status.h"
#include "c_metrics.h"

/// Callbacks are either called immediately at the call site or when calling rallyhere_tick().
///
/// The general state flow follows mostly from the model that Agones uses. It can be found on the following page
/// https://agones.dev/site/docs/reference/gameserver/
/// digraph {
///     graph [fontname = "helvetica"];
///     node [fontname = "helvetica"];
///     edge [fontname = "helvetica", pad="0.2", penwidth="2"];
///
///     Created [ label = "game server created" ]
///     PortAllocation
///     Creating
///     Error
///     Starting
///     Scheduled
///     RequestReady
///     Ready
///     Reserved
///     Allocated
///     Shutdown
///     Unhealthy
///     Deleted [ label = "game server deleted" ]
///
///     Created -> PortAllocation [ label ="has any port\nwith dynamic policy", color="red" ]
///     Created -> Creating [ label="only static ports", color="red" ]
///
///     PortAllocation -> Creating [ label="allocated unused port", color="blue" ]
///     Creating -> Starting [ label="created pod", color="blue" ]
///     Starting -> Scheduled [ label="we have a pod, fetch its address", color="blue" ]
///     Scheduled -> Reserved [ label="SDK.reserved(seconds)", color="purple" ]
///     Scheduled -> RequestReady [ label="SDK.ready()", color="purple" ]
///     RequestReady -> Ready [ label="ready to be allocated", color="blue" ]
///     Reserved -> Ready [label="if seconds > 0  \land failed to call  \lSDK.allocate()  " color="purple"]
///     Allocated -> RequestReady [ label="SDK.ready()", color="purple" ]
///
///     Ready -> Allocated [ label="allocated for use", color="orange" ]
///     Ready -> Allocated [ label="SDK.allocate()   ", color="purple" ]
///     Reserved -> Allocated [color="purple"]
///
///     Creating -> Error [ label="failed to create pod", color="blue" ]
///
///     Scheduled -> Shutdown [ label="SDK.shutdown()", color="purple" ]
///     RequestReady -> Shutdown [ color="purple" ]
///     Ready -> Shutdown [ color="purple" ]
///     Allocated -> Shutdown [ color="purple" ]
///     Reserved -> Shutdown [ color="purple" ]
///
///
///     Scheduled -> Unhealthy [ label="failed to call SDK.healthy()\nin a timely manner" color="purple" ]
///     RequestReady -> Unhealthy [ color="purple" ]
///     Ready -> Unhealthy [ color="purple" ]
///     Allocated -> Unhealthy [ color="purple" ]
///     Reserved -> Unhealthy [ color="purple" ]
///
///     Unhealthy -> Deleted [ label="delete unhealthy game server", color="blue" ]
///     Shutdown -> Deleted [ label="delete finished game server", color="blue" ]
///
///   subgraph cluster_01 {
///     style=invis;
///     {
///         s1 [style="invis"];
///         s2 [style="invis"];
///         s1 -> s2 [ color="red", label="API user" ]
///     }
///
///     {
///         s3 [style="invis"];
///         s4 [style="invis"];
///         s3 -> s4 [ color="purple", label="SDK" ]
///     }
///
///     {
///         s5 [style="invis"];
///         s6 [style="invis"];
///         s5 -> s6 [ color="orange", label="allocation\ncontroller" ]
///     }
///
///     {
///         s7 [style="invis"];
///         s8 [style="invis"];
///         s7 -> s8 [ color="blue", label="game server\ncontroller" ]
///     }
///   }
/// }

#ifdef __cplusplus
extern "C"
{
#endif

    //------------------------------------------------------------------------------
    ///@name Opaque types.
    /// The API uses the pointer handles to represent internal objects.
    ///@{

    /// Opaque type and handle to a Rally Here Game Instance Adapter.
    struct RallyHereGameInstanceAdapter;
    typedef RallyHereGameInstanceAdapter* RallyHereGameInstanceAdapterPtr;

    struct RallyHereStringMap;
    typedef RallyHereStringMap* RallyHereStringMapPtr;

    //------------------------------------------------------------------------------
    ///@}
    ///@name Environment.
    ///@{

    /// Optional custom memory alloc override.
    /// If set, must be set at init time, before using any other APIs. If this is called,
    /// then rallyhere_allocator_set_free must also be called. If this is called, then
    /// rallyhere_allocator_set_free and rallyhere_allocator_set_realloc must also be called.
    /// @param callback A function that takes a size in bytes of memory to allocate.
    /// @sa rallyhere_allocator_set_free
    /// @sa rallyhere_allocator_set_realloc
    RH_EXPORT void rallyhere_allocator_set_alloc(void* (*callback)(unsigned int size));

    /// Optional custom memory free override.
    /// If set, must be set at init time, before using any other APIs.
    /// @param callback An existing pointer p to free.
    RH_EXPORT void rallyhere_allocator_set_free(void (*callback)(void*));

    /// Optional custom memory realloc override.
    /// If set, must be set at init time, before using any other APIs.
    /// @param callback A function taking an existing pointer and a new size. See
    /// the standard c realloc requirements for behavior.
    RH_EXPORT void rallyhere_allocator_set_realloc(void* (*callback)(void*, unsigned int size));

    //------------------------------------------------------------------------------
    ///@}
    ///@name Logging
    ///@{
    /// Logging levels that will passed to the optional log callback function
    typedef enum RallyHereLogLevel { RH_LOG_LEVEL_ERROR, RH_LOG_LEVEL_INFO, RH_LOG_LEVEL_DEBUG, RH_LOG_LEVEL_TRACE } RallyHereLogLevel;
    /// Log callback function
    typedef void (*RallyHereLogCallback)(RallyHereLogLevel level, const char* message, size_t messagen, void* user_data);
    /// Sets a custom logger that can handle logs from inside of the server.
    RH_EXPORT void rallyhere_set_log_callback(RallyHereGameInstanceAdapterPtr adapter,
                                              RallyHereLogCallback callback,
                                              void* user_data);
    /// Sets the default log level for the SDK and any adapters created. This is only used if a log callback is not set.
    RH_EXPORT void rallyhere_set_default_log_level(RallyHereLogLevel level);
    //------------------------------------------------------------------------------
    ///@}
    ///@name Global
    ///@{

    /// Initialize the Rally Here SDK. Custom memory allocation must be made before this call, and
    /// no other SDK calls may be made until after this call.
    RH_EXPORT void rallyhere_global_init();

    /// Cleanup the Rally Here SDK. No other SDK calls may be made after this call.
    RH_EXPORT void rallyhere_global_cleanup();

    //------------------------------------------------------------------------------
    ///@}
    ///@name Lifetime
    ///@{
    RH_EXPORT RallyHereStatusCode rallyhere_create_game_instance_adapter(RallyHereGameInstanceAdapterPtr* adapter, const char* arguments);
    RH_EXPORT RallyHereStatusCode rallyhere_create_game_instance_adaptern(RallyHereGameInstanceAdapterPtr* adapter,
                                                                          const char* arguments,
                                                                          unsigned int arguments_length);
    RH_EXPORT RallyHereStatusCode rallyhere_create_game_instance_adapter_with_logger(RallyHereGameInstanceAdapterPtr* adapter,
                                                                                     const char* arguments,
                                                                                     RallyHereLogCallback callback,
                                                                                     void* user_data);
    RH_EXPORT RallyHereStatusCode rallyhere_create_game_instance_adaptern_with_logger(RallyHereGameInstanceAdapterPtr* adapter,
                                                                                      const char* arguments,
                                                                                      unsigned int arguments_length,
                                                                                      RallyHereLogCallback callback,
                                                                                      void* user_data);
    /// Destroyes the adapter. Before any memory is freed every registered callback is called with the status RH_STATUS_CANCELLED so that
    /// any memory associated with the callback's user data can be freed.
    RH_EXPORT void rallyhere_destroy_game_instance_adapter(RallyHereGameInstanceAdapterPtr adapter);
    /// Tick that's expected to be called every frame. This is used to check for any messages from the game host.
    /// All message processing and callbacks will be handled during this tick.
    /// @return RH_STATUS_OK if this adapter can still be used, otherwise an error code.
    RH_EXPORT RallyHereStatusCode rallyhere_tick(RallyHereGameInstanceAdapterPtr adapter);
    /// Mark the adapter as healthy. This is used to tell the game host that this adapter is still alive and well. Should be called at a regulard
    /// interval. Every 5 seconds is a good rule of thumb. Currently only used by Agones.
    /// SIC relies on an open metrics endpoint created by this SDK.
    /// i3D relies on the Arcus socket connection.
    /// Multiplay reliies on the A2S socket connection.
    RH_EXPORT RallyHereStatusCode rallyhere_healthy(RallyHereGameInstanceAdapterPtr adapter);
    //------------------------------------------------------------------------------
    ///@}
    ///@name State request and callbacks
    ///@{
    /// Begin the process of connecting to the appropriate game host. The provided callback will be called when the
    /// process completes with the result of the connection attempt.
    RH_EXPORT void rallyhere_connect(RallyHereGameInstanceAdapterPtr adapter,
                                     void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                     void* user_data);

    /// Tell the game host that this GameInstance can now be allocated. The provided callback will be called when the
    /// process completes with the result of the game host being told this is ready.
    RH_EXPORT void
        rallyhere_ready(RallyHereGameInstanceAdapterPtr adapter, void (*callback)(const RallyHereStatusCode& code, void* user_data), void* user_data);

    /// Callback to be sent when an allocation is received from the game host adapter. The callback is responsible for freeing the allocation_info
    /// string map
    typedef void (*RallyHereOnAllocatedCallback)(RallyHereStringMapPtr allocation_info, const RallyHereStatusCode& code, void* user_data);

    /// Register the callback which will be called when the game host has assigned an allocation to this adapter.
    RH_EXPORT void rallyhere_on_allocated_callback(RallyHereGameInstanceAdapterPtr adapter,
                                                   RallyHereOnAllocatedCallback callback,
                                                   void* user_data);

    /// Fake an ollocation. This should only be used for testing purposes.
    RH_EXPORT void rallyhere_test_fake_allocation_response(RallyHereGameInstanceAdapterPtr adapter, const char *fake_data);

    /// Tell the game host that this GameInstance has been allocated. When using rallyhere_ready() this is used to tell the Game Host that
    /// you have recieved the allocation information and have done the appropriate work. In the rallyhere_reserve() case this is telling the
    /// Game Host that you are allocated by some other means. The provided callback will be called when the process completes with the result
    RH_EXPORT void rallyhere_allocate(RallyHereGameInstanceAdapterPtr adapter,
                                      void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                      void* user_data);

    /// Tell the game host to reserve this game instance rather than marking it ready. This will stop the game host from destroying this
    /// game instance based on any ready timeouts. This is to be used when the game instance is manually handling sessions in a way that
    /// isn't expected to be handled by the normal matchmaking route. The provided callback will be called when the process completes with
    /// the result
    RH_EXPORT void rallyhere_reserve(RallyHereGameInstanceAdapterPtr adapter,
                                     unsigned int timeout_seconds,
                                     void (*reserve_callback)(const RallyHereStatusCode& code, void* user_data),
                                     void* reserve_user_data,
                                     void (*ready_callback)(const RallyHereStatusCode& code, void* user_data),
                                     void* ready_user_data);

    /// Tell the game host to reserve this game instance rather than marking it ready. This will stop the game host from destroying this
    /// game instance based on any ready timeouts. This is to be used when the game instance is manually handling sessions in a way that
    /// isn't expected to be handled by the normal matchmaking route. The provided callback will be called when the process completes with
    /// the result
    RH_EXPORT void rallyhere_reserve_unconditional(RallyHereGameInstanceAdapterPtr adapter,
                                     void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                     void* user_data);
    //------------------------------------------------------------------------------
    ///@}
    ///@name Soft Stop
    ///@{
    /// The callback to trigger when the game host wants to stop the game instance.
    /// In SIC this is expected to come from the SIGTERM handler.
    /// In i3D this is expected to come from the Arcus commands
    RH_EXPORT void rallyhere_on_soft_stop_callback(RallyHereGameInstanceAdapterPtr adapter,
                                                   void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                                   void* user_data);
    /// There are situations where soft stop comes from something external to the adapter and the adapter needs to be told. In this case the adapter
    /// will also trigger the on soft stop callback.
    /// In SIC the SIGTERM handler can't always be overridden by this adapter. In those situations the caller is expected to call this function.
    RH_EXPORT void rallyhere_external_soft_stop_requested(RallyHereGameInstanceAdapterPtr adapter);
    //------------------------------------------------------------------------------
    ///@}

    ///@name String Map
    ///@{
    /// Create a map of string to a string. The strings may not be null terminated in order to store binary data
    RH_EXPORT RallyHereStatusCode rallyhere_string_map_create(RallyHereStringMapPtr* map);
    /// Destroy a map of string to a string
    RH_EXPORT void rallyhere_string_map_destroy(RallyHereStringMapPtr map);
    /// Copy a RallyHereStringMap
    RH_EXPORT RallyHereStatusCode rallyhere_string_map_copy(RallyHereStringMapPtr dest, const RallyHereStringMapPtr src);
    /// Clear the contents of a RallyHereStringMap
    RH_EXPORT void rallyhere_string_map_clear(RallyHereStringMapPtr map);
    /// Get a value form RallyHereStringMap
    RH_EXPORT RallyHereStatusCode rallyhere_string_map_get(RallyHereStringMapPtr map, const char* key, const char** value, unsigned int* value_size);
    /// Set a value in RallyHereStringMap
    RH_EXPORT RallyHereStatusCode rallyhere_string_map_set(RallyHereStringMapPtr map, const char* key, const char* value);
    /// Set a value in RallyHereStringMap with a size
    RH_EXPORT RallyHereStatusCode rallyhere_string_map_setn(RallyHereStringMapPtr map, const char* key, const char* value, unsigned int value_size);
    //------------------------------------------------------------------------------
    ///@}
    ///@name Stats Labels
    /// This is a map of string to string that can be used to store labels for stats. In SIC mode this will be exported as labels on
    /// every single prometheus metric. These must be set before calling rallyhere_ready() or rallyhere_reserve() is called.
    ///@{
    /// Get the current string map for the labels. Caller is responsible for freeing the string map with rallyhere_string_map_destroy.
    RH_EXPORT void rallyhere_get_labels(RallyHereGameInstanceAdapterPtr adapter, RallyHereStringMapPtr* map);
    /// Set the current string map for the labels. The string map will be copied. Provide a callback to be notified when the labels have been set.
    /// These must be set before calling rallyhere_ready() or rallyhere_reserve() is called.
    RH_EXPORT void rallyhere_set_labels(RallyHereGameInstanceAdapterPtr adapter,
                                        const RallyHereStringMapPtr map,
                                        void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                        void* user_data);
    //------------------------------------------------------------------------------
    ///@}
    ///@name Additional Info
    /// This is a map of string to string that can be used to store additional information about the game instance. In SIC mode this will be
    /// exported as labels on the "instance_info" gauge. These can be set after calls to rallyhere_ready() or rallyhere_reserve().
    ///@{
    /// Get the current string map for the additional info. Caller is responsible for freeing the string map with rallyhere_string_map_destroy.
    RH_EXPORT void rallyhere_get_additional_info(RallyHereGameInstanceAdapterPtr adapter, RallyHereStringMapPtr* map);
    /// Set the current string map for the additional info. The string map will be copied. Provide a callback to be notified when the labels
    /// have been set. These can be set after calls to rallyhere_ready() or rallyhere_reserve().
    RH_EXPORT void rallyhere_set_additional_info(RallyHereGameInstanceAdapterPtr adapter,
                                                 const RallyHereStringMapPtr map,
                                                 void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                                 void* user_data);
    //------------------------------------------------------------------------------
    ///@}
    ///@name Stats Annotations
    ///@{
    /// Get the current string map for the annotations. Caller is responsible for freeing the string map.
    RH_EXPORT void rallyhere_get_annotations(RallyHereGameInstanceAdapterPtr adapter, RallyHereStringMapPtr* map);
    /// Set the current string map for the annotations. The string map will be copied. Provide a callback to be notified when the labels have been
    /// set.
    RH_EXPORT void rallyhere_set_annotations(RallyHereGameInstanceAdapterPtr adapter,
                                             const RallyHereStringMapPtr map,
                                             void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                             void* user_data);
    //------------------------------------------------------------------------------
    ///@}
    ///@name Stats core
    ///@{
    /// Base stats to be exported by the game host adapter.

    typedef struct {
        /// Name of the server
        const char* name;
        /// Map the server is running
        const char* map;
        /// Folder containing the game files
        const char* folder;
        /// Name of the game
        const char* game;
        /// Numeric ID of the game. Potentially the Steam App ID
        int32_t id;
        /// Number of players currently on the server
        uint8_t players;
        /// Maximum number of players the server can hold
        uint8_t max_players;
        /// Number of bots on the server
        uint8_t bots;
        /// Type of server. Currently 'd' for dedicated, 'l' for listen, 'p' for SourceTV
        uint8_t server_type;
        /// Environment the server is running in. Currently 'w' for Windows, 'l' for Linux, 'm' for Mac
        uint8_t environment;
        /// Visibility of the server. Currently '0' for public and '1' for private
        uint8_t visibility;
        /// Anti-cheat running on the server. Currently '0' for unsecured, '1' for secured
        uint8_t anticheat;
        /// Version of the game installed on the server
        const char* version;
    } RallyHereStatsBase;

    /// Flags to indicate which fields of RallyHereStatsBase are set
    typedef struct {
        bool set_name : 1;
        bool set_map : 1;
        bool set_folder : 1;
        bool set_game : 1;
        bool set_id : 1;
        bool set_players : 1;
        bool set_max_players : 1;
        bool set_bots : 1;
        bool set_server_type : 1;
        bool set_environment : 1;
        bool set_visibility : 1;
        bool set_anticheat : 1;
        bool set_version : 1;
    } RallyHereStatsBaseProvided;
    /// Set the base stats for the game instance. Provide a callback to be notified when the stats have been set
    /// These will be exported as labels on the "instance_info" gauge.
    /// These will be exported as part of the A2S_INFO query.
    RH_EXPORT RallyHereStatusCode rallyhere_stats_base(RallyHereGameInstanceAdapterPtr adapter,
                                                       const RallyHereStatsBase* stats,
                                                       const RallyHereStatsBaseProvided *provided,
                                                       void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                                       void* user_data);
    //------------------------------------------------------------------------------
    ///@}
    ///@name Stats gauges
    ///@{
    /// Set the value of a gauge. Provide a callback to be notified when the stats have been set.
    /// These stats will be exported with the current labels
    RH_EXPORT void rallyhere_stats_gauge(RallyHereGameInstanceAdapterPtr adapter,
                                         const char* name,
                                         double value,
                                         void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                         void* user_data);
    /// Set the value of a gauge. Provide a callback to be notified when the stats have been set.
    /// @param labels The labels to export with the gauge
    RH_EXPORT void rallyhere_stats_gauge_with_labels(RallyHereGameInstanceAdapterPtr adapter,
                                                     const char* name,
                                                     double value,
                                                     const RallyHereStringMapPtr labels,
                                                     void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                                     void* user_data);
    //------------------------------------------------------------------------------
    ///@}
    ///@name Stats arbitrary
    ///@{
    /// Set the value of an arbitrary stat. Provide a callback to be notified when the stats have been set.
    /// @param data The data to export with the stat which is copied by the call
    RH_EXPORT void rallyhere_stats_arbitrary(RallyHereGameInstanceAdapterPtr adapter,
                                             const char* name,
                                             const char* data,
                                             unsigned int data_size,
                                             void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                             void* user_data);
    /// Set the value of an arbitrary stat. Provide a callback to be notified when the stats have been set.
    /// @param data The data to export with the stat which must have been allocated with the same alloc as set for the adapter.
    /// This function takes ownership of that pointer. If the error code is not RH_OK then the pointer is not taken and the caller is responsible
    RH_EXPORT void rallyhere_stats_arbitrary_move(RallyHereGameInstanceAdapterPtr adapter,
                                                  const char* name,
                                                  char* data,
                                                  unsigned int data_size,
                                                  void (*callback)(const RallyHereStatusCode& code, char* data, void* user_data),
                                                  void* user_data);
    //------------------------------------------------------------------------------
    ///@}

    ///@name Push metrics
    ///@{
    RH_EXPORT RallyHereStatusCode rallyhere_metrics_immediate_action(RallyHereGameInstanceAdapterPtr adapter,
                                                                     const RallyHereMetricDefinition* definition,
                                                                     const RallyHereMetricAction* action,
                                                                     RallyHereMetricFlush flush);
    RH_EXPORT RallyHereStatusCode rallyhere_metrics_immediate_action_with_time(RallyHereGameInstanceAdapterPtr adapter,
                                                                               const RallyHereMetricDefinition* definition,
                                                                               const RallyHereMetricAction* action,
                                                                               double timestamp,
                                                                               RallyHereMetricFlush flush);
    RH_EXPORT void rallyhere_metrics_statsd_output(RallyHereGameInstanceAdapterPtr adapter, const char** data, size_t* data_size);
    RH_EXPORT void rallyhere_metrics_graphite_output(RallyHereGameInstanceAdapterPtr adapter, const char** data, size_t* data_size);
    //------------------------------------------------------------------------------
    ///@}

#ifdef __cplusplus
};
#endif

#endif // RH_C_API_H
