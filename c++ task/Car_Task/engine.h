#ifndef ENGINE_H
#define ENGINE_H
#include<iostream>
#include"car.h"
class Engine
{
    bool m_engineStatus;
public:
    Car *c1;
    Engine();
    ~Engine();
    void Engine_On(Car *c);
    void Engine_Off(Car *c);
};

#endif // ENGINE_H
