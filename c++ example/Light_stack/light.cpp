#include "light.h"
#include "wire.h"

Light::Light(std::string name) : m_name(name), m_wireobject(nullptr) {
    std::cout << "light constructor called for " << m_name << std::endl;
}

Light::Light(const Light& other) : m_name(other.m_name), m_wireobject(other.m_wireobject) {
    std::cout << "light copy constructor called for " << m_name << std::endl;
}

Light::~Light()
{
    std::cout << "light destructor called for " << m_name << std::endl;
}

void Light::SetWireObject(Wire& wireobject)
{
    std::cout << "set wire object function called for " << m_name << std::endl;
    m_wireobject = &wireobject;
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

Light Light::operator =(const Light &light)
{
    std::cout<<"operator overloading function called"<<std::endl;
    return light;
}
