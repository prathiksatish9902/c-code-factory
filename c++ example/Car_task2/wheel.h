#ifndef WHEEL_H
#define WHEEL_H
#include<iostream>
#include"car.h"
class Wheel
{
    Car *m_c;
public:
    Wheel();
    ~Wheel();
    void set_wheel(Car *c);
    void wheel_rotate();
    void wheel_stop();
};

#endif // WHEEL_H
