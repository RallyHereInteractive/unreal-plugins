
#include "RH_LocalPlayer.h"

#include "RallyHereIntegrationModule.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_GameInstanceSessionSubsystem.h"
#include "RH_SessionData.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"

///////////////////////////////////////////////////////////////////////////////

FGuid IRH_LocalPlayerInterface::GetRHPlayerUuid() const
{
	const auto LPSS = GetRH_LocalPlayerSubsystem();
	if (LPSS != nullptr)
	{
		return LPSS->GetPlayerUuid();
	}
	return FGuid();
}

URH_GameInstanceSubsystem* IRH_LocalPlayerInterface::GetRH_GameInstanceSubsystem() const
{
	const auto LPSS = GetRH_LocalPlayerSubsystem();

	if (LPSS != nullptr)
	{
		const auto World = LPSS->GetWorld();
		if (World != nullptr)
		{
			const auto* GI = World->GetGameInstance();
			if (GI != nullptr)
			{
				return GI->GetSubsystem<URH_GameInstanceSubsystem>();
			}
		}
	}

	return nullptr;
}

FString IRH_LocalPlayerInterface::GetPlayerUuidForServerAuth() const
{
	auto* pLPSubsystem = GetRH_LocalPlayerSubsystem();

	if (pLPSubsystem != nullptr && pLPSubsystem->IsLoggedIn())
	{
		return pLPSubsystem->GetPlayerUuid().ToString();
	}

	return FString();
}

FString IRH_LocalPlayerInterface::GetSecurityTokenForServerAuth() const
{
	const auto* RH_GISS = GetRH_GameInstanceSubsystem();
	if (RH_GISS != nullptr && RH_GISS->GetSessionSubsystem() && RH_GISS->GetSessionSubsystem()->GetActiveSession() != nullptr)
	{
		const auto* Session = RH_GISS->GetSessionSubsystem()->GetActiveSession();
		if (Session->GetInstanceData() != nullptr)
		{
			if (const auto JoinParams = Session->GetInstanceData()->GetJoinParamsOrNull())
			{
				if (const auto CustomData = JoinParams->GetCustomDataOrNull())
				{
					if (const FString* SecurityToken = CustomData->Find(RH_SessionCustomDataKeys::SessionSecurityTokenName))
					{
						return *SecurityToken;
					}
				}
			}
		}
	}

	return FString();
}

///////////////////////////////////////////////////////////////////////////////

URH_LocalPlayer::URH_LocalPlayer(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FString URH_LocalPlayer::GetGameLoginOptions() const
{
	FString options = Super::GetGameLoginOptions();

	FString AuthPlayerUuid = GetPlayerUuidForServerAuth();

	options += FString::Printf(TEXT("?RHPlayerUuid=%s"), *AuthPlayerUuid);

	FString AuthToken = GetSecurityTokenForServerAuth();
	if (AuthToken.Len() > 0)
	{
		options += FString::Printf(TEXT("?RHSecurityToken=%s"), *AuthToken);
	}

	return options;
}


///////////////////////////////////////////////////////////////////////////////

void IRH_IpConnectionInterface::ImportPlayerOptionsfromURL(bool& bFound, bool& bValid)
{
	// make a temporary URL to make parsing easier
	FURL temp(nullptr, *GetImportRequestURL(), TRAVEL_Absolute);

	const TCHAR* RHPlayerUuidRawString = temp.GetOption(TEXT("RHPlayerUuid="), nullptr);

	bool bFoundPlayerUuid = RHPlayerUuidRawString != nullptr;

	bool bValidFoundPlayerUuid = false;

	if (bFoundPlayerUuid)
	{
		FString RHPlayerUuidString = FString(RHPlayerUuidRawString);
		if (RHPlayerUuidString.Len() > 0)
		{
			if (!FGuid::Parse(RHPlayerUuidString, RH_PlayerUuid))
			{
				RH_PlayerUuid.Invalidate();
			}
			else
			{
				bValidFoundPlayerUuid = true;
			}
		}
	}

	bRH_RemoteIsLoggedIn = bValidFoundPlayerUuid;

	bFound = bFoundPlayerUuid;
	bValid = bRH_RemoteIsLoggedIn;
}

///////////////////////////////////////////////////////////////////////////////

URH_IpConnection::URH_IpConnection(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}