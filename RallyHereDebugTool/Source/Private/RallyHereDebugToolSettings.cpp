// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#include "RallyHereDebugToolModule.h"
#include "RallyHereDebugToolSettings.h"
#include "RallyHereDebugTool.h"
#include "GameFramework/PlayerInput.h"
#include "UObject/UObjectHash.h"
#include "UObject/UObjectIterator.h"
#include "RH_Common.h"

const FString URallyHereDebugToolSettings::strToggleDebugTool(TEXT("rh.ToggleDebugTool"));
URallyHereDebugToolSettings* URallyHereDebugToolSettings::DefaultInstance = nullptr;
FSimpleMulticastDelegate URallyHereDebugToolSettings::OnSettingsLoaded;

URallyHereDebugToolSettings::URallyHereDebugToolSettings(const FObjectInitializer& ObjectInitializer /*= FObjectInitializer::Get()*/)
	: Super(ObjectInitializer)
{
	CategoryName = TEXT("Plugins");
	SectionName = TEXT("Rally Here Debug Tool");
	
	Enabled = true;
	RallyHereDebugToolClass = URallyHereDebugTool::StaticClass();
	ToggleUIKeyBind.Key = EKeys::F7;
	ToggleUIKeyBind.Alt = ECheckBoxState::Unchecked;
	ToggleUIKeyBind.Cmd = ECheckBoxState::Unchecked;
	ToggleUIKeyBind.Ctrl = ECheckBoxState::Unchecked;
	ToggleUIKeyBind.Shift = ECheckBoxState::Unchecked;
	bEnableInputWhenToggledOn = true;
	OutputLogTimesType = ELogTimes::Local;
	bOnlyLogWhileActive = true;
	bEnableLocalOptions = true;
}

void URallyHereDebugToolSettings::PostInitProperties()
{
	Super::PostInitProperties();

	if(IsTemplate())
	{
		DefaultInstance = this;
		OnSettingsLoaded.Broadcast();
	}
}

void URallyHereDebugToolSettings::BeginDestroy()
{
	Super::BeginDestroy();

	if (DefaultInstance == this)
	{
		DefaultInstance = nullptr;
	}
}

#if WITH_EDITOR
void URallyHereDebugToolSettings::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (IsTemplate())
	{
		OnSettingsLoaded.Broadcast();
	}
}
#endif

FRallyHereDebugToolKeyboardShortcuts::FRallyHereDebugToolKeyboardShortcuts()
	: ToggleUIKeyInfo()
{
	SettingsLoadedHandle = URallyHereDebugToolSettings::OnSettingsLoaded.AddRaw(this, &FRallyHereDebugToolKeyboardShortcuts::UpdateShortcutBindings);
	UpdateShortcutBindings();
}

FRallyHereDebugToolKeyboardShortcuts::~FRallyHereDebugToolKeyboardShortcuts()
{
	if (SettingsLoadedHandle.IsValid())
	{
		URallyHereDebugToolSettings::OnSettingsLoaded.Remove(SettingsLoadedHandle);
		SettingsLoadedHandle.Reset();
	}
}

static bool DebugToolSettings_IsBindable(const FKey& Key)
{
#if RH_BELOW_ENGINE_VERSION(4, 26)
	return Key.IsValid() && Key != EKeys::AnyKey && !Key.IsFloatAxis() && !Key.IsVectorAxis()
		&& !Key.IsGamepadKey() && !Key.IsModifierKey() && !Key.IsMouseButton();
#else
	return Key.IsValid() && Key != EKeys::AnyKey && !Key.IsAxis1D() && !Key.IsAxis2D()
		&& !Key.IsAxis3D() && !Key.IsGamepadKey() && !Key.IsModifierKey() && !Key.IsMouseButton();
#endif
}

void FRallyHereDebugToolKeyboardShortcuts::UpdateShortcutBindings()
{
	const URallyHereDebugToolSettings* pDebugToolSetting = URallyHereDebugToolSettings::Get();

	if (pDebugToolSetting != nullptr)
	{
		static auto CreateKeyBind = [](const FRallyHereDebugToolKeyInfo& KeyInfo, const FString Command) -> FKeyBind
		{
			FKeyBind KeyBind;
			KeyBind.Command = Command;
			KeyBind.Key = KeyInfo.Key;
			KeyBind.bDisabled = false;

#define FILL_MODIFIER_DATA(KeyInfoProperty, BindProperty, BindIgnoreProperty)\
			if (KeyInfo.KeyInfoProperty == ECheckBoxState::Undetermined)\
			{\
				KeyBind.BindProperty = KeyBind.BindIgnoreProperty = false;\
			}\
			else\
			{\
				KeyBind.BindProperty = (KeyInfo.KeyInfoProperty == ECheckBoxState::Checked);\
				KeyBind.BindIgnoreProperty = !KeyBind.BindProperty;\
			}

			FILL_MODIFIER_DATA(Shift, Shift, bIgnoreShift);
			FILL_MODIFIER_DATA(Ctrl, Control, bIgnoreCtrl);
			FILL_MODIFIER_DATA(Alt, Alt, bIgnoreAlt);
			FILL_MODIFIER_DATA(Cmd, Cmd, bIgnoreCmd);

#undef FILL_MODIFIER_DATA

			return KeyBind;
		};

		static auto UpdatePlayerInput = [](UPlayerInput* PlayerInput, const FKeyBind& KeyBind)
		{
			const int32 Index = PlayerInput->DebugExecBindings.IndexOfByPredicate([&](const FKeyBind& PlayerKeyBind)
			{
				return PlayerKeyBind.Command.Equals(KeyBind.Command, ESearchCase::IgnoreCase);
			});

			if (DebugToolSettings_IsBindable(KeyBind.Key))
			{
				if (Index != INDEX_NONE)
				{
					PlayerInput->DebugExecBindings[Index] = KeyBind;
				}
				else
				{
					PlayerInput->DebugExecBindings.Add(KeyBind);
				}
			}
			else
			{
				if (Index != INDEX_NONE)
				{
					PlayerInput->DebugExecBindings.RemoveAt(Index);
				}
			}
		};

		if (ToggleUIKeyInfo != pDebugToolSetting->ToggleUIKeyBind)
		{
			ToggleUIKeyInfo = pDebugToolSetting->ToggleUIKeyBind;

			FKeyBind KeyBind = CreateKeyBind(ToggleUIKeyInfo, URallyHereDebugToolSettings::strToggleDebugTool);

			// Update default player input, so changes will be visible in all PIE sessions created after this point.
			if (UPlayerInput* DefaultPlayerInput = GetMutableDefault<UPlayerInput>())
			{
				UpdatePlayerInput(DefaultPlayerInput, KeyBind);
			}

			TArray<UClass*> PlayerInputClasses;
			GetDerivedClasses(UPlayerInput::StaticClass(), PlayerInputClasses);
			for (UClass* CurrentClass : PlayerInputClasses)
			{
				check(CurrentClass != nullptr);
				check(CurrentClass->IsChildOf<UPlayerInput>());
				if (UPlayerInput* DefaultPlayerInput = GetMutableDefault<UPlayerInput>(CurrentClass))
				{
					UpdatePlayerInput(DefaultPlayerInput, KeyBind);
				}
			}

			// Update all existing player inputs to see changes in running PIE session.
			for (TObjectIterator<UPlayerInput> It; It; ++It)
			{
				UpdatePlayerInput(*It, KeyBind);
			}
		}
	}
}
