#include <iostream>
#include "entity.h"
#include "player.h"
#include "enemy.h"
using namespace std;

int main()
{
    Player * player = new Player();
    Entity * e = player;
    Entity *e1 = new Enemy();

    Player *p = dynamic_cast<Player*> (e1);
    Player *p1 = dynamic_cast<Player*> (e);
    return 0;
}
