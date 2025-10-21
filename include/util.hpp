#pragma once
#include <string_view>

namespace Color {

constexpr std::string_view RESET = "\033[0m";
constexpr std::string_view BLACK_FG = "\033[30m";
constexpr std::string_view RED_FG = "\033[31m";
constexpr std::string_view GREEN_FG = "\033[32m";
constexpr std::string_view YELLOW_FG = "\033[33m";
constexpr std::string_view BLUE_FG = "\033[34m";
constexpr std::string_view MAGENTA_FG = "\033[35m";
constexpr std::string_view CYAN_FG = "\033[36m";
constexpr std::string_view WHITE_FG = "\033[37m";

constexpr std::string_view BRIGHT_BLACK_FG = "\033[90m";
constexpr std::string_view BRIGHT_RED_FG = "\033[91m";
constexpr std::string_view BRIGHT_GREEN_FG = "\033[92m";
constexpr std::string_view BRIGHT_YELLOW_FG = "\033[93m";
constexpr std::string_view BRIGHT_BLUE_FG = "\033[94m";
constexpr std::string_view BRIGHT_MAGENTA_FG = "\033[95m";
constexpr std::string_view BRIGHT_CYAN_FG = "\033[96m";
constexpr std::string_view BRIGHT_WHITE_FG = "\033[97m";

constexpr std::string_view BLACK_BG = "\033[40m";
constexpr std::string_view RED_BG = "\033[41m";
constexpr std::string_view GREEN_BG = "\033[42m";
constexpr std::string_view YELLOW_BG = "\033[43m";
constexpr std::string_view BLUE_BG = "\033[44m";
constexpr std::string_view MAGENTA_BG = "\033[45m";
constexpr std::string_view CYAN_BG = "\033[46m";
constexpr std::string_view WHITE_BG = "\033[47m";

constexpr std::string_view BRIGHT_BLACK_BG = "\033[100m";
constexpr std::string_view BRIGHT_RED_BG = "\033[101m";
constexpr std::string_view BRIGHT_GREEN_BG = "\033[102m";
constexpr std::string_view BRIGHT_YELLOW_BG = "\033[103m";
constexpr std::string_view BRIGHT_BLUE_BG = "\033[104m";
constexpr std::string_view BRIGHT_MAGENTA_BG = "\033[105m";
constexpr std::string_view BRIGHT_CYAN_BG = "\033[106m";
constexpr std::string_view BRIGHT_WHITE_BG = "\033[107m";

} // namespace Color
