// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_GameHostAdapter.h"

#include "CoreMinimal.h"
#include "HAL/PlatformProcess.h"
#include "Misc/CommandLine.h"
#include "Misc/Paths.h"
#include "Ssl.h"

void (*rallyhere_global_init)();
RallyHereStatusCode (*rallyhere_create_game_instance_adapter)(void* adapter, const char* arguments);
RallyHereStatusCode (*rallyhere_create_game_instance_adapter_with_logger)(RallyHereGameInstanceAdapterPtr* adapter,
                                                                          const char* arguments,
                                                                          RallyHereLogCallback callback,
                                                                          void* user_data);
void (*rallyhere_on_soft_stop_callback)(RallyHereGameInstanceAdapterPtr adapter,
										void (*callback)(const RallyHereStatusCode& code, void* user_data),
										void* user_data);
void (*rallyhere_connect)(RallyHereGameInstanceAdapterPtr adapter,
                          void (*callback)(const RallyHereStatusCode& code, void* user_data),
                          void* user_data);
RallyHereStatusCode (*rallyhere_tick)(RallyHereGameInstanceAdapterPtr adapter);

void (*rallyhere_on_allocated_callback)(RallyHereGameInstanceAdapterPtr adapter,
                                        RallyHereOnAllocatedCallback callback,
                                        void* user_data);
void (*rallyhere_test_fake_allocation_response)(RallyHereGameInstanceAdapterPtr adapter, const char *fake_data);

RallyHereStatusCode (*rallyhere_string_map_create)(RallyHereStringMapPtr* map);
void (*rallyhere_string_map_destroy)(RallyHereStringMapPtr map);
RallyHereStatusCode (*rallyhere_string_map_copy)(RallyHereStringMapPtr dest, const RallyHereStringMapPtr src);
void (*rallyhere_string_map_clear)(RallyHereStringMapPtr map);
RallyHereStatusCode (*rallyhere_string_map_get)(RallyHereStringMapPtr map, const char* key, const char** value, unsigned int* value_size);
RallyHereStatusCode (*rallyhere_string_map_set)(RallyHereStringMapPtr map, const char* key, const char* value);
RallyHereStatusCode (*rallyhere_string_map_setn)(RallyHereStringMapPtr map, const char* key, const char* value, unsigned int value_size);

void (*rallyhere_ready)(RallyHereGameInstanceAdapterPtr adapter,
                        void (*callback)(const RallyHereStatusCode& code, void* user_data), void* user_data);

void (*rallyhere_allocate)(RallyHereGameInstanceAdapterPtr adapter,
                           void (*callback)(const RallyHereStatusCode& code, void* user_data),
                           void* user_data);
void (*rallyhere_reserve)(RallyHereGameInstanceAdapterPtr adapter,
                          unsigned int timeout_seconds,
                          void (*reserve_callback)(const RallyHereStatusCode& code, void* user_data),
                          void* reserve_user_data,
                          void (*ready_callback)(const RallyHereStatusCode& code, void* user_data),
                          void* ready_user_data);
void (*rallyhere_reserve_unconditional)(RallyHereGameInstanceAdapterPtr adapter,
                                        void (*callback)(const RallyHereStatusCode& code, void* user_data),
                                        void* user_data);

void __empty_rallyhere_destroy_game_instance_adapter(RallyHereGameInstanceAdapterPtr adapter) { };
void (*rallyhere_destroy_game_instance_adapter)(RallyHereGameInstanceAdapterPtr adapter) = &__empty_rallyhere_destroy_game_instance_adapter;

void (*rallyhere_global_cleanup)();

bool (*rallyhere_is_error)(RallyHereStatusCode err);
bool (*rallyhere_is_cancelled)(RallyHereStatusCode err);
const char* (*rallyhere_status_text)(RallyHereStatusCode err);

void (*rallyhere_set_additional_info)(RallyHereGameInstanceAdapterPtr adapter,
											 const RallyHereStringMapPtr map,
											 void (*callback)(const RallyHereStatusCode& code, void* user_data),
											 void* user_data);

