// Copyright 2022-2023 Rally Here Interactive, Inc. All Rights Reserved.

#include "RH_AnalyticsProviderEventCache.h"
#include "Analytics.h"
#include "Misc/ScopeLock.h"
#include "PlatformHttp.h"
#include "Algo/Accumulate.h"
#include "Serialization/JsonWriter.h"
#include "Containers/StringConv.h"
#include "Misc/StringBuilder.h"
#include "Misc/CString.h"
#include "HAL/IConsoleManager.h"
#include "HAL/PlatformTime.h"

namespace EventCacheStatic
{
	static float PayloadPercentageOfMaxForWarning = 1.00f;
	FAutoConsoleVariableRef CvarPayloadPercentageOfMaxForWarning(
		TEXT("AnalyticsRallyHere.PayloadPercentageOfMaxForWarning"),
		PayloadPercentageOfMaxForWarning,
		TEXT("Percentage of the maximum payload for an EventCache that will trigger a warning message, listing the events in the payload. This is intended to be used to investigate spammy or slow telemetry.")
	);

	static float PayloadFlushTimeSecForWarning = 0.001f;
	FAutoConsoleVariableRef CvarPayloadFlushTimeSecForWarning(
		TEXT("AnalyticsRallyHere.PayloadFlushTimeSecForWarning"),
		PayloadFlushTimeSecForWarning,
		TEXT("Time in seconds that flushing an EventCache payload can take before it will trigger a warning message, listing the events in the payload. This is intended to be used to investigate spammy or slow telemetry.")
	);

	/** Used for testing below to ensure stable output */
	bool bUseZeroDateOffset = false;

	inline int ComputeAttributeSize(const FAnalyticsEventAttribute& Attribute)
	{
		return 
		// "              Name             "   :             Value              ,   (maybequoted)                                          
		   1 + Attribute.GetName().Len() + 1 + 1 + Attribute.GetValue().Len() + 1 + (Attribute.IsJsonFragment() ? 0 : 2);
	}

	inline int ComputeAttributeSize(const TArray<FAnalyticsEventAttribute>& Attributes)
	{
		return Algo::Accumulate(Attributes, 0, [](int Accum, const FAnalyticsEventAttribute& Attr) { return Accum + EventCacheStatic::ComputeAttributeSize(Attr); });
	}

	inline int ComputeEventSize(const FString& EventName, const TArray<FAnalyticsEventAttribute>& Attributes, int CurrentDefaultAttributeSizeEstimate)
	{
		return
			// "{eventName":"   EVENT_NAME     ",
			14 + EventName.Len() + 2
			// "eventTimestamp":"YYYY-MM-DD HH:MM:SS.MMM",
			+ 43
			// "eventUUID":"00000000-0000-0000-0000-000000000000",
			+ 51
			// ATTRIBUTES_SIZE
			+ CurrentDefaultAttributeSizeEstimate
			// "eventParams":{
			+ 15
			// ATTRIBUTES_SIZE
			+ ComputeAttributeSize(Attributes)
			// Last attribute will not have a comma, but will have a closing bracket
			- 1 + 1
			// "},"
			+ 2
			;

	}

	// We need to allocate some stack space (inline storage) for UTF8 conversion strings. This is the longest attribute value we can support without imposing a dynamic allocation
	constexpr int32 ConversionBufferSize = 512;
	// This is the buffer we will convert strings into UTF8 into, since it's difficult to convert them directly into a TArray<>, since it doesn't know how to resize itself.
	// We also don't want to walk the string once to count the chars if we don't have to. so we pay the price to copy directly into a stack-allocated buffer most of the time,
	// but let it spill over to a dynamic allocation for long strings.
	typedef TStringBuilder<ConversionBufferSize> FJsonStringBuilder;

	const ANSICHAR* PayloadTemplate = "{\"eventList\":[]}";
	const int32 PayloadTemplateLength = 16;
	const ANSICHAR* PayloadTrailer = "]}";
	const int32 PayloadTrailerLength = 2;

	/** Appends UTF8 chars directly to a UTF8 stream. Must already be properly UTF8 encoded. Does NOT add a NULL terminator. */
	inline void AppendString(TArray<uint8>& UTF8Stream, const ANSICHAR* UTF8Chars, int32 CharCount)
	{
		UTF8Stream.Append(reinterpret_cast<const uint8*>(UTF8Chars), CharCount);
	}

