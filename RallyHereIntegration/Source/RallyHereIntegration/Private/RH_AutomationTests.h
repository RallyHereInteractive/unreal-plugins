// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0

#pragma once

#if WITH_DEV_AUTOMATION_TESTS
#include "RH_Common.h"
#include "OnlineSubsystem.h"
#include "Misc/AutomationTest.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "Engine/GameInstance.h"
#include "Engine/LocalPlayer.h"
#include "RH_GameInstanceSubsystem.h"
#include "RH_LocalPlayerSubsystem.h"

namespace RHAutomationTestUtils
{
	// Get the game world for the current test context
	FORCEINLINE UWorld* GetWorld(const FAutomationTestBase* Test)
	{
		check(Test != nullptr);
		const auto TestFlags = Test->GetTestFlags();
		// Accessing the game world is only valid for game-only 
		check((TestFlags & EAutomationTestFlags::ApplicationContextMask) == EAutomationTestFlags::ClientContext);
		check(GEngine->GetWorldContexts().Num() == 1);
		check(GEngine->GetWorldContexts()[0].WorldType == EWorldType::Game);

		return GEngine->GetWorldContexts()[0].World();
	}

	// Get the game instance for the current test context
	FORCEINLINE UGameInstance* GetGameInstance(const FAutomationTestBase* Test)
	{
		auto World = GetWorld(Test);
		if (World != nullptr)
		{
			return World->GetGameInstance();
		}
		return nullptr;
	}

	// Get the game instance subsystem for the current test context
	FORCEINLINE class URH_GameInstanceSubsystem* GetRHGameInstanceSubsystem(const FAutomationTestBase* Test)
	{
		auto GameInstance = GetGameInstance(Test);
		if (GameInstance != nullptr)
		{
			return GameInstance->GetSubsystem<URH_GameInstanceSubsystem>();
		}
		return nullptr;
	}

	FORCEINLINE ULocalPlayer* GetLocalPlayer(const FAutomationTestBase* Test, int32 PlayerIndex = 0)
	{
		auto GameInstance = GetGameInstance(Test);
		if (GameInstance != nullptr)
		{
			return GameInstance->GetLocalPlayerByIndex(PlayerIndex);
		}
		return nullptr;
	}

	FORCEINLINE class URH_LocalPlayerSubsystem* GetRHLocalPlayerSubsystem(const FAutomationTestBase* Test, int32 PlayerIndex = 0)
	{
		auto LocalPlayer = GetLocalPlayer(Test, PlayerIndex);
		if (LocalPlayer != nullptr)
		{
			return LocalPlayer->GetSubsystem<URH_LocalPlayerSubsystem>();
		}
		return nullptr;
	}
}

#endif