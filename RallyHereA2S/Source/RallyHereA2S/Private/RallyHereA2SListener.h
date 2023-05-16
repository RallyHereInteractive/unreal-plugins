// Copyright 2016-2023 Hi-Rez Studios, Inc. All Rights Reserved.

#pragma once

#if WITH_RALLYHEREA2S

#include "CoreMinimal.h"
#include "RallyHereA2SModule.h"
#include "Tickable.h"
#include "Sockets/Public/Sockets.h"
#include "Sockets/Public/SocketSubsystem.h"

#include <string>

struct FIPv4Address;
class FInternetAddr;

/**
 *
 */
class FRallyHereA2SListener : public FTickableGameObject
{
public:
	FRallyHereA2SListener();

	bool Start(const FIPv4Address& BindIp, const int32 Port);
	bool Stop(void);

	void UpdateStaticSettings(const FRallyHereA2SModule::FStaticServerInfo& Info);

	void ProcessMessage(const uint8* Data, const int32 ReturnedBytes, const FInternetAddr& Source);
	bool SendServerInfo(const FInternetAddr& Dest);

	void UpdateAtTick();

	// FTickableGameObhect interface

	virtual void Tick(float DeltaTime) override;

	virtual ETickableTickType GetTickableTickType() const override
	{
		return ETickableTickType::Always;
	}

	virtual bool IsTickableWhenPaused() const override
	{
		return true;
	}

	virtual TStatId GetStatId() const override;

private:

	void OnLevelChanged(class ULevel* Level, class UWorld* World);

	/** The UDP Listener **/
	FSocket* m_pSocket;

	/** Holds a pointer to the socket sub-system. **/
	ISocketSubsystem* m_pSocketSubsystem;

	struct FServerInfo
	{
#pragma pack(push, 1)
		struct
		{
			uint32 ResponseHeader;
			uint8 Header;
			uint8 Protocol;
		} binFirst;
#pragma pack(pop)

		std::string Name;
		std::string Map;
		std::string Folder;
		std::string GameName;

#pragma pack(push, 1)
		struct
		{
			uint16 ID; //This probably would need to be placed in a specific byte order, but we don't put anything meaningful into it anyhow
			uint8 Players;
			uint8 MaxPlayers;
			uint8 Bots;
			uint8 ServerType;
			uint8 Environment;
			uint8 Visibility;
			uint8 VAC;
		} binSecond;
#pragma pack(pop)

		std::string Version;

		uint8 EDF;

		void Update(const FRallyHereA2SModule::FStaticServerInfo& info);
	};

	/** server info we send in response to a query **/
	FServerInfo m_OurInfo;
};
#endif // WITH_RALLYHEREA2S