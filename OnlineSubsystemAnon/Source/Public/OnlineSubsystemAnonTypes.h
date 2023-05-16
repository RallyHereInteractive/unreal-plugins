// Copyright 2016-2022 Hi-Rez Studios, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Launch/Resources/Version.h"
#if (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 0)
#include "Online/CoreOnline.h"
#else
#include "UObject/CoreOnline.h"
#endif
#include "OnlineSubsystemTypes.h"
#include "OnlineSubsystemAnonNames.h"
#include "OnlineSubsystemAnonPrivate.h"
#include "OnlineSubsystemAnonPackage.h"

/**
 * Anon specific implementation of the unique net id
 */
class FUniqueNetIdAnon : public FUniqueNetId
{
PACKAGE_SCOPE:
	/** Holds the net id for an account */
    FString UniqueNetId;

	/** Hidden on purpose */
	FUniqueNetIdAnon() : UniqueNetId()
	{
	}

    explicit FUniqueNetIdAnon(uint64 accountId) : UniqueNetId(LexToString(accountId))
    {
    }

	explicit FUniqueNetIdAnon(const FUniqueNetIdAnon& Src) : UniqueNetId(Src.UniqueNetId)
	{
	}

public:
	explicit FUniqueNetIdAnon(const FString& Str) : UniqueNetId(Str)
	{
	}

	explicit FUniqueNetIdAnon(const FUniqueNetId& InUniqueNetId) : UniqueNetId(static_cast<const FUniqueNetIdAnon&>(InUniqueNetId).UniqueNetId)
	{
	}

	virtual FName GetType() const override
	{
		return ANON_SUBSYSTEM;
	}

	/**
	 * Get the raw byte representation of this net id
	 * This data is platform dependent and shouldn't be manipulated directly
	 *
	 * @return byte array of size GetSize()
	 */
	virtual const uint8* GetBytes() const override
	{
        return (const uint8*)UniqueNetId.GetCharArray().GetData();
	}

	/**
	 * Get the size of the id
	 *
	 * @return size in bytes of the id representation
	 */
	virtual int32 GetSize() const override
	{
        return UniqueNetId.GetCharArray().GetTypeSize() * UniqueNetId.GetCharArray().Num();
	}

	/**
	 * Check the validity of the id
	 *
	 * @return true if this is a well formed ID, false otherwise
	 */
	virtual bool IsValid() const override
	{
        return UniqueNetId.Len() > 0;
	}

	/**
	 * Platform specific conversion to string representation of data
	 *
	 * @return data in string form
	 */
	virtual FString ToString() const override
    {
		return UniqueNetId;
	}

	/**
	 * Get a human readable representation of the net id
	 * Shouldn't be used for anything other than logging/debugging
	 *
	 * @return id in string form
	 */
	virtual FString ToDebugString() const override
    {
		if (IsValid())
		{
			return OSS_UNIQUEID_REDACT(*this, UniqueNetId);
		}
		else
		{
			return TEXT("INVALID");
		}
	}

	/** Needed for TMap::GetTypeHash() */
	friend uint32 GetTypeHash(const FUniqueNetIdAnon& A)
    {
        return ::GetTypeHash(A.ToString());
	}

	/** global static instance of invalid (zero) id */
	static const TSharedRef<const FUniqueNetId>& EmptyId()
	{
		static const TSharedRef<const FUniqueNetId> EmptyId(MakeShared<FUniqueNetIdAnon>());
		return EmptyId;
	}

	operator uint64() const
	{
        return FCString::Strtoui64(*UniqueNetId, nullptr, 10);
	}
};