void (*rallyhere_stats_gauge)(RallyHereGameInstanceAdapterPtr adapter,
									 const char* name,
									 double value,
									 void (*callback)(const RallyHereStatusCode& code, void* user_data),
									 void* user_data);
void (*rallyhere_stats_gauge_with_labels)(RallyHereGameInstanceAdapterPtr adapter,
												 const char* name,
												 double value,
												 const RallyHereStringMapPtr labels,
												 void (*callback)(const RallyHereStatusCode& code, void* user_data),
												 void* user_data);

RallyHereStatusCode (*rallyhere_stats_base)(RallyHereGameInstanceAdapterPtr adapter,
												   const RallyHereStatsBase* stats,
												   const RallyHereStatsBaseProvided *provided,
												   void (*callback)(const RallyHereStatusCode& code, void* user_data),
												   void* user_data);

static void* GetDeepDllHandle( const TCHAR* Filename )
{
#if PLATFORM_UNIX
	check( Filename );
	FString AbsolutePath = FPaths::ConvertRelativePathToFull(Filename);

	void *Handle = dlopen( TCHAR_TO_UTF8(*AbsolutePath), RTLD_LAZY | RTLD_DEEPBIND );
	if (!Handle)
	{
		UE_LOG(LogCore, Warning, TEXT("dlopen failed: %s"), UTF8_TO_TCHAR(dlerror()) );
	}

	return Handle;
#else
	return FPlatformProcess::GetDllHandle(Filename);
#endif
}

void RallyHereGameInstanceAdapterDeleter::operator()(RallyHereGameInstanceAdapterPtr adapter)
{
	rallyhere_destroy_game_instance_adapter(adapter);
}

GameHostAdapterImporter *GameHostAdapterImporter::Importer = nullptr;

bool GameHostAdapterImporter::Import()
{
	auto MakeImporter = [&]()
	{
		Importer = new GameHostAdapterImporter();
	};
	UE_CALL_ONCE( MakeImporter );

	return Importer->Handle != nullptr;
}

GameHostAdapterImporter::GameHostAdapterImporter()
{
#if WITH_SSL
	// Make sure SSL is loaded so that we can use the shared cert pool, and to globally initialize OpenSSL if possible
	FSslModule& SslModule = FModuleManager::LoadModuleChecked<FSslModule>("SSL");
	SslModule.GetSslManager().InitializeSsl();
#endif // #if WITH_SSL
	FString gameHostAdapterLibPath;
	if (!FParse::Value(FCommandLine::Get(), TEXT("gamehostadapterlibpath="), gameHostAdapterLibPath))
	{
#if PLATFORM_UNIX
		gameHostAdapterLibPath = FPaths::Combine(FPaths::GetPath(FPlatformProcess::ExecutablePath()), "libgame-host-adapter.so");
#else
		gameHostAdapterLibPath = "game-host-adapter.dll";
#endif
	}
	Handle = GetDeepDllHandle(*gameHostAdapterLibPath);
	if (!Handle)
		return;

	*(void**)(&rallyhere_global_init) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_global_init"));
	*(void**)(&rallyhere_create_game_instance_adapter) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_create_game_instance_adapter"));
	*(void**)(&rallyhere_create_game_instance_adapter_with_logger) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_create_game_instance_adapter_with_logger"));
	*(void**)(&rallyhere_on_soft_stop_callback) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_on_soft_stop_callback"));
	*(void**)(&rallyhere_connect) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_connect"));
	*(void**)(&rallyhere_tick) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_tick"));
	*(void**)(&rallyhere_on_allocated_callback) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_on_allocated_callback"));
	*(void**)(&rallyhere_test_fake_allocation_response) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_test_fake_allocation_response"));

	*(void**)(&rallyhere_string_map_create) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_string_map_create"));
	*(void**)(&rallyhere_string_map_destroy) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_string_map_destroy"));
	*(void**)(&rallyhere_string_map_copy) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_string_map_copy"));
	*(void**)(&rallyhere_string_map_clear) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_string_map_clear"));
	*(void**)(&rallyhere_string_map_get) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_string_map_get"));
	*(void**)(&rallyhere_string_map_set) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_string_map_set"));
	*(void**)(&rallyhere_string_map_setn) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_string_map_setn"));

	*(void**)(&rallyhere_ready) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_ready"));
	*(void**)(&rallyhere_allocate) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_allocate"));
	*(void**)(&rallyhere_reserve) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_reserve"));
	*(void**)(&rallyhere_reserve_unconditional) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_reserve_unconditional"));
	*(void**)(&rallyhere_destroy_game_instance_adapter) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_destroy_game_instance_adapter"));
	*(void**)(&rallyhere_global_cleanup) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_global_cleanup"));
	*(void**)(&rallyhere_is_error) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_is_error"));
	*(void**)(&rallyhere_is_cancelled) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_is_cancelled"));
	*(void**)(&rallyhere_status_text) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_status_text"));

	*(void**)(&rallyhere_set_additional_info) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_set_additional_info"));

	*(void**)(&rallyhere_stats_gauge) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_stats_gauge"));
	*(void**)(&rallyhere_stats_gauge_with_labels) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_stats_gauge_with_labels"));
	*(void**)(&rallyhere_stats_base) = FPlatformProcess::GetDllExport(Handle, TEXT("rallyhere_stats_base"));

	check(rallyhere_global_init);
	check(rallyhere_create_game_instance_adapter);
	check(rallyhere_destroy_game_instance_adapter);
	check(rallyhere_global_cleanup);

	rallyhere_global_init();
}

