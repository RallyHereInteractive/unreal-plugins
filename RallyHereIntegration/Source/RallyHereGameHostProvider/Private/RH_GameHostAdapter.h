
#pragma once

#include "CoreMinimal.h"

// this entire file is effectively a "third party" file, so enforce the third party include flags (as defined in CoreMinimal.h) to make sure it works properly
// this is done here rather than at point of use, as the UHT / UBT system wants to treat this as a "first party" file and enforce unreal include orders
THIRD_PARTY_INCLUDES_START
#include "RH_GameHostAdapterFwd.h"

extern void (*rallyhere_global_init)();
extern RallyHereStatusCode (*rallyhere_create_game_instance_adapter)(void* adapter, const char* arguments);
extern RallyHereStatusCode (*rallyhere_create_game_instance_adapter_with_logger)(RallyHereGameInstanceAdapterPtr* adapter,
                                                                          const char* arguments,
                                                                          RallyHereLogCallback callback,
                                                                          void* user_data);
extern void (*rallyhere_on_soft_stop_callback)(RallyHereGameInstanceAdapterPtr adapter,
										       void (*callback)(const RallyHereStatusCode& code, void* user_data),
										       void* user_data);
extern void (*rallyhere_connect)(RallyHereGameInstanceAdapterPtr adapter,
                          void (*callback)(const RallyHereStatusCode& code, void* user_data),
                          void* user_data);
extern RallyHereStatusCode (*rallyhere_tick)(RallyHereGameInstanceAdapterPtr adapter);

extern void (*rallyhere_on_allocated_callback)(RallyHereGameInstanceAdapterPtr adapter,
                                        RallyHereOnAllocatedCallback callback,
                                        void* user_data);
extern void (*rallyhere_test_fake_allocation_response)(RallyHereGameInstanceAdapterPtr adapter, const char *fake_data);

extern RallyHereStatusCode (*rallyhere_string_map_create)(RallyHereStringMapPtr* map);
extern void (*rallyhere_string_map_destroy)(RallyHereStringMapPtr map);
extern RallyHereStatusCode (*rallyhere_string_map_copy)(RallyHereStringMapPtr dest, const RallyHereStringMapPtr src);
extern void (*rallyhere_string_map_clear)(RallyHereStringMapPtr map);
extern RallyHereStatusCode (*rallyhere_string_map_get)(RallyHereStringMapPtr map, const char* key, const char** value, unsigned int* value_size);
extern RallyHereStatusCode (*rallyhere_string_map_set)(RallyHereStringMapPtr map, const char* key, const char* value);
extern RallyHereStatusCode (*rallyhere_string_map_setn)(RallyHereStringMapPtr map, const char* key, const char* value, unsigned int value_size);

extern void (*rallyhere_ready)(RallyHereGameInstanceAdapterPtr adapter,
                        void (*callback)(const RallyHereStatusCode& code, void* user_data), void* user_data);

extern void (*rallyhere_allocate)(RallyHereGameInstanceAdapterPtr adapter,
                                  void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                  void* user_data);
extern void (*rallyhere_reserve)(RallyHereGameInstanceAdapterPtr adapter,
                                 unsigned int timeout_seconds,
                                 void (*reserve_callback)(const RallyHereStatusCode& code, void* user_data),
                                 void* reserve_user_data,
                                 void (*ready_callback)(const RallyHereStatusCode& code, void* user_data),
                                 void* ready_user_data);
extern void (*rallyhere_reserve_unconditional)(RallyHereGameInstanceAdapterPtr adapter,
                                               void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                               void* user_data);

extern void (*rallyhere_destroy_game_instance_adapter)(RallyHereGameInstanceAdapterPtr adapter);
extern void (*rallyhere_global_cleanup)();

extern bool (*rallyhere_is_error)(RallyHereStatusCode err);
extern bool (*rallyhere_is_cancelled)(RallyHereStatusCode err);
extern const char* (*rallyhere_status_text)(RallyHereStatusCode err);

extern void (*rallyhere_set_additional_info)(RallyHereGameInstanceAdapterPtr adapter,
											 const RallyHereStringMapPtr map,
											 void (*callback)(const RallyHereStatusCode& code, void* user_data),
											 void* user_data);

extern void (*rallyhere_stats_gauge)(RallyHereGameInstanceAdapterPtr adapter,
									 const char* name,
									 double value,
									 void (*callback)(const RallyHereStatusCode& code, void* user_data),
									 void* user_data);
extern void (*rallyhere_stats_gauge_with_labels)(RallyHereGameInstanceAdapterPtr adapter,
												 const char* name,
												 double value,
												 const RallyHereStringMapPtr labels,
												 void (*callback)(const RallyHereStatusCode& code, void* user_data),
												 void* user_data);

extern RallyHereStatusCode (*rallyhere_stats_base)(RallyHereGameInstanceAdapterPtr adapter,
												   const RallyHereStatsBase* stats,
												   const RallyHereStatsBaseProvided *provided,
												   void (*callback)(const RallyHereStatusCode& code, void* user_data),
												   void* user_data);

class GameHostAdapterImporter
{
public:
	static bool Import();
	static void Deinitialize();

protected:
	GameHostAdapterImporter();
	~GameHostAdapterImporter();

	void* Handle{nullptr};
	
	static GameHostAdapterImporter* Importer;
	static size_t Count;
};

THIRD_PARTY_INCLUDES_END