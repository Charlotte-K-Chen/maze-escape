#pragma once
#include "player.h"
#include "maze.h"

class Controller {
private:
    Player player;
    Maze maze;
public:
    Controller();
    void run();
};
