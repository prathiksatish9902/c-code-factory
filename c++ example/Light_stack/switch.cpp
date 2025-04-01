#include "switch.h"

Switch::Switch() : m_wireobject(nullptr) {
    std::cout<<"switch constructor called"<<std::endl;
}

Switch::Switch(const Switch& other) : m_wireobject(other.m_wireobject) {
    std::cout<<"switch copy constructor called"<<std::endl;
}

Switch::~Switch()
{
    std::cout<<"switch destructor called"<<std::endl;
}

void Switch::SetWireObject(Wire& wireobject)
{
    m_wireobject = &wireobject;
}

void Switch::SwitchON()
{
    m_wireobject->ConnectWire();
}
