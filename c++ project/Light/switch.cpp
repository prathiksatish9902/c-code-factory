#include "switch.h"

Switch::Switch() {
    std::cout<<"switch constructor called"<<std::endl;
    m_wireobject = nullptr;
}

Switch::Switch(const Switch& other) {
    std::cout<<"switch copy constructor called"<<std::endl;
    m_wireobject = nullptr;
}

Switch::~Switch()
{
    std::cout<<"switch destructor called"<<std::endl;
}

void Switch::SetWireObject(Wire *wireobject)
{
    m_wireobject = wireobject;
}

void Switch::SwitchON()
{
    m_wireobject->ConnectWire();
}
