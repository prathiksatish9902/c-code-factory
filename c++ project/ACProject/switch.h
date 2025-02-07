
#ifndef SWITCH_H
#define SWITCH_H
#include "wire.h"
#include"acvents.h"
#include"iostream"
class Switch
{
public:
    Wire *wire;
    Switch(Wire *wire);
    ~Switch();
    void turnON(ACVents &ac);
    void turnOFF(ACVents &ac);
};

#endif // SWITCH_H
