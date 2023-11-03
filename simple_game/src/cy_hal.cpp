#include "cy_hal.hpp"

namespace CyHal
{

//
// Platform specific includes
//
#ifdef __APPLE__
#include <sys/time.h>
#endif

    //
    // Implementations
    //

    uint64_t get_time_microseconds()
    {
#ifdef __APPLE__
        timeval time;
        gettimeofday(&time, NULL);
        return (time.tv_sec * TIME_MICROSECONDS_PER_SECOND) + time.tv_usec;
#endif
    }
}
