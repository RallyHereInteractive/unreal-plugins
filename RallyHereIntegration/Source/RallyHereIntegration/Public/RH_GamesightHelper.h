// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/Interface.h"
#include "Logging/LogMacros.h"
#include "Engine/LocalPlayer.h"
#include "Engine/GameInstance.h"
#include "RH_ConfigSubsystem.h"

#include "RH_GamesightHelper.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogRHGamesight, Log, All);

UENUM()
enum class EGamesightEvent : uint8
{
	ESE_None,
	ESE_Custom,
	ESE_Login,
	ESE_FirstLogin,
	ESE_RealMoneyPurchase,
	ESE_InGameCurrencyPurchase,
	ESE_LevelChange,
	ESE_MatchPlayed
};

USTRUCT()
struct RALLYHEREINTEGRATION_API FGamesightEventParameters
{
	GENERATED_BODY()

public:
	FGamesightEventParameters() {};
	virtual ~FGamesightEventParameters() { StringFields.Empty(); DoubleFields.Empty(); };

	FString TransactionID;
	FString EventNameSuffix;
	TMap<FString, FString> StringFields;
	TMap<FString, double> DoubleFields;
};

UCLASS()
class RALLYHEREINTEGRATION_API URHGamesightHelper : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	void Initialize(UGameInstance* InGameInstance, ULocalPlayer* InLocalPlayer) { GameInstance = InGameInstance; LocalPlayer = InLocalPlayer; };

	void SendEvent(EGamesightEvent Event);
	void SendEvent(EGamesightEvent Event, const FGamesightEventParameters& Parameters);
	bool IsEventEnabled(EGamesightEvent Event);

protected:
	URH_ConfigSubsystem* GetConfigSubsystem();
	FString GetEventName(EGamesightEvent Event);

	UGameInstance* GameInstance;
	ULocalPlayer* LocalPlayer;
};
