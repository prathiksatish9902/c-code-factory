#ifndef ACVENTS_H
#define ACVENTS_H
#include<iostream>
// #include "switch.h"
#include "wire.h"
class ACVents
{
public:
    std::string m_state;
    ACVents();
    ~ACVents();
    void powerON();
    void powerOFF();
    void checkPower(Wire *wire);

};

#endif // ACVENTS_H
