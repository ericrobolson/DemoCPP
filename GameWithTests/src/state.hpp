#pragma once
#include <stdint.h>

class GameState
{
public:
    int64_t tick;

    GameState()
    {
        tick = 0;
    }

    ~GameState()
    {
    }
};