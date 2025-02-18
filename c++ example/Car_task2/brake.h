#ifndef BRAKE_H
#define BRAKE_H
#include"wheel.h"
#include<iostream>
class Brake
{

    Wheel *m_w;
    Car *m_c;
public:
    Brake( );
    ~Brake();
    void set_brake(Wheel *w,Car *c);
    void brake_applied();
};

#endif // BRAKE_H
