#ifndef SWITCH_H
#define SWITCH_H
#include<iostream>
#include"wire.h"
class Switch
{
public:
    Switch();
    Switch(const Switch& other); // Added copy constructor
    ~Switch();

    void SetWireObject(Wire& wireobject); // Changed from pointer to reference
    void SwitchON();
    Switch operator =(const Switch &s_switch);
private:
    Wire* m_wireobject; // Keep as pointer to avoid ownership issues
};

#endif // SWITCH_H
