#ifndef LIGHT_H
#define LIGHT_H
#include<iostream>
#include<string>

class Wire;
class Light
{
public:
    Light(std::string name);
    Light(const Light& other); // Added copy constructor
    ~Light();

    void SetWireObject(Wire& wireobject); // Changed from pointer to reference
    void LightON();
    std::string GetName();

private:
    Wire* m_wireobject; // Keep as pointer to avoid circular dependency
    std::string m_name;
};

#endif // LIGHT_H
