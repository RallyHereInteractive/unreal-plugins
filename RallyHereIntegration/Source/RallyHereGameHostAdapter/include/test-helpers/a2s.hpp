/*
Copyright 2023 RallyHere

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
#ifndef GAME_HOST_ADAPTER_INTERFACE_A2S_HPP
#define GAME_HOST_ADAPTER_INTERFACE_A2S_HPP

#include "rh_string.h"
#include "rh_vector.h"
#include "boost/core/span.hpp"

#include "boost/endian/conversion.hpp"

namespace rallyhere
{
    static constexpr unsigned int A2S_MAX_DATA_SIZE = 1400;
    static constexpr unsigned int UDP_HEADER_SIZE = 8;

#pragma pack(push, 1)
    struct a2s_simple_response
    {
        int32_t header;
        uint8_t type;
    };
#pragma pack(pop)

#pragma pack(push, 1)
    struct server_info
    {
        int32_t ResponseHeader;
        uint8_t Header;
        uint8_t Protocol;

        rallyhere::string Name;
        rallyhere::string Map;
        rallyhere::string Folder;
        rallyhere::string GameName;

        int16_t ID;
        uint8_t Players;
        uint8_t MaxPlayers;
        uint8_t Bots;
        uint8_t ServerType;
        uint8_t Environment;
        uint8_t Visibility;
        uint8_t VAC;

        rallyhere::string Version;

        uint8_t EDF;

        bool operator==(const server_info& other) const
        {
            return Name == other.Name && Map == other.Map && Folder == other.Folder && GameName == other.GameName && ID == other.ID
                   && Players == other.Players && MaxPlayers == other.MaxPlayers && Bots == other.Bots && ServerType == other.ServerType
                   && Environment == other.Environment && Visibility == other.Visibility && VAC == other.VAC && Version == other.Version
                   && EDF == other.EDF;
        }
    };
#pragma pack(pop)

#pragma pack(push, 1)
struct a2s_challenge_response
{
    int32_t header;
    uint8_t type;
    int32_t challenge;
};
#pragma pack(pop)

    enum class a2s_query : uint8_t
    {
        info = 0x54,
        players = 0x55,
        rules = 0x56,
    };

    enum a2s_response_type : uint8_t
    {
        info = 0x49,
        challenge = 0x41,
    };

    struct A2SDatagram
    {
        template<size_t N>
        A2SDatagram(uint8_t (&data)[N]) : Data(data), next(std::begin(Data))
        {
        }

        template<typename Element, size_t N>
        A2SDatagram(std::array<Element, N>& data) : Data(data), next(std::begin(Data))
        {
        }

        template<typename Element>
        A2SDatagram(Element* data, size_t len) : Data(data, len), next(std::begin(Data))
        {
        }

        A2SDatagram(rallyhere::string& data) : Data(reinterpret_cast<uint8_t*>(data.data()), data.size()), next(std::begin(Data))
        {
        }

        A2SDatagram(rallyhere::vector<uint8_t>& data) : Data(data.data(), data.size()), next(std::begin(Data))
        {
        }

        void put(const uint8_t* data, size_t len)
        {
            if (overflowed)
                return;
            if (next + len > std::end(Data))
            {
                overflowed = true;
                return;
            }
            next = static_cast<uint8_t*>(memcpy(next, data, len)) + len;
        }

        A2SDatagram& operator<<(const rallyhere::string& data)
        {
            put(reinterpret_cast<const uint8_t*>(data.c_str()), data.size() + 1);
            return *this;
        }
        A2SDatagram& operator<<(const uint8_t& data)
        {
            put(reinterpret_cast<const uint8_t*>(&data), sizeof(data));
            return *this;
        }
        A2SDatagram& operator<<(const int16_t& data)
        {
            auto ledata = boost::endian::native_to_little(data);
            put(reinterpret_cast<const uint8_t*>(&ledata), sizeof(ledata));
            return *this;
        }
        A2SDatagram& operator<<(const int32_t& data)
        {
            auto ledata = boost::endian::native_to_little(data);
            put(reinterpret_cast<const uint8_t*>(&ledata), sizeof(ledata));
            return *this;
        }

        A2SDatagram& operator<<(const server_info& info)
        {
            *this << info.ResponseHeader
                  << info.Header
                  << info.Protocol
                  << info.Name
                  << info.Map
                  << info.Folder
                  << info.GameName
                  << info.ID
                  << info.Players
                  << info.MaxPlayers
                  << info.Bots
                  << info.ServerType
                  << info.Environment
                  << info.Visibility
                  << info.VAC
                  << info.Version
                  << info.EDF;
            return *this;
        }

        A2SDatagram& operator>>(rallyhere::string& data)
        {
            while (next != std::end(Data) && *next != '\0')
            {
                data += *next;
                ++next;
            }
            ++next;
            return *this;
        }
        A2SDatagram& operator>>(uint8_t& data)
        {
            if (next == std::end(Data))
                return *this;
            get(reinterpret_cast<uint8_t*>(&data), sizeof(data));
            return *this;
        }
        void get(uint8_t* data, size_t len)
        {
            if (overflowed)
                return;
            if (next + len > std::end(Data))
            {
                overflowed = true;
                return;
            }
            memcpy(data, next, len);
            next += len;
        }
        A2SDatagram& operator>>(int16_t& data)
        {
            if (next == std::end(Data))
                return *this;
            get(reinterpret_cast<uint8_t*>(&data), sizeof(data));
            data = boost::endian::little_to_native(data);
            return *this;
        }
        A2SDatagram& operator>>(int32_t& data)
        {
            if (next == std::end(Data))
                return *this;
            get(reinterpret_cast<uint8_t*>(&data), sizeof(data));
            data = boost::endian::little_to_native(data);
            return *this;
        }

        A2SDatagram& operator>>(server_info& info)
        {
            *this >> info.ResponseHeader
                  >> info.Header
                  >> info.Protocol
                  >> info.Name
                  >> info.Map
                  >> info.Folder
                  >> info.GameName
                  >> info.ID
                  >> info.Players
                  >> info.MaxPlayers
                  >> info.Bots
                  >> info.ServerType
                  >> info.Environment
                  >> info.Visibility
                  >> info.VAC
                  >> info.Version
                  >> info.EDF;
            return *this;
        }

        A2SDatagram& operator>>(a2s_simple_response& response)
        {
            *this >> response.header >> response.type;
            return *this;
        }

        A2SDatagram& operator>>(a2s_challenge_response& response)
        {
            *this >> response.header >> response.type >> response.challenge;
            return *this;
        }

        size_t size() const
        {
            return next - std::begin(Data);
        }

        void seek(size_t pos)
        {
            next = std::begin(Data) + pos;
            overflowed = next >= std::end(Data);
        }

        boost::span<uint8_t> Data;
        boost::span<uint8_t>::iterator next{ std::begin(Data) };
        bool overflowed{ false };
    };
} // namespace rallyhere

#endif //GAME_HOST_ADAPTER_INTERFACE_A2S_HPP