	/** 
	 * Appends a TCHAR* string (need not be null-terminated) to a UTF8 stream.
	 * Converts the string directly into the UTF8Stream. Does NOT add a NULL terminator. 
	 * 
	 * This function is highly optimized for efficiency. writes directly into the output stream without precomputing the string length.
	 * Optimistically adds a bit of space to handle ocassional multibyte chars, but keeps growing until it fits.
	 * In practice, this makes this function 30-40% faster than precomputing the string length in advance,
	 * and over 2x faster than usig FStringConversion<> directly, even with an appropriately sized buffer.
	 */
	inline void AppendString(TArray<uint8>& UTF8Stream, const TCHAR* Str, int32 Len)
	{
		const int32 OldLen = UTF8Stream.Num();

		// *** ORIGINAL, simpler code. But slower. ***
		// convert directly into new array, precompute length
		// get the string length and expand our buffer to fit it.
		//const int32 StrLen = FPlatformString::ConvertedLength<UTF8CHAR>(Str, Len);
		//UTF8Stream.SetNumUninitialized(OldLen + StrLen, false);
		//FPlatformString::Convert((UTF8CHAR*)&UTF8Stream[OldLen], StrLen, Str, Len);

		// optimistically allocate a bit of extra space and see if we fill up the buffer.
		// If we do, lengthen the buffer a bit and try again.
		// This works 33% better than always precomputing the string length in practice, as walking over the chars to find the actual length is pretty slow.
		bool bWroteFullString = false;
		float SizeMultiplier = 0.25f;
		while (!bWroteFullString)
		{
			// Give some padding. ensure we add at least one char.
			const int32 StrLen = (int32)(Len + FMath::Max(1.f, Len * (SizeMultiplier)));
			// make space for the string
			UTF8Stream.SetNumUninitialized(OldLen + StrLen, false);
			// convert it to UTF8
			if (UTF8CHAR* NewEnd = FPlatformString::Convert((UTF8CHAR*)&UTF8Stream[OldLen], StrLen, Str, Len))
			{
				// truncate to that length.
				UTF8Stream.SetNum(OldLen + (int32)(NewEnd - (UTF8CHAR*)&UTF8Stream[OldLen]), false);
				bWroteFullString = true;
			}
			else
			{
				// we overflowed our buffer. Must be lots of multibyte chars. double the slack and try again.
				SizeMultiplier *= 2.0;
				// if we grow too much, give up and compute the true chars needed.
				if (SizeMultiplier >= 2.0)
				{
					const int32 ActualCharsNeeded = FPlatformString::ConvertedLength<UTF8CHAR>(Str, Len);
					UTF8Stream.SetNumUninitialized(OldLen + ActualCharsNeeded, false);
					// convert it to UTF8 using the known number of charts
					FPlatformString::Convert((UTF8CHAR*)&UTF8Stream[OldLen], ActualCharsNeeded, Str, Len);
					bWroteFullString = true;
				}
			}
		}
	}

	/** Appends an FString efficiently into a UTF8 stream. Does NOT add a NULL terminator. */
	inline void AppendString(TArray<uint8>& UTF8Stream, const FString& Str)
	{
		AppendString(UTF8Stream, *Str, Str.Len());
	}

	/** Appends an TStringBuilder efficiently into a UTF8 stream. Does NOT add a NULL terminator. */
	inline void AppendString(TArray<uint8>& UTF8Stream, const FJsonStringBuilder& str)
	{
		AppendString(UTF8Stream, str.GetData(), str.Len());
	}

	/** Append a Json string to a UTF8 stream. Escapes the string, adds quotes, and converts it to UTF8 in temp space. Does NOT add a NULL terminator. If it's a JsonFragment, doesn't escape or add the quotes. */
	inline void AppendJsonString(TArray<uint8>& UTF8Stream, FJsonStringBuilder& JsonStringBuilder, const FString& str, bool bIsJsonFragment)
	{
		if (bIsJsonFragment)
		{
			// if it's a JsonFragment, not need to escape. Write it straight out.
			AppendString(UTF8Stream, str);
		}
		else
		{
			// always reset first.
			JsonStringBuilder.Reset();
			// escape the Json and add quotes
			AppendEscapeJsonString(JsonStringBuilder, str);
			// Add "<NAME>"
			AppendString(UTF8Stream, JsonStringBuilder);

		}
	}

