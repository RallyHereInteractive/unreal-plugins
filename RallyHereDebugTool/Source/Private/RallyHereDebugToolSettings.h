// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "RallyHereDebugToolModule.h"
#include "Engine/DeveloperSettings.h"
#include "Styling/SlateTypes.h"
#include "InputCoreTypes.h"
#include "Misc/OutputDevice.h"
#include "RallyHereDebugTool.h"
#include "RallyHereDebugToolSettings.generated.h"

/**
 * Struct containing key information that can be used for key binding. Using 'Undetermined' value for modifier keys
 * means that those keys should be ignored when testing for a match.
 */
USTRUCT()
struct FRallyHereDebugToolKeyInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Input")
	FKey Key;

	UPROPERTY(EditAnywhere, Category = "Input")
	ECheckBoxState Shift = ECheckBoxState::Undetermined;

	UPROPERTY(EditAnywhere, Category = "Input")
	ECheckBoxState Ctrl = ECheckBoxState::Undetermined;

	UPROPERTY(EditAnywhere, Category = "Input")
	ECheckBoxState Alt = ECheckBoxState::Undetermined;

	UPROPERTY(EditAnywhere, Category = "Input")
	ECheckBoxState Cmd = ECheckBoxState::Undetermined;

	friend bool operator==(const FRallyHereDebugToolKeyInfo& Lhs, const FRallyHereDebugToolKeyInfo& Rhs)
	{
		return Lhs.Key == Rhs.Key
			&& Lhs.Shift == Rhs.Shift
			&& Lhs.Ctrl == Rhs.Ctrl
			&& Lhs.Alt == Rhs.Alt
			&& Lhs.Cmd == Rhs.Cmd;
	}

	friend bool operator!=(const FRallyHereDebugToolKeyInfo& Lhs, const FRallyHereDebugToolKeyInfo& Rhs)
	{
		return !(Lhs == Rhs);
	}
};

UENUM(BlueprintType)
enum class ERH_NetImGuiPolicy : uint8
{
	/** No connections allowed, system is disabled. */
	Disabled,
	/** Connection to viewer is triggered from Unreal. */
	ConnectToApp,
	/** Connection to viewer is triggered from Unreal, allows commandline connection on startup via -rh.dtconnectip=<ip>. */
	ConnectToAppOnStartup,
	/** Connection to viewer is triggered from viewer (Unreal listens for connection - less secure). */
	ConnectFromApp,
	/** Connection to viewer is triggered from viewer, automatically listen on startup (Unreal listens for connection - less secure). */
	ConnectFromAppOnStartup,
};

UCLASS(Config=RallyHereIntegration, DefaultConfig, meta=(DisplayName = "Rally Here Debug Tool Settings"))
class URallyHereDebugToolSettings : public UDeveloperSettings
{
    GENERATED_BODY()

public:
    URallyHereDebugToolSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// Delegate raised when default instance is loaded.
	static FSimpleMulticastDelegate OnSettingsLoaded;

	static const URallyHereDebugToolSettings* Get() { return DefaultInstance; }

	virtual void PostInitProperties() override;
	virtual void BeginDestroy() override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
#endif


	/** Is the RallyHereDebugTool enabled? If so, spawn an instance of the tool when a new game world initializes. */
    UPROPERTY(Config, EditAnywhere, Category = "Rally Here Debug Tool")
    bool Enabled;

    /** The class to instantiate for the debug tool. Defaults to this class but can be overridden */
	UPROPERTY(Config, EditAnywhere, Category = "Rally Here Debug Tool")
    TSubclassOf<URallyHereDebugTool> RallyHereDebugToolClass;

	/** The key binding used to toggle the debug tool UI on/off. The "ActionName" property here is ignored and is replaced with "RallyHere.ToggleDebugTool." */
	UPROPERTY(Config, EditAnywhere, Category = "Keyboard Shortcuts")
	FRallyHereDebugToolKeyInfo ToggleUIKeyBind;

	/** If true, the Debug Tool will automatically adjust ImGui's ability to handle input. */
	UPROPERTY(Config, EditAnywhere, Category = "Input")
	bool bEnableInputWhenToggledOn;

	/** How to display timestamps in the Output Log window. */
	UPROPERTY(Config, EditAnywhere, Category = "Output Log")
	TEnumAsByte<ELogTimes::Type> OutputLogTimesType;

	/** If true, the output log will only process new items while the debug tool is active. Otherwise it will process them in the background as well. */
	UPROPERTY(Config, EditAnywhere, Category = "Output Log")
	bool bOnlyLogWhileActive;

	UPROPERTY(Config, EditAnywhere, Category = "Rally Here Debug Tool")
	bool bEnableLocalOptions;

	UPROPERTY(Config, EditAnywhere, Category = "Rally Here Debug Tool")
	FString DefaultSessionMapName;

	UPROPERTY(Config, EditAnywhere, Category = "Rally Here Debug Tool")
	FString DefaultSessionGameModeName;

	UPROPERTY(Config, EditAnywhere, Category = "Rally Here Debug Tool")
	FString DefaultSessionGameMiscParams;

	UPROPERTY(Config, EditAnywhere, Category = "Rally Here Debug Tool")
	FString DefaultWindowPositions;

	UPROPERTY(Config, EditAnywhere, Category = "Rally Here Debug Tool|NetImgui")
	ERH_NetImGuiPolicy NetImguiPolicy;
	UPROPERTY(Config, EditAnywhere, Category = "Rally Here Debug Tool|NetImGui")
	ERH_NetImGuiPolicy DedicatedServerNetImguiPolicy;
	UPROPERTY(Config, EditAnywhere, Category = "Rally Here Debug Tool|NetImGui")
	FString NetImguiDefaultConnectIP;

	static const FString strToggleDebugTool;

protected:
	static URallyHereDebugToolSettings* DefaultInstance;
};

class FRallyHereDebugToolKeyboardShortcuts
{
public:
	FRallyHereDebugToolKeyboardShortcuts();
	~FRallyHereDebugToolKeyboardShortcuts();
	void UpdateShortcutBindings();

private:
	FRallyHereDebugToolKeyInfo ToggleUIKeyInfo;

	FDelegateHandle SettingsLoadedHandle;
};