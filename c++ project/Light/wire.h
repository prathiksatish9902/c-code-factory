#ifndef WIRE_H
#define WIRE_H
#include<iostream>
#include<vector>
#include"light.h"

class Wire
{
public:
    Wire();
    Wire(const Wire& other); // Copy constructor
    ~Wire();

    void AddLight(Light *lightobject);
    void ConnectWire();
private:
    std::vector<Light*> m_lightobjects;
};

#endif // WIRE_H
