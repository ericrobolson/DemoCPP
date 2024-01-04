#include "state.hpp"
#include "logic.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef UNIT_TESTING

int main()
{
    // First create a new state
    GameState state;

    for (int i = 0; i < 10; i++)
    {

        // Then call tick
        tick(state);

        // Then print the tick #
        std::cout << "Tick: " << state.tick << '\n';
    }

    char *s = static_cast<char *>(malloc(100));
    free(s);
    strcpy(s, "Hello world!");
    printf("string is: %s\n", s);
    return 0;

    return 0;
}

#endif