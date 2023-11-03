#include <stdint.h>
#include <stdio.h>
#include "cy_game.hpp"

int main()
{

    CyGame::Game game;

    /*
1. Attempt to connect to server
2. If connection not successful, start simple 'dummy' server for single player
3. If connection sync state
*/

    game.run();

    return 0;
}
