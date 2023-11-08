// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#include "RH_Beacons.h"
#include "RH_Common.h"

// needed for doing authentication using our normal gamemode auth handler
#include "GameFramework/GameModeBase.h"
#include "RH_GameInstanceSubsystem.h"
#include "Engine/GameInstance.h"

// needed for beacon message parsing
#include "OnlineSubsystemUtils.h"
#include "Net/DataChannel.h"

ARH_OnlineBeaconHost::ARH_OnlineBeaconHost(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	bRequireBeaconAuthentication = true;
	bAutoCreateTestHost = true;
	bAuthRequired = true; // we want to use the authenication scheme, to do basic validation of clients connecting, and to allow us to check for RH credentials
}

bool ARH_OnlineBeaconHost::InitHost()
{
	bool bSuccess = Super::InitHost();

	if (bSuccess && bAutoCreateTestHost)
	{
		auto* TestHost = GetWorld()->SpawnActor<ARH_TestBeaconHostObject>();
		if (TestHost != nullptr)
		{
			RegisterHost(TestHost);
		}
	}

	return bSuccess;
}

#if RH_FROM_ENGINE_VERSION(5,2)
bool ARH_OnlineBeaconHost::StartVerifyAuthentication(const FUniqueNetId& PlayerId, const FString& AuthenticationToken, const FOnAuthenticationVerificationCompleteDelegate& OnComplete)
{
	FOnlineError Error;
	bool bStartedAuth = CommonVerifyAuthentication(PlayerId, AuthenticationToken, Error);
	if (bStartedAuth)
	{
		OnComplete.ExecuteIfBound(Error);
	}

	return bStartedAuth;
}
#else
bool ARH_OnlineBeaconHost::StartVerifyAuthentication(const FUniqueNetId& PlayerId, const FString& AuthenticationToken)
{
	FOnlineError Error;
	bool bStartedAuth = CommonVerifyAuthentication(PlayerId, AuthenticationToken, Error);
	if (bStartedAuth)
	{
		OnAuthenticationVerificationComplete(PlayerId, Error);
	}

	return bStartedAuth;
}
#endif

bool ARH_OnlineBeaconHost::CommonVerifyAuthentication(const FUniqueNetId& PlayerId, const FString& AuthenticationToken, FOnlineError& Error)
{
	UWorld* pWorld = GetWorld();
	if (pWorld != nullptr)
	{
		bool bPassedAuthentication = false;

		// find the player connection and import any player options desired
		UNetConnection* pConnection = nullptr;
		if (NetDriver != nullptr && NetDriver->ClientConnections.Num() > 0)
		{
			for (auto Client : NetDriver->ClientConnections)
			{
				if (Client->PlayerId == PlayerId)
				{
					pConnection = Client;
					break;
				}
			}
		}

		// run the normal game subsystem validation to check login authenication - note RH uses this to inject the RH player uuid and such into the connection object
		FString ErrorMessage;
		auto* GameInstance = pWorld->GetGameInstance();
		if (GameInstance != nullptr)
		{
			auto* GISS = GameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
			if (GISS != nullptr)
			{
				bPassedAuthentication = GISS->ValidateIncomingConnection(pConnection, ErrorMessage);
			}
		}

		if (bRequireBeaconAuthentication && !bPassedAuthentication)
		{
			UE_LOG(LogRallyHereIntegration, Warning, TEXT("Failed beacon authentication for player %s"), *PlayerId.ToString());
		}

		Error = FOnlineError(!bPassedAuthentication ? EOnlineErrorResult::AccessDenied : EOnlineErrorResult::Success);

		return true;
	}

	return false;
}

void ARH_OnlineBeaconHost::Destroyed()
{
	// clean up our beacon actor
	if (bAutoCreateTestHost)
	{
		auto TestBeaconType = ARH_TestBeaconClient::StaticClass()->GetName();
		AOnlineBeaconHostObject* HostObject = GetHost(TestBeaconType);
		if (HostObject)
		{
			UnregisterHost(TestBeaconType);
			HostObject->Destroy();
		}
	}

	Super::Destroyed();
}

