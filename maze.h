#pragma once
#include <vector>
#include <string>
#include "player.h"

class Maze {
private:
    std::vector<std::string> grid;
    Position exit;
public:
    Maze();
    void draw(const Player& player) const;
    bool isWall(Position p) const;
    bool isExit(Position p) const;
};
