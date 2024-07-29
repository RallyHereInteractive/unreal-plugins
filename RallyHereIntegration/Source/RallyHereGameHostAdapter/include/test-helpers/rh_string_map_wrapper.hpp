#pragma once
#include "c_api.h"

struct RallyHereStringMapWrapper
{
    RallyHereStringMapWrapper(RallyHereGameInstanceAdapterPtr adapter_) : adapter(adapter_)
    {
        code = rallyhere_string_map_create(&map);
        if (rallyhere_is_error(code))
        {
            map = nullptr;
        }
    }
    ~RallyHereStringMapWrapper()
    {
        rallyhere_string_map_destroy(map);
    }

    RallyHereStatusCode add_to_string_map()
    {
        if (rallyhere_is_error(code))
            return code;
        return RH_STATUS_OK;
    }

    template<typename... Params>
    RallyHereStatusCode add_to_string_map(const char* key, const char* value, Params... params)
    {
        if (rallyhere_is_error(code))
            return code;
        auto result = rallyhere_string_map_set(map, key, value);
        if (rallyhere_is_error(result))
            return result;
        return add_to_string_map(params...);
    }

    RallyHereStringMapPtr release()
    {
        auto result = map;
        map = nullptr;
        return result;
    }

    RallyHereGameInstanceAdapterPtr adapter;
    RallyHereStringMapPtr map;
    RallyHereStatusCode code;
};