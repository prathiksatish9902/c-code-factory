#ifndef ENGINE_H
#define ENGINE_H
#include<iostream>
class Engine
{

public:
    int m_cc;
    int m_piston;
    Engine(int cc,int piston);
    //Engine();
    ~Engine();
    void start();
};

#endif // ENGINE_H
