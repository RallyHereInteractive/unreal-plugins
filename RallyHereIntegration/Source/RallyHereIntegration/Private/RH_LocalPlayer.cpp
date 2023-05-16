
#include "RH_LocalPlayer.h"

#include "RallyHereIntegrationModule.h"
#include "RH_LocalPlayerSubsystem.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_SessionData.h"


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

FString URH_LocalPlayer::GetPlayerUuidForServerAuth() const
{
	auto* pLPSubsystem = GetRH_LocalPlayerSubsystem();

	if (pLPSubsystem != nullptr && pLPSubsystem->IsLoggedIn())
	{
		return pLPSubsystem->GetPlayerUuid().ToString();
	}

	return FString();
}

FString URH_LocalPlayer::GetSecurityTokenForServerAuth() const
{
	const auto* GI = GetGameInstance();
	if (GI != nullptr)
	{
		const auto* RH_GISS = GI->GetSubsystem<URH_GameInstanceSubsystem>();
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
	}

	return FString();
}

///////////////////////////////////////////////////////////////////////////////

URH_IpConnection::URH_IpConnection(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	RH_PlayerUuid.Invalidate();

	bRH_RemoteIsLoggedIn = false;
}

void URH_IpConnection::ImportPlayerOptionsfromURL(bool& bFound, bool& bValid)
{
	// make a temporary URL to make parsing easier
	FURL temp(nullptr, *RequestURL, TRAVEL_Absolute);

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