#pragma once
#include "gameObject.h"

class Player : public GameObject {
public:
    Player(Position start) : GameObject(start, 'P') {}
    void move(char input);
};
