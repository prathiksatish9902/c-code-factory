#include "light.h"
#include "wire.h"

Light::Light( std::string& name)  {
    std::cout << "light constructor called for " << m_name << std::endl;
    m_name = name;
}

Light::~Light()
{
    std::cout << "light destructor called for " << m_name << std::endl;
}

void Light::SetWireObject(Wire *wireobject)
{
    std::cout << "set wire object function called for " << m_name << std::endl;
    m_wireobject = wireobject;
    m_wireobject->AddLight(this);
}

void Light::LightON()
{
    std::cout << "light on: " << m_name << std::endl;
}

std::string Light::GetName()
{
    return m_name;
}
