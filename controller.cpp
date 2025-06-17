#include "controller.h"
#include <iostream>

Controller::Controller() : player(Position(1, 1)) {}

void Controller::run() {
    while (true) {
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif
        maze.draw(player);

        if (maze.isExit(player.getPosition())) {
            std::cout << "\n🎉 You escaped the maze!\n";
            break;
        }

        std::cout << "\nMove with WASD. ESC to quit.\n";
        char input;
        std::cin >> input;
        if (input == 27 || input == 'q') break;

        Position original = player.getPosition();
        player.move(input);
