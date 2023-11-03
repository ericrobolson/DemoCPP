#include <stdint.h>
#include <stdio.h>
#include "cy_hal.hpp"

namespace CyGame
{

    const uint64_t TICK_RATE = CyHal::TIME_MICROSECONDS_PER_SECOND / 60;

    class Game
    {
    private:
        uint64_t last_tick_time = 0;

        // Start with some elapsed time to tick the game when run is first called.
        uint64_t elapsed_time = TICK_RATE;

        /// @brief Tick the game. Executes a single frame of the simulation.
        void tick();

        /// @brief Render the game.
        void render();

    public:
        Game();
        ~Game();

        /// @brief Run the game loop.
        /// Will tick as often or as little as necessary to hit the target tick rate.
        void run();
    };
}
