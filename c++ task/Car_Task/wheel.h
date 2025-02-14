#ifndef WHEEL_H
#define WHEEL_H
#include<iostream>

class Wheel
{
    bool wheel_status;
public:

    Wheel();
    ~Wheel();
    void Wheel_Move();
    void Wheel_Stop();
};

#endif // WHEEL_H
