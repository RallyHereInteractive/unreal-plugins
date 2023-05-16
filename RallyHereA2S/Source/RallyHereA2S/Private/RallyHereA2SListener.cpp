// Copyright 2016-2023 Hi-Rez Studios, Inc. All Rights Reserved.
#if WITH_RALLYHEREA2S

#include "RallyHereA2SListener.h"

#include "RallyHereA2SModule.h"
#include "SocketSubsystem.h"
#include "Sockets.h"
#include "Common/UdpSocketBuilder.h"
#include "GameFramework/GameMode.h"
#include "Engine/World.h"
#include "Engine/Level.h"
#include "Engine/GameEngine.h"

#define SAFE_MEMCPY(DEST, DESTSZ, SRC, SRCSZ, OUTPTR)                                                                                                         \
        if (DESTSZ >= SRCSZ)                                                                                                                                  \
        {                                                                                                                                                     \
            OUTPTR = static_cast<uint8*>(FMemory::Memcpy(DEST, SRC, SRCSZ)) + SRCSZ;                                                                          \
        }                                                                                                                                                     \
        else                                                                                                                                                  \
        {                                                                                                                                                     \
            UE_LOG(LogRallyHereA2SListener, Error, TEXT("Failed to serialze server info as packet size was not large enough.  When serializing from "#SRC));  \
            return false;                                                                                                                                     \
        }


namespace
{
	int32 GetMaxPlayers()
	{
		int32 totalPlayers = 0;
		if (GEngine)
		{
			for (FWorldContext const& WorldContext : GEngine->GetWorldContexts())
			{
				auto* World = WorldContext.World();
				if (World && (World->WorldType == EWorldType::Game || World->WorldType == EWorldType::GamePreview))
				{
					auto* GameMode = World->GetAuthGameMode();
					if (GameMode)
					{
						totalPlayers += GameMode->GetNumPlayers();
					}
				}
			}
		}

		return totalPlayers;
	}

	FString GetMapName()
	{
		FString mapName("");
		if (GEngine)
		{
			for (FWorldContext const& WorldContext : GEngine->GetWorldContexts())
			{
				auto* World = WorldContext.World();
				if (World && (World->WorldType == EWorldType::Game || World->WorldType == EWorldType::GamePreview))
				{
					if (!(World->GetMapName().IsEmpty()))
					{
						mapName = World->GetMapName();
						break;
					}
				}
			}
		}

		return mapName;
	}
}

enum class QUERY : uint8
{
	A2S_INFO = 0x54,
};

static constexpr unsigned int A2S_MAX_PACKET_SIZE = 1400;

FRallyHereA2SListener::FRallyHereA2SListener()
	: FTickableGameObject()
	, m_pSocket(nullptr)
	, m_pSocketSubsystem(ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM))
{
	m_OurInfo.binFirst.ResponseHeader = -1;
	m_OurInfo.binFirst.Header = 0x49;
	m_OurInfo.binFirst.Protocol = 0x00;

	m_OurInfo.binSecond.ID = 0; //This probably would need to be placed in a specific byte order, but we don't put anything meaningful into it anyhow
	m_OurInfo.binSecond.Players = 0;
	m_OurInfo.binSecond.MaxPlayers = 1;
	m_OurInfo.binSecond.Bots = 0;
	m_OurInfo.binSecond.ServerType = 'd';
#if PLATFORM_WINDOWS
	m_OurInfo.binSecond.Environment = 'w';
#elif PLATFORM_APPLE
	m_OurInfo.binSecond.Environment = 'm';
#elif PLATFORM_LINUX
	m_OurInfo.binSecond.Environment = 'l';
#else
	#error "platform not implemented"
#endif
	m_OurInfo.binSecond.Visibility = 0;
	m_OurInfo.binSecond.VAC = 0;

	m_OurInfo.EDF = 0x00;
}

bool FRallyHereA2SListener::Start(const FIPv4Address& BindIp, const int32 Port)
{
	m_pSocket = FUdpSocketBuilder(TEXT("RallyHereA2SListenerSocket"))
		.BoundToAddress(BindIp)
		.BoundToPort(Port)
		.AsNonBlocking();
	if (m_pSocket)
	{
		// kcooper: per @mbrown
		// For the map name, we could also just give it an empty string since it doesn't matter.
		// it is useful again when we are only running one match in the instance.
		m_OurInfo.Map = TCHAR_TO_UTF8(*(GetMapName()));
	}

	return m_pSocket != nullptr;
}

bool FRallyHereA2SListener::Stop(void)
{
	bool bSuccess = true;
	if (m_pSocket)
	{
		bSuccess &= m_pSocket->Close();
		m_pSocketSubsystem->DestroySocket(m_pSocket);
	}

	return bSuccess;
}

void FRallyHereA2SListener::UpdateStaticSettings(const FRallyHereA2SModule::FStaticServerInfo& Info)
{
	m_OurInfo.Update(Info);
}

void FRallyHereA2SListener::ProcessMessage(const uint8* Data, const int32 ReturnedBytes, const FInternetAddr& Source)
{
	ensure(ReturnedBytes > 0);
	constexpr int HEADER_LOC = 4;
	QUERY header = static_cast<QUERY>(Data[HEADER_LOC]);
	switch (header)
	{
	case QUERY::A2S_INFO:
		SendServerInfo(Source);
		break;
	default:
		UE_LOG(LogRallyHereA2SListener, Error, TEXT("Failed to parse A2S header.  It is unrecognized: %x"), header);
		break;
	}
}

bool FRallyHereA2SListener::SendServerInfo(const FInternetAddr& Dest)
{
	uint8 Data[A2S_MAX_PACKET_SIZE];
	uint8* ptr = Data;
	//Serialize to network bytes
	{
		uint8* end = Data + A2S_MAX_PACKET_SIZE;
		SAFE_MEMCPY(ptr, static_cast<std::size_t>(end - ptr), &m_OurInfo.binFirst, sizeof(m_OurInfo.binFirst), ptr);

		SAFE_MEMCPY(ptr, static_cast<std::size_t>(end - ptr), m_OurInfo.Name.c_str(), m_OurInfo.Name.size() + 1, ptr);
		SAFE_MEMCPY(ptr, static_cast<std::size_t>(end - ptr), m_OurInfo.Map.c_str(), m_OurInfo.Map.size() + 1, ptr);
		SAFE_MEMCPY(ptr, static_cast<std::size_t>(end - ptr), m_OurInfo.Folder.c_str(), m_OurInfo.Folder.size() + 1, ptr);
		SAFE_MEMCPY(ptr, static_cast<std::size_t>(end - ptr), m_OurInfo.GameName.c_str(), m_OurInfo.GameName.size() + 1, ptr);

		SAFE_MEMCPY(ptr, static_cast<std::size_t>(end - ptr), &m_OurInfo.binSecond, sizeof(m_OurInfo.binSecond), ptr);

		SAFE_MEMCPY(ptr, static_cast<std::size_t>(end - ptr), m_OurInfo.Version.c_str(), m_OurInfo.Version.size() + 1, ptr);

		SAFE_MEMCPY(ptr, static_cast<std::size_t>(end - ptr), &m_OurInfo.EDF, sizeof(m_OurInfo.EDF), ptr);
	}

	int32 BytesSent = 0;
	if (!m_pSocket->SendTo(Data, ptr - Data, BytesSent, Dest))
	{
		UE_LOG(LogRallyHereA2SListener, Error, TEXT("Failed to send A2S info to %s"), *Dest.ToString(true));
		return false;
	}

	return true;
}


void FRallyHereA2SListener::UpdateAtTick()
{
	int32 totalPlayers = GetMaxPlayers();
	if (totalPlayers > std::numeric_limits<uint8>::max())
	{
		UE_LOG(LogRallyHereA2SListener, Warning, TEXT("Total number of players (%d) greater than 255 (A2S limit)"), totalPlayers);
	}
	m_OurInfo.binSecond.Players = totalPlayers;
}


void FRallyHereA2SListener::Tick(float DeltaTime)
{
	bool bUpdated = false;
	if (m_pSocket)
	{
		uint8 Data[A2S_MAX_PACKET_SIZE];
		int32 ReturnedBytes = 1;
		auto Source = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
		do
		{
			if (m_pSocket->RecvFrom(Data, A2S_MAX_PACKET_SIZE, ReturnedBytes, *Source) && ReturnedBytes > 0)
			{
				//We defer our tick update to when we receive a packet
				if (!bUpdated)
				{
					bUpdated = true;
					UpdateAtTick();
				}

				ProcessMessage(Data, ReturnedBytes, *Source);
			}
		}
		//Only stop processing udp packets when we have ran out of them
		while (ReturnedBytes > 0);
	}
}

TStatId FRallyHereA2SListener::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(FRallyHereA2SListener, STATGROUP_Tickables);
}

void FRallyHereA2SListener::OnLevelChanged(ULevel* Level, UWorld* World)
{
	if (World && World->WorldType == EWorldType::Game)
	{
		m_OurInfo.Map = TCHAR_TO_UTF8(*World->GetMapName());
	}
}

void FRallyHereA2SListener::FServerInfo::Update(const FRallyHereA2SModule::FStaticServerInfo& info)
{
	Name = TCHAR_TO_UTF8(*info.Name);
	Folder = TCHAR_TO_UTF8(*info.Folder);
	GameName = TCHAR_TO_UTF8(*info.GameName);

	binSecond.MaxPlayers = info.MaxPlayers;
	binSecond.Visibility = info.Visibility;

	Version = TCHAR_TO_UTF8(*info.Version);
}
#endif // WITH_RALLYHEREA2S