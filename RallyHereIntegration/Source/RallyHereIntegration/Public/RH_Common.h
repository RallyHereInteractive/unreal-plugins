// Copyright 2022-2023 RallyHere Interactive
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include "CoreMinimal.h"
#include "UObject/WeakInterfacePtr.h"

// include all of the common headers here for backwards compatibility
#include "Common/RH_Version.h"
#include "Common/RH_Logging.h"
#include "Common/RH_JsonUtilities.h"
#include "Common/RH_AsyncWeb.h"

// RallyHere API types
#include "ClientType.h"
#include "RallyHereAPIAuthContext.h"
#include "Platform.h"
#include "InventoryBucket.h"
#include "GrantType.h"
#include "FileType.h"
#include "EntityType.h"

#include "RH_Common.generated.h"

#ifndef ALLOW_RH_COMMANDLINE_ARGS_WITHOUT_PREFIX
	#define ALLOW_RH_COMMANDLINE_ARGS_WITHOUT_PREFIX 1
#endif

#ifndef RH_GETENUMSTRING
#if RH_FROM_ENGINE_VERSION(5, 1)
#define RH_GETENUMSTRING(package, etype, evalue) ( (FindObject<UEnum>(nullptr, TEXT(package) TEXT(".") TEXT(etype), true) != nullptr) ? FindObject<UEnum>(nullptr, TEXT(package) TEXT(".") TEXT(etype), true)->GetNameStringByValue((int32)evalue) : FString(TEXT("Invalid - are you sure enum uses UENUM() macro?")) )
#define RH_GETENUMFROMSTRING(package, etype, evalue) ( (FindObject<UEnum>(nullptr, TEXT(package) TEXT(".") TEXT(etype), true) != nullptr) ? FindObject<UEnum>(nullptr, TEXT(package) TEXT(".") TEXT(etype), true)->GetValueByNameString(evalue) : INDEX_NONE )
#else
#define RH_GETENUMSTRING(package, etype, evalue) ( (FindObject<UEnum>(ANY_PACKAGE, TEXT(etype), true) != nullptr) ? FindObject<UEnum>(ANY_PACKAGE, TEXT(etype), true)->GetNameStringByValue((int32)evalue) : FString(TEXT("Invalid - are you sure enum uses UENUM() macro?")) )
#define RH_GETENUMFROMSTRING(package, etype, evalue) ( (FindObject<UEnum>(ANY_PACKAGE, TEXT(etype), true) != nullptr) ? FindObject<UEnum>(ANY_PACKAGE, TEXT(etype), true)->GetValueByNameString(evalue) : INDEX_NONE )
#endif
#endif

// TWeakInterfacePtr was changed from requiring a reference, to deprecating that in favor of passing a pointer to the interface type
#if RH_FROM_ENGINE_VERSION(4, 27)
template<typename InterfaceType>
FORCEINLINE TWeakInterfacePtr<InterfaceType> MakeWeakInterfaceFromPtr(InterfaceType* Interface) { return TWeakInterfacePtr<InterfaceType>(Interface); }
template<typename InterfaceType>
FORCEINLINE TWeakInterfacePtr<InterfaceType> MakeWeakInterface(TScriptInterface<InterfaceType> Interface) { return TWeakInterfacePtr<InterfaceType>(&(*Interface)); }
#else
template<typename InterfaceType>
FORCEINLINE TWeakInterfacePtr<InterfaceType> MakeWeakInterfaceFromPtr(InterfaceType* Interface) { return TWeakInterfacePtr<InterfaceType>(*Interface); }
template<typename InterfaceType>
FORCEINLINE TWeakInterfacePtr<InterfaceType> MakeWeakInterface(TScriptInterface<InterfaceType> Interface) { return TWeakInterfacePtr<InterfaceType>(*Interface); }
#endif

typedef TSharedPtr<RallyHereAPI::FAuthContext> FAuthContextPtr;

#if RH_FROM_ENGINE_VERSION(5, 1)
// Utility functions to mimic TOptional::GetPtrOrNull(), which only exists in newer versions of UE5
template<typename OptionalType>
FORCEINLINE OptionalType* GetPtrOrNull(TOptional<OptionalType>& Opt) { return Opt.GetPtrOrNull(); }
template<typename OptionalType>
FORCEINLINE const OptionalType* GetPtrOrNull(const TOptional<OptionalType>& Opt) { return Opt.GetPtrOrNull(); }
#else
// Utility functions to mimic TOptional::GetPtrOrNull(), which only exists in newer versions of UE5
template<typename OptionalType>
FORCEINLINE OptionalType* GetPtrOrNull(TOptional<OptionalType>& Opt) { return Opt.IsSet() ? &Opt.GetValue() : nullptr; }
template<typename OptionalType>
FORCEINLINE const OptionalType* GetPtrOrNull(const TOptional<OptionalType>& Opt) { return Opt.IsSet() ? &Opt.GetValue() : nullptr; }
#endif

bool RALLYHEREINTEGRATION_API RH_GetPlayerIdFromLocalPlayer(const class ULocalPlayer* pLocalPlayer, FGuid* outUuid);

