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
#ifndef GAME_HOST_ADAPTER_INTERFACE_SDK_FORMATTERS_HPP
#define GAME_HOST_ADAPTER_INTERFACE_SDK_FORMATTERS_HPP

#include "rh_format.h"

namespace rallyhere
{
    using string_body = boost::beast::http::basic_string_body<char, std::char_traits<char>, rallyhere::allocator::allocator<char>>;
}

template<> struct fmt::formatter<http::response<rallyhere::string_body>>
{
    constexpr auto parse(format_parse_context& ctx)
    {
        return ctx.end();
    }

    template<typename FormatContext>
    auto format(const http::response<rallyhere::string_body>& response, FormatContext& ctx)
    {
        rallyhere::stringstream sstr;
        sstr << response;
        return fmt::format_to(ctx.out(), "{}", sstr.str());
    }
};

template<> struct fmt::formatter<http::request<rallyhere::string_body>>
{
constexpr auto parse(format_parse_context& ctx)
{
    return ctx.end();
}

template<typename FormatContext>
auto format(const http::request<rallyhere::string_body>& response, FormatContext& ctx)
{
    rallyhere::stringstream sstr;
    sstr << response;
    return fmt::format_to(ctx.out(), "{}", sstr.str());
}
};

template<> struct fmt::formatter<boost::system::error_code>
{
    constexpr auto parse(format_parse_context& ctx)
    {
        return ctx.end();
    }

    template<typename FormatContext>
    auto format(const boost::system::error_code& ec, FormatContext& ctx)
    {
        rallyhere::stringstream sstr;
        sstr << ec;
        return fmt::format_to(ctx.out(), "{}", sstr.str());
    }
};

#endif //GAME_HOST_ADAPTER_INTERFACE_SDK_FORMATTERS_HPP
