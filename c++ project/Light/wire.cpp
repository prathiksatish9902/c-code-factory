#include "wire.h"

Wire::Wire() {
    std::cout<<"wire constructor called"<<std::endl;
}

Wire::~Wire()
{
    std::cout<<"wire destructor called"<<std::endl;
}

void Wire::AddLight(Light *lightobject)
{
    m_lightobjects.push_back(lightobject);
}

void Wire::ConnectWire()
{
    for(auto* light : m_lightobjects) {
        light->LightON();
    }
}
