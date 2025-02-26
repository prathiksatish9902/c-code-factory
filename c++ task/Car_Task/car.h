#ifndef CAR_H
#define CAR_H
#include<iostream>
#include"accelarator.h"
#include"brake.h"
// #include"engine.h"
// #include"wheel.h"
class Engine;
class Wheel;
class Car
{
    bool m_keystatus;
    bool m_carstatus;

public:
    Accelarator *a1;
    Brake *b1;
    Engine *e1;
    Wheel *w1;
    Car();
    ~Car();
    void Key_Insert();
    void Key_Remove();
    void Car_Move(Engine *e , Wheel *w);
    void Car_Stop( Wheel *w , Engine *e);
};

#endif // CAR_H
