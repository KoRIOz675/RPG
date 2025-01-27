#include <iostream>
#include "game/game.h"

int main() {
    Game game;
    game.start();

    while (game.isRunning()) {
        game.update();
    }

    game.end();
    return 0;
}