GameHostAdapterImporter::~GameHostAdapterImporter()
{
	rallyhere_global_cleanup();
	*(void**)(&rallyhere_global_init) = nullptr;
	*(void**)(&rallyhere_create_game_instance_adapter) = nullptr;
	*(void**)(&rallyhere_create_game_instance_adapter_with_logger) = nullptr;
	*(void**)(&rallyhere_on_soft_stop_callback) = nullptr;
	*(void**)(&rallyhere_connect) = nullptr;
	*(void**)(&rallyhere_tick) = nullptr;
	*(void**)(&rallyhere_on_allocated_callback) = nullptr;
	*(void**)(&rallyhere_test_fake_allocation_response) = nullptr;

	*(void**)(&rallyhere_string_map_create) = nullptr;
	*(void**)(&rallyhere_string_map_destroy) = nullptr;
	*(void**)(&rallyhere_string_map_copy) = nullptr;
	*(void**)(&rallyhere_string_map_clear) = nullptr;
	*(void**)(&rallyhere_string_map_get) = nullptr;
	*(void**)(&rallyhere_string_map_set) = nullptr;
	*(void**)(&rallyhere_string_map_setn) = nullptr;

	*(void**)(&rallyhere_ready) = nullptr;
	*(void**)(&rallyhere_allocate) = nullptr;
	*(void**)(&rallyhere_reserve) = nullptr;
	*(void**)(&rallyhere_reserve_unconditional) = nullptr;
	rallyhere_destroy_game_instance_adapter = &__empty_rallyhere_destroy_game_instance_adapter;
	*(void**)(&rallyhere_global_cleanup) = nullptr;
	*(void**)(&rallyhere_is_error) = nullptr;
	*(void**)(&rallyhere_is_cancelled) = nullptr;
	*(void**)(&rallyhere_status_text) = nullptr;

	*(void**)(&rallyhere_set_additional_info) = nullptr;

	*(void**)(&rallyhere_stats_gauge) = nullptr;
	*(void**)(&rallyhere_stats_gauge_with_labels) = nullptr;
	*(void**)(&rallyhere_stats_base) = nullptr;

	FPlatformProcess::FreeDllHandle(Handle);
	FSslModule& SslModule = FModuleManager::LoadModuleChecked<FSslModule>("SSL");
	SslModule.GetSslManager().ShutdownSsl();
}
