// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#ifdef WITH_RALLYHERE_GAME_HOST_ADAPTER

#include "CoreMinimal.h"

// this entire file is effectively a "third party" file, so enforce the third party include flags (as defined in CoreMinimal.h) to make sure it works properly
// this is done here rather than at point of use, as the UHT / UBT system wants to treat this as a "first party" file and enforce unreal include orders
THIRD_PARTY_INCLUDES_START

#include "game-host-adapter/c_api.h"

// declare a foreach macro for each known imported function, to reduce boilerplate
#define FOREACH_RHGHA_IMPORT_FUNC() \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_global_init) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_create_game_instance_adapter) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_create_game_instance_adapter_with_logger) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_on_soft_stop_callback) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_external_soft_stop_requested) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_connect) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_tick) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_healthy) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_on_allocated_callback) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_string_map_create) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_string_map_destroy) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_string_map_copy) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_string_map_clear) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_string_map_get) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_string_map_set) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_string_map_setn) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_ready) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_allocate) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_reserve) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_reserve_unconditional) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_destroy_game_instance_adapter) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_global_cleanup) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_is_error) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_is_cancelled) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_status_text) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_set_additional_info) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_stats_gauge) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_stats_gauge_with_labels) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_stats_base) \
	FOREACH_RHGHA_IMPORT_FUNC_IMPL(rallyhere_get_public_host_and_port)

// convenience class for importing the game host adapter library
class GameHostAdapterImporter
{
public:
	static bool Import();
	static void Deinitialize();

	// declare a static function pointer for each known imported function
#define FOREACH_RHGHA_IMPORT_FUNC_IMPL(funcname) static decltype(funcname)* funcname;
	FOREACH_RHGHA_IMPORT_FUNC()
#undef FOREACH_RHGHA_IMPORT_FUNC_IMPL

protected:
	GameHostAdapterImporter();
	~GameHostAdapterImporter();

	void* Handle{nullptr};

	static GameHostAdapterImporter* Importer;
	static size_t Count;
};

// intentionally left defined for use by other files in this plugin
//#undef FOREACH_RHGHA_IMPORT_FUNC

THIRD_PARTY_INCLUDES_END

#endif // WITH_RALLYHERE_GAME_HOST_ADAPTER