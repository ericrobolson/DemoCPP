#pragma once
#include "state.hpp"

extern "C"
{
    void tick(GameState &state)
    {
        state.tick += 1;
    }
}