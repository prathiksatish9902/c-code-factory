#ifndef PLAYER_H
#define PLAYER_H

#include "entity.h"

class Player : public Entity
{
private:
    std::string m_name;
public:
    Player(const std::string &name);
    std::string GetName() override;
    std::string GetClassName()override;
};

#endif // PLAYER_H