ARH_OnlineBeaconClient::ARH_OnlineBeaconClient(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

// override to inject our login options, which we use for validation that the player is part of the proper session
void ARH_OnlineBeaconClient::NotifyControlMessage(UNetConnection* Connection, uint8 MessageType, class FInBunch& Bunch)
{
	// 5.3 added support for GetLoginOptions(), so this override is not needed past that version
#if RH_BELOW_ENGINE_VERSION(5,3)
	if (NetDriver->ServerConnection && MessageType == NMT_Challenge)
	{
		check(Connection == NetDriver->ServerConnection);

		// We are the client
#if !(UE_BUILD_SHIPPING && WITH_EDITOR)
		UE_LOG(LogBeacon, Log, TEXT("%s[%s] Client received: %s"), *GetName(), *Connection->GetName(), FNetControlMessageInfo::GetName(MessageType));
#endif

		// Challenged by server.
		if (FNetControlMessage<NMT_Challenge>::Receive(Bunch, Connection->Challenge))
		{
			// build a URL
			FURL URL(nullptr, TEXT(""), TRAVEL_Absolute);
			FString URLString;
#if RH_FROM_ENGINE_VERSION(5,2)
			FString AuthTicket = GetAuthTicket(*Connection->PlayerId);
			if (!AuthTicket.IsEmpty())
			{
				URL.AddOption(*FString::Printf(TEXT("AuthTicket=%s"), *AuthTicket));
			}

#endif

			// Add stored login options
			URL.AddOption(*LoginOptions);

			// Append authentication token to URL options
			IOnlineIdentityPtr IdentityPtr = Online::GetIdentityInterface(GetWorld());
			if (IdentityPtr.IsValid())
			{
				TSharedPtr<FUserOnlineAccount> UserAcct = IdentityPtr->GetUserAccount(*Connection->PlayerId);
				if (UserAcct.IsValid())
				{
					URL.AddOption(*FString::Printf(TEXT("AuthTicket=%s"), *UserAcct->GetAccessToken()));
				}
			}
			URLString = URL.ToString();

			// compute the player's online platform name
			FName OnlinePlatformName = NAME_None;
			if (const FWorldContext* const WorldContext = GEngine->GetWorldContextFromWorld(GetWorld()))
			{
				if (WorldContext->OwningGameInstance)
				{
					OnlinePlatformName = WorldContext->OwningGameInstance->GetOnlinePlatformName();
				}
			}
			FString OnlinePlatformNameString = OnlinePlatformName.ToString();

			// send NMT_Login
			Connection->ClientResponse = TEXT("0");
			FNetControlMessage<NMT_Login>::Send(Connection, Connection->ClientResponse, URLString, Connection->PlayerId, OnlinePlatformNameString);
			NetDriver->ServerConnection->FlushNet();
		}
		else
		{
			// Force close the session
			UE_LOG(LogBeacon, Warning, TEXT("%s: Unable to parse challenge request message."), *Connection->GetName());
			OnFailure();
		}
	}
	else
#endif
	{
		Super::NotifyControlMessage(Connection, MessageType, Bunch);
	}
}

/////////////////////////////////////////////////////////////////

ARH_TestBeaconClient::ARH_TestBeaconClient(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

void ARH_TestBeaconClient::OnFailure()
{
	UE_LOG(LogBeacon, Verbose, TEXT("Test beacon connection failure, handling connection timeout."));
	Super::OnFailure();
}

void ARH_TestBeaconClient::ClientPong_Implementation(FDateTime ClientTime)
{
	FTimespan Ping = FDateTime::Now() - ClientTime;
	UE_LOG(LogBeacon, Log, TEXT("Ping time: %0.2fms"), Ping.GetTotalMilliseconds());
}

bool ARH_TestBeaconClient::ServerPing_Validate(FDateTime ClientTime)
{
	return true;
}

void ARH_TestBeaconClient::ServerPing_Implementation(FDateTime ClientTime)
{
	ClientPong(ClientTime);
}

ARH_TestBeaconHostObject::ARH_TestBeaconHostObject(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	ClientBeaconActorClass = ARH_TestBeaconClient::StaticClass();
	BeaconTypeName = ClientBeaconActorClass->GetName();
}