	/** Append an AnalyticsEventAttribute to a UTF8 stream: ,"<NAME>":<VALUE> */
	inline void AppendEventAttribute(TArray<uint8>& UTF8Stream, FJsonStringBuilder& JsonStringBuilder, const FAnalyticsEventAttribute& Attr)
	{
		// Add ,
		UTF8Stream.Add(static_cast<uint8>(','));
		AppendJsonString(UTF8Stream, JsonStringBuilder, Attr.GetName(), false);
		// Add :
		UTF8Stream.Add(static_cast<uint8>(':'));
		AppendJsonString(UTF8Stream, JsonStringBuilder, Attr.GetValue(), Attr.IsJsonFragment());
	}

	inline void InitializePayloadBuffer(TArray<uint8>& Buffer, int32 MaximumPayloadSize)
	{
		Buffer.Reserve(MaximumPayloadSize * 1.2);
		// we are going to write UTF8 directly into our payload buffer.
		AppendString(Buffer, PayloadTemplate, PayloadTemplateLength);
	}

	inline void AppendPayloadTrailer(TArray<uint8>& Buffer)
	{
		// we are going to write UTF8 directly into our payload buffer.
		AppendString(Buffer, PayloadTrailer, PayloadTrailerLength);
	}
}

FRH_AnalyticsProviderEventCache::FRH_AnalyticsProviderEventCache(int32 InMaximumPayloadSize, int32 InPreallocatedPayloadSize)
: MaximumPayloadSize(InMaximumPayloadSize)
, PreallocatedPayloadSize(InPreallocatedPayloadSize)
{
	// reserve space for a few flushes to build up.
	FlushQueue.Reserve(4);
	// reserve space for a few entries to build up.
	CachedEventEntries.Reserve(100);

	if (MaximumPayloadSize < 0)
	{
		// default to 100KB.
		MaximumPayloadSize = 100*1024;
		GConfig->GetInt(TEXT("FRH_AnalyticsProviderEventCache"), TEXT("MaximumPayloadSize"), MaximumPayloadSize, GEngineIni);
	}

	if (PreallocatedPayloadSize < 0)
	{
		PreallocatedPayloadSize = MaximumPayloadSize;
	}
	// allocate the payload buffer to the maximum size, and insert the payload template to start with.
	EventCacheStatic::InitializePayloadBuffer(CachedEventUTF8Stream, PreallocatedPayloadSize);
}

