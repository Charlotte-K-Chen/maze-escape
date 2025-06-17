# maze-escape
A simple 2D console-based maze escape game
## Controls

- `W` - move up
- `A` - move left
- `S` - move down
- `D` - move right
- `ESC` - exit game

## Features

- Wall collision detection
- Text-based maze map rendering
- Win condition when reaching the goal

## How to Compile

```bash
g++ -std=c++17 -o maze_game main.cpp controller.cpp player.cpp maze.cpp
./maze_game
