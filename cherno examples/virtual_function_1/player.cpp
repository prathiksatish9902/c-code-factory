#include "player.h"

Player::Player(const std::string &name):m_name(name) {}

std::string Player::GetName()
{
    return m_name;
}

std::string Player::GetClassName()
{
    return "player";
}
