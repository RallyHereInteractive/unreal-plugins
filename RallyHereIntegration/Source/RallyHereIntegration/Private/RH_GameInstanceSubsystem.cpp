
#include "RH_GameInstanceSubsystem.h"
#include "RallyHereIntegrationModule.h"
#include "Engine/GameInstance.h"
#include "GameFramework/GameModeBase.h"
#include "RH_LocalPlayer.h"

// subsystem includes
#include "RH_GameInstanceSessionSubsystem.h"
#include "RH_GameInstanceBootstrappers.h"
#include "RH_PlayerInfoSubsystem.h"
#include "RH_CatalogSubsystem.h"
#include "RH_ConfigSubsystem.h"

#include "RH_SessionBrowser.h"
#include "RH_MatchmakingBrowser.h"


void URH_GameInstanceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	FGameModeEvents::GameModePreLoginEvent.AddUObject(this, &URH_GameInstanceSubsystem::GameModePreloginEvent);

	const auto* Settings = GetDefault<URH_IntegrationSettings>();

	// Create Subsystem plugins
	if (bEnableGameSessions)
	{
		SessionSubsystem = AddSubsystemPlugin<URH_GameInstanceSessionSubsystem>(Settings->GameInstanceSessionInfoSubsystemClass);

		if (DEFAULT_IsServerBootstrappingEnabled())
		{
			ServerBootstrapper = AddSubsystemPlugin<URH_GameInstanceServerBootstrapper>(Settings->GameInstanceServerBootstrappermClass);
		}
		else if (DEFAULT_IsClientBootstrappingEnabled())
		{
			ClientBootstrapper = AddSubsystemPlugin<URH_GameInstanceClientBootstrapper>(Settings->GameInstanceClientBootstrapperClass);
		}
	}
	
	PlayerInfoSubsystem = AddSubsystemPlugin<URH_PlayerInfoSubsystem>(Settings->PlayerInfoSubsystemClass);
	CatalogSubsystem = AddSubsystemPlugin<URH_CatalogSubsystem>(Settings->CatalogSubsystemClass);
	ConfigSubsystem = AddSubsystemPlugin<URH_ConfigSubsystem>(Settings->ConfigSubsystemClass);

	if (bEnableSessionBrowser)
	{
		SessionSearchCache = AddSubsystemPlugin<URH_SessionBrowserCache>(Settings->SessionBrowserCacheClass);
	}
	if (bEnableMatchmakingBrowser)
	{
		MatchmakingCache = AddSubsystemPlugin<URH_MatchmakingBrowserCache>(Settings->MatchmakingBrowserCacheClass);
	}

	// Initialize all plugins
	for (auto Plugin : SubsystemPlugins)
	{
		Plugin->Initialize();
	}
}

