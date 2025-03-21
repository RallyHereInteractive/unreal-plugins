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

/// @mainpage Rally Here Game Host Adapter
/// An SDK for handling multiple different types of game hosting systems in one set of calls
///
/// @section intro_sec Introduction
///
/// This library as meant to be used as part of integrating game instance servers with RallyHere. The source code for
/// the entire system is provided, but one should only target and use the C API directly. This will enable RallyHere to
/// update your game servers to be able to support different game hosting providers without the need for the code in the
/// game server to change.
///
/// @section getting_started Getting Started
///
/// The main usage of this library is to set up your memory allocator, initialize the sdk, instantiate a game instance
/// adapter, and then tick that either asserting or waiting for allocations to come in with additional details.
///
/// @sa rallyhere_global_init()
/// @sa rallyhere_allocator_set_alloc()
/// @sa RallyHereGameInstanceAdapter

/// @file c_api.h
/// @brief An SDK for handling multiple different types of game hosting systems in one set of calls

#ifdef __cplusplus
extern "C"
{
#endif

    ///@name Opaque types
    /// The API uses the pointer handles to represent internal objects.
    ///@{

    /// @struct RallyHereGameInstanceAdapter
    /// Opaque type and handle to a Rally Here Game Instance Adapter.
    ///
    /// This struct is intentionally empty because its true interface is only defined internally. Any methods which take
    /// this as the first argument can be thought of as methods on this struct.
    ///
    /// Callbacks are either called immediately at the call site or when calling rallyhere_tick().
    struct RallyHereGameInstanceAdapter;
    /// Opaque type and handle to a Rally Here Game Instance Adapter.
    typedef RallyHereGameInstanceAdapter* RallyHereGameInstanceAdapterPtr;

    /// @struct RallyHereStringMap
    /// Opaque type and handle to a Rally Here String Map.
    ///
    /// This struct is intentionally empty because its true interface is only defined internally. Any methods which take
    /// this as the first argument can be thought of as methods on this struct.
    struct RallyHereStringMap;
    /// Opaque type and handle to a Rally Here String Map.
    typedef RallyHereStringMap* RallyHereStringMapPtr;
    ///@}
    ///@name Environment
    ///@{

    /// @brief Optional custom memory alloc override.
    ///
    /// If set, must be set at init time, before using any other APIs. If this is called,
    /// then rallyhere_allocator_set_free must also be called. If this is called, then
    /// rallyhere_allocator_set_free and rallyhere_allocator_set_realloc must also be called.
    /// @param callback A function that takes a size in bytes of memory to allocate.
    /// @sa rallyhere_allocator_set_free
    /// @sa rallyhere_allocator_set_realloc
    RH_EXPORT void rallyhere_allocator_set_alloc(void* (*callback)(unsigned int size));

    /// @brief Optional custom memory free override.
    ///
    /// If set, must be set at init time, before using any other APIs.
    /// @param callback An existing pointer p to free.
    RH_EXPORT void rallyhere_allocator_set_free(void (*callback)(void*));

    /// @brief Optional custom memory realloc override.
    ///
    /// If set, must be set at init time, before using any other APIs.
    /// @param callback A function taking an existing pointer and a new size. See
    /// the standard c realloc requirements for behavior.
    RH_EXPORT void rallyhere_allocator_set_realloc(void* (*callback)(void*, unsigned int size));
    ///@}

    ///@name Logging
    ///@{
    /// Logging levels that will passed to the optional log callback function
    typedef enum RallyHereLogLevel { RH_LOG_LEVEL_ERROR, RH_LOG_LEVEL_INFO, RH_LOG_LEVEL_DEBUG, RH_LOG_LEVEL_TRACE } RallyHereLogLevel;
    /// Log callback function
    typedef void (*RallyHereLogCallback)(RallyHereLogLevel level, const char* message, size_t messagen, void* user_data);
    /// Sets a custom logger that can handle logs from inside of the server.
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_set_log_callback(RallyHereGameInstanceAdapterPtr adapter,
                                              RallyHereLogCallback callback,
                                              void* user_data);
    /// Sets the default log level for the SDK and any adapters created. This is only used if a log callback is not set.
    RH_EXPORT void rallyhere_set_default_log_level(RallyHereLogLevel level);
    ///@}

    ///@name Global
    ///@{
    /// Bookend calls for using this SDK. Only the Environment methods may be called before or after these SDK calls.

    /// @brief Initialize the Rally Here SDK.
    ///
    /// Custom memory allocation must be made before this call, and no other SDK calls may be made until after this call.
    RH_EXPORT void rallyhere_global_init();

    /// @brief Cleanup the Rally Here SDK.
    ///
    /// No other SDK calls may be made after this call.
    RH_EXPORT void rallyhere_global_cleanup();
    ///@}

    ///@name Lifetime
    /// Manages the lifetime of a Rally Here Game Instance Adapter.
    ///@{

    /// Create a new adapter using a single string to represent the command line arguments it will use for initialization.
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT RallyHereStatusCode rallyhere_create_game_instance_adapter(RallyHereGameInstanceAdapterPtr* adapter, const char* arguments);
    /// Create a new adapter using a C-style array to represent the command line arguments it will use for initialization.
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT RallyHereStatusCode rallyhere_create_game_instance_adaptern(RallyHereGameInstanceAdapterPtr* adapter,
                                                                          const char* arguments,
                                                                          unsigned int arguments_length);
    /// Create a new adapter using a single string to represent the command line arguments it will use for
    /// initialization and a custom logging function to be used from the moment it is created.
    /// @sa rallyhere_set_log_callback
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT RallyHereStatusCode rallyhere_create_game_instance_adapter_with_logger(RallyHereGameInstanceAdapterPtr* adapter,
                                                                                     const char* arguments,
                                                                                     RallyHereLogCallback callback,
                                                                                     void* user_data);
    /// Create a new adapter using a C-style array to represent the command line arguments it will use for
    /// initialization and a custom logging function to be used from the moment it is created.
    /// @sa rallyhere_set_log_callback
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT RallyHereStatusCode rallyhere_create_game_instance_adaptern_with_logger(RallyHereGameInstanceAdapterPtr* adapter,
                                                                                      const char* arguments,
                                                                                      unsigned int arguments_length,
                                                                                      RallyHereLogCallback callback,
                                                                                      void* user_data);
    /// @brief Destroys the adapter.
    ///
    /// Before any memory is freed every registered callback is called with the status RH_STATUS_CANCELLED so that
    /// any memory associated with the callback's user data can be freed.
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_destroy_game_instance_adapter(RallyHereGameInstanceAdapterPtr adapter);
    ///@}

    ///@name Repeated at Regular Intervals
    ///@{

    /// @brief Tick that's expected to be called every frame.
    ///
    /// This is used to check for any messages from the game host. All deferred message processing and callbacks will be
    /// handled during this tick.
    /// @return RH_STATUS_OK if this adapter can still be used, otherwise an error code.
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT RallyHereStatusCode rallyhere_tick(RallyHereGameInstanceAdapterPtr adapter);
    /// @brief Mark the adapter as healthy.
    ///
    /// This is used to tell the game host that this adapter is still alive and well. Should be called at a regular
    /// interval. Every 5 seconds is a good rule of thumb. Currently only used by Agones.
    /// SIC relies on an open metrics endpoint created by this SDK.
    /// i3D relies on the Arcus socket connection.
    /// Multiplay reliies on the A2S socket connection.
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT RallyHereStatusCode rallyhere_healthy(RallyHereGameInstanceAdapterPtr adapter);
    ///@}

    ///@name State request and callbacks
    ///@{

    /// @brief Begin the process of connecting to the appropriate game host.
    ///
    /// The provided callback will be called when the process completes with the result of the connection attempt.
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_connect(RallyHereGameInstanceAdapterPtr adapter,
                                     void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                     void* user_data);

    /// @brief Tell the game host that this GameInstance can now be allocated.
    ///
    /// The provided callback will be called when the process completes with the result of the game host being told
    /// this is ready.
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void
        rallyhere_ready(RallyHereGameInstanceAdapterPtr adapter, void (*callback)(const RallyHereStatusCode& code, void* user_data), void* user_data);

    /// @brief Callback to be sent when an allocation is received from the game host adapter.
    ///
    /// The callback is responsible for freeing the allocation_info string map
    typedef void (*RallyHereOnAllocatedCallback)(RallyHereStringMapPtr allocation_info, const RallyHereStatusCode& code, void* user_data);

    /// Register the callback which will be called when the game host has assigned an allocation to this adapter.
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_on_allocated_callback(RallyHereGameInstanceAdapterPtr adapter,
                                                   RallyHereOnAllocatedCallback callback,
                                                   void* user_data);

    /// Fake an allocation. This should only be used for testing purposes.
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_test_fake_allocation_response(RallyHereGameInstanceAdapterPtr adapter, const char *fake_data);

    /// @brief Tell the game host that this GameInstance has been allocated
    ///
    /// When using rallyhere_ready() this is used to tell the Game Host that you have recieved the allocation
    /// information and have done the appropriate work. In the rallyhere_reserve() case this is telling the Game Host
    /// that you are allocated by some other means. The provided callback will be called when the process completes
    /// with the result
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_allocate(RallyHereGameInstanceAdapterPtr adapter,
                                      void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                      void* user_data);

    /// @brief Get any configured public host and port information.
    ///
    /// There are situations where you want to use the Reserve flow, but would like to reuse the operational paramaters
    /// provided to SIC by RallyHere operations. This allows you to get a string map with the public_host and
    /// public_port that were provided to the game host.
    ///
    /// The two values bind_ips and bind_ports are now also provided. These pass through values provided on the command
    /// line from the game host. The bind_ips and bind_ports are comma separated lists of the IPs and ports that the
    /// game host is expecting the game instance to bind to. The bind_ports are the same length as the bind_ips.
    ///
    /// This is currently only valid in SIC mode.
    ///
    /// Caller is responsible for freeing the string map with rallyhere_string_map_destroy.
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_get_public_host_and_port(RallyHereGameInstanceAdapterPtr adapter, RallyHereStringMapPtr* map);

    /// @brief Tell the game host to reserve this game instance rather than marking it ready.
    ///
    /// This will stop the game host from destroying this game instance based on any ready timeouts. This is to be used
    /// when the game instance is manually handling sessions in a way that isn't expected to be handled by the normal
    /// matchmaking route. The provided callback will be called when the process completes with the result
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_reserve(RallyHereGameInstanceAdapterPtr adapter,
                                     unsigned int timeout_seconds,
                                     void (*reserve_callback)(const RallyHereStatusCode& code, void* user_data),
                                     void* reserve_user_data,
                                     void (*ready_callback)(const RallyHereStatusCode& code, void* user_data),
                                     void* ready_user_data);

    /// @brief Tell the game host to reserve this game instance rather than marking it ready.
    ///
    /// This will stop the game host from destroying this game instance based on any ready timeouts. This is to be used
    /// when the game instance is manually handling sessions in a way that isn't expected to be handled by the normal
    /// matchmaking route. The provided callback will be called when the process completes with the result
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_reserve_unconditional(RallyHereGameInstanceAdapterPtr adapter,
                                     void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                     void* user_data);
    ///@}

    ///@name Soft Stop
    /// There are times when the game hosting system would like your instance to shut down, but it does not need to
    /// happen immediately. In these situations a soft-stop will be requested so that your instance can finish any
    /// currently running games and then stop gracefully. Currently only used by SIC and i3D.
    ///@{

    /// @brief The callback to trigger when the game host wants to stop the game instance. This callback should be
    /// implmeneted as if it were being called from a signal handler. It should do only the minimum amount of work
    /// necessary to inform the rest of the system that a soft stop has been requested. In many cases this should
    /// simply be atomically setting a boolean to true and little more.
    ///
    /// In SIC this is expected to come from the SIGTERM handler.
    /// In i3D this is expected to come from the Arcus commands
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_on_soft_stop_callback(RallyHereGameInstanceAdapterPtr adapter,
                                                   void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                                   void* user_data);
    /// @brief Inform the adapter that a soft stop has been requested.
    ///
    /// There are situations where soft stop comes from something external to the adapter and the adapter needs to be
    /// told. In this case the adapter will also trigger the on soft stop callback. This is not a deferred call, so the
    /// registered callback will be called immediately.
    ///
    /// In SIC the SIGTERM handler can't always be overridden by this adapter. In those situations the caller is
    /// expected to call this function as part of their SIGTERM handling.
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_external_soft_stop_requested(RallyHereGameInstanceAdapterPtr adapter);
    //------------------------------------------------------------------------------
    ///@}

    ///@name String Map
    /// A string map structure using the assigned allocator meant to help simplify passing generic, string key-value
    /// data to and from the adapter. For those calling this from C++ there is an example wrapper which helps to manage
    /// string map lifetimes.
    /// @sa RallyHereStringMapWrapper
    ///@{

    /// Create a map of string to a string. The strings may not be null terminated in order to store binary data
    /// @public @memberof RallyHereStringMap
    RH_EXPORT RallyHereStatusCode rallyhere_string_map_create(RallyHereStringMapPtr* map);
    /// Destroy a map of string to a string
    /// @public @memberof RallyHereStringMap
    RH_EXPORT void rallyhere_string_map_destroy(RallyHereStringMapPtr map);
    /// Copy a RallyHereStringMap
    /// @public @memberof RallyHereStringMap
    RH_EXPORT RallyHereStatusCode rallyhere_string_map_copy(RallyHereStringMapPtr dest, const RallyHereStringMapPtr src);
    /// Clear the contents of a RallyHereStringMap
    /// @public @memberof RallyHereStringMap
    RH_EXPORT void rallyhere_string_map_clear(RallyHereStringMapPtr map);
    /// Get a value form RallyHereStringMap
    /// @public @memberof RallyHereStringMap
    RH_EXPORT RallyHereStatusCode rallyhere_string_map_get(RallyHereStringMapPtr map, const char* key, const char** value, unsigned int* value_size);
    /// Set a value in RallyHereStringMap
    /// @public @memberof RallyHereStringMap
    RH_EXPORT RallyHereStatusCode rallyhere_string_map_set(RallyHereStringMapPtr map, const char* key, const char* value);
    /// Set a value in RallyHereStringMap with a size
    /// @public @memberof RallyHereStringMap
    RH_EXPORT RallyHereStatusCode rallyhere_string_map_setn(RallyHereStringMapPtr map, const char* key, const char* value, unsigned int value_size);
    ///@}
    ///@name Stats Labels
    /// This is a map of string to string that can be used to store labels for stats. In SIC mode this will be exported as labels on
    /// every single prometheus metric. These must be set before calling rallyhere_ready() or rallyhere_reserve() is called.
    ///@{

    /// @brief Get the current string map for the labels.
    ///
    /// Caller is responsible for freeing the string map with rallyhere_string_map_destroy.
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_get_labels(RallyHereGameInstanceAdapterPtr adapter, RallyHereStringMapPtr* map);
    /// @brief Set the current string map for the labels.
    ///
    /// The string map will be copied. Provide a callback to be notified when the labels have been set.
    /// These must be set before calling rallyhere_ready() or rallyhere_reserve() is called.
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_set_labels(RallyHereGameInstanceAdapterPtr adapter,
                                        const RallyHereStringMapPtr map,
                                        void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                        void* user_data);
    ///@}
    ///@name Additional Info
    /// This is a map of string to string that can be used to store additional information about the game instance. In SIC mode this will be
    /// exported as labels on the "instance_info" gauge. These can be set after calls to rallyhere_ready() or rallyhere_reserve().
    ///@{

    /// @brief Get the current string map for the additional info.
    ///
    /// Caller is responsible for freeing the string map with rallyhere_string_map_destroy.
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_get_additional_info(RallyHereGameInstanceAdapterPtr adapter, RallyHereStringMapPtr* map);
    /// @brief Set the current string map for the additional info.
    ///
    /// The string map will be copied. Provide a callback to be notified when the labels
    /// have been set. These can be set after calls to rallyhere_ready() or rallyhere_reserve().
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_set_additional_info(RallyHereGameInstanceAdapterPtr adapter,
                                                 const RallyHereStringMapPtr map,
                                                 void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                                 void* user_data);
    ///@}
    ///@name Stats Annotations
    ///@{

    /// @brief Get the current string map for the annotations.
    ///
    /// Caller is responsible for freeing the string map.
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_get_annotations(RallyHereGameInstanceAdapterPtr adapter, RallyHereStringMapPtr* map);
    /// @brief Set the current string map for the annotations.
    ///
    /// The string map will be copied. Provide a callback to be notified when the labels have been set.
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_set_annotations(RallyHereGameInstanceAdapterPtr adapter,
                                             const RallyHereStringMapPtr map,
                                             void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                             void* user_data);
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
        /// Visibility of the server. Currently 0 for public and 1 for private
        uint8_t visibility;
        /// Anti-cheat running on the server. Currently 0 for unsecured, 1 for secured
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
    /// @brief Set the base stats for the game instance.
    ///
    /// Provide a callback to be notified when the stats have been set
    /// These will be exported as labels on the "instance_info" gauge.
    /// These will be exported as part of the A2S_INFO query.
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT RallyHereStatusCode rallyhere_stats_base(RallyHereGameInstanceAdapterPtr adapter,
                                                       const RallyHereStatsBase* stats,
                                                       const RallyHereStatsBaseProvided *provided,
                                                       void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                                       void* user_data);

    /// @brief Get a string map ptr with the "user_agent" set to the user agent string used for web requests
    ///
    /// Caller is responsible for freeing the string map with rallyhere_string_map_destroy.
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_get_user_agent_string(RallyHereGameInstanceAdapterPtr adapter, RallyHereStringMapPtr* map);

    ///@}
    ///@name Stats gauges
    ///@{

    /// Set the value of a gauge. Provide a callback to be notified when the stats have been set.
    /// These stats will be exported with the current labels
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_stats_gauge(RallyHereGameInstanceAdapterPtr adapter,
                                         const char* name,
                                         double value,
                                         void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                         void* user_data);
    /// Set the value of a gauge. Provide a callback to be notified when the stats have been set.
    /// @param labels The labels to export with the gauge
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_stats_gauge_with_labels(RallyHereGameInstanceAdapterPtr adapter,
                                                     const char* name,
                                                     double value,
                                                     const RallyHereStringMapPtr labels,
                                                     void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                                     void* user_data);
    ///@}
    ///@name Stats arbitrary
    ///@{

    /// Set the value of an arbitrary stat. Provide a callback to be notified when the stats have been set.
    /// @param data The data to export with the stat which is copied by the call
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_stats_arbitrary(RallyHereGameInstanceAdapterPtr adapter,
                                             const char* name,
                                             const char* data,
                                             unsigned int data_size,
                                             void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                             void* user_data);
    /// Set the value of an arbitrary stat. Provide a callback to be notified when the stats have been set.
    /// @param data The data to export with the stat which must have been allocated with the same alloc as set for the adapter.
    /// This function takes ownership of that pointer. If the error code is not RH_OK then the pointer is not taken and the caller is responsible
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_stats_arbitrary_move(RallyHereGameInstanceAdapterPtr adapter,
                                                  const char* name,
                                                  char* data,
                                                  unsigned int data_size,
                                                  void (*callback)(const RallyHereStatusCode& code, char* data, void* user_data),
                                                  void* user_data);
    ///@}

    ///@name Push metrics
    /// Used for metrics that are push rather than pull. User of the SDK must choose between statsd or graphite as the
    /// target for the push.
    ///
    /// @attention This is still a work in progress and the API is provided with the expectation that there will be
    /// better handling of automatically pushing those metrics in the future. The metric API is stable and generates the
    /// correct output foer statsd and graphite, but there is no internal code to send those values out yet.
    ///@{

    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT RallyHereStatusCode rallyhere_metrics_immediate_action(RallyHereGameInstanceAdapterPtr adapter,
                                                                     const RallyHereMetricDefinition* definition,
                                                                     const RallyHereMetricAction* action,
                                                                     RallyHereMetricFlush flush);
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT RallyHereStatusCode rallyhere_metrics_immediate_action_with_time(RallyHereGameInstanceAdapterPtr adapter,
                                                                               const RallyHereMetricDefinition* definition,
                                                                               const RallyHereMetricAction* action,
                                                                               double timestamp,
                                                                               RallyHereMetricFlush flush);
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_metrics_statsd_output(RallyHereGameInstanceAdapterPtr adapter, const char** data, size_t* data_size);
    /// @public @memberof RallyHereGameInstanceAdapter
    RH_EXPORT void rallyhere_metrics_graphite_output(RallyHereGameInstanceAdapterPtr adapter, const char** data, size_t* data_size);
    ///@}

#ifdef __cplusplus
};
#endif

#endif // RH_C_API_H