// We start with {"eventList":[]}
// We End with {"eventList":[{"eventName":"<NAME>","eventTimestamp":"<timestamp>","eventUUID":"<guid>",<DefaultAttrs>,"eventParams": {<Attrs>}}]}
void FRH_AnalyticsProviderEventCache::AddToCache(FString EventName, const TArray<FAnalyticsEventAttribute>& Attributes)
{
	FScopeLock ScopedLock(&CachedEventsCS);

	// If we estimate that 110% of the size estimate (in case there are a lot of Json escaping or multi-byte UTF8 chars) will exceed our max payload, queue up a flush. 
	const int32 EventSizeEstimate = EventCacheStatic::ComputeEventSize(EventName, Attributes, CachedDefaultAttributeUTF8Stream.Num());
	if (CachedEventUTF8Stream.Num() + (EventSizeEstimate * 11 / 10) > MaximumPayloadSize)
	{
		UE_LOG(LogAnalytics, VeryVerbose, TEXT("AddToCache for event (%s) may overflow MaximumPayloadSize (%d). Payload is currently (%d) bytes, and event will use an estimated (%d) bytes. Queuing up existing payload for flush before adding this event."), *EventName, MaximumPayloadSize, CachedEventUTF8Stream.Num(), EventSizeEstimate);
		QueueFlush();
	}

	// reserve enough space for the new data (an estimate, but should work fine if not a lot of UNICODE and Json escaping)
	const int32 OldBufferSize = CachedEventUTF8Stream.Num();
	CachedEventUTF8Stream.Reserve(CachedEventUTF8Stream.Num() + EventSizeEstimate + 10);

	// We will use this to esacpe the Json of our strings to avoid allocations.
	EventCacheStatic::FJsonStringBuilder EscapedJsonBuffer;

	// strip the payload tail off
	CachedEventUTF8Stream.SetNum(CachedEventUTF8Stream.Num() - EventCacheStatic::PayloadTrailerLength, false);
	if (CachedEventEntries.Num() > 0)
	{
		// If we already have an event in there, start with a comma.
		CachedEventUTF8Stream.Add(static_cast<uint8>(','));
	}
	// Add {"eventName":
	EventCacheStatic::AppendString(CachedEventUTF8Stream, "{\"eventName\":", 13);
	// Add "<EVENTNAME>"
	EventCacheStatic::AppendJsonString(CachedEventUTF8Stream, EscapedJsonBuffer, EventName, false);
	// Add ,"eventTimestamp:
	EventCacheStatic::AppendString(CachedEventUTF8Stream, ",\"eventTimestamp\":", 18);
	// Add "<date>"
	FDateTime Now = FDateTime::UtcNow();;
	EventCacheStatic::AppendJsonString(CachedEventUTF8Stream, EscapedJsonBuffer, Now.ToString(), false);
	// Add ,"eventUUID":"
	EventCacheStatic::AppendString(CachedEventUTF8Stream, ",\"eventUUID\":", 13);
	// Add "<GUID>"
	EventCacheStatic::AppendJsonString(CachedEventUTF8Stream, EscapedJsonBuffer, FGuid::NewGuid().ToString(EGuidFormats::DigitsWithHyphens), false);

	// append default attributes
	CachedEventUTF8Stream.Append(CachedDefaultAttributeUTF8Stream);

	// make eventParams block
	if (Attributes.Num() > 0)
	{
		// Add ,"eventParams":{
		EventCacheStatic::AppendString(CachedEventUTF8Stream, ",\"eventParams\":{", 16);

		// the append event attribute logic will add a leading comma, so we need to remember where the first element is so we can replace it with whitespace
		const int32 FirstElementLeadingOffset = CachedEventUTF8Stream.Num();

		// for each attribute, add ,"<NAME>":<VALUE>
		for (const FAnalyticsEventAttribute& Attr : Attributes)
		{
			EventCacheStatic::AppendEventAttribute(CachedEventUTF8Stream, EscapedJsonBuffer, Attr);
		}

		if (CachedEventUTF8Stream.IsValidIndex(FirstElementLeadingOffset))
		{
			// remove the leading comma, replace with whitespace so we do not have to reallocate
			CachedEventUTF8Stream[FirstElementLeadingOffset] = static_cast<uint8>(' ');
		}

		// Add } to clouse out the param list
		CachedEventUTF8Stream.Add(static_cast<uint8>('}'));
	}


	// Add } to clouse out the event
	CachedEventUTF8Stream.Add(static_cast<uint8>('}'));
	// put the payload trailer back on
	EventCacheStatic::AppendPayloadTrailer(CachedEventUTF8Stream);
	const int32 NewBufferSize = CachedEventUTF8Stream.Num();

	// Add the EventEntry
	CachedEventEntries.Add(FAnalyticsEventEntry(MoveTemp(EventName), Now, NewBufferSize - OldBufferSize));
}

void FRH_AnalyticsProviderEventCache::AddToCache(FString EventName)
{
	AddToCache(MoveTemp(EventName), TArray<FAnalyticsEventAttribute>());
}

void FRH_AnalyticsProviderEventCache::SetDefaultAttributes(TArray<FAnalyticsEventAttribute>&& DefaultAttributes)
{
	FScopeLock ScopedLock(&CachedEventsCS);

	// store the array so we can return if if the user asks again.
	CachedDefaultAttributes = MoveTemp(DefaultAttributes);

	// presize the UTF8 stream that will store the pre-serialized default attribute buffer
	const int32 EstimatedAttributesSize = EventCacheStatic::ComputeAttributeSize(CachedDefaultAttributes) + 10;
	CachedDefaultAttributeUTF8Stream.Reset(EstimatedAttributesSize);
	if (CachedDefaultAttributes.Num() > 0)
	{
		EventCacheStatic::FJsonStringBuilder EscapedJsonBuffer;
		for (const FAnalyticsEventAttribute& Attr : CachedDefaultAttributes)
		{
			EventCacheStatic::AppendEventAttribute(CachedDefaultAttributeUTF8Stream, EscapedJsonBuffer, Attr);
		}
	}
}

