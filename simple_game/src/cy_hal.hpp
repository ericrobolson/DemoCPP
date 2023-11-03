#pragma once
#include <stdint.h>

/// @brief CyHal is a namespace for all of the platform specific code.
/// Hal = hardware access layer
namespace CyHal
{
    const uint64_t TIME_MICROSECONDS_PER_SECOND = 1000000;
    const uint64_t TIME_MILLISECONDS_PER_SECOND = 1000;
    const uint64_t TIME_MICROSECONDS_PER_MILLISECOND = 1000;

    /// @brief Get the current system time from unix epoch.
    /// @return Returns the system time in microseconds.
    u_int64_t get_time_microseconds();
}
