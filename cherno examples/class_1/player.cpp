#include "player.h"

Player::Player() {}

void Player::move(int xa, int ya)
{
    x += xa * speed;
    y += ya * speed;
}
