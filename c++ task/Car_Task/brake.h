#ifndef BRAKE_H
#define BRAKE_H
#include<iostream>
#include"wheel.h"
class Brake
{
    bool m_brakePressed;
public:
    Wheel *w1;
    Brake();
    ~Brake();
    void Brake_Applied(Wheel *w);
    void Brake_Release(Wheel *w);
};

#endif // BRAKE_H
