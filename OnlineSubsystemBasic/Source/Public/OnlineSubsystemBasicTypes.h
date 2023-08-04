// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Launch/Resources/Version.h"
#if (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 0) || (ENGINE_MAJOR_VERSION > 5)
#include "Online/CoreOnline.h"
#else
#include "UObject/CoreOnline.h"
#endif
#include "Containers/UnrealString.h"
#include "OnlineSubsystemTypes.h"
#include "OnlineSubsystemBasicNames.h"
#include "OnlineSubsystemBasicPackage.h"
