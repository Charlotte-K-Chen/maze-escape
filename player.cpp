#include "player.h"

void Player::move(char input) {
    switch (input) {
        case 'w': pos.y--; break;
        case 's': pos.y++; break;
        case 'a': pos.x--; break;
        case 'd': pos.x++; break;
    }
}
