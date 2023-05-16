
#pragma once

#include "OnlineSubsystemNames.h"
#include "RH_Common.h"

#ifndef IOS_SUBSYSTEM
#define IOS_SUBSYSTEM FName(TEXT("IOS"))
#endif

#ifndef APPLE_SUBSYSTEM
#define APPLE_SUBSYSTEM FName(TEXT("APPLE"))
#endif

#ifndef GOOGLE_SUBSYSTEM
#define GOOGLE_SUBSYSTEM FName(TEXT("GOOGLE"))
#endif

#ifndef STEAM_SUBSYSTEM
#define STEAM_SUBSYSTEM FName(TEXT("STEAM"))
#endif

#ifndef STEAMV2_SUBSYSTEM
#define STEAMV2_SUBSYSTEM FName(TEXT("STEAMV2"))
#endif

#ifndef EPIC_SUBSYSTEM
#if !WITH_HIREZ_ENGINE
#define EPIC_SUBSYSTEM FName(TEXT("EOS"))
#else
// HIREZ_ENGINE uses a custom implemented version of the EOS OSS, made before there was a publicly available one in the engine
#define EPIC_SUBSYSTEM FName(TEXT("EPIC"))
#endif
#endif

#ifndef ANON_SUBSYSTEM
#define ANON_SUBSYSTEM FName(TEXT("ANON"))
#endif

#ifndef PS4_SUBSYSTEM
#define PS4_SUBSYSTEM FName(TEXT("PS4"))
#endif

#ifndef PS4SERVER_SUBSYSTEM
#define PS4SERVER_SUBSYSTEM FName(TEXT("PS4SERVER"))
#endif

#ifndef LIVE_SUBSYSTEM
#define LIVE_SUBSYSTEM FName(TEXT("LIVE"))
#endif

#ifndef LIVESERVER_SUBSYSTEM
#define LIVESERVER_SUBSYSTEM FName(TEXT("LIVESERVER"))
#endif

#ifndef PS5_SUBSYSTEM
#define PS5_SUBSYSTEM FName(TEXT("PS5"))
#endif

#ifndef GDK_SUBSYSTEM
#define GDK_SUBSYSTEM FName(TEXT("GDK"))
#endif

#ifndef SWITCH_SUBSYSTEM
#define SWITCH_SUBSYSTEM FName(TEXT("SWITCH"))
#endif

#ifndef RALLYHERE_SUBSYSTEM
#define RALLYHERE_SUBSYSTEM FName(TEXT("RALLYHERE"))
#endif
