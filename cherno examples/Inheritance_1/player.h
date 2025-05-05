#ifndef PLAYER_H
#define PLAYER_H
#include"entity.h"
class Player: public Entity
{
public:
    const char* name;
    Player();
    void printName();
};

#endif // PLAYER_H
