// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_GameHostAdapter.h"

#include "CoreMinimal.h"
#include "HAL/PlatformProcess.h"
#include "Misc/CommandLine.h"
#include "Misc/Paths.h"
#include "Ssl.h"

#ifdef WITH_RALLYHERE_GAME_HOST_ADAPTER

static void* GetDeepDllHandle( const TCHAR* Filename )
{
	return FPlatformProcess::GetDllHandle(Filename);
}

GameHostAdapterImporter *GameHostAdapterImporter::Importer = nullptr;

#define FOREACH_RHGHA_IMPORT_FUNC_IMPL(funcname) decltype(funcname)* GameHostAdapterImporter::funcname = nullptr;
	FOREACH_RHGHA_IMPORT_FUNC()
#undef FOREACH_RHGHA_IMPORT_FUNC_IMPL

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

	// load the dll and create our handle
	Handle = GetDeepDllHandle(*gameHostAdapterLibPath);
	if (!Handle)
		return;

#define FOREACH_RHGHA_IMPORT_FUNC_IMPL(funcname) *(void**)(&funcname) = FPlatformProcess::GetDllExport(Handle, TEXT(#funcname));
	FOREACH_RHGHA_IMPORT_FUNC()
#undef FOREACH_RHGHA_IMPORT_FUNC_IMPL

	rallyhere_global_init();
}

GameHostAdapterImporter::~GameHostAdapterImporter()
{
	// clean up our handle and unload the dll
	if (Handle)
	{
		rallyhere_global_cleanup();

		FPlatformProcess::FreeDllHandle(Handle);

		Handle = nullptr;

#define FOREACH_RHGHA_IMPORT_FUNC_IMPL(funcname) funcname = nullptr;
		FOREACH_RHGHA_IMPORT_FUNC()
#undef FOREACH_RHGHA_IMPORT_FUNC_IMPL
	}
	FSslModule& SslModule = FModuleManager::LoadModuleChecked<FSslModule>("SSL");
	SslModule.GetSslManager().ShutdownSsl();
}

#endif