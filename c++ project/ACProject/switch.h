#ifndef SWITCH_H
#define SWITCH_H
#include "wire.h"
#include"iostream"
class Switch
{
public:
    Wire *wire;
    Switch(Wire *wire);
    ~Switch();
    void turnON();
    void turnOFF();
};

#endif // SWITCH_H
