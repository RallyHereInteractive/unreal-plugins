// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#if WITH_RALLYHEREA2S

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FRallyHereA2SListener;
struct FIPv4Address;

RALLYHEREA2S_API DECLARE_LOG_CATEGORY_EXTERN(LogRallyHereA2SListener, Log, All);

class RALLYHEREA2S_API FRallyHereA2SModule : public IModuleInterface
{
public:

	/** Server info that does not change per tick **/
	struct FStaticServerInfo
	{
		FString Name;
		FString Folder;
		FString GameName;

		uint8 MaxPlayers;
		uint8 Visibility;

		FString Version;
	};

	void StartListening(const FIPv4Address& BindIp, const int32 Port, const FStaticServerInfo& Info);
	void UpdateStaticSettings(const FStaticServerInfo& Info);
	void ManualTick(float DeltaTime);

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

protected:
	/** The A2S implementation **/
	TUniquePtr<FRallyHereA2SListener> m_pA2S;
};
#endif // WITH_RALLYHEREA2S