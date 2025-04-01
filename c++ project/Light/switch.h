#ifndef SWITCH_H
#define SWITCH_H
#include<iostream>
#include"wire.h"
class Switch
{
public:
    Switch();
    Switch(const Switch& other); // Copy constructor
    ~Switch();

    void SetWireObject(Wire *wireobject);
    void SwitchON();
private:
    Wire *m_wireobject;
};

#endif // SWITCH_H