TOptional<ERHAPI_Platform> RALLYHEREINTEGRATION_API RH_GetPlatformFromOSSName(FName OSSName);
ERHAPI_ClientType RALLYHEREINTEGRATION_API RH_GetClientTypeFromOSSName(FName OSSName);
TOptional<ERHAPI_GrantType> RALLYHEREINTEGRATION_API RH_GetGrantTypeFromOSSName(FName OSSName);
bool RALLYHEREINTEGRATION_API RH_UseGetAuthTokenFallbackFromOSSName(FName OSSName);
bool RALLYHEREINTEGRATION_API RH_PlatformSessionsTypeIsCaseInsensitive(FName SessionType);
bool RALLYHEREINTEGRATION_API RH_UseRecentPlayersFromOSSName(FName OSSName);
bool RALLYHEREINTEGRATION_API RH_SkipEntitlementFinalization(FName OSSName);
bool RALLYHEREINTEGRATION_API RH_UsesSonyEntitlementTokens(FName OSSName);
FString RALLYHEREINTEGRATION_API RH_GetPlatformNameFromPlatformEnum(const ERHAPI_Platform Platform);

ERHAPI_InventoryBucket RALLYHEREINTEGRATION_API RH_GetInventoryBucketFromPlatform(ERHAPI_Platform PlatformType);

/** @defgroup Common RallyHere Common
 *  @{
 */

/**
 * @brief Common structure for identifying players on any known platform
 */
USTRUCT(BlueprintType)
struct RALLYHEREINTEGRATION_API FRH_PlayerPlatformId
{
	GENERATED_USTRUCT_BODY()
public:
	/** @brief Player identifier for the given platform type */
	UPROPERTY()
	FString UserId;

	/** @brief Platform type of this identifier */
	UPROPERTY()
	ERHAPI_Platform PlatformType;

	/** @brief Returns whether or not this player platform ID has been filled with sensible data */
	FORCEINLINE bool IsValid() const
	{
		return UserId.Len() > 0;
	}

	/** @brief Returns whether or not this player platform ID exactly matches the given player platform ID */
	bool operator==(const FRH_PlayerPlatformId& Other) const { return UserId == Other.UserId && PlatformType == Other.PlatformType; }

	/** @brief Default constructor that leaves the user ID empty and sets the platform type to "unknown" */
	FRH_PlayerPlatformId()
		: PlatformType(ERHAPI_Platform::Anon)
	{}

	/** @brief Constructor for specifying user ID and platform type */
	FRH_PlayerPlatformId(const FString& InUserId, ERHAPI_Platform InPlatformType)
		: UserId(InUserId)
		, PlatformType(InPlatformType)
	{}
};

/**
 * @brief Helper function to convert an FRH_PlayerPlatformId into a hash value
 * @param [in] PlatformId The platform id to generate a hash for
 * @return Semi-unique hash value for the given platform id
 */
FORCEINLINE uint32 GetTypeHash(const FRH_PlayerPlatformId& PlatformId)
{
	return HashCombine(GetTypeHash(PlatformId.UserId), (uint32)PlatformId.PlatformType);
}



/**
 * @brief A tuple specifying the directory of a file in the remote file storage.
 */
USTRUCT(BlueprintType)
struct FRH_RemoteFileApiDirectory
{
	GENERATED_USTRUCT_BODY();

	/** The type of file to upload/download */
	UPROPERTY(BlueprintReadWrite, Category = "File")
	ERHAPI_FileType FileType;
	/** The type of entity the file is associated with */
	UPROPERTY(BlueprintReadWrite, Category = "File")
	ERHAPI_EntityType EntityType;
	/** The id of the entity the file is associated with */
	UPROPERTY(BlueprintReadWrite, Category = "File")
	FString EntityId;

	FRH_RemoteFileApiDirectory()
		: FileType(ERHAPI_FileType::File)
		, EntityType(ERHAPI_EntityType::Unknown)
		, EntityId()
	{
	}

	FRH_RemoteFileApiDirectory(ERHAPI_FileType InFileType, ERHAPI_EntityType InEntityType, const FString& InEntityId)
		: FileType(InFileType)
		, EntityType(InEntityType)
		, EntityId(InEntityId)
	{
	}

	/** @brief Comparison operator */
	bool operator== (const FRH_RemoteFileApiDirectory& Other) const
	{
		return	FileType == Other.FileType
			&& EntityType == Other.EntityType
			&& EntityId == Other.EntityId;

	}

	bool IsValid() const
	{
		return EntityType != ERHAPI_EntityType::Unknown && !EntityId.IsEmpty();
	}

	/**
	 * @brief Get a string representation of the directory
	 * @return A string representation of the directory
	 */
	FString ToDescriptionString() const
	{
		return FString::Printf(TEXT("%s::%s::%s"), *EnumToString(FileType), *EnumToString(EntityType), *EntityId);
	}
};

/**
 * @brief Helper function to convert an FRH_RemoteFileApiDirectory into a hash value
 * @param [in] Directory The directory to generate a hash for
 * @return Semi-unique hash value for the given directory
 */
FORCEINLINE uint32 GetTypeHash(const FRH_RemoteFileApiDirectory& Directory)
{
	return HashCombine((uint32)Directory.FileType, HashCombine(GetTypeHash((uint32)Directory.EntityType), GetTypeHash(Directory.EntityId)));
}

/** @} */