void URH_GameInstanceSubsystem::Deinitialize()
{
    UE_LOG(LogRallyHereIntegration, Verbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	FGameModeEvents::GameModePreLoginEvent.RemoveAll(this);

	// deinitialize all plugins
	for (auto Plugin : SubsystemPlugins)
	{
		Plugin->Deinitialize();
	}
	SubsystemPlugins.Reset();

	SessionSubsystem = nullptr;
	ServerBootstrapper = nullptr;
	ClientBootstrapper = nullptr;
	PlayerInfoSubsystem = nullptr;
	CatalogSubsystem = nullptr;
	ConfigSubsystem = nullptr;
	SessionSearchCache = nullptr;
	MatchmakingCache = nullptr;
}

void URH_GameInstanceSubsystem::GameModePreloginEvent(class AGameModeBase* GameMode, const FUniqueNetIdRepl& NewPlayer, FString& ErrorMessage)
{
	// find the player connection and import any player options desired
	auto* World = GetGameInstance()->GetWorld();
	FString RequestURL;
	if (World->NetDriver != nullptr && World->NetDriver->ClientConnections.Num() > 0)
	{
		for (auto Client : World->NetDriver->ClientConnections)
		{
			if (Client->PlayerId == NewPlayer)
			{
				ValidateIncomingConnection(Client, ErrorMessage);
				break;
			}
		}
	}
}

bool URH_GameInstanceSubsystem::ValidateIncomingConnection(UNetConnection* Connection, FString& ErrorMessage) const
{
	// if error message is already set, something else already failed
	if (ErrorMessage.Len() > 0)
	{
		return false;
	}

	if (Connection == nullptr)
	{
		ErrorMessage = TEXT("Connection is null");
		return false;
	}

	// find the player connection and import any player options desired
	auto* World = GetGameInstance()->GetWorld();
	FString RequestURL = Connection->RequestURL;

	auto* pRH_Conn = Cast<IRH_IpConnectionInterface>(Connection);
	if (pRH_Conn != nullptr)
	{
		bool bFound = false;
		bool bValid = false;;
		pRH_Conn->ImportPlayerOptionsfromURL(bFound, bValid);

		if (bRequireImportedPlayerIdsForJoining && !bFound)
		{
			ErrorMessage = TEXT("Could not import player options from URL");
			return false;
		}

		//if it is a game type of world, check required id flag (for now, editor may not have valid IDs for PIE, etc)
		if (World->WorldType == EWorldType::Game)
		{
			if (bRequireValidPlayerIdsForJoining && !bValid)
			{
				ErrorMessage = TEXT("Imported player ids are not valid");
				return false;
			}
		}
	}

	if (ErrorMessage.Len() == 0 && bUseSecurityTokenForJoining)
	{
		const auto* pWorld = GetWorld();	// actors that are not default objects always have a world
		const auto* pGameInstance = pWorld->GetGameInstance();
		if (pGameInstance != nullptr)
		{
			const auto* pRHSubsystem = pGameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
			if (pRHSubsystem != nullptr && pRHSubsystem->GetSessionSubsystem() != nullptr)
			{
				// temporary url to parse out the token
				const FURL TempURL(nullptr, *RequestURL, TRAVEL_Absolute);
				const FString LoginSecurityToken = TempURL.GetOption(TEXT("RHSecurityToken="), TEXT(""));

				// see if a security token was specified for the currently active session
				const FString* SessionSecurityToken = nullptr;
				const auto* Session = pRHSubsystem->GetSessionSubsystem()->GetActiveSession();
				if (Session != nullptr && Session->GetInstanceData() != nullptr)
				{
					if (const auto JoinParams = Session->GetInstanceData()->GetJoinParamsOrNull())
					{
						if (const auto CustomData = JoinParams->GetCustomDataOrNull())
						{
							SessionSecurityToken = CustomData->Find(RH_SessionCustomDataKeys::SessionSecurityTokenName);
						}
					}
				}

				if (SessionSecurityToken != nullptr)
				{
					if (*SessionSecurityToken != LoginSecurityToken)
					{
						ErrorMessage = TEXT("RH Security Token mismatch");
						return false;
					}
				}
				else if (IsRunningDedicatedServer() && GetServerBootstrapper() != nullptr && GetServerBootstrapper()->IsBootstrapModeEnabled())
				{
					// if we are running a dedicated server and the server bootstrapper is enabled, failing to find a token probably means that the server is not part of a valid joinable session
					ErrorMessage = TEXT("Security token could not be validated");
					return false;
				}
			}
		}
	}

	return true;
}

void URH_GameInstanceSubsystem::CustomEndpoint(const FRH_CustomEndpointRequestWrapper& RequestWrapper, const RallyHereAPI::FDelegate_CustomEndpointSend& Delegate)
{
	UE_LOG(LogRallyHereIntegration, VeryVerbose, TEXT("[%s]"), ANSI_TO_TCHAR(__FUNCTION__));

	typedef RallyHereAPI::Traits_CustomEndpointSend BaseType;

	BaseType::Request Request;
	Request.AuthContext = GetAuthContext();
	Request.EndpointId = RequestWrapper.EndpointId;
	if (RequestWrapper.ContentType.Len() > 0)
	{
		Request.ContentType = RequestWrapper.ContentType;
	}
	if (RequestWrapper.Body.GetValue().IsValid())
	{
		Request.Body = RequestWrapper.Body;
	}

	BaseType::DoCall(RH_APIs::GetAPIs().GetCustom(), Request, Delegate, RequestWrapper.Priority);

}

void URH_GameInstanceSubsystem::CustomEndpoint(const FRH_CustomEndpointRequestWrapper& Request, const FRH_CustomEndpointDelegateBlock Delegate)
{
	auto InternalDelegate = RallyHereAPI::FDelegate_CustomEndpointSend::CreateLambda([Delegate](const RallyHereAPI::FResponse_CustomEndpointSend& Resp)
		{
			FRH_CustomEndpointResponseWrapper ResponseWrapper(Resp);
			Delegate.ExecuteIfBound(ResponseWrapper);
		});
	CustomEndpoint(Request, InternalDelegate);
}