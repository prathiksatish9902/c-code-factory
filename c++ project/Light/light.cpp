#include "light.h"
#include "wire.h"

Light::Light(const std::string& name) : m_name(name) {
    std::cout << "light constructor called for " << m_name << std::endl;
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

std::string Light::GetName() const
{
    return m_name;
}
