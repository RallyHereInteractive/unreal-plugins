#pragma once
#include "GameFramework/GameMode.h"
#include "RH_GameMode.generated.h"

/**
 * @brief This class implements a simple gamemode layer that handles having timer based auto shutdown at the end of gameplay and when no players are present
 */
UCLASS(Config=Game, hideCategories=(HUD))
class RALLYHEREINTEGRATION_API ARH_GameMode : public AGameMode
{
	GENERATED_BODY()

public:
	/** @brief Constructor */
	ARH_GameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	/** @brief Called when a new player logs in, updates empty timer */
	virtual void PostLogin(APlayerController* NewPlayer) override;
	/** @brief Called when a player logs out, updates empty timer */
	virtual void Logout(AController* Exiting) override;

protected:
	/** @brief Starts or updates empty timer */
	virtual void HandleMatchIsWaitingToStart() override;
	/** @brief Starts or updates empty timer */
	virtual void HandleMatchHasStarted() override;
	/** @brief Stops empty timer and kicks off common end flow */
	virtual void HandleMatchHasEnded() override;
	/** @brief Stops empty timer and kicks off common end flow */
	virtual void HandleMatchAborted() override;
	/** @brief Handles common match end flow logic such as kicking players, locks session, and starts shutdown timing */
	virtual void HandleCommonMatchEndFlow();

	/** @brief Checks whether the MatchEmptyTimer should be running, and updates it */
	virtual void CheckMatchEmptyTimer(bool bForceStop = false);
	/** @brief MatchEmptyTimer implementation, upon being triggered, will initiate shutdown. */
	virtual void MatchEmptyTimer();
	
	/** @brief This is where you should notify all players that they should return to the lobby */
	virtual void AllPlayersReturnToLobby();

	/** @brief Finalization for match flow, kicks any remaining players, and tries to close out session and begin shutdown via bootstrapping */
	virtual void FinalizeMatchFlow();
	/** @brief Backup timer for shutdown in case session ending flow was not successful, exits the engine (for dedicated servers) and disconnects (for clients) */
	virtual void FinalShutdown();

	// Shutdown timers
	/** @brief Delay before shutting down the server when no players are present, in seconds */
	UPROPERTY(EditAnywhere, Config, Category = "Shutdown")
	float ShutdownOnEmptyDelay;
	/** @brief Delay before returning players to the lobby after a match has ended, in seconds */
	UPROPERTY(EditAnywhere, Config, Category = "Shutdown")
	float MatchEndReturnToLobbyDelay;
	/** @brief Delay before shutting down the server after a match has ended, in seconds */
	UPROPERTY(EditAnywhere, Config, Category = "Shutdown")
	float MatchSpindownDelay;

	/** @brief Timer handler for ShutdownOnEmptyDelay */
	FTimerHandle MatchEmptyTimerHandle;
	/** @brief Timer handler for MatchEndReturnToLobby */
	FTimerHandle ReturnToLobbyTimer;
	/** @brief Timer handler for FinalShutdown backup timer */
	FTimerHandle ShutdownTimer;
};