TArray<FAnalyticsEventAttribute> FRH_AnalyticsProviderEventCache::GetDefaultAttributes() const
{
	FScopeLock ScopedLock(&CachedEventsCS);
	return CachedDefaultAttributes;
}

int32 FRH_AnalyticsProviderEventCache::GetDefaultAttributeCount() const
{
	FScopeLock ScopedLock(&CachedEventsCS);
	return CachedDefaultAttributes.Num();
}

FAnalyticsEventAttribute FRH_AnalyticsProviderEventCache::GetDefaultAttribute(int32 AttributeIndex) const
{
	FScopeLock ScopedLock(&CachedEventsCS);
	return CachedDefaultAttributes[AttributeIndex];
}

bool FRH_AnalyticsProviderEventCache::AppendSetDefaultAttribute(const FString& AttributeName, const FString& AttributeValue)
{
	int32 ExistingIndex = INDEX_NONE;
	for (int32 i = 0; i < CachedDefaultAttributes.Num(); ++i)
	{
		const auto& Attrib = CachedDefaultAttributes[i];
		if (Attrib.GetName() == AttributeName)
		{
			ExistingIndex = i;
			if (Attrib.GetValue() == AttributeValue)
			{
				// value is already set, skip later work
				return true;
			}
			break;
		}
	}

	// going to have to update the attribute list, so make a copy of the existing one to edit.  We will call SetDefaultAttributes() on this list to update the cache properly.
	TArray<FAnalyticsEventAttribute> NewCachedDefaultAttributes = CachedDefaultAttributes;

	if (ExistingIndex == INDEX_NONE)
	{
		// add new attribute
		NewCachedDefaultAttributes.Add(FAnalyticsEventAttribute(AttributeName, AttributeValue));
	}
	else
	{
		// update the existing attribute
		NewCachedDefaultAttributes[ExistingIndex].SetValue(AttributeValue);
	}

	SetDefaultAttributes(MoveTemp(NewCachedDefaultAttributes));

	return ExistingIndex != INDEX_NONE;
}

bool FRH_AnalyticsProviderEventCache::ClearDefaultAttribute(const FString& AttributeName)
{
	int32 ExistingIndex = INDEX_NONE;
	for (int32 i = 0; i < CachedDefaultAttributes.Num(); ++i)
	{
		const auto& Attrib = CachedDefaultAttributes[i];
		if (Attrib.GetName() == AttributeName)
		{
			ExistingIndex = i;
			break;
		}
	}

	if (ExistingIndex != INDEX_NONE)
	{
		// going to have to update the attribute list, so make a copy of the existing one to edit.  We will call SetDefaultAttributes() on this list to update the cache properly.
		TArray<FAnalyticsEventAttribute> NewCachedDefaultAttributes = CachedDefaultAttributes;

		NewCachedDefaultAttributes.RemoveAt(ExistingIndex);

		SetDefaultAttributes(MoveTemp(NewCachedDefaultAttributes));
	}

	return ExistingIndex != INDEX_NONE;
}

TArray<uint8> FRH_AnalyticsProviderEventCache::FlushCache()
{
	FScopeLock ScopedLock(&CachedEventsCS);

	// if there's nothing queued up, flush what we have.
	if (FlushQueue.Num() == 0 && CachedEventEntries.Num() > 0)
	{
		QueueFlush();
	}

	if (FlushQueue.Num() > 0)
	{
		// pull out the first element without copying the array or shrinking the queue size
		TArray<uint8> Payload = MoveTemp(FlushQueue[0]);
		FlushQueue.RemoveAt(0, 1, false);
		return Payload;
	}

	return TArray<uint8>();
}

// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// !!!! This method tries extremely hard to avoid any dynamic allocations
// !!!! to optimize the flush time. Please don't add new allocations to this function 
// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
void FRH_AnalyticsProviderEventCache::QueueFlush()
{
	const double StartTime = FPlatformTime::Seconds();
	FScopeLock ScopedLock(&CachedEventsCS);

	// early exit if nothing to flush.
	if (CachedEventEntries.Num() == 0)
	{
		return;
	}

	/*
	const FDateTime CurrentTime = FDateTime::UtcNow();

	// The only thing we have to do is go through each event and fix up the DateOffset
	for (const FAnalyticsEventEntry& Entry : CachedEventEntries)
	{
		FTimespan DateOffset = CurrentTime - Entry.TimeStamp;
		// clamp thee timespan > 0 and less than 1 day.
		if (EventCacheStatic::bUseZeroDateOffset || DateOffset.GetTicks() < 0)
		{
			DateOffset = FTimespan(0);
		}
		else if (DateOffset.GetTotalDays() > 1.0)
		{
			DateOffset = FTimespan(23, 59, 59);
		}
		// implemnt our our ToString() directly into ANSICHARs, overwriting the placeholder Timespan we put there earlier.
		// Easiest to sprintf to a temp buffer that will null-terminate, then copy that into place.
		ANSICHAR DateOffsetBuf[14];
		FCStringAnsi::Snprintf(DateOffsetBuf, 14, "+%02i:%02i:%02i.%03i",
			FMath::Abs(DateOffset.GetHours()),
			FMath::Abs(DateOffset.GetMinutes()),
			FMath::Abs(DateOffset.GetSeconds()),
			FMath::Abs(DateOffset.GetFractionMilli()));
		FPlatformMemory::Memcpy(&CachedEventUTF8Stream[Entry.DateOffsetByteOffset], DateOffsetBuf, UE_ARRAY_COUNT(DateOffsetBuf) - 1); // don't copy the null
	}

	// see if it took too long or we have a really large payload. If so, log out the events.
	const double EndTime = FPlatformTime::Seconds();
	if ((EndTime - StartTime) > EventCacheStatic::PayloadFlushTimeSecForWarning || CachedEventUTF8Stream.Num() > (int32)(MaximumPayloadSize * EventCacheStatic::PayloadPercentageOfMaxForWarning))
	{
		UE_LOG(LogAnalytics, Warning, TEXT("EventCache either took too long to flush (%.3f ms) or had a very large payload (%.3f KB, %d events). Listing events in the payload for investigation:"), (EndTime-StartTime) * 1000, CachedEventUTF8Stream.Num() / 1024.f, CachedEventEntries.Num());
		for (const FAnalyticsEventEntry& Entry : CachedEventEntries)
		{
			UE_LOG(LogAnalytics, Warning, TEXT("    %s,%d"), *Entry.EventName, Entry.EventSizeChars);
		}
	}
	*/

	// clear out the old data
	CachedEventEntries.Reset();
	FlushQueue.Add(MoveTemp(CachedEventUTF8Stream));
	// reset our payload with the empty payload template. This will incure an allocation, which is the only allocation this function makes.
	EventCacheStatic::InitializePayloadBuffer(CachedEventUTF8Stream, PreallocatedPayloadSize);
}


bool FRH_AnalyticsProviderEventCache::CanFlush() const
{
	FScopeLock ScopedLock(&CachedEventsCS);
	return CachedEventEntries.Num() > 0 || FlushQueue.Num() > 0;
}

bool FRH_AnalyticsProviderEventCache::HasFlushesQueued() const
{
	return FlushQueue.Num() > 0;
}

int FRH_AnalyticsProviderEventCache::GetNumCachedEvents() const
{
	FScopeLock ScopedLock(&CachedEventsCS);
	return CachedEventEntries.Num();
}

void FRH_AnalyticsProviderEventCache::SetPreallocatedPayloadSize(int32 InPreallocatedPayloadSize)
{
	PreallocatedPayloadSize = InPreallocatedPayloadSize;
	if (PreallocatedPayloadSize < 0)
	{
		PreallocatedPayloadSize = MaximumPayloadSize;
	}
	// if we are asking for a smaller buffer try to accommodate immediately.
	if (PreallocatedPayloadSize < (int32)CachedEventUTF8Stream.GetAllocatedSize())
	{
		FScopeLock ScopedLock(&CachedEventsCS);
		TArray<uint8> NewPayload;
		NewPayload.Reserve(PreallocatedPayloadSize);
		NewPayload = CachedEventUTF8Stream;
		CachedEventUTF8Stream = NewPayload;
	}
}

int32 FRH_AnalyticsProviderEventCache::GetSetPreallocatedPayloadSize() const
{
	return PreallocatedPayloadSize;
}
