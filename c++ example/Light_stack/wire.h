#ifndef WIRE_H
#define WIRE_H
#include<iostream>
#include<vector>
#include"light.h"

class Wire
{
public:
    Wire();
    Wire(const Wire& other); // Added copy constructor
    ~Wire();

    void AddLight(Light* lightobject); // Keep as pointer to allow registration
    void ConnectWire();
    Wire operator =(const Wire &wire);
private:
    std::vector<Light*> m_lightobjects; // Keep as pointers to avoid ownership issues
};

#endif // WIRE_H
