#pragma once
#include "position.h"

class GameObject {
protected:
    Position pos;
    char symbol;
public:
    GameObject(Position p, char s) : pos(p), symbol(s) {}
    virtual ~GameObject() = default;
    Position getPosition() const { return pos; }
    char getSymbol() const { return symbol; }
};
