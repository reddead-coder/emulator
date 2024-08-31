#pragma once

#include "process_context.hpp"
#include <x64_emulator.hpp>

std::optional<mapped_binary> map_file(x64_emulator& emu, const std::filesystem::path& file);