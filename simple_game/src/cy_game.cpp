#include <stdint.h>
#include <stdio.h>
#include "cy_hal.hpp"
#include "cy_game.hpp"

namespace CyGame
{
    Game::Game()
    {
    }
    Game::~Game()
    {
    }

    void Game::render()
    {
        printf("render\n");
    }
    void Game::run()
    {
        // https://gafferongames.com/post/fix_your_timestep/
        uint64_t now = CyHal::get_time_microseconds();
        last_tick_time = now;
        elapsed_time += (now - last_tick_time);

        int counter = 0;
        int max_ticks_per_frame = 5;
        while (elapsed_time >= TICK_RATE && counter < max_ticks_per_frame)
        {
            tick();
            elapsed_time -= TICK_RATE;
            counter++;
        }

        render();
    }

    void Game::tick()
    {
        printf("tick\n");
    }
}
