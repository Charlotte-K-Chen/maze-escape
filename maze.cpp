#include "maze.h"
#include <iostream>

Maze::Maze() {
    grid = {
        "############################",
        "#P...............#........E#",
        "#.######.###.#####.#######.#",
        "#........#.......#.......#.#",
        "####.###.#.#####.#.#####.#.#",
        "#........#.....#.......#...#",
        "#.#..############.##########",
        "#.#.......................##",
        "############################"
    };
    exit = Position(26, 1);  // E 的位置
}

void Maze::draw(const Player& player) const {
    for (int y = 0; y < grid.size(); ++y) {
        for (int x = 0; x < grid[y].size(); ++x) {
            if (player.getPosition() == Position(x, y))
                std::cout << player.getSymbol();
            else
                std::cout << grid[y][x];
        }
        std::cout << '\n';
    }
}

bool Maze::isWall(Position p) const {
    return grid[p.y][p.x] == '#';
}

bool Maze::isExit(Position p) const {
    return p == exit;
}
