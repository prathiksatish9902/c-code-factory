#ifndef LIGHT_H
#define LIGHT_H
#include<iostream>
#include<string>

class Wire;
class Light
{
public:
    Light(std::string &name);
    ~Light();

    void SetWireObject(Wire *wireobject);
    void LightON();
    std::string GetName();

private:
    Wire *m_wireobject;
    std::string m_name;
};

#endif // LIGHT_H
