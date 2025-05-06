#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
    Player();
    int x;
    int y;
    int speed;

    void move(int xa , int ya);
};

#endif // PLAYER_